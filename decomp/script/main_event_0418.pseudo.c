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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0500
fun_0500() {
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
// fun_0578
fun_0578() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    OP_JZER lab_0640
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E58(var_24)
    OP_JNZ lab_0640
    pri = 0;
    return pri;
// lab_0640
    OP_JUMP lab_0650
// lab_0650
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0650
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07B0
    pri = 0;
    return pri;
// lab_07B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07F0
// lab_07F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    OP_JNZ lab_0878
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0878
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08C0
    pri = 0;
    return pri;
// lab_08C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0920
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_0920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F0
    pri = 0;
    return pri;
// lab_0868
    OP_JUMP lab_08C0
}
// fun_0968
fun_0968() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09B0
// lab_09B0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A08
    pri = 0;
    return pri;
// lab_0A08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B0
    pri = 0;
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B18
    pri = 0;
    return pri;
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    OP_JZER lab_0C48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B70
    OP_ZERO_P_S 64
// lab_0C48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C80
    OP_CONST_S 64, 1
// lab_0C80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB8
    OP_CONST_S 72, 1
// lab_0CB8
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
// lab_0B70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B98
    OP_ZERO_P_S 72
// lab_0B98
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
    OP_JUMP lab_0D58
// lab_0D58
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    OP_JUMP lab_0EA0
// lab_0EA0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F30
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = 0;
    return pri;
// lab_0F30
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FC0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = 0;
    return pri;
// lab_0FC0
    pri = 0;
    return pri;
// lab_0FB0
    OP_JUMP lab_0FD0
// lab_0FD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EA0
    pri = 0;
    return pri;
// lab_0F20
    OP_JUMP lab_0FD0
}
// fun_1010
fun_1010() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E88(var_40)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
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
// switch_1748
        case default:
        {
// switch_1748_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1790
// lab_1790
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
            OP_JNZ lab_1838
            var_88 = 0;
            pri = fun_19F0()
// lab_1838
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1748_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1330
                case default:
                {
// switch_1330_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13A8
// lab_13A8
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_1330_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13A8
                }
                case 0x1:
                {
// switch_1330_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13A8
                }
                case 0x2:
                {
// switch_1330_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13A8
                }
                case 0x3:
                {
// switch_1330_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13A8
                }
                case 0x4:
                {
// switch_1330_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13A8
                }
                case 0x5:
                {
// switch_1330_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13A8
                }
            }
        }
        case 0x65:
        {
// switch_1748_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_14E8
                case default:
                {
// switch_14E8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1560
// lab_1560
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_14E8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1560
                }
                case 0x1:
                {
// switch_14E8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1560
                }
                case 0x2:
                {
// switch_14E8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1560
                }
                case 0x3:
                {
// switch_14E8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1560
                }
                case 0x4:
                {
// switch_14E8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1560
                }
                case 0x5:
                {
// switch_14E8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1560
                }
            }
        }
        case 0x66:
        {
// switch_1748_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16A0
                case default:
                {
// switch_16A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1718
// lab_1718
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_16A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1718
                }
                case 0x1:
                {
// switch_16A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1718
                }
                case 0x2:
                {
// switch_16A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1718
                }
                case 0x3:
                {
// switch_16A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1718
                }
                case 0x4:
                {
// switch_16A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1718
                }
                case 0x5:
                {
// switch_16A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1718
                }
            }
        }
    }
}
// fun_1850
fun_1850() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0730(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_18F8
    pri = 1;
    return pri;
// lab_18F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1940
fun_1940() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1990
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1850(var_8)
    arg_2 = pri;
// lab_1990
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1130(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    OP_JUMP lab_1A08
// lab_1A08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A48
    pri = 0;
    return pri;
// lab_1A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A08
    pri = 0;
    return pri;
}
// fun_1A88
fun_1A88() {
    var_8 = 0;
    pri = fun_19F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B38
    pri = 0;
    return pri;
}
// fun_1B48
fun_1B48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
    OP_JUMP lab_1B90
// lab_1B90
    pri = EvCameraMoveWait_()
    OP_JZER lab_1BC8
    pri = 0;
    return pri;
// lab_1BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B90
    pri = 0;
    return pri;
}
// fun_1C08
fun_1C08() {
    pri = arg_5;
    OP_JNZ lab_1C40
    var_8 = 0;
    pri = fun_0D68()
// lab_1C40
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1C90
    OP_CONST_S -8, -1
// lab_1C90
    pri = arg_1;
    switch (pri) {
// switch_3748
        case default:
        {
// switch_3748_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3BF0
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0730(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3BF0
            pri = 1;
            OP_JUMP lab_3BF8
// lab_3BF0
            pri = 0;
// lab_3BF8
            OP_JZER lab_3C48
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3EA0
// lab_3C48
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CB0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CB0
            pri = 1;
            OP_JUMP lab_3CB8
// lab_3CB0
            pri = 0;
// lab_3CB8
            OP_JZER lab_3E40
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0730(var_24, var_16)
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
            OP_JUMP lab_3EA0
// lab_3E40
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3EA0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3F10
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3F10
            var_8 = 0;
            pri = fun_0DA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3748_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x1:
        {
// switch_3748_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x2:
        {
// switch_3748_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3:
        {
// switch_3748_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x4:
        {
// switch_3748_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x5:
        {
// switch_3748_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A90(var_40)
            OP_JUMP switch_3748_case_default
        }
        case 0x6:
        {
// switch_3748_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x7:
        {
// switch_3748_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x8:
        {
// switch_3748_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x9:
        {
// switch_3748_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0xa:
        {
// switch_3748_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0xb:
        {
// switch_3748_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0xc:
        {
// switch_3748_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0xd:
        {
// switch_3748_case_0xd
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0xe:
        {
// switch_3748_case_0xe
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0xf:
        {
// switch_3748_case_0xf
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x10:
        {
// switch_3748_case_0x10
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x11:
        {
// switch_3748_case_0x11
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x12:
        {
// switch_3748_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x13:
        {
// switch_3748_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x14:
        {
// switch_3748_case_0x14
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x15:
        {
// switch_3748_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x16:
        {
// switch_3748_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x17:
        {
// switch_3748_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x18:
        {
// switch_3748_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x19:
        {
// switch_3748_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x1a:
        {
// switch_3748_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x1b:
        {
// switch_3748_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x1c:
        {
// switch_3748_case_0x1c
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x1d:
        {
// switch_3748_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x1e:
        {
// switch_3748_case_0x1e
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x1f:
        {
// switch_3748_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x20:
        {
// switch_3748_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x21:
        {
// switch_3748_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x22:
        {
// switch_3748_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x23:
        {
// switch_3748_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x24:
        {
// switch_3748_case_0x24
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x25:
        {
// switch_3748_case_0x25
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x26:
        {
// switch_3748_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x27:
        {
// switch_3748_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x28:
        {
// switch_3748_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x29:
        {
// switch_3748_case_0x29
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x2a:
        {
// switch_3748_case_0x2a
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x2b:
        {
// switch_3748_case_0x2b
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x2c:
        {
// switch_3748_case_0x2c
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x2d:
        {
// switch_3748_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x2e:
        {
// switch_3748_case_0x2e
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x2f:
        {
// switch_3748_case_0x2f
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x30:
        {
// switch_3748_case_0x30
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x31:
        {
// switch_3748_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x32:
        {
// switch_3748_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x33:
        {
// switch_3748_case_0x33
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x34:
        {
// switch_3748_case_0x34
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x35:
        {
// switch_3748_case_0x35
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x36:
        {
// switch_3748_case_0x36
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x37:
        {
// switch_3748_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x38:
        {
// switch_3748_case_0x38
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
            pri = fun_0AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3748_case_default
        }
        case 0x39:
        {
// switch_3748_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3a:
        {
// switch_3748_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3b:
        {
// switch_3748_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3c:
        {
// switch_3748_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3d:
        {
// switch_3748_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
        case 0x3e:
        {
// switch_3748_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            OP_JUMP switch_3748_case_default
        }
    }
}
// fun_3F40
fun_3F40() {
    pri = arg_4;
    OP_JNZ lab_3F78
    var_8 = 0;
    pri = fun_0D68()
// lab_3F78
    pri = arg_1;
    switch (pri) {
// switch_5350
        case default:
        {
// switch_5350_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E28(var_264)
            OP_JZER lab_5918
            pri = arg_3;
            switch (pri) {
// switch_58C0
                case default:
                {
// switch_58C0_case_default
                    OP_JUMP lab_5BD0
// lab_5BD0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5C40
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5C40
                    var_8 = 0;
                    pri = fun_0DA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_58C0_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_58C0_case_default
                }
                case 0x2:
                {
// switch_58C0_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_58C0_case_default
                }
                case 0x3:
                {
// switch_58C0_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_58C0_case_default
                }
            }
// lab_5918
            pri = arg_1;
            OP_JZER lab_5968
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5968
            pri = 0;
            OP_JUMP lab_5970
// lab_5968
            pri = 1;
// lab_5970
            OP_JZER lab_59D8
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0730(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_59D8
            pri = 1;
            OP_JUMP lab_59E0
// lab_59D8
            pri = 0;
// lab_59E0
            OP_JZER lab_5A30
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5BD0
// lab_5A30
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5A98
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5BD0
// lab_5A98
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0730(var_24, var_16)
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
// switch_5350_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1:
        {
// switch_5350_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2:
        {
// switch_5350_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3:
        {
// switch_5350_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x4:
        {
// switch_5350_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x5:
        {
// switch_5350_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A90(var_40)
            OP_JUMP switch_5350_case_default
        }
        case 0x6:
        {
// switch_5350_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x7:
        {
// switch_5350_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x8:
        {
// switch_5350_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x9:
        {
// switch_5350_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xa:
        {
// switch_5350_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xb:
        {
// switch_5350_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xc:
        {
// switch_5350_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xd:
        {
// switch_5350_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xe:
        {
// switch_5350_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0xf:
        {
// switch_5350_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x10:
        {
// switch_5350_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x11:
        {
// switch_5350_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x12:
        {
// switch_5350_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x13:
        {
// switch_5350_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x14:
        {
// switch_5350_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x15:
        {
// switch_5350_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x16:
        {
// switch_5350_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x17:
        {
// switch_5350_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x18:
        {
// switch_5350_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x19:
        {
// switch_5350_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1a:
        {
// switch_5350_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1b:
        {
// switch_5350_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1c:
        {
// switch_5350_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1d:
        {
// switch_5350_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1e:
        {
// switch_5350_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x1f:
        {
// switch_5350_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x20:
        {
// switch_5350_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x21:
        {
// switch_5350_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x22:
        {
// switch_5350_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x23:
        {
// switch_5350_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x24:
        {
// switch_5350_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x25:
        {
// switch_5350_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x26:
        {
// switch_5350_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x27:
        {
// switch_5350_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x28:
        {
// switch_5350_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x29:
        {
// switch_5350_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2a:
        {
// switch_5350_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2b:
        {
// switch_5350_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2c:
        {
// switch_5350_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2d:
        {
// switch_5350_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2e:
        {
// switch_5350_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x2f:
        {
// switch_5350_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x30:
        {
// switch_5350_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x31:
        {
// switch_5350_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x32:
        {
// switch_5350_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x33:
        {
// switch_5350_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x34:
        {
// switch_5350_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x35:
        {
// switch_5350_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x36:
        {
// switch_5350_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x37:
        {
// switch_5350_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x38:
        {
// switch_5350_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x39:
        {
// switch_5350_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3a:
        {
// switch_5350_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3b:
        {
// switch_5350_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3c:
        {
// switch_5350_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3d:
        {
// switch_5350_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
        case 0x3e:
        {
// switch_5350_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F0(var_24, var_16, var_8)
            OP_JUMP switch_5350_case_default
        }
    }
}
// fun_5C70
fun_5C70() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5CF8
// lab_5CF8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5E78
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5E68
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5DB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5DB8
    pri = 0;
    OP_JUMP lab_5DC0
// lab_5E78
    pri = 0;
    return pri;
// lab_5E68
    OP_JUMP lab_5CF0
// lab_5CF0
    OP_INC_P_S -936
// lab_5DB8
    pri = 1;
// lab_5DC0
    OP_JZER lab_5E38
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5E30
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5E38
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5E30
}
// fun_5E98
fun_5E98() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5F30
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_10D0()
// lab_5F30
    pri = arg_4;
    OP_JZER lab_5F68
    var_8 = 1;
    var_16 = 8;
    pri = fun_10F8(var_8)
// lab_5F68
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5FC0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5FC0
    pri = 0;
    OP_JUMP lab_5FC8
// lab_5FC0
    pri = 1;
// lab_5FC8
    OP_JZER lab_6090
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6090
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6068
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1010(var_32, var_24)
    OP_JUMP lab_6090
// lab_6090
    pri = arg_2;
    OP_JZER lab_6168
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6138
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DE8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04C8(var_40)
    OP_JUMP lab_6168
// lab_6168
    pri = arg_3;
    OP_JZER lab_61A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1098(var_8)
// lab_61A0
    pri = 0;
    return pri;
// lab_6138
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DE8(var_16, var_8)
// lab_6068
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1010(var_16, var_8)
}
// fun_61B0
fun_61B0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5C70(var_24)
    pri = 0;
    return pri;
}
// fun_6218
fun_6218() {
    pri = g_mode;
    switch (pri) {
// switch_62D8
        case default:
        {
// switch_62D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6320
// lab_6320
            pri = 0;
            return pri;
        }
        case 0xb865f5221ae2815b:
        {
// switch_62D8_case_0xb865f5221ae2815b
            var_8 = 0;
            pri = fun_6E88()
            OP_JUMP lab_6320
        }
        case 0x0:
        {
// switch_62D8_case_0x0
            var_8 = 0;
            pri = fun_6330()
            OP_JUMP lab_6320
        }
        case 0x5474531e68984db7:
        {
// switch_62D8_case_0x5474531e68984db7
            var_8 = 0;
            pri = fun_6F78()
            OP_JUMP lab_6320
        }
    }
}
// fun_6330
fun_6330() {
    pri = 0;
    return pri;
}
// fun_6348
fun_6348() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5E98(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_63A0
fun_63A0() {
    pri = 0;
    return pri;
}
// fun_63B8
fun_63B8() {
    pri = 0;
    return pri;
}
// fun_63D0
fun_63D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4630798169346041446;
    var_40 = 0;
    OP_PUSH5_C 4665188232244735508, 4657033528335474360, 4674320976485915034, 4665401361578663608, 4657006304427570627
    var_48 = 4674340399358819697;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1B78()
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -4598963349480066253, 3275595920700649692
    var_96 = 40;
    pri = fun_0578(var_88, var_80, var_72, var_64, var_56)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 4665422378743428547;
    var_144 = 31215;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 8802641224559852288;
    var_168 = 48;
    pri = fun_0438(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH4_C 4665225527679149670, 4674309637772253594, 4607182418800017408, 8802641224559852288
    var_232 = 72;
    pri = fun_0500(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_05C8(var_240)
    var_256 = 3275595920700649692;
    var_264 = 8;
    pri = fun_05C8(var_256)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C 281441695297853979, 3275595920700649692
    var_312 = 56;
    pri = fun_1940(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1A88(var_320)
    var_336 = 0;
    pri = fun_1B48()
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 8;
    var_392 = 3275595920700649692;
    var_400 = 56;
    pri = fun_1C08(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C 281442794809482190, 3275595920700649692
    var_448 = 56;
    pri = fun_1940(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1A88(var_456)
    var_472 = 0;
    pri = fun_1B48()
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 281443894321110401, 3275595920700649692
    var_520 = 56;
    pri = fun_1940(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1A88(var_528)
    var_544 = 0;
    pri = fun_1B48()
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 8;
    var_584 = 3275595920700649692;
    var_592 = 40;
    pri = fun_3F40(var_584, var_576, var_568, var_560, var_552)
    var_600 = 3275595920700649692;
    var_608 = 8;
    pri = fun_0768(var_600)
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 281444993832738612, 3275595920700649692
    var_656 = 56;
    pri = fun_1940(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_1A88(var_664)
    var_680 = 0;
    pri = fun_1B48()
    var_688 = 1;
    var_696 = 1;
    var_704 = -1;
    var_712 = -1;
    var_720 = 0;
    var_728 = 23;
    var_736 = 3275595920700649692;
    var_744 = 56;
    pri = fun_1C08(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C 281446093344366823, 3275595920700649692
    var_792 = 56;
    pri = fun_1940(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1A88(var_800)
    var_816 = 0;
    pri = fun_1B48()
    var_824 = 23224;
    var_832 = 3275595920700649692;
    var_840 = 16;
    pri = fun_0968(var_832, var_824)
    var_848 = 1;
    var_856 = 3;
    var_864 = 0;
    var_872 = 23;
    var_880 = 3275595920700649692;
    var_888 = 40;
    pri = fun_3F40(var_880, var_872, var_864, var_856, var_848)
    var_896 = 3275595920700649692;
    var_904 = 8;
    pri = fun_0768(var_896)
    var_912 = 1;
    var_920 = 0;
    var_928 = 30;
    pri = float(var_928)
    var_936 = pri;
    var_944 = 0;
    pri = float(var_944)
    var_952 = pri;
    var_960 = 0;
    OP_PUSH4_C 4664701005657119130, 4674333112345506611, 4607182418800017408, 3275595920700649692
    var_968 = 72;
    pri = fun_0500(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 40;
    var_984 = 8;
    pri = fun_0060(var_976)
    var_992 = 1;
    var_1000 = 0;
    var_1008 = 23176;
    var_1016 = 8;
    var_1024 = 32;
    pri = fun_02E0(var_1016, var_1008, var_1000, var_992)
    var_1032 = 0;
    pri = fun_0350()
    var_1040 = 0;
    var_1048 = 3275595920700649692;
    var_1056 = 16;
    pri = fun_0490(var_1048, var_1040)
    var_1064 = 3;
    var_1072 = 1;
    pri = EvCameraEnd(var_1072, var_1064)
    var_1080 = 1;
    var_1088 = 1;
    var_1096 = 180;
    pri = float(var_1096)
    var_1104 = pri;
    OP_PUSH3_C 4665212157617755914, 4674332109041146266, 8802641224559852288
    var_1112 = 48;
    pri = fun_0438(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1120 = 30;
    var_1128 = 8;
    pri = fun_0060(var_1120)
    var_1136 = 3275595920700649692;
    var_1144 = 8;
    pri = fun_05C8(var_1136)
    pri = 0;
    return pri;
}
// fun_6D18
fun_6D18() {
    pri = 0;
    return pri;
}
// fun_6D30
fun_6D30() {
    var_8 = 3275595920700649692;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 4971798268198637023;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 420;
    var_48 = 8;
    pri = fun_61B0(var_40)
    var_56 = -2664763386676178833;
    pri = VanishFlagReset(var_56)
    var_64 = 5238487797000439776;
    pri = VanishFlagReset(var_64)
    var_72 = 7457989319736929833;
    pri = VanishFlagReset(var_72)
    pri = 0;
    return pri;
}
// fun_6E30
fun_6E30() {
    var_8 = 23384;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_6E88
fun_6E88() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6348()
    var_16 = 0;
    pri = fun_63A0()
    var_24 = 0;
    pri = fun_63B8()
    var_32 = 0;
    pri = fun_63D0()
    var_40 = 0;
    pri = fun_6D18()
    var_48 = 0;
    pri = fun_6D30()
    var_56 = 0;
    pri = fun_6E30()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6F78
fun_6F78() {
    var_8 = 0;
    pri = fun_63A0()
    var_16 = 0;
    pri = fun_6D30()
    pri = 0;
    return pri;
}
