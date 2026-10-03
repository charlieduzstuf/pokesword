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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
}
// fun_0190
fun_0190() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04E8
    OP_JUMP lab_0558
// lab_04E8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0528
    OP_JUMP lab_0558
// lab_0528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0558
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_0610
    OP_JUMP lab_0640
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0640
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0670
// lab_0670
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
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
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0890
fun_0890() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_09B0
fun_09B0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
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
// fun_0BB8
fun_0BB8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C60
fun_0C60() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D0(var_8)
    OP_JZER lab_0CD8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1400(var_24)
    OP_JNZ lab_0CD8
    pri = 0;
    return pri;
// lab_0CD8
    OP_JUMP lab_0CE8
// lab_0CE8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D48
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CE8
    pri = 0;
    return pri;
}
// fun_0D88
fun_0D88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E38
fun_0E38() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0E80
    pri = 0;
    return pri;
// lab_0E80
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0EC0
// lab_0EC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D0(var_8)
    OP_JNZ lab_0F48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F38
    pri = 0;
    return pri;
// lab_0F48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0F90
    pri = 0;
    return pri;
// lab_0F90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0FF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EC0
    pri = 0;
    return pri;
// lab_0F38
    OP_JUMP lab_0F90
}
// fun_1038
fun_1038() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10C0
    pri = 0;
    return pri;
// lab_10C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D0(var_8)
    OP_JZER lab_11F0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1118
    OP_ZERO_P_S 64
// lab_11F0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1228
    OP_CONST_S 64, 1
// lab_1228
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1260
    OP_CONST_S 72, 1
// lab_1260
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
// lab_1118
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1140
    OP_ZERO_P_S 72
// lab_1140
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
    OP_JUMP lab_1300
// lab_1300
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1400
fun_1400() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1430
fun_1430() {
    OP_JUMP lab_1448
// lab_1448
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_14D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E38(var_8)
    pri = 0;
    return pri;
// lab_14D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1568
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1558
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E38(var_8)
    pri = 0;
    return pri;
// lab_1568
    pri = 0;
    return pri;
// lab_1558
    OP_JUMP lab_1578
// lab_1578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1448
    pri = 0;
    return pri;
// lab_14C8
    OP_JUMP lab_1578
}
// fun_15B8
fun_15B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E38(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1430(var_40)
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16A0
fun_16A0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
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
// switch_1D20
        case default:
        {
// switch_1D20_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1D68
// lab_1D68
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
            OP_JNZ lab_1E10
            var_88 = 0;
            pri = fun_1FC8()
// lab_1E10
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D20_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1908
                case default:
                {
// switch_1908_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1980
// lab_1980
                    OP_JUMP lab_1D68
                }
                case 0x0:
                {
// switch_1908_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1980
                }
                case 0x1:
                {
// switch_1908_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1980
                }
                case 0x2:
                {
// switch_1908_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1980
                }
                case 0x3:
                {
// switch_1908_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1980
                }
                case 0x4:
                {
// switch_1908_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1980
                }
                case 0x5:
                {
// switch_1908_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1980
                }
            }
        }
        case 0x65:
        {
// switch_1D20_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1AC0
                case default:
                {
// switch_1AC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B38
// lab_1B38
                    OP_JUMP lab_1D68
                }
                case 0x0:
                {
// switch_1AC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B38
                }
                case 0x1:
                {
// switch_1AC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B38
                }
                case 0x2:
                {
// switch_1AC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B38
                }
                case 0x3:
                {
// switch_1AC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B38
                }
                case 0x4:
                {
// switch_1AC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B38
                }
                case 0x5:
                {
// switch_1AC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B38
                }
            }
        }
        case 0x66:
        {
// switch_1D20_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1C78
                case default:
                {
// switch_1C78_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1CF0
// lab_1CF0
                    OP_JUMP lab_1D68
                }
                case 0x0:
                {
// switch_1C78_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1CF0
                }
                case 0x1:
                {
// switch_1C78_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1CF0
                }
                case 0x2:
                {
// switch_1C78_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1CF0
                }
                case 0x3:
                {
// switch_1C78_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1CF0
                }
                case 0x4:
                {
// switch_1C78_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1CF0
                }
                case 0x5:
                {
// switch_1C78_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1CF0
                }
            }
        }
    }
}
// fun_1E28
fun_1E28() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0E00(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1ED0
    pri = 1;
    return pri;
// lab_1ED0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F18
fun_1F18() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E28(var_8)
    arg_2 = pri;
// lab_1F68
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1708(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
    OP_JUMP lab_1FE0
// lab_1FE0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2020
    pri = 0;
    return pri;
// lab_2020
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FE0
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    var_8 = 0;
    pri = fun_1FC8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2110
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2110
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2180
// lab_2180
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21C0
    OP_JUMP lab_21F0
// lab_21C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2180
// lab_21F0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
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
// fun_22A8
fun_22A8() {
    pri = arg_1;
    OP_JNZ lab_22F0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_22F0
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
// fun_2348
fun_2348() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_23C0
fun_23C0() {
    var_8 = 0;
    pri = fun_2348()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2440
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2440
    pri = 1;
    return pri;
// lab_2440
    var_8 = 0;
    pri = fun_2348()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2480
    pri = 1;
    return pri;
// lab_2480
    var_8 = 0;
    pri = fun_2348()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_24B0
fun_24B0() {
    OP_JUMP lab_24C8
// lab_24C8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2500
    pri = 0;
    return pri;
// lab_2500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24C8
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0770(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0890(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_09B0(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2708(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_27E0()
    pri = 0;
    return pri;
}
// fun_2708
fun_2708() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2760
fun_2760() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2708(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_27E0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_27E0
fun_27E0() {
    OP_JUMP lab_27F8
// lab_27F8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2860
// lab_2850
    pri = 0;
    return pri;
// lab_2860
    OP_JUMP lab_27F8
    pri = 0;
    return pri;
}
// fun_2880
fun_2880() {
    pri = arg_5;
    OP_JNZ lab_28B8
    var_8 = 0;
    pri = fun_1310()
// lab_28B8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2908
    OP_CONST_S -8, -1
// lab_2908
    pri = arg_1;
    switch (pri) {
// switch_43C0
        case default:
        {
// switch_43C0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4868
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0E00(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4868
            pri = 1;
            OP_JUMP lab_4870
// lab_4868
            pri = 0;
// lab_4870
            OP_JZER lab_48C0
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_4B18
// lab_48C0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4928
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4928
            pri = 1;
            OP_JUMP lab_4930
// lab_4928
            pri = 0;
// lab_4930
            OP_JZER lab_4AB8
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E00(var_24, var_16)
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
            OP_JUMP lab_4B18
// lab_4AB8
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_4B18
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4B88
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4B88
            var_8 = 0;
            pri = fun_1350()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_43C0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1:
        {
// switch_43C0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2:
        {
// switch_43C0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3:
        {
// switch_43C0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x4:
        {
// switch_43C0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x5:
        {
// switch_43C0_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DC0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1038(var_40)
            OP_JUMP switch_43C0_case_default
        }
        case 0x6:
        {
// switch_43C0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x7:
        {
// switch_43C0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x8:
        {
// switch_43C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x9:
        {
// switch_43C0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0xa:
        {
// switch_43C0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0xb:
        {
// switch_43C0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0xc:
        {
// switch_43C0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0xd:
        {
// switch_43C0_case_0xd
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0xe:
        {
// switch_43C0_case_0xe
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0xf:
        {
// switch_43C0_case_0xf
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x10:
        {
// switch_43C0_case_0x10
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x11:
        {
// switch_43C0_case_0x11
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x12:
        {
// switch_43C0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x13:
        {
// switch_43C0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x14:
        {
// switch_43C0_case_0x14
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x15:
        {
// switch_43C0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x16:
        {
// switch_43C0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x17:
        {
// switch_43C0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x18:
        {
// switch_43C0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x19:
        {
// switch_43C0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1a:
        {
// switch_43C0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1b:
        {
// switch_43C0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1c:
        {
// switch_43C0_case_0x1c
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1d:
        {
// switch_43C0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1e:
        {
// switch_43C0_case_0x1e
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x1f:
        {
// switch_43C0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x20:
        {
// switch_43C0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x21:
        {
// switch_43C0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x22:
        {
// switch_43C0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x23:
        {
// switch_43C0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x24:
        {
// switch_43C0_case_0x24
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x25:
        {
// switch_43C0_case_0x25
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x26:
        {
// switch_43C0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x27:
        {
// switch_43C0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x28:
        {
// switch_43C0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x29:
        {
// switch_43C0_case_0x29
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2a:
        {
// switch_43C0_case_0x2a
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2b:
        {
// switch_43C0_case_0x2b
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2c:
        {
// switch_43C0_case_0x2c
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2d:
        {
// switch_43C0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2e:
        {
// switch_43C0_case_0x2e
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x2f:
        {
// switch_43C0_case_0x2f
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x30:
        {
// switch_43C0_case_0x30
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x31:
        {
// switch_43C0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x32:
        {
// switch_43C0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x33:
        {
// switch_43C0_case_0x33
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x34:
        {
// switch_43C0_case_0x34
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x35:
        {
// switch_43C0_case_0x35
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x36:
        {
// switch_43C0_case_0x36
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x37:
        {
// switch_43C0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x38:
        {
// switch_43C0_case_0x38
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
            pri = fun_1070(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_43C0_case_default
        }
        case 0x39:
        {
// switch_43C0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3a:
        {
// switch_43C0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3b:
        {
// switch_43C0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3c:
        {
// switch_43C0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3d:
        {
// switch_43C0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
        case 0x3e:
        {
// switch_43C0_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DC0(var_24, var_16, var_8)
            OP_JUMP switch_43C0_case_default
        }
    }
}
// fun_4BB8
fun_4BB8() {
    pri = arg_4;
    OP_JNZ lab_4BF0
    var_8 = 0;
    pri = fun_1310()
// lab_4BF0
    pri = arg_1;
    switch (pri) {
// switch_5FC8
        case default:
        {
// switch_5FC8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_13D0(var_264)
            OP_JZER lab_6590
            pri = arg_3;
            switch (pri) {
// switch_6538
                case default:
                {
// switch_6538_case_default
                    OP_JUMP lab_6848
// lab_6848
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_68B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_68B8
                    var_8 = 0;
                    pri = fun_1350()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6538_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6538_case_default
                }
                case 0x2:
                {
// switch_6538_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6538_case_default
                }
                case 0x3:
                {
// switch_6538_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6538_case_default
                }
            }
// lab_6590
            pri = arg_1;
            OP_JZER lab_65E0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_65E0
            pri = 0;
            OP_JUMP lab_65E8
// lab_65E0
            pri = 1;
// lab_65E8
            OP_JZER lab_6650
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0E00(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6650
            pri = 1;
            OP_JUMP lab_6658
// lab_6650
            pri = 0;
// lab_6658
            OP_JZER lab_66A8
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6848
// lab_66A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6710
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6848
// lab_6710
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E00(var_24, var_16)
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
// switch_5FC8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1:
        {
// switch_5FC8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2:
        {
// switch_5FC8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3:
        {
// switch_5FC8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x4:
        {
// switch_5FC8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x5:
        {
// switch_5FC8_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DC0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1038(var_40)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x6:
        {
// switch_5FC8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x7:
        {
// switch_5FC8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x8:
        {
// switch_5FC8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x9:
        {
// switch_5FC8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xa:
        {
// switch_5FC8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xb:
        {
// switch_5FC8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xc:
        {
// switch_5FC8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xd:
        {
// switch_5FC8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xe:
        {
// switch_5FC8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0xf:
        {
// switch_5FC8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x10:
        {
// switch_5FC8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x11:
        {
// switch_5FC8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x12:
        {
// switch_5FC8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x13:
        {
// switch_5FC8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x14:
        {
// switch_5FC8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x15:
        {
// switch_5FC8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x16:
        {
// switch_5FC8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x17:
        {
// switch_5FC8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x18:
        {
// switch_5FC8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x19:
        {
// switch_5FC8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1a:
        {
// switch_5FC8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1b:
        {
// switch_5FC8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1c:
        {
// switch_5FC8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1d:
        {
// switch_5FC8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1e:
        {
// switch_5FC8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x1f:
        {
// switch_5FC8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x20:
        {
// switch_5FC8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x21:
        {
// switch_5FC8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x22:
        {
// switch_5FC8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x23:
        {
// switch_5FC8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x24:
        {
// switch_5FC8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x25:
        {
// switch_5FC8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x26:
        {
// switch_5FC8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x27:
        {
// switch_5FC8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x28:
        {
// switch_5FC8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x29:
        {
// switch_5FC8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2a:
        {
// switch_5FC8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2b:
        {
// switch_5FC8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2c:
        {
// switch_5FC8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2d:
        {
// switch_5FC8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2e:
        {
// switch_5FC8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x2f:
        {
// switch_5FC8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x30:
        {
// switch_5FC8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x31:
        {
// switch_5FC8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x32:
        {
// switch_5FC8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x33:
        {
// switch_5FC8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x34:
        {
// switch_5FC8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x35:
        {
// switch_5FC8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x36:
        {
// switch_5FC8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x37:
        {
// switch_5FC8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x38:
        {
// switch_5FC8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x39:
        {
// switch_5FC8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3a:
        {
// switch_5FC8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3b:
        {
// switch_5FC8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3c:
        {
// switch_5FC8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3d:
        {
// switch_5FC8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
        case 0x3e:
        {
// switch_5FC8_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DC0(var_24, var_16, var_8)
            OP_JUMP switch_5FC8_case_default
        }
    }
}
// fun_68E8
fun_68E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6AF8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22264;
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
    var_424 = 22320;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22336;
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
    OP_JZER lab_6AE0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6AE0
    pri = 0;
    return pri;
}
// fun_6AF8
fun_6AF8() {
    var_8 = arg_1;
    var_16 = 22384;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0DC0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6B40
fun_6B40() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6C40
        case default:
        {
// switch_6C40_case_default
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
// switch_6C40_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6C40_case_default
        }
        case 0x1:
        {
// switch_6C40_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6C40_case_default
        }
        case 0x2:
        {
// switch_6C40_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6C40_case_default
        }
        case 0x3:
        {
// switch_6C40_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6C40_case_default
        }
    }
}
// fun_6D00
fun_6D00() {
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
    pri = fun_1F18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FC8()
    pri = 0;
    return pri;
}
// fun_6D98
fun_6D98() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6B40(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6D00(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6E40
fun_6E40() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6E90
// lab_6E90
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22488;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6F08
    OP_JUMP lab_6F38
// lab_6F08
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_6E90
// lab_6F38
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6FC0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4BB8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_16A0(var_56)
// lab_6FC0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7028
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1390(var_24, var_16)
// lab_7028
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1390(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_70E8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E38(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0BB8(var_88, var_80, var_72, var_64, var_56)
// lab_70E8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7128
    pri = 0;
    return pri;
// lab_7128
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7270
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 22608;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D88(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7238
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_7270
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C60(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C60(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E38(var_40)
    pri = 0;
    return pri;
// lab_7238
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1390(var_16, var_8)
}
// fun_72F8
fun_72F8() {
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
    pri = fun_6D98(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2060(var_112)
    var_128 = 0;
    pri = fun_2120()
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
    pri = fun_6E40(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_7470
fun_7470() {
    pri = 22744;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_74F8
// lab_74F8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7678
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7668
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_75B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_75B8
    pri = 0;
    OP_JUMP lab_75C0
// lab_7678
    pri = 0;
    return pri;
// lab_7668
    OP_JUMP lab_74F0
// lab_74F0
    OP_INC_P_S -936
// lab_75B8
    pri = 1;
// lab_75C0
    OP_JZER lab_7638
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7630
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7638
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7630
}
// fun_7698
fun_7698() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_76D0
fun_76D0() {
    var_8 = 0;
    pri = fun_7698()
    switch (pri) {
// switch_7780
        case default:
        {
// switch_7780_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_77C8
// lab_77C8
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_7780_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_77C8
        }
        case 0x1:
        {
// switch_7780_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_77C8
        }
        case 0x2:
        {
// switch_7780_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_77C8
        }
    }
}
// fun_77D8
fun_77D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7870
    var_8 = 1;
    var_16 = 0;
    var_24 = 23664;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1678()
// lab_7870
    pri = arg_4;
    OP_JZER lab_78A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_16D0(var_8)
// lab_78A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7900
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7900
    pri = 0;
    OP_JUMP lab_7908
// lab_7900
    pri = 1;
// lab_7908
    OP_JZER lab_79D0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_79D0
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_79A8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15B8(var_32, var_24)
    OP_JUMP lab_79D0
// lab_79D0
    pri = arg_2;
    OP_JZER lab_7AA8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_7A78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1390(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B08(var_40)
    OP_JUMP lab_7AA8
// lab_7AA8
    pri = arg_3;
    OP_JZER lab_7AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1640(var_8)
// lab_7AE0
    pri = 0;
    return pri;
// lab_7A78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1390(var_16, var_8)
// lab_79A8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15B8(var_16, var_8)
}
// fun_7AF0
fun_7AF0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7C70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7B88
    var_8 = 1;
    var_16 = 0;
    var_24 = 23664;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
// lab_7C70
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_7B88
    pri = arg_0;
    OP_JNZ lab_7BD0
    var_8 = 23712;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_7BF0
// lab_7BD0
    var_8 = 23888;
    pri = SoundPostEvent(var_8)
// lab_7BF0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7C70
    var_24 = 24152;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    var_48 = 0;
    pri = fun_03A8()
}
// fun_7CB0
fun_7CB0() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_7AF0(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7CF0
fun_7CF0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7470(var_24)
    pri = 0;
    return pri;
}
// fun_7D58
fun_7D58() {
    pri = g_mode;
    switch (pri) {
// switch_7E68
        case default:
        {
// switch_7E68_case_default
            pri = CommandNOP()
            OP_JUMP lab_7ED0
// lab_7ED0
            pri = 0;
            return pri;
        }
        case 0x83e17521fcfbad70:
        {
// switch_7E68_case_0x83e17521fcfbad70
            var_8 = 0;
            pri = fun_95A8()
            OP_JUMP lab_7ED0
        }
        case 0xcd74245831b09873:
        {
// switch_7E68_case_0xcd74245831b09873
            var_8 = 0;
            pri = fun_9720()
            OP_JUMP lab_7ED0
        }
        case 0xe2168d086fc2072e:
        {
// switch_7E68_case_0xe2168d086fc2072e
            var_8 = 0;
            pri = fun_9780()
            OP_JUMP lab_7ED0
        }
        case 0x0:
        {
// switch_7E68_case_0x0
            var_8 = 0;
            pri = fun_7EE0()
            OP_JUMP lab_7ED0
        }
        case 0x66822b1e73070b44:
        {
// switch_7E68_case_0x66822b1e73070b44
            var_8 = 0;
            pri = fun_96D8()
            OP_JUMP lab_7ED0
        }
    }
}
// fun_7EE0
fun_7EE0() {
    pri = 0;
    return pri;
}
// fun_7EF8
fun_7EF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_77D8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7F50
fun_7F50() {
    pri = 0;
    return pri;
}
// fun_7F68
fun_7F68() {
    var_8 = 0;
    pri = fun_05A0()
    pri = 0;
    return pri;
}
// fun_7F98
fun_7F98() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, 702631533266588014, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_2540(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 702631533266588014, 8802641224559852288
    var_88 = 48;
    pri = fun_0C08(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, 702631533266588014
    var_128 = 48;
    pri = fun_0C08(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0C60(var_136)
    var_152 = 702631533266588014;
    var_160 = 8;
    pri = fun_0C60(var_152)
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 0;
    var_208 = 8;
    var_216 = 702631533266588014;
    var_224 = 56;
    pri = fun_2880(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 0;
    pri = fun_24B0()
    var_240 = 6910712898869243;
    pri = WorkGet(var_240)
    OP_EQ_P_C_PRI 280
    OP_JZER lab_8260
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    OP_PUSH2_C -3754771733373543391, 702631533266588014
    var_288 = 56;
    pri = fun_1F18(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_2060(var_296)
    var_312 = 0;
    pri = fun_2120()
// lab_8260
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -3754775031908428024, 702631533266588014
    var_48 = 56;
    pri = fun_1F18(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2060(var_56)
    var_72 = 0;
    var_80 = -4280032387316693865;
    var_88 = 0;
    var_96 = 24;
    pri = fun_2150(var_88, var_80, var_72)
    var_104 = 0;
    var_112 = -4280031287805065654;
    var_120 = 1;
    var_128 = 24;
    pri = fun_2150(var_120, var_112, var_104)
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 1;
    var_176 = 32;
    pri = fun_2238(var_168, var_160, var_152, var_144)
    var_8 = pri;
    var_184 = 0;
    pri = fun_2120()
    pri = var_8;
    switch (pri) {
// switch_9410
        case default:
        {
// switch_9410_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9410_case_0x0
            var_8 = 1;
            var_16 = 0;
            var_24 = 23664;
            var_32 = 8;
            var_40 = 32;
            pri = fun_0338(var_32, var_24, var_16, var_8)
            var_48 = 0;
            pri = fun_03A8()
            var_56 = 1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 8;
            var_88 = 702631533266588014;
            var_96 = 40;
            pri = fun_4BB8(var_88, var_80, var_72, var_64, var_56)
            var_104 = 702631533266588014;
            var_112 = 8;
            pri = fun_0E38(var_104)
            var_120 = 30;
            var_128 = 8;
            pri = fun_00B8(var_120)
            var_136 = 0;
            var_144 = 0;
            var_152 = 0;
            var_160 = 0;
            pri = float(var_160)
            var_168 = pri;
            var_176 = -3470649453704576271;
            var_184 = 40;
            pri = fun_0BB8(var_176, var_168, var_160, var_152, var_144)
            var_192 = -3470649453704576271;
            var_200 = 8;
            pri = fun_0C60(var_192)
            var_208 = -1772686665497876459;
            var_216 = 8;
            pri = fun_0570(var_208)
            var_224 = 0;
            pri = fun_05A0()
            var_232 = 1;
            var_240 = 1;
            var_248 = -90;
            pri = float(var_248)
            var_256 = pri;
            var_264 = 27387;
            pri = float(var_264)
            var_272 = pri;
            var_280 = 37742;
            pri = float(var_280)
            var_288 = pri;
            var_296 = -1772686665497876459;
            var_304 = 48;
            pri = fun_0718(var_296, var_288, var_280, var_272, var_264, var_256)
            var_312 = 1;
            var_320 = -1772686665497876459;
            var_328 = 16;
            pri = fun_0AD0(var_320, var_312)
            var_336 = 1;
            var_344 = 1;
            OP_PUSH4_C 4636033603912859648, 4673387587321200640, 4675315031204691968, 8802641224559852288
            var_352 = 48;
            pri = fun_0718(var_344, var_336, var_328, var_320, var_312, var_304)
            var_360 = 1;
            var_368 = 1;
            OP_PUSH4_C -4587338432941916160, 4673387587321200640, 4675400518233751552, 702631533266588014
            var_376 = 48;
            pri = fun_0718(var_368, var_360, var_352, var_344, var_336, var_328)
            var_384 = 0;
            var_392 = 4631952216750555136;
            var_400 = 0;
            OP_PUSH5_C 4673288526821096161, -4567718483573090550, 4675371297337853870, 4673374736779051008, -4567995824386080768
            var_408 = 4675390022020874895;
            var_416 = 1;
            pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
            var_424 = 0;
            pri = fun_24B0()
            var_432 = 1;
            var_440 = 0;
            var_448 = 30;
            pri = float(var_448)
            var_456 = pri;
            var_464 = -15;
            pri = float(var_464)
            var_472 = pri;
            var_480 = 1;
            OP_PUSH4_C 4673257295193309184, 4675378665440149504, 4607182418800017408, -1772686665497876459
            var_488 = 72;
            pri = fun_0B40(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_496 = 24152;
            var_504 = 8;
            var_512 = 16;
            pri = fun_02D8(var_504, var_496)
            var_520 = 0;
            pri = fun_03A8()
            var_528 = 50;
            var_536 = 8;
            pri = fun_00B8(var_528)
            var_544 = 0;
            var_552 = 3;
            var_560 = 0;
            var_568 = 100;
            var_576 = -1;
            OP_PUSH2_C -2836886632377739774, -1772686665497876459
            var_584 = 56;
            pri = fun_1F18(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
            var_592 = 1;
            var_600 = 8;
            pri = fun_2060(var_592)
            var_608 = 0;
            pri = fun_2120()
            var_616 = -1772686665497876459;
            var_624 = 8;
            pri = fun_0C60(var_616)
            var_632 = 10;
            var_640 = 8;
            pri = fun_00B8(var_632)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_648 = 16;
            pri = fun_26A0(var_640, var_632)
            var_656 = 3;
            var_664 = 1;
            OP_PUSH2_C 4636325915676173664, 4611686018427387904
            var_672 = 32;
            pri = fun_2708(var_664, var_656, var_648, var_640)
            var_680 = 1;
            pri = SetCascadeShadowMapLevel(var_680)
            var_688 = 0;
            var_696 = 4631952216750555136;
            var_704 = 0;
            OP_PUSH5_C 4673291050200281907, -4567961563603759268, 4675353262598379274, 4673310838660802806, -4567985269074454118
            var_712 = 4675350017664687800;
            var_720 = 1;
            pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
            var_728 = 0;
            pri = fun_24B0()
            var_736 = 0;
            var_744 = 4631952216750555136;
            var_752 = 3;
            OP_PUSH5_C 4673290893519874949, -4567998903018638541, 4675353288711780434, 4673299755583594824, -4568009502310730301
            var_760 = 4675351835982042235;
            var_768 = 100;
            pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
            var_776 = 3;
            var_784 = 100;
            OP_PUSH2_C 4635647842457277694, 4611686018427387904
            var_792 = 32;
            pri = fun_2708(var_784, var_776, var_768, var_760)
            var_800 = 0;
            var_808 = 2;
            var_816 = -3470649453704576271;
            var_824 = 24;
            pri = fun_68E8(var_816, var_808, var_800)
            var_832 = 1;
            var_840 = 8;
            pri = fun_00B8(var_832)
            var_848 = -3470649453704576271;
            var_856 = 8;
            pri = fun_0E38(var_848)
            var_864 = 24200;
            pri = SoundPostEvent(var_864)
            var_872 = 0;
            var_880 = 3;
            var_888 = 0;
            var_896 = 100;
            var_904 = -1;
            OP_PUSH2_C 6898188246018680167, -3470649453704576271
            var_912 = 56;
            pri = fun_1F18(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
            var_920 = 1;
            var_928 = 8;
            pri = fun_2060(var_920)
            var_936 = 0;
            pri = fun_2120()
            var_944 = 1;
            var_952 = 0;
            var_960 = 30;
            pri = float(var_960)
            var_968 = pri;
            var_976 = 0;
            pri = float(var_976)
            var_984 = pri;
            var_992 = 0;
            OP_PUSH4_C 4673387587321200640, 4675329324855853056, 4607182418800017408, 8802641224559852288
            var_1000 = 72;
            pri = fun_0B40(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
            var_1008 = 1;
            var_1016 = 0;
            var_1024 = 30;
            pri = float(var_1024)
            var_1032 = pri;
            var_1040 = 0;
            pri = float(var_1040)
            var_1048 = pri;
            var_1056 = 0;
            OP_PUSH4_C 4673388686832828416, 4675388561044799488, 4607182418800017408, 702631533266588014
            var_1064 = 72;
            pri = fun_0B40(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
            var_1072 = 10;
            var_1080 = 8;
            pri = fun_00B8(var_1072)
            var_1088 = 2;
            pri = SetCascadeShadowMapLevel(var_1088)
            var_1096 = 0;
            var_1104 = 4631952216750555136;
            var_1112 = 3;
            OP_PUSH5_C 4673285261271561667, -4567466519488469402, 4675368885284220436, 4673483349286421791, -4567703926039138796
            var_1120 = 4675336306754689434;
            var_1128 = 8;
            pri = EvCameraMove(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
            var_1136 = 4;
            var_1144 = 8;
            pri = fun_00B8(var_1136)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_1152 = 3;
            var_1160 = 8;
            var_1168 = 32;
            pri = fun_2760(var_1160, var_1152, var_1144, var_1136)
            var_1176 = 8802641224559852288;
            var_1184 = 8;
            pri = fun_0C60(var_1176)
            var_1192 = 702631533266588014;
            var_1200 = 8;
            pri = fun_0C60(var_1192)
            var_1208 = 0;
            pri = fun_24B0()
            var_1216 = 1;
            var_1224 = 1;
            var_1232 = -1;
            var_1240 = -1;
            var_1248 = 0;
            var_1256 = 23;
            var_1264 = 702631533266588014;
            var_1272 = 56;
            pri = fun_2880(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
            var_1280 = 0;
            var_1288 = 3;
            var_1296 = 0;
            var_1304 = 100;
            var_1312 = -1;
            OP_PUSH2_C -3754768434838658758, 702631533266588014
            var_1320 = 56;
            pri = fun_1F18(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
            var_1328 = 1;
            var_1336 = 8;
            pri = fun_2060(var_1328)
            var_1344 = 0;
            pri = fun_2120()
            var_1352 = 30;
            var_1360 = 8;
            pri = fun_00B8(var_1352)
            var_1368 = 24360;
            pri = SoundPostEvent(var_1368)
            var_1384 = 9;
            var_1392 = 8;
            var_1400 = 7;
            var_1408 = 24;
            pri = fun_76D0(var_1400, var_1392, var_1384)
            var_16 = pri;
            var_1416 = 2;
            var_1424 = 0;
            var_1432 = 36;
            var_1440 = 9107157994880169509;
            var_1448 = var_16;
            var_1456 = 40;
            pri = fun_22A8(var_1448, var_1440, var_1432, var_1424, var_1416)
            var_1464 = 0;
            pri = fun_23C0()
            OP_JZER lab_9158
            var_1472 = 0;
            pri = fun_7CB0()
            OP_JUMP lab_9180
// lab_9158
            var_8 = 25388350855151377;
            pri = FlagSet(var_8)
// lab_9180
            pri = 1;
            return pri;
            OP_JUMP switch_9410_case_default
        }
        case 0x1:
        {
// switch_9410_case_0x1
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 8;
            var_40 = 702631533266588014;
            var_48 = 40;
            pri = fun_4BB8(var_40, var_32, var_24, var_16, var_8)
            var_56 = 702631533266588014;
            var_64 = 8;
            pri = fun_0E38(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C -3754767335327030547, 702631533266588014
            var_112 = 56;
            pri = fun_1F18(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_2060(var_120)
            var_136 = 0;
            pri = fun_2120()
            var_144 = 8802641224559852288;
            var_152 = 8;
            pri = fun_0C60(var_144)
            var_160 = 702631533266588014;
            var_168 = 8;
            pri = fun_0C60(var_160)
            var_176 = 6910712898869243;
            pri = WorkGet(var_176)
            OP_EQ_P_C_PRI 280
            OP_JZER lab_9358
            var_184 = 285;
            var_192 = 8;
            pri = fun_7CF0(var_184)
// lab_9358
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            pri = float(var_32)
            var_40 = pri;
            var_48 = 702631533266588014;
            var_56 = 40;
            pri = fun_0BB8(var_48, var_40, var_32, var_24, var_16)
            var_64 = 702631533266588014;
            var_72 = 8;
            pri = fun_0C60(var_64)
            pri = 0;
            return pri;
            OP_JUMP switch_9410_case_default
        }
    }
}
// fun_9460
fun_9460() {
    pri = 0;
    return pri;
}
// fun_9478
fun_9478() {
    var_8 = 290;
    var_16 = 8;
    pri = fun_7CF0(var_8)
    var_24 = -7045052338775704800;
    pri = VanishFlagSet(var_24)
    var_32 = 3461578099255135998;
    pri = VanishFlagSet(var_32)
    var_40 = 3447853788456145154;
    pri = FlagSet(var_40)
    pri = 0;
    return pri;
}
// fun_9528
fun_9528() {
    var_8 = -8942746836653914375;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_9568
fun_9568() {
    var_8 = 3;
    var_16 = 10;
    pri = EvCameraEnd(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_95A8
fun_95A8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7EF8()
    var_16 = 0;
    pri = fun_7F50()
    var_24 = 0;
    pri = fun_7F68()
    var_32 = 0;
    pri = fun_7F98()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9698
    var_40 = 0;
    pri = fun_9460()
    var_48 = 0;
    pri = fun_9478()
    var_56 = 0;
    pri = fun_9528()
    OP_JUMP lab_96B0
// lab_9698
    var_8 = 0;
    pri = fun_9568()
// lab_96B0
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_96D8
fun_96D8() {
    var_8 = 0;
    pri = fun_7F50()
    var_16 = 0;
    pri = fun_9478()
    pri = 0;
    return pri;
}
// fun_9720
fun_9720() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = -8943738596142371472;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9780
fun_9780() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6898187146507051956;
    var_88 = 80;
    pri = fun_72F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
