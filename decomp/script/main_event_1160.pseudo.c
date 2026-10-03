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
    pri = fun_1218(var_8)
    OP_JZER lab_07F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1248(var_24)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0998
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09D8
// lab_09D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1218(var_8)
    OP_JNZ lab_0A60
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A50
    pri = 0;
    return pri;
// lab_0A60
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C78(var_8)
    pri = 0;
    return pri;
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D8
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0AA8
}
// fun_0B50
fun_0B50() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B98
// lab_0B98
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BF0
    pri = 0;
    return pri;
// lab_0BF0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C30
    pri = 0;
    return pri;
// lab_0C30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B98
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D00
    pri = 0;
    return pri;
// lab_0D00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1218(var_8)
    OP_JZER lab_0E30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D58
    OP_ZERO_P_S 64
// lab_0E30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E68
    OP_CONST_S 64, 1
// lab_0E68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA0
    OP_CONST_S 72, 1
// lab_0EA0
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
// lab_0D58
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D80
    OP_ZERO_P_S 72
// lab_0D80
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
    OP_JUMP lab_0F40
// lab_0F40
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1068
fun_1068() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1068(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_10E0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11C0
fun_11C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1120(var_24)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1278
fun_1278() {
    OP_JUMP lab_1290
// lab_1290
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1320
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1310
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_1320
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13B0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_13B0
    pri = 0;
    return pri;
// lab_13A0
    OP_JUMP lab_13C0
// lab_13C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1290
    pri = 0;
    return pri;
// lab_1310
    OP_JUMP lab_13C0
}
// fun_1400
fun_1400() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1278(var_40)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
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
// switch_1B38
        case default:
        {
// switch_1B38_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B80
// lab_1B80
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
            OP_JNZ lab_1C28
            var_88 = 0;
            pri = fun_1DE0()
// lab_1C28
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B38_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1720
                case default:
                {
// switch_1720_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1798
// lab_1798
                    OP_JUMP lab_1B80
                }
                case 0x0:
                {
// switch_1720_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1798
                }
                case 0x1:
                {
// switch_1720_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1798
                }
                case 0x2:
                {
// switch_1720_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1798
                }
                case 0x3:
                {
// switch_1720_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1798
                }
                case 0x4:
                {
// switch_1720_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1798
                }
                case 0x5:
                {
// switch_1720_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1798
                }
            }
        }
        case 0x65:
        {
// switch_1B38_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_18D8
                case default:
                {
// switch_18D8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1950
// lab_1950
                    OP_JUMP lab_1B80
                }
                case 0x0:
                {
// switch_18D8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1950
                }
                case 0x1:
                {
// switch_18D8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1950
                }
                case 0x2:
                {
// switch_18D8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1950
                }
                case 0x3:
                {
// switch_18D8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1950
                }
                case 0x4:
                {
// switch_18D8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1950
                }
                case 0x5:
                {
// switch_18D8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1950
                }
            }
        }
        case 0x66:
        {
// switch_1B38_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A90
                case default:
                {
// switch_1A90_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B08
// lab_1B08
                    OP_JUMP lab_1B80
                }
                case 0x0:
                {
// switch_1A90_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B08
                }
                case 0x1:
                {
// switch_1A90_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B08
                }
                case 0x2:
                {
// switch_1A90_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B08
                }
                case 0x3:
                {
// switch_1A90_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B08
                }
                case 0x4:
                {
// switch_1A90_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B08
                }
                case 0x5:
                {
// switch_1A90_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B08
                }
            }
        }
    }
}
// fun_1C40
fun_1C40() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0918(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1CE8
    pri = 1;
    return pri;
// lab_1CE8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D30
fun_1D30() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C40(var_8)
    arg_2 = pri;
// lab_1D80
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1520(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE0
fun_1DE0() {
    OP_JUMP lab_1DF8
// lab_1DF8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E38
    pri = 0;
    return pri;
// lab_1E38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DF8
    pri = 0;
    return pri;
}
// fun_1E78
fun_1E78() {
    var_8 = 0;
    pri = fun_1DE0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F28
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F28
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1F98
// lab_1F98
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FD8
    OP_JUMP lab_2008
// lab_1FD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F98
// lab_2008
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
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
// fun_20C0
fun_20C0() {
    OP_JUMP lab_20D8
// lab_20D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2110
    pri = 0;
    return pri;
// lab_2110
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20D8
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    pri = arg_6;
    OP_JNZ lab_2188
    var_8 = 0;
    pri = fun_0F50()
// lab_2188
    pri = arg_1;
    switch (pri) {
// switch_36F0
        case default:
        {
// switch_36F0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3A40
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3A40
            pri = 1;
            OP_JUMP lab_3A48
// lab_3A40
            pri = 0;
// lab_3A48
            OP_JZER lab_3BA0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0918(var_24, var_16)
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
            OP_JUMP lab_3C00
// lab_3BA0
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
// lab_3C00
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3C60
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3CC0
// lab_3C60
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3CC0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3CC0
            pri = arg_2;
            OP_JZER lab_3D00
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3D00
            var_8 = 0;
            pri = fun_0F90()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_36F0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1:
        {
// switch_36F0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x2:
        {
// switch_36F0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x3:
        {
// switch_36F0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x4:
        {
// switch_36F0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x5:
        {
// switch_36F0_case_0x5
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x6:
        {
// switch_36F0_case_0x6
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x7:
        {
// switch_36F0_case_0x7
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x8:
        {
// switch_36F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x9:
        {
// switch_36F0_case_0x9
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xa:
        {
// switch_36F0_case_0xa
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xb:
        {
// switch_36F0_case_0xb
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xc:
        {
// switch_36F0_case_0xc
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xd:
        {
// switch_36F0_case_0xd
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xe:
        {
// switch_36F0_case_0xe
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0xf:
        {
// switch_36F0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x10:
        {
// switch_36F0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x11:
        {
// switch_36F0_case_0x11
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x12:
        {
// switch_36F0_case_0x12
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x13:
        {
// switch_36F0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x14:
        {
// switch_36F0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x15:
        {
// switch_36F0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x16:
        {
// switch_36F0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x17:
        {
// switch_36F0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x18:
        {
// switch_36F0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x19:
        {
// switch_36F0_case_0x19
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
            pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1a:
        {
// switch_36F0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08A0(var_48, var_40)
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
            pri = fun_0CB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1b:
        {
// switch_36F0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08A0(var_48, var_40)
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
            pri = fun_0CB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1c:
        {
// switch_36F0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08A0(var_48, var_40)
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
            pri = fun_0CB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1d:
        {
// switch_36F0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1e:
        {
// switch_36F0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x1f:
        {
// switch_36F0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x20:
        {
// switch_36F0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x21:
        {
// switch_36F0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x22:
        {
// switch_36F0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x23:
        {
// switch_36F0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x24:
        {
// switch_36F0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x25:
        {
// switch_36F0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x26:
        {
// switch_36F0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x27:
        {
// switch_36F0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x28:
        {
// switch_36F0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
        case 0x29:
        {
// switch_36F0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36F0_case_default
        }
    }
}
// fun_3D30
fun_3D30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_44A0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8440;
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
    var_424 = 8496;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8512;
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
    OP_JZER lab_3F28
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3F28
    pri = 0;
    return pri;
}
// fun_3F40
fun_3F40() {
    pri = arg_4;
    OP_JNZ lab_3F78
    var_8 = 0;
    pri = fun_0F50()
// lab_3F78
    pri = arg_1;
    OP_JNZ lab_4020
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 8864;
    var_72 = 8856;
    var_80 = 8712;
    var_88 = 8560;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_4020
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4080
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_4080
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4130
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 9320;
    var_72 = 9176;
    var_80 = 9024;
    var_88 = 8872;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_4130
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_41E0
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 9952;
    var_72 = 9800;
    var_80 = 9632;
    var_88 = 9456;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_41E0
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_4290
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 10152;
    var_72 = 10144;
    var_80 = 10136;
    var_88 = 9960;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_4290
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_4340
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 10568;
    var_72 = 10440;
    var_80 = 10304;
    var_88 = 10160;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0CB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_4340
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_43A0
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_43A0
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_4400
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_4400
    var_8 = 0;
    pri = fun_0F90()
    pri = 0;
    return pri;
}
// fun_4428
fun_4428() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4460(var_8)
    pri = 0;
    return pri;
}
// fun_4460
fun_4460() {
    var_8 = 10736;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_08A0(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_44A0
fun_44A0() {
    var_8 = arg_1;
    var_16 = 10920;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08D8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_44E8
fun_44E8() {
    pri = 11024;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4570
// lab_4570
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_46F0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_46E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4630
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4630
    pri = 0;
    OP_JUMP lab_4638
// lab_46F0
    pri = 0;
    return pri;
// lab_46E0
    OP_JUMP lab_4568
// lab_4568
    OP_INC_P_S -936
// lab_4630
    pri = 1;
// lab_4638
    OP_JZER lab_46B0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_46A8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_46B0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_46A8
}
// fun_4710
fun_4710() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_47A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 11944;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_14C0()
// lab_47A8
    pri = arg_4;
    OP_JZER lab_47E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_14E8(var_8)
// lab_47E0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4838
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4838
    pri = 0;
    OP_JUMP lab_4840
// lab_4838
    pri = 1;
// lab_4840
    OP_JZER lab_4908
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4908
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_48E0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1400(var_32, var_24)
    OP_JUMP lab_4908
// lab_4908
    pri = arg_2;
    OP_JZER lab_49E0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_49B0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1028(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_49E0
// lab_49E0
    pri = arg_3;
    OP_JZER lab_4A18
    var_8 = 1;
    var_16 = 8;
    pri = fun_1488(var_8)
// lab_4A18
    pri = 0;
    return pri;
// lab_49B0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1028(var_16, var_8)
// lab_48E0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1400(var_16, var_8)
}
// fun_4A28
fun_4A28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_44E8(var_24)
    pri = 0;
    return pri;
}
// fun_4A90
fun_4A90() {
    pri = g_mode;
    switch (pri) {
// switch_4B78
        case default:
        {
// switch_4B78_case_default
            pri = CommandNOP()
            OP_JUMP lab_4BD0
// lab_4BD0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4B78_case_0x0
            var_8 = 0;
            pri = fun_4BE0()
            OP_JUMP lab_4BD0
        }
        case 0x248546276b4d081e:
        {
// switch_4B78_case_0x248546276b4d081e
            var_8 = 0;
            pri = fun_7FB0()
            OP_JUMP lab_4BD0
        }
        case 0x41c9a02af52afdc2:
        {
// switch_4B78_case_0x41c9a02af52afdc2
            var_8 = 0;
            pri = fun_7EC0()
            OP_JUMP lab_4BD0
        }
        case 0x475f959abbf35036:
        {
// switch_4B78_case_0x475f959abbf35036
            var_8 = 0;
            pri = fun_8028()
            OP_JUMP lab_4BD0
        }
    }
}
// fun_4BE0
fun_4BE0() {
    pri = 0;
    return pri;
}
// fun_4BF8
fun_4BF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4710(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4C50
fun_4C50() {
    pri = 0;
    return pri;
}
// fun_4C68
fun_4C68() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_4C98
fun_4C98() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C -7748209240823921678, 8802641224559852288
    var_56 = 48;
    pri = fun_0720(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 8;
    pri = fun_0778(var_64)
    var_80 = 15;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 200;
    var_104 = 3;
    OP_PUSH2_C 4602678819172646912, -7748209240823921678
    var_112 = 40;
    pri = EvCameraMoveOffsetChr(var_112, var_104, var_96, var_88, var_80)
    var_120 = 0;
    pri = fun_20C0()
    var_128 = 30;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 0;
    OP_PUSH5_C 4668051201094278185, 4636248228582601523, 4671119204123389460, 4668060255572532920, 4636369966510028882
    var_168 = 4671116122742052618;
    var_176 = 1;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    pri = fun_20C0()
    var_192 = 0;
    var_200 = 4631952216750555136;
    var_208 = 3;
    OP_PUSH5_C 4668083878579855688, 4636248228582601523, 4671143233950014505, 4668092938555668562, 4636369966510028882
    var_216 = 4671140155317456732;
    var_224 = 50;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 206712646364256524;
    var_240 = 8;
    pri = fun_0408(var_232)
    var_248 = 0;
    pri = fun_0438()
    var_256 = 1;
    var_264 = 1;
    OP_PUSH4_C -4582834833314545664, 4668120101990432768, 4671177678900533658, 8802641224559852288
    var_272 = 48;
    pri = fun_05E0(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = 1;
    var_288 = 1;
    OP_PUSH4_C 4636899139466244915, 4668096462490435584, 4671061295594733568, 206712646364256524
    var_296 = 48;
    pri = fun_05E0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 1;
    var_312 = 0;
    var_320 = 4641240890982006784;
    var_328 = 0;
    var_336 = 0;
    OP_PUSH4_C 4668032141060210688, 4671177678900533658, 4607182418800017408, 8802641224559852288
    var_344 = 72;
    pri = fun_06A8(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0778(var_352)
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH2_C 8802641224559852288, -7748209240823921678
    var_400 = 48;
    pri = fun_0720(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = -7748209240823921678;
    var_416 = 8;
    pri = fun_0778(var_408)
    var_424 = 20;
    var_432 = 8;
    pri = fun_0060(var_424)
    var_440 = 0;
    pri = fun_20C0()
    var_448 = 0;
    var_456 = 4629447089457830298;
    var_464 = 0;
    OP_PUSH5_C 4667953053188824760, 4636780216288584663, 4671155573219257221, 4667962640930218967, 4636398114007699948
    var_472 = 4671153341210652836;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    pri = fun_20C0()
    var_496 = 11992;
    pri = SoundPostEvent(var_496)
    var_504 = 0;
    var_512 = 1;
    var_520 = -7748209240823921678;
    var_528 = 24;
    pri = fun_3D30(var_520, var_512, var_504)
    var_536 = 1;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = -7748209240823921678;
    var_560 = 8;
    pri = fun_0950(var_552)
    var_568 = 50;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 4631952216750555136;
    var_600 = 3;
    OP_PUSH5_C 4668083878579855688, 4636248228582601523, 4671143233950014505, 4668092938555668562, 4636369966510028882
    var_608 = 4671140155317456732;
    var_616 = 1;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    pri = fun_20C0()
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C 5595499229205688455, -7748209240823921678
    var_672 = 56;
    pri = fun_1D30(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_1E78(var_680)
    var_696 = 0;
    var_704 = -2898875888596323503;
    var_712 = 0;
    var_720 = 24;
    pri = fun_1F68(var_712, var_704, var_696)
    var_728 = 0;
    var_736 = -2898879187131208136;
    var_744 = 1;
    var_752 = 24;
    pri = fun_1F68(var_744, var_736, var_728)
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    var_792 = 1;
    var_800 = 32;
    pri = fun_2050(var_792, var_784, var_776, var_768)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_55A8
        case default:
        {
// switch_55A8_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = -7748209240823921678;
            var_32 = 24;
            pri = fun_3D30(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = -7748209240823921678;
            var_64 = 8;
            pri = fun_0950(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 5595493731647547400, -7748209240823921678
            var_112 = 56;
            pri = fun_1D30(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1E78(var_120)
            var_136 = 0;
            pri = fun_1F38()
            var_144 = 20;
            var_152 = 8;
            pri = fun_0060(var_144)
            var_160 = 0;
            var_168 = 4631952216750555136;
            var_176 = 0;
            OP_PUSH5_C 4668066792169160049, 4637044099079250903, 4671137684165073306, 4668236919603325829, 4638609099949762150
            var_184 = 4671124927081412035;
            var_192 = 1;
            pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_200 = 0;
            pri = fun_20C0()
            var_208 = 0;
            var_216 = 4631952216750555136;
            var_224 = 3;
            OP_PUSH5_C 4668060178606718976, 4637044099079250903, 4671115677439843369, 4668230300543326618, 4638609099949762150
            var_232 = 4671102920356182098;
            var_240 = 30;
            pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_248 = 1;
            var_256 = 0;
            var_264 = 4641240890982006784;
            var_272 = 0;
            var_280 = 0;
            OP_PUSH4_C 4668096462490435584, 4671087683873800192, 4607182418800017408, 206712646364256524
            var_288 = 72;
            pri = fun_06A8(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
            var_296 = 0;
            pri = fun_20C0()
            var_304 = 206712646364256524;
            var_312 = 8;
            pri = fun_0778(var_304)
            var_320 = 0;
            var_328 = 0;
            var_336 = 0;
            var_344 = 0;
            OP_PUSH2_C -7748209240823921678, 206712646364256524
            var_352 = 48;
            pri = fun_0720(var_344, var_336, var_328, var_320, var_312, var_304)
            var_360 = 0;
            var_368 = 3;
            var_376 = 0;
            var_384 = 100;
            var_392 = -1;
            OP_PUSH2_C -7616095565195607768, 206712646364256524
            var_400 = 56;
            pri = fun_1D30(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
            var_408 = 1;
            var_416 = 8;
            pri = fun_1E78(var_408)
            var_424 = 0;
            pri = fun_1F38()
            var_432 = 206712646364256524;
            var_440 = 8;
            pri = fun_0778(var_432)
            var_448 = 0;
            var_456 = 4631164086815765299;
            var_464 = 0;
            OP_PUSH5_C 4668005290986260398, 4636031492850534318, 4671132431248271606, 4668070420557531709, 4636906880028104458
            var_472 = 4671110300827983544;
            var_480 = 1;
            pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
            var_488 = 0;
            pri = fun_20C0()
            var_496 = 0;
            var_504 = 4631164086815765299;
            var_512 = 0;
            OP_PUSH5_C 4668005082079051121, 4636400928757467054, 4671132499967748342, 4668014142054863995, 4636522666684894413
            var_520 = 4671129421335190569;
            var_528 = 600;
            pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_536 = 20;
            var_544 = 8;
            pri = fun_0060(var_536)
            var_552 = 1;
            var_560 = -1;
            var_568 = -1;
            var_576 = 3;
            var_584 = 0;
            var_592 = 10;
            var_600 = -7748209240823921678;
            var_608 = 56;
            pri = fun_2150(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
            var_616 = -7748209240823921678;
            var_624 = 8;
            pri = fun_0950(var_616)
            var_632 = 30;
            var_640 = 8;
            pri = fun_0060(var_632)
            var_648 = 0;
            var_656 = 3;
            var_664 = 0;
            var_672 = 100;
            var_680 = -1;
            OP_PUSH2_C -7616087868614210291, 206712646364256524
            var_688 = 56;
            pri = fun_1D30(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
            var_696 = 1;
            var_704 = 8;
            pri = fun_1E78(var_696)
            var_712 = 0;
            pri = fun_1F38()
            var_720 = 0;
            var_728 = 3;
            var_736 = 0;
            var_744 = 100;
            var_752 = -1;
            OP_PUSH2_C -7616088968125838502, 206712646364256524
            var_760 = 56;
            pri = fun_1D30(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
            var_768 = 1;
            var_776 = 8;
            pri = fun_1E78(var_768)
            var_784 = 0;
            pri = fun_1F38()
            var_792 = 20;
            var_800 = 8;
            pri = fun_0060(var_792)
            var_808 = 1;
            var_816 = 1;
            var_824 = -1;
            OP_PUSH2_C 206712646364256524, -7748209240823921678
            var_832 = 40;
            pri = fun_0FD0(var_824, var_816, var_808, var_800, var_792)
            var_840 = 40;
            var_848 = 8;
            pri = fun_0060(var_840)
            var_856 = 0;
            var_864 = 0;
            var_872 = 0;
            var_880 = 0;
            OP_PUSH2_C 206712646364256524, -7748209240823921678
            var_888 = 48;
            pri = fun_0720(var_880, var_872, var_864, var_856, var_848, var_840)
            var_896 = -7748209240823921678;
            var_904 = 8;
            pri = fun_0778(var_896)
            var_912 = -1;
            var_920 = -7748209240823921678;
            var_928 = 16;
            pri = fun_1028(var_920, var_912)
            var_936 = 20;
            var_944 = 8;
            pri = fun_0060(var_936)
            var_952 = 0;
            var_960 = 4630122629401935872;
            var_968 = 0;
            OP_PUSH5_C 4668093334379854561, 4638469066148848599, 4671099445899438326, 4668133026749617275, 4638956369702278922
            var_976 = 4671134701739782963;
            var_984 = 1;
            pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
            var_992 = 0;
            pri = fun_20C0()
            var_1000 = 0;
            var_1008 = 4630122629401935872;
            var_1016 = 3;
            OP_PUSH5_C 4668093334379854561, 4638469066148848599, 4671099445899438326, 4668116638528805274, 4638804373214855168
            var_1024 = 4671120146954610278;
            var_1032 = 3;
            pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
            var_1040 = 0;
            pri = fun_20C0()
            var_1048 = 6;
            var_1056 = 4;
            var_1064 = 206712646364256524;
            var_1072 = 24;
            pri = fun_1158(var_1064, var_1056, var_1048)
            var_1080 = 12152;
            pri = SoundPostEvent(var_1080)
            var_1088 = 12312;
            pri = SoundPostEvent(var_1088)
            var_1096 = 12496;
            pri = SoundPostEvent(var_1096)
            var_1104 = 0;
            var_1112 = 3;
            var_1120 = 0;
            var_1128 = 100;
            var_1136 = -1;
            OP_PUSH2_C -7616101062753748823, 206712646364256524
            var_1144 = 56;
            pri = fun_1D30(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
            var_1152 = 1;
            var_1160 = 8;
            pri = fun_1E78(var_1152)
            var_1168 = 0;
            pri = fun_1F38()
            var_1176 = 0;
            var_1184 = 4631952216750555136;
            var_1192 = 0;
            OP_PUSH5_C 4667904344823714284, 4638552804954420019, 4671170914155243766, 4667937484104175452, 4638786781028810752
            var_1200 = 4671175565089429258;
            var_1208 = 1;
            pri = EvCameraMove(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
            var_1216 = 0;
            pri = fun_20C0()
            var_1224 = 206712646364256524;
            var_1232 = 8;
            pri = fun_11C0(var_1224)
            var_1240 = 0;
            var_1248 = 4631952216750555136;
            var_1256 = 3;
            OP_PUSH5_C 4667901277186272788, 4638552804954420019, 4671176381476812882, 4667934416466733957, 4638786781028810752
            var_1264 = 4671181029662219305;
            var_1272 = 15;
            pri = EvCameraMove(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
            var_1280 = 4;
            var_1288 = 4;
            var_1296 = -7748209240823921678;
            var_1304 = 24;
            pri = fun_1158(var_1296, var_1288, var_1280)
            var_1312 = 1;
            var_1320 = -1;
            var_1328 = -1;
            var_1336 = 6;
            var_1344 = -7748209240823921678;
            var_1352 = 40;
            pri = fun_3F40(var_1344, var_1336, var_1328, var_1320, var_1312)
            var_1360 = 0;
            var_1368 = 3;
            var_1376 = 0;
            var_1384 = 100;
            var_1392 = -1;
            OP_PUSH2_C 5595494831159175611, -7748209240823921678
            var_1400 = 56;
            pri = fun_1D30(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
            var_1408 = 1;
            var_1416 = 8;
            pri = fun_1E78(var_1408)
            var_1424 = 0;
            pri = fun_1F38()
            var_1432 = 0;
            pri = fun_20C0()
            var_1440 = 0;
            var_1448 = 4631952216750555136;
            var_1456 = 0;
            OP_PUSH5_C 4668168590453217690, 4635058293118557225, 4671098483826764022, 4668213450527630950, 4634714893646970225
            var_1464 = 4671092865322346086;
            var_1472 = 1;
            pri = EvCameraMove(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
            var_1480 = 0;
            pri = fun_20C0()
            var_1488 = -7748209240823921678;
            var_1496 = 8;
            pri = fun_11C0(var_1488)
            var_1504 = 1;
            var_1512 = 1;
            OP_PUSH4_C 4639175568340392346, 4667894152350924800, 4671168772856348672, 206712646364256524
            var_1520 = 48;
            pri = fun_05E0(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
            var_1528 = 0;
            var_1536 = 0;
            var_1544 = 206712646364256524;
            var_1552 = 24;
            pri = fun_1158(var_1544, var_1536, var_1528)
            var_1560 = 0;
            var_1568 = 0;
            var_1576 = -7748209240823921678;
            var_1584 = 24;
            pri = fun_1158(var_1576, var_1568, var_1560)
            var_1592 = 12656;
            pri = SoundPostEvent(var_1592)
            var_1600 = 1;
            var_1608 = -1;
            var_1616 = -1;
            var_1624 = 6;
            var_1632 = 206712646364256524;
            var_1640 = 40;
            pri = fun_3F40(var_1632, var_1624, var_1616, var_1608, var_1600)
            var_1648 = 20;
            var_1656 = 8;
            pri = fun_0060(var_1648)
            var_1664 = 0;
            var_1672 = 4629798933178718618;
            var_1680 = 0;
            OP_PUSH5_C 4667954570514871091, 4637455756232690237, 4671180180289486848, 4667964911421730324, 4637409312861532979
            var_1688 = 4671182052208033137;
            var_1696 = 1;
            pri = EvCameraMove(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
            var_1704 = 0;
            pri = fun_20C0()
            var_1712 = 0;
            var_1720 = 4629798933178718618;
            var_1728 = 3;
            OP_PUSH5_C 4667948979498243850, 4637455756232690237, 4671187907107451044, 4667959320405103084, 4637409312861532979
            var_1736 = 4671189779025997332;
            var_1744 = 8;
            pri = EvCameraMove(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
            var_1752 = -7748209240823921678;
            var_1760 = 8;
            pri = fun_4428(var_1752)
            var_1768 = 12840;
            var_1776 = 206712646364256524;
            var_1784 = 16;
            pri = fun_0B50(var_1776, var_1768)
            var_1792 = 13016;
            var_1800 = -7748209240823921678;
            var_1808 = 16;
            pri = fun_0B50(var_1800, var_1792)
            var_1816 = 0;
            pri = fun_20C0()
            var_1824 = 13192;
            pri = SoundPostEvent(var_1824)
            var_1832 = 0;
            var_1840 = 3;
            var_1848 = 0;
            var_1856 = 100;
            var_1864 = -1;
            OP_PUSH2_C -7616102162265377034, 206712646364256524
            var_1872 = 56;
            pri = fun_1D30(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1880 = 1;
            var_1888 = 8;
            pri = fun_1E78(var_1880)
            var_1896 = 0;
            pri = fun_1F38()
            var_1904 = 0;
            var_1912 = 4629798933178718618;
            var_1920 = 0;
            OP_PUSH5_C 4667946060294872105, 4637360758428050391, 4671186029691346616, 4667956862996615004, 4637275612247595418
            var_1928 = 4671185051125997896;
            var_1936 = 1;
            pri = EvCameraMove(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
            var_1944 = 0;
            pri = fun_20C0()
            var_1952 = 0;
            var_1960 = 4629798933178718618;
            var_1968 = 3;
            OP_PUSH5_C 4667941238936384307, 4637360758428050391, 4671172695364080763, 4667952036140569068, 4637275612247595418
            var_1976 = 4671171719547511112;
            var_1984 = 8;
            pri = EvCameraMove(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
            var_1992 = 206712646364256524;
            var_2000 = 8;
            pri = fun_4428(var_1992)
            var_2008 = -7748209240823921678;
            var_2016 = 8;
            pri = fun_4428(var_2008)
            var_2024 = 13344;
            var_2032 = 206712646364256524;
            var_2040 = 16;
            pri = fun_0B50(var_2032, var_2024)
            var_2048 = 13520;
            var_2056 = -7748209240823921678;
            var_2064 = 16;
            pri = fun_0B50(var_2056, var_2048)
            var_2072 = 0;
            pri = fun_20C0()
            var_2080 = 13696;
            pri = SoundPostEvent(var_2080)
            var_2088 = 0;
            var_2096 = 3;
            var_2104 = 0;
            var_2112 = 100;
            var_2120 = -1;
            OP_PUSH2_C -7617084026149180232, 206712646364256524
            var_2128 = 56;
            pri = fun_1D30(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
            var_2136 = 1;
            var_2144 = 8;
            pri = fun_1E78(var_2136)
            var_2152 = 0;
            pri = fun_1F38()
            var_2160 = 0;
            var_2168 = 4629798933178718618;
            var_2176 = 0;
            OP_PUSH5_C 4667923481823595725, 4632205544229594726, 4671160226902221783, 4667949771146615849, 4632702347563489034
            var_2184 = 4671141961265305354;
            var_2192 = 1;
            pri = EvCameraMove(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
            var_2200 = 0;
            pri = fun_20C0()
            var_2208 = 0;
            var_2216 = 4629798933178718618;
            var_2224 = 3;
            OP_PUSH5_C 4667922690175223726, 4637242538937831916, 4671160776658035671, 4667948979498243850, 4637490940604779069
            var_2232 = 4671142513769898312;
            var_2240 = 8;
            pri = EvCameraMove(var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
            var_2248 = 206712646364256524;
            var_2256 = 8;
            pri = fun_4428(var_2248)
            var_2264 = -7748209240823921678;
            var_2272 = 8;
            pri = fun_4428(var_2264)
            var_2280 = 13848;
            var_2288 = 206712646364256524;
            var_2296 = 16;
            pri = fun_0B50(var_2288, var_2280)
            var_2304 = 14024;
            var_2312 = -7748209240823921678;
            var_2320 = 16;
            pri = fun_0B50(var_2312, var_2304)
            var_2328 = 0;
            pri = fun_20C0()
            var_2336 = 14200;
            pri = SoundPostEvent(var_2336)
            var_2344 = 0;
            var_2352 = 3;
            var_2360 = 0;
            var_2368 = 100;
            var_2376 = -1;
            OP_PUSH2_C -7617082926637552021, 206712646364256524
            var_2384 = 56;
            pri = fun_1D30(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
            var_2392 = 1;
            var_2400 = 8;
            pri = fun_1E78(var_2392)
            var_2408 = 0;
            pri = fun_1F38()
            var_2416 = 0;
            var_2424 = 4629798933178718618;
            var_2432 = 0;
            OP_PUSH5_C 4667884844984995676, 4635619835697094984, 4671179479350824141, 4667918665962666066, 4636141268091451474
            var_2440 = 4671172687117743555;
            var_2448 = 1;
            pri = EvCameraMove(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
            var_2456 = 0;
            pri = fun_20C0()
            var_2464 = 0;
            var_2472 = 4629798933178718618;
            var_2480 = 3;
            OP_PUSH5_C 4667882486532554097, 4638533101706050273, 4671179952140824084, 4667916307510224486, 4638881426989729710
            var_2488 = 4671173159907743498;
            var_2496 = 8;
            pri = EvCameraMove(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
            var_2504 = 206712646364256524;
            var_2512 = 8;
            pri = fun_4428(var_2504)
            var_2520 = -7748209240823921678;
            var_2528 = 8;
            pri = fun_4428(var_2520)
            var_2536 = 14352;
            var_2544 = 206712646364256524;
            var_2552 = 16;
            pri = fun_0B50(var_2544, var_2536)
            var_2560 = 14528;
            var_2568 = -7748209240823921678;
            var_2576 = 16;
            pri = fun_0B50(var_2568, var_2560)
            var_2584 = 0;
            pri = fun_20C0()
            var_2592 = 14704;
            pri = SoundPostEvent(var_2592)
            var_2600 = 0;
            var_2608 = 3;
            var_2616 = 0;
            var_2624 = 100;
            var_2632 = -1;
            OP_PUSH2_C -7617081827125923810, 206712646364256524
            var_2640 = 56;
            pri = fun_1D30(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
            var_2648 = 1;
            var_2656 = 8;
            pri = fun_1E78(var_2648)
            var_2664 = 0;
            pri = fun_1F38()
            var_2672 = 1;
            var_2680 = 0;
            var_2688 = 11944;
            var_2696 = 30;
            var_2704 = 32;
            pri = fun_02E0(var_2696, var_2688, var_2680, var_2672)
            var_2712 = 0;
            pri = fun_0350()
            var_2720 = 206712646364256524;
            var_2728 = 8;
            pri = fun_4428(var_2720)
            var_2736 = -7748209240823921678;
            var_2744 = 8;
            pri = fun_4428(var_2736)
            var_2752 = 206712646364256524;
            var_2760 = 8;
            pri = fun_0950(var_2752)
            var_2768 = -7748209240823921678;
            var_2776 = 8;
            pri = fun_0950(var_2768)
            var_2784 = 206712646364256524;
            var_2792 = 8;
            pri = fun_11C0(var_2784)
            var_2800 = -7748209240823921678;
            var_2808 = 8;
            pri = fun_11C0(var_2800)
            var_2816 = 1;
            var_2824 = 1;
            OP_PUSH4_C -4584812195025938022, 4668358696013660160, 4671185100604021146, 8802641224559852288
            var_2832 = 48;
            pri = fun_05E0(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784)
            var_2840 = 1;
            var_2848 = 1;
            var_2856 = -10;
            pri = float(var_2856)
            var_2864 = pri;
            OP_PUSH3_C 4668277881909018624, 4671130839705190400, -7748209240823921678
            var_2872 = 48;
            pri = fun_05E0(var_2864, var_2856, var_2848, var_2840, var_2832, var_2824)
            var_2880 = 1;
            var_2888 = 1;
            OP_PUSH4_C 4639643520489173811, 4668321862374129664, 4671121768734261248, 206712646364256524
            var_2896 = 48;
            pri = fun_05E0(var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
            var_2904 = 100;
            var_2912 = 8;
            pri = fun_0060(var_2904)
            var_2920 = 0;
            var_2928 = 4629995965662416077;
            var_2936 = 0;
            OP_PUSH5_C 4667774261603032105, -4585417366225865933, 4671011001184100024, 4668428756894582047, 4639037997445525012
            var_2944 = 4671215546080994263;
            var_2952 = 1;
            pri = EvCameraMove(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880)
            var_2960 = 0;
            pri = fun_20C0()
            var_2968 = 0;
            var_2976 = 4629995965662416077;
            var_2984 = 3;
            OP_PUSH5_C 4667795509665238876, -4585417366225865933, 4670993988990439260, 4668449927990974874, 4639071774442730291
            var_2992 = 4671198536636112568;
            var_3000 = 50;
            pri = EvCameraMove(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928)
            var_3008 = 1;
            var_3016 = 1;
            var_3024 = -1;
            OP_PUSH2_C 206712646364256524, -7748209240823921678
            var_3032 = 40;
            pri = fun_0FD0(var_3024, var_3016, var_3008, var_3000, var_2992)
            var_3040 = 14904;
            pri = SoundPostEvent(var_3040)
            var_3048 = 1;
            var_3056 = 8;
            pri = fun_0060(var_3048)
            var_3064 = 15032;
            pri = SoundPostEvent(var_3064)
            var_3072 = 15184;
            var_3080 = 30;
            var_3088 = 16;
            pri = fun_0280(var_3080, var_3072)
            var_3096 = 0;
            pri = fun_0350()
            var_3104 = 0;
            pri = fun_20C0()
            var_3112 = 0;
            var_3120 = 3;
            var_3128 = 0;
            var_3136 = 100;
            var_3144 = -1;
            OP_PUSH2_C 5595495930670803822, -7748209240823921678
            var_3152 = 56;
            pri = fun_1D30(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
            var_3160 = 1;
            var_3168 = 8;
            pri = fun_1E78(var_3160)
            var_3176 = 0;
            pri = fun_1F38()
            var_3184 = 0;
            var_3192 = 3;
            var_3200 = 0;
            var_3208 = 100;
            var_3216 = -1;
            OP_PUSH2_C -7617080727614295599, 206712646364256524
            var_3224 = 56;
            pri = fun_1D30(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
            var_3232 = 1;
            var_3240 = 8;
            pri = fun_1E78(var_3232)
            var_3248 = 0;
            pri = fun_1F38()
            var_3256 = 0;
            var_3264 = 4629995965662416077;
            var_3272 = 0;
            OP_PUSH5_C 4667877368305926799, 4640600887253710930, 4670957301036199444, 4668369663642147226, 4637397350175022776
            var_3280 = 4671154066888327168;
            var_3288 = 1;
            pri = EvCameraMove(var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
            var_3296 = 0;
            pri = fun_20C0()
            var_3304 = 0;
            var_3312 = 4629995965662416077;
            var_3320 = 3;
            OP_PUSH5_C 4667877621193601188, 4640931268507625062, 4670957402741025014, 4668344006538313073, 4638326217598167941
            var_3328 = 4671143813942398157;
            var_3336 = 400;
            pri = EvCameraMove(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264)
            var_3344 = 0;
            var_3352 = 3;
            var_3360 = 0;
            var_3368 = 100;
            var_3376 = -1;
            OP_PUSH2_C -7617079628102667388, 206712646364256524
            var_3384 = 56;
            pri = fun_1D30(var_3376, var_3368, var_3360, var_3352, var_3344, var_3336, var_3328)
            var_3392 = 1;
            var_3400 = 8;
            pri = fun_1E78(var_3392)
            var_3408 = 0;
            pri = fun_1F38()
            var_3416 = 0;
            var_3424 = 1;
            var_3432 = -7748209240823921678;
            var_3440 = 24;
            pri = fun_3D30(var_3432, var_3424, var_3416)
            var_3448 = 1;
            var_3456 = 8;
            pri = fun_0060(var_3448)
            var_3464 = -7748209240823921678;
            var_3472 = 8;
            pri = fun_0950(var_3464)
            var_3480 = 0;
            var_3488 = 3;
            var_3496 = 0;
            var_3504 = 100;
            var_3512 = -1;
            OP_PUSH2_C 5595497030182432033, -7748209240823921678
            var_3520 = 56;
            pri = fun_1D30(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464)
            var_3528 = 1;
            var_3536 = 8;
            pri = fun_1E78(var_3528)
            var_3544 = 0;
            pri = fun_1F38()
            var_3552 = 0;
            var_3560 = 4629995965662416077;
            var_3568 = 0;
            OP_PUSH5_C 4667795509665238876, -4585417366225865933, 4670993988990439260, 4668449927990974874, 4639071774442730291
            var_3576 = 4671198536636112568;
            var_3584 = 1;
            pri = EvCameraMove(var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512)
            var_3592 = 0;
            var_3600 = 0;
            var_3608 = -7748209240823921678;
            var_3616 = 24;
            pri = fun_3D30(var_3608, var_3600, var_3592)
            var_3624 = 1;
            var_3632 = 8;
            pri = fun_0060(var_3624)
            var_3640 = -7748209240823921678;
            var_3648 = 8;
            pri = fun_0950(var_3640)
            var_3656 = -1;
            var_3664 = -7748209240823921678;
            var_3672 = 16;
            pri = fun_1028(var_3664, var_3656)
            var_3680 = 0;
            var_3688 = 0;
            var_3696 = 0;
            var_3704 = 0;
            OP_PUSH2_C 8802641224559852288, -7748209240823921678
            var_3712 = 48;
            pri = fun_0720(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664)
            var_3720 = 0;
            var_3728 = 0;
            var_3736 = 0;
            var_3744 = 0;
            OP_PUSH2_C 8802641224559852288, 206712646364256524
            var_3752 = 48;
            pri = fun_0720(var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
            var_3760 = -7748209240823921678;
            var_3768 = 8;
            pri = fun_0778(var_3760)
            var_3776 = 206712646364256524;
            var_3784 = 8;
            pri = fun_0778(var_3776)
            var_3792 = 0;
            var_3800 = 3;
            var_3808 = 0;
            var_3816 = 100;
            var_3824 = -1;
            OP_PUSH2_C -7616091167149094924, 206712646364256524
            var_3832 = 56;
            pri = fun_1D30(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776)
            var_3840 = 1;
            var_3848 = 8;
            pri = fun_1E78(var_3840)
            var_3856 = 0;
            pri = fun_1F38()
            var_3864 = 1;
            var_3872 = 0;
            var_3880 = 4641240890982006784;
            var_3888 = 0;
            var_3896 = 0;
            OP_PUSH4_C 4668321862374129664, 4671061845350547456, 4607182418800017408, 206712646364256524
            var_3904 = 72;
            pri = fun_06A8(var_3896, var_3888, var_3880, var_3872, var_3864, var_3856, var_3848, var_3840, var_3832)
            var_3912 = 30;
            var_3920 = 8;
            pri = fun_0060(var_3912)
            var_3928 = 1;
            var_3936 = -1;
            var_3944 = -1;
            var_3952 = 3;
            var_3960 = 0;
            var_3968 = 10;
            var_3976 = -7748209240823921678;
            var_3984 = 56;
            pri = fun_2150(var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928)
            var_3992 = -7748209240823921678;
            var_4000 = 8;
            pri = fun_0950(var_3992)
            var_4008 = 1;
            var_4016 = 0;
            var_4024 = 4641240890982006784;
            var_4032 = 0;
            var_4040 = 0;
            OP_PUSH4_C 4668277881909018624, 4671041504385433600, 4607182418800017408, -7748209240823921678
            var_4048 = 72;
            pri = fun_06A8(var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976)
            var_4056 = 50;
            var_4064 = 8;
            pri = fun_0060(var_4056)
            var_4072 = 1;
            var_4080 = 0;
            var_4088 = 11944;
            var_4096 = 8;
            var_4104 = 32;
            pri = fun_02E0(var_4096, var_4088, var_4080, var_4072)
            var_4112 = 0;
            pri = fun_0350()
            var_4120 = -7748209240823921678;
            var_4128 = 8;
            pri = fun_0778(var_4120)
            var_4136 = 206712646364256524;
            var_4144 = 8;
            pri = fun_0778(var_4136)
            var_4152 = 3;
            var_4160 = 1;
            pri = EvCameraEnd(var_4160, var_4152)
            var_4168 = 0;
            var_4176 = -7748209240823921678;
            var_4184 = 16;
            pri = fun_0638(var_4176, var_4168)
            var_4192 = 0;
            var_4200 = 206712646364256524;
            var_4208 = 16;
            pri = fun_0638(var_4200, var_4192)
            var_4216 = 15;
            var_4224 = 8;
            pri = fun_0060(var_4216)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_55A8_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 5595500328717316666, -7748209240823921678
            var_48 = 56;
            pri = fun_1D30(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1E78(var_56)
            var_72 = 0;
            pri = fun_1F38()
            OP_JUMP switch_55A8_case_default
        }
        case 0x1:
        {
// switch_55A8_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 5595501428228944877, -7748209240823921678
            var_48 = 56;
            pri = fun_1D30(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1E78(var_56)
            var_72 = 0;
            pri = fun_1F38()
            OP_JUMP switch_55A8_case_default
        }
    }
}
// fun_7D18
fun_7D18() {
    pri = 0;
    return pri;
}
// fun_7D30
fun_7D30() {
    var_8 = 206712646364256524;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = -7748209240823921678;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = 1170;
    var_48 = 8;
    pri = fun_4A28(var_40)
    var_56 = -8208209633826348795;
    var_64 = 8;
    pri = fun_0408(var_56)
    pri = 0;
    return pri;
}
// fun_7DE0
fun_7DE0() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 1;
    var_24 = 1;
    var_32 = 90;
    pri = float(var_32)
    var_40 = pri;
    OP_PUSH3_C 4668358696013660160, 4671185100604021146, 8802641224559852288
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 15184;
    var_64 = 8;
    var_72 = 16;
    pri = fun_0280(var_64, var_56)
    var_80 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7EC0
fun_7EC0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4BF8()
    var_16 = 0;
    pri = fun_4C50()
    var_24 = 0;
    pri = fun_4C68()
    var_32 = 0;
    pri = fun_4C98()
    var_40 = 0;
    pri = fun_7D18()
    var_48 = 0;
    pri = fun_7D30()
    var_56 = 0;
    pri = fun_7DE0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7FB0
fun_7FB0() {
    var_8 = 0;
    pri = fun_8640()
    var_16 = 0;
    pri = fun_8680()
    var_24 = 0;
    pri = fun_4C50()
    var_32 = 0;
    pri = fun_7D30()
    pri = 0;
    return pri;
}
// fun_8028
fun_8028() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4710(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    var_56 = 0;
    pri = fun_8640()
    var_64 = 0;
    pri = fun_0438()
    var_72 = 1;
    var_80 = 1;
    OP_PUSH4_C 4636033603912859648, 4666338343397621760, 4666442247246446592, 8802641224559852288
    var_88 = 48;
    pri = fun_05E0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4636033603912859648, 4666282818060419072, 4666490625758068736, 206712646364256524
    var_112 = 48;
    pri = fun_05E0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 4631952216750555136;
    var_136 = 0;
    OP_PUSH5_C 4666347122997969551, 4639949624526346650, 4666353698077503652, 4666671561391535555, 4638915907674376765
    var_144 = 4666584474573057556;
    var_152 = 1;
    pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 0;
    pri = fun_20C0()
    var_168 = 0;
    var_176 = 4631952216750555136;
    var_184 = 3;
    OP_PUSH5_C 4666278029687280108, 4639940124745882665, 4666450795949352550, 4666602440593055416, 4638906056050191892
    var_192 = 4666681638415604122;
    var_200 = 80;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 15;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 15184;
    var_232 = 8;
    var_240 = 16;
    pri = fun_0280(var_232, var_224)
    var_248 = 0;
    pri = fun_0350()
    var_256 = 0;
    pri = fun_20C0()
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    OP_PUSH2_C 206712646364256524, 8802641224559852288
    var_288 = 40;
    pri = fun_0FD0(var_280, var_272, var_264, var_256, var_248)
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C -7616093366172351346, 206712646364256524
    var_336 = 56;
    pri = fun_1D30(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_1E78(var_344)
    var_360 = 0;
    pri = fun_1F38()
    var_368 = 1;
    var_376 = 0;
    var_384 = 4641240890982006784;
    var_392 = 0;
    var_400 = 0;
    OP_PUSH4_C 4666282818060419072, 4666553297920851968, 4607182418800017408, 206712646364256524
    var_408 = 72;
    pri = fun_06A8(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 20;
    var_424 = 8;
    pri = fun_0060(var_416)
    var_432 = -1;
    var_440 = 8802641224559852288;
    var_448 = 16;
    pri = fun_1028(var_440, var_432)
    var_456 = 50;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 1;
    var_480 = 0;
    var_488 = 11944;
    var_496 = 8;
    var_504 = 32;
    pri = fun_02E0(var_496, var_488, var_480, var_472)
    var_512 = 0;
    pri = fun_0350()
    var_520 = 3;
    var_528 = 1;
    pri = EvCameraEnd(var_528, var_520)
    var_536 = 1;
    var_544 = 1;
    OP_PUSH2_C 4636033603912859648, 4666304808292974592
    var_552 = 9296;
    pri = float(var_552)
    var_560 = pri;
    var_568 = 8802641224559852288;
    var_576 = 48;
    pri = fun_05E0(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 30;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = 206712646364256524;
    var_608 = 8;
    pri = fun_0778(var_600)
    var_616 = 0;
    pri = fun_8680()
    var_624 = 15184;
    var_632 = 8;
    var_640 = 16;
    pri = fun_0280(var_632, var_624)
    var_648 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8640
fun_8640() {
    var_8 = 206712646364256524;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_8680
fun_8680() {
    var_8 = 206712646364256524;
    var_16 = 8;
    pri = fun_0588(var_8)
    pri = 0;
    return pri;
}
