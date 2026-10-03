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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
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
// fun_0720
fun_0720() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1060(var_8)
    OP_JZER lab_07F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1090(var_24)
    OP_JNZ lab_07F0
    pri = 0;
    return pri;
// lab_07F0
    OP_JUMP lab_0800
// lab_0800
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0860
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0860
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0800
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0960
    pri = 0;
    return pri;
// lab_0960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09A0
// lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1060(var_8)
    OP_JNZ lab_0A28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A18
    pri = 0;
    return pri;
// lab_0A28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A70
    pri = 0;
    return pri;
// lab_0A70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09A0
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_0A70
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BA0
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1060(var_8)
    OP_JZER lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BF8
    OP_ZERO_P_S 64
// lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D08
    OP_CONST_S 64, 1
// lab_0D08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_CONST_S 72, 1
// lab_0D40
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
// lab_0BF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C20
    OP_ZERO_P_S 72
// lab_0C20
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
    OP_JUMP lab_0DE0
// lab_0DE0
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB0
fun_0EB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF0
fun_0EF0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0F28
fun_0F28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0EB0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0F28(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1008
fun_1008() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EF0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F68(var_24)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10C0
fun_10C0() {
    OP_JUMP lab_10D8
// lab_10D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1168
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1158
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_1168
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_11F8
    pri = 0;
    return pri;
// lab_11E8
    OP_JUMP lab_1208
// lab_1208
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10D8
    pri = 0;
    return pri;
// lab_1158
    OP_JUMP lab_1208
}
// fun_1248
fun_1248() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10C0(var_40)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
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
// switch_1980
        case default:
        {
// switch_1980_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19C8
// lab_19C8
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
            OP_JNZ lab_1A70
            var_88 = 0;
            pri = fun_1C28()
// lab_1A70
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1980_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1568
                case default:
                {
// switch_1568_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15E0
// lab_15E0
                    OP_JUMP lab_19C8
                }
                case 0x0:
                {
// switch_1568_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15E0
                }
                case 0x1:
                {
// switch_1568_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15E0
                }
                case 0x2:
                {
// switch_1568_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15E0
                }
                case 0x3:
                {
// switch_1568_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15E0
                }
                case 0x4:
                {
// switch_1568_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15E0
                }
                case 0x5:
                {
// switch_1568_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15E0
                }
            }
        }
        case 0x65:
        {
// switch_1980_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1720
                case default:
                {
// switch_1720_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1798
// lab_1798
                    OP_JUMP lab_19C8
                }
                case 0x0:
                {
// switch_1720_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1798
                }
                case 0x1:
                {
// switch_1720_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1798
                }
                case 0x2:
                {
// switch_1720_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1798
                }
                case 0x3:
                {
// switch_1720_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1798
                }
                case 0x4:
                {
// switch_1720_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1798
                }
                case 0x5:
                {
// switch_1720_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1798
                }
            }
        }
        case 0x66:
        {
// switch_1980_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18D8
                case default:
                {
// switch_18D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1950
// lab_1950
                    OP_JUMP lab_19C8
                }
                case 0x0:
                {
// switch_18D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1950
                }
                case 0x1:
                {
// switch_18D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1950
                }
                case 0x2:
                {
// switch_18D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1950
                }
                case 0x3:
                {
// switch_18D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1950
                }
                case 0x4:
                {
// switch_18D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1950
                }
                case 0x5:
                {
// switch_18D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1950
                }
            }
        }
    }
}
// fun_1A88
fun_1A88() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_08E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B30
    pri = 1;
    return pri;
// lab_1B30
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B78
fun_1B78() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1BC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A88(var_8)
    arg_2 = pri;
// lab_1BC8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1368(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C28
fun_1C28() {
    OP_JUMP lab_1C40
// lab_1C40
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C80
    pri = 0;
    return pri;
// lab_1C80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C40
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
    var_8 = 0;
    pri = fun_1C28()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D70
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D70
    pri = 0;
    return pri;
}
// fun_1D80
fun_1D80() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DB0
fun_1DB0() {
    OP_JUMP lab_1DC8
// lab_1DC8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E00
    pri = 0;
    return pri;
// lab_1E00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DC8
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    pri = arg_5;
    OP_JNZ lab_1E78
    var_8 = 0;
    pri = fun_0DF0()
// lab_1E78
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1EC8
    OP_CONST_S -8, -1
// lab_1EC8
    pri = arg_1;
    switch (pri) {
// switch_3980
        case default:
        {
// switch_3980_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3E28
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_08E0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3E28
            pri = 1;
            OP_JUMP lab_3E30
// lab_3E28
            pri = 0;
// lab_3E30
            OP_JZER lab_3E80
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_40D8
// lab_3E80
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3EE8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3EE8
            pri = 1;
            OP_JUMP lab_3EF0
// lab_3EE8
            pri = 0;
// lab_3EF0
            OP_JZER lab_4078
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08E0(var_24, var_16)
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
            OP_JUMP lab_40D8
// lab_4078
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
// lab_40D8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4148
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4148
            var_8 = 0;
            pri = fun_0E30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3980_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x1:
        {
// switch_3980_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x2:
        {
// switch_3980_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3:
        {
// switch_3980_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x4:
        {
// switch_3980_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x5:
        {
// switch_3980_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_3980_case_default
        }
        case 0x6:
        {
// switch_3980_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x7:
        {
// switch_3980_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x8:
        {
// switch_3980_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x9:
        {
// switch_3980_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0xa:
        {
// switch_3980_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0xb:
        {
// switch_3980_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0xc:
        {
// switch_3980_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0xd:
        {
// switch_3980_case_0xd
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0xe:
        {
// switch_3980_case_0xe
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0xf:
        {
// switch_3980_case_0xf
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x10:
        {
// switch_3980_case_0x10
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x11:
        {
// switch_3980_case_0x11
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x12:
        {
// switch_3980_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x13:
        {
// switch_3980_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x14:
        {
// switch_3980_case_0x14
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x15:
        {
// switch_3980_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x16:
        {
// switch_3980_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x17:
        {
// switch_3980_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x18:
        {
// switch_3980_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x19:
        {
// switch_3980_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x1a:
        {
// switch_3980_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x1b:
        {
// switch_3980_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x1c:
        {
// switch_3980_case_0x1c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x1d:
        {
// switch_3980_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x1e:
        {
// switch_3980_case_0x1e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x1f:
        {
// switch_3980_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x20:
        {
// switch_3980_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x21:
        {
// switch_3980_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x22:
        {
// switch_3980_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x23:
        {
// switch_3980_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x24:
        {
// switch_3980_case_0x24
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x25:
        {
// switch_3980_case_0x25
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x26:
        {
// switch_3980_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x27:
        {
// switch_3980_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x28:
        {
// switch_3980_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x29:
        {
// switch_3980_case_0x29
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x2a:
        {
// switch_3980_case_0x2a
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x2b:
        {
// switch_3980_case_0x2b
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x2c:
        {
// switch_3980_case_0x2c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x2d:
        {
// switch_3980_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x2e:
        {
// switch_3980_case_0x2e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x2f:
        {
// switch_3980_case_0x2f
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x30:
        {
// switch_3980_case_0x30
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x31:
        {
// switch_3980_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x32:
        {
// switch_3980_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x33:
        {
// switch_3980_case_0x33
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x34:
        {
// switch_3980_case_0x34
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x35:
        {
// switch_3980_case_0x35
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x36:
        {
// switch_3980_case_0x36
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x37:
        {
// switch_3980_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x38:
        {
// switch_3980_case_0x38
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3980_case_default
        }
        case 0x39:
        {
// switch_3980_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3a:
        {
// switch_3980_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3b:
        {
// switch_3980_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3c:
        {
// switch_3980_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3d:
        {
// switch_3980_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
        case 0x3e:
        {
// switch_3980_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            OP_JUMP switch_3980_case_default
        }
    }
}
// fun_4178
fun_4178() {
    pri = arg_4;
    OP_JNZ lab_41B0
    var_8 = 0;
    pri = fun_0DF0()
// lab_41B0
    pri = arg_1;
    switch (pri) {
// switch_5588
        case default:
        {
// switch_5588_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1060(var_264)
            OP_JZER lab_5B50
            pri = arg_3;
            switch (pri) {
// switch_5AF8
                case default:
                {
// switch_5AF8_case_default
                    OP_JUMP lab_5E08
// lab_5E08
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5E78
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5E78
                    var_8 = 0;
                    pri = fun_0E30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5AF8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5AF8_case_default
                }
                case 0x2:
                {
// switch_5AF8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5AF8_case_default
                }
                case 0x3:
                {
// switch_5AF8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5AF8_case_default
                }
            }
// lab_5B50
            pri = arg_1;
            OP_JZER lab_5BA0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5BA0
            pri = 0;
            OP_JUMP lab_5BA8
// lab_5BA0
            pri = 1;
// lab_5BA8
            OP_JZER lab_5C10
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_08E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5C10
            pri = 1;
            OP_JUMP lab_5C18
// lab_5C10
            pri = 0;
// lab_5C18
            OP_JZER lab_5C68
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E08
// lab_5C68
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5CD0
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E08
// lab_5CD0
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08E0(var_24, var_16)
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
// switch_5588_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1:
        {
// switch_5588_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2:
        {
// switch_5588_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3:
        {
// switch_5588_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x4:
        {
// switch_5588_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x5:
        {
// switch_5588_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_5588_case_default
        }
        case 0x6:
        {
// switch_5588_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x7:
        {
// switch_5588_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x8:
        {
// switch_5588_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x9:
        {
// switch_5588_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xa:
        {
// switch_5588_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xb:
        {
// switch_5588_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xc:
        {
// switch_5588_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xd:
        {
// switch_5588_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xe:
        {
// switch_5588_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xf:
        {
// switch_5588_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x10:
        {
// switch_5588_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x11:
        {
// switch_5588_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x12:
        {
// switch_5588_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x13:
        {
// switch_5588_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x14:
        {
// switch_5588_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x15:
        {
// switch_5588_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x16:
        {
// switch_5588_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x17:
        {
// switch_5588_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x18:
        {
// switch_5588_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x19:
        {
// switch_5588_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1a:
        {
// switch_5588_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1b:
        {
// switch_5588_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1c:
        {
// switch_5588_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1d:
        {
// switch_5588_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1e:
        {
// switch_5588_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1f:
        {
// switch_5588_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x20:
        {
// switch_5588_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x21:
        {
// switch_5588_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x22:
        {
// switch_5588_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x23:
        {
// switch_5588_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x24:
        {
// switch_5588_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x25:
        {
// switch_5588_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x26:
        {
// switch_5588_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x27:
        {
// switch_5588_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x28:
        {
// switch_5588_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x29:
        {
// switch_5588_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2a:
        {
// switch_5588_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2b:
        {
// switch_5588_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2c:
        {
// switch_5588_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2d:
        {
// switch_5588_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2e:
        {
// switch_5588_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2f:
        {
// switch_5588_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x30:
        {
// switch_5588_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x31:
        {
// switch_5588_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x32:
        {
// switch_5588_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x33:
        {
// switch_5588_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x34:
        {
// switch_5588_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x35:
        {
// switch_5588_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x36:
        {
// switch_5588_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x37:
        {
// switch_5588_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x38:
        {
// switch_5588_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x39:
        {
// switch_5588_case_0x39
            var_8 = 1;
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
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3b:
        {
// switch_5588_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3c:
        {
// switch_5588_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3d:
        {
// switch_5588_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3e:
        {
// switch_5588_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
    }
}
// fun_5EA8
fun_5EA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_60B8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_60A0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_60A0
    pri = 0;
    return pri;
}
// fun_60B8
fun_60B8() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08A0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6100
fun_6100() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6188
// lab_6188
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6308
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_62F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6248
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6248
    pri = 0;
    OP_JUMP lab_6250
// lab_6308
    pri = 0;
    return pri;
// lab_62F8
    OP_JUMP lab_6180
// lab_6180
    OP_INC_P_S -936
// lab_6248
    pri = 1;
// lab_6250
    OP_JZER lab_62C8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_62C0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_62C8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_62C0
}
// fun_6328
fun_6328() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_63C0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1308()
// lab_63C0
    pri = arg_4;
    OP_JZER lab_63F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1330(var_8)
// lab_63F8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6450
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6450
    pri = 0;
    OP_JUMP lab_6458
// lab_6450
    pri = 1;
// lab_6458
    OP_JZER lab_6520
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6520
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_64F8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1248(var_32, var_24)
    OP_JUMP lab_6520
// lab_6520
    pri = arg_2;
    OP_JZER lab_65F8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_65C8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_65F8
// lab_65F8
    pri = arg_3;
    OP_JZER lab_6630
    var_8 = 1;
    var_16 = 8;
    pri = fun_12D0(var_8)
// lab_6630
    pri = 0;
    return pri;
// lab_65C8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E70(var_16, var_8)
// lab_64F8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1248(var_16, var_8)
}
// fun_6640
fun_6640() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6100(var_24)
    pri = 0;
    return pri;
}
// fun_66A8
fun_66A8() {
    pri = g_mode;
    switch (pri) {
// switch_6768
        case default:
        {
// switch_6768_case_default
            pri = CommandNOP()
            OP_JUMP lab_67B0
// lab_67B0
            pri = 0;
            return pri;
        }
        case 0xbfaa32221e9aa37d:
        {
// switch_6768_case_0xbfaa32221e9aa37d
            var_8 = 0;
            pri = fun_73E8()
            OP_JUMP lab_67B0
        }
        case 0x0:
        {
// switch_6768_case_0x0
            var_8 = 0;
            pri = fun_67C0()
            OP_JUMP lab_67B0
        }
        case 0x5d6bf01e6dc2a779:
        {
// switch_6768_case_0x5d6bf01e6dc2a779
            var_8 = 0;
            pri = fun_74F0()
            OP_JUMP lab_67B0
        }
    }
}
// fun_67C0
fun_67C0() {
    pri = 0;
    return pri;
}
// fun_67D8
fun_67D8() {
    pri = 0;
    return pri;
}
// fun_67F0
fun_67F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6328(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6848
fun_6848() {
    var_8 = 7983844220748856187;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_6888
fun_6888() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_68B8
fun_68B8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4632487019206305382;
    var_40 = 0;
    OP_PUSH5_C 4662846239492223795, -4576943210208270746, 4666613193816775066, 4662863182966407823, -4576957987644548055
    var_48 = 4666620170218053304;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1DB0()
    var_72 = 0;
    var_80 = 4632487019206305382;
    var_88 = 3;
    OP_PUSH5_C 4663092013326380564, -4576960450550594273, 4666633562269679616, 4663108967795680870, -4576975227986871583
    var_96 = 4666640538670957855;
    var_104 = 45;
    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 5;
    var_120 = 5;
    var_128 = 7983844220748856187;
    var_136 = 24;
    pri = fun_0FA0(var_128, var_120, var_112)
    var_144 = 1;
    var_152 = 1;
    var_160 = -1;
    var_168 = -1;
    var_176 = 0;
    var_184 = 23;
    var_192 = 7983844220748856187;
    var_200 = 56;
    pri = fun_1E40(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 1;
    var_224 = 180;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 5850;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 9720;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 8802641224559852288;
    var_280 = 48;
    pri = fun_05E0(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 1;
    var_296 = 0;
    var_304 = 30;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 0;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 0;
    var_344 = 5730;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 9720;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_376 = 72;
    pri = fun_06A8(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0778(var_384)
    var_400 = 0;
    pri = fun_1DB0()
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C 2960365519817246899, 7983844220748856187
    var_448 = 56;
    pri = fun_1B78(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1CC0(var_456)
    var_472 = 0;
    pri = fun_1D80()
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 2960366619328875110, 7983844220748856187
    var_520 = 56;
    pri = fun_1B78(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1CC0(var_528)
    var_544 = 0;
    pri = fun_1D80()
    var_552 = 2;
    var_560 = 2;
    var_568 = 7983844220748856187;
    var_576 = 24;
    pri = fun_0FA0(var_568, var_560, var_552)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C 2960367718840503321, 7983844220748856187
    var_624 = 56;
    pri = fun_1B78(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1CC0(var_632)
    var_648 = 0;
    pri = fun_1D80()
    var_656 = 1;
    var_664 = 3;
    var_672 = 0;
    var_680 = 23;
    var_688 = 7983844220748856187;
    var_696 = 40;
    pri = fun_4178(var_688, var_680, var_672, var_664, var_656)
    var_704 = 7983844220748856187;
    var_712 = 8;
    pri = fun_0918(var_704)
    var_720 = 7983844220748856187;
    var_728 = 8;
    pri = fun_1008(var_720)
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    OP_PUSH2_C 2960368818352131532, 7983844220748856187
    var_776 = 56;
    pri = fun_1B78(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 1;
    var_792 = 8;
    pri = fun_1CC0(var_784)
    var_800 = 0;
    pri = fun_1D80()
    var_808 = 0;
    var_816 = 0;
    var_824 = 7983844220748856187;
    var_832 = 24;
    pri = fun_5EA8(var_824, var_816, var_808)
    var_840 = 1;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 7983844220748856187;
    var_864 = 8;
    pri = fun_0918(var_856)
    var_872 = 1;
    var_880 = 0;
    var_888 = 30;
    pri = float(var_888)
    var_896 = pri;
    var_904 = 0;
    pri = float(var_904)
    var_912 = pri;
    var_920 = 0;
    OP_PUSH4_C 4663095883607310336, 4666506568676671488, 4611686018427387904, 7983844220748856187
    var_928 = 72;
    pri = fun_06A8(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_936 = 40;
    var_944 = 8;
    pri = fun_0060(var_936)
    var_952 = 0;
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    OP_PUSH2_C 7983844220748856187, 8802641224559852288
    var_984 = 48;
    pri = fun_0720(var_976, var_968, var_960, var_952, var_944, var_936)
    var_992 = 8802641224559852288;
    var_1000 = 8;
    pri = fun_0778(var_992)
    var_1008 = 15;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 1;
    var_1032 = 0;
    var_1040 = 23400;
    var_1048 = 8;
    var_1056 = 32;
    pri = fun_02E0(var_1048, var_1040, var_1032, var_1024)
    var_1064 = 0;
    pri = fun_0350()
    var_1072 = 7983844220748856187;
    var_1080 = 8;
    pri = fun_0778(var_1072)
    var_1088 = 3;
    var_1096 = 1;
    pri = EvCameraEnd(var_1096, var_1088)
    var_1104 = 0;
    var_1112 = 7983844220748856187;
    var_1120 = 16;
    pri = fun_0638(var_1112, var_1104)
    var_1128 = 1;
    var_1136 = 1;
    var_1144 = 180;
    pri = float(var_1144)
    var_1152 = pri;
    var_1160 = 5730;
    pri = float(var_1160)
    var_1168 = pri;
    var_1176 = 9720;
    pri = float(var_1176)
    var_1184 = pri;
    var_1192 = 8802641224559852288;
    var_1200 = 48;
    pri = fun_05E0(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1208 = 15;
    var_1216 = 8;
    pri = fun_0060(var_1208)
    pri = 0;
    return pri;
}
// fun_7318
fun_7318() {
    pri = 0;
    return pri;
}
// fun_7330
fun_7330() {
    var_8 = 7983844220748856187;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 590;
    var_32 = 8;
    pri = fun_6640(var_24)
    pri = 0;
    return pri;
}
// fun_7390
fun_7390() {
    var_8 = 23448;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_73E8
fun_73E8() {
    var_8 = 0;
    pri = fun_67D8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_67F0()
    var_24 = 0;
    pri = fun_6848()
    var_32 = 0;
    pri = fun_6888()
    var_40 = 0;
    pri = fun_68B8()
    var_48 = 0;
    pri = fun_7318()
    var_56 = 0;
    pri = fun_7330()
    var_64 = 0;
    pri = fun_7390()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_74F0
fun_74F0() {
    var_8 = 0;
    pri = fun_6848()
    var_16 = 0;
    pri = fun_7330()
    pri = 0;
    return pri;
}
