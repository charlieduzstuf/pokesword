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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07B8
fun_07B8() {
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
// fun_0830
fun_0830() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12F8(var_8)
    OP_JZER lab_0950
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1328(var_24)
    OP_JNZ lab_0950
    pri = 0;
    return pri;
// lab_0950
    OP_JUMP lab_0960
// lab_0960
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09C0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0960
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AF8
    pri = 0;
    return pri;
// lab_0AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B38
// lab_0B38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12F8(var_8)
    OP_JNZ lab_0BC0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BB0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C08
    pri = 0;
    return pri;
// lab_0C08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    pri = 0;
    return pri;
// lab_0C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B38
    pri = 0;
    return pri;
// lab_0BB0
    OP_JUMP lab_0C08
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D38
    pri = 0;
    return pri;
// lab_0D38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12F8(var_8)
    OP_JZER lab_0E68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D90
    OP_ZERO_P_S 64
// lab_0E68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA0
    OP_CONST_S 64, 1
// lab_0EA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED8
    OP_CONST_S 72, 1
// lab_0ED8
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
// lab_0D90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_ZERO_P_S 72
// lab_0DB8
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
    OP_JUMP lab_0F78
// lab_0F78
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1008
fun_1008() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11C0
fun_11C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1148(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11C0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1188(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1200(var_24)
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1328
fun_1328() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1358
fun_1358() {
    OP_JUMP lab_1370
// lab_1370
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1400
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    pri = 0;
    return pri;
// lab_1400
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1490
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1480
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    pri = 0;
    return pri;
// lab_1490
    pri = 0;
    return pri;
// lab_1480
    OP_JUMP lab_14A0
// lab_14A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1370
    pri = 0;
    return pri;
// lab_13F0
    OP_JUMP lab_14A0
}
// fun_14E0
fun_14E0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1358(var_40)
    pri = 0;
    return pri;
}
// fun_1568
fun_1568() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
    pri = SetNPCAngleDefaultAll()
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
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A78(var_104, var_96)
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
    var_32 = 472;
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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2090
fun_2090() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2108
fun_2108() {
    var_8 = 0;
    pri = fun_2090()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2188
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2188
    pri = 1;
    return pri;
// lab_2188
    var_8 = 0;
    pri = fun_2090()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_21B8
fun_21B8() {
    OP_JUMP lab_21D0
// lab_21D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2208
    pri = 0;
    return pri;
// lab_2208
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21D0
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    pri = arg_6;
    OP_JNZ lab_2280
    var_8 = 0;
    pri = fun_0F88()
// lab_2280
    pri = arg_1;
    switch (pri) {
// switch_37E8
        case default:
        {
// switch_37E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B38
            pri = 1;
            OP_JUMP lab_3B40
// lab_3B38
            pri = 0;
// lab_3B40
            OP_JZER lab_3C98
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A78(var_24, var_16)
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
            OP_JUMP lab_3CF8
// lab_3C98
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
// lab_3CF8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D58
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3DB8
// lab_3D58
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3DB8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3DB8
            pri = arg_2;
            OP_JZER lab_3DF8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DF8
            var_8 = 0;
            pri = fun_0FC8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1:
        {
// switch_37E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x2:
        {
// switch_37E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x3:
        {
// switch_37E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x4:
        {
// switch_37E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x5:
        {
// switch_37E8_case_0x5
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x6:
        {
// switch_37E8_case_0x6
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x7:
        {
// switch_37E8_case_0x7
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x8:
        {
// switch_37E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x9:
        {
// switch_37E8_case_0x9
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xa:
        {
// switch_37E8_case_0xa
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xb:
        {
// switch_37E8_case_0xb
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xc:
        {
// switch_37E8_case_0xc
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xd:
        {
// switch_37E8_case_0xd
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xe:
        {
// switch_37E8_case_0xe
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0xf:
        {
// switch_37E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x10:
        {
// switch_37E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x11:
        {
// switch_37E8_case_0x11
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x12:
        {
// switch_37E8_case_0x12
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x13:
        {
// switch_37E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x14:
        {
// switch_37E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x15:
        {
// switch_37E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x16:
        {
// switch_37E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x17:
        {
// switch_37E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x18:
        {
// switch_37E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x19:
        {
// switch_37E8_case_0x19
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1a:
        {
// switch_37E8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1b:
        {
// switch_37E8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1c:
        {
// switch_37E8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1d:
        {
// switch_37E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1e:
        {
// switch_37E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x1f:
        {
// switch_37E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x20:
        {
// switch_37E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x21:
        {
// switch_37E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x22:
        {
// switch_37E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x23:
        {
// switch_37E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x24:
        {
// switch_37E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x25:
        {
// switch_37E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x26:
        {
// switch_37E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x27:
        {
// switch_37E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x28:
        {
// switch_37E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
        case 0x29:
        {
// switch_37E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37E8_case_default
        }
    }
}
// fun_3E28
fun_3E28() {
    pri = arg_5;
    OP_JNZ lab_3E60
    var_8 = 0;
    pri = fun_0F88()
// lab_3E60
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3EB0
    OP_CONST_S -8, -1
// lab_3EB0
    pri = arg_1;
    switch (pri) {
// switch_5968
        case default:
        {
// switch_5968_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5E10
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A78(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E10
            pri = 1;
            OP_JUMP lab_5E18
// lab_5E10
            pri = 0;
// lab_5E18
            OP_JZER lab_5E68
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_60C0
// lab_5E68
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5ED0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5ED0
            pri = 1;
            OP_JUMP lab_5ED8
// lab_5ED0
            pri = 0;
// lab_5ED8
            OP_JZER lab_6060
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A78(var_24, var_16)
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
            OP_JUMP lab_60C0
// lab_6060
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
// lab_60C0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6130
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6130
            var_8 = 0;
            pri = fun_0FC8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5968_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x1:
        {
// switch_5968_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x2:
        {
// switch_5968_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3:
        {
// switch_5968_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x4:
        {
// switch_5968_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x5:
        {
// switch_5968_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CB0(var_40)
            OP_JUMP switch_5968_case_default
        }
        case 0x6:
        {
// switch_5968_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x7:
        {
// switch_5968_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x8:
        {
// switch_5968_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x9:
        {
// switch_5968_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0xa:
        {
// switch_5968_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0xb:
        {
// switch_5968_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0xc:
        {
// switch_5968_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0xd:
        {
// switch_5968_case_0xd
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0xe:
        {
// switch_5968_case_0xe
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0xf:
        {
// switch_5968_case_0xf
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x10:
        {
// switch_5968_case_0x10
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x11:
        {
// switch_5968_case_0x11
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x12:
        {
// switch_5968_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x13:
        {
// switch_5968_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x14:
        {
// switch_5968_case_0x14
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x15:
        {
// switch_5968_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x16:
        {
// switch_5968_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x17:
        {
// switch_5968_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x18:
        {
// switch_5968_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x19:
        {
// switch_5968_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x1a:
        {
// switch_5968_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x1b:
        {
// switch_5968_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x1c:
        {
// switch_5968_case_0x1c
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x1d:
        {
// switch_5968_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x1e:
        {
// switch_5968_case_0x1e
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x1f:
        {
// switch_5968_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x20:
        {
// switch_5968_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x21:
        {
// switch_5968_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x22:
        {
// switch_5968_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x23:
        {
// switch_5968_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x24:
        {
// switch_5968_case_0x24
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x25:
        {
// switch_5968_case_0x25
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x26:
        {
// switch_5968_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x27:
        {
// switch_5968_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x28:
        {
// switch_5968_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x29:
        {
// switch_5968_case_0x29
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x2a:
        {
// switch_5968_case_0x2a
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x2b:
        {
// switch_5968_case_0x2b
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x2c:
        {
// switch_5968_case_0x2c
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x2d:
        {
// switch_5968_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x2e:
        {
// switch_5968_case_0x2e
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x2f:
        {
// switch_5968_case_0x2f
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x30:
        {
// switch_5968_case_0x30
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x31:
        {
// switch_5968_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x32:
        {
// switch_5968_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x33:
        {
// switch_5968_case_0x33
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x34:
        {
// switch_5968_case_0x34
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x35:
        {
// switch_5968_case_0x35
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x36:
        {
// switch_5968_case_0x36
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x37:
        {
// switch_5968_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x38:
        {
// switch_5968_case_0x38
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5968_case_default
        }
        case 0x39:
        {
// switch_5968_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3a:
        {
// switch_5968_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3b:
        {
// switch_5968_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3c:
        {
// switch_5968_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3d:
        {
// switch_5968_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
        case 0x3e:
        {
// switch_5968_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            OP_JUMP switch_5968_case_default
        }
    }
}
// fun_6160
fun_6160() {
    pri = arg_4;
    OP_JNZ lab_6198
    var_8 = 0;
    pri = fun_0F88()
// lab_6198
    pri = arg_1;
    switch (pri) {
// switch_7570
        case default:
        {
// switch_7570_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12F8(var_264)
            OP_JZER lab_7B38
            pri = arg_3;
            switch (pri) {
// switch_7AE0
                case default:
                {
// switch_7AE0_case_default
                    OP_JUMP lab_7DF0
// lab_7DF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E60
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E60
                    var_8 = 0;
                    pri = fun_0FC8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7AE0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AE0_case_default
                }
                case 0x2:
                {
// switch_7AE0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AE0_case_default
                }
                case 0x3:
                {
// switch_7AE0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7AE0_case_default
                }
            }
// lab_7B38
            pri = arg_1;
            OP_JZER lab_7B88
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B88
            pri = 0;
            OP_JUMP lab_7B90
// lab_7B88
            pri = 1;
// lab_7B90
            OP_JZER lab_7BF8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A78(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7BF8
            pri = 1;
            OP_JUMP lab_7C00
// lab_7BF8
            pri = 0;
// lab_7C00
            OP_JZER lab_7C50
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DF0
// lab_7C50
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7CB8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DF0
// lab_7CB8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A78(var_24, var_16)
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
// switch_7570_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1:
        {
// switch_7570_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2:
        {
// switch_7570_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3:
        {
// switch_7570_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x4:
        {
// switch_7570_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x5:
        {
// switch_7570_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CB0(var_40)
            OP_JUMP switch_7570_case_default
        }
        case 0x6:
        {
// switch_7570_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x7:
        {
// switch_7570_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x8:
        {
// switch_7570_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x9:
        {
// switch_7570_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xa:
        {
// switch_7570_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xb:
        {
// switch_7570_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xc:
        {
// switch_7570_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xd:
        {
// switch_7570_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xe:
        {
// switch_7570_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0xf:
        {
// switch_7570_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x10:
        {
// switch_7570_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x11:
        {
// switch_7570_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x12:
        {
// switch_7570_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x13:
        {
// switch_7570_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x14:
        {
// switch_7570_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x15:
        {
// switch_7570_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x16:
        {
// switch_7570_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x17:
        {
// switch_7570_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x18:
        {
// switch_7570_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x19:
        {
// switch_7570_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1a:
        {
// switch_7570_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1b:
        {
// switch_7570_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1c:
        {
// switch_7570_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1d:
        {
// switch_7570_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1e:
        {
// switch_7570_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x1f:
        {
// switch_7570_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x20:
        {
// switch_7570_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x21:
        {
// switch_7570_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x22:
        {
// switch_7570_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x23:
        {
// switch_7570_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x24:
        {
// switch_7570_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x25:
        {
// switch_7570_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x26:
        {
// switch_7570_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x27:
        {
// switch_7570_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x28:
        {
// switch_7570_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x29:
        {
// switch_7570_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2a:
        {
// switch_7570_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2b:
        {
// switch_7570_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2c:
        {
// switch_7570_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2d:
        {
// switch_7570_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2e:
        {
// switch_7570_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x2f:
        {
// switch_7570_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x30:
        {
// switch_7570_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x31:
        {
// switch_7570_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x32:
        {
// switch_7570_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x33:
        {
// switch_7570_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x34:
        {
// switch_7570_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x35:
        {
// switch_7570_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x36:
        {
// switch_7570_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x37:
        {
// switch_7570_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x38:
        {
// switch_7570_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x39:
        {
// switch_7570_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3a:
        {
// switch_7570_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3b:
        {
// switch_7570_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3c:
        {
// switch_7570_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3d:
        {
// switch_7570_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
        case 0x3e:
        {
// switch_7570_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            OP_JUMP switch_7570_case_default
        }
    }
}
// fun_7E90
fun_7E90() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7F18
// lab_7F18
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8098
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8088
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7FD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7FD8
    pri = 0;
    OP_JUMP lab_7FE0
// lab_8098
    pri = 0;
    return pri;
// lab_8088
    OP_JUMP lab_7F10
// lab_7F10
    OP_INC_P_S -936
// lab_7FD8
    pri = 1;
// lab_7FE0
    OP_JZER lab_8058
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8050
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8058
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8050
}
// fun_80B8
fun_80B8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8100
    pri = arg_0;
    return pri;
// lab_8100
    pri = arg_1;
    return pri;
}
// fun_8110
fun_8110() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_81A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_15A0()
// lab_81A8
    pri = arg_4;
    OP_JZER lab_81E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_15C8(var_8)
// lab_81E0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8238
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8238
    pri = 0;
    OP_JUMP lab_8240
// lab_8238
    pri = 1;
// lab_8240
    OP_JZER lab_8308
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8308
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_82E0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14E0(var_32, var_24)
    OP_JUMP lab_8308
// lab_8308
    pri = arg_2;
    OP_JZER lab_83E0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_83B0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1070(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0780(var_40)
    OP_JUMP lab_83E0
// lab_83E0
    pri = arg_3;
    OP_JZER lab_8418
    var_8 = 1;
    var_16 = 8;
    pri = fun_1568(var_8)
// lab_8418
    pri = 0;
    return pri;
// lab_83B0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1070(var_16, var_8)
// lab_82E0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
}
// fun_8428
fun_8428() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_85A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_84C0
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_85A8
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_84C0
    pri = arg_0;
    OP_JNZ lab_8508
    var_8 = 31016;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_8528
// lab_8508
    var_8 = 31192;
    pri = SoundPostEvent(var_8)
// lab_8528
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_85A8
    var_24 = 31456;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_85E8
fun_85E8() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_8428(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8628
fun_8628() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7E90(var_24)
    pri = 0;
    return pri;
}
// fun_8690
fun_8690() {
    pri = g_mode;
    switch (pri) {
// switch_8750
        case default:
        {
// switch_8750_case_default
            pri = CommandNOP()
            OP_JUMP lab_8798
// lab_8798
            pri = 0;
            return pri;
        }
        case 0x9d2a08220b1b0eb4:
        {
// switch_8750_case_0x9d2a08220b1b0eb4
            var_8 = 0;
            pri = fun_A488()
            OP_JUMP lab_8798
        }
        case 0x0:
        {
// switch_8750_case_0x0
            var_8 = 0;
            pri = fun_87A8()
            OP_JUMP lab_8798
        }
        case 0x7faf0e1e810e79c0:
        {
// switch_8750_case_0x7faf0e1e810e79c0
            var_8 = 0;
            pri = fun_A590()
            OP_JUMP lab_8798
        }
    }
}
// fun_87A8
fun_87A8() {
    pri = 0;
    return pri;
}
// fun_87C0
fun_87C0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8828
fun_8828() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8110(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8880
fun_8880() {
    OP_PUSH2_C 2696390934716002895, -4010460735086782799
    var_16 = 16;
    pri = fun_80B8(var_8, var_0)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0518(var_24)
    pri = 0;
    return pri;
}
// fun_8900
fun_8900() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_8930
fun_8930() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 19350;
    pri = float(var_40)
    var_48 = pri;
    OP_PUSH2_C 4663451025863081984, -4242657469657360075
    var_56 = 48;
    pri = fun_06F0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    var_80 = -90;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 19350;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH2_C 4663593962374692864, 8802641224559852288
    var_112 = 48;
    pri = fun_06F0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 6;
    var_128 = 2;
    var_136 = 8802641224559852288;
    var_144 = 24;
    pri = fun_1238(var_136, var_128, var_120)
    var_152 = 3;
    var_160 = 6;
    var_168 = -4242657469657360075;
    var_176 = 24;
    pri = fun_1238(var_168, var_160, var_152)
    var_184 = 15;
    var_192 = 8;
    pri = fun_0060(var_184)
    OP_PUSH2_C 2696390934716002895, -4010460735086782799
    var_208 = 16;
    pri = fun_80B8(var_200, var_192)
    var_8 = pri;
    var_216 = 1;
    var_224 = 1;
    var_232 = 0;
    OP_PUSH2_C 4670786967443603456, 4663533489235165184
    var_240 = var_8;
    var_248 = 48;
    pri = fun_06F0(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 0;
    var_264 = var_8;
    var_272 = 16;
    pri = fun_0748(var_264, var_256)
    var_280 = 31456;
    var_288 = 8;
    var_296 = 16;
    pri = fun_0280(var_288, var_280)
    var_304 = 0;
    pri = fun_0350()
    var_312 = 1;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 1;
    var_336 = 1;
    var_344 = -1;
    var_352 = -1;
    var_360 = 0;
    var_368 = 3;
    var_376 = -4242657469657360075;
    var_384 = 56;
    pri = fun_3E28(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    var_416 = 100;
    var_424 = -1;
    OP_PUSH2_C 2184505904050533721, -4242657469657360075
    var_432 = 56;
    pri = fun_1E10(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 1;
    var_448 = 8;
    pri = fun_1F58(var_440)
    var_456 = 0;
    pri = fun_2018()
    var_464 = 31504;
    pri = SoundPostEvent(var_464)
    pri = EvCameraStart()
    var_472 = 1;
    var_480 = 8;
    pri = fun_0060(var_472)
    var_488 = 1;
    var_496 = 0;
    var_504 = 31688;
    var_512 = 1;
    var_520 = 32;
    pri = fun_02E0(var_512, var_504, var_496, var_488)
    var_528 = 0;
    pri = fun_0350()
    OP_PUSH2_C -4602341049200594125, 4627955272081263821
    var_536 = 0;
    OP_PUSH5_C 4671028095841132872, 4642277422583743775, 4663295906762635346, 4671071149967697510, 4642006854762380657
    var_544 = 4663703110893982188;
    var_552 = 1;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    pri = fun_21B8()
    OP_PUSH2_C 4621762822593629389, 4627955272081263821
    var_568 = 0;
    OP_PUSH5_C 4671071765694209065, 4642263700678629130, 4663306143215889940, 4671031026039620895, 4641940004455411876
    var_576 = 4663714007054213448;
    var_584 = 140;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 31736;
    var_600 = 8;
    var_608 = 16;
    pri = fun_0280(var_600, var_592)
    var_616 = 15;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 1;
    var_640 = 0;
    var_648 = 15;
    var_656 = 19405;
    pri = float(var_656)
    var_664 = pri;
    var_672 = 238;
    pri = float(var_672)
    var_680 = pri;
    var_688 = 6190;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 8802641224559852288;
    var_712 = 56;
    pri = fun_1008(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 40;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    var_760 = -120;
    pri = float(var_760)
    var_768 = pri;
    var_776 = 8802641224559852288;
    var_784 = 40;
    pri = fun_0830(var_776, var_768, var_760, var_752, var_744)
    var_792 = 1;
    var_800 = 0;
    var_808 = 15;
    var_816 = 19290;
    pri = float(var_816)
    var_824 = pri;
    var_832 = 238;
    pri = float(var_832)
    var_840 = pri;
    var_848 = 6250;
    pri = float(var_848)
    var_856 = pri;
    var_864 = 8802641224559852288;
    var_872 = 56;
    pri = fun_1008(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 0;
    var_888 = 10;
    var_896 = 0;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_904 = 40;
    pri = fun_10B0(var_896, var_888, var_880, var_872, var_864)
    var_912 = 30;
    var_920 = 8;
    pri = fun_0060(var_912)
    var_928 = 0;
    var_936 = 10;
    var_944 = 0;
    OP_PUSH2_C -4616189618054758400, 8802641224559852288
    var_952 = 40;
    pri = fun_10B0(var_944, var_936, var_928, var_920, var_912)
    var_960 = 10;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = 0;
    var_984 = 5;
    var_992 = 0;
    OP_PUSH2_C -4620693217682128896, 8802641224559852288
    var_1000 = 40;
    pri = fun_10B0(var_992, var_984, var_976, var_968, var_960)
    var_1008 = 10;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 0;
    var_1032 = 7;
    var_1040 = 0;
    OP_PUSH2_C 4600877379321698714, 8802641224559852288
    var_1048 = 40;
    pri = fun_10B0(var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1056 = 15;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 1;
    var_1080 = 0;
    var_1088 = 31784;
    var_1096 = 1;
    var_1104 = 32;
    pri = fun_02E0(var_1096, var_1088, var_1080, var_1072)
    var_1112 = 0;
    pri = fun_0350()
    OP_PUSH2_C -4605043208977016422, 4631952216750555136
    var_1120 = 0;
    OP_PUSH5_C 4670978725020266660, 4643775573147286241, 4663530828417025966, 4670878328613534433, 4646380448134882918
    var_1128 = 4663600779346785075;
    var_1136 = 1;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 0;
    pri = fun_21B8()
    OP_PUSH2_C 4619342137793917747, 4629418941960159232
    var_1152 = 0;
    OP_PUSH5_C 4670979494678406103, 4644041215156556923, 4663314169650772705, 4670888694259405292, 4646061677723758100
    var_1160 = 4663102337740565381;
    var_1168 = 150;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 31832;
    var_1184 = 8;
    var_1192 = 16;
    pri = fun_0280(var_1184, var_1176)
    var_1200 = 30;
    var_1208 = 8;
    pri = fun_0060(var_1200)
    var_1216 = 0;
    var_1224 = 10;
    var_1232 = 0;
    OP_PUSH2_C -4616189618054758400, 8802641224559852288
    var_1240 = 40;
    pri = fun_10B0(var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1248 = 15;
    var_1256 = 8;
    pri = fun_0060(var_1248)
    var_1264 = 8802641224559852288;
    var_1272 = 8;
    pri = fun_08D8(var_1264)
    var_1280 = 0;
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = -50;
    pri = float(var_1304)
    var_1312 = pri;
    var_1320 = 8802641224559852288;
    var_1328 = 40;
    pri = fun_0830(var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1336 = 1;
    var_1344 = 0;
    var_1352 = 15;
    var_1360 = 19430;
    pri = float(var_1360)
    var_1368 = pri;
    var_1376 = 238;
    pri = float(var_1376)
    var_1384 = pri;
    var_1392 = 6290;
    pri = float(var_1392)
    var_1400 = pri;
    var_1408 = 8802641224559852288;
    var_1416 = 56;
    pri = fun_1008(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 45;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 8802641224559852288;
    var_1448 = 8;
    pri = fun_08D8(var_1440)
    var_1456 = 1;
    var_1464 = 0;
    var_1472 = 31880;
    var_1480 = 1;
    var_1488 = 32;
    pri = fun_02E0(var_1480, var_1472, var_1464, var_1456)
    var_1496 = 0;
    pri = fun_0350()
    var_1504 = 0;
    var_1512 = 4625872357253604966;
    var_1520 = 0;
    OP_PUSH5_C 4671029461984330383, 4641267279261073408, 4663694952517704090, 4671049453854502420, 4642256663804211364
    var_1528 = 4663264339783801897;
    var_1536 = 1;
    pri = EvCameraMove(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1544 = 0;
    pri = fun_21B8()
    var_1552 = 1;
    var_1560 = 3;
    var_1568 = 0;
    var_1576 = 3;
    var_1584 = -4242657469657360075;
    var_1592 = 40;
    pri = fun_6160(var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1600 = 1;
    var_1608 = var_8;
    var_1616 = 16;
    pri = fun_0748(var_1608, var_1600)
    var_1624 = 0;
    var_1632 = 4630516694369330790;
    var_1640 = 2;
    OP_PUSH5_C 4670997944483520184, 4641962170609827840, 4663523802537724477, 4671107568541588521, 4641263408980143636
    var_1648 = 4663519558422841262;
    var_1656 = 150;
    pri = EvCameraMove(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1664 = 31928;
    var_1672 = 8;
    var_1680 = 16;
    pri = fun_0280(var_1672, var_1664)
    var_1688 = 1;
    var_1696 = 0;
    var_1704 = 4641240890982006784;
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 4670924406397075456;
    var_1736 = 6195;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = 4602678819172646912;
    var_1760 = var_8;
    var_1768 = 72;
    pri = fun_07B8(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1776 = 15;
    var_1784 = 8;
    pri = fun_0060(var_1776)
    var_1792 = 1;
    var_1800 = 0;
    var_1808 = 15;
    var_1816 = 19405;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = 238;
    pri = float(var_1832)
    var_1840 = pri;
    var_1848 = 6190;
    pri = float(var_1848)
    var_1856 = pri;
    var_1864 = 8802641224559852288;
    var_1872 = 56;
    pri = fun_1008(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1880 = 10;
    var_1888 = 8802641224559852288;
    var_1896 = 16;
    pri = fun_1070(var_1888, var_1880)
    var_1904 = 0;
    var_1912 = 7;
    var_1920 = 0;
    OP_PUSH2_C 4600877379321698714, 8802641224559852288
    var_1928 = 40;
    pri = fun_10B0(var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1936 = 15;
    var_1944 = 8;
    pri = fun_0060(var_1936)
    var_1952 = 0;
    var_1960 = 10;
    var_1968 = 0;
    OP_PUSH2_C -4616189618054758400, 8802641224559852288
    var_1976 = 40;
    pri = fun_10B0(var_1968, var_1960, var_1952, var_1944, var_1936)
    var_1984 = 15;
    var_1992 = 8;
    pri = fun_0060(var_1984)
    var_2000 = 0;
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = 0;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_2032 = 48;
    pri = fun_0880(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2040 = 15;
    var_2048 = 8802641224559852288;
    var_2056 = 16;
    pri = fun_1108(var_2048, var_2040)
    var_2064 = 15;
    var_2072 = 8;
    pri = fun_0060(var_2064)
    var_2080 = 0;
    pri = fun_21B8()
    var_2088 = 15;
    var_2096 = 8;
    pri = fun_0060(var_2088)
    var_2104 = 8802641224559852288;
    var_2112 = 8;
    pri = fun_08D8(var_2104)
    var_2120 = 0;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 180;
    pri = float(var_2144)
    var_2152 = pri;
    var_2160 = 8802641224559852288;
    var_2168 = 40;
    pri = fun_0830(var_2160, var_2152, var_2144, var_2136, var_2128)
    var_2176 = 0;
    var_2184 = 0;
    var_2192 = 0;
    var_2200 = 180;
    pri = float(var_2200)
    var_2208 = pri;
    var_2216 = -4242657469657360075;
    var_2224 = 40;
    pri = fun_0830(var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2232 = 8802641224559852288;
    var_2240 = 8;
    pri = fun_08D8(var_2232)
    var_2248 = -4242657469657360075;
    var_2256 = 8;
    pri = fun_08D8(var_2248)
    var_2264 = 8802641224559852288;
    var_2272 = 8;
    pri = fun_12A0(var_2264)
    var_2280 = -4242657469657360075;
    var_2288 = 8;
    pri = fun_12A0(var_2280)
    var_2296 = 1;
    var_2304 = 1;
    var_2312 = -1;
    var_2320 = -1;
    var_2328 = 0;
    var_2336 = 12;
    var_2344 = -4242657469657360075;
    var_2352 = 56;
    pri = fun_3E28(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2360 = 0;
    var_2368 = 3;
    var_2376 = 0;
    var_2384 = 101;
    var_2392 = -1;
    OP_PUSH2_C 2184502605515649088, -4242657469657360075
    var_2400 = 56;
    pri = fun_1E10(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2408 = 1;
    var_2416 = 8;
    pri = fun_1F58(var_2408)
    var_2424 = 0;
    pri = fun_2018()
    var_2432 = 1;
    var_2440 = 3;
    var_2448 = 0;
    var_2456 = 12;
    var_2464 = -4242657469657360075;
    var_2472 = 40;
    pri = fun_6160(var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2480 = 0;
    var_2488 = 4630516694369330790;
    var_2496 = 0;
    OP_PUSH5_C 4670939098621201613, 4643142958137129042, 4663526045541445140, 4671048631969560658, 4643584522006843884
    var_2504 = 4663527397940747305;
    var_2512 = 1;
    pri = EvCameraMove(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2520 = 0;
    pri = fun_21B8()
    OP_PUSH2_C 4625224964807170458, 4630516694369330790
    var_2528 = 20;
    OP_PUSH5_C 4670908510207716884, 4643327500168734966, 4663525660712375419, 4671018035309738721, 4643734759275663196
    var_2536 = 4663530971353537577;
    var_2544 = 15;
    pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 30;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = var_8;
    var_2576 = 8;
    pri = fun_08D8(var_2568)
    var_2584 = 0;
    var_2592 = 0;
    var_2600 = 0;
    var_2608 = 889;
    var_2616 = 888;
    var_2624 = 16;
    pri = fun_80B8(var_2616, var_2608)
    var_2632 = pri;
    pri = SoundPlayPokeVoice(var_2632, var_2624, var_2616, var_2608)
    var_2640 = 1;
    var_2648 = -1;
    var_2656 = -1;
    var_2664 = 3;
    var_2672 = 0;
    var_2680 = 30;
    var_2688 = var_8;
    var_2696 = 56;
    pri = fun_2248(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640)
    OP_PUSH2_C -8563449579199142486, -4256638399296612941
    var_2712 = 16;
    pri = fun_80B8(var_2704, var_2696)
    var_16 = pri;
    var_2720 = 0;
    var_2728 = 3;
    var_2736 = 2;
    var_2744 = 101;
    var_2752 = -1;
    var_2760 = var_16;
    var_2768 = var_8;
    var_2776 = 56;
    pri = fun_1E10(var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2784 = 0;
    pri = fun_1EC0()
    OP_PUSH2_C -4617090337980232499, 4630840390592548045
    var_2792 = 20;
    OP_PUSH5_C 4671010302994216387, 4639851811971939697, 4663541757562606060, 4671102700453856543, 4638896204426007020
    var_2800 = 4663776415334206013;
    var_2808 = 45;
    pri = EvCameraMove(var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736)
    var_2816 = 90;
    var_2824 = 8;
    pri = fun_0060(var_2816)
    var_2832 = 0;
    pri = fun_2018()
    pri = PokePartyRecoverAll()
    var_2840 = 0;
    var_2848 = 1;
    OP_PUSH2_C 8001549285153698985, 8001541588572301508
    var_2856 = 16;
    pri = fun_80B8(var_2848, var_2840)
    var_2864 = pri;
    var_2872 = 24;
    pri = fun_2048(var_2864, var_2856, var_2848)
    var_2880 = 0;
    pri = fun_2108()
    OP_JZER lab_A260
    var_2888 = 0;
    pri = fun_85E8()
// lab_A260
    pri = 0;
    return pri;
}
// fun_A278
fun_A278() {
    pri = 0;
    return pri;
}
// fun_A290
fun_A290() {
    var_8 = 2696390934716002895;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = -4010460735086782799;
    var_32 = 8;
    pri = fun_0698(var_24)
    var_40 = 160;
    var_48 = 8;
    pri = fun_8628(var_40)
    var_56 = 100;
    var_64 = 5485305711447580246;
    pri = WorkSet(var_64, var_56)
    var_72 = -2133533246548165864;
    var_80 = 8;
    pri = fun_0518(var_72)
    var_88 = -7767209653950836110;
    var_96 = 8;
    pri = fun_0518(var_88)
    var_104 = -3298867873700702363;
    var_112 = 8;
    pri = fun_0518(var_104)
    var_120 = -6559215502469176355;
    pri = FlagSet(var_120)
    pri = FogEnd()
    var_128 = 999;
    var_136 = -3096809212025893132;
    pri = WorkSet(var_136, var_128)
    pri = 0;
    return pri;
}
// fun_A430
fun_A430() {
    var_8 = 0;
    pri = fun_0548()
    var_16 = -7120063321308384794;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_A488
fun_A488() {
    var_8 = 0;
    pri = fun_87C0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8828()
    var_24 = 0;
    pri = fun_8880()
    var_32 = 0;
    pri = fun_8900()
    var_40 = 0;
    pri = fun_8930()
    var_48 = 0;
    pri = fun_A278()
    var_56 = 0;
    pri = fun_A290()
    var_64 = 0;
    pri = fun_A430()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A590
fun_A590() {
    var_8 = 0;
    pri = fun_8880()
    var_16 = 0;
    pri = fun_A290()
    pri = 0;
    return pri;
}
