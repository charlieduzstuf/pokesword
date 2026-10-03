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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_05B8()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0670
fun_0670() {
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
// fun_06E8
fun_06E8() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1028(var_8)
    OP_JZER lab_0860
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1058(var_24)
    OP_JNZ lab_0860
    pri = 0;
    return pri;
// lab_0860
    OP_JUMP lab_0870
// lab_0870
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0870
    pri = 0;
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09D0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A10
// lab_0A10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1028(var_8)
    OP_JNZ lab_0A98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A88
    pri = 0;
    return pri;
// lab_0A98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AE0
    pri = 0;
    return pri;
// lab_0AE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_0B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A10
    pri = 0;
    return pri;
// lab_0A88
    OP_JUMP lab_0AE0
}
// fun_0B88
fun_0B88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C10
    pri = 0;
    return pri;
// lab_0C10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1028(var_8)
    OP_JZER lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C68
    OP_ZERO_P_S 64
// lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_CONST_S 64, 1
// lab_0D78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB0
    OP_CONST_S 72, 1
// lab_0DB0
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
// lab_0C68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C90
    OP_ZERO_P_S 72
// lab_0C90
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
    OP_JUMP lab_0E50
// lab_0E50
    pri = 0;
    return pri;
}
// fun_0E60
fun_0E60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F60(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F98(var_24)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1088
fun_1088() {
    OP_JUMP lab_10A0
// lab_10A0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1130
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1120
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_1130
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11C0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_11C0
    pri = 0;
    return pri;
// lab_11B0
    OP_JUMP lab_11D0
// lab_11D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10A0
    pri = 0;
    return pri;
// lab_1120
    OP_JUMP lab_11D0
}
// fun_1210
fun_1210() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1088(var_40)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_13C8
fun_13C8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
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
// switch_1A18
        case default:
        {
// switch_1A18_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A60
// lab_1A60
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
            OP_JNZ lab_1B08
            var_88 = 0;
            pri = fun_1CC0()
// lab_1B08
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A18_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1600
                case default:
                {
// switch_1600_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1678
// lab_1678
                    OP_JUMP lab_1A60
                }
                case 0x0:
                {
// switch_1600_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1678
                }
                case 0x1:
                {
// switch_1600_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1678
                }
                case 0x2:
                {
// switch_1600_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1678
                }
                case 0x3:
                {
// switch_1600_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1678
                }
                case 0x4:
                {
// switch_1600_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1678
                }
                case 0x5:
                {
// switch_1600_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1678
                }
            }
        }
        case 0x65:
        {
// switch_1A18_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_17B8
                case default:
                {
// switch_17B8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1830
// lab_1830
                    OP_JUMP lab_1A60
                }
                case 0x0:
                {
// switch_17B8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1830
                }
                case 0x1:
                {
// switch_17B8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1830
                }
                case 0x2:
                {
// switch_17B8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1830
                }
                case 0x3:
                {
// switch_17B8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1830
                }
                case 0x4:
                {
// switch_17B8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1830
                }
                case 0x5:
                {
// switch_17B8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1830
                }
            }
        }
        case 0x66:
        {
// switch_1A18_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1970
                case default:
                {
// switch_1970_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19E8
// lab_19E8
                    OP_JUMP lab_1A60
                }
                case 0x0:
                {
// switch_1970_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19E8
                }
                case 0x1:
                {
// switch_1970_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19E8
                }
                case 0x2:
                {
// switch_1970_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19E8
                }
                case 0x3:
                {
// switch_1970_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19E8
                }
                case 0x4:
                {
// switch_1970_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19E8
                }
                case 0x5:
                {
// switch_1970_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19E8
                }
            }
        }
    }
}
// fun_1B20
fun_1B20() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0950(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BC8
    pri = 1;
    return pri;
// lab_1BC8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C10
fun_1C10() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B20(var_8)
    arg_2 = pri;
// lab_1C60
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1400(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
    OP_JUMP lab_1CD8
// lab_1CD8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D18
    pri = 0;
    return pri;
// lab_1D18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CD8
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    var_8 = 0;
    pri = fun_1CC0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E08
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E08
    pri = 0;
    return pri;
}
// fun_1E18
fun_1E18() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1EC0()
    return pri;
}
// fun_1EC0
fun_1EC0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1F00
fun_1F00() {
    pri = arg_1;
    OP_JNZ lab_1F48
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1F48
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1FA0
fun_1FA0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2018
fun_2018() {
    var_8 = 0;
    pri = fun_1FA0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2098
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2098
    pri = 1;
    return pri;
// lab_2098
    var_8 = 0;
    pri = fun_1FA0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_20D8
    pri = 1;
    return pri;
// lab_20D8
    var_8 = 0;
    pri = fun_1FA0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2108
fun_2108() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2158
fun_2158() {
    OP_JUMP lab_2170
// lab_2170
    pri = EvCameraMoveWait_()
    OP_JZER lab_21A8
    pri = 0;
    return pri;
// lab_21A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2170
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    pri = arg_5;
    OP_JNZ lab_2220
    var_8 = 0;
    pri = fun_0E60()
// lab_2220
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2270
    OP_CONST_S -8, -1
// lab_2270
    pri = arg_1;
    switch (pri) {
// switch_3D28
        case default:
        {
// switch_3D28_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_41D0
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0950(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_41D0
            pri = 1;
            OP_JUMP lab_41D8
// lab_41D0
            pri = 0;
// lab_41D8
            OP_JZER lab_4228
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4480
// lab_4228
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4290
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4290
            pri = 1;
            OP_JUMP lab_4298
// lab_4290
            pri = 0;
// lab_4298
            OP_JZER lab_4420
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0950(var_24, var_16)
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4480
// lab_4420
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4480
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_44F0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_44F0
            var_8 = 0;
            pri = fun_0EA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3D28_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1:
        {
// switch_3D28_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2:
        {
// switch_3D28_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3:
        {
// switch_3D28_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x4:
        {
// switch_3D28_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x5:
        {
// switch_3D28_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B88(var_40)
            OP_JUMP switch_3D28_case_default
        }
        case 0x6:
        {
// switch_3D28_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x7:
        {
// switch_3D28_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x8:
        {
// switch_3D28_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x9:
        {
// switch_3D28_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0xa:
        {
// switch_3D28_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0xb:
        {
// switch_3D28_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0xc:
        {
// switch_3D28_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0xd:
        {
// switch_3D28_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0xe:
        {
// switch_3D28_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0xf:
        {
// switch_3D28_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x10:
        {
// switch_3D28_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x11:
        {
// switch_3D28_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x12:
        {
// switch_3D28_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x13:
        {
// switch_3D28_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x14:
        {
// switch_3D28_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x15:
        {
// switch_3D28_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x16:
        {
// switch_3D28_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x17:
        {
// switch_3D28_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x18:
        {
// switch_3D28_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x19:
        {
// switch_3D28_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1a:
        {
// switch_3D28_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1b:
        {
// switch_3D28_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1c:
        {
// switch_3D28_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1d:
        {
// switch_3D28_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1e:
        {
// switch_3D28_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x1f:
        {
// switch_3D28_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x20:
        {
// switch_3D28_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x21:
        {
// switch_3D28_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x22:
        {
// switch_3D28_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x23:
        {
// switch_3D28_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x24:
        {
// switch_3D28_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x25:
        {
// switch_3D28_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x26:
        {
// switch_3D28_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x27:
        {
// switch_3D28_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x28:
        {
// switch_3D28_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x29:
        {
// switch_3D28_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2a:
        {
// switch_3D28_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2b:
        {
// switch_3D28_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2c:
        {
// switch_3D28_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2d:
        {
// switch_3D28_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2e:
        {
// switch_3D28_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x2f:
        {
// switch_3D28_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x30:
        {
// switch_3D28_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x31:
        {
// switch_3D28_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x32:
        {
// switch_3D28_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x33:
        {
// switch_3D28_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x34:
        {
// switch_3D28_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x35:
        {
// switch_3D28_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x36:
        {
// switch_3D28_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x37:
        {
// switch_3D28_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x38:
        {
// switch_3D28_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D28_case_default
        }
        case 0x39:
        {
// switch_3D28_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3a:
        {
// switch_3D28_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3b:
        {
// switch_3D28_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3c:
        {
// switch_3D28_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3d:
        {
// switch_3D28_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
        case 0x3e:
        {
// switch_3D28_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            OP_JUMP switch_3D28_case_default
        }
    }
}
// fun_4520
fun_4520() {
    pri = arg_4;
    OP_JNZ lab_4558
    var_8 = 0;
    pri = fun_0E60()
// lab_4558
    pri = arg_1;
    switch (pri) {
// switch_5930
        case default:
        {
// switch_5930_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1028(var_264)
            OP_JZER lab_5EF8
            pri = arg_3;
            switch (pri) {
// switch_5EA0
                case default:
                {
// switch_5EA0_case_default
                    OP_JUMP lab_61B0
// lab_61B0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6220
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6220
                    var_8 = 0;
                    pri = fun_0EA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5EA0_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5EA0_case_default
                }
                case 0x2:
                {
// switch_5EA0_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5EA0_case_default
                }
                case 0x3:
                {
// switch_5EA0_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5EA0_case_default
                }
            }
// lab_5EF8
            pri = arg_1;
            OP_JZER lab_5F48
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5F48
            pri = 0;
            OP_JUMP lab_5F50
// lab_5F48
            pri = 1;
// lab_5F50
            OP_JZER lab_5FB8
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0950(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5FB8
            pri = 1;
            OP_JUMP lab_5FC0
// lab_5FB8
            pri = 0;
// lab_5FC0
            OP_JZER lab_6010
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_61B0
// lab_6010
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6078
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_61B0
// lab_6078
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0950(var_24, var_16)
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5930_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1:
        {
// switch_5930_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2:
        {
// switch_5930_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3:
        {
// switch_5930_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x4:
        {
// switch_5930_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x5:
        {
// switch_5930_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B88(var_40)
            OP_JUMP switch_5930_case_default
        }
        case 0x6:
        {
// switch_5930_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x7:
        {
// switch_5930_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x8:
        {
// switch_5930_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x9:
        {
// switch_5930_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xa:
        {
// switch_5930_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xb:
        {
// switch_5930_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xc:
        {
// switch_5930_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xd:
        {
// switch_5930_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xe:
        {
// switch_5930_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xf:
        {
// switch_5930_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x10:
        {
// switch_5930_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x11:
        {
// switch_5930_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x12:
        {
// switch_5930_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x13:
        {
// switch_5930_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x14:
        {
// switch_5930_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x15:
        {
// switch_5930_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x16:
        {
// switch_5930_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x17:
        {
// switch_5930_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x18:
        {
// switch_5930_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x19:
        {
// switch_5930_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1a:
        {
// switch_5930_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1b:
        {
// switch_5930_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1c:
        {
// switch_5930_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1d:
        {
// switch_5930_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1e:
        {
// switch_5930_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1f:
        {
// switch_5930_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x20:
        {
// switch_5930_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x21:
        {
// switch_5930_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x22:
        {
// switch_5930_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x23:
        {
// switch_5930_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x24:
        {
// switch_5930_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x25:
        {
// switch_5930_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x26:
        {
// switch_5930_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x27:
        {
// switch_5930_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x28:
        {
// switch_5930_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x29:
        {
// switch_5930_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2a:
        {
// switch_5930_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2b:
        {
// switch_5930_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2c:
        {
// switch_5930_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2d:
        {
// switch_5930_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2e:
        {
// switch_5930_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2f:
        {
// switch_5930_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x30:
        {
// switch_5930_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x31:
        {
// switch_5930_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x32:
        {
// switch_5930_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x33:
        {
// switch_5930_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x34:
        {
// switch_5930_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x35:
        {
// switch_5930_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x36:
        {
// switch_5930_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x37:
        {
// switch_5930_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x38:
        {
// switch_5930_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x39:
        {
// switch_5930_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3a:
        {
// switch_5930_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3b:
        {
// switch_5930_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3c:
        {
// switch_5930_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3d:
        {
// switch_5930_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3e:
        {
// switch_5930_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
    }
}
// fun_6250
fun_6250() {
    pri = 22264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_62D8
// lab_62D8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6458
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6448
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6398
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6398
    pri = 0;
    OP_JUMP lab_63A0
// lab_6458
    pri = 0;
    return pri;
// lab_6448
    OP_JUMP lab_62D0
// lab_62D0
    OP_INC_P_S -936
// lab_6398
    pri = 1;
// lab_63A0
    OP_JZER lab_6418
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6410
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6418
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6410
}
// fun_6478
fun_6478() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6510
    var_8 = 1;
    var_16 = 0;
    var_24 = 23184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_12D0()
// lab_6510
    pri = arg_4;
    OP_JZER lab_6548
    var_8 = 1;
    var_16 = 8;
    pri = fun_13C8(var_8)
// lab_6548
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_65A0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_65A0
    pri = 0;
    OP_JUMP lab_65A8
// lab_65A0
    pri = 1;
// lab_65A8
    OP_JZER lab_6670
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6670
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6648
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1210(var_32, var_24)
    OP_JUMP lab_6670
// lab_6670
    pri = arg_2;
    OP_JZER lab_6748
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6718
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0638(var_40)
    OP_JUMP lab_6748
// lab_6748
    pri = arg_3;
    OP_JZER lab_6780
    var_8 = 1;
    var_16 = 8;
    pri = fun_1298(var_8)
// lab_6780
    pri = 0;
    return pri;
// lab_6718
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EE0(var_16, var_8)
// lab_6648
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1210(var_16, var_8)
}
// fun_6790
fun_6790() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6250(var_24)
    pri = 0;
    return pri;
}
// fun_67F8
fun_67F8() {
    pri = g_mode;
    switch (pri) {
// switch_68B8
        case default:
        {
// switch_68B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6900
// lab_6900
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_68B8_case_0x0
            var_8 = 0;
            pri = fun_6910()
            OP_JUMP lab_6900
        }
        case 0x34e38927744d1cd3:
        {
// switch_68B8_case_0x34e38927744d1cd3
            var_8 = 0;
            pri = fun_8600()
            OP_JUMP lab_6900
        }
        case 0x5242fb2afe4202f7:
        {
// switch_68B8_case_0x5242fb2afe4202f7
            var_8 = 0;
            pri = fun_84D0()
            OP_JUMP lab_6900
        }
    }
}
// fun_6910
fun_6910() {
    pri = 0;
    return pri;
}
// fun_6928
fun_6928() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6478(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6980
fun_6980() {
    pri = 0;
    return pri;
}
// fun_6998
fun_6998() {
    var_8 = -4237019533666158271;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = -4237031628294068592;
    var_32 = 8;
    pri = fun_0408(var_24)
    pri = 0;
    return pri;
}
// fun_6A00
fun_6A00() {
    pri = 0;
    return pri;
}
// fun_6A18
fun_6A18() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 23232;
    pri = SoundPostEvent(var_24)
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH2_C 8802641224559852288, 1372741294210509627
    var_64 = 48;
    pri = fun_0790(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 1372741294210509627, 8802641224559852288
    var_104 = 48;
    pri = fun_0790(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    OP_PUSH2_C -6160241408970192443, 1372741294210509627
    var_152 = 56;
    pri = fun_1C10(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1D58(var_160)
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C -6160242508481820654, 1372741294210509627
    var_216 = 56;
    pri = fun_1C10(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1D58(var_224)
    var_248 = 0;
    var_256 = 0;
    var_264 = 1;
    OP_PUSH2_C -92165788623721011, -92169087158605644
    var_272 = 1;
    var_280 = 48;
    pri = fun_1E48(var_272, var_264, var_256, var_248, var_240, var_232)
    var_8 = pri;
    var_288 = 0;
    pri = fun_1E18()
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_07E8(var_296)
    var_312 = 1372741294210509627;
    var_320 = 8;
    pri = fun_07E8(var_312)
    pri = var_8;
    OP_JZER lab_7F40
    var_328 = 0;
    pri = fun_6998()
    var_336 = 0;
    pri = fun_0438()
    var_344 = 1;
    var_352 = 1;
    OP_PUSH4_C 4640537203540230144, 4675917288698806272, 4668434012560162816, 8802641224559852288
    var_360 = 48;
    pri = fun_05E0(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 1;
    var_376 = 1;
    var_384 = 0;
    OP_PUSH3_C 4675893374320902144, 4668434012560162816, 1372741294210509627
    var_392 = 48;
    pri = fun_05E0(var_384, var_376, var_368, var_360, var_352, var_344)
    pri = EvCameraStart()
    var_400 = 1;
    var_408 = 8;
    pri = fun_13C8(var_400)
    var_416 = 0;
    var_424 = 4631952216750555136;
    var_432 = 0;
    OP_PUSH5_C 4675855582731865948, -4583578630940503572, 4668449290274230764, 4675879194744072438, -4584027935372077957
    var_440 = 4668479098034459771;
    var_448 = 1;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    pri = fun_2158()
    var_464 = 9;
    var_472 = 1372741294210509627;
    var_480 = 16;
    pri = fun_0F20(var_472, var_464)
    var_488 = 10;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 23392;
    pri = SoundPostEvent(var_504)
    var_512 = 23552;
    pri = SoundPostEvent(var_512)
    var_528 = 23712;
    var_536 = 1;
    var_544 = 0;
    var_552 = 1;
    var_560 = -1;
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    OP_PUSH5_C 4675872703502299955, -4579962029333492531, 4668484755021784678, 4675818648761899418, -4579962029333492531
    OP_PUSH5_C 4668460895619461939, 4675769363153184358, -4579962029333492531, 4668482281120622182, 4675760154743301734
    OP_PUSH2_C -4579962029333492531, 4668654079812462182
    var_592 = 4;
    var_600 = 168;
    pri = fun_12F8(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_16 = pri;
    var_608 = 1;
    var_616 = 4596373779694328218;
    var_624 = -1;
    var_632 = 4611686018427387904;
    var_640 = var_16;
    var_648 = -4237031628294068592;
    var_656 = 48;
    pri = fun_06E8(var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 23760;
    var_680 = 1;
    var_688 = 0;
    var_696 = 1;
    var_704 = -1;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH5_C 4675870628174102528, -4579962029333492531, 4668387448242726502, 4675783038329054822, -4579962029333492531
    OP_PUSH5_C 4668389317412493722, 4675727966540398592, -4579962029333492531, 4668456112743881114, 4675728186442724147
    OP_PUSH2_C -4579962029333492531, 4668658972639205786
    var_736 = 4;
    var_744 = 168;
    pri = fun_12F8(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_24 = pri;
    var_752 = 1;
    var_760 = 4596373779694328218;
    var_768 = -1;
    var_776 = 4611686018427387904;
    var_784 = var_24;
    var_792 = -4237019533666158271;
    var_800 = 48;
    pri = fun_06E8(var_792, var_784, var_776, var_768, var_760, var_752)
    var_808 = 50;
    var_816 = 8;
    pri = fun_0060(var_808)
    var_824 = 0;
    var_832 = 4631952216750555136;
    var_840 = 3;
    OP_PUSH5_C 4675860454942766531, -4582671225984332595, 4668390845733656330, 4675933942176798474, -4584065582650213007
    var_848 = 4668483633519924347;
    var_856 = 45;
    pri = EvCameraMove(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = 0;
    pri = fun_2158()
    var_872 = -4237019533666158271;
    var_880 = 8;
    pri = fun_07E8(var_872)
    var_888 = -4237031628294068592;
    var_896 = 8;
    pri = fun_07E8(var_888)
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    var_928 = 0;
    OP_PUSH2_C 1372741294210509627, -4237019533666158271
    var_936 = 48;
    pri = fun_0790(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    var_968 = 0;
    OP_PUSH2_C 1372741294210509627, -4237031628294068592
    var_976 = 48;
    pri = fun_0790(var_968, var_960, var_952, var_944, var_936, var_928)
    var_984 = -4237019533666158271;
    var_992 = 8;
    pri = fun_07E8(var_984)
    var_1000 = -4237031628294068592;
    var_1008 = 8;
    pri = fun_07E8(var_1000)
    var_1016 = 1;
    var_1024 = 1;
    var_1032 = -1;
    var_1040 = -1;
    var_1048 = 0;
    var_1056 = 47;
    var_1064 = -4237019533666158271;
    var_1072 = 56;
    pri = fun_21E8(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1080 = 1;
    var_1088 = 1;
    var_1096 = -1;
    var_1104 = -1;
    var_1112 = 0;
    var_1120 = 47;
    var_1128 = -4237031628294068592;
    var_1136 = 56;
    pri = fun_21E8(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = 23808;
    pri = SoundPostEvent(var_1144)
    var_1152 = 24000;
    pri = SoundPostEvent(var_1152)
    var_1160 = 15;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = 1372741294210509627;
    var_1184 = 8;
    pri = fun_0FD0(var_1176)
    var_1192 = 1;
    var_1200 = 1;
    var_1208 = -1;
    var_1216 = -1;
    var_1224 = 0;
    var_1232 = 1;
    var_1240 = 1372741294210509627;
    var_1248 = 56;
    pri = fun_21E8(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C -6160249105551589920, 1372741294210509627
    var_1296 = 56;
    pri = fun_1C10(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1D58(var_1304)
    var_1320 = 0;
    pri = fun_1E18()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 1;
    var_1360 = 1372741294210509627;
    var_1368 = 40;
    pri = fun_4520(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 1372741294210509627;
    var_1384 = 8;
    pri = fun_0988(var_1376)
    var_1392 = 16;
    var_1400 = 0;
    var_1408 = 64;
    var_1416 = 0;
    var_1424 = 138;
    var_1432 = 40;
    pri = fun_1F00(var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1440 = 0;
    pri = fun_2018()
    OP_JZER lab_7698
    var_1448 = 0;
    pri = fun_2108()
// lab_7F40
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -6160248006039961709, 1372741294210509627
    var_48 = 56;
    pri = fun_1C10(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1D58(var_56)
    var_72 = 0;
    pri = fun_1E18()
    var_80 = 24696;
    pri = SoundPostEvent(var_80)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 1372741294210509627;
    var_136 = 40;
    pri = fun_0740(var_128, var_120, var_112, var_104, var_96)
    var_144 = 1;
    var_152 = 0;
    var_160 = 4641240890982006784;
    var_168 = 0;
    var_176 = 0;
    OP_PUSH4_C 4675926359669735424, 4668440609629929472, 4607182418800017408, 8802641224559852288
    var_184 = 72;
    pri = fun_0670(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 8802641224559852288;
    var_200 = 8;
    pri = fun_07E8(var_192)
    var_208 = 1372741294210509627;
    var_216 = 8;
    pri = fun_07E8(var_208)
    pri = 0;
    return pri;
// lab_7698
    var_8 = 24168;
    pri = SoundPostEvent(var_8)
    var_16 = 24328;
    pri = SoundPostEvent(var_16)
    var_24 = 1;
    var_32 = 1;
    var_40 = -1;
    var_48 = -1;
    var_56 = 0;
    var_64 = 48;
    var_72 = -4237019533666158271;
    var_80 = 56;
    pri = fun_21E8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 0;
    var_128 = 48;
    var_136 = -4237031628294068592;
    var_144 = 56;
    pri = fun_21E8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 4631952216750555136;
    var_168 = 0;
    OP_PUSH5_C 4675893107689332408, -4581286017255195279, 4668477091425739080, 4675995895533855048, 4641335536942925742
    var_176 = 4668323753534129439;
    var_184 = 1;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 0;
    pri = fun_2158()
    var_200 = 0;
    var_208 = 4631952216750555136;
    var_216 = 3;
    OP_PUSH5_C 4675887849274972570, -4581138594736143073, 4668417151549350871, 4675990637119495209, 4641188114423873536
    var_224 = 4668263819155299369;
    var_232 = 300;
    pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 24488;
    var_248 = 8;
    var_256 = 16;
    pri = fun_0280(var_248, var_240)
    var_264 = 0;
    pri = fun_0350()
    var_272 = 15;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -6160245807016705287, 1372741294210509627
    var_328 = 56;
    pri = fun_1C10(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_1D58(var_336)
    var_352 = 0;
    pri = fun_1E18()
    var_360 = 0;
    var_368 = 4631952216750555136;
    var_376 = 0;
    OP_PUSH5_C 4675892589544477819, -4580238226654389862, 4668389735226912276, 4675919897290143171, 4620940915661634273
    var_384 = 4668527405077826109;
    var_392 = 1;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 48;
    var_432 = -4237019533666158271;
    var_440 = 40;
    pri = fun_4520(var_432, var_424, var_416, var_408, var_400)
    var_448 = 1;
    var_456 = 3;
    var_464 = 0;
    var_472 = 48;
    var_480 = -4237031628294068592;
    var_488 = 40;
    pri = fun_4520(var_480, var_472, var_464, var_456, var_448)
    var_496 = -4237019533666158271;
    var_504 = 8;
    pri = fun_0988(var_496)
    var_512 = -4237031628294068592;
    var_520 = 8;
    pri = fun_0988(var_512)
    var_528 = 1;
    var_536 = 0;
    var_544 = 4641240890982006784;
    var_552 = 0;
    var_560 = 0;
    OP_PUSH4_C 4675765418655219712, 4668403226234585088, 4611686018427387904, -4237019533666158271
    var_568 = 72;
    pri = fun_0670(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_576 = 1;
    var_584 = 0;
    var_592 = 4641240890982006784;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH4_C 4675765418655219712, 4668495585211318272, 4611686018427387904, -4237031628294068592
    var_616 = 72;
    pri = fun_0670(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 1;
    var_632 = 1;
    var_640 = -1;
    var_648 = -1;
    var_656 = 0;
    var_664 = 2;
    var_672 = 1372741294210509627;
    var_680 = 56;
    pri = fun_21E8(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C -6160234811900423177, 1372741294210509627
    var_728 = 56;
    pri = fun_1C10(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_1D58(var_736)
    var_752 = 0;
    pri = fun_1E18()
    var_760 = 1;
    var_768 = 3;
    var_776 = 0;
    var_784 = 2;
    var_792 = 1372741294210509627;
    var_800 = 40;
    pri = fun_4520(var_792, var_784, var_776, var_768, var_760)
    var_808 = 1372741294210509627;
    var_816 = 8;
    pri = fun_0988(var_808)
    var_824 = 0;
    var_832 = 3;
    var_840 = 0;
    var_848 = 100;
    var_856 = -1;
    OP_PUSH2_C -6160246906528333498, 1372741294210509627
    var_864 = 56;
    pri = fun_1C10(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 1;
    var_880 = 8;
    pri = fun_1D58(var_872)
    var_888 = 0;
    pri = fun_1E18()
    var_896 = -4237019533666158271;
    var_904 = 8;
    pri = fun_07E8(var_896)
    var_912 = -4237031628294068592;
    var_920 = 8;
    pri = fun_07E8(var_912)
    var_928 = 1;
    var_936 = 0;
    var_944 = 4641240890982006784;
    var_952 = 0;
    var_960 = 0;
    var_968 = 40500;
    pri = float(var_968)
    var_976 = pri;
    var_984 = 13128;
    pri = float(var_984)
    var_992 = pri;
    OP_PUSH2_C 4611686018427387904, 1372741294210509627
    var_1000 = 72;
    pri = fun_0670(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 1372741294210509627;
    var_1016 = 8;
    pri = fun_07E8(var_1008)
    var_1024 = 24536;
    pri = SoundPostEvent(var_1024)
    var_1032 = 3;
    var_1040 = 15;
    pri = EvCameraEnd(var_1040, var_1032)
    pri = 1;
    return pri;
}
// fun_8130
fun_8130() {
    pri = 0;
    return pri;
}
// fun_8148
fun_8148() {
    var_8 = 1372741294210509627;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = -4237019533666158271;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = -4237031628294068592;
    var_48 = 8;
    pri = fun_0588(var_40)
    var_56 = 4322625172868200955;
    var_64 = 8;
    pri = fun_0588(var_56)
    var_72 = 1327;
    var_80 = 8;
    pri = fun_6790(var_72)
    var_88 = -303377521461947352;
    pri = VanishFlagReset(var_88)
    var_96 = -2963507660619991057;
    pri = VanishFlagReset(var_96)
    var_104 = -2963506561108362846;
    pri = VanishFlagReset(var_104)
    var_112 = 3932988810004887490;
    pri = VanishFlagReset(var_112)
    var_120 = 3932987710493259279;
    pri = VanishFlagReset(var_120)
    var_128 = -5196931039515366606;
    pri = VanishFlagReset(var_128)
    var_136 = -2963505461596734635;
    pri = VanishFlagReset(var_136)
    var_144 = -2963513158178132112;
    pri = VanishFlagReset(var_144)
    var_152 = 6332055657046231525;
    pri = VanishFlagReset(var_152)
    var_160 = -2963512058666503901;
    pri = VanishFlagReset(var_160)
    var_168 = -2963510959154875690;
    pri = VanishFlagReset(var_168)
    var_176 = 4949930660899271115;
    pri = VanishFlagReset(var_176)
    var_184 = 3593635681699453544;
    pri = VanishFlagReset(var_184)
    var_192 = -1180051137964617721;
    pri = VanishFlagReset(var_192)
    var_200 = -3123382877661890469;
    pri = VanishFlagReset(var_200)
    var_208 = -303377521461947352;
    pri = VanishFlagReset(var_208)
    pri = 0;
    return pri;
}
// fun_84A0
fun_84A0() {
    pri = 0;
    return pri;
}
// fun_84B8
fun_84B8() {
    pri = 0;
    return pri;
}
// fun_84D0
fun_84D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6928()
    var_16 = 0;
    pri = fun_6980()
    var_24 = 0;
    pri = fun_6A00()
    var_32 = 0;
    pri = fun_6A18()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_85C0
    var_40 = 0;
    pri = fun_8130()
    var_48 = 0;
    pri = fun_8148()
    var_56 = 0;
    pri = fun_84A0()
    OP_JUMP lab_85D8
// lab_85C0
    var_8 = 0;
    pri = fun_84B8()
// lab_85D8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8600
fun_8600() {
    var_8 = 0;
    pri = fun_6980()
    var_16 = 0;
    pri = fun_6998()
    var_24 = 0;
    pri = fun_8148()
    pri = 0;
    return pri;
}
