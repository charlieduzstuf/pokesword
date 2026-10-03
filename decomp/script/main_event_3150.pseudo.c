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
    pri = fun_06F8()
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
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    pri = IsFieldObjectTerminating_()
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
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
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
// fun_0860
fun_0860() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12E8(var_8)
    OP_JZER lab_0A40
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1318(var_24)
    OP_JNZ lab_0A40
    pri = 0;
    return pri;
// lab_0A40
    OP_JUMP lab_0A50
// lab_0A50
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AB0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A50
    pri = 0;
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C28
// lab_0C28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12E8(var_8)
    OP_JNZ lab_0CB0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CA0
    pri = 0;
    return pri;
// lab_0CB0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CF8
    pri = 0;
    return pri;
// lab_0CF8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DA0(var_8)
    pri = 0;
    return pri;
// lab_0D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C28
    pri = 0;
    return pri;
// lab_0CA0
    OP_JUMP lab_0CF8
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E28
    pri = 0;
    return pri;
// lab_0E28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12E8(var_8)
    OP_JZER lab_0F58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E80
    OP_ZERO_P_S 64
// lab_0F58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F90
    OP_CONST_S 64, 1
// lab_0F90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC8
    OP_CONST_S 72, 1
// lab_0FC8
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
// lab_0E80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA8
    OP_ZERO_P_S 72
// lab_0EA8
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
    OP_JUMP lab_1068
// lab_1068
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1138(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11B0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1178(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11F0(var_24)
    pri = 0;
    return pri;
}
// fun_12E8
fun_12E8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1318
fun_1318() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1348
fun_1348() {
    OP_JUMP lab_1360
// lab_1360
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13F0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    pri = 0;
    return pri;
// lab_13F0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1480
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1470
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    pri = 0;
    return pri;
// lab_1480
    pri = 0;
    return pri;
// lab_1470
    OP_JUMP lab_1490
// lab_1490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1360
    pri = 0;
    return pri;
// lab_13E0
    OP_JUMP lab_1490
}
// fun_14D0
fun_14D0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1348(var_40)
    pri = 0;
    return pri;
}
// fun_1558
fun_1558() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_15E8
fun_15E8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
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
// switch_1C38
        case default:
        {
// switch_1C38_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C80
// lab_1C80
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
            OP_JNZ lab_1D28
            var_88 = 0;
            pri = fun_1FF8()
// lab_1D28
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C38_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1820
                case default:
                {
// switch_1820_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1898
// lab_1898
                    OP_JUMP lab_1C80
                }
                case 0x0:
                {
// switch_1820_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1898
                }
                case 0x1:
                {
// switch_1820_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1898
                }
                case 0x2:
                {
// switch_1820_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1898
                }
                case 0x3:
                {
// switch_1820_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1898
                }
                case 0x4:
                {
// switch_1820_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1898
                }
                case 0x5:
                {
// switch_1820_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1898
                }
            }
        }
        case 0x65:
        {
// switch_1C38_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_19D8
                case default:
                {
// switch_19D8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A50
// lab_1A50
                    OP_JUMP lab_1C80
                }
                case 0x0:
                {
// switch_19D8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A50
                }
                case 0x1:
                {
// switch_19D8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A50
                }
                case 0x2:
                {
// switch_19D8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A50
                }
                case 0x3:
                {
// switch_19D8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A50
                }
                case 0x4:
                {
// switch_19D8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A50
                }
                case 0x5:
                {
// switch_19D8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A50
                }
            }
        }
        case 0x66:
        {
// switch_1C38_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B90
                case default:
                {
// switch_1B90_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C08
// lab_1C08
                    OP_JUMP lab_1C80
                }
                case 0x0:
                {
// switch_1B90_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C08
                }
                case 0x1:
                {
// switch_1B90_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C08
                }
                case 0x2:
                {
// switch_1B90_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C08
                }
                case 0x3:
                {
// switch_1B90_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C08
                }
                case 0x4:
                {
// switch_1B90_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C08
                }
                case 0x5:
                {
// switch_1B90_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C08
                }
            }
        }
    }
}
// fun_1D40
fun_1D40() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1620(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B68(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E50
    pri = 1;
    return pri;
// lab_1E50
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E98
fun_1E98() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DA8(var_8)
    arg_2 = pri;
// lab_1EE8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1620(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1D40(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 16;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1F48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    OP_JUMP lab_2010
// lab_2010
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2050
    pri = 0;
    return pri;
// lab_2050
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2010
    pri = 0;
    return pri;
}
// fun_2090
fun_2090() {
    var_8 = 0;
    pri = fun_1FF8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2140
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2140
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    OP_JUMP lab_2198
// lab_2198
    pri = EvCameraMoveWait_()
    OP_JZER lab_21D0
    pri = 0;
    return pri;
// lab_21D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2198
    pri = 0;
    return pri;
}
// fun_2210
fun_2210() {
    pri = arg_6;
    OP_JNZ lab_2248
    var_8 = 0;
    pri = fun_1078()
// lab_2248
    pri = arg_1;
    switch (pri) {
// switch_37B0
        case default:
        {
// switch_37B0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B00
            pri = 1;
            OP_JUMP lab_3B08
// lab_3B00
            pri = 0;
// lab_3B08
            OP_JZER lab_3C60
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B68(var_24, var_16)
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
            OP_JUMP lab_3CC0
// lab_3C60
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
// lab_3CC0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D20
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D80
// lab_3D20
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D80
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D80
            pri = arg_2;
            OP_JZER lab_3DC0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DC0
            var_8 = 0;
            pri = fun_10B8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37B0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1:
        {
// switch_37B0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x2:
        {
// switch_37B0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x3:
        {
// switch_37B0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x4:
        {
// switch_37B0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x5:
        {
// switch_37B0_case_0x5
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x6:
        {
// switch_37B0_case_0x6
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x7:
        {
// switch_37B0_case_0x7
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x8:
        {
// switch_37B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x9:
        {
// switch_37B0_case_0x9
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xa:
        {
// switch_37B0_case_0xa
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xb:
        {
// switch_37B0_case_0xb
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xc:
        {
// switch_37B0_case_0xc
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xd:
        {
// switch_37B0_case_0xd
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xe:
        {
// switch_37B0_case_0xe
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0xf:
        {
// switch_37B0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x10:
        {
// switch_37B0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x11:
        {
// switch_37B0_case_0x11
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x12:
        {
// switch_37B0_case_0x12
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x13:
        {
// switch_37B0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x14:
        {
// switch_37B0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x15:
        {
// switch_37B0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x16:
        {
// switch_37B0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x17:
        {
// switch_37B0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x18:
        {
// switch_37B0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x19:
        {
// switch_37B0_case_0x19
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1a:
        {
// switch_37B0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF0(var_48, var_40)
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
            pri = fun_0DD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1b:
        {
// switch_37B0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF0(var_48, var_40)
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
            pri = fun_0DD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1c:
        {
// switch_37B0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF0(var_48, var_40)
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
            pri = fun_0DD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1d:
        {
// switch_37B0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1e:
        {
// switch_37B0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x1f:
        {
// switch_37B0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x20:
        {
// switch_37B0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x21:
        {
// switch_37B0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x22:
        {
// switch_37B0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x23:
        {
// switch_37B0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x24:
        {
// switch_37B0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x25:
        {
// switch_37B0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x26:
        {
// switch_37B0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x27:
        {
// switch_37B0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x28:
        {
// switch_37B0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
        case 0x29:
        {
// switch_37B0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37B0_case_default
        }
    }
}
// fun_3DF0
fun_3DF0() {
    pri = arg_5;
    OP_JNZ lab_3E28
    var_8 = 0;
    pri = fun_1078()
// lab_3E28
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3E78
    OP_CONST_S -8, -1
// lab_3E78
    pri = arg_1;
    switch (pri) {
// switch_5930
        case default:
        {
// switch_5930_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5DD8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B68(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5DD8
            pri = 1;
            OP_JUMP lab_5DE0
// lab_5DD8
            pri = 0;
// lab_5DE0
            OP_JZER lab_5E30
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6088
// lab_5E30
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5E98
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5E98
            pri = 1;
            OP_JUMP lab_5EA0
// lab_5E98
            pri = 0;
// lab_5EA0
            OP_JZER lab_6028
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B68(var_24, var_16)
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
            OP_JUMP lab_6088
// lab_6028
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_6088
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_60F8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_60F8
            var_8 = 0;
            pri = fun_10B8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5930_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1:
        {
// switch_5930_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2:
        {
// switch_5930_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3:
        {
// switch_5930_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x4:
        {
// switch_5930_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x5:
        {
// switch_5930_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DA0(var_40)
            OP_JUMP switch_5930_case_default
        }
        case 0x6:
        {
// switch_5930_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x7:
        {
// switch_5930_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x8:
        {
// switch_5930_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x9:
        {
// switch_5930_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xa:
        {
// switch_5930_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xb:
        {
// switch_5930_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xc:
        {
// switch_5930_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0xd:
        {
// switch_5930_case_0xd
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0xe:
        {
// switch_5930_case_0xe
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0xf:
        {
// switch_5930_case_0xf
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x10:
        {
// switch_5930_case_0x10
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x11:
        {
// switch_5930_case_0x11
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x12:
        {
// switch_5930_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x13:
        {
// switch_5930_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x14:
        {
// switch_5930_case_0x14
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x15:
        {
// switch_5930_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x16:
        {
// switch_5930_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x17:
        {
// switch_5930_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x18:
        {
// switch_5930_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x19:
        {
// switch_5930_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1a:
        {
// switch_5930_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1b:
        {
// switch_5930_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1c:
        {
// switch_5930_case_0x1c
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x1d:
        {
// switch_5930_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x1e:
        {
// switch_5930_case_0x1e
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x1f:
        {
// switch_5930_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x20:
        {
// switch_5930_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x21:
        {
// switch_5930_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x22:
        {
// switch_5930_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x23:
        {
// switch_5930_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x24:
        {
// switch_5930_case_0x24
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x25:
        {
// switch_5930_case_0x25
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x26:
        {
// switch_5930_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x27:
        {
// switch_5930_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x28:
        {
// switch_5930_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x29:
        {
// switch_5930_case_0x29
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x2a:
        {
// switch_5930_case_0x2a
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x2b:
        {
// switch_5930_case_0x2b
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x2c:
        {
// switch_5930_case_0x2c
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x2d:
        {
// switch_5930_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x2e:
        {
// switch_5930_case_0x2e
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x2f:
        {
// switch_5930_case_0x2f
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x30:
        {
// switch_5930_case_0x30
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x31:
        {
// switch_5930_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x32:
        {
// switch_5930_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x33:
        {
// switch_5930_case_0x33
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x34:
        {
// switch_5930_case_0x34
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x35:
        {
// switch_5930_case_0x35
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x36:
        {
// switch_5930_case_0x36
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x37:
        {
// switch_5930_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x38:
        {
// switch_5930_case_0x38
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
            pri = fun_0DD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5930_case_default
        }
        case 0x39:
        {
// switch_5930_case_0x39
            var_8 = 0;
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
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3b:
        {
// switch_5930_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3c:
        {
// switch_5930_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3d:
        {
// switch_5930_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
        case 0x3e:
        {
// switch_5930_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            OP_JUMP switch_5930_case_default
        }
    }
}
// fun_6128
fun_6128() {
    pri = arg_4;
    OP_JNZ lab_6160
    var_8 = 0;
    pri = fun_1078()
// lab_6160
    pri = arg_1;
    switch (pri) {
// switch_7538
        case default:
        {
// switch_7538_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12E8(var_264)
            OP_JZER lab_7B00
            pri = arg_3;
            switch (pri) {
// switch_7AA8
                case default:
                {
// switch_7AA8_case_default
                    OP_JUMP lab_7DB8
// lab_7DB8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E28
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E28
                    var_8 = 0;
                    pri = fun_10B8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7AA8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AA8_case_default
                }
                case 0x2:
                {
// switch_7AA8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AA8_case_default
                }
                case 0x3:
                {
// switch_7AA8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AA8_case_default
                }
            }
// lab_7B00
            pri = arg_1;
            OP_JZER lab_7B50
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B50
            pri = 0;
            OP_JUMP lab_7B58
// lab_7B50
            pri = 1;
// lab_7B58
            OP_JZER lab_7BC0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B68(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7BC0
            pri = 1;
            OP_JUMP lab_7BC8
// lab_7BC0
            pri = 0;
// lab_7BC8
            OP_JZER lab_7C18
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DB8
// lab_7C18
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7C80
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DB8
// lab_7C80
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B68(var_24, var_16)
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
// switch_7538_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1:
        {
// switch_7538_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2:
        {
// switch_7538_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3:
        {
// switch_7538_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x4:
        {
// switch_7538_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x5:
        {
// switch_7538_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DA0(var_40)
            OP_JUMP switch_7538_case_default
        }
        case 0x6:
        {
// switch_7538_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x7:
        {
// switch_7538_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x8:
        {
// switch_7538_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x9:
        {
// switch_7538_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xa:
        {
// switch_7538_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xb:
        {
// switch_7538_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xc:
        {
// switch_7538_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xd:
        {
// switch_7538_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xe:
        {
// switch_7538_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0xf:
        {
// switch_7538_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x10:
        {
// switch_7538_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x11:
        {
// switch_7538_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x12:
        {
// switch_7538_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x13:
        {
// switch_7538_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x14:
        {
// switch_7538_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x15:
        {
// switch_7538_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x16:
        {
// switch_7538_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x17:
        {
// switch_7538_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x18:
        {
// switch_7538_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x19:
        {
// switch_7538_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1a:
        {
// switch_7538_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1b:
        {
// switch_7538_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1c:
        {
// switch_7538_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1d:
        {
// switch_7538_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1e:
        {
// switch_7538_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x1f:
        {
// switch_7538_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x20:
        {
// switch_7538_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x21:
        {
// switch_7538_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x22:
        {
// switch_7538_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x23:
        {
// switch_7538_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x24:
        {
// switch_7538_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x25:
        {
// switch_7538_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x26:
        {
// switch_7538_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x27:
        {
// switch_7538_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x28:
        {
// switch_7538_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x29:
        {
// switch_7538_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2a:
        {
// switch_7538_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2b:
        {
// switch_7538_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2c:
        {
// switch_7538_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2d:
        {
// switch_7538_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2e:
        {
// switch_7538_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x2f:
        {
// switch_7538_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x30:
        {
// switch_7538_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x31:
        {
// switch_7538_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x32:
        {
// switch_7538_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x33:
        {
// switch_7538_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x34:
        {
// switch_7538_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x35:
        {
// switch_7538_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x36:
        {
// switch_7538_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x37:
        {
// switch_7538_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x38:
        {
// switch_7538_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x39:
        {
// switch_7538_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3a:
        {
// switch_7538_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3b:
        {
// switch_7538_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3c:
        {
// switch_7538_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3d:
        {
// switch_7538_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
        case 0x3e:
        {
// switch_7538_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B28(var_24, var_16, var_8)
            OP_JUMP switch_7538_case_default
        }
    }
}
// fun_7E58
fun_7E58() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8068(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_8050
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8050
    pri = 0;
    return pri;
}
// fun_8068
fun_8068() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80B0
fun_80B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_81B0
        case default:
        {
// switch_81B0_case_default
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
// switch_81B0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_81B0_case_default
        }
        case 0x1:
        {
// switch_81B0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_81B0_case_default
        }
        case 0x2:
        {
// switch_81B0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_81B0_case_default
        }
        case 0x3:
        {
// switch_81B0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_81B0_case_default
        }
    }
}
// fun_8270
fun_8270() {
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
    pri = fun_1E98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FF8()
    pri = 0;
    return pri;
}
// fun_8308
fun_8308() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_80B0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8270(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_83B0
fun_83B0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8400
// lab_8400
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8478
    OP_JUMP lab_84A8
// lab_8478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8400
// lab_84A8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8530
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6128(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_15B8(var_56)
// lab_8530
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8598
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10F8(var_24, var_16)
// lab_8598
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8658
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BA0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0920(var_88, var_80, var_72, var_64, var_56)
// lab_8658
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8698
    pri = 0;
    return pri;
// lab_8698
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_87E0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0AF0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_87A8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_87E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09C8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BA0(var_40)
    pri = 0;
    return pri;
// lab_87A8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
}
// fun_8868
fun_8868() {
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
    pri = fun_8308(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2090(var_112)
    var_128 = 0;
    pri = fun_2150()
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
    pri = fun_83B0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_89E0
fun_89E0() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    var_32 = arg_2;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    pri = EasyTalkPokemon(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 0;
    var_80 = arg_0;
    pri = SoundPlayPokeVoiceFromObject(var_80, var_72, var_64)
    var_8 = pri;
    var_88 = var_8;
    var_96 = 7;
    pri = TempWorkSet(var_96, var_88)
    var_104 = 30;
    var_112 = 30528;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_8B08
fun_8B08() {
    pri = arg_1;
    OP_JZER lab_8BA8
    var_8 = 0;
    var_16 = arg_6;
    pri = arg_5;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_4;
    var_40 = 0;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FF8()
// lab_8BA8
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_89E0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8BE8
fun_8BE8() {
    var_16 = 7;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0408(var_24)
    OP_JUMP lab_8C50
// lab_8C50
    var_8 = 30744;
    var_16 = 8802641224559852288;
    pri = FindParallelWait(var_16, var_8)
    OP_JNZ lab_8CA0
    OP_JUMP lab_8CD0
// lab_8CA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8C50
// lab_8CD0
    OP_JUMP lab_8CE0
// lab_8CE0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30960;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8D58
    OP_JUMP lab_8D88
// lab_8D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8CE0
// lab_8D88
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = arg_0;
    pri = EasyTalkTerminate(var_16)
    var_24 = 15;
    pri = TempWorkGet(var_24)
    alt = 1;
    OP_JEQ lab_8E38
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_10F8(var_40, var_32)
// lab_8E38
    OP_ZERO_P_S -16
    OP_JUMP lab_8E58
// lab_8E58
    var_8 = arg_0;
    pri = IsEasyTalkRunning(var_8)
    OP_JNZ lab_8E98
    OP_JUMP lab_8EE0
// lab_8E98
    pri = var_16;
    OP_EQ_P_C_PRI 300
    OP_JZER lab_8EC8
    OP_JUMP lab_8EE0
// lab_8EC8
    OP_INC_P_S -16
    OP_JUMP lab_8E58
// lab_8EE0
    OP_CONST_S -24, 4
    pri = arg_1;
    OP_JZER lab_8F60
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_06C8(var_16)
    OP_JZER lab_8F60
    pri = 1;
    OP_JUMP lab_8F68
// lab_8F60
    pri = 0;
// lab_8F68
    OP_JZER lab_8FD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_24;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_0920(var_56, var_48, var_40, var_32, var_24)
// lab_8FD8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9018
    pri = 0;
    return pri;
// lab_9018
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9148
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 31080;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0AF0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_32 = pri;
    pri = var_32;
    alt = 23;
    OP_JSLESS lab_9110
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_9148
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0BA0(var_24)
    pri = 0;
    return pri;
// lab_9110
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
}
// fun_91B0
fun_91B0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_8B08(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = arg_0;
    OP_JZER lab_9280
    var_80 = 1;
    var_88 = 8;
    pri = fun_2090(var_80)
    var_96 = 0;
    pri = fun_2150()
// lab_9280
    var_16 = 13;
    pri = TempWorkGet(var_16)
    var_24 = pri;
    pri = float(var_24)
    var_16 = pri;
    var_32 = var_16;
    pri = float(var_32)
    var_40 = pri;
    var_48 = arg_3;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_8BE8(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9338
fun_9338() {
    pri = 31216;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_93C0
// lab_93C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9540
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9530
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9480
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9480
    pri = 0;
    OP_JUMP lab_9488
// lab_9540
    pri = 0;
    return pri;
// lab_9530
    OP_JUMP lab_93B8
// lab_93B8
    OP_INC_P_S -936
// lab_9480
    pri = 1;
// lab_9488
    OP_JZER lab_9500
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_94F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9500
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_94F8
}
// fun_9560
fun_9560() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_95F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32136;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1590()
// lab_95F8
    pri = arg_4;
    OP_JZER lab_9630
    var_8 = 1;
    var_16 = 8;
    pri = fun_15E8(var_8)
// lab_9630
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9688
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9688
    pri = 0;
    OP_JUMP lab_9690
// lab_9688
    pri = 1;
// lab_9690
    OP_JZER lab_9758
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9758
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_9730
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14D0(var_32, var_24)
    OP_JUMP lab_9758
// lab_9758
    pri = arg_2;
    OP_JZER lab_9830
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9800
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07B0(var_40)
    OP_JUMP lab_9830
// lab_9830
    pri = arg_3;
    OP_JZER lab_9868
    var_8 = 1;
    var_16 = 8;
    pri = fun_1558(var_8)
// lab_9868
    pri = 0;
    return pri;
// lab_9800
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
// lab_9730
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14D0(var_16, var_8)
}
// fun_9878
fun_9878() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9338(var_24)
    pri = 0;
    return pri;
}
// fun_98E0
fun_98E0() {
    pri = g_mode;
    switch (pri) {
// switch_9A18
        case default:
        {
// switch_9A18_case_default
            pri = CommandNOP()
            OP_JUMP lab_9A90
// lab_9A90
            pri = 0;
            return pri;
        }
        case 0xaeab4088d66380ec:
        {
// switch_9A18_case_0xaeab4088d66380ec
            var_8 = 0;
            pri = fun_B2C0()
            OP_JUMP lab_9A90
        }
        case 0xaeab4388d6638605:
        {
// switch_9A18_case_0xaeab4388d6638605
            var_8 = 0;
            pri = fun_B820()
            OP_JUMP lab_9A90
        }
        case 0xf735ebb201b37adc:
        {
// switch_9A18_case_0xf735ebb201b37adc
            var_8 = 0;
            pri = fun_B8A8()
            OP_JUMP lab_9A90
        }
        case 0x0:
        {
// switch_9A18_case_0x0
            var_8 = 0;
            pri = fun_9AA0()
            OP_JUMP lab_9A90
        }
        case 0xd89d817f7b20deb:
        {
// switch_9A18_case_0xd89d817f7b20deb
            var_8 = 0;
            pri = fun_B278()
            OP_JUMP lab_9A90
        }
        case 0x2cb7321b832f277f:
        {
// switch_9A18_case_0x2cb7321b832f277f
            var_8 = 0;
            pri = fun_B188()
            OP_JUMP lab_9A90
        }
    }
}
// fun_9AA0
fun_9AA0() {
    pri = 0;
    return pri;
}
// fun_9AB8
fun_9AB8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9560(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B10
fun_9B10() {
    var_8 = -7378220578778123489;
    var_16 = 8;
    pri = fun_0518(var_8)
    pri = 0;
    return pri;
}
// fun_9B50
fun_9B50() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_9B80
fun_9B80() {
    var_8 = 0;
    var_16 = -7378220578778123489;
    var_24 = 16;
    pri = fun_0778(var_16, var_8)
    var_32 = 1;
    var_40 = 0;
    var_48 = 32136;
    var_56 = 8;
    var_64 = 32;
    pri = fun_02E0(var_56, var_48, var_40, var_32)
    var_72 = 0;
    pri = fun_0350()
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4636033603912859648, 4658199758328823808, 4656115084282560512, -4341115018897366444
    var_96 = 48;
    pri = fun_0720(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4618554007859127910, 4658028234514890752, 4655624702096572416, -5483880531844336598
    var_120 = 48;
    pri = fun_0720(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4639031312414828134, 4658377879212523520, 4655750926031441101, 8802641224559852288
    var_144 = 48;
    pri = fun_0720(var_136, var_128, var_120, var_112, var_104, var_96)
    pri = EvCameraStart()
    var_152 = 0;
    var_160 = 4628743402016053658;
    var_168 = 0;
    OP_PUSH5_C 4657322567952184115, 4637943411629841449, 4656862862140610970, 4658813769602239037, 4641048784310401761
    var_176 = 4655995369456528261;
    var_184 = 1;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 0;
    pri = fun_2180()
    var_200 = 0;
    var_208 = 4628743402016053658;
    var_216 = 3;
    OP_PUSH5_C 4657817744008869315, 4627583725112005755, 4656219186043478344, 4659280886122183393, 4640651904593239736
    var_224 = 4655230988972898386;
    var_232 = 80;
    pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 32184;
    var_248 = 8;
    var_256 = 16;
    pri = fun_0280(var_248, var_240)
    var_264 = 0;
    pri = fun_0350()
    var_272 = 0;
    var_280 = 0;
    var_288 = -4341115018897366444;
    var_296 = 24;
    pri = fun_7E58(var_288, var_280, var_272)
    var_304 = -4341115018897366444;
    var_312 = 8;
    pri = fun_0BA0(var_304)
    var_320 = 6;
    var_328 = 7;
    var_336 = -4341115018897366444;
    var_344 = 24;
    pri = fun_1228(var_336, var_328, var_320)
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    var_376 = 0;
    OP_PUSH2_C 8802641224559852288, -4341115018897366444
    var_384 = 48;
    pri = fun_0970(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH2_C 8802641224559852288, -5483880531844336598
    var_424 = 48;
    pri = fun_0970(var_416, var_408, var_400, var_392, var_384, var_376)
    var_432 = -4341115018897366444;
    var_440 = 8;
    pri = fun_09C8(var_432)
    var_448 = -5483880531844336598;
    var_456 = 8;
    pri = fun_09C8(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 0;
    var_504 = 6;
    var_512 = -4341115018897366444;
    var_520 = 56;
    pri = fun_3DF0(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C 3507958415518562211, -4341115018897366444
    var_568 = 56;
    pri = fun_1E98(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_2090(var_576)
    var_592 = 0;
    pri = fun_2150()
    var_600 = -4341115018897366444;
    var_608 = 8;
    pri = fun_1290(var_600)
    var_616 = 0;
    var_624 = 4628743402016053658;
    var_632 = 3;
    OP_PUSH5_C 4657161423528017265, -4590082813964845056, 4656887051396422042, 4658636066532957880, 4635013257122283520
    var_640 = 4656058789287218381;
    var_648 = 100;
    pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    var_680 = 835;
    pri = SoundPlayPokeVoice(var_680, var_672, var_664, var_656)
    var_688 = 1;
    var_696 = 0;
    var_704 = 4641240890982006784;
    var_712 = 0;
    var_720 = 0;
    OP_PUSH4_C 4658089807166046208, 4656302001259282432, 4611686018427387904, -5483880531844336598
    var_728 = 72;
    pri = fun_07E8(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_736 = 1;
    var_744 = 3;
    var_752 = 0;
    var_760 = 6;
    var_768 = -4341115018897366444;
    var_776 = 40;
    pri = fun_6128(var_768, var_760, var_752, var_744, var_736)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C -4954639163716592203, -5483880531844336598
    var_824 = 56;
    pri = fun_1E98(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = -4341115018897366444;
    var_840 = 8;
    pri = fun_0BA0(var_832)
    var_848 = -5483880531844336598;
    var_856 = 8;
    pri = fun_09C8(var_848)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    OP_PUSH2_C -5483880531844336598, -4341115018897366444
    var_896 = 48;
    pri = fun_0970(var_888, var_880, var_872, var_864, var_856, var_848)
    var_904 = 1;
    var_912 = 8;
    pri = fun_2090(var_904)
    var_920 = 0;
    pri = fun_2150()
    var_928 = 1;
    var_936 = 0;
    var_944 = 32136;
    var_952 = 8;
    var_960 = 32;
    pri = fun_02E0(var_952, var_944, var_936, var_928)
    var_968 = 0;
    pri = fun_0350()
    var_976 = -4341115018897366444;
    var_984 = 8;
    pri = fun_09C8(var_976)
    var_992 = 1;
    var_1000 = 8;
    pri = fun_0060(var_992)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 90;
    pri = float(var_1032)
    var_1040 = pri;
    var_1048 = -4341115018897366444;
    var_1056 = 40;
    pri = fun_0920(var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1064 = 32232;
    pri = SoundPostEvent(var_1064)
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 8605023718539444789;
    var_1096 = 24;
    pri = fun_1F98(var_1088, var_1080, var_1072)
    var_1104 = -4341115018897366444;
    var_1112 = 8;
    pri = fun_09C8(var_1104)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_2090(var_1120)
    var_1136 = 0;
    pri = fun_2150()
    OP_PUSH2_C 4591870180066957722, 4628743402016053658
    var_1144 = 0;
    OP_PUSH5_C 4657110582110348902, 4632040881368218993, 4657130373319648870, 4658489699545068339, 4642094112005160960
    var_1152 = 4656188751561621504;
    var_1160 = 1;
    pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1168 = 0;
    pri = fun_2180()
    var_1176 = 32184;
    var_1184 = 8;
    var_1192 = 16;
    pri = fun_0280(var_1184, var_1176)
    var_1200 = 50;
    var_1208 = 8;
    pri = fun_0060(var_1200)
    var_1216 = 32448;
    pri = SoundPostEvent(var_1216)
    var_1224 = 1;
    var_1232 = -7378220578778123489;
    var_1240 = 16;
    pri = fun_0778(var_1232, var_1224)
    var_1248 = 0;
    var_1256 = -7378219479266495278;
    var_1264 = 16;
    pri = fun_0778(var_1256, var_1248)
    var_1272 = 40;
    var_1280 = 8;
    pri = fun_0060(var_1272)
    var_1288 = 4;
    var_1296 = 4;
    var_1304 = -4341115018897366444;
    var_1312 = 24;
    pri = fun_1228(var_1304, var_1296, var_1288)
    var_1320 = 1;
    var_1328 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4658028234514890752, 4655624702096572416, 4607182418800017408
    var_1336 = -5483880531844336598;
    var_1344 = 64;
    pri = fun_0860(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    OP_PUSH2_C 4591870180066957722, 4628743402016053658
    var_1352 = 3;
    OP_PUSH5_C 4657934226270715904, 4634856334822767329, 4656086277077912781, 4659457357738441441, 4637556383536864297
    var_1360 = 4655238509632432374;
    var_1368 = 55;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 1;
    var_1384 = 1;
    var_1392 = -1;
    var_1400 = -1;
    var_1408 = 0;
    var_1416 = 12;
    var_1424 = -4341115018897366444;
    var_1432 = 56;
    pri = fun_3DF0(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 0;
    var_1448 = 3;
    var_1456 = 0;
    var_1464 = 100;
    var_1472 = -1;
    OP_PUSH2_C 3507960614541818633, -4341115018897366444
    var_1480 = 56;
    pri = fun_1E98(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = -5483880531844336598;
    var_1496 = 8;
    pri = fun_09C8(var_1488)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_2090(var_1504)
    var_1520 = 0;
    pri = fun_2150()
    var_1528 = 1;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 12;
    var_1560 = -4341115018897366444;
    var_1568 = 40;
    pri = fun_6128(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = -4341115018897366444;
    var_1584 = 8;
    pri = fun_0BA0(var_1576)
    var_1592 = 5;
    var_1600 = 5;
    var_1608 = -4341115018897366444;
    var_1616 = 24;
    pri = fun_1228(var_1608, var_1600, var_1592)
    var_1624 = 0;
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 0;
    OP_PUSH2_C -5483880531844336598, -4341115018897366444
    var_1656 = 48;
    pri = fun_0970(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1664 = 0;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 100;
    var_1696 = -1;
    OP_PUSH2_C 3507970510146472532, -4341115018897366444
    var_1704 = 56;
    pri = fun_1E98(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = -4341115018897366444;
    var_1720 = 8;
    pri = fun_09C8(var_1712)
    var_1728 = 1;
    var_1736 = 8;
    pri = fun_2090(var_1728)
    var_1744 = 0;
    pri = fun_2150()
    var_1752 = 0;
    var_1760 = 0;
    var_1768 = 0;
    var_1776 = 0;
    OP_PUSH2_C -4341115018897366444, -5483880531844336598
    var_1784 = 48;
    pri = fun_0970(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1792 = -5483880531844336598;
    var_1800 = 8;
    pri = fun_09C8(var_1792)
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = 0;
    var_1832 = 835;
    pri = SoundPlayPokeVoice(var_1832, var_1824, var_1816, var_1808)
    var_1840 = 1;
    var_1848 = -1;
    var_1856 = -1;
    var_1864 = 3;
    var_1872 = 0;
    var_1880 = 30;
    var_1888 = -5483880531844336598;
    var_1896 = 56;
    pri = fun_2210(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    OP_PUSH2_C -4954640263228220414, -5483880531844336598
    var_1944 = 56;
    pri = fun_1E98(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = -5483880531844336598;
    var_1960 = 8;
    pri = fun_0BA0(var_1952)
    var_1968 = 1;
    var_1976 = 8;
    pri = fun_2090(var_1968)
    var_1984 = 0;
    pri = fun_2150()
    OP_PUSH2_C 4591870180066957722, 4628743402016053658
    var_1992 = 3;
    OP_PUSH5_C 4657513553121928806, 4634525601725132308, 4656193897276039496, 4659063468692906967, 4637222835689462170
    var_2000 = 4655569726515183616;
    var_2008 = 150;
    pri = EvCameraMove(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2016 = 0;
    var_2024 = 0;
    var_2032 = 0;
    var_2040 = -45;
    pri = float(var_2040)
    var_2048 = pri;
    var_2056 = -4341115018897366444;
    var_2064 = 40;
    pri = fun_0920(var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2072 = -4341115018897366444;
    var_2080 = 8;
    pri = fun_1290(var_2072)
    var_2088 = 0;
    var_2096 = 3;
    var_2104 = 0;
    var_2112 = 100;
    var_2120 = -1;
    OP_PUSH2_C 3507959515030190422, -4341115018897366444
    var_2128 = 56;
    pri = fun_1E98(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2136 = -4341115018897366444;
    var_2144 = 8;
    pri = fun_09C8(var_2136)
    var_2152 = 1;
    var_2160 = 8;
    pri = fun_2090(var_2152)
    var_2168 = 0;
    pri = fun_2150()
    var_2176 = 0;
    var_2184 = 4;
    var_2192 = -4341115018897366444;
    var_2200 = 24;
    pri = fun_7E58(var_2192, var_2184, var_2176)
    var_2208 = -4341115018897366444;
    var_2216 = 8;
    pri = fun_0BA0(var_2208)
    var_2224 = 3;
    var_2232 = 55;
    pri = EvCameraEnd(var_2232, var_2224)
    var_2240 = 30;
    var_2248 = 8;
    pri = fun_0060(var_2240)
    pri = 0;
    return pri;
}
// fun_AEF8
fun_AEF8() {
    pri = 0;
    return pri;
}
// fun_AF10
fun_AF10() {
    var_8 = -7378219479266495278;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = 3160;
    var_32 = 8;
    pri = fun_9878(var_24)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_AFC8
    var_40 = 7816440442768909182;
    pri = FlagReset(var_40)
    OP_JUMP lab_AFF0
// lab_AFC8
    var_8 = 387792121742723038;
    pri = FlagReset(var_8)
// lab_AFF0
    var_8 = 2610993506854619934;
    pri = FlagSet(var_8)
    var_16 = 6712433672450853327;
    pri = FlagSet(var_16)
    var_24 = 6086521948512369532;
    pri = VanishFlagReset(var_24)
    var_32 = 1139048380943932808;
    pri = FlagReset(var_32)
    var_40 = -7785343324082770324;
    pri = FlagReset(var_40)
    var_48 = -164538243036851154;
    pri = FlagReset(var_48)
    var_56 = -5321351475360329479;
    pri = FlagReset(var_56)
    var_64 = -7378219479266495278;
    pri = FlagSet(var_64)
    pri = 0;
    return pri;
}
// fun_B140
fun_B140() {
    OP_PUSH2_C -4341115018897366444, 6266977315110225279
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_B188
fun_B188() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9AB8()
    var_16 = 0;
    pri = fun_9B10()
    var_24 = 0;
    pri = fun_9B50()
    var_32 = 0;
    pri = fun_9B80()
    var_40 = 0;
    pri = fun_AEF8()
    var_48 = 0;
    pri = fun_AF10()
    var_56 = 0;
    pri = fun_B140()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B278
fun_B278() {
    var_8 = 0;
    pri = fun_9B10()
    var_16 = 0;
    pri = fun_AF10()
    pri = 0;
    return pri;
}
// fun_B2C0
fun_B2C0() {
    var_8 = 2971270853844526325;
    pri = FlagGet(var_8)
    OP_JNZ lab_B7A0
    var_16 = 0;
    var_24 = 0;
    var_32 = -4341115018897366444;
    var_40 = 24;
    pri = fun_7E58(var_32, var_24, var_16)
    var_48 = -4341115018897366444;
    var_56 = 8;
    pri = fun_0BA0(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C 8802641224559852288, -4341115018897366444
    var_96 = 48;
    pri = fun_0970(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C 3507962813565075055, -4341115018897366444
    var_144 = 56;
    pri = fun_1E98(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = -4341115018897366444;
    var_160 = 8;
    pri = fun_09C8(var_152)
    var_168 = 1;
    var_176 = 8;
    pri = fun_2090(var_168)
    var_184 = 0;
    pri = fun_2150()
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 1;
    var_240 = -4341115018897366444;
    var_248 = 56;
    pri = fun_3DF0(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 100;
    var_288 = -1;
    OP_PUSH2_C 3507963913076703266, -4341115018897366444
    var_296 = 56;
    pri = fun_1E98(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_2090(var_304)
    var_320 = 0;
    pri = fun_2150()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 1;
    var_360 = -4341115018897366444;
    var_368 = 40;
    pri = fun_6128(var_360, var_352, var_344, var_336, var_328)
    var_376 = -4341115018897366444;
    var_384 = 8;
    pri = fun_0BA0(var_376)
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    var_416 = 90;
    pri = float(var_416)
    var_424 = pri;
    var_432 = -4341115018897366444;
    var_440 = 40;
    pri = fun_0920(var_432, var_424, var_416, var_408, var_400)
    var_448 = -4341115018897366444;
    var_456 = 8;
    pri = fun_09C8(var_448)
    var_464 = 0;
    var_472 = 4;
    var_480 = -4341115018897366444;
    var_488 = 24;
    pri = fun_7E58(var_480, var_472, var_464)
    var_496 = 0;
    var_504 = 3;
    var_512 = 0;
    var_520 = 100;
    var_528 = -1;
    OP_PUSH2_C 3507965012588331477, -4341115018897366444
    var_536 = 56;
    pri = fun_1E98(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = -4341115018897366444;
    var_552 = 8;
    pri = fun_0BA0(var_544)
    var_560 = 1;
    var_568 = 8;
    pri = fun_2090(var_560)
    var_576 = 0;
    pri = fun_2150()
    var_584 = 2971270853844526325;
    pri = FlagSet(var_584)
    var_592 = 2610993506854619934;
    pri = FlagSet(var_592)
    OP_JUMP lab_B810
// lab_B7A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3507957316006934000;
    var_88 = 80;
    pri = fun_8868(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_B810
    pri = 0;
    return pri;
}
// fun_B820
fun_B820() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3507959515030190422;
    var_88 = 80;
    pri = fun_8868(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B8A8
fun_B8A8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3160;
    OP_JSGEQ lab_B958
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 1;
    var_56 = 1;
    var_64 = -4954642462251476836;
    var_72 = 56;
    pri = fun_91B0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_B9B0
// lab_B958
    var_8 = 3;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = -4954640263228220414;
    var_64 = 56;
    pri = fun_91B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_B9B0
    pri = 0;
    return pri;
}
