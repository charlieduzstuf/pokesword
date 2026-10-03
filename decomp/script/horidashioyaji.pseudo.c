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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01E8
// lab_01E8
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02E8
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0268
    pri = 0;
    return pri;
// lab_02E8
    pri = 0;
    return pri;
// lab_0268
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
    OP_JUMP lab_01E0
// lab_01E0
    OP_INC_P_S -8
}
// fun_0300
fun_0300() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
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
// fun_03D0
fun_03D0() {
    OP_JUMP lab_03E8
// lab_03E8
    pri = FadeWait_()
    OP_JZER lab_0420
    pri = 0;
    return pri;
// lab_0420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03E8
    pri = 0;
    return pri;
}
// fun_0460
fun_0460() {
    pri = ReportStart_()
    pri = 0;
    return pri;
}
// fun_0490
fun_0490() {
    OP_JUMP lab_04A8
// lab_04A8
    pri = ReportWait_()
    OP_JZER lab_04E0
    OP_JUMP lab_04F0
// lab_04E0
    OP_JUMP lab_04A8
// lab_04F0
    pri = 0;
    return pri;
}
// fun_0500
fun_0500() {
    OP_ZERO_P_S -8
    OP_CONST_S -16, 1800
    OP_JUMP lab_0548
// lab_0548
    pri = IsRunningAutoSave()
    OP_JNZ lab_0588
    pri = 0;
    return pri;
// lab_0588
    OP_INC_P_S -8
    OP_LOAD_S_BOTH -8, -16
    OP_JSLESS lab_05D0
    pri = 0;
    return pri;
// lab_05D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0548
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F88(var_8)
    OP_JZER lab_06E0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0FB8(var_24)
    OP_JNZ lab_06E0
    pri = 0;
    return pri;
// lab_06E0
    OP_JUMP lab_06F0
// lab_06F0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0750
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0750
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06F0
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0888
    pri = 0;
    return pri;
// lab_0888
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08C8
// lab_08C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F88(var_8)
    OP_JNZ lab_0950
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0940
    pri = 0;
    return pri;
// lab_0950
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0998
    pri = 0;
    return pri;
// lab_0998
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A40(var_8)
    pri = 0;
    return pri;
// lab_09F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08C8
    pri = 0;
    return pri;
// lab_0940
    OP_JUMP lab_0998
}
// fun_0A40
fun_0A40() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AC8
    pri = 0;
    return pri;
// lab_0AC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F88(var_8)
    OP_JZER lab_0BF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B20
    OP_ZERO_P_S 64
// lab_0BF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C30
    OP_CONST_S 64, 1
// lab_0C30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C68
    OP_CONST_S 72, 1
// lab_0C68
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
// lab_0B20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B48
    OP_ZERO_P_S 72
// lab_0B48
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
    OP_JUMP lab_0D08
// lab_0D08
    pri = 0;
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0DD8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0E50(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0F30
fun_0F30() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E18(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E90(var_24)
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1018
fun_1018() {
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
// switch_1630
        case default:
        {
// switch_1630_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1678
// lab_1678
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
            OP_JNZ lab_1720
            var_88 = 0;
            pri = fun_1A70()
// lab_1720
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1630_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1218
                case default:
                {
// switch_1218_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1290
// lab_1290
                    OP_JUMP lab_1678
                }
                case 0x0:
                {
// switch_1218_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1290
                }
                case 0x1:
                {
// switch_1218_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1290
                }
                case 0x2:
                {
// switch_1218_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1290
                }
                case 0x3:
                {
// switch_1218_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1290
                }
                case 0x4:
                {
// switch_1218_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1290
                }
                case 0x5:
                {
// switch_1218_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1290
                }
            }
        }
        case 0x65:
        {
// switch_1630_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_13D0
                case default:
                {
// switch_13D0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1448
// lab_1448
                    OP_JUMP lab_1678
                }
                case 0x0:
                {
// switch_13D0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1448
                }
                case 0x1:
                {
// switch_13D0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1448
                }
                case 0x2:
                {
// switch_13D0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1448
                }
                case 0x3:
                {
// switch_13D0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1448
                }
                case 0x4:
                {
// switch_13D0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1448
                }
                case 0x5:
                {
// switch_13D0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1448
                }
            }
        }
        case 0x66:
        {
// switch_1630_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1588
                case default:
                {
// switch_1588_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1600
// lab_1600
                    OP_JUMP lab_1678
                }
                case 0x0:
                {
// switch_1588_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1600
                }
                case 0x1:
                {
// switch_1588_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1600
                }
                case 0x2:
                {
// switch_1588_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1600
                }
                case 0x3:
                {
// switch_1588_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1600
                }
                case 0x4:
                {
// switch_1588_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1600
                }
                case 0x5:
                {
// switch_1588_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1600
                }
            }
        }
    }
}
// fun_1738
fun_1738() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1018(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17A0
fun_17A0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0808(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1848
    pri = 1;
    return pri;
// lab_1848
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1890
fun_1890() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_18E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17A0(var_8)
    arg_2 = pri;
// lab_18E0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1018(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 16;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19C0
fun_19C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1738(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 16;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_19C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    OP_JUMP lab_1A88
// lab_1A88
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AC8
    pri = 0;
    return pri;
// lab_1AC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A88
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_8 = 0;
    pri = fun_1A70()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1BB8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1BB8
    pri = 0;
    return pri;
}
// fun_1BC8
fun_1BC8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1C28
// lab_1C28
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C68
    OP_JUMP lab_1C98
// lab_1C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C28
// lab_1C98
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CE0
fun_1CE0() {
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
// fun_1D50
fun_1D50() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1DC8()
    return pri;
}
// fun_1DC8
fun_1DC8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1E08
fun_1E08() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    OP_JUMP lab_1E58
// lab_1E58
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1EA0
    OP_JUMP lab_1ED0
    OP_JUMP lab_1EC0
// lab_1EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1ED0
    pri = 0;
    return pri;
// lab_1EC0
    OP_JUMP lab_1E58
}
// fun_1EE0
fun_1EE0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1F10
fun_1F10() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F60
fun_1F60() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2118()
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = -1;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = arg_5;
    var_120 = arg_4;
    pri = StartBlur_(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2118()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2118
fun_2118() {
    OP_JUMP lab_2130
// lab_2130
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2198
// lab_2188
    pri = 0;
    return pri;
// lab_2198
    OP_JUMP lab_2130
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2248(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_2210
fun_2210() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2280
fun_2280() {
    var_8 = arg_0;
    pri = ConsumeWatt_(var_8)
    return pri;
}
// fun_22B0
fun_22B0() {
    pri = GetWatt_()
    return pri;
}
// fun_22D8
fun_22D8() {
    pri = arg_5;
    OP_JNZ lab_2310
    var_8 = 0;
    pri = fun_0D18()
// lab_2310
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2360
    OP_CONST_S -8, -1
// lab_2360
    pri = arg_1;
    switch (pri) {
// switch_3E18
        case default:
        {
// switch_3E18_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_42C0
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0808(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_42C0
            pri = 1;
            OP_JUMP lab_42C8
// lab_42C0
            pri = 0;
// lab_42C8
            OP_JZER lab_4318
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_4570
// lab_4318
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4380
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4380
            pri = 1;
            OP_JUMP lab_4388
// lab_4380
            pri = 0;
// lab_4388
            OP_JZER lab_4510
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0808(var_24, var_16)
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
            OP_JUMP lab_4570
// lab_4510
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
            pri = fun_01B8(var_16, var_8, var_0)
// lab_4570
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_45E0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_45E0
            var_8 = 0;
            pri = fun_0D58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3E18_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1:
        {
// switch_3E18_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2:
        {
// switch_3E18_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3:
        {
// switch_3E18_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x4:
        {
// switch_3E18_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x5:
        {
// switch_3E18_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A40(var_40)
            OP_JUMP switch_3E18_case_default
        }
        case 0x6:
        {
// switch_3E18_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x7:
        {
// switch_3E18_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x8:
        {
// switch_3E18_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x9:
        {
// switch_3E18_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0xa:
        {
// switch_3E18_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0xb:
        {
// switch_3E18_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0xc:
        {
// switch_3E18_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0xd:
        {
// switch_3E18_case_0xd
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0xe:
        {
// switch_3E18_case_0xe
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0xf:
        {
// switch_3E18_case_0xf
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x10:
        {
// switch_3E18_case_0x10
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x11:
        {
// switch_3E18_case_0x11
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x12:
        {
// switch_3E18_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x13:
        {
// switch_3E18_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x14:
        {
// switch_3E18_case_0x14
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x15:
        {
// switch_3E18_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x16:
        {
// switch_3E18_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x17:
        {
// switch_3E18_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x18:
        {
// switch_3E18_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x19:
        {
// switch_3E18_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1a:
        {
// switch_3E18_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1b:
        {
// switch_3E18_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1c:
        {
// switch_3E18_case_0x1c
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1d:
        {
// switch_3E18_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1e:
        {
// switch_3E18_case_0x1e
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x1f:
        {
// switch_3E18_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x20:
        {
// switch_3E18_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x21:
        {
// switch_3E18_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x22:
        {
// switch_3E18_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x23:
        {
// switch_3E18_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x24:
        {
// switch_3E18_case_0x24
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x25:
        {
// switch_3E18_case_0x25
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x26:
        {
// switch_3E18_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x27:
        {
// switch_3E18_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x28:
        {
// switch_3E18_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x29:
        {
// switch_3E18_case_0x29
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2a:
        {
// switch_3E18_case_0x2a
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2b:
        {
// switch_3E18_case_0x2b
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2c:
        {
// switch_3E18_case_0x2c
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2d:
        {
// switch_3E18_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2e:
        {
// switch_3E18_case_0x2e
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x2f:
        {
// switch_3E18_case_0x2f
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x30:
        {
// switch_3E18_case_0x30
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x31:
        {
// switch_3E18_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x32:
        {
// switch_3E18_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x33:
        {
// switch_3E18_case_0x33
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x34:
        {
// switch_3E18_case_0x34
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x35:
        {
// switch_3E18_case_0x35
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x36:
        {
// switch_3E18_case_0x36
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x37:
        {
// switch_3E18_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x38:
        {
// switch_3E18_case_0x38
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
            pri = fun_0A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E18_case_default
        }
        case 0x39:
        {
// switch_3E18_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3a:
        {
// switch_3E18_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3b:
        {
// switch_3E18_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3c:
        {
// switch_3E18_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3d:
        {
// switch_3E18_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
        case 0x3e:
        {
// switch_3E18_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C8(var_24, var_16, var_8)
            OP_JUMP switch_3E18_case_default
        }
    }
}
// fun_4610
fun_4610() {
    pri = arg_4;
    OP_JNZ lab_4648
    var_8 = 0;
    pri = fun_0D18()
// lab_4648
    pri = arg_1;
    switch (pri) {
// switch_5A20
        case default:
        {
// switch_5A20_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F88(var_264)
            OP_JZER lab_5FE8
            pri = arg_3;
            switch (pri) {
// switch_5F90
                case default:
                {
// switch_5F90_case_default
                    OP_JUMP lab_62A0
// lab_62A0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6310
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6310
                    var_8 = 0;
                    pri = fun_0D58()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5F90_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_5F90_case_default
                }
                case 0x2:
                {
// switch_5F90_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_5F90_case_default
                }
                case 0x3:
                {
// switch_5F90_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_5F90_case_default
                }
            }
// lab_5FE8
            pri = arg_1;
            OP_JZER lab_6038
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6038
            pri = 0;
            OP_JUMP lab_6040
// lab_6038
            pri = 1;
// lab_6040
            OP_JZER lab_60A8
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0808(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_60A8
            pri = 1;
            OP_JUMP lab_60B0
// lab_60A8
            pri = 0;
// lab_60B0
            OP_JZER lab_6100
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_62A0
// lab_6100
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6168
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_62A0
// lab_6168
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0808(var_24, var_16)
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
// switch_5A20_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1:
        {
// switch_5A20_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2:
        {
// switch_5A20_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3:
        {
// switch_5A20_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x4:
        {
// switch_5A20_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x5:
        {
// switch_5A20_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A40(var_40)
            OP_JUMP switch_5A20_case_default
        }
        case 0x6:
        {
// switch_5A20_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x7:
        {
// switch_5A20_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x8:
        {
// switch_5A20_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x9:
        {
// switch_5A20_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xa:
        {
// switch_5A20_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xb:
        {
// switch_5A20_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xc:
        {
// switch_5A20_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xd:
        {
// switch_5A20_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xe:
        {
// switch_5A20_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xf:
        {
// switch_5A20_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x10:
        {
// switch_5A20_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x11:
        {
// switch_5A20_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x12:
        {
// switch_5A20_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x13:
        {
// switch_5A20_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x14:
        {
// switch_5A20_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x15:
        {
// switch_5A20_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x16:
        {
// switch_5A20_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x17:
        {
// switch_5A20_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x18:
        {
// switch_5A20_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x19:
        {
// switch_5A20_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1a:
        {
// switch_5A20_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1b:
        {
// switch_5A20_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1c:
        {
// switch_5A20_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1d:
        {
// switch_5A20_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1e:
        {
// switch_5A20_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1f:
        {
// switch_5A20_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x20:
        {
// switch_5A20_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x21:
        {
// switch_5A20_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x22:
        {
// switch_5A20_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x23:
        {
// switch_5A20_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x24:
        {
// switch_5A20_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x25:
        {
// switch_5A20_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x26:
        {
// switch_5A20_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x27:
        {
// switch_5A20_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x28:
        {
// switch_5A20_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x29:
        {
// switch_5A20_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2a:
        {
// switch_5A20_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2b:
        {
// switch_5A20_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2c:
        {
// switch_5A20_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2d:
        {
// switch_5A20_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2e:
        {
// switch_5A20_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2f:
        {
// switch_5A20_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x30:
        {
// switch_5A20_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x31:
        {
// switch_5A20_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x32:
        {
// switch_5A20_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x33:
        {
// switch_5A20_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x34:
        {
// switch_5A20_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x35:
        {
// switch_5A20_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x36:
        {
// switch_5A20_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x37:
        {
// switch_5A20_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x38:
        {
// switch_5A20_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x39:
        {
// switch_5A20_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3a:
        {
// switch_5A20_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3b:
        {
// switch_5A20_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3c:
        {
// switch_5A20_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3d:
        {
// switch_5A20_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3e:
        {
// switch_5A20_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C8(var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
    }
}
// fun_6340
fun_6340() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6440
        case default:
        {
// switch_6440_case_default
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
// switch_6440_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6440_case_default
        }
        case 0x1:
        {
// switch_6440_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6440_case_default
        }
        case 0x2:
        {
// switch_6440_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6440_case_default
        }
        case 0x3:
        {
// switch_6440_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6440_case_default
        }
    }
}
// fun_6500
fun_6500() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6550
// lab_6550
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22256;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_65C8
    OP_JUMP lab_65F8
// lab_65C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_6550
// lab_65F8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6680
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4610(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0FE8(var_56)
// lab_6680
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_66E8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D98(var_24, var_16)
// lab_66E8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D98(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_67A8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0840(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0618(var_88, var_80, var_72, var_64, var_56)
// lab_67A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_67E8
    pri = 0;
    return pri;
// lab_67E8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6930
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22376;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0790(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_68F8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6930
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0668(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0668(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0840(var_40)
    pri = 0;
    return pri;
// lab_68F8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D98(var_16, var_8)
}
// fun_69B8
fun_69B8() {
    var_8 = 22512;
    var_16 = 8;
    pri = fun_1E08(var_8)
    var_24 = 0;
    pri = fun_1E40()
    pri = arg_0;
    OP_JZER lab_6AF8
    var_32 = 3;
    var_40 = 1;
    var_48 = 8343654448023770297;
    var_56 = 24;
    pri = fun_19C0(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 8;
    pri = fun_1B08(var_64)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 48;
    pri = fun_1D50(var_120, var_112, var_104, var_96, var_88, var_80)
    OP_JZER lab_6AD0
    OP_JUMP lab_6AF8
// lab_6AF8
    OP_LCTRL 5
    OP_SCTRL 4
    var_8 = 3;
    var_16 = 1;
    var_24 = 8343651149488885664;
    var_32 = 24;
    pri = fun_19C0(var_24, var_16, var_8)
    var_40 = 0;
    pri = fun_0500()
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_0490()
    var_64 = 22688;
    pri = SoundPostEvent(var_64)
    var_72 = 0;
    var_80 = 8;
    pri = fun_1F10(var_72)
    var_88 = 3;
    var_96 = 1;
    var_104 = 8343652249000513875;
    var_112 = 24;
    pri = fun_19C0(var_104, var_96, var_88)
    pri = arg_1;
    OP_JZER lab_6C58
    var_120 = 30;
    var_128 = 8;
    pri = fun_0060(var_120)
    OP_JUMP lab_6C78
// lab_6C58
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B08(var_8)
// lab_6C78
    var_8 = 0;
    pri = fun_1BC8()
    var_16 = 0;
    pri = fun_1EE0()
    pri = 0;
    return pri;
// lab_6AD0
    var_8 = 0;
    pri = fun_1BC8()
    pri = 0;
    return pri;
}
// fun_6CB8
fun_6CB8() {
    pri = g_mode;
    switch (pri) {
// switch_6D78
        case default:
        {
// switch_6D78_case_default
            pri = CommandNOP()
            OP_JUMP lab_6DC0
// lab_6DC0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6D78_case_0x0
            var_8 = 0;
            pri = fun_6DD0()
            OP_JUMP lab_6DC0
        }
        case 0x274d034359c0c13a:
        {
// switch_6D78_case_0x274d034359c0c13a
            var_8 = 0;
            pri = fun_6DE8()
            OP_JUMP lab_6DC0
        }
        case 0x4de90b4e0c5642f4:
        {
// switch_6D78_case_0x4de90b4e0c5642f4
            var_8 = 0;
            pri = fun_6EA0()
            OP_JUMP lab_6DC0
        }
    }
}
// fun_6DD0
fun_6DD0() {
    pri = 0;
    return pri;
}
// fun_6DE8
fun_6DE8() {
    pri = IsPlayerInsideWorld()
    OP_JNZ lab_6E48
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
// lab_6E48
    OP_PUSH4_C -7808827045171004155, -7808828144682632366, -7808833642240773421, -7808834741752401632
    var_8 = 0;
    var_16 = 40;
    pri = fun_6F58(var_8, var_0, var_-8, var_-16, var_-24)
    pri = 0;
    return pri;
}
// fun_6EA0
fun_6EA0() {
    pri = IsPlayerInsideWorld()
    OP_JNZ lab_6F00
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
// lab_6F00
    OP_PUSH4_C -1896234172237872878, -1896233072726244667, -1896240769307642144, -1896239669796013933
    var_8 = 1;
    var_16 = 40;
    pri = fun_6F58(var_8, var_0, var_-8, var_-16, var_-24)
    pri = 0;
    return pri;
}
// fun_6F58
fun_6F58() {
    OP_CONST_S -8, 500
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_24 = 838415845702232698;
    pri = WorkGet(var_24)
    OP_JNZ lab_7010
    var_32 = 0;
    pri = fun_8F18()
    pri = 0;
    return pri;
// lab_7010
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = var_16;
    var_56 = 48;
    pri = fun_6340(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 8;
    pri = fun_2248(var_64)
    var_80 = 1;
    var_88 = 8;
    pri = fun_21B8(var_80)
    var_96 = 0;
    var_104 = 0;
    var_112 = var_8;
    var_120 = 1;
    pri = WordSetNumber(var_120, var_112, var_104, var_96)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    var_168 = arg_1;
    var_176 = var_16;
    var_184 = 56;
    pri = fun_1890(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1B08(var_192)
    var_208 = 0;
    var_216 = -1658190945497113471;
    var_224 = 0;
    var_232 = 24;
    pri = fun_1BF8(var_224, var_216, var_208)
    var_240 = 0;
    var_248 = -1658194244031998104;
    var_256 = 1;
    var_264 = 24;
    pri = fun_1BF8(var_256, var_248, var_240)
    pri = arg_0;
    OP_JZER lab_7250
    var_272 = 364874149261162741;
    pri = WorkGet(var_272)
    alt = 1;
    OP_JSLESS lab_7240
    var_280 = 0;
    var_288 = -1658193144520369893;
    var_296 = 2;
    var_304 = 24;
    pri = fun_1BF8(var_296, var_288, var_280)
// lab_7250
    var_8 = -7106351468198454021;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_72C8
    var_16 = 0;
    var_24 = -1658193144520369893;
    var_32 = 2;
    var_40 = 24;
    pri = fun_1BF8(var_32, var_24, var_16)
// lab_72C8
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 32;
    pri = fun_1CE0(var_40, var_32, var_24, var_16)
    var_24 = pri;
    pri = var_24;
    switch (pri) {
// switch_8940
        case default:
        {
// switch_8940_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8940_case_0x0
            var_8 = 0;
            pri = fun_22B0()
            OP_LOAD_P_S_ALT -8
            OP_JSGEQ lab_74C0
            var_16 = 0;
            pri = fun_1BC8()
            var_24 = 0;
            var_32 = 3;
            var_40 = 0;
            var_48 = 100;
            var_56 = -1;
            var_64 = 3143951761500709984;
            var_72 = var_16;
            var_80 = 56;
            pri = fun_1890(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 1;
            var_96 = 8;
            pri = fun_1B08(var_88)
            var_104 = 0;
            pri = fun_1BC8()
            var_112 = 0;
            pri = fun_2210()
            var_120 = -1;
            var_128 = var_16;
            var_136 = 16;
            pri = fun_0D98(var_128, var_120)
            var_144 = -1;
            var_152 = 8802641224559852288;
            var_160 = 16;
            pri = fun_0D98(var_152, var_144)
            var_168 = 0;
            var_176 = 0;
            var_184 = 0;
            var_192 = var_16;
            var_200 = 32;
            pri = fun_6500(var_192, var_184, var_176, var_168)
            pri = 0;
            return pri;
// lab_74C0
            var_8 = var_8;
            var_16 = 8;
            pri = fun_2280(var_8)
            var_24 = 1;
            var_32 = 8;
            pri = fun_2248(var_24)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            var_80 = arg_2;
            var_88 = var_16;
            var_96 = 56;
            pri = fun_1890(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 1;
            var_112 = 8;
            pri = fun_1B08(var_104)
            var_120 = 0;
            pri = fun_1BC8()
            var_128 = 0;
            pri = fun_2210()
            var_136 = 0;
            var_144 = 0;
            var_152 = 16;
            pri = fun_69B8(var_144, var_136)
            var_160 = 1;
            var_168 = 0;
            var_176 = 25456;
            var_184 = 30;
            var_192 = 32;
            pri = fun_0360(var_184, var_176, var_168, var_160)
            var_200 = 0;
            pri = fun_03D0()
            var_208 = 0;
            var_216 = 0;
            var_224 = 0;
            var_232 = var_16;
            var_240 = 32;
            pri = fun_6500(var_232, var_224, var_216, var_208)
            var_248 = 15;
            var_256 = 8;
            pri = fun_0060(var_248)
            OP_ZERO_P_S -32
            OP_ZERO_P_S -40
            OP_ZERO_P_S -48
            OP_ZERO_P_S -56
        }
        case 0x1:
        {
// switch_8940_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = arg_3;
            var_56 = var_16;
            var_64 = 56;
            pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1B08(var_72)
            var_88 = 0;
            pri = fun_1BC8()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = var_16;
            var_128 = 32;
            pri = fun_6500(var_120, var_112, var_104, var_96)
            var_136 = 0;
            pri = fun_2210()
            OP_JUMP switch_8940_case_default
        }
        case 0x2:
        {
// switch_8940_case_0x2
            pri = arg_0;
            OP_JZER lab_87F8
            var_8 = 0;
            var_16 = 0;
            var_24 = 364874149261162741;
            pri = WorkGet(var_24)
            var_32 = pri;
            var_40 = 0;
            pri = WordSetNumber(var_40, var_32, var_24, var_16)
            OP_JUMP lab_8858
// lab_87F8
            var_8 = 0;
            var_16 = 0;
            var_24 = -7106351468198454021;
            pri = WorkGet(var_24)
            var_32 = pri;
            var_40 = 0;
            pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8858
            var_8 = 0;
            pri = fun_2210()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = arg_4;
            var_64 = var_16;
            var_72 = 56;
            pri = fun_1890(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1B08(var_80)
            var_96 = 0;
            pri = fun_1BC8()
            var_104 = 0;
            var_112 = 0;
            var_120 = 0;
            var_128 = var_16;
            var_136 = 32;
            pri = fun_6500(var_128, var_120, var_112, var_104)
            OP_JUMP switch_8940_case_default
        }
    }
// lab_7240
    OP_JUMP lab_72C8
}
// lab_76B0
var_8 = 0;
pri = fun_1BC8()
pri = var_48;
OP_JZER lab_7728
var_16 = 0;
var_24 = arg_0;
var_32 = 16;
pri = fun_8B80(var_24, var_16)
var_32 = pri;
OP_ZERO_P_S -48
OP_JUMP lab_7758
// lab_7728
var_8 = var_40;
var_16 = arg_0;
var_24 = 16;
pri = fun_8B80(var_16, var_8)
var_32 = pri;
// lab_7758
pri = var_32;
OP_JNZ lab_7C18
var_8 = 25504;
pri = SoundPostEvent(var_8)
var_16 = 20;
var_24 = 8;
pri = fun_0060(var_16)
var_32 = 0;
var_40 = 100;
var_48 = 16;
pri = fun_0138(var_40, var_32)
alt = 5;
OP_JSGEQ lab_7C08
var_56 = 25656;
var_64 = 8;
var_72 = 16;
pri = fun_0300(var_64, var_56)
var_80 = 4;
var_88 = 8;
pri = fun_0060(var_80)
var_96 = 0;
pri = fun_03D0()
var_104 = 0;
var_112 = 3;
var_120 = 0;
var_128 = 100;
var_136 = -1;
var_144 = 3143958358570479250;
var_152 = var_16;
var_160 = 56;
pri = fun_1890(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
var_168 = 1;
var_176 = 8;
pri = fun_1B08(var_168)
var_184 = 0;
pri = fun_1BC8()
var_192 = 20;
var_200 = 8;
pri = fun_0060(var_192)
var_208 = 25704;
pri = SoundPostEvent(var_208)
var_216 = 0;
var_224 = 0;
var_232 = 3;
var_240 = 10;
OP_PUSH2_C 4607182418800017408, 4605380978949069210
var_248 = 48;
pri = fun_1FB0(var_240, var_232, var_224, var_216, var_208, var_200)
var_256 = 3;
var_264 = 6;
var_272 = var_16;
var_280 = 24;
pri = fun_0EC8(var_272, var_264, var_256)
var_288 = 1;
var_296 = 1;
var_304 = -1;
var_312 = -1;
var_320 = 0;
var_328 = 8;
var_336 = var_16;
var_344 = 56;
pri = fun_22D8(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
var_352 = 0;
pri = fun_2118()
var_360 = 3;
var_368 = 8;
var_376 = 16;
pri = fun_2080(var_368, var_360)
var_384 = 15;
var_392 = 8;
pri = fun_0060(var_384)
var_400 = 0;
var_408 = 3;
var_416 = 0;
var_424 = 100;
var_432 = -1;
var_440 = 3143955060035594617;
var_448 = var_16;
var_456 = 56;
pri = fun_1890(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
var_464 = 1;
var_472 = 8;
pri = fun_1B08(var_464)
var_480 = 0;
pri = fun_1BC8()
var_488 = 1;
var_496 = 0;
var_504 = 25456;
var_512 = 30;
var_520 = 32;
pri = fun_0360(var_512, var_504, var_496, var_488)
var_528 = 0;
pri = fun_03D0()
var_536 = 18;
var_544 = 8;
pri = fun_0060(var_536)
var_552 = var_16;
var_560 = 8;
pri = fun_0F30(var_552)
var_568 = 1;
var_576 = 3;
var_584 = 0;
var_592 = 8;
var_600 = var_16;
var_608 = 40;
pri = fun_4610(var_600, var_592, var_584, var_576, var_568)
var_616 = var_16;
var_624 = 8;
pri = fun_0840(var_616)
OP_CONST_S -48, 1
OP_JUMP lab_8210
OP_JUMP lab_7C18
// lab_7C18
pri = var_32;
OP_EQ_P_C_PRI 796
OP_JZER lab_8018
var_8 = 25896;
pri = SoundPostEvent(var_8)
var_16 = 80;
var_24 = 8;
pri = fun_0060(var_16)
var_32 = 25656;
var_40 = 30;
var_48 = 16;
pri = fun_0300(var_40, var_32)
var_56 = 4;
var_64 = 8;
pri = fun_0060(var_56)
var_72 = 0;
pri = fun_03D0()
var_80 = 20;
var_88 = 8;
pri = fun_0060(var_80)
var_96 = 26104;
pri = SoundPostEvent(var_96)
var_104 = 3;
var_112 = 6;
var_120 = var_16;
var_128 = 24;
pri = fun_0EC8(var_120, var_112, var_104)
var_136 = 1;
var_144 = 1;
var_152 = -1;
var_160 = -1;
var_168 = 0;
var_176 = 12;
var_184 = var_16;
var_192 = 56;
pri = fun_22D8(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
var_200 = 0;
var_208 = 3;
var_216 = 0;
var_224 = 100;
var_232 = -1;
var_240 = 3143953960523966406;
var_248 = var_16;
var_256 = 56;
pri = fun_1890(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
var_264 = 1;
var_272 = 8;
pri = fun_1B08(var_264)
var_280 = 0;
pri = fun_1BC8()
var_288 = 1;
var_296 = 0;
var_304 = 25456;
var_312 = 30;
var_320 = 32;
pri = fun_0360(var_312, var_304, var_296, var_288)
var_328 = 0;
pri = fun_03D0()
var_336 = 20;
var_344 = 8;
pri = fun_0060(var_336)
var_352 = 26304;
pri = SoundPostEvent(var_352)
var_360 = 1;
var_368 = var_32;
pri = ItemAdd(var_368, var_360)
var_376 = 1;
var_384 = var_32;
var_392 = 0;
var_400 = 24;
pri = fun_1F60(var_392, var_384, var_376)
var_408 = 3;
var_416 = 0;
var_424 = 3865713432835979590;
var_432 = 24;
pri = fun_1A10(var_424, var_416, var_408)
var_440 = 1;
var_448 = 8;
pri = fun_1B08(var_440)
var_456 = 0;
pri = fun_1BC8()
OP_INC_P_S -40
var_464 = var_16;
var_472 = 8;
pri = fun_0F30(var_464)
var_480 = 1;
var_488 = 3;
var_496 = 0;
var_504 = 12;
var_512 = var_16;
var_520 = 40;
pri = fun_4610(var_512, var_504, var_496, var_488, var_480)
var_528 = var_16;
var_536 = 8;
pri = fun_0840(var_528)
OP_JUMP lab_8128
// lab_8018
var_8 = 26488;
pri = SoundPostEvent(var_8)
var_16 = 10;
var_24 = 8;
pri = fun_0060(var_16)
var_32 = 1;
var_40 = var_32;
pri = ItemAdd(var_40, var_32)
var_48 = 1;
var_56 = var_32;
var_64 = 0;
var_72 = 24;
pri = fun_1F60(var_64, var_56, var_48)
var_80 = 3;
var_88 = 0;
var_96 = 3865713432835979590;
var_104 = 24;
pri = fun_1A10(var_96, var_88, var_80)
var_112 = 1;
var_120 = 8;
pri = fun_1B08(var_112)
var_128 = 0;
pri = fun_1BC8()
OP_INC_P_S -40
// lab_8128
pri = var_48;
OP_JNZ lab_81F8
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 3143956159547222828;
var_56 = var_16;
var_64 = 56;
pri = fun_1940(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 0;
var_88 = 1;
var_96 = 0;
var_104 = 0;
var_112 = 0;
var_120 = 48;
pri = fun_1D50(var_112, var_104, var_96, var_88, var_80, var_72)
var_56 = pri;
OP_JUMP lab_8210
// lab_81F8
OP_CONST_S -56, 1
// lab_8210
pri = var_56;
OP_JZER lab_8238
OP_JUMP lab_76B0
// lab_8238
var_8 = 1;
var_16 = 1;
var_24 = 0;
var_32 = 1;
var_40 = 1;
var_48 = var_16;
var_56 = 48;
pri = fun_6340(var_48, var_40, var_32, var_24, var_16, var_8)
pri = var_32;
OP_JNZ lab_8398
var_64 = 25656;
var_72 = 8;
var_80 = 16;
pri = fun_0300(var_72, var_64)
var_88 = 4;
var_96 = 8;
pri = fun_0060(var_88)
var_104 = 0;
pri = fun_03D0()
var_112 = 0;
var_120 = 3;
var_128 = 0;
var_136 = 100;
var_144 = -1;
var_152 = 3143958358570479250;
var_160 = var_16;
var_168 = 56;
pri = fun_1890(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
var_176 = 1;
var_184 = 8;
pri = fun_1B08(var_176)
var_192 = 0;
pri = fun_1BC8()
OP_JUMP lab_8468
// lab_8398
var_8 = 25656;
var_16 = 8;
var_24 = 16;
pri = fun_0300(var_16, var_8)
var_32 = 0;
pri = fun_03D0()
var_40 = 0;
var_48 = 3;
var_56 = 0;
var_64 = 100;
var_72 = -1;
var_80 = 3143959458082107461;
var_88 = var_16;
var_96 = 56;
pri = fun_1890(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
var_104 = 1;
var_112 = 8;
pri = fun_1B08(var_104)
var_120 = 0;
pri = fun_1BC8()
// lab_8468
var_8 = 0;
var_16 = 0;
var_24 = var_40;
var_32 = 0;
pri = WordSetNumber(var_32, var_24, var_16, var_8)
var_40 = 0;
var_48 = 3;
var_56 = 0;
var_64 = 100;
var_72 = -1;
var_80 = 3143952861012338195;
var_88 = var_16;
var_96 = 56;
pri = fun_1940(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
var_104 = 1;
var_112 = 8;
pri = fun_1B08(var_104)
var_120 = 0;
pri = fun_1BC8()
var_128 = 0;
var_136 = 0;
var_144 = 0;
var_152 = var_16;
var_160 = 32;
pri = fun_6500(var_152, var_144, var_136, var_128)
pri = arg_0;
OP_JZER lab_8600
var_168 = 364874149261162741;
pri = WorkGet(var_168)
OP_LOAD_P_S_ALT -40
OP_JSGEQ lab_85F0
var_176 = var_40;
var_184 = 364874149261162741;
pri = WorkSet(var_184, var_176)
// lab_8600
var_8 = -7106351468198454021;
pri = WorkGet(var_8)
OP_LOAD_P_S_ALT -40
OP_JSGEQ lab_8670
var_16 = var_40;
var_24 = -7106351468198454021;
pri = WorkSet(var_24, var_16)
// lab_8670
OP_JUMP switch_8940_case_default
// lab_85F0
OP_JUMP lab_8670
// lab_7C08
OP_JUMP lab_8238
// fun_89A0
fun_89A0() {
    var_16 = 0;
    var_24 = 10000;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    OP_ADD_P_C 1
    var_8 = pri;
    OP_ZERO_P_S -16
    OP_CONST_S -24, 1
    OP_JUMP lab_8A30
// lab_8A30
    OP_LOAD_S_BOTH -24, 24
    OP_JSGEQ lab_8B60
    pri = var_16;
    var_8 = pri;
    pri = arg_1;
    var_16 = pri;
    pri = var_24;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_ADD 
    var_16 = pri;
    OP_LOAD_S_BOTH -8, -16
    OP_JSGRTR lab_8B50
    pri = arg_1;
    var_24 = pri;
    pri = var_24;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    return pri;
// lab_8B60
    pri = 0;
    return pri;
// lab_8B50
    OP_JUMP lab_8A28
// lab_8A28
    OP_INC_P_S -24
}
// fun_8B80
fun_8B80() {
    OP_ZERO_P_S -8
    pri = arg_0;
    OP_JZER lab_8C60
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8C20
    var_16 = 24712;
    var_24 = 31;
    var_32 = 16;
    pri = fun_89A0(var_24, var_16)
    var_8 = pri;
    OP_JUMP lab_8C50
// lab_8C60
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8CD0
    var_8 = 24160;
    var_16 = 23;
    var_24 = 16;
    pri = fun_89A0(var_16, var_8)
    var_8 = pri;
    OP_JUMP lab_8D00
// lab_8CD0
    var_8 = 22864;
    var_16 = 23;
    var_24 = 16;
    pri = fun_89A0(var_16, var_8)
    var_8 = pri;
// lab_8D00
    pri = arg_1;
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_JSGRTR lab_8D60
    pri = var_8;
    OP_JNZ lab_8D60
    pri = 1;
    OP_JUMP lab_8D68
// lab_8D60
    pri = 0;
// lab_8D68
    OP_JZER lab_8F00
    pri = arg_0;
    OP_JZER lab_8E50
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8E08
    pri = 24712;
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    OP_JUMP lab_8E40
// lab_8F00
    pri = var_8;
    return pri;
// lab_8E50
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8EC8
    pri = 24160;
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    OP_JUMP lab_8F00
// lab_8EC8
    pri = 22864;
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
// lab_8E08
    pri = 23416;
    OP_ADD_P_C 8
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
// lab_8E40
    OP_JUMP lab_8F00
// lab_8C20
    var_8 = 23416;
    var_16 = 31;
    var_24 = 16;
    pri = fun_89A0(var_16, var_8)
    var_8 = pri;
// lab_8C50
    OP_JUMP lab_8D00
}
// fun_8F18
fun_8F18() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_6340(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -1896238570284385722;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1890(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1B08(var_136)
    var_152 = 0;
    pri = fun_1BC8()
    var_160 = var_8;
    var_168 = 8;
    pri = fun_0668(var_160)
    var_176 = 1;
    pri = IsPlayerRideBicycleType(var_176)
    OP_JNZ lab_9098
    var_184 = 8802641224559852288;
    var_192 = 8;
    pri = fun_0668(var_184)
// lab_9098
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -7808831443217516999;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1B08(var_72)
    var_88 = 0;
    pri = fun_1BC8()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = var_8;
    var_128 = 32;
    pri = fun_6500(var_120, var_112, var_104, var_96)
    var_136 = 1;
    var_144 = 838415845702232698;
    pri = WorkSet(var_144, var_136)
    pri = 0;
    return pri;
}
