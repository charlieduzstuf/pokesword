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
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0468
fun_0468() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_04A0
// lab_04A0
    var_8 = 0;
    pri = fun_05E8()
    OP_JNZ lab_04D8
    OP_JUMP lab_0508
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A0
// lab_0508
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0538
// lab_0538
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0578
    pri = 0;
    return pri;
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0538
    pri = 0;
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0610
fun_0610() {
    pri = IsFieldObjectNotSetupAny_()
    return pri;
}
// fun_0638
fun_0638() {
    OP_JUMP lab_0650
// lab_0650
    var_8 = 0;
    pri = fun_0610()
    OP_JNZ lab_0688
    pri = 0;
    return pri;
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0650
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    OP_JUMP lab_06E0
// lab_06E0
    pri = IsAnyLoadingFieldTerrainChip_()
    OP_JNZ lab_0718
    pri = 0;
    return pri;
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06E0
    pri = 0;
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0838
fun_0838() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetPlacementSelectParam_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 0;
    pri = fun_0638()
    pri = 0;
    return pri;
}
// fun_0930
fun_0930() {
    pri = ResetPlacementSelectParam_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    pri = fun_0638()
    pri = 0;
    return pri;
}
// fun_0998
fun_0998() {
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
// fun_0A10
fun_0A10() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
    OP_JZER lab_0B88
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12D8(var_24)
    OP_JNZ lab_0B88
    pri = 0;
    return pri;
// lab_0B88
    OP_JUMP lab_0B98
// lab_0B98
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0BF8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0BF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B98
    pri = 0;
    return pri;
}
// fun_0C38
fun_0C38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CF8
    pri = 0;
    return pri;
// lab_0CF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D38
// lab_0D38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
    OP_JNZ lab_0DC0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DB0
    pri = 0;
    return pri;
// lab_0DC0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E08
    pri = 0;
    return pri;
// lab_0E08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EB0(var_8)
    pri = 0;
    return pri;
// lab_0E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D38
    pri = 0;
    return pri;
// lab_0DB0
    OP_JUMP lab_0E08
}
// fun_0EB0
fun_0EB0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EE8
fun_0EE8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F38
    pri = 0;
    return pri;
// lab_0F38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
    OP_JZER lab_1068
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F90
    OP_ZERO_P_S 64
// lab_1068
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10A0
    OP_CONST_S 64, 1
// lab_10A0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10D8
    OP_CONST_S 72, 1
// lab_10D8
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
// lab_0F90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB8
    OP_ZERO_P_S 72
// lab_0FB8
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
    OP_JUMP lab_1178
// lab_1178
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1308
fun_1308() {
    OP_JUMP lab_1320
// lab_1320
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    pri = 0;
    return pri;
// lab_13B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1440
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1430
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    pri = 0;
    return pri;
// lab_1440
    pri = 0;
    return pri;
// lab_1430
    OP_JUMP lab_1450
// lab_1450
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1320
    pri = 0;
    return pri;
// lab_13A0
    OP_JUMP lab_1450
}
// fun_1490
fun_1490() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1308(var_40)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    var_8 = arg_0;
    pri = SetShadowAreaFollowMode_(var_8)
    pri = 0;
    return pri;
}
// fun_15E8
fun_15E8() {
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
// switch_1C00
        case default:
        {
// switch_1C00_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C48
// lab_1C48
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
            OP_JNZ lab_1CF0
            var_88 = 0;
            pri = fun_1EA8()
// lab_1CF0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C00_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17E8
                case default:
                {
// switch_17E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1860
// lab_1860
                    OP_JUMP lab_1C48
                }
                case 0x0:
                {
// switch_17E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1860
                }
                case 0x1:
                {
// switch_17E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1860
                }
                case 0x2:
                {
// switch_17E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1860
                }
                case 0x3:
                {
// switch_17E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1860
                }
                case 0x4:
                {
// switch_17E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1860
                }
                case 0x5:
                {
// switch_17E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1860
                }
            }
        }
        case 0x65:
        {
// switch_1C00_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_19A0
                case default:
                {
// switch_19A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A18
// lab_1A18
                    OP_JUMP lab_1C48
                }
                case 0x0:
                {
// switch_19A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A18
                }
                case 0x1:
                {
// switch_19A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A18
                }
                case 0x2:
                {
// switch_19A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A18
                }
                case 0x3:
                {
// switch_19A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A18
                }
                case 0x4:
                {
// switch_19A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A18
                }
                case 0x5:
                {
// switch_19A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A18
                }
            }
        }
        case 0x66:
        {
// switch_1C00_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B58
                case default:
                {
// switch_1B58_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BD0
// lab_1BD0
                    OP_JUMP lab_1C48
                }
                case 0x0:
                {
// switch_1B58_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1BD0
                }
                case 0x1:
                {
// switch_1B58_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1BD0
                }
                case 0x2:
                {
// switch_1B58_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1BD0
                }
                case 0x3:
                {
// switch_1B58_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BD0
                }
                case 0x4:
                {
// switch_1B58_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1BD0
                }
                case 0x5:
                {
// switch_1B58_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1BD0
                }
            }
        }
    }
}
// fun_1D08
fun_1D08() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C78(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DB0
    pri = 1;
    return pri;
// lab_1DB0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DF8
fun_1DF8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D08(var_8)
    arg_2 = pri;
// lab_1E48
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    OP_JUMP lab_1EC0
// lab_1EC0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F00
    pri = 0;
    return pri;
// lab_1F00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EC0
    pri = 0;
    return pri;
}
// fun_1F40
fun_1F40() {
    var_8 = 0;
    pri = fun_1EA8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FF0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1FF0
    pri = 0;
    return pri;
}
// fun_2000
fun_2000() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    OP_JUMP lab_2048
// lab_2048
    pri = EvCameraMoveWait_()
    OP_JZER lab_2080
    pri = 0;
    return pri;
// lab_2080
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2048
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    pri = arg_5;
    OP_JNZ lab_20F8
    var_8 = 0;
    pri = fun_1188()
// lab_20F8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2148
    OP_CONST_S -8, -1
// lab_2148
    pri = arg_1;
    switch (pri) {
// switch_3C00
        case default:
        {
// switch_3C00_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_40A8
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C78(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_40A8
            pri = 1;
            OP_JUMP lab_40B0
// lab_40A8
            pri = 0;
// lab_40B0
            OP_JZER lab_4100
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4358
// lab_4100
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4168
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4168
            pri = 1;
            OP_JUMP lab_4170
// lab_4168
            pri = 0;
// lab_4170
            OP_JZER lab_42F8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C78(var_24, var_16)
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
            OP_JUMP lab_4358
// lab_42F8
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
// lab_4358
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_43C8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_43C8
            var_8 = 0;
            pri = fun_11C8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3C00_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1:
        {
// switch_3C00_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2:
        {
// switch_3C00_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3:
        {
// switch_3C00_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x4:
        {
// switch_3C00_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x5:
        {
// switch_3C00_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EB0(var_40)
            OP_JUMP switch_3C00_case_default
        }
        case 0x6:
        {
// switch_3C00_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x7:
        {
// switch_3C00_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x8:
        {
// switch_3C00_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x9:
        {
// switch_3C00_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0xa:
        {
// switch_3C00_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0xb:
        {
// switch_3C00_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0xc:
        {
// switch_3C00_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0xd:
        {
// switch_3C00_case_0xd
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0xe:
        {
// switch_3C00_case_0xe
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0xf:
        {
// switch_3C00_case_0xf
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x10:
        {
// switch_3C00_case_0x10
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x11:
        {
// switch_3C00_case_0x11
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x12:
        {
// switch_3C00_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x13:
        {
// switch_3C00_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x14:
        {
// switch_3C00_case_0x14
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x15:
        {
// switch_3C00_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x16:
        {
// switch_3C00_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x17:
        {
// switch_3C00_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x18:
        {
// switch_3C00_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x19:
        {
// switch_3C00_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1a:
        {
// switch_3C00_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1b:
        {
// switch_3C00_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1c:
        {
// switch_3C00_case_0x1c
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1d:
        {
// switch_3C00_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1e:
        {
// switch_3C00_case_0x1e
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x1f:
        {
// switch_3C00_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x20:
        {
// switch_3C00_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x21:
        {
// switch_3C00_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x22:
        {
// switch_3C00_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x23:
        {
// switch_3C00_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x24:
        {
// switch_3C00_case_0x24
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x25:
        {
// switch_3C00_case_0x25
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x26:
        {
// switch_3C00_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x27:
        {
// switch_3C00_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x28:
        {
// switch_3C00_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x29:
        {
// switch_3C00_case_0x29
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2a:
        {
// switch_3C00_case_0x2a
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2b:
        {
// switch_3C00_case_0x2b
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2c:
        {
// switch_3C00_case_0x2c
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2d:
        {
// switch_3C00_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2e:
        {
// switch_3C00_case_0x2e
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x2f:
        {
// switch_3C00_case_0x2f
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x30:
        {
// switch_3C00_case_0x30
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x31:
        {
// switch_3C00_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x32:
        {
// switch_3C00_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x33:
        {
// switch_3C00_case_0x33
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x34:
        {
// switch_3C00_case_0x34
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x35:
        {
// switch_3C00_case_0x35
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x36:
        {
// switch_3C00_case_0x36
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x37:
        {
// switch_3C00_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x38:
        {
// switch_3C00_case_0x38
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
            pri = fun_0EE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C00_case_default
        }
        case 0x39:
        {
// switch_3C00_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3a:
        {
// switch_3C00_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3b:
        {
// switch_3C00_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3c:
        {
// switch_3C00_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3d:
        {
// switch_3C00_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
        case 0x3e:
        {
// switch_3C00_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C38(var_24, var_16, var_8)
            OP_JUMP switch_3C00_case_default
        }
    }
}
// fun_43F8
fun_43F8() {
    pri = arg_4;
    OP_JNZ lab_4430
    var_8 = 0;
    pri = fun_1188()
// lab_4430
    pri = arg_1;
    switch (pri) {
// switch_5808
        case default:
        {
// switch_5808_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12A8(var_264)
            OP_JZER lab_5DD0
            pri = arg_3;
            switch (pri) {
// switch_5D78
                case default:
                {
// switch_5D78_case_default
                    OP_JUMP lab_6088
// lab_6088
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_60F8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_60F8
                    var_8 = 0;
                    pri = fun_11C8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5D78_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D78_case_default
                }
                case 0x2:
                {
// switch_5D78_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D78_case_default
                }
                case 0x3:
                {
// switch_5D78_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D78_case_default
                }
            }
// lab_5DD0
            pri = arg_1;
            OP_JZER lab_5E20
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5E20
            pri = 0;
            OP_JUMP lab_5E28
// lab_5E20
            pri = 1;
// lab_5E28
            OP_JZER lab_5E90
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C78(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E90
            pri = 1;
            OP_JUMP lab_5E98
// lab_5E90
            pri = 0;
// lab_5E98
            OP_JZER lab_5EE8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6088
// lab_5EE8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5F50
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6088
// lab_5F50
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C78(var_24, var_16)
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
// switch_5808_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1:
        {
// switch_5808_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2:
        {
// switch_5808_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3:
        {
// switch_5808_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x4:
        {
// switch_5808_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x5:
        {
// switch_5808_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EB0(var_40)
            OP_JUMP switch_5808_case_default
        }
        case 0x6:
        {
// switch_5808_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x7:
        {
// switch_5808_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x8:
        {
// switch_5808_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x9:
        {
// switch_5808_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xa:
        {
// switch_5808_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xb:
        {
// switch_5808_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xc:
        {
// switch_5808_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xd:
        {
// switch_5808_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xe:
        {
// switch_5808_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xf:
        {
// switch_5808_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x10:
        {
// switch_5808_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x11:
        {
// switch_5808_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x12:
        {
// switch_5808_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x13:
        {
// switch_5808_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x14:
        {
// switch_5808_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x15:
        {
// switch_5808_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x16:
        {
// switch_5808_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x17:
        {
// switch_5808_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x18:
        {
// switch_5808_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x19:
        {
// switch_5808_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1a:
        {
// switch_5808_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1b:
        {
// switch_5808_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1c:
        {
// switch_5808_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1d:
        {
// switch_5808_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1e:
        {
// switch_5808_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1f:
        {
// switch_5808_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x20:
        {
// switch_5808_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x21:
        {
// switch_5808_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x22:
        {
// switch_5808_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x23:
        {
// switch_5808_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x24:
        {
// switch_5808_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x25:
        {
// switch_5808_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x26:
        {
// switch_5808_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x27:
        {
// switch_5808_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x28:
        {
// switch_5808_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x29:
        {
// switch_5808_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2a:
        {
// switch_5808_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2b:
        {
// switch_5808_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2c:
        {
// switch_5808_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2d:
        {
// switch_5808_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2e:
        {
// switch_5808_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2f:
        {
// switch_5808_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x30:
        {
// switch_5808_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x31:
        {
// switch_5808_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x32:
        {
// switch_5808_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x33:
        {
// switch_5808_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x34:
        {
// switch_5808_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x35:
        {
// switch_5808_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x36:
        {
// switch_5808_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x37:
        {
// switch_5808_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x38:
        {
// switch_5808_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x39:
        {
// switch_5808_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3a:
        {
// switch_5808_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3b:
        {
// switch_5808_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3c:
        {
// switch_5808_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3d:
        {
// switch_5808_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3e:
        {
// switch_5808_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C38(var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
    }
}
// fun_6128
fun_6128() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_61B0
// lab_61B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6330
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6320
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6270
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6270
    pri = 0;
    OP_JUMP lab_6278
// lab_6330
    pri = 0;
    return pri;
// lab_6320
    OP_JUMP lab_61A8
// lab_61A8
    OP_INC_P_S -936
// lab_6270
    pri = 1;
// lab_6278
    OP_JZER lab_62F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_62E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_62F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_62E8
}
// fun_6350
fun_6350() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_63E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1550()
// lab_63E8
    pri = arg_4;
    OP_JZER lab_6420
    var_8 = 1;
    var_16 = 8;
    pri = fun_1578(var_8)
// lab_6420
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6478
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6478
    pri = 0;
    OP_JUMP lab_6480
// lab_6478
    pri = 1;
// lab_6480
    OP_JZER lab_6548
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6548
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6520
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1490(var_32, var_24)
    OP_JUMP lab_6548
// lab_6548
    pri = arg_2;
    OP_JZER lab_6620
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_65F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1268(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0878(var_40)
    OP_JUMP lab_6620
// lab_6620
    pri = arg_3;
    OP_JZER lab_6658
    var_8 = 1;
    var_16 = 8;
    pri = fun_1518(var_8)
// lab_6658
    pri = 0;
    return pri;
// lab_65F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1268(var_16, var_8)
// lab_6520
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1490(var_16, var_8)
}
// fun_6668
fun_6668() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6128(var_24)
    pri = 0;
    return pri;
}
// fun_66D0
fun_66D0() {
    pri = g_mode;
    switch (pri) {
// switch_6790
        case default:
        {
// switch_6790_case_default
            pri = CommandNOP()
            OP_JUMP lab_67D8
// lab_67D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6790_case_0x0
            var_8 = 0;
            pri = fun_67E8()
            OP_JUMP lab_67D8
        }
        case 0x26df2b2ae5a8ae2b:
        {
// switch_6790_case_0x26df2b2ae5a8ae2b
            var_8 = 0;
            pri = fun_9830()
            OP_JUMP lab_67D8
        }
        case 0x4fdb992783dafe27:
        {
// switch_6790_case_0x4fdb992783dafe27
            var_8 = 0;
            pri = fun_9920()
            OP_JUMP lab_67D8
        }
    }
}
// fun_67E8
fun_67E8() {
    pri = 0;
    return pri;
}
// fun_6800
fun_6800() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6350(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6858
fun_6858() {
    pri = 0;
    return pri;
}
// fun_6870
fun_6870() {
    pri = 0;
    return pri;
}
// fun_6888
fun_6888() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 6290;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 9735;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_07A8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 5;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 1;
    var_112 = 1;
    var_120 = 180;
    pri = float(var_120)
    var_128 = pri;
    OP_PUSH3_C 4672208086222503936, 4670252329914597376, 8802641224559852288
    var_136 = 48;
    pri = fun_07A8(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 1;
    var_152 = 1;
    var_160 = 180;
    pri = float(var_160)
    var_168 = pri;
    OP_PUSH3_C 4672174276239949824, 4670192681408790528, -2117705809819912762
    var_176 = 48;
    pri = fun_07A8(var_168, var_160, var_152, var_144, var_136, var_128)
    pri = IsMovieSkipEnable()
    OP_JZER lab_6A90
    OP_JUMP lab_8888
// lab_6A90
    var_8 = 1;
    var_16 = 8;
    pri = fun_15B0(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_0060(var_24)
    var_40 = 18900;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 10;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 16362;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 24;
    pri = fun_08B0(var_80, var_72, var_64)
    var_96 = 5;
    var_104 = 8;
    pri = fun_0060(var_96)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_112 = 0;
    OP_PUSH5_C 4672115086780247572, -4587559390798634025, 4670235235257564529, 4672269087127612948, 4644556138442076979
    var_120 = 4670239352928610550;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_2030()
    var_144 = 1;
    var_152 = -4026810136153680528;
    var_160 = 16;
    pri = fun_0838(var_152, var_144)
    var_168 = 1;
    var_176 = -3158554630572138415;
    var_184 = 16;
    pri = fun_0838(var_176, var_168)
    var_192 = 1;
    var_200 = -7413006624547387837;
    var_208 = 16;
    pri = fun_0838(var_200, var_192)
    var_216 = 1;
    var_224 = 766127317579592085;
    var_232 = 16;
    pri = fun_0838(var_224, var_216)
    var_240 = 1;
    var_248 = 1126649539470313381;
    var_256 = 16;
    pri = fun_0838(var_248, var_240)
    var_264 = 1;
    var_272 = 5125788778820629864;
    var_280 = 16;
    pri = fun_0838(var_272, var_264)
    var_288 = 1;
    var_296 = -5092834258003007029;
    var_304 = 16;
    pri = fun_0838(var_296, var_288)
    var_312 = 1;
    var_320 = 5125789878332258075;
    var_328 = 16;
    pri = fun_0838(var_320, var_312)
    var_336 = 1;
    var_344 = -2818721618577334593;
    var_352 = 16;
    pri = fun_0838(var_344, var_336)
    var_360 = 1;
    var_368 = 766121820021451030;
    var_376 = 16;
    pri = fun_0838(var_368, var_360)
    var_384 = 1;
    var_392 = 8106626419537127196;
    var_400 = 16;
    pri = fun_0838(var_392, var_384)
    var_408 = 1;
    var_416 = 1630852289642056826;
    var_424 = 16;
    pri = fun_0838(var_416, var_408)
    var_432 = 1;
    var_440 = 2362145281788895231;
    var_448 = 16;
    pri = fun_0838(var_440, var_432)
    var_456 = 1;
    var_464 = 7432345659146245451;
    var_472 = 16;
    pri = fun_0838(var_464, var_456)
    var_480 = 1;
    var_488 = 7665965454938017431;
    var_496 = 16;
    pri = fun_0838(var_488, var_480)
    var_504 = 5;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 1;
    var_528 = 0;
    var_536 = 0;
    var_544 = 90;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_552 = 48;
    pri = fun_0A10(var_544, var_536, var_528, var_520, var_512, var_504)
    var_560 = 1;
    var_568 = 0;
    var_576 = 0;
    var_584 = 90;
    OP_PUSH2_C 4611686018427387904, -2117705809819912762
    var_592 = 48;
    pri = fun_0A10(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = 23224;
    var_608 = 8;
    var_616 = 16;
    pri = fun_0280(var_608, var_600)
    var_624 = 0;
    var_632 = 4631952216750555136;
    var_640 = 3;
    OP_PUSH5_C 4671364125836034703, 4657386031763339346, 4670222032871694008, 4671555814693221171, 4657270319159632200
    var_648 = 4670232285817623020;
    var_656 = 160;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 60;
    var_672 = 8;
    pri = fun_0060(var_664)
    var_680 = 0;
    pri = fun_0408()
    var_688 = 90;
    var_696 = 8;
    pri = fun_0060(var_688)
    var_704 = 8802641224559852288;
    var_712 = 8;
    pri = fun_0B10(var_704)
    var_720 = -2117705809819912762;
    var_728 = 8;
    pri = fun_0B10(var_720)
    var_736 = 0;
    pri = fun_2030()
    var_744 = 1;
    var_752 = 0;
    var_760 = 23272;
    var_768 = 1;
    var_776 = 32;
    pri = fun_02E0(var_768, var_760, var_752, var_744)
    var_784 = 0;
    pri = fun_0350()
    var_792 = 0;
    var_800 = 1126649539470313381;
    var_808 = 16;
    pri = fun_0838(var_800, var_792)
    var_816 = 0;
    var_824 = 5125788778820629864;
    var_832 = 16;
    pri = fun_0838(var_824, var_816)
    var_840 = 0;
    var_848 = -5092834258003007029;
    var_856 = 16;
    pri = fun_0838(var_848, var_840)
    var_864 = 0;
    var_872 = 5125789878332258075;
    var_880 = 16;
    pri = fun_0838(var_872, var_864)
    var_888 = 0;
    var_896 = -2818721618577334593;
    var_904 = 16;
    pri = fun_0838(var_896, var_888)
    var_912 = 0;
    var_920 = 766121820021451030;
    var_928 = 16;
    pri = fun_0838(var_920, var_912)
    var_936 = 0;
    var_944 = 8106626419537127196;
    var_952 = 16;
    pri = fun_0838(var_944, var_936)
    var_960 = 0;
    var_968 = 1630852289642056826;
    var_976 = 16;
    pri = fun_0838(var_968, var_960)
    var_984 = 0;
    var_992 = 2362145281788895231;
    var_1000 = 16;
    pri = fun_0838(var_992, var_984)
    var_1008 = 0;
    var_1016 = 7432345659146245451;
    var_1024 = 16;
    pri = fun_0838(var_1016, var_1008)
    var_1032 = 0;
    var_1040 = 7665965454938017431;
    var_1048 = 16;
    pri = fun_0838(var_1040, var_1032)
    OP_PUSH3_C 4669755625536749568, 4621819117588971520, 4667650060769558528
    var_1056 = 24;
    pri = fun_08B0(var_1048, var_1040, var_1032)
    var_1064 = 5;
    var_1072 = 8;
    pri = fun_0060(var_1064)
    var_1080 = 0;
    var_1088 = 4632205544229594726;
    var_1096 = 0;
    OP_PUSH5_C 4670765592937559491, 4647277649623148134, 4668308047010526659, 4670922938549052375, 4645001220749000704
    var_1104 = 4668517042180734321;
    var_1112 = 1;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    pri = fun_2030()
    var_1128 = 0;
    var_1136 = 4631712963020351078;
    var_1144 = 3;
    OP_PUSH5_C 4670720840065529938, 4645268797898736271, 4668683876577574912, 4670911190267309588, 4645268797898736271
    var_1152 = 4668631286936418386;
    var_1160 = 120;
    pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1168 = 23320;
    var_1176 = 8;
    var_1184 = 16;
    pri = fun_0280(var_1176, var_1168)
    var_1192 = 130;
    var_1200 = 8;
    pri = fun_0060(var_1192)
    var_1208 = 1;
    var_1216 = 0;
    var_1224 = 23368;
    var_1232 = 1;
    var_1240 = 32;
    pri = fun_02E0(var_1232, var_1224, var_1216, var_1208)
    var_1248 = 0;
    pri = fun_0350()
    var_1256 = 0;
    var_1264 = -4026810136153680528;
    var_1272 = 16;
    pri = fun_0838(var_1264, var_1256)
    var_1280 = 0;
    var_1288 = -3158554630572138415;
    var_1296 = 16;
    pri = fun_0838(var_1288, var_1280)
    var_1304 = 10435;
    pri = float(var_1304)
    var_1312 = pri;
    var_1320 = 10;
    pri = float(var_1320)
    var_1328 = pri;
    var_1336 = 9180;
    pri = float(var_1336)
    var_1344 = pri;
    var_1352 = 24;
    pri = fun_08B0(var_1344, var_1336, var_1328)
    var_1360 = 5;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = 0;
    var_1384 = 4633852172843352064;
    var_1392 = 0;
    OP_PUSH5_C 4668886307663364751, 4641392887469430538, 4666963487226268221, 4669511638408987935, 4637234798375972372
    var_1400 = 4667253164559722086;
    var_1408 = 1;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 0;
    pri = fun_2030()
    var_1424 = 0;
    var_1432 = 4632726272936509440;
    var_1440 = 0;
    OP_PUSH5_C 4668606905266072453, 4645841951320063345, 4666830996075121213, 4669224281045068677, 4640511518948605297
    var_1448 = 4667115896030552392;
    var_1456 = 90;
    pri = EvCameraMove(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = 23416;
    var_1472 = 8;
    var_1480 = 16;
    pri = fun_0280(var_1472, var_1464)
    var_1488 = 90;
    var_1496 = 8;
    pri = fun_0060(var_1488)
    var_1504 = 1;
    var_1512 = 0;
    var_1520 = 23464;
    var_1528 = 1;
    var_1536 = 32;
    pri = fun_02E0(var_1528, var_1520, var_1512, var_1504)
    var_1544 = 0;
    pri = fun_0350()
    var_1552 = 1;
    var_1560 = -8030690411766558408;
    var_1568 = 16;
    pri = fun_0838(var_1560, var_1552)
    var_1576 = 1;
    var_1584 = -3158556829595394837;
    var_1592 = 16;
    pri = fun_0838(var_1584, var_1576)
    var_1600 = 1;
    var_1608 = 1137344390351607869;
    var_1616 = 16;
    pri = fun_0838(var_1608, var_1600)
    var_1624 = 1;
    var_1632 = 766126218067963874;
    var_1640 = 16;
    pri = fun_0838(var_1632, var_1624)
    var_1648 = 1;
    var_1656 = 5125792077355514497;
    var_1664 = 16;
    pri = fun_0838(var_1656, var_1648)
    var_1672 = 0;
    var_1680 = 4632782567931851571;
    var_1688 = 0;
    OP_PUSH5_C 4664773166605250068, 4647398332019412828, 4663247946065431757, 4665411598031918203, 4648193146984899543
    var_1696 = 4663232563897759171;
    var_1704 = 1;
    pri = EvCameraMove(var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1712 = 0;
    pri = fun_2030()
    var_1720 = 0;
    var_1728 = 4632782567931851571;
    var_1736 = 3;
    OP_PUSH5_C 4664252470883684188, 4656816726632709489, 4663295368001937736, 4664887779697329439, 4656742641539229942
    var_1744 = 4663200293231483945;
    var_1752 = 120;
    pri = EvCameraMove(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1760 = 23512;
    var_1768 = 8;
    var_1776 = 16;
    pri = fun_0280(var_1768, var_1760)
    var_1784 = 105;
    var_1792 = 8;
    pri = fun_0060(var_1784)
    var_1800 = 5750;
    pri = float(var_1800)
    var_1808 = pri;
    var_1816 = 10;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = 26145;
    pri = float(var_1832)
    var_1840 = pri;
    var_1848 = 24;
    pri = fun_08B0(var_1840, var_1832, var_1824)
    var_1856 = 15;
    var_1864 = 8;
    pri = fun_0060(var_1856)
    var_1872 = 1;
    var_1880 = 0;
    var_1888 = 23560;
    var_1896 = 1;
    var_1904 = 32;
    pri = fun_02E0(var_1896, var_1888, var_1880, var_1872)
    var_1912 = 0;
    pri = fun_0350()
    var_1920 = 0;
    var_1928 = 8802641224559852288;
    var_1936 = 16;
    pri = fun_0800(var_1928, var_1920)
    var_1944 = 1;
    var_1952 = 1;
    var_1960 = 5750;
    pri = float(var_1960)
    var_1968 = pri;
    var_1976 = 26145;
    pri = float(var_1976)
    var_1984 = pri;
    var_1992 = 8802641224559852288;
    var_2000 = 40;
    pri = fun_0758(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 5750;
    pri = float(var_2008)
    var_2016 = pri;
    var_2024 = 10;
    pri = float(var_2024)
    var_2032 = pri;
    var_2040 = 26145;
    pri = float(var_2040)
    var_2048 = pri;
    var_2056 = 24;
    pri = fun_08B0(var_2048, var_2040, var_2032)
    var_2064 = 25;
    var_2072 = 8;
    pri = fun_0060(var_2064)
    var_2080 = 1;
    var_2088 = 6862441333535257183;
    var_2096 = 16;
    pri = fun_0838(var_2088, var_2080)
    var_2104 = 1;
    var_2112 = 6862442433046885394;
    var_2120 = 16;
    pri = fun_0838(var_2112, var_2104)
    var_2128 = 1;
    var_2136 = -4026805738107167684;
    var_2144 = 16;
    pri = fun_0838(var_2136, var_2128)
    var_2152 = 1;
    var_2160 = 1630847891595543982;
    var_2168 = 16;
    pri = fun_0838(var_2160, var_2152)
    var_2176 = 1;
    var_2184 = -7412997828454362149;
    var_2192 = 16;
    pri = fun_0838(var_2184, var_2176)
    var_2200 = 1;
    var_2208 = 1200969391715372989;
    var_2216 = 16;
    pri = fun_0838(var_2208, var_2200)
    var_2224 = 1;
    var_2232 = 1630850090618800404;
    var_2240 = 16;
    pri = fun_0838(var_2232, var_2224)
    var_2248 = 1;
    var_2256 = -3158555730083766626;
    var_2264 = 16;
    pri = fun_0838(var_2256, var_2248)
    var_2272 = 1;
    var_2280 = 5125794276378770919;
    var_2288 = 16;
    pri = fun_0838(var_2280, var_2272)
    var_2296 = 1;
    var_2304 = -455284708926196413;
    var_2312 = 16;
    pri = fun_0838(var_2304, var_2296)
    var_2320 = 1;
    var_2328 = 6862440234023628972;
    var_2336 = 16;
    pri = fun_0838(var_2328, var_2320)
    var_2344 = 1;
    var_2352 = 6862443532558513605;
    var_2360 = 16;
    pri = fun_0838(var_2352, var_2344)
    var_2368 = 1;
    var_2376 = -7413002226500874993;
    var_2384 = 16;
    pri = fun_0838(var_2376, var_2368)
    var_2392 = 1;
    var_2400 = 7910995783005930292;
    var_2408 = 16;
    pri = fun_0838(var_2400, var_2392)
    var_2416 = 1;
    var_2424 = 766125118556335663;
    var_2432 = 16;
    pri = fun_0838(var_2424, var_2416)
    var_2440 = 1;
    var_2448 = 7910999081540814925;
    var_2456 = 16;
    pri = fun_0838(var_2448, var_2440)
    var_2464 = 1;
    var_2472 = -4322019425242510876;
    var_2480 = 16;
    pri = fun_0838(var_2472, var_2464)
    var_2488 = 0;
    pri = fun_06C8()
    var_2496 = 0;
    var_2504 = 4630347809383304397;
    var_2512 = 0;
    OP_PUSH5_C 4666035785285448499, 4639816627599850865, 4672441168943697101, 4666253472095073731, 4633894394089858662
    var_2520 = 4672377397269286093;
    var_2528 = 1;
    pri = EvCameraMove(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2536 = 0;
    pri = fun_2030()
    var_2544 = 0;
    var_2552 = 4630347809383304397;
    var_2560 = 2;
    OP_PUSH5_C 4663927532212327547, 4639948920838904873, 4672783911457086505, 4664357551209950740, 4630185961271695770
    var_2568 = 4672722116154826424;
    var_2576 = 180;
    pri = EvCameraMove(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2584 = 23608;
    var_2592 = 8;
    var_2600 = 16;
    pri = fun_0280(var_2592, var_2584)
    var_2608 = 170;
    var_2616 = 8;
    pri = fun_0060(var_2608)
    var_2624 = 1;
    var_2632 = 0;
    var_2640 = 23656;
    var_2648 = 15;
    var_2656 = 32;
    pri = fun_02E0(var_2648, var_2640, var_2632, var_2624)
    var_2664 = 0;
    pri = fun_0350()
    var_2672 = 0;
    var_2680 = 4629503384453172429;
    var_2688 = 0;
    OP_PUSH5_C 4670980434760847852, 4647831363678896128, 4670217112557159711, 4671172645886057513, 4647906658235166228
    var_2696 = 4670221010325880177;
    var_2704 = 1;
    pri = EvCameraMove(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2712 = 0;
    pri = fun_2030()
    var_2720 = 0;
    var_2728 = 6862441333535257183;
    var_2736 = 16;
    pri = fun_0838(var_2728, var_2720)
    var_2744 = 0;
    var_2752 = 6862442433046885394;
    var_2760 = 16;
    pri = fun_0838(var_2752, var_2744)
    var_2768 = 0;
    var_2776 = -4026805738107167684;
    var_2784 = 16;
    pri = fun_0838(var_2776, var_2768)
    var_2792 = 0;
    var_2800 = 1630847891595543982;
    var_2808 = 16;
    pri = fun_0838(var_2800, var_2792)
    var_2816 = 0;
    var_2824 = -7412997828454362149;
    var_2832 = 16;
    pri = fun_0838(var_2824, var_2816)
    var_2840 = 0;
    var_2848 = 1200969391715372989;
    var_2856 = 16;
    pri = fun_0838(var_2848, var_2840)
    var_2864 = 0;
    var_2872 = 1630850090618800404;
    var_2880 = 16;
    pri = fun_0838(var_2872, var_2864)
    var_2888 = 0;
    var_2896 = -3158555730083766626;
    var_2904 = 16;
    pri = fun_0838(var_2896, var_2888)
    var_2912 = 0;
    var_2920 = 5125794276378770919;
    var_2928 = 16;
    pri = fun_0838(var_2920, var_2912)
    var_2936 = 0;
    var_2944 = -455284708926196413;
    var_2952 = 16;
    pri = fun_0838(var_2944, var_2936)
    var_2960 = 0;
    var_2968 = 6862440234023628972;
    var_2976 = 16;
    pri = fun_0838(var_2968, var_2960)
    var_2984 = 0;
    var_2992 = 6862443532558513605;
    var_3000 = 16;
    pri = fun_0838(var_2992, var_2984)
    var_3008 = 0;
    var_3016 = -7413002226500874993;
    var_3024 = 16;
    pri = fun_0838(var_3016, var_3008)
    var_3032 = 0;
    var_3040 = 7910995783005930292;
    var_3048 = 16;
    pri = fun_0838(var_3040, var_3032)
    var_3056 = 0;
    var_3064 = 766125118556335663;
    var_3072 = 16;
    pri = fun_0838(var_3064, var_3056)
    var_3080 = 0;
    var_3088 = 7910999081540814925;
    var_3096 = 16;
    pri = fun_0838(var_3088, var_3080)
    var_3104 = 0;
    var_3112 = -4322019425242510876;
    var_3120 = 16;
    pri = fun_0838(var_3112, var_3104)
    var_3128 = 1;
    var_3136 = 8802641224559852288;
    var_3144 = 16;
    pri = fun_0800(var_3136, var_3128)
    var_3152 = 1;
    var_3160 = 1;
    OP_PUSH4_C 4640537203540230144, 4671941454652768256, 4670227865780879360, 8802641224559852288
    var_3168 = 48;
    pri = fun_07A8(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3176 = 0;
    pri = fun_0930()
    var_3184 = 32;
    var_3192 = 8;
    pri = fun_0060(var_3184)
    var_3200 = 0;
    pri = fun_06C8()
    var_3208 = 0;
    var_3216 = 4631952216750555136;
    var_3224 = 3;
    OP_PUSH5_C 4671731351724595610, 4626311458217273590, 4670225386382158725, 4671915822287945728, 4641736286941017539
    var_3232 = 4670229119224135025;
    var_3240 = 120;
    pri = EvCameraMove(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3248 = 23704;
    var_3256 = 8;
    var_3264 = 16;
    pri = fun_0280(var_3256, var_3248)
    var_3272 = 50;
    var_3280 = 8;
    pri = fun_0060(var_3272)
    var_3288 = 1;
    var_3296 = 766121820021451030;
    var_3304 = 16;
    pri = fun_0838(var_3296, var_3288)
    var_3312 = 1;
    var_3320 = 8106626419537127196;
    var_3328 = 16;
    pri = fun_0838(var_3320, var_3312)
    var_3336 = 1;
    var_3344 = 1630852289642056826;
    var_3352 = 16;
    pri = fun_0838(var_3344, var_3336)
    var_3360 = 1;
    var_3368 = 1;
    var_3376 = 180;
    pri = float(var_3376)
    var_3384 = pri;
    OP_PUSH3_C 4671941454652768256, 4670127810222751744, -2117705809819912762
    var_3392 = 48;
    pri = fun_07A8(var_3384, var_3376, var_3368, var_3360, var_3352, var_3344)
    var_3400 = 30;
    var_3408 = 8;
    pri = fun_0060(var_3400)
    var_3416 = 0;
    var_3424 = 8;
    pri = fun_15B0(var_3416)
// lab_8888
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_8A68
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4671731351724595610, 4626311458217273590, 4670225386382158725, 4671915822287945728, 4641736286941017539
    var_32 = 4670229119224135025;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4640537203540230144, 4671941454652768256, 4670227865780879360, 8802641224559852288
    var_64 = 48;
    pri = fun_07A8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 180;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH3_C 4671941454652768256, 4670127810222751744, -2117705809819912762
    var_104 = 48;
    pri = fun_07A8(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    pri = fun_06C8()
    var_120 = 23224;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_8A68
    var_8 = 1;
    var_16 = 0;
    var_24 = 50;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 0;
    OP_PUSH4_C 4671817759594643456, 4670227865780879360, 4611686018427387904, 8802641224559852288
    var_64 = 72;
    pri = fun_0998(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 1;
    var_80 = 0;
    var_88 = 50;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 0;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 0;
    OP_PUSH4_C 4671749040117907456, 4670127810222751744, 4611686018427387904, -2117705809819912762
    var_128 = 72;
    pri = fun_0998(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0B10(var_136)
    var_152 = 5;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 1;
    var_176 = 1;
    var_184 = 10;
    var_192 = 0;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 15;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 8802641224559852288;
    var_232 = 48;
    pri = fun_1208(var_224, var_216, var_208, var_200, var_192, var_184)
    var_240 = -2117705809819912762;
    var_248 = 8;
    pri = fun_0B10(var_240)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = 8;
    var_304 = -2117705809819912762;
    var_312 = 56;
    pri = fun_20C0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 15;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 101;
    var_368 = -1;
    OP_PUSH2_C -3761704250633234328, -2117705809819912762
    var_376 = 56;
    pri = fun_1DF8(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_1F40(var_384)
    var_400 = 1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 8;
    var_432 = -2117705809819912762;
    var_440 = 40;
    pri = fun_43F8(var_432, var_424, var_416, var_408, var_400)
    var_448 = 1;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = -2117705809819912762;
    var_472 = 8;
    pri = fun_0CB0(var_464)
    var_480 = 1;
    var_488 = 1;
    var_496 = -1;
    var_504 = -1;
    var_512 = 0;
    var_520 = 4;
    var_528 = -2117705809819912762;
    var_536 = 56;
    pri = fun_20C0(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 101;
    var_576 = -1;
    OP_PUSH2_C -3761700952098349695, -2117705809819912762
    var_584 = 56;
    pri = fun_1DF8(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_1F40(var_592)
    var_608 = 0;
    pri = fun_2000()
    var_616 = 1;
    var_624 = 3;
    var_632 = 0;
    var_640 = 4;
    var_648 = -2117705809819912762;
    var_656 = 40;
    pri = fun_43F8(var_648, var_640, var_632, var_624, var_616)
    var_664 = 1;
    var_672 = 8;
    pri = fun_0060(var_664)
    var_680 = -2117705809819912762;
    var_688 = 8;
    pri = fun_0CB0(var_680)
    var_696 = 0;
    var_704 = 3;
    var_712 = 0;
    var_720 = 100;
    var_728 = -1;
    OP_PUSH2_C -3761702051609977906, -2117705809819912762
    var_736 = 56;
    pri = fun_1DF8(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_1F40(var_744)
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    OP_PUSH2_C 8802641224559852288, -2117705809819912762
    var_792 = 48;
    pri = fun_0AB8(var_784, var_776, var_768, var_760, var_752, var_744)
    var_800 = -2117705809819912762;
    var_808 = 8;
    pri = fun_0B10(var_800)
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C -3761698753075093273, -2117705809819912762
    var_856 = 56;
    pri = fun_1DF8(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1F40(var_864)
    var_880 = 0;
    pri = fun_2000()
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    var_912 = 150;
    pri = float(var_912)
    var_920 = pri;
    var_928 = -2117705809819912762;
    var_936 = 40;
    pri = fun_0A68(var_928, var_920, var_912, var_904, var_896)
    var_944 = -2117705809819912762;
    var_952 = 8;
    pri = fun_0B10(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 50;
    var_984 = 150;
    OP_PUSH2_C 4611686018427387904, -2117705809819912762
    var_992 = 48;
    pri = fun_0A10(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 15;
    var_1008 = 8;
    pri = fun_0060(var_1000)
    var_1016 = 0;
    var_1024 = 4631952216750555136;
    var_1032 = 3;
    OP_PUSH5_C 4671734160976804577, 4630053668032641761, 4670262228268026429, 4671909354410795336, 4641866117274025329
    var_1040 = 4670171070507746591;
    var_1048 = 60;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 20;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 150;
    pri = float(var_1096)
    var_1104 = pri;
    var_1112 = 8802641224559852288;
    var_1120 = 40;
    pri = fun_0A68(var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1128 = -1;
    var_1136 = 8802641224559852288;
    var_1144 = 16;
    pri = fun_1268(var_1136, var_1128)
    var_1152 = 40;
    var_1160 = 8;
    pri = fun_0060(var_1152)
    var_1168 = 8802641224559852288;
    var_1176 = 8;
    pri = fun_0B10(var_1168)
    var_1184 = 1;
    var_1192 = 0;
    var_1200 = 23176;
    var_1208 = 8;
    var_1216 = 32;
    pri = fun_02E0(var_1208, var_1200, var_1192, var_1184)
    var_1224 = 0;
    pri = fun_0350()
    var_1232 = 0;
    var_1240 = -4026810136153680528;
    var_1248 = 16;
    pri = fun_0838(var_1240, var_1232)
    var_1256 = 0;
    var_1264 = -3158554630572138415;
    var_1272 = 16;
    pri = fun_0838(var_1264, var_1256)
    var_1280 = 0;
    var_1288 = -7413006624547387837;
    var_1296 = 16;
    pri = fun_0838(var_1288, var_1280)
    var_1304 = 0;
    var_1312 = 766127317579592085;
    var_1320 = 16;
    pri = fun_0838(var_1312, var_1304)
    var_1328 = 0;
    var_1336 = 1126649539470313381;
    var_1344 = 16;
    pri = fun_0838(var_1336, var_1328)
    var_1352 = 0;
    var_1360 = 5125788778820629864;
    var_1368 = 16;
    pri = fun_0838(var_1360, var_1352)
    var_1376 = 0;
    var_1384 = -5092834258003007029;
    var_1392 = 16;
    pri = fun_0838(var_1384, var_1376)
    var_1400 = 0;
    var_1408 = 766121820021451030;
    var_1416 = 16;
    pri = fun_0838(var_1408, var_1400)
    var_1424 = 0;
    var_1432 = 8106626419537127196;
    var_1440 = 16;
    pri = fun_0838(var_1432, var_1424)
    var_1448 = 0;
    var_1456 = 1630852289642056826;
    var_1464 = 16;
    pri = fun_0838(var_1456, var_1448)
    var_1472 = -2117705809819912762;
    var_1480 = 8;
    pri = fun_0B10(var_1472)
    var_1488 = 3;
    var_1496 = 1;
    pri = EvCameraEnd(var_1496, var_1488)
    var_1504 = 15;
    var_1512 = 8;
    pri = fun_0060(var_1504)
    pri = 0;
    return pri;
}
// fun_9660
fun_9660() {
    pri = 0;
    return pri;
}
// fun_9678
fun_9678() {
    var_8 = -2117705809819912762;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = 3641199730571183281;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = -1983266781276115916;
    var_48 = 8;
    pri = fun_0438(var_40)
    var_56 = 1490;
    var_64 = 8;
    pri = fun_6668(var_56)
    var_72 = 8354367212204860235;
    pri = FlagReset(var_72)
    var_80 = -316047009090804736;
    pri = FlagReset(var_80)
    var_88 = -3766253767755029548;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_97A0
fun_97A0() {
    var_8 = 0;
    pri = fun_0468()
    var_16 = 5;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 23224;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9830
fun_9830() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6800()
    var_16 = 0;
    pri = fun_6858()
    var_24 = 0;
    pri = fun_6870()
    var_32 = 0;
    pri = fun_6888()
    var_40 = 0;
    pri = fun_9660()
    var_48 = 0;
    pri = fun_9678()
    var_56 = 0;
    pri = fun_97A0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9920
fun_9920() {
    var_8 = 0;
    pri = fun_6858()
    var_16 = 0;
    pri = fun_9678()
    pri = 0;
    return pri;
}
