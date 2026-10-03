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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_05E0
    OP_JUMP lab_0610
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0640
// lab_0640
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
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
// fun_0858
fun_0858() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1078(var_8)
    OP_JZER lab_0928
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10A8(var_24)
    OP_JNZ lab_0928
    pri = 0;
    return pri;
// lab_0928
    OP_JUMP lab_0938
// lab_0938
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0998
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0938
    pri = 0;
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD0
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B10
// lab_0B10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1078(var_8)
    OP_JNZ lab_0B98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B88
    pri = 0;
    return pri;
// lab_0B98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE0
    pri = 0;
    return pri;
// lab_0BE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C88(var_8)
    pri = 0;
    return pri;
// lab_0C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B10
    pri = 0;
    return pri;
// lab_0B88
    OP_JUMP lab_0BE0
}
// fun_0C88
fun_0C88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D10
    pri = 0;
    return pri;
// lab_0D10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1078(var_8)
    OP_JZER lab_0E40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_ZERO_P_S 64
// lab_0E40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E78
    OP_CONST_S 64, 1
// lab_0E78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB0
    OP_CONST_S 72, 1
// lab_0EB0
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
// lab_0D68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D90
    OP_ZERO_P_S 72
// lab_0D90
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
    OP_JUMP lab_0F50
// lab_0F50
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10D8
fun_10D8() {
    OP_JUMP lab_10F0
// lab_10F0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1180
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1170
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    pri = 0;
    return pri;
// lab_1180
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1210
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1200
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    pri = 0;
    return pri;
// lab_1210
    pri = 0;
    return pri;
// lab_1200
    OP_JUMP lab_1220
// lab_1220
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10F0
    pri = 0;
    return pri;
// lab_1170
    OP_JUMP lab_1220
}
// fun_1260
fun_1260() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10D8(var_40)
    pri = 0;
    return pri;
}
// fun_12E8
fun_12E8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1348
fun_1348() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
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
// switch_1998
        case default:
        {
// switch_1998_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19E0
// lab_19E0
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
            OP_JNZ lab_1A88
            var_88 = 0;
            pri = fun_1D58()
// lab_1A88
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1998_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1580
                case default:
                {
// switch_1580_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F8
// lab_15F8
                    OP_JUMP lab_19E0
                }
                case 0x0:
                {
// switch_1580_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15F8
                }
                case 0x1:
                {
// switch_1580_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15F8
                }
                case 0x2:
                {
// switch_1580_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15F8
                }
                case 0x3:
                {
// switch_1580_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F8
                }
                case 0x4:
                {
// switch_1580_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15F8
                }
                case 0x5:
                {
// switch_1580_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15F8
                }
            }
        }
        case 0x65:
        {
// switch_1998_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1738
                case default:
                {
// switch_1738_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17B0
// lab_17B0
                    OP_JUMP lab_19E0
                }
                case 0x0:
                {
// switch_1738_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17B0
                }
                case 0x1:
                {
// switch_1738_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17B0
                }
                case 0x2:
                {
// switch_1738_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17B0
                }
                case 0x3:
                {
// switch_1738_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17B0
                }
                case 0x4:
                {
// switch_1738_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17B0
                }
                case 0x5:
                {
// switch_1738_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17B0
                }
            }
        }
        case 0x66:
        {
// switch_1998_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18F0
                case default:
                {
// switch_18F0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1968
// lab_1968
                    OP_JUMP lab_19E0
                }
                case 0x0:
                {
// switch_18F0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1968
                }
                case 0x1:
                {
// switch_18F0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1968
                }
                case 0x2:
                {
// switch_18F0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1968
                }
                case 0x3:
                {
// switch_18F0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1968
                }
                case 0x4:
                {
// switch_18F0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1968
                }
                case 0x5:
                {
// switch_18F0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1968
                }
            }
        }
    }
}
// fun_1AA0
fun_1AA0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1380(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BB0
    pri = 1;
    return pri;
// lab_1BB0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BF8
fun_1BF8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B08(var_8)
    arg_2 = pri;
// lab_1C48
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1380(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CA8
fun_1CA8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AA0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CF8
fun_1CF8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1CA8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    OP_JUMP lab_1D70
// lab_1D70
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DB0
    pri = 0;
    return pri;
// lab_1DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D70
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
    var_8 = 0;
    pri = fun_1D58()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EA0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1EA0
    pri = 0;
    return pri;
}
// fun_1EB0
fun_1EB0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1EE0
fun_1EE0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F18
fun_1F18() {
    OP_JUMP lab_1F30
// lab_1F30
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1F78
    OP_JUMP lab_1FA8
    OP_JUMP lab_1F98
// lab_1F78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1FA8
    pri = 0;
    return pri;
// lab_1F98
    OP_JUMP lab_1F30
}
// fun_1FB8
fun_1FB8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2038
fun_2038() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2088
fun_2088() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2128
fun_2128() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2178
fun_2178() {
    OP_JUMP lab_2190
// lab_2190
    pri = EvCameraMoveWait_()
    OP_JZER lab_21C8
    pri = 0;
    return pri;
// lab_21C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2190
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    pri = arg_6;
    OP_JNZ lab_2278
    var_8 = 0;
    pri = fun_0F60()
// lab_2278
    pri = arg_1;
    switch (pri) {
// switch_37E0
        case default:
        {
// switch_37E0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B30
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B30
            pri = 1;
            OP_JUMP lab_3B38
// lab_3B30
            pri = 0;
// lab_3B38
            OP_JZER lab_3C90
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A50(var_24, var_16)
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
            OP_JUMP lab_3CF0
// lab_3C90
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
// lab_3CF0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D50
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3DB0
// lab_3D50
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3DB0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3DB0
            pri = arg_2;
            OP_JZER lab_3DF0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DF0
            var_8 = 0;
            pri = fun_0FA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37E0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1:
        {
// switch_37E0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x2:
        {
// switch_37E0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x3:
        {
// switch_37E0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x4:
        {
// switch_37E0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x5:
        {
// switch_37E0_case_0x5
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x6:
        {
// switch_37E0_case_0x6
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x7:
        {
// switch_37E0_case_0x7
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x8:
        {
// switch_37E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x9:
        {
// switch_37E0_case_0x9
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xa:
        {
// switch_37E0_case_0xa
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xb:
        {
// switch_37E0_case_0xb
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xc:
        {
// switch_37E0_case_0xc
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xd:
        {
// switch_37E0_case_0xd
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xe:
        {
// switch_37E0_case_0xe
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0xf:
        {
// switch_37E0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x10:
        {
// switch_37E0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x11:
        {
// switch_37E0_case_0x11
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x12:
        {
// switch_37E0_case_0x12
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x13:
        {
// switch_37E0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x14:
        {
// switch_37E0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x15:
        {
// switch_37E0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x16:
        {
// switch_37E0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x17:
        {
// switch_37E0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x18:
        {
// switch_37E0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x19:
        {
// switch_37E0_case_0x19
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
            pri = fun_0CC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1a:
        {
// switch_37E0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1b:
        {
// switch_37E0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1c:
        {
// switch_37E0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A10(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09D8(var_48, var_40)
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
            pri = fun_0CC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1d:
        {
// switch_37E0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1e:
        {
// switch_37E0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x1f:
        {
// switch_37E0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x20:
        {
// switch_37E0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x21:
        {
// switch_37E0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x22:
        {
// switch_37E0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x23:
        {
// switch_37E0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x24:
        {
// switch_37E0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x25:
        {
// switch_37E0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x26:
        {
// switch_37E0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x27:
        {
// switch_37E0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x28:
        {
// switch_37E0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
        case 0x29:
        {
// switch_37E0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E0_case_default
        }
    }
}
// fun_3E20
fun_3E20() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_3EB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A88(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2240(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_3EB8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_4010
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_3F78
    var_24 = 8440;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_3F78
    pri = 1;
    OP_JUMP lab_3F80
// lab_4010
    pri = 0;
    return pri;
// lab_3F78
    pri = 0;
// lab_3F80
    OP_JZER lab_4010
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A88(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2240(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_4020
fun_4020() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_43A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4088
fun_4088() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_40F8
    OP_CONST_S -8, 1
// lab_40F8
    pri = arg_0;
    OP_JNZ lab_4118
    OP_ZERO_P_S -8
// lab_4118
    pri = var_8;
    OP_JZER lab_41A0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_41A0
    pri = 0;
    return pri;
}
// fun_41B8
fun_41B8() {
    var_8 = 8544;
    var_16 = 8;
    pri = fun_1EE0(var_8)
    var_24 = 0;
    pri = fun_1F18()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1FE8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2128(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_42D0
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_42D0
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3E20(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_4020(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1FB8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2208(var_112)
    pri = 0;
    return pri;
}
// fun_43A0
fun_43A0() {
    var_8 = 8704;
    var_16 = 8;
    pri = fun_1EE0(var_8)
    var_24 = 0;
    pri = fun_1F18()
    pri = arg_3;
    OP_JNZ lab_44C0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_4488
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4530(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_44B0
// lab_44C0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_46D0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4488
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_45F8(var_16, var_8)
// lab_44B0
    OP_JUMP lab_4508
// lab_4508
    var_8 = 0;
    pri = fun_1FB8()
    pri = 0;
    return pri;
}
// fun_4530
fun_4530() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_46D0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_45E0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_45E0
    pri = 0;
    return pri;
}
// fun_45F8
fun_45F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2038(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1CF8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1DF0(var_72)
    var_88 = 0;
    pri = fun_1EB0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1FE8(var_96)
    pri = 0;
    return pri;
}
// fun_46D0
fun_46D0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4718
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_49D8(var_8)
// lab_4718
    pri = arg_4;
    OP_JNZ lab_4780
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FE8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2038(var_40, var_32, var_24)
// lab_4780
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4820
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2088(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1CF8(var_56, var_48, var_40)
    OP_JUMP lab_4910
// lab_4820
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_48D8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_48D8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_48D8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1CF8(var_24, var_16, var_8)
// lab_4910
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4950
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_4950
    var_8 = 1;
    var_16 = 8;
    pri = fun_1DF0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4BE0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_4088(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_49D8
fun_49D8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_4A38
    var_16 = 8864;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_4A38
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_4B78
        case default:
        {
// switch_4B78_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_4B68
            var_16 = 9408;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_4B68
            OP_JUMP lab_4BB0
// lab_4BB0
            var_8 = 9624;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_4B78_case_0x1
            var_8 = 9080;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4BB0
        }
        case 0x2:
        {
// switch_4B78_case_0x2
            var_8 = 9208;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4BB0
        }
    }
}
// fun_4BE0
fun_4BE0() {
    pri = arg_2;
    OP_JNZ lab_4CC8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FE8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2038(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_20D8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4CC8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1CF8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1DF0(var_40)
    var_56 = 0;
    pri = fun_1EB0()
    pri = 0;
    return pri;
}
// fun_4D40
fun_4D40() {
    pri = 9808;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4DC8
// lab_4DC8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4F48
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4F38
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4E88
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4E88
    pri = 0;
    OP_JUMP lab_4E90
// lab_4F48
    pri = 0;
    return pri;
// lab_4F38
    OP_JUMP lab_4DC0
// lab_4DC0
    OP_INC_P_S -936
// lab_4E88
    pri = 1;
// lab_4E90
    OP_JZER lab_4F08
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4F00
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4F08
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4F00
}
// fun_4F68
fun_4F68() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5000
    var_8 = 1;
    var_16 = 0;
    var_24 = 10728;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1320()
// lab_5000
    pri = arg_4;
    OP_JZER lab_5038
    var_8 = 1;
    var_16 = 8;
    pri = fun_1348(var_8)
// lab_5038
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5090
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5090
    pri = 0;
    OP_JUMP lab_5098
// lab_5090
    pri = 1;
// lab_5098
    OP_JZER lab_5160
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5160
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_5138
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1260(var_32, var_24)
    OP_JUMP lab_5160
// lab_5160
    pri = arg_2;
    OP_JZER lab_5238
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_5208
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1038(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A8(var_40)
    OP_JUMP lab_5238
// lab_5238
    pri = arg_3;
    OP_JZER lab_5270
    var_8 = 1;
    var_16 = 8;
    pri = fun_12E8(var_8)
// lab_5270
    pri = 0;
    return pri;
// lab_5208
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1038(var_16, var_8)
// lab_5138
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1260(var_16, var_8)
}
// fun_5280
fun_5280() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4D40(var_24)
    pri = 0;
    return pri;
}
// fun_52E8
fun_52E8() {
    pri = g_mode;
    switch (pri) {
// switch_53A8
        case default:
        {
// switch_53A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_53F0
// lab_53F0
            pri = 0;
            return pri;
        }
        case 0xc4a2ea1ea804000e:
        {
// switch_53A8_case_0xc4a2ea1ea804000e
            var_8 = 0;
            pri = fun_6140()
            OP_JUMP lab_53F0
        }
        case 0x0:
        {
// switch_53A8_case_0x0
            var_8 = 0;
            pri = fun_5400()
            OP_JUMP lab_53F0
        }
        case 0x58b0c421e48de6ea:
        {
// switch_53A8_case_0x58b0c421e48de6ea
            var_8 = 0;
            pri = fun_6050()
            OP_JUMP lab_53F0
        }
    }
}
// fun_5400
fun_5400() {
    pri = 0;
    return pri;
}
// fun_5418
fun_5418() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4F68(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5470
fun_5470() {
    var_8 = 8653505451221769205;
    var_16 = 8;
    pri = fun_0540(var_8)
    pri = 0;
    return pri;
}
// fun_54B0
fun_54B0() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_54E0
fun_54E0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4673937618012995584, 4674032450890891264, 8653505451221769205
    var_32 = 48;
    pri = fun_0718(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 20;
    var_48 = 8;
    pri = fun_0060(var_40)
    var_56 = -1;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_1038(var_64, var_56)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    OP_PUSH2_C 6447703469192041974, 8653505451221769205
    var_120 = 56;
    pri = fun_1BF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1DF0(var_128)
    var_144 = 0;
    pri = fun_1EB0()
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C -4586817704235001446, 4673957958978109440, 4673916177536253952, 8653505451221769205
    var_168 = 48;
    pri = fun_0718(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 5;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 0;
    var_200 = 4631037423076245504;
    var_208 = 3;
    OP_PUSH5_C 4673855404779807703, -4585631990895607808, 4673848312929808548, 4674030631199147295, 4631166901565532406
    var_216 = 4673932323864507843;
    var_224 = 20;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_264 = 48;
    pri = fun_0858(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_08B0(var_272)
    var_288 = 0;
    pri = fun_2178()
    var_296 = 30;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 0;
    var_320 = 4631037423076245504;
    var_328 = 0;
    OP_PUSH5_C 4673902716765150904, -4592039065052984115, 4673966175078747996, 4673995455073395671, 4627350100881335910
    var_336 = 4673871457649573233;
    var_344 = 1;
    pri = EvCameraMove(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 0;
    pri = fun_2178()
    var_360 = 0;
    var_368 = 4631037423076245504;
    var_376 = 3;
    OP_PUSH5_C 4673902716765150904, -4592039065052984115, 4673966175078747996, 4673987450628745462, 4625717546016414106
    var_384 = 4673879632518525747;
    var_392 = 10;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 0;
    pri = fun_2178()
    var_408 = 30;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C 6447702369680413763, 8653505451221769205
    var_464 = 56;
    pri = fun_1BF8(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1DF0(var_472)
    var_488 = 0;
    pri = fun_1EB0()
    var_496 = 15;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 0;
    var_520 = 4631037423076245504;
    var_528 = 3;
    OP_PUSH5_C 4673855404779807703, -4585631990895607808, 4673848312929808548, 4674030631199147295, 4631166901565532406
    var_536 = 4673932323864507843;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    var_560 = 14;
    OP_PUSH2_C 8497580040830310512, 8653505451221769205
    var_568 = 32;
    pri = fun_41B8(var_560, var_552, var_544, var_536)
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C 6447701270168785552, 8653505451221769205
    var_616 = 56;
    pri = fun_1BF8(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1DF0(var_624)
    var_640 = 0;
    pri = fun_1EB0()
    var_648 = 1;
    var_656 = 0;
    var_664 = 4641240890982006784;
    var_672 = 0;
    var_680 = 0;
    OP_PUSH4_C 4674009086268801024, 4673804577106034688, 4607182418800017408, 8653505451221769205
    var_688 = 72;
    pri = fun_07E0(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 50;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 1;
    var_720 = 1;
    var_728 = 30;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_736 = 40;
    pri = fun_0FE0(var_728, var_720, var_712, var_704, var_696)
    var_744 = 20;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_792 = 48;
    pri = fun_0858(var_784, var_776, var_768, var_760, var_752, var_744)
    var_800 = -1;
    var_808 = 8802641224559852288;
    var_816 = 16;
    pri = fun_1038(var_808, var_800)
    var_824 = 8802641224559852288;
    var_832 = 8;
    pri = fun_08B0(var_824)
    var_840 = 20;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 1;
    var_864 = 1;
    var_872 = -1;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_880 = 40;
    pri = fun_0FE0(var_872, var_864, var_856, var_848, var_840)
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_920 = 48;
    pri = fun_0858(var_912, var_904, var_896, var_888, var_880, var_872)
    var_928 = 8802641224559852288;
    var_936 = 8;
    pri = fun_08B0(var_928)
    var_944 = 60;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 1;
    var_968 = 1;
    var_976 = 40;
    OP_PUSH2_C 8653505451221769205, 8802641224559852288
    var_984 = 40;
    pri = fun_0FE0(var_976, var_968, var_960, var_952, var_944)
    var_992 = 40;
    var_1000 = 8;
    pri = fun_0060(var_992)
    var_1008 = 1;
    var_1016 = 0;
    var_1024 = 10728;
    var_1032 = 8;
    var_1040 = 32;
    pri = fun_0308(var_1032, var_1024, var_1016, var_1008)
    var_1048 = 0;
    pri = fun_0378()
    var_1056 = -1;
    var_1064 = 8802641224559852288;
    var_1072 = 16;
    pri = fun_1038(var_1064, var_1056)
    var_1080 = 8653505451221769205;
    var_1088 = 8;
    pri = fun_08B0(var_1080)
    var_1096 = 0;
    var_1104 = 8653505451221769205;
    var_1112 = 16;
    pri = fun_0770(var_1104, var_1096)
    var_1120 = 3;
    var_1128 = 1;
    pri = EvCameraEnd(var_1128, var_1120)
    var_1136 = 30;
    var_1144 = 8;
    pri = fun_0060(var_1136)
    pri = 0;
    return pri;
}
// fun_5F58
fun_5F58() {
    pri = 0;
    return pri;
}
// fun_5F70
fun_5F70() {
    var_8 = 8653505451221769205;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 935;
    var_32 = 8;
    pri = fun_5280(var_24)
    var_40 = 1106296903455206425;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_5FF8
fun_5FF8() {
    var_8 = 10776;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_6050
fun_6050() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5418()
    var_16 = 0;
    pri = fun_5470()
    var_24 = 0;
    pri = fun_54B0()
    var_32 = 0;
    pri = fun_54E0()
    var_40 = 0;
    pri = fun_5F58()
    var_48 = 0;
    pri = fun_5F70()
    var_56 = 0;
    pri = fun_5FF8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6140
fun_6140() {
    var_8 = 0;
    pri = fun_5470()
    var_16 = 0;
    pri = fun_5F70()
    var_24 = 14;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
