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
    pri = fun_06C8()
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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0848
fun_0848() {
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
// fun_08C0
fun_08C0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JZER lab_09E0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12F8(var_24)
    OP_JNZ lab_09E0
    pri = 0;
    return pri;
// lab_09E0
    OP_JUMP lab_09F0
// lab_09F0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A50
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09F0
    pri = 0;
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B88
    pri = 0;
    return pri;
// lab_0B88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BC8
// lab_0BC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JNZ lab_0C50
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C40
    pri = 0;
    return pri;
// lab_0C50
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C98
    pri = 0;
    return pri;
// lab_0C98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D40(var_8)
    pri = 0;
    return pri;
// lab_0CF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BC8
    pri = 0;
    return pri;
// lab_0C40
    OP_JUMP lab_0C98
}
// fun_0D40
fun_0D40() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DC8
    pri = 0;
    return pri;
// lab_0DC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JZER lab_0EF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E20
    OP_ZERO_P_S 64
// lab_0EF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F30
    OP_CONST_S 64, 1
// lab_0F30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F68
    OP_CONST_S 72, 1
// lab_0F68
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
// lab_0E20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E48
    OP_ZERO_P_S 72
// lab_0E48
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
    OP_JUMP lab_1008
// lab_1008
    pri = 0;
    return pri;
}
// fun_1018
fun_1018() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D8
fun_10D8() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1118(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1190(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1158(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11D0(var_24)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1328
fun_1328() {
    OP_JUMP lab_1340
// lab_1340
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13D0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B40(var_8)
    pri = 0;
    return pri;
// lab_13D0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1460
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1450
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B40(var_8)
    pri = 0;
    return pri;
// lab_1460
    pri = 0;
    return pri;
// lab_1450
    OP_JUMP lab_1470
// lab_1470
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1340
    pri = 0;
    return pri;
// lab_13C0
    OP_JUMP lab_1470
}
// fun_14B0
fun_14B0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B40(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1328(var_40)
    pri = 0;
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1570
fun_1570() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1598
fun_1598() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_15C8
fun_15C8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
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
// switch_1C18
        case default:
        {
// switch_1C18_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C60
// lab_1C60
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
            OP_JNZ lab_1D08
            var_88 = 0;
            pri = fun_1EC0()
// lab_1D08
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C18_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1800
                case default:
                {
// switch_1800_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1878
// lab_1878
                    OP_JUMP lab_1C60
                }
                case 0x0:
                {
// switch_1800_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1878
                }
                case 0x1:
                {
// switch_1800_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1878
                }
                case 0x2:
                {
// switch_1800_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1878
                }
                case 0x3:
                {
// switch_1800_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1878
                }
                case 0x4:
                {
// switch_1800_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1878
                }
                case 0x5:
                {
// switch_1800_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1878
                }
            }
        }
        case 0x65:
        {
// switch_1C18_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_19B8
                case default:
                {
// switch_19B8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A30
// lab_1A30
                    OP_JUMP lab_1C60
                }
                case 0x0:
                {
// switch_19B8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A30
                }
                case 0x1:
                {
// switch_19B8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A30
                }
                case 0x2:
                {
// switch_19B8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A30
                }
                case 0x3:
                {
// switch_19B8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A30
                }
                case 0x4:
                {
// switch_19B8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A30
                }
                case 0x5:
                {
// switch_19B8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A30
                }
            }
        }
        case 0x66:
        {
// switch_1C18_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B70
                case default:
                {
// switch_1B70_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BE8
// lab_1BE8
                    OP_JUMP lab_1C60
                }
                case 0x0:
                {
// switch_1B70_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1BE8
                }
                case 0x1:
                {
// switch_1B70_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1BE8
                }
                case 0x2:
                {
// switch_1B70_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1BE8
                }
                case 0x3:
                {
// switch_1B70_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BE8
                }
                case 0x4:
                {
// switch_1B70_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1BE8
                }
                case 0x5:
                {
// switch_1B70_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1BE8
                }
            }
        }
    }
}
// fun_1D20
fun_1D20() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B08(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DC8
    pri = 1;
    return pri;
// lab_1DC8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E10
fun_1E10() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D20(var_8)
    arg_2 = pri;
// lab_1E60
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1600(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EC0
fun_1EC0() {
    OP_JUMP lab_1ED8
// lab_1ED8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F18
    pri = 0;
    return pri;
// lab_1F18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1ED8
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    var_8 = 0;
    pri = fun_1EC0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2008
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2008
    pri = 0;
    return pri;
}
// fun_2018
fun_2018() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_20C0()
    return pri;
}
// fun_20C0
fun_20C0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2100
fun_2100() {
    pri = arg_1;
    OP_JNZ lab_2148
    var_8 = 696;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2148
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
// fun_21A0
fun_21A0() {
    pri = arg_3;
    OP_JNZ lab_21E8
    var_8 = 704;
    pri = GetFnvHash64(var_8)
    arg_3 = pri;
// lab_21E8
    pri = arg_6;
    OP_ADD_P_C -1
    var_8 = pri;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2250
fun_2250() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_22C8
fun_22C8() {
    var_8 = 0;
    pri = fun_2250()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2348
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2348
    pri = 1;
    return pri;
// lab_2348
    var_8 = 0;
    pri = fun_2250()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2388
    pri = 1;
    return pri;
// lab_2388
    var_8 = 0;
    pri = fun_2250()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_23B8
fun_23B8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2408
fun_2408() {
    OP_JUMP lab_2420
// lab_2420
    pri = EvCameraMoveWait_()
    OP_JZER lab_2458
    pri = 0;
    return pri;
// lab_2458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2420
    pri = 0;
    return pri;
}
// fun_2498
fun_2498() {
    pri = arg_6;
    OP_JNZ lab_24D0
    var_8 = 0;
    pri = fun_1018()
// lab_24D0
    pri = arg_1;
    switch (pri) {
// switch_3A38
        case default:
        {
// switch_3A38_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D88
            pri = 1;
            OP_JUMP lab_3D90
// lab_3D88
            pri = 0;
// lab_3D90
            OP_JZER lab_3EE8
            var_16 = 8384;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B08(var_24, var_16)
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
            var_64 = 8488;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3F48
// lab_3EE8
            var_8 = 64;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3F48
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3FA8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4008
// lab_3FA8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4008
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4008
            pri = arg_2;
            OP_JZER lab_4048
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4048
            var_8 = 0;
            pri = fun_1058()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A38_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1:
        {
// switch_3A38_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x2:
        {
// switch_3A38_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x3:
        {
// switch_3A38_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x4:
        {
// switch_3A38_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x5:
        {
// switch_3A38_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5672;
            var_72 = 5664;
            var_80 = 5656;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x6:
        {
// switch_3A38_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5696;
            var_72 = 5688;
            var_80 = 5680;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x7:
        {
// switch_3A38_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5720;
            var_72 = 5712;
            var_80 = 5704;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x8:
        {
// switch_3A38_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x9:
        {
// switch_3A38_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5744;
            var_72 = 5736;
            var_80 = 5728;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xa:
        {
// switch_3A38_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5768;
            var_72 = 5760;
            var_80 = 5752;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xb:
        {
// switch_3A38_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5792;
            var_72 = 5784;
            var_80 = 5776;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xc:
        {
// switch_3A38_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5816;
            var_72 = 5808;
            var_80 = 5800;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xd:
        {
// switch_3A38_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5840;
            var_72 = 5832;
            var_80 = 5824;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xe:
        {
// switch_3A38_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5864;
            var_72 = 5856;
            var_80 = 5848;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0xf:
        {
// switch_3A38_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x10:
        {
// switch_3A38_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x11:
        {
// switch_3A38_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5888;
            var_72 = 5880;
            var_80 = 5872;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x12:
        {
// switch_3A38_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5912;
            var_72 = 5904;
            var_80 = 5896;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x13:
        {
// switch_3A38_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x14:
        {
// switch_3A38_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x15:
        {
// switch_3A38_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x16:
        {
// switch_3A38_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x17:
        {
// switch_3A38_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x18:
        {
// switch_3A38_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x19:
        {
// switch_3A38_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5936;
            var_72 = 5928;
            var_80 = 5920;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1a:
        {
// switch_3A38_case_0x1a
            var_8 = 1;
            var_16 = 5944;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            var_40 = 6080;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6160;
            var_88 = 6152;
            var_96 = 6144;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1b:
        {
// switch_3A38_case_0x1b
            var_8 = 3;
            var_16 = 6168;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            var_40 = 6304;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6384;
            var_88 = 6376;
            var_96 = 6368;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1c:
        {
// switch_3A38_case_0x1c
            var_8 = 2;
            var_16 = 6392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            var_40 = 6528;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A90(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6608;
            var_88 = 6600;
            var_96 = 6592;
            alt = 712;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1d:
        {
// switch_3A38_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6616;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1e:
        {
// switch_3A38_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6752;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x1f:
        {
// switch_3A38_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6888;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x20:
        {
// switch_3A38_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7024;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x21:
        {
// switch_3A38_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7144;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x22:
        {
// switch_3A38_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7264;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x23:
        {
// switch_3A38_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7400;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x24:
        {
// switch_3A38_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7536;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x25:
        {
// switch_3A38_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7672;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x26:
        {
// switch_3A38_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7808;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x27:
        {
// switch_3A38_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7952;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x28:
        {
// switch_3A38_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
        case 0x29:
        {
// switch_3A38_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8240;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A38_case_default
        }
    }
}
// fun_4078
fun_4078() {
    pri = arg_5;
    OP_JNZ lab_40B0
    var_8 = 0;
    pri = fun_1018()
// lab_40B0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4100
    OP_CONST_S -8, -1
// lab_4100
    pri = arg_1;
    switch (pri) {
// switch_5BB8
        case default:
        {
// switch_5BB8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6060
            var_520 = 28248;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B08(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6060
            pri = 1;
            OP_JUMP lab_6068
// lab_6060
            pri = 0;
// lab_6068
            OP_JZER lab_60B8
            var_8 = 64;
            var_16 = 28344;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6310
// lab_60B8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6120
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6120
            pri = 1;
            OP_JUMP lab_6128
// lab_6120
            pri = 0;
// lab_6128
            OP_JZER lab_62B0
            var_16 = 28520;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B08(var_24, var_16)
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
            var_176 = 28624;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28640;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8504;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6310
// lab_62B0
            var_8 = 64;
            alt = 8504;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6310
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6380
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6380
            var_8 = 0;
            pri = fun_1058()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BB8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1:
        {
// switch_5BB8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2:
        {
// switch_5BB8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3:
        {
// switch_5BB8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x4:
        {
// switch_5BB8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x5:
        {
// switch_5BB8_case_0x5
            var_8 = 2;
            var_16 = 18504;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D40(var_40)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x6:
        {
// switch_5BB8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x7:
        {
// switch_5BB8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x8:
        {
// switch_5BB8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x9:
        {
// switch_5BB8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xa:
        {
// switch_5BB8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xb:
        {
// switch_5BB8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xc:
        {
// switch_5BB8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xd:
        {
// switch_5BB8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19152;
            var_72 = 18976;
            var_80 = 18792;
            var_88 = 18600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xe:
        {
// switch_5BB8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19808;
            var_72 = 19600;
            var_80 = 19384;
            var_88 = 19160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0xf:
        {
// switch_5BB8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20200;
            var_72 = 20080;
            var_80 = 19952;
            var_88 = 19816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x10:
        {
// switch_5BB8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20544;
            var_72 = 20440;
            var_80 = 20328;
            var_88 = 20208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x11:
        {
// switch_5BB8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20888;
            var_72 = 20784;
            var_80 = 20672;
            var_88 = 20552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x12:
        {
// switch_5BB8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x13:
        {
// switch_5BB8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x14:
        {
// switch_5BB8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21448;
            var_72 = 21272;
            var_80 = 21088;
            var_88 = 20896;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x15:
        {
// switch_5BB8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x16:
        {
// switch_5BB8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x17:
        {
// switch_5BB8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x18:
        {
// switch_5BB8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x19:
        {
// switch_5BB8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1a:
        {
// switch_5BB8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1b:
        {
// switch_5BB8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1c:
        {
// switch_5BB8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21840;
            var_72 = 21720;
            var_80 = 21592;
            var_88 = 21456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1d:
        {
// switch_5BB8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1e:
        {
// switch_5BB8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22304;
            var_72 = 22160;
            var_80 = 22008;
            var_88 = 21848;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x1f:
        {
// switch_5BB8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x20:
        {
// switch_5BB8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x21:
        {
// switch_5BB8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x22:
        {
// switch_5BB8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x23:
        {
// switch_5BB8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x24:
        {
// switch_5BB8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22672;
            var_72 = 22560;
            var_80 = 22440;
            var_88 = 22312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x25:
        {
// switch_5BB8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23040;
            var_72 = 22928;
            var_80 = 22808;
            var_88 = 22680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x26:
        {
// switch_5BB8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x27:
        {
// switch_5BB8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x28:
        {
// switch_5BB8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x29:
        {
// switch_5BB8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23480;
            var_72 = 23344;
            var_80 = 23200;
            var_88 = 23048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2a:
        {
// switch_5BB8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23872;
            var_72 = 23752;
            var_80 = 23624;
            var_88 = 23488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2b:
        {
// switch_5BB8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24288;
            var_72 = 24160;
            var_80 = 24024;
            var_88 = 23880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2c:
        {
// switch_5BB8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24728;
            var_72 = 24592;
            var_80 = 24448;
            var_88 = 24296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2d:
        {
// switch_5BB8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2e:
        {
// switch_5BB8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25048;
            var_72 = 24952;
            var_80 = 24848;
            var_88 = 24736;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x2f:
        {
// switch_5BB8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25440;
            var_72 = 25320;
            var_80 = 25192;
            var_88 = 25056;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x30:
        {
// switch_5BB8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25832;
            var_72 = 25712;
            var_80 = 25584;
            var_88 = 25448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x31:
        {
// switch_5BB8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x32:
        {
// switch_5BB8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x33:
        {
// switch_5BB8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26224;
            var_72 = 26104;
            var_80 = 25976;
            var_88 = 25840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x34:
        {
// switch_5BB8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26592;
            var_72 = 26480;
            var_80 = 26360;
            var_88 = 26232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x35:
        {
// switch_5BB8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27080;
            var_72 = 26928;
            var_80 = 26768;
            var_88 = 26600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x36:
        {
// switch_5BB8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27448;
            var_72 = 27336;
            var_80 = 27216;
            var_88 = 27088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x37:
        {
// switch_5BB8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x38:
        {
// switch_5BB8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27816;
            var_72 = 27704;
            var_80 = 27584;
            var_88 = 27456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x39:
        {
// switch_5BB8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3a:
        {
// switch_5BB8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3b:
        {
// switch_5BB8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3c:
        {
// switch_5BB8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3d:
        {
// switch_5BB8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
        case 0x3e:
        {
// switch_5BB8_case_0x3e
            var_8 = 4;
            var_16 = 28144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            OP_JUMP switch_5BB8_case_default
        }
    }
}
// fun_63B0
fun_63B0() {
    pri = arg_4;
    OP_JNZ lab_63E8
    var_8 = 0;
    pri = fun_1018()
// lab_63E8
    pri = arg_1;
    switch (pri) {
// switch_77C0
        case default:
        {
// switch_77C0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29216;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12C8(var_264)
            OP_JZER lab_7D88
            pri = arg_3;
            switch (pri) {
// switch_7D30
                case default:
                {
// switch_7D30_case_default
                    OP_JUMP lab_8040
// lab_8040
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_80B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_80B0
                    var_8 = 0;
                    pri = fun_1058()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D30_case_0x1
                    var_8 = 32;
                    var_16 = 29368;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D30_case_default
                }
                case 0x2:
                {
// switch_7D30_case_0x2
                    var_8 = 32;
                    var_16 = 29472;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D30_case_default
                }
                case 0x3:
                {
// switch_7D30_case_0x3
                    var_8 = 32;
                    var_16 = 29272;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D30_case_default
                }
            }
// lab_7D88
            pri = arg_1;
            OP_JZER lab_7DD8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DD8
            pri = 0;
            OP_JUMP lab_7DE0
// lab_7DD8
            pri = 1;
// lab_7DE0
            OP_JZER lab_7E48
            var_8 = 29568;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B08(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E48
            pri = 1;
            OP_JUMP lab_7E50
// lab_7E48
            pri = 0;
// lab_7E50
            OP_JZER lab_7EA0
            var_8 = 32;
            var_16 = 29664;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8040
// lab_7EA0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7F08
            var_8 = 32;
            var_16 = 29824;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8040
// lab_7F08
            var_16 = 29944;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B08(var_24, var_16)
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
            var_176 = 30048;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30064;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_77C0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1:
        {
// switch_77C0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2:
        {
// switch_77C0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3:
        {
// switch_77C0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x4:
        {
// switch_77C0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x5:
        {
// switch_77C0_case_0x5
            var_8 = 1;
            var_16 = 28696;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D40(var_40)
            OP_JUMP switch_77C0_case_default
        }
        case 0x6:
        {
// switch_77C0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x7:
        {
// switch_77C0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x8:
        {
// switch_77C0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x9:
        {
// switch_77C0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xa:
        {
// switch_77C0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xb:
        {
// switch_77C0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xc:
        {
// switch_77C0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xd:
        {
// switch_77C0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xe:
        {
// switch_77C0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0xf:
        {
// switch_77C0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x10:
        {
// switch_77C0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x11:
        {
// switch_77C0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x12:
        {
// switch_77C0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x13:
        {
// switch_77C0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x14:
        {
// switch_77C0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x15:
        {
// switch_77C0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x16:
        {
// switch_77C0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x17:
        {
// switch_77C0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x18:
        {
// switch_77C0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x19:
        {
// switch_77C0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1a:
        {
// switch_77C0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1b:
        {
// switch_77C0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1c:
        {
// switch_77C0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1d:
        {
// switch_77C0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1e:
        {
// switch_77C0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x1f:
        {
// switch_77C0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x20:
        {
// switch_77C0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x21:
        {
// switch_77C0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x22:
        {
// switch_77C0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x23:
        {
// switch_77C0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x24:
        {
// switch_77C0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x25:
        {
// switch_77C0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x26:
        {
// switch_77C0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x27:
        {
// switch_77C0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x28:
        {
// switch_77C0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x29:
        {
// switch_77C0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2a:
        {
// switch_77C0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2b:
        {
// switch_77C0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2c:
        {
// switch_77C0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2d:
        {
// switch_77C0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2e:
        {
// switch_77C0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x2f:
        {
// switch_77C0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x30:
        {
// switch_77C0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x31:
        {
// switch_77C0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x32:
        {
// switch_77C0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x33:
        {
// switch_77C0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x34:
        {
// switch_77C0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x35:
        {
// switch_77C0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x36:
        {
// switch_77C0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x37:
        {
// switch_77C0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x38:
        {
// switch_77C0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x39:
        {
// switch_77C0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3a:
        {
// switch_77C0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3b:
        {
// switch_77C0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3c:
        {
// switch_77C0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28792;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3d:
        {
// switch_77C0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28968;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
        case 0x3e:
        {
// switch_77C0_case_0x3e
            var_8 = 3;
            var_16 = 29112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AC8(var_24, var_16, var_8)
            OP_JUMP switch_77C0_case_default
        }
    }
}
// fun_80E0
fun_80E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_82F0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30112;
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
    var_424 = 30168;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30184;
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
    OP_JZER lab_82D8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_82D8
    pri = 0;
    return pri;
}
// fun_82F0
fun_82F0() {
    var_8 = arg_1;
    var_16 = 30232;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AC8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8338
fun_8338() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8438
        case default:
        {
// switch_8438_case_default
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
// switch_8438_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8438_case_default
        }
        case 0x1:
        {
// switch_8438_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8438_case_default
        }
        case 0x2:
        {
// switch_8438_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8438_case_default
        }
        case 0x3:
        {
// switch_8438_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8438_case_default
        }
    }
}
// fun_84F8
fun_84F8() {
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
    pri = fun_1E10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1EC0()
    pri = 0;
    return pri;
}
// fun_8590
fun_8590() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8338(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_84F8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8638
fun_8638() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8688
// lab_8688
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30336;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8700
    OP_JUMP lab_8730
// lab_8700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8688
// lab_8730
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_87B8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_63B0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1598(var_56)
// lab_87B8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8820
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1098(var_24, var_16)
// lab_8820
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1098(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_88E0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0B40(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_08C0(var_88, var_80, var_72, var_64, var_56)
// lab_88E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8920
    pri = 0;
    return pri;
// lab_8920
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8A68
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30456;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A90(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8A30
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8A68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0968(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0968(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B40(var_40)
    pri = 0;
    return pri;
// lab_8A30
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1098(var_16, var_8)
}
// fun_8AF0
fun_8AF0() {
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
    pri = fun_8590(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1F58(var_112)
    var_128 = 0;
    pri = fun_2018()
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
    pri = fun_8638(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8C68
fun_8C68() {
    pri = 30592;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8CF0
// lab_8CF0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8E70
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8E60
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8DB0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8DB0
    pri = 0;
    OP_JUMP lab_8DB8
// lab_8E70
    pri = 0;
    return pri;
// lab_8E60
    OP_JUMP lab_8CE8
// lab_8CE8
    OP_INC_P_S -936
// lab_8DB0
    pri = 1;
// lab_8DB8
    OP_JZER lab_8E30
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8E28
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8E30
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8E28
}
// fun_8E90
fun_8E90() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_8EC8
fun_8EC8() {
    var_8 = 0;
    pri = fun_8E90()
    switch (pri) {
// switch_8F78
        case default:
        {
// switch_8F78_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_8FC0
// lab_8FC0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8F78_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_8FC0
        }
        case 0x1:
        {
// switch_8F78_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_8FC0
        }
        case 0x2:
        {
// switch_8F78_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_8FC0
        }
    }
}
// fun_8FD0
fun_8FD0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9068
    var_8 = 1;
    var_16 = 0;
    var_24 = 31512;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1570()
// lab_9068
    pri = arg_4;
    OP_JZER lab_90A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_15C8(var_8)
// lab_90A0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_90F8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_90F8
    pri = 0;
    OP_JUMP lab_9100
// lab_90F8
    pri = 1;
// lab_9100
    OP_JZER lab_91C8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_91C8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_91A0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14B0(var_32, var_24)
    OP_JUMP lab_91C8
// lab_91C8
    pri = arg_2;
    OP_JZER lab_92A0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9270
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1098(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0810(var_40)
    OP_JUMP lab_92A0
// lab_92A0
    pri = arg_3;
    OP_JZER lab_92D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1538(var_8)
// lab_92D8
    pri = 0;
    return pri;
// lab_9270
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1098(var_16, var_8)
// lab_91A0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14B0(var_16, var_8)
}
// fun_92E8
fun_92E8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9468
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9380
    var_8 = 1;
    var_16 = 0;
    var_24 = 31512;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_9468
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9380
    pri = arg_0;
    OP_JNZ lab_93C8
    var_8 = 31560;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_93E8
// lab_93C8
    var_8 = 31736;
    pri = SoundPostEvent(var_8)
// lab_93E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9468
    var_24 = 32000;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_94A8
fun_94A8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8C68(var_24)
    pri = 0;
    return pri;
}
// fun_9510
fun_9510() {
    pri = g_mode;
    switch (pri) {
// switch_9620
        case default:
        {
// switch_9620_case_default
            pri = CommandNOP()
            OP_JUMP lab_9688
// lab_9688
            pri = 0;
            return pri;
        }
        case 0x8ee1acb893836c37:
        {
// switch_9620_case_0x8ee1acb893836c37
            var_8 = 0;
            pri = fun_F768()
            OP_JUMP lab_9688
        }
        case 0xb87385221aee0067:
        {
// switch_9620_case_0xb87385221aee0067
            var_8 = 0;
            pri = fun_F420()
            OP_JUMP lab_9688
        }
        case 0xfed15cbdb1626665:
        {
// switch_9620_case_0xfed15cbdb1626665
            var_8 = 0;
            pri = fun_F570()
            OP_JUMP lab_9688
        }
        case 0x0:
        {
// switch_9620_case_0x0
            var_8 = 0;
            pri = fun_9698()
            OP_JUMP lab_9688
        }
        case 0x5466d31e688ce9db:
        {
// switch_9620_case_0x5466d31e688ce9db
            var_8 = 0;
            pri = fun_F528()
            OP_JUMP lab_9688
        }
    }
}
// fun_9698
fun_9698() {
    pri = 0;
    return pri;
}
// fun_96B0
fun_96B0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 32048;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 32104;
    pri = SoundPostEvent(var_56)
    pri = 0;
    return pri;
}
// fun_9738
fun_9738() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8FD0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9790
fun_9790() {
    var_8 = 4166911318193987639;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 5996991087849294980;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = 7457989319736929833;
    pri = VanishFlagSet(var_40)
    var_48 = 1959212757904040858;
    pri = VanishFlagSet(var_48)
    pri = 0;
    return pri;
}
// fun_9848
fun_9848() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_9878
fun_9878() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4584242208198098944, 4655228438105921946, 4652271191631855616, 8802641224559852288
    var_24 = 48;
    pri = fun_0740(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4653520236841009152, 4650916593306435584, 8990121772845238799
    var_48 = 48;
    pri = fun_0740(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4654259108654874624, 4650846224562257920, 8990122872356867010
    var_72 = 48;
    pri = fun_0740(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4587338432941916160, 4654034808282808320, 4650010595725148160, 8892309384594757773
    var_96 = 48;
    pri = fun_0740(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C -4587338432941916160, 4653409406068929331, 4650057215018165862, -2560267667239473489
    var_120 = 48;
    pri = fun_0740(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = -5;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 4103919529309054878;
    var_160 = 24;
    pri = fun_0798(var_152, var_144, var_136)
    var_168 = 1;
    var_176 = 5;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 5767568996398104757;
    var_200 = 24;
    pri = fun_0798(var_192, var_184, var_176)
    var_208 = 1;
    var_216 = -20;
    pri = float(var_216)
    var_224 = pri;
    var_232 = -686112562623115494;
    var_240 = 24;
    pri = fun_0798(var_232, var_224, var_216)
    var_248 = 1;
    var_256 = -170;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 231539292373669382;
    var_280 = 24;
    pri = fun_0798(var_272, var_264, var_256)
    var_288 = 0;
    var_296 = 4166911318193987639;
    var_304 = 16;
    pri = fun_07D8(var_296, var_288)
    var_312 = 0;
    var_320 = 5996991087849294980;
    var_328 = 16;
    pri = fun_07D8(var_320, var_312)
    var_336 = 6;
    var_344 = 8990122872356867010;
    var_352 = 16;
    pri = fun_1118(var_344, var_336)
    var_360 = 6;
    var_368 = 8990121772845238799;
    var_376 = 16;
    pri = fun_1118(var_368, var_360)
    var_384 = 6;
    var_392 = 8892309384594757773;
    var_400 = 16;
    pri = fun_1118(var_392, var_384)
    var_408 = 6;
    var_416 = -2560267667239473489;
    var_424 = 16;
    pri = fun_1118(var_416, var_408)
    var_432 = 15;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 0;
    var_456 = 4628039714574277018;
    var_464 = 0;
    OP_PUSH5_C 4654384321039045755, 4642482547473021665, 4651039738608746496, 4655062675732918436, 4643100736890622444
    var_472 = 4651935972526779269;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    pri = fun_2408()
    var_496 = 32000;
    var_504 = 8;
    var_512 = 16;
    pri = fun_0280(var_504, var_496)
    var_520 = 0;
    pri = fun_0350()
    var_528 = 5;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 33;
    pri = float(var_568)
    var_576 = pri;
    var_584 = 8990122872356867010;
    var_592 = 40;
    pri = fun_08C0(var_584, var_576, var_568, var_560, var_552)
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 26;
    pri = float(var_624)
    var_632 = pri;
    var_640 = -2560267667239473489;
    var_648 = 40;
    pri = fun_08C0(var_640, var_632, var_624, var_616, var_608)
    var_656 = 5;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    var_696 = 17;
    pri = float(var_696)
    var_704 = pri;
    var_712 = 8990121772845238799;
    var_720 = 40;
    pri = fun_08C0(var_712, var_704, var_696, var_688, var_680)
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    var_752 = 50;
    pri = float(var_752)
    var_760 = pri;
    var_768 = 8892309384594757773;
    var_776 = 40;
    pri = fun_08C0(var_768, var_760, var_752, var_744, var_736)
    var_784 = 15;
    var_792 = 8;
    pri = fun_0060(var_784)
    OP_PUSH2_C 4617878467915022336, 4628039714574277018
    var_800 = 6;
    OP_PUSH5_C 4654348960745096479, 4644629673779742638, 4650992943393868349, 4655027535341294715, 4644960406877377659
    var_808 = 4651886802366785126;
    var_816 = 30;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 8990122872356867010;
    var_832 = 8;
    pri = fun_0968(var_824)
    var_840 = 8892309384594757773;
    var_848 = 8;
    pri = fun_0968(var_840)
    var_856 = 8990121772845238799;
    var_864 = 8;
    pri = fun_0968(var_856)
    var_872 = -2560267667239473489;
    var_880 = 8;
    pri = fun_0968(var_872)
    var_888 = 1;
    var_896 = 1;
    var_904 = -1;
    var_912 = -1;
    var_920 = 0;
    var_928 = 6;
    var_936 = 8990121772845238799;
    var_944 = 56;
    pri = fun_4078(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 0;
    var_960 = 1;
    var_968 = 8892309384594757773;
    var_976 = 24;
    pri = fun_80E0(var_968, var_960, var_952)
    var_984 = 8892309384594757773;
    var_992 = 8;
    pri = fun_0B40(var_984)
    var_1000 = 0;
    pri = fun_2408()
    var_1008 = 15;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    OP_PUSH2_C 4623395377458551194, 4630305588136797798
    var_1024 = 6;
    OP_PUSH5_C 4654191950484650066, 4644955656987145667, 4651875279484926034, 4654462958110664294, 4646167758605605929
    var_1032 = 4652755196650402611;
    var_1040 = 30;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 0;
    pri = fun_2408()
    var_1056 = 60;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    var_1080 = 4627448617123184640;
    var_1088 = 0;
    OP_PUSH5_C 4654608269567391171, 4643309380217109217, 4650841386711095706, 4655703734992376955, 4645949263654934282
    var_1096 = 4654867930233406751;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_2408()
    var_1120 = 0;
    var_1128 = 4627448617123184640;
    var_1136 = 3;
    OP_PUSH5_C 4654441407682759885, 4642603229869286359, 4649824382435868017, 4655536829127280558, 4645546754438238044
    var_1144 = 4654359428095792906;
    var_1152 = 60;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 1;
    var_1168 = 0;
    var_1176 = 4641240890982006784;
    var_1184 = 0;
    var_1192 = 0;
    OP_PUSH4_C 4654531787538563072, 4651180476097101824, 4607182418800017408, 8990122872356867010
    var_1200 = 72;
    pri = fun_0848(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 8990122872356867010;
    var_1216 = 8;
    pri = fun_0968(var_1208)
    var_1224 = 0;
    var_1232 = 1;
    var_1240 = 8990122872356867010;
    var_1248 = 24;
    pri = fun_80E0(var_1240, var_1232, var_1224)
    var_1256 = 15;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 1;
    var_1280 = 1;
    var_1288 = -1;
    var_1296 = -1;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 8990122872356867010;
    var_1328 = 56;
    pri = fun_4078(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 15;
    var_1344 = 8;
    pri = fun_0060(var_1336)
    var_1352 = 6;
    var_1360 = 8990122872356867010;
    var_1368 = 16;
    pri = fun_1190(var_1360, var_1352)
    var_1376 = 0;
    var_1384 = 3;
    var_1392 = 0;
    var_1400 = 100;
    var_1408 = -1;
    OP_PUSH2_C 7160368658913393945, 8990122872356867010
    var_1416 = 56;
    pri = fun_1E10(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_1F58(var_1424)
    var_1440 = 0;
    pri = fun_2018()
    var_1448 = -1;
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = 0;
    var_1480 = 33;
    var_1488 = 40;
    pri = fun_2100(var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1496 = 0;
    pri = fun_22C8()
    OP_JZER lab_A640
    var_1504 = 0;
    pri = fun_F7F0()
    var_1512 = 0;
    pri = fun_23B8()
// lab_A640
    var_8 = 0;
    var_16 = 4166911318193987639;
    var_24 = 16;
    pri = fun_07D8(var_16, var_8)
    var_32 = 0;
    var_40 = 5996991087849294980;
    var_48 = 16;
    pri = fun_07D8(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 1;
    var_72 = -2560267667239473489;
    var_80 = 24;
    pri = fun_80E0(var_72, var_64, var_56)
    var_88 = 0;
    var_96 = 1;
    var_104 = 8990121772845238799;
    var_112 = 24;
    pri = fun_80E0(var_104, var_96, var_88)
    var_120 = 15;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    var_160 = -1;
    var_168 = 0;
    var_176 = 9;
    var_184 = 8990122872356867010;
    var_192 = 56;
    pri = fun_4078(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 4629193761978790707;
    var_216 = 0;
    OP_PUSH5_C 4654092422692103782, 4640872862449957601, 4649317727477788836, 4655701931793307402, 4646111815453984686
    var_224 = 4653793487470744044;
    var_232 = 1;
    pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 0;
    pri = fun_2408()
    var_248 = 0;
    var_256 = 4629193761978790707;
    var_264 = 2;
    OP_PUSH5_C 4654356525385095578, 4642208461214449664, 4650310542497205453, 4655966342349554975, 4646779790758091162
    var_272 = 4654289719058591908;
    var_280 = 240;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 32000;
    var_296 = 8;
    var_304 = 16;
    pri = fun_0280(var_296, var_288)
    var_312 = 0;
    pri = fun_0350()
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C 7160367559401765734, 8990122872356867010
    var_360 = 56;
    pri = fun_1E10(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1F58(var_368)
    var_384 = 0;
    pri = fun_2018()
    var_392 = 1;
    var_400 = 3;
    var_408 = 0;
    var_416 = 9;
    var_424 = 8990122872356867010;
    var_432 = 40;
    pri = fun_63B0(var_424, var_416, var_408, var_400, var_392)
    var_440 = 8990122872356867010;
    var_448 = 8;
    pri = fun_0B40(var_440)
    var_456 = 1;
    var_464 = 0;
    var_472 = 50;
    pri = float(var_472)
    var_480 = pri;
    var_488 = -4594234569871327232;
    var_496 = 1;
    OP_PUSH4_C 4653828100096786432, 4652579054887632896, 4611686018427387904, 8990122872356867010
    var_504 = 72;
    pri = fun_0848(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 15;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 1;
    var_536 = 0;
    OP_PUSH2_C 4641240890982006784, 4629137466983448576
    var_544 = 1;
    OP_PUSH4_C 4654443826608340992, 4651532319817990144, 4607182418800017408, 8892309384594757773
    var_552 = 72;
    pri = fun_0848(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 8990122872356867010;
    var_568 = 8;
    pri = fun_0968(var_560)
    var_576 = 8892309384594757773;
    var_584 = 8;
    pri = fun_0968(var_576)
    var_592 = 1;
    var_600 = 1;
    var_608 = -1;
    var_616 = -1;
    var_624 = 0;
    var_632 = 47;
    var_640 = 8990122872356867010;
    var_648 = 56;
    pri = fun_4078(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 1;
    var_672 = -1;
    var_680 = -1;
    var_688 = 0;
    var_696 = 2;
    var_704 = 8990121772845238799;
    var_712 = 56;
    pri = fun_4078(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 1;
    var_736 = -1;
    var_744 = -1;
    var_752 = 0;
    var_760 = 0;
    var_768 = -2560267667239473489;
    var_776 = 56;
    pri = fun_4078(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 15;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 1;
    var_808 = 1;
    var_816 = -1;
    var_824 = -1;
    var_832 = 0;
    var_840 = 11;
    var_848 = 8892309384594757773;
    var_856 = 56;
    pri = fun_4078(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 100;
    var_896 = -1;
    OP_PUSH2_C -8224467576869687017, 8892309384594757773
    var_904 = 56;
    pri = fun_1E10(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 8;
    pri = fun_1F58(var_912)
    var_928 = 0;
    pri = fun_2018()
    var_936 = -1;
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    var_968 = 201;
    var_976 = 40;
    pri = fun_2100(var_968, var_960, var_952, var_944, var_936)
    var_984 = 0;
    pri = fun_22C8()
    OP_JZER lab_AE10
    var_992 = 0;
    pri = fun_F7F0()
    var_1000 = 0;
    pri = fun_23B8()
// lab_AE10
    var_8 = 0;
    var_16 = 4166911318193987639;
    var_24 = 16;
    pri = fun_07D8(var_16, var_8)
    var_32 = 0;
    var_40 = 5996991087849294980;
    var_48 = 16;
    pri = fun_07D8(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 48;
    var_104 = 8990122872356867010;
    var_112 = 56;
    pri = fun_4078(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C -4587338432941916160, 4655015572654784512, 4653485052468920320, -8424277323871559939
    var_136 = 48;
    pri = fun_0740(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 15;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 1;
    var_168 = 1;
    var_176 = -1;
    var_184 = -1;
    var_192 = 0;
    var_200 = 9;
    var_208 = 8892309384594757773;
    var_216 = 56;
    pri = fun_4078(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    OP_PUSH2_C -9223372036854775808, 4630249293141455667
    var_224 = 0;
    OP_PUSH5_C 4654502496548799119, 4643585753459866993, 4651570055057055416, 4655709936237957612, 4644386725690469253
    var_232 = 4653648835720993833;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_2408()
    var_256 = 32000;
    var_264 = 8;
    var_272 = 16;
    pri = fun_0280(var_264, var_256)
    var_280 = 0;
    pri = fun_0350()
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -8224466477358058806, 8990121772845238799
    var_328 = 56;
    pri = fun_1E10(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_1F58(var_336)
    var_352 = 0;
    pri = fun_2018()
    var_360 = 1;
    var_368 = 3;
    var_376 = 0;
    var_384 = 9;
    var_392 = 8892309384594757773;
    var_400 = 40;
    pri = fun_63B0(var_392, var_384, var_376, var_368, var_360)
    var_408 = 30;
    var_416 = 8;
    pri = fun_0060(var_408)
    OP_PUSH2_C -9223372036854775808, 4630249293141455667
    var_424 = 3;
    OP_PUSH5_C 4654515030981355766, 4643585753459866993, 4651820479825397678, 4656081527187680788, 4644385494237446144
    var_432 = 4653462534470783468;
    var_440 = 90;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 1;
    var_456 = 3;
    var_464 = 0;
    var_472 = 48;
    var_480 = 8990122872356867010;
    var_488 = 40;
    pri = fun_63B0(var_480, var_472, var_464, var_456, var_448)
    var_496 = 1;
    var_504 = 0;
    OP_PUSH2_C 4641240890982006784, 4621819117588971520
    var_512 = 1;
    var_520 = 1330;
    pri = float(var_520)
    var_528 = pri;
    OP_PUSH3_C 4651708241678434304, 4611686018427387904, 8892309384594757773
    var_536 = 72;
    pri = fun_0848(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    OP_PUSH4_C 4655015572654784512, 4652781365027143680, 4607182418800017408, -8424277323871559939
    var_584 = 72;
    pri = fun_0848(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    var_600 = 3;
    var_608 = 2;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C 7802187101360432092, -8424277323871559939
    var_632 = 56;
    pri = fun_1E10(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = -8424277323871559939;
    var_648 = 8;
    pri = fun_0968(var_640)
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    OP_PUSH2_C -8424277323871559939, 8802641224559852288
    var_688 = 48;
    pri = fun_0910(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 8802641224559852288;
    var_704 = 8;
    pri = fun_0968(var_696)
    var_712 = 8892309384594757773;
    var_720 = 8;
    pri = fun_0968(var_712)
    var_728 = 0;
    pri = fun_1EC0()
    var_736 = 1;
    var_744 = 8;
    pri = fun_1F58(var_736)
    var_752 = 0;
    pri = fun_2018()
    var_760 = 1;
    var_768 = 1;
    var_776 = -1;
    var_784 = -1;
    var_792 = 0;
    var_800 = 2;
    var_808 = -8424277323871559939;
    var_816 = 56;
    pri = fun_4078(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 0;
    var_832 = 3;
    var_840 = 0;
    var_848 = 100;
    var_856 = -1;
    OP_PUSH2_C 7802190399895316725, -8424277323871559939
    var_864 = 56;
    pri = fun_1E10(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 1;
    var_880 = 8;
    pri = fun_1F58(var_872)
    var_888 = 0;
    pri = fun_2018()
    var_896 = 1;
    var_904 = 3;
    var_912 = 0;
    var_920 = 2;
    var_928 = -8424277323871559939;
    var_936 = 40;
    pri = fun_63B0(var_928, var_920, var_912, var_904, var_896)
    var_944 = 1;
    var_952 = 1;
    var_960 = 16;
    pri = fun_92E8(var_952, var_944)
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    var_992 = -120;
    pri = float(var_992)
    var_1000 = pri;
    var_1008 = -8424277323871559939;
    var_1016 = 40;
    pri = fun_08C0(var_1008, var_1000, var_992, var_984, var_976)
    var_1024 = -8424277323871559939;
    var_1032 = 8;
    pri = fun_0968(var_1024)
    var_1040 = 0;
    var_1048 = 0;
    var_1056 = 0;
    var_1064 = -140;
    pri = float(var_1064)
    var_1072 = pri;
    var_1080 = 8802641224559852288;
    var_1088 = 40;
    pri = fun_08C0(var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1096 = 1;
    var_1104 = 1;
    var_1112 = -1;
    var_1120 = -1;
    var_1128 = 0;
    var_1136 = 1;
    var_1144 = -8424277323871559939;
    var_1152 = 56;
    pri = fun_4078(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH2_C 7802189300383688514, -8424277323871559939
    var_1200 = 56;
    pri = fun_1E10(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 8802641224559852288;
    var_1216 = 8;
    pri = fun_0968(var_1208)
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_1F58(var_1224)
    var_1240 = 0;
    pri = fun_2018()
    var_1248 = 1;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 1;
    var_1280 = -8424277323871559939;
    var_1288 = 40;
    pri = fun_63B0(var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1296 = 1;
    var_1304 = 1;
    var_1312 = -1;
    var_1320 = -1;
    var_1328 = 0;
    var_1336 = 47;
    var_1344 = 8892309384594757773;
    var_1352 = 56;
    pri = fun_4078(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1360 = 1;
    var_1368 = 1;
    var_1376 = -1;
    var_1384 = -1;
    var_1392 = 0;
    var_1400 = 47;
    var_1408 = 8990122872356867010;
    var_1416 = 56;
    pri = fun_4078(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    OP_PUSH2_C -9223372036854775808, 4630249293141455667
    var_1424 = 3;
    OP_PUSH5_C 4654628368639946916, 4643482487327786271, 4651247238443140383, 4654983027110602342, 4644479084667202437
    var_1432 = 4654361011392536904;
    var_1440 = 120;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 1;
    var_1456 = 0;
    var_1464 = 4641240890982006784;
    var_1472 = 70;
    pri = float(var_1472)
    var_1480 = pri;
    var_1488 = 1;
    OP_PUSH4_C 4654605674719949619, 4650690533715764838, 4607182418800017408, -2560267667239473489
    var_1496 = 72;
    pri = fun_0848(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1504 = 1;
    var_1512 = 0;
    OP_PUSH2_C 4641240890982006784, 4632233691727265792
    var_1520 = 1;
    OP_PUSH4_C 4654263506701385728, 4651268437027323904, 4607182418800017408, 8990121772845238799
    var_1528 = 72;
    pri = fun_0848(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1536 = -2560267667239473489;
    var_1544 = 8;
    pri = fun_0968(var_1536)
    var_1552 = 8990121772845238799;
    var_1560 = 8;
    pri = fun_0968(var_1552)
    var_1568 = 15;
    var_1576 = 8;
    pri = fun_0060(var_1568)
    var_1584 = 0;
    var_1592 = 1;
    var_1600 = 8990121772845238799;
    var_1608 = 24;
    pri = fun_80E0(var_1600, var_1592, var_1584)
    var_1616 = 8990121772845238799;
    var_1624 = 8;
    pri = fun_0B40(var_1616)
    var_1632 = 1;
    var_1640 = 1;
    var_1648 = -1;
    var_1656 = -1;
    var_1664 = 0;
    var_1672 = 1;
    var_1680 = 8990121772845238799;
    var_1688 = 56;
    pri = fun_4078(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 0;
    var_1704 = 3;
    var_1712 = 0;
    var_1720 = 100;
    var_1728 = -1;
    OP_PUSH2_C -8313215779547294558, 8990121772845238799
    var_1736 = 56;
    pri = fun_1E10(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 1;
    var_1752 = 8;
    pri = fun_1F58(var_1744)
    var_1760 = 0;
    pri = fun_2018()
    var_1776 = 199;
    var_1784 = 198;
    var_1792 = 197;
    var_1800 = 24;
    pri = fun_8EC8(var_1792, var_1784, var_1776)
    var_8 = pri;
    var_1808 = -1;
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = 0;
    var_1840 = 35;
    var_1848 = 34;
    var_1856 = var_8;
    var_1864 = 56;
    pri = fun_21A0(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1872 = 0;
    pri = fun_22C8()
    OP_JZER lab_BD28
    var_1880 = 0;
    pri = fun_F7F0()
    var_1888 = 0;
    pri = fun_23B8()
// lab_BD28
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4585227370616586240, 4655763240561672192, 4654518593399029760, 4166911318193987639
    var_24 = 48;
    pri = fun_0740(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4585227370616586240, 4655568407101230285, 4654692316236218368, 5996991087849294980
    var_48 = 48;
    pri = fun_0740(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 0;
    var_64 = 4166911318193987639;
    var_72 = 16;
    pri = fun_07D8(var_64, var_56)
    var_80 = 0;
    var_88 = 5996991087849294980;
    var_96 = 16;
    pri = fun_07D8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C -4584594051918987264, 4654971592189673472, 4652605443166699520, -8424277323871559939
    var_120 = 48;
    pri = fun_0740(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 0;
    var_168 = 48;
    var_176 = 8892309384594757773;
    var_184 = 56;
    pri = fun_4078(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 48;
    var_240 = 8990122872356867010;
    var_248 = 56;
    pri = fun_4078(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    pri = EvCameraStart()
    var_256 = 15;
    var_264 = 8;
    pri = fun_0060(var_256)
    OP_PUSH2_C -9223372036854775808, 4630755948099534848
    var_272 = 0;
    OP_PUSH5_C 4655401413275203666, 4645051710322948178, 4652541231687637402, 4656492920458329457, 4647357694069650227
    var_280 = 4653252659691273585;
    var_288 = 1;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    pri = fun_2408()
    OP_PUSH2_C -9223372036854775808, 4630755948099534848
    var_304 = 2;
    OP_PUSH5_C 4655696302293773189, 4645674297787060060, 4652733382339707535, 4656755022040158700, 4647847108685405880
    var_312 = 4653444678401948385;
    var_320 = 240;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 32000;
    var_336 = 8;
    var_344 = 16;
    pri = fun_0280(var_336, var_328)
    var_352 = 0;
    pri = fun_0350()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C -8313216879058922769, 8892309384594757773
    var_400 = 56;
    pri = fun_1E10(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1F58(var_408)
    var_424 = 0;
    pri = fun_2018()
    var_432 = 1;
    var_440 = 3;
    var_448 = 0;
    var_456 = 48;
    var_464 = 8892309384594757773;
    var_472 = 40;
    pri = fun_63B0(var_464, var_456, var_448, var_440, var_432)
    var_480 = 1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 48;
    var_512 = 8990122872356867010;
    var_520 = 40;
    pri = fun_63B0(var_512, var_504, var_496, var_488, var_480)
    var_528 = 1;
    var_536 = 4166911318193987639;
    var_544 = 16;
    pri = fun_07D8(var_536, var_528)
    var_552 = 1;
    var_560 = 5996991087849294980;
    var_568 = 16;
    pri = fun_07D8(var_560, var_552)
    var_576 = 0;
    var_584 = 4629672269439198822;
    var_592 = 0;
    OP_PUSH5_C 4655440335986826936, 4643762203085892485, 4653673200898665349, 4656356009270438789, 4644528166866266358
    var_600 = 4654747819583188500;
    var_608 = 1;
    pri = EvCameraMove(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_616 = 0;
    pri = fun_2408()
    var_624 = 0;
    var_632 = 4629672269439198822;
    var_640 = 2;
    OP_PUSH5_C 4655354266216604631, 4643762203085892485, 4653746560314470564, 4656269851539286262, 4644527111335103693
    var_648 = 4654821266959923937;
    var_656 = 90;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 32264;
    pri = SoundPostEvent(var_664)
    var_672 = 30;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 32424;
    pri = SoundPostEvent(var_688)
    var_696 = 0;
    var_704 = 3;
    var_712 = 2;
    var_720 = 100;
    var_728 = -1;
    OP_PUSH2_C -2353269261366212444, 4166911318193987639
    var_736 = 56;
    pri = fun_1E10(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_776 = 48;
    pri = fun_0910(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    var_808 = 0;
    OP_PUSH2_C 4166911318193987639, -8424277323871559939
    var_816 = 48;
    pri = fun_0910(var_808, var_800, var_792, var_784, var_776, var_768)
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    OP_PUSH2_C 4166911318193987639, 8990121772845238799
    var_856 = 48;
    pri = fun_0910(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    OP_PUSH2_C 4166911318193987639, 8990122872356867010
    var_896 = 48;
    pri = fun_0910(var_888, var_880, var_872, var_864, var_856, var_848)
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    var_928 = 65;
    pri = float(var_928)
    var_936 = pri;
    var_944 = 8892309384594757773;
    var_952 = 40;
    pri = fun_08C0(var_944, var_936, var_928, var_920, var_912)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 60;
    pri = float(var_984)
    var_992 = pri;
    var_1000 = -2560267667239473489;
    var_1008 = 40;
    pri = fun_08C0(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = 8990121772845238799;
    var_1024 = 8;
    pri = fun_0968(var_1016)
    var_1032 = 8990122872356867010;
    var_1040 = 8;
    pri = fun_0968(var_1032)
    var_1048 = 8892309384594757773;
    var_1056 = 8;
    pri = fun_0968(var_1048)
    var_1064 = -2560267667239473489;
    var_1072 = 8;
    pri = fun_0968(var_1064)
    var_1080 = 4;
    var_1088 = 4;
    var_1096 = 8990121772845238799;
    var_1104 = 24;
    pri = fun_1208(var_1096, var_1088, var_1080)
    var_1112 = 1;
    var_1120 = 1;
    var_1128 = -1;
    var_1136 = -1;
    var_1144 = 0;
    var_1152 = 12;
    var_1160 = 8990121772845238799;
    var_1168 = 56;
    pri = fun_4078(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 4;
    var_1184 = 4;
    var_1192 = 8990122872356867010;
    var_1200 = 24;
    pri = fun_1208(var_1192, var_1184, var_1176)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 12;
    var_1256 = 8990122872356867010;
    var_1264 = 56;
    pri = fun_4078(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 4;
    var_1280 = 4;
    var_1288 = 8892309384594757773;
    var_1296 = 24;
    pri = fun_1208(var_1288, var_1280, var_1272)
    var_1304 = 1;
    var_1312 = 1;
    var_1320 = -1;
    var_1328 = -1;
    var_1336 = 0;
    var_1344 = 12;
    var_1352 = 8892309384594757773;
    var_1360 = 56;
    pri = fun_4078(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1368 = 4;
    var_1376 = 4;
    var_1384 = -2560267667239473489;
    var_1392 = 24;
    pri = fun_1208(var_1384, var_1376, var_1368)
    var_1400 = 1;
    var_1408 = 1;
    var_1416 = -1;
    var_1424 = -1;
    var_1432 = 0;
    var_1440 = 12;
    var_1448 = -2560267667239473489;
    var_1456 = 56;
    pri = fun_4078(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 15;
    var_1472 = 8;
    pri = fun_0060(var_1464)
    var_1480 = 0;
    pri = fun_1EC0()
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_1F58(var_1488)
    var_1504 = 0;
    pri = fun_2018()
    var_1512 = 0;
    var_1520 = 4628236747057974477;
    var_1528 = 0;
    OP_PUSH5_C 4654045759418620969, 4645134393597356933, 4650858627053419233, 4653617521629834772, 4646561823573000847
    var_1536 = 4648236335801638584;
    var_1544 = 1;
    pri = EvCameraMove(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    pri = fun_2408()
    var_1560 = 0;
    var_1568 = 4628236747057974477;
    var_1576 = 3;
    OP_PUSH5_C 4653911003273520742, 4645134393597356933, 4650970337434801275, 4653292374051268854, 4646559184745094185
    var_1584 = 4648504352756025262;
    var_1592 = 90;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 0;
    var_1608 = 3;
    var_1616 = 0;
    var_1624 = 101;
    var_1632 = -1;
    OP_PUSH2_C 7160370857936650367, 8990121772845238799
    var_1640 = 56;
    pri = fun_1E10(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 1;
    var_1656 = 8;
    pri = fun_1F58(var_1648)
    var_1664 = 0;
    pri = fun_2018()
    var_1672 = 8802641224559852288;
    var_1680 = 8;
    pri = fun_0968(var_1672)
    var_1688 = -8424277323871559939;
    var_1696 = 8;
    pri = fun_0968(var_1688)
    var_1704 = 1;
    var_1712 = 0;
    OP_PUSH2_C 4641240890982006784, -4585227370616586240
    var_1720 = 1;
    OP_PUSH4_C 4654883631259451392, 4653287140375920640, 4607182418800017408, 4166911318193987639
    var_1728 = 72;
    pri = fun_0848(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1736 = 1;
    var_1744 = 0;
    var_1752 = 4641240890982006784;
    var_1760 = -120;
    pri = float(var_1760)
    var_1768 = pri;
    var_1776 = 1;
    OP_PUSH4_C 4654644817333898445, 4653460863213109248, 4607182418800017408, 5996991087849294980
    var_1784 = 72;
    pri = fun_0848(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 0;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_1824 = 48;
    pri = fun_0910(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 0;
    var_1856 = 0;
    OP_PUSH2_C 4166911318193987639, -8424277323871559939
    var_1864 = 48;
    pri = fun_0910(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1872 = 1;
    var_1880 = 3;
    var_1888 = 0;
    var_1896 = 12;
    var_1904 = 8990121772845238799;
    var_1912 = 40;
    pri = fun_63B0(var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1920 = 1;
    var_1928 = 3;
    var_1936 = 0;
    var_1944 = 12;
    var_1952 = 8990122872356867010;
    var_1960 = 40;
    pri = fun_63B0(var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1968 = 1;
    var_1976 = 3;
    var_1984 = 0;
    var_1992 = 12;
    var_2000 = 8892309384594757773;
    var_2008 = 40;
    pri = fun_63B0(var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2016 = 1;
    var_2024 = 3;
    var_2032 = 0;
    var_2040 = 12;
    var_2048 = -2560267667239473489;
    var_2056 = 40;
    pri = fun_63B0(var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2064 = 15;
    var_2072 = 8;
    pri = fun_0060(var_2064)
    var_2080 = 1;
    var_2088 = 1;
    var_2096 = -1;
    var_2104 = -1;
    var_2112 = 0;
    var_2120 = 48;
    var_2128 = 8990121772845238799;
    var_2136 = 56;
    pri = fun_4078(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 1;
    var_2152 = 1;
    var_2160 = -1;
    var_2168 = -1;
    var_2176 = 0;
    var_2184 = 48;
    var_2192 = 8892309384594757773;
    var_2200 = 56;
    pri = fun_4078(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 10;
    var_2216 = 8;
    pri = fun_0060(var_2208)
    var_2224 = 1;
    var_2232 = 1;
    var_2240 = -1;
    var_2248 = -1;
    var_2256 = 0;
    var_2264 = 48;
    var_2272 = 8990122872356867010;
    var_2280 = 56;
    pri = fun_4078(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2288 = 1;
    var_2296 = 1;
    var_2304 = -1;
    var_2312 = -1;
    var_2320 = 0;
    var_2328 = 48;
    var_2336 = -2560267667239473489;
    var_2344 = 56;
    pri = fun_4078(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2352 = 0;
    var_2360 = 3;
    var_2368 = 0;
    var_2376 = 100;
    var_2384 = -1;
    OP_PUSH2_C -8313217978570550980, 8892309384594757773
    var_2392 = 56;
    pri = fun_1E10(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2400 = 1;
    var_2408 = 8;
    pri = fun_1F58(var_2400)
    var_2416 = 0;
    pri = fun_2018()
    var_2424 = 8802641224559852288;
    var_2432 = 8;
    pri = fun_0968(var_2424)
    var_2440 = -8424277323871559939;
    var_2448 = 8;
    pri = fun_0968(var_2440)
    var_2456 = 1;
    var_2464 = 1;
    var_2472 = 100;
    pri = float(var_2472)
    var_2480 = pri;
    OP_PUSH3_C 4655118486943144346, 4652007308841189376, 8802641224559852288
    var_2488 = 48;
    pri = fun_0740(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2496 = 1;
    var_2504 = 1;
    OP_PUSH4_C 4637616900656857088, 4655323435910561792, 4652451511538810880, -8424277323871559939
    var_2512 = 48;
    pri = fun_0740(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2520 = 1;
    var_2528 = 1;
    OP_PUSH4_C 4633641066610819072, 4654131565306052608, 4651532319817990144, 8990121772845238799
    var_2536 = 48;
    pri = fun_0740(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488)
    var_2544 = 1;
    var_2552 = 1;
    OP_PUSH4_C 4630136703150771405, 4653828100096786432, 4652579054887632896, 8990122872356867010
    var_2560 = 48;
    pri = fun_0740(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
    var_2568 = 1;
    var_2576 = 1;
    OP_PUSH4_C 4631431488043640422, 4653564217306120192, 4651708241678434304, 8892309384594757773
    var_2584 = 48;
    pri = fun_0740(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2592 = 1;
    var_2600 = 1;
    OP_PUSH4_C 4634626229029306368, 4654385772394394419, 4650954416506431078, -2560267667239473489
    var_2608 = 48;
    pri = fun_0740(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2616 = 0;
    var_2624 = 4628067862071948083;
    var_2632 = 0;
    OP_PUSH5_C 4654591073205532754, 4643957300429125059, 4652731227296917094, 4655722822514235146, 4644605220641140900
    var_2640 = 4653581281726583276;
    var_2648 = 1;
    pri = EvCameraMove(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    var_2656 = 0;
    pri = fun_2408()
    var_2664 = 0;
    var_2672 = 4628067862071948083;
    var_2680 = 2;
    OP_PUSH5_C 4654691656529241702, 4644014826877490299, 4652806785735977861, 4655823405837944095, 4644662747089506140
    var_2688 = 4653656840165644042;
    var_2696 = 90;
    pri = EvCameraMove(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 0;
    var_2712 = 3;
    var_2720 = 0;
    var_2728 = 100;
    var_2736 = -1;
    OP_PUSH2_C -2353265962831327811, 4166911318193987639
    var_2744 = 56;
    pri = fun_1E10(var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688)
    var_2752 = 1;
    var_2760 = 8;
    pri = fun_1F58(var_2752)
    var_2768 = 0;
    pri = fun_2018()
    var_2776 = 4166911318193987639;
    var_2784 = 8;
    pri = fun_0968(var_2776)
    var_2792 = 5996991087849294980;
    var_2800 = 8;
    pri = fun_0968(var_2792)
    var_2808 = 0;
    pri = fun_2408()
    var_2816 = 0;
    var_2824 = 4628067862071948083;
    var_2832 = 3;
    OP_PUSH5_C 4655107931631517696, 4644014826877490299, 4652663497380646093, 4655072263474312643, 4644657469433692815
    var_2840 = 4654078217001872916;
    var_2848 = 60;
    pri = EvCameraMove(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2856 = 30;
    var_2864 = 8;
    pri = fun_0060(var_2856)
    var_2872 = 0;
    var_2880 = 0;
    var_2888 = 0;
    var_2896 = -75;
    pri = float(var_2896)
    var_2904 = pri;
    var_2912 = 4166911318193987639;
    var_2920 = 40;
    pri = fun_08C0(var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2928 = 30;
    var_2936 = 8;
    pri = fun_0060(var_2928)
    var_2944 = 0;
    var_2952 = 4627786387095237427;
    var_2960 = 0;
    OP_PUSH5_C 4655023489138504499, 4643979114739820134, 4652636185511812137, 4655546240946814321, 4645444191993599099
    var_2968 = 4650507574980902912;
    var_2976 = 1;
    pri = EvCameraMove(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2984 = 0;
    pri = fun_2408()
    var_2992 = 0;
    var_3000 = 4627786387095237427;
    var_3008 = 2;
    OP_PUSH5_C 4655086908969194619, 4644156971740729180, 4652481638157411942, 4655609528836109107, 4645622048994508145
    var_3016 = 4650198304350242079;
    var_3024 = 240;
    pri = EvCameraMove(var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3032 = 0;
    var_3040 = 0;
    var_3048 = 0;
    var_3056 = -70;
    pri = float(var_3056)
    var_3064 = pri;
    var_3072 = 5996991087849294980;
    var_3080 = 40;
    pri = fun_08C0(var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3088 = 15;
    var_3096 = 8;
    pri = fun_0060(var_3088)
    var_3104 = 1;
    var_3112 = 1;
    var_3120 = -1;
    var_3128 = -1;
    var_3136 = 0;
    var_3144 = 9;
    var_3152 = 4166911318193987639;
    var_3160 = 56;
    pri = fun_4078(var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104)
    var_3168 = 20;
    var_3176 = 8;
    pri = fun_0060(var_3168)
    var_3184 = 8;
    var_3192 = 4166911318193987639;
    var_3200 = 16;
    pri = fun_1118(var_3192, var_3184)
    var_3208 = 0;
    var_3216 = 3;
    var_3224 = 0;
    var_3232 = 100;
    var_3240 = -1;
    OP_PUSH2_C -2353267062342956022, 4166911318193987639
    var_3248 = 56;
    pri = fun_1E10(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192)
    var_3256 = 1;
    var_3264 = 8;
    pri = fun_1F58(var_3256)
    var_3272 = 0;
    pri = fun_2018()
    var_3280 = 1;
    var_3288 = 3;
    var_3296 = 0;
    var_3304 = 9;
    var_3312 = 4166911318193987639;
    var_3320 = 40;
    pri = fun_63B0(var_3312, var_3304, var_3296, var_3288, var_3280)
    var_3328 = 15;
    var_3336 = 8;
    pri = fun_0060(var_3328)
    var_3344 = 4166911318193987639;
    var_3352 = 8;
    pri = fun_1158(var_3344)
    var_3360 = 20;
    var_3368 = 8;
    pri = fun_0060(var_3360)
    var_3376 = 5996991087849294980;
    var_3384 = 8;
    pri = fun_0968(var_3376)
    var_3392 = 4166911318193987639;
    var_3400 = 8;
    pri = fun_0968(var_3392)
    var_3408 = 0;
    var_3416 = 4630361883132139930;
    var_3424 = 0;
    OP_PUSH5_C 4655873983372821791, 4647191447911530496, 4653366481134980956, 4656786028268061983, 4649042673648984392
    var_3432 = 4654033796732110766;
    var_3440 = 1;
    pri = EvCameraMove(var_3440, var_3432, var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376, var_3368)
    var_3448 = 0;
    var_3456 = 0;
    var_3464 = 0;
    var_3472 = -120;
    pri = float(var_3472)
    var_3480 = pri;
    var_3488 = 4166911318193987639;
    var_3496 = 40;
    pri = fun_08C0(var_3488, var_3480, var_3472, var_3464, var_3456)
    var_3504 = 0;
    var_3512 = 0;
    var_3520 = 0;
    var_3528 = -120;
    pri = float(var_3528)
    var_3536 = pri;
    var_3544 = 5996991087849294980;
    var_3552 = 40;
    pri = fun_08C0(var_3544, var_3536, var_3528, var_3520, var_3512)
    var_3560 = 4166911318193987639;
    var_3568 = 8;
    pri = fun_0968(var_3560)
    var_3576 = 1;
    var_3584 = 1;
    var_3592 = -1;
    var_3600 = -1;
    var_3608 = 0;
    var_3616 = 2;
    var_3624 = 4166911318193987639;
    var_3632 = 56;
    pri = fun_4078(var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576)
    var_3640 = 15;
    var_3648 = 8;
    pri = fun_0060(var_3640)
    var_3656 = 0;
    var_3664 = 3;
    var_3672 = 0;
    var_3680 = 100;
    var_3688 = -1;
    OP_PUSH2_C -2353272559901097077, 4166911318193987639
    var_3696 = 56;
    pri = fun_1E10(var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640)
    var_3704 = 1;
    var_3712 = 8;
    pri = fun_1F58(var_3704)
    var_3720 = 0;
    pri = fun_2018()
    var_3728 = 5996991087849294980;
    var_3736 = 8;
    pri = fun_0968(var_3728)
    var_3744 = 1;
    var_3752 = 3;
    var_3760 = 0;
    var_3768 = 2;
    var_3776 = 4166911318193987639;
    var_3784 = 40;
    pri = fun_63B0(var_3776, var_3768, var_3760, var_3752, var_3744)
    var_3792 = 1;
    var_3800 = 0;
    var_3808 = 31512;
    var_3816 = 8;
    var_3824 = 32;
    pri = fun_02E0(var_3816, var_3808, var_3800, var_3792)
    var_3832 = 0;
    pri = fun_0350()
    var_3840 = 8990121772845238799;
    var_3848 = 8;
    pri = fun_1270(var_3840)
    var_3856 = 8990122872356867010;
    var_3864 = 8;
    pri = fun_1270(var_3856)
    var_3872 = 8892309384594757773;
    var_3880 = 8;
    pri = fun_1270(var_3872)
    var_3888 = -2560267667239473489;
    var_3896 = 8;
    pri = fun_1270(var_3888)
    var_3904 = 1;
    var_3912 = 3;
    var_3920 = 0;
    var_3928 = 48;
    var_3936 = 8990121772845238799;
    var_3944 = 40;
    pri = fun_63B0(var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3952 = 1;
    var_3960 = 3;
    var_3968 = 0;
    var_3976 = 48;
    var_3984 = 8990122872356867010;
    var_3992 = 40;
    pri = fun_63B0(var_3984, var_3976, var_3968, var_3960, var_3952)
    var_4000 = 1;
    var_4008 = 3;
    var_4016 = 0;
    var_4024 = 48;
    var_4032 = 8892309384594757773;
    var_4040 = 40;
    pri = fun_63B0(var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4048 = 1;
    var_4056 = 3;
    var_4064 = 0;
    var_4072 = 48;
    var_4080 = -2560267667239473489;
    var_4088 = 40;
    pri = fun_63B0(var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4096 = 5;
    var_4104 = 8;
    pri = fun_0060(var_4096)
    var_4112 = 0;
    var_4120 = 8990122872356867010;
    var_4128 = 16;
    pri = fun_07D8(var_4120, var_4112)
    var_4136 = 0;
    var_4144 = 8990121772845238799;
    var_4152 = 16;
    pri = fun_07D8(var_4144, var_4136)
    var_4160 = 0;
    var_4168 = 8892309384594757773;
    var_4176 = 16;
    pri = fun_07D8(var_4168, var_4160)
    var_4184 = 0;
    var_4192 = -2560267667239473489;
    var_4200 = 16;
    pri = fun_07D8(var_4192, var_4184)
    var_4208 = 1;
    var_4216 = 1;
    var_4224 = 1000;
    pri = float(var_4224)
    var_4232 = pri;
    var_4240 = 1000;
    pri = float(var_4240)
    var_4248 = pri;
    var_4256 = 8990121772845238799;
    var_4264 = 40;
    pri = fun_06F0(var_4256, var_4248, var_4240, var_4232, var_4224)
    var_4272 = 1;
    var_4280 = 1;
    var_4288 = 1000;
    pri = float(var_4288)
    var_4296 = pri;
    var_4304 = 1000;
    pri = float(var_4304)
    var_4312 = pri;
    var_4320 = 8990122872356867010;
    var_4328 = 40;
    pri = fun_06F0(var_4320, var_4312, var_4304, var_4296, var_4288)
    var_4336 = 1;
    var_4344 = 1;
    var_4352 = 1000;
    pri = float(var_4352)
    var_4360 = pri;
    var_4368 = 1000;
    pri = float(var_4368)
    var_4376 = pri;
    var_4384 = 8892309384594757773;
    var_4392 = 40;
    pri = fun_06F0(var_4384, var_4376, var_4368, var_4360, var_4352)
    var_4400 = 1;
    var_4408 = 1;
    var_4416 = 1000;
    pri = float(var_4416)
    var_4424 = pri;
    var_4432 = 1000;
    pri = float(var_4432)
    var_4440 = pri;
    var_4448 = -2560267667239473489;
    var_4456 = 40;
    pri = fun_06F0(var_4448, var_4440, var_4432, var_4424, var_4416)
    var_4464 = 5;
    var_4472 = 8;
    pri = fun_0060(var_4464)
    var_4480 = 1;
    var_4488 = 1;
    OP_PUSH4_C 4636033603912859648, 4654048002422341632, 4652266793585344512, 8802641224559852288
    var_4496 = 48;
    pri = fun_0740(var_4488, var_4480, var_4472, var_4464, var_4456, var_4448)
    var_4504 = 1;
    var_4512 = 1;
    OP_PUSH4_C 4636033603912859648, 4654487807073452032, 4652266793585344512, -8424277323871559939
    var_4520 = 48;
    pri = fun_0740(var_4512, var_4504, var_4496, var_4488, var_4480, var_4472)
    var_4528 = 1;
    var_4536 = 1;
    OP_PUSH4_C -4587338432941916160, 4654267904747896832, 4653155198980587520, 4166911318193987639
    var_4544 = 48;
    pri = fun_0740(var_4536, var_4528, var_4520, var_4512, var_4504, var_4496)
    var_4552 = 1;
    var_4560 = 1;
    OP_PUSH4_C -4587338432941916160, 4653941129892121805, 4653284941352665088, 5996991087849294980
    var_4568 = 48;
    pri = fun_0740(var_4560, var_4552, var_4544, var_4536, var_4528, var_4520)
    var_4576 = 1;
    var_4584 = 1;
    OP_PUSH4_C -4587718424160475546, 4653993906450255053, 4650815438236680192, 4103919529309054878
    var_4592 = 48;
    pri = fun_0740(var_4584, var_4576, var_4568, var_4560, var_4552, var_4544)
    var_4600 = 1;
    var_4608 = 1;
    OP_PUSH4_C -4587268064197738496, 4653827220487484211, 4649930551278646067, 5767568996398104757
    var_4616 = 48;
    pri = fun_0740(var_4608, var_4600, var_4592, var_4584, var_4576, var_4568)
    var_4624 = 1;
    var_4632 = 1;
    OP_PUSH4_C -4590139108960187187, 4653558499845655757, 4650428410143703040, -686112562623115494
    var_4640 = 48;
    pri = fun_0740(var_4632, var_4624, var_4616, var_4608, var_4600, var_4592)
    var_4648 = 1;
    var_4656 = 1;
    OP_PUSH4_C -4582877054561052262, 4654472413910663168, 4650001799632125952, 231539292373669382
    var_4664 = 48;
    pri = fun_0740(var_4656, var_4648, var_4640, var_4632, var_4624, var_4616)
    var_4672 = 1;
    var_4680 = 1;
    var_4688 = -1;
    var_4696 = -1;
    var_4704 = 0;
    var_4712 = 1;
    var_4720 = 5767568996398104757;
    var_4728 = 56;
    pri = fun_4078(var_4720, var_4712, var_4704, var_4696, var_4688, var_4680, var_4672)
    var_4736 = 5;
    var_4744 = 8;
    pri = fun_0060(var_4736)
    var_4752 = 0;
    var_4760 = 4628490074537014067;
    var_4768 = 0;
    OP_PUSH5_C 4656675527349470495, 4644565814144401408, 4654176205478140314, 4657317971993580012, 4645337759268030382
    var_4776 = 4654853680562710774;
    var_4784 = 1;
    pri = EvCameraMove(var_4784, var_4776, var_4768, var_4760, var_4752, var_4744, var_4736, var_4728, var_4720, var_4712)
    var_4792 = 0;
    pri = fun_2408()
    var_4800 = 0;
    var_4808 = 4628490074537014067;
    var_4816 = 2;
    OP_PUSH5_C 4656748578902019932, 4644565814144401408, 4653994082372115497, 4657367801860550820, 4645337055580588605
    var_4824 = 4654671557456685957;
    var_4832 = 180;
    pri = EvCameraMove(var_4832, var_4824, var_4816, var_4808, var_4800, var_4792, var_4784, var_4776, var_4768, var_4760)
    var_4840 = 32000;
    var_4848 = 8;
    var_4856 = 16;
    pri = fun_0280(var_4848, var_4840)
    var_4864 = 0;
    pri = fun_0350()
    var_4872 = 60;
    var_4880 = 8;
    pri = fun_0060(var_4872)
    var_4888 = 1;
    var_4896 = 3;
    var_4904 = 0;
    var_4912 = 1;
    var_4920 = 5767568996398104757;
    var_4928 = 40;
    pri = fun_63B0(var_4920, var_4912, var_4904, var_4896, var_4888)
    var_4936 = 0;
    var_4944 = 4629728564434540954;
    var_4952 = 0;
    OP_PUSH5_C 4654208135295810929, 4643928977009593549, 4652844960779694244, 4655133660203607654, 4644685616931363881
    var_4960 = 4651338453927780680;
    var_4968 = 1;
    pri = EvCameraMove(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896)
    var_4976 = 0;
    pri = fun_2408()
    var_4984 = 0;
    var_4992 = 4629728564434540954;
    var_5000 = 2;
    OP_PUSH5_C 4654104825183265096, 4643928977009593549, 4652748951424356844, 4655135551363607429, 4644684561400201216
    var_5008 = 4651348921278477107;
    var_5016 = 480;
    pri = EvCameraMove(var_5016, var_5008, var_5000, var_4992, var_4984, var_4976, var_4968, var_4960, var_4952, var_4944)
    var_5024 = 1;
    var_5032 = 0;
    var_5040 = 4641240890982006784;
    var_5048 = -50;
    pri = float(var_5048)
    var_5056 = pri;
    var_5064 = 1;
    OP_PUSH4_C 4652661738162041651, 4649930551278646067, 4607182418800017408, 5767568996398104757
    var_5072 = 72;
    pri = fun_0848(var_5064, var_5056, var_5048, var_5040, var_5032, var_5024, var_5016, var_5008, var_5000)
    var_5080 = 0;
    var_5088 = 3;
    var_5096 = 0;
    var_5104 = 100;
    var_5112 = -1;
    OP_PUSH2_C -2353273659412725288, 4166911318193987639
    var_5120 = 56;
    pri = fun_1E10(var_5112, var_5104, var_5096, var_5088, var_5080, var_5072, var_5064)
    var_5128 = 1;
    var_5136 = 8;
    pri = fun_1F58(var_5128)
    var_5144 = 0;
    pri = fun_2018()
    var_5152 = 0;
    var_5160 = 4629728564434540954;
    var_5168 = 0;
    OP_PUSH5_C 4653827132526553989, 4644005151175165870, 4651766735697031987, 4655005545108739195, 4644672950557411901
    var_5176 = 4652775691547144356;
    var_5184 = 1;
    pri = EvCameraMove(var_5184, var_5176, var_5168, var_5160, var_5152, var_5144, var_5136, var_5128, var_5120, var_5112)
    var_5192 = 0;
    pri = fun_2408()
    var_5200 = 0;
    var_5208 = 4629728564434540954;
    var_5216 = 2;
    OP_PUSH5_C 4653852773137713725, 4644005151175165870, 4651689506000297001, 4655031273680829153, 4644672598713691013
    var_5224 = 4652736988737846641;
    var_5232 = 180;
    pri = EvCameraMove(var_5232, var_5224, var_5216, var_5208, var_5200, var_5192, var_5184, var_5176, var_5168, var_5160)
    var_5240 = 1;
    var_5248 = 0;
    var_5256 = 4641240890982006784;
    var_5264 = -90;
    pri = float(var_5264)
    var_5272 = pri;
    var_5280 = 1;
    OP_PUSH4_C 4653866363101433037, 4649812683632148480, 4607182418800017408, -686112562623115494
    var_5288 = 72;
    pri = fun_0848(var_5280, var_5272, var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216)
    var_5296 = 2;
    var_5304 = 5;
    var_5312 = -8424277323871559939;
    var_5320 = 24;
    pri = fun_1208(var_5312, var_5304, var_5296)
    var_5328 = 0;
    var_5336 = 3;
    var_5344 = -8424277323871559939;
    var_5352 = 24;
    pri = fun_80E0(var_5344, var_5336, var_5328)
    var_5360 = 0;
    var_5368 = 3;
    var_5376 = 0;
    var_5384 = 100;
    var_5392 = -1;
    OP_PUSH2_C 7802183802825547459, -8424277323871559939
    var_5400 = 56;
    pri = fun_1E10(var_5392, var_5384, var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5408 = 1;
    var_5416 = 8;
    pri = fun_1F58(var_5408)
    var_5424 = 0;
    pri = fun_2018()
    var_5432 = 0;
    var_5440 = 0;
    var_5448 = -8424277323871559939;
    var_5456 = 24;
    pri = fun_80E0(var_5448, var_5440, var_5432)
    var_5464 = 0;
    var_5472 = 4628293042053316608;
    var_5480 = 0;
    OP_PUSH5_C 4653760062317259653, 4643857200890532332, 4653645801068901171, 4654595823095764746, 4644661339714622587
    var_5488 = 4652509565752757453;
    var_5496 = 1;
    pri = EvCameraMove(var_5496, var_5488, var_5480, var_5472, var_5464, var_5456, var_5448, var_5440, var_5432, var_5424)
    var_5504 = 0;
    pri = fun_2408()
    var_5512 = 0;
    var_5520 = 4628293042053316608;
    var_5528 = 2;
    OP_PUSH5_C 4653799556774929367, 4643851043625416786, 4653674520312618680, 4654634701826922906, 4644652543621600379
    var_5536 = 4652537757230893629;
    var_5544 = 180;
    pri = EvCameraMove(var_5544, var_5536, var_5528, var_5520, var_5512, var_5504, var_5496, var_5488, var_5480, var_5472)
    var_5552 = 4166911318193987639;
    var_5560 = 8;
    pri = fun_10D8(var_5552)
    var_5568 = 9;
    var_5576 = 4166911318193987639;
    var_5584 = 16;
    pri = fun_1190(var_5576, var_5568)
    var_5592 = 30;
    var_5600 = 8;
    pri = fun_0060(var_5592)
    var_5608 = 4166911318193987639;
    var_5616 = 8;
    pri = fun_10D8(var_5608)
    var_5624 = 5;
    var_5632 = 4166911318193987639;
    var_5640 = 16;
    pri = fun_1190(var_5632, var_5624)
    var_5648 = 15;
    var_5656 = 8;
    pri = fun_0060(var_5648)
    var_5664 = 1;
    var_5672 = -1;
    var_5680 = -1;
    var_5688 = 3;
    var_5696 = 0;
    var_5704 = 0;
    var_5712 = 4166911318193987639;
    var_5720 = 56;
    pri = fun_2498(var_5712, var_5704, var_5696, var_5688, var_5680, var_5672, var_5664)
    var_5728 = 15;
    var_5736 = 8;
    pri = fun_0060(var_5728)
    var_5744 = 4166911318193987639;
    var_5752 = 8;
    pri = fun_10D8(var_5744)
    var_5760 = 60;
    var_5768 = 8;
    pri = fun_0060(var_5760)
    var_5776 = 32584;
    pri = SoundPostEvent(var_5776)
    var_5784 = 1;
    var_5792 = 2;
    var_5800 = 16;
    pri = fun_92E8(var_5792, var_5784)
    var_5808 = 1;
    var_5816 = 0;
    var_5824 = 31512;
    var_5832 = 8;
    var_5840 = 32;
    pri = fun_02E0(var_5832, var_5824, var_5816, var_5808)
    var_5848 = 0;
    pri = fun_0350()
    var_5856 = -8424277323871559939;
    var_5864 = 8;
    pri = fun_1270(var_5856)
    var_5872 = 4166911318193987639;
    var_5880 = 8;
    pri = fun_11D0(var_5872)
    var_5888 = 3;
    var_5896 = 1;
    pri = EvCameraEnd(var_5896, var_5888)
    var_5904 = 1;
    var_5912 = 8990122872356867010;
    var_5920 = 16;
    pri = fun_07D8(var_5912, var_5904)
    var_5928 = 1;
    var_5936 = 8990121772845238799;
    var_5944 = 16;
    pri = fun_07D8(var_5936, var_5928)
    var_5952 = 1;
    var_5960 = 8892309384594757773;
    var_5968 = 16;
    pri = fun_07D8(var_5960, var_5952)
    var_5976 = 1;
    var_5984 = -2560267667239473489;
    var_5992 = 16;
    pri = fun_07D8(var_5984, var_5976)
    var_6000 = 5;
    var_6008 = 8;
    pri = fun_0060(var_6000)
    var_6016 = 4166911318193987639;
    var_6024 = 8;
    pri = fun_0968(var_6016)
    var_6032 = 5996991087849294980;
    var_6040 = 8;
    pri = fun_0968(var_6032)
    var_6048 = 5767568996398104757;
    var_6056 = 8;
    pri = fun_0968(var_6048)
    var_6064 = -686112562623115494;
    var_6072 = 8;
    pri = fun_0968(var_6064)
    pri = 0;
    return pri;
}
// fun_F110
fun_F110() {
    pri = 0;
    return pri;
}
// fun_F128
fun_F128() {
    var_8 = 8990122872356867010;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = 8990121772845238799;
    var_32 = 8;
    pri = fun_0698(var_24)
    var_40 = 8892309384594757773;
    var_48 = 8;
    pri = fun_0698(var_40)
    var_56 = -2560267667239473489;
    var_64 = 8;
    pri = fun_0698(var_56)
    var_72 = 460;
    var_80 = 8;
    pri = fun_94A8(var_72)
    var_88 = 10;
    var_96 = -4873681772358681767;
    pri = WorkSet(var_96, var_88)
    var_104 = -6557269366887621335;
    pri = FlagSet(var_104)
    pri = 0;
    return pri;
}
// fun_F258
fun_F258() {
    OP_PUSH2_C 4166911318193987639, 5078576336524464760
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 4103919529309054878, 7617440944036057864
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 5767568996398104757, 884283119252906759
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -686112562623115494, -1085361505943394708
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 231539292373669382, 6517761424339451360
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -8424277323871559939, 4987046186118722354
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 5996991087849294980, 1543964476321119310
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 32000;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_F420
fun_F420() {
    var_8 = 0;
    pri = fun_96B0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_9738()
    var_24 = 0;
    pri = fun_9790()
    var_32 = 0;
    pri = fun_9848()
    var_40 = 0;
    pri = fun_9878()
    var_48 = 0;
    pri = fun_F110()
    var_56 = 0;
    pri = fun_F128()
    var_64 = 0;
    pri = fun_F258()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F528
fun_F528() {
    var_8 = 0;
    pri = fun_9790()
    var_16 = 0;
    pri = fun_F128()
    pri = 0;
    return pri;
}
// fun_F570
fun_F570() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_8338(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 7160365360378509312;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1E10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1F58(var_136)
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    OP_PUSH2_C -1714323559868887931, -1714326858403772564
    var_184 = 1;
    var_192 = 48;
    pri = fun_2048(var_184, var_176, var_168, var_160, var_152, var_144)
    var_16 = pri;
    var_200 = 0;
    pri = fun_2018()
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = var_8;
    var_240 = 32;
    pri = fun_8638(var_232, var_224, var_216, var_208)
    pri = var_16;
    OP_JZER lab_F750
    var_248 = -5155630766881898393;
    pri = ReserveScript(var_248)
// lab_F750
    pri = 0;
    return pri;
}
// fun_F768
fun_F768() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2353273659412725288;
    var_88 = 80;
    pri = fun_8AF0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_F7F0
fun_F7F0() {
    var_8 = 4166911318193987639;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = 5996991087849294980;
    var_32 = 8;
    pri = fun_0698(var_24)
    pri = 0;
    return pri;
}
