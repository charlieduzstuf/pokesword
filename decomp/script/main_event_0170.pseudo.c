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
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_04D8
fun_04D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0510
// lab_0510
    var_8 = 0;
    pri = fun_0658()
    OP_JNZ lab_0548
    OP_JUMP lab_0578
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05E8
    pri = 0;
    return pri;
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
    pri = 0;
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0658
fun_0658() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
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
// fun_0898
fun_0898() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1310(var_8)
    OP_JZER lab_09B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1340(var_24)
    OP_JNZ lab_09B8
    pri = 0;
    return pri;
// lab_09B8
    OP_JUMP lab_09C8
// lab_09C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A28
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C8
    pri = 0;
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B60
    pri = 0;
    return pri;
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BA0
// lab_0BA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1310(var_8)
    OP_JNZ lab_0C28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C18
    pri = 0;
    return pri;
// lab_0C28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C70
    pri = 0;
    return pri;
// lab_0C70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D18(var_8)
    pri = 0;
    return pri;
// lab_0CD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA0
    pri = 0;
    return pri;
// lab_0C18
    OP_JUMP lab_0C70
}
// fun_0D18
fun_0D18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DA0
    pri = 0;
    return pri;
// lab_0DA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1310(var_8)
    OP_JZER lab_0ED0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF8
    OP_ZERO_P_S 64
// lab_0ED0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F08
    OP_CONST_S 64, 1
// lab_0F08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F40
    OP_CONST_S 72, 1
// lab_0F40
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
// lab_0DF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E20
    OP_ZERO_P_S 72
// lab_0E20
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
    OP_JUMP lab_0FE0
// lab_0FE0
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1160(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11D8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12B8
fun_12B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1218(var_24)
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1370
fun_1370() {
    OP_JUMP lab_1388
// lab_1388
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1418
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1408
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_1418
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1498
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_14A8
    pri = 0;
    return pri;
// lab_1498
    OP_JUMP lab_14B8
// lab_14B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1388
    pri = 0;
    return pri;
// lab_1408
    OP_JUMP lab_14B8
}
// fun_14F8
fun_14F8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1370(var_40)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1618
fun_1618() {
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
// switch_1C30
        case default:
        {
// switch_1C30_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C78
// lab_1C78
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
            OP_JNZ lab_1D20
            var_88 = 0;
            pri = fun_1FA0()
// lab_1D20
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C30_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1818
                case default:
                {
// switch_1818_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1890
// lab_1890
                    OP_JUMP lab_1C78
                }
                case 0x0:
                {
// switch_1818_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1890
                }
                case 0x1:
                {
// switch_1818_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1890
                }
                case 0x2:
                {
// switch_1818_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1890
                }
                case 0x3:
                {
// switch_1818_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1890
                }
                case 0x4:
                {
// switch_1818_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1890
                }
                case 0x5:
                {
// switch_1818_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1890
                }
            }
        }
        case 0x65:
        {
// switch_1C30_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_19D0
                case default:
                {
// switch_19D0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A48
// lab_1A48
                    OP_JUMP lab_1C78
                }
                case 0x0:
                {
// switch_19D0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A48
                }
                case 0x1:
                {
// switch_19D0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A48
                }
                case 0x2:
                {
// switch_19D0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A48
                }
                case 0x3:
                {
// switch_19D0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A48
                }
                case 0x4:
                {
// switch_19D0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A48
                }
                case 0x5:
                {
// switch_19D0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A48
                }
            }
        }
        case 0x66:
        {
// switch_1C30_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B88
                case default:
                {
// switch_1B88_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C00
// lab_1C00
                    OP_JUMP lab_1C78
                }
                case 0x0:
                {
// switch_1B88_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C00
                }
                case 0x1:
                {
// switch_1B88_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C00
                }
                case 0x2:
                {
// switch_1B88_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C00
                }
                case 0x3:
                {
// switch_1B88_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C00
                }
                case 0x4:
                {
// switch_1B88_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C00
                }
                case 0x5:
                {
// switch_1B88_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C00
                }
            }
        }
    }
}
// fun_1D38
fun_1D38() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AE0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DE0
    pri = 1;
    return pri;
// lab_1DE0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E28
fun_1E28() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D38(var_8)
    arg_2 = pri;
// lab_1E78
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1618(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D38(var_8)
    arg_2 = pri;
// lab_1F28
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    OP_JUMP lab_1FB8
// lab_1FB8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FF8
    pri = 0;
    return pri;
// lab_1FF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FB8
    pri = 0;
    return pri;
}
// fun_2038
fun_2038() {
    var_8 = 0;
    pri = fun_1FA0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_20E8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_20E8
    pri = 0;
    return pri;
}
// fun_20F8
fun_20F8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2128
fun_2128() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
    OP_JUMP lab_2178
// lab_2178
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_21C0
    OP_JUMP lab_21F0
    OP_JUMP lab_21E0
// lab_21C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_21F0
    pri = 0;
    return pri;
// lab_21E0
    OP_JUMP lab_2178
}
// fun_2200
fun_2200() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2230
fun_2230() {
    OP_JUMP lab_2248
// lab_2248
    pri = EvCameraMoveWait_()
    OP_JZER lab_2280
    pri = 0;
    return pri;
// lab_2280
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2248
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2328(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2400()
    pri = 0;
    return pri;
}
// fun_2328
fun_2328() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2380
fun_2380() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2328(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2400()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2400
fun_2400() {
    OP_JUMP lab_2418
// lab_2418
    pri = IsEasingRunningDof_()
    OP_JZER lab_2470
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2480
// lab_2470
    pri = 0;
    return pri;
// lab_2480
    OP_JUMP lab_2418
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    pri = arg_6;
    OP_JNZ lab_24D8
    var_8 = 0;
    pri = fun_0FF0()
// lab_24D8
    pri = arg_1;
    switch (pri) {
// switch_3A40
        case default:
        {
// switch_3A40_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D90
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D90
            pri = 1;
            OP_JUMP lab_3D98
// lab_3D90
            pri = 0;
// lab_3D98
            OP_JZER lab_3EF0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
            OP_JUMP lab_3F50
// lab_3EF0
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
// lab_3F50
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3FB0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4010
// lab_3FB0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4010
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4010
            pri = arg_2;
            OP_JZER lab_4050
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4050
            var_8 = 0;
            pri = fun_1030()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A40_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1:
        {
// switch_3A40_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x2:
        {
// switch_3A40_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x3:
        {
// switch_3A40_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x4:
        {
// switch_3A40_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x5:
        {
// switch_3A40_case_0x5
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x6:
        {
// switch_3A40_case_0x6
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x7:
        {
// switch_3A40_case_0x7
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x8:
        {
// switch_3A40_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x9:
        {
// switch_3A40_case_0x9
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xa:
        {
// switch_3A40_case_0xa
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xb:
        {
// switch_3A40_case_0xb
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xc:
        {
// switch_3A40_case_0xc
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xd:
        {
// switch_3A40_case_0xd
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xe:
        {
// switch_3A40_case_0xe
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0xf:
        {
// switch_3A40_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x10:
        {
// switch_3A40_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x11:
        {
// switch_3A40_case_0x11
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x12:
        {
// switch_3A40_case_0x12
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x13:
        {
// switch_3A40_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x14:
        {
// switch_3A40_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x15:
        {
// switch_3A40_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x16:
        {
// switch_3A40_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x17:
        {
// switch_3A40_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x18:
        {
// switch_3A40_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x19:
        {
// switch_3A40_case_0x19
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1a:
        {
// switch_3A40_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0D50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1b:
        {
// switch_3A40_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0D50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1c:
        {
// switch_3A40_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0D50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1d:
        {
// switch_3A40_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1e:
        {
// switch_3A40_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x1f:
        {
// switch_3A40_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x20:
        {
// switch_3A40_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x21:
        {
// switch_3A40_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x22:
        {
// switch_3A40_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x23:
        {
// switch_3A40_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x24:
        {
// switch_3A40_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x25:
        {
// switch_3A40_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x26:
        {
// switch_3A40_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x27:
        {
// switch_3A40_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x28:
        {
// switch_3A40_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
        case 0x29:
        {
// switch_3A40_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A40_case_default
        }
    }
}
// fun_4080
fun_4080() {
    pri = arg_5;
    OP_JNZ lab_40B8
    var_8 = 0;
    pri = fun_0FF0()
// lab_40B8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4108
    OP_CONST_S -8, -1
// lab_4108
    pri = arg_1;
    switch (pri) {
// switch_5BC0
        case default:
        {
// switch_5BC0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6068
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AE0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6068
            pri = 1;
            OP_JUMP lab_6070
// lab_6068
            pri = 0;
// lab_6070
            OP_JZER lab_60C0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6318
// lab_60C0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6128
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6128
            pri = 1;
            OP_JUMP lab_6130
// lab_6128
            pri = 0;
// lab_6130
            OP_JZER lab_62B8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
            OP_JUMP lab_6318
// lab_62B8
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
// lab_6318
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6388
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6388
            var_8 = 0;
            pri = fun_1030()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BC0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1:
        {
// switch_5BC0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2:
        {
// switch_5BC0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3:
        {
// switch_5BC0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x4:
        {
// switch_5BC0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x5:
        {
// switch_5BC0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D18(var_40)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x6:
        {
// switch_5BC0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x7:
        {
// switch_5BC0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x8:
        {
// switch_5BC0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x9:
        {
// switch_5BC0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xa:
        {
// switch_5BC0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xb:
        {
// switch_5BC0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xc:
        {
// switch_5BC0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xd:
        {
// switch_5BC0_case_0xd
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xe:
        {
// switch_5BC0_case_0xe
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0xf:
        {
// switch_5BC0_case_0xf
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x10:
        {
// switch_5BC0_case_0x10
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x11:
        {
// switch_5BC0_case_0x11
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x12:
        {
// switch_5BC0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x13:
        {
// switch_5BC0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x14:
        {
// switch_5BC0_case_0x14
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x15:
        {
// switch_5BC0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x16:
        {
// switch_5BC0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x17:
        {
// switch_5BC0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x18:
        {
// switch_5BC0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x19:
        {
// switch_5BC0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1a:
        {
// switch_5BC0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1b:
        {
// switch_5BC0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1c:
        {
// switch_5BC0_case_0x1c
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1d:
        {
// switch_5BC0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1e:
        {
// switch_5BC0_case_0x1e
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x1f:
        {
// switch_5BC0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x20:
        {
// switch_5BC0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x21:
        {
// switch_5BC0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x22:
        {
// switch_5BC0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x23:
        {
// switch_5BC0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x24:
        {
// switch_5BC0_case_0x24
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x25:
        {
// switch_5BC0_case_0x25
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x26:
        {
// switch_5BC0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x27:
        {
// switch_5BC0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x28:
        {
// switch_5BC0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x29:
        {
// switch_5BC0_case_0x29
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2a:
        {
// switch_5BC0_case_0x2a
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2b:
        {
// switch_5BC0_case_0x2b
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2c:
        {
// switch_5BC0_case_0x2c
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2d:
        {
// switch_5BC0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2e:
        {
// switch_5BC0_case_0x2e
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x2f:
        {
// switch_5BC0_case_0x2f
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x30:
        {
// switch_5BC0_case_0x30
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x31:
        {
// switch_5BC0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x32:
        {
// switch_5BC0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x33:
        {
// switch_5BC0_case_0x33
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x34:
        {
// switch_5BC0_case_0x34
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x35:
        {
// switch_5BC0_case_0x35
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x36:
        {
// switch_5BC0_case_0x36
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x37:
        {
// switch_5BC0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x38:
        {
// switch_5BC0_case_0x38
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
            pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x39:
        {
// switch_5BC0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3a:
        {
// switch_5BC0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3b:
        {
// switch_5BC0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3c:
        {
// switch_5BC0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3d:
        {
// switch_5BC0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
        case 0x3e:
        {
// switch_5BC0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            OP_JUMP switch_5BC0_case_default
        }
    }
}
// fun_63B8
fun_63B8() {
    pri = arg_4;
    OP_JNZ lab_63F0
    var_8 = 0;
    pri = fun_0FF0()
// lab_63F0
    pri = arg_1;
    switch (pri) {
// switch_77C8
        case default:
        {
// switch_77C8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1310(var_264)
            OP_JZER lab_7D90
            pri = arg_3;
            switch (pri) {
// switch_7D38
                case default:
                {
// switch_7D38_case_default
                    OP_JUMP lab_8048
// lab_8048
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_80B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_80B8
                    var_8 = 0;
                    pri = fun_1030()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D38_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D38_case_default
                }
                case 0x2:
                {
// switch_7D38_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D38_case_default
                }
                case 0x3:
                {
// switch_7D38_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D38_case_default
                }
            }
// lab_7D90
            pri = arg_1;
            OP_JZER lab_7DE0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DE0
            pri = 0;
            OP_JUMP lab_7DE8
// lab_7DE0
            pri = 1;
// lab_7DE8
            OP_JZER lab_7E50
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AE0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E50
            pri = 1;
            OP_JUMP lab_7E58
// lab_7E50
            pri = 0;
// lab_7E58
            OP_JZER lab_7EA8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8048
// lab_7EA8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7F10
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8048
// lab_7F10
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
// switch_77C8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1:
        {
// switch_77C8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2:
        {
// switch_77C8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3:
        {
// switch_77C8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x4:
        {
// switch_77C8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x5:
        {
// switch_77C8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D18(var_40)
            OP_JUMP switch_77C8_case_default
        }
        case 0x6:
        {
// switch_77C8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x7:
        {
// switch_77C8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x8:
        {
// switch_77C8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x9:
        {
// switch_77C8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xa:
        {
// switch_77C8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xb:
        {
// switch_77C8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xc:
        {
// switch_77C8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xd:
        {
// switch_77C8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xe:
        {
// switch_77C8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0xf:
        {
// switch_77C8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x10:
        {
// switch_77C8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x11:
        {
// switch_77C8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x12:
        {
// switch_77C8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x13:
        {
// switch_77C8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x14:
        {
// switch_77C8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x15:
        {
// switch_77C8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x16:
        {
// switch_77C8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x17:
        {
// switch_77C8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x18:
        {
// switch_77C8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x19:
        {
// switch_77C8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1a:
        {
// switch_77C8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1b:
        {
// switch_77C8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1c:
        {
// switch_77C8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1d:
        {
// switch_77C8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1e:
        {
// switch_77C8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x1f:
        {
// switch_77C8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x20:
        {
// switch_77C8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x21:
        {
// switch_77C8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x22:
        {
// switch_77C8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x23:
        {
// switch_77C8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x24:
        {
// switch_77C8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x25:
        {
// switch_77C8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x26:
        {
// switch_77C8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x27:
        {
// switch_77C8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x28:
        {
// switch_77C8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x29:
        {
// switch_77C8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2a:
        {
// switch_77C8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2b:
        {
// switch_77C8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2c:
        {
// switch_77C8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2d:
        {
// switch_77C8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2e:
        {
// switch_77C8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x2f:
        {
// switch_77C8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x30:
        {
// switch_77C8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x31:
        {
// switch_77C8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x32:
        {
// switch_77C8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x33:
        {
// switch_77C8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x34:
        {
// switch_77C8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x35:
        {
// switch_77C8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x36:
        {
// switch_77C8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x37:
        {
// switch_77C8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x38:
        {
// switch_77C8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x39:
        {
// switch_77C8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3a:
        {
// switch_77C8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3b:
        {
// switch_77C8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3c:
        {
// switch_77C8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3d:
        {
// switch_77C8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
        case 0x3e:
        {
// switch_77C8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            OP_JUMP switch_77C8_case_default
        }
    }
}
// fun_80E8
fun_80E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8858(var_16, var_8)
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
    OP_JZER lab_82E0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_82E0
    pri = 0;
    return pri;
}
// fun_82F8
fun_82F8() {
    pri = arg_4;
    OP_JNZ lab_8330
    var_8 = 0;
    pri = fun_0FF0()
// lab_8330
    pri = arg_1;
    OP_JNZ lab_83D8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30472;
    var_72 = 30464;
    var_80 = 30320;
    var_88 = 30168;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_83D8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8438
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8438
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_84E8
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30928;
    var_72 = 30784;
    var_80 = 30632;
    var_88 = 30480;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_84E8
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8598
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31560;
    var_72 = 31408;
    var_80 = 31240;
    var_88 = 31064;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8598
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8648
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31760;
    var_72 = 31752;
    var_80 = 31744;
    var_88 = 31568;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8648
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_86F8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32176;
    var_72 = 32048;
    var_80 = 31912;
    var_88 = 31768;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_86F8
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8758
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8758
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_87B8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_87B8
    var_8 = 0;
    pri = fun_1030()
    pri = 0;
    return pri;
}
// fun_87E0
fun_87E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8818(var_8)
    pri = 0;
    return pri;
}
// fun_8818
fun_8818() {
    var_8 = 32344;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A68(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8858
fun_8858() {
    var_8 = arg_1;
    var_16 = 32528;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AA0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88A0
fun_88A0() {
    pri = 32632;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8928
// lab_8928
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8AA8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8A98
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_89E8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_89E8
    pri = 0;
    OP_JUMP lab_89F0
// lab_8AA8
    pri = 0;
    return pri;
// lab_8A98
    OP_JUMP lab_8920
// lab_8920
    OP_INC_P_S -936
// lab_89E8
    pri = 1;
// lab_89F0
    OP_JZER lab_8A68
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8A60
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8A68
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8A60
}
// fun_8AC8
fun_8AC8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8B60
    var_8 = 1;
    var_16 = 0;
    var_24 = 33552;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_15B8()
// lab_8B60
    pri = arg_4;
    OP_JZER lab_8B98
    var_8 = 1;
    var_16 = 8;
    pri = fun_15E0(var_8)
// lab_8B98
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8BF0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8BF0
    pri = 0;
    OP_JUMP lab_8BF8
// lab_8BF0
    pri = 1;
// lab_8BF8
    OP_JZER lab_8CC0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8CC0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8C98
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14F8(var_32, var_24)
    OP_JUMP lab_8CC0
// lab_8CC0
    pri = arg_2;
    OP_JZER lab_8D98
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8D68
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10C8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E8(var_40)
    OP_JUMP lab_8D98
// lab_8D98
    pri = arg_3;
    OP_JZER lab_8DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1580(var_8)
// lab_8DD0
    pri = 0;
    return pri;
// lab_8D68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10C8(var_16, var_8)
// lab_8C98
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14F8(var_16, var_8)
}
// fun_8DE0
fun_8DE0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_88A0(var_24)
    pri = 0;
    return pri;
}
// fun_8E48
fun_8E48() {
    pri = g_mode;
    switch (pri) {
// switch_8F08
        case default:
        {
// switch_8F08_case_default
            pri = CommandNOP()
            OP_JUMP lab_8F50
// lab_8F50
            pri = 0;
            return pri;
        }
        case 0x9d3074220b2031e6:
        {
// switch_8F08_case_0x9d3074220b2031e6
            var_8 = 0;
            pri = fun_CE80()
            OP_JUMP lab_8F50
        }
        case 0x0:
        {
// switch_8F08_case_0x0
            var_8 = 0;
            pri = fun_8F60()
            OP_JUMP lab_8F50
        }
        case 0x7fb61a1e8114acd2:
        {
// switch_8F08_case_0x7fb61a1e8114acd2
            var_8 = 0;
            pri = fun_CF70()
            OP_JUMP lab_8F50
        }
    }
}
// fun_8F60
fun_8F60() {
    pri = 0;
    return pri;
}
// fun_8F78
fun_8F78() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8AC8(var_40, var_32, var_24, var_16, var_8)
    var_56 = 33600;
    pri = SoundPostEvent(var_56)
    pri = 0;
    return pri;
}
// fun_8FF0
fun_8FF0() {
    var_8 = -1655053127185566619;
    pri = FlagReset(var_8)
    var_16 = -2409953949732425464;
    pri = FlagReset(var_16)
    var_24 = 7750031198002937679;
    pri = FlagReset(var_24)
    pri = 0;
    return pri;
}
// fun_9080
fun_9080() {
    var_8 = 0;
    pri = fun_04D8()
    pri = 0;
    return pri;
}
// fun_90B0
fun_90B0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4640537203540230144, 4670962889304047616, 4663591763351437312, 8802641224559852288
    var_24 = 48;
    pri = fun_0680(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4582834833314545664, 4671162175786582016, 4663637942839803904, -2133533246548165864
    var_48 = 48;
    pri = fun_0680(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4632233691727265792, 4670995874652880896, 4663736898886303744, -4242657469657360075
    var_72 = 48;
    pri = fun_0680(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = -4242657469657360075;
    var_120 = 16;
    pri = fun_07A8(var_112, var_104)
    var_128 = 1;
    var_136 = -2133533246548165864;
    var_144 = 16;
    pri = fun_07A8(var_136, var_128)
    var_152 = 1;
    var_160 = 8802641224559852288;
    var_168 = 16;
    pri = fun_0770(var_160, var_152)
    var_176 = 1;
    var_184 = -4242657469657360075;
    var_192 = 16;
    pri = fun_0770(var_184, var_176)
    var_200 = 1;
    var_208 = -2133533246548165864;
    var_216 = 16;
    pri = fun_0770(var_208, var_200)
    var_224 = 0;
    var_232 = -7767209653950836110;
    var_240 = 16;
    pri = fun_0770(var_232, var_224)
    var_248 = 0;
    var_256 = -3298867873700702363;
    var_264 = 16;
    pri = fun_0770(var_256, var_248)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4584242208198098944, 4671014566350553088, 4663286099118915584, -7767209653950836110
    var_288 = 48;
    pri = fun_0680(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C 4633641066610819072, 4670989827338928128, 4663198138188693504, -3298867873700702363
    var_312 = 48;
    pri = fun_0680(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 10;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 1;
    var_344 = -1;
    var_352 = -1;
    var_360 = 0;
    var_368 = 8802641224559852288;
    var_376 = 40;
    pri = fun_82F8(var_368, var_360, var_352, var_344, var_336)
    var_384 = 5;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 3;
    var_408 = 3;
    var_416 = -4242657469657360075;
    var_424 = 24;
    pri = fun_1250(var_416, var_408, var_400)
    var_432 = 1;
    var_440 = 1;
    var_448 = -1;
    var_456 = -1;
    var_464 = 0;
    var_472 = 9;
    var_480 = -4242657469657360075;
    var_488 = 56;
    pri = fun_4080(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_496 = 16;
    pri = fun_22C0(var_488, var_480)
    var_504 = 0;
    var_512 = 1;
    var_520 = 100;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 4611686018427387904;
    var_544 = 32;
    pri = fun_2328(var_536, var_528, var_520, var_512)
    var_552 = 0;
    var_560 = 4631037423076245504;
    var_568 = 0;
    OP_PUSH5_C 4670955368644513628, 4644500195290455736, 4663736063257466634, 4670955679256548475, 4643871802404949197
    var_576 = 4663807564498620908;
    var_584 = 1;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    pri = fun_2230()
    var_600 = 33784;
    var_608 = 8;
    var_616 = 16;
    pri = fun_0280(var_608, var_600)
    var_624 = 0;
    pri = fun_0350()
    var_632 = 0;
    var_640 = 30;
    var_648 = 200;
    pri = float(var_648)
    var_656 = pri;
    var_664 = 4611686018427387904;
    var_672 = 32;
    pri = fun_2328(var_664, var_656, var_648, var_640)
    var_680 = 30;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 0;
    var_704 = 10;
    var_712 = 50;
    pri = float(var_712)
    var_720 = pri;
    var_728 = 4611686018427387904;
    var_736 = 32;
    pri = fun_2328(var_728, var_720, var_712, var_704)
    var_744 = 10;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 0;
    var_768 = 30;
    var_776 = 200;
    pri = float(var_776)
    var_784 = pri;
    var_792 = 4613937818241073152;
    var_800 = 32;
    pri = fun_2328(var_792, var_784, var_776, var_768)
    var_808 = 30;
    var_816 = 8;
    pri = fun_0060(var_808)
    var_824 = 0;
    var_832 = 4631037423076245504;
    var_840 = 3;
    OP_PUSH5_C 4670955154239746212, 4639462672816637215, 4663686552248867881, 4670955495088350822, 4640150879134694769
    var_848 = 4663765277281416643;
    var_856 = 240;
    pri = EvCameraMove(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = 180;
    var_872 = 8;
    pri = fun_0060(var_864)
    var_880 = 33832;
    pri = SoundPostEvent(var_880)
    var_888 = 1;
    var_896 = 8;
    pri = fun_0060(var_888)
    var_904 = 33960;
    pri = SoundPostEvent(var_904)
    var_912 = 0;
    pri = fun_2230()
    var_920 = 8802641224559852288;
    var_928 = 8;
    pri = fun_87E0(var_920)
    var_936 = 30;
    var_944 = 8;
    pri = fun_0060(var_936)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_952 = 3;
    var_960 = 1;
    var_968 = 32;
    pri = fun_2380(var_960, var_952, var_944, var_936)
    var_976 = 0;
    var_984 = 4629418941960159232;
    var_992 = 0;
    OP_PUSH5_C 4670987864710672548, 4641937541549365658, 4663821231428154163, 4670992457920497582, 4642163073374455071
    var_1000 = 4663900275319074980;
    var_1008 = 1;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 0;
    pri = fun_2230()
    var_1024 = 0;
    var_1032 = 4629418941960159232;
    var_1040 = 2;
    OP_PUSH5_C 4670990349606951322, 4642059631320513905, 4663863991435358372, 4670994945565555425, 4642285163145603318
    var_1048 = 4663943035326279188;
    var_1056 = 240;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 30;
    var_1072 = 8;
    pri = fun_0060(var_1064)
    var_1080 = 1;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 9;
    var_1112 = -4242657469657360075;
    var_1120 = 40;
    pri = fun_63B8(var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1128 = 30;
    var_1136 = 8;
    pri = fun_0060(var_1128)
    var_1144 = 1;
    var_1152 = -1;
    var_1160 = -1;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 1;
    var_1192 = -4242657469657360075;
    var_1200 = 56;
    pri = fun_24A0(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 30;
    var_1216 = 8;
    pri = fun_0060(var_1208)
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 101;
    var_1256 = -1;
    OP_PUSH2_C 4682047221774542308, -2133533246548165864
    var_1264 = 56;
    pri = fun_1E28(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = -4242657469657360075;
    var_1280 = 8;
    pri = fun_0B18(var_1272)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_2038(var_1288)
    var_1304 = 0;
    pri = fun_20F8()
    var_1312 = 0;
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = 0;
    OP_PUSH2_C -2133533246548165864, 8802641224559852288
    var_1344 = 48;
    pri = fun_08E8(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1352 = 8802641224559852288;
    var_1360 = 8;
    pri = fun_12B8(var_1352)
    var_1368 = -4242657469657360075;
    var_1376 = 8;
    pri = fun_12B8(var_1368)
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH2_C -2133533246548165864, -4242657469657360075
    var_1416 = 48;
    pri = fun_08E8(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1424 = 0;
    var_1432 = 4631952216750555136;
    var_1440 = 0;
    OP_PUSH5_C 4671138802918154568, 4640081214077958881, 4663761648893044982, 4671158148825245286, 4639863422814729011
    var_1448 = 4663785948100018831;
    var_1456 = 1;
    pri = EvCameraMove(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = 25;
    var_1472 = 8;
    pri = fun_0060(var_1464)
    var_1480 = 1;
    var_1488 = 0;
    var_1496 = 100;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = 0;
    pri = float(var_1512)
    var_1520 = pri;
    var_1528 = 0;
    OP_PUSH4_C 4671068717298221056, 4663637942839803904, 4611686018427387904, -2133533246548165864
    var_1536 = 72;
    pri = fun_0820(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1544 = 30;
    var_1552 = 8;
    pri = fun_0060(var_1544)
    var_1560 = 1;
    var_1568 = 0;
    var_1576 = 33552;
    var_1584 = 8;
    var_1592 = 32;
    pri = fun_02E0(var_1584, var_1576, var_1568, var_1560)
    var_1600 = 0;
    pri = fun_0350()
    var_1608 = 8802641224559852288;
    var_1616 = 8;
    pri = fun_0940(var_1608)
    var_1624 = -4242657469657360075;
    var_1632 = 8;
    pri = fun_0940(var_1624)
    var_1640 = -2133533246548165864;
    var_1648 = 8;
    pri = fun_0940(var_1640)
    var_1656 = 1;
    var_1664 = -7767209653950836110;
    var_1672 = 16;
    pri = fun_0770(var_1664, var_1656)
    var_1680 = 1;
    var_1688 = -3298867873700702363;
    var_1696 = 16;
    pri = fun_0770(var_1688, var_1680)
    var_1704 = 1;
    var_1712 = 1;
    OP_PUSH4_C 4621819117588971520, 4670891421048242176, 4663487309746798592, 8802641224559852288
    var_1720 = 48;
    pri = fun_0680(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1728 = 1;
    var_1736 = 1;
    var_1744 = -4598738169498697728;
    var_1752 = 18790;
    pri = float(var_1752)
    var_1760 = pri;
    OP_PUSH2_C 4663596821104925082, -4242657469657360075
    var_1768 = 48;
    pri = fun_0680(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1776 = 1;
    var_1784 = 1;
    OP_PUSH4_C 4640537203540230144, 4670928529565679616, 4663560977025859584, -2133533246548165864
    var_1792 = 48;
    pri = fun_0680(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1800 = 15;
    var_1808 = 8;
    pri = fun_0060(var_1800)
    var_1816 = 1;
    var_1824 = 1;
    var_1832 = -1;
    OP_PUSH2_C -2133533246548165864, 8802641224559852288
    var_1840 = 40;
    pri = fun_1070(var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1848 = 1;
    var_1856 = 1;
    var_1864 = -1;
    OP_PUSH2_C -2133533246548165864, -4242657469657360075
    var_1872 = 40;
    pri = fun_1070(var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1880 = 15;
    var_1888 = 8;
    pri = fun_0060(var_1880)
    var_1896 = 0;
    var_1904 = 4632247765476101325;
    var_1912 = 0;
    OP_PUSH5_C 4670917375020215828, 4640727902836951613, 4663588640738414428, 4670968843159512023, 4645707019253102674
    var_1920 = 4663139831087072543;
    var_1928 = 1;
    pri = EvCameraMove(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1936 = 0;
    pri = fun_2230()
    var_1944 = 0;
    var_1952 = 4632247765476101325;
    var_1960 = 2;
    OP_PUSH5_C 4670911968171786240, 4640727902836951613, 4663580174498880553, 4670945343847247380, 4645700861987987128
    var_1968 = 4663104591739402322;
    var_1976 = 360;
    pri = EvCameraMove(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1984 = 34112;
    var_1992 = 8;
    var_2000 = 16;
    pri = fun_0280(var_1992, var_1984)
    var_2008 = 0;
    pri = fun_0350()
    var_2016 = 1;
    var_2024 = 1;
    var_2032 = -1;
    OP_PUSH2_C -4242657469657360075, -2133533246548165864
    var_2040 = 40;
    pri = fun_1070(var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C -5930783365344875709, -4242657469657360075
    var_2088 = 56;
    pri = fun_1E28(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_2038(var_2096)
    var_2112 = 0;
    pri = fun_20F8()
    var_2120 = 0;
    var_2128 = 4631192234313436365;
    var_2136 = 0;
    OP_PUSH5_C 4670921643874110669, 4641037173467612447, 4663497139380750909, 4670936382827481006, 4641191281017361531
    var_2144 = 4663248858660082811;
    var_2152 = 1;
    pri = EvCameraMove(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2160 = 0;
    pri = fun_2230()
    var_2168 = 0;
    var_2176 = 4631192234313436365;
    var_2184 = 2;
    OP_PUSH5_C 4670916913225332163, 4641037173467612447, 4663492642378193306, 4670931652178702500, 4641191281017361531
    var_2192 = 4663244361657525207;
    var_2200 = 360;
    pri = EvCameraMove(var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128)
    var_2208 = 0;
    var_2216 = 2;
    var_2224 = -2133533246548165864;
    var_2232 = 24;
    pri = fun_80E8(var_2224, var_2216, var_2208)
    var_2240 = 0;
    var_2248 = 3;
    var_2256 = 0;
    var_2264 = 100;
    var_2272 = -1;
    OP_PUSH2_C 4682050520309426941, -2133533246548165864
    var_2280 = 56;
    pri = fun_1E28(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2288 = 1;
    var_2296 = 8;
    pri = fun_2038(var_2288)
    var_2304 = 0;
    pri = fun_20F8()
    var_2312 = 6;
    var_2320 = 6;
    var_2328 = -4242657469657360075;
    var_2336 = 24;
    pri = fun_1250(var_2328, var_2320, var_2312)
    var_2344 = 1;
    var_2352 = 1;
    var_2360 = -1;
    var_2368 = -1;
    var_2376 = 0;
    var_2384 = 2;
    var_2392 = -4242657469657360075;
    var_2400 = 56;
    pri = fun_4080(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2408 = 0;
    var_2416 = 3;
    var_2424 = 0;
    var_2432 = 100;
    var_2440 = -1;
    OP_PUSH2_C -5930782265833247498, -4242657469657360075
    var_2448 = 56;
    pri = fun_1E28(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2456 = 1;
    var_2464 = 8;
    pri = fun_2038(var_2456)
    var_2472 = 0;
    pri = fun_20F8()
    var_2480 = 0;
    var_2488 = 4629587826946185626;
    var_2496 = 0;
    OP_PUSH5_C 4670906467864868291, 4642340402609782784, 4663546562428419441, 4670851462046909727, 4641921004894483907
    var_2504 = 4663545177043768443;
    var_2512 = 1;
    pri = EvCameraMove(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2520 = 0;
    pri = fun_2230()
    var_2528 = 1;
    var_2536 = 3;
    var_2544 = 0;
    var_2552 = 2;
    var_2560 = -4242657469657360075;
    var_2568 = 40;
    pri = fun_63B8(var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2576 = 0;
    var_2584 = 0;
    var_2592 = -2133533246548165864;
    var_2600 = 24;
    pri = fun_80E8(var_2592, var_2584, var_2576)
    var_2608 = 5;
    var_2616 = -2133533246548165864;
    var_2624 = 16;
    pri = fun_1160(var_2616, var_2608)
    var_2632 = 45;
    var_2640 = 8;
    pri = fun_0060(var_2632)
    var_2648 = -2133533246548165864;
    var_2656 = 8;
    pri = fun_11A0(var_2648)
    var_2664 = -1;
    var_2672 = -2133533246548165864;
    var_2680 = 16;
    pri = fun_10C8(var_2672, var_2664)
    var_2688 = 0;
    var_2696 = 5;
    var_2704 = -4620693217682128896;
    var_2712 = -1;
    pri = float(var_2712)
    var_2720 = pri;
    var_2728 = -2133533246548165864;
    var_2736 = 40;
    pri = fun_1108(var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2744 = 0;
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = -30;
    pri = float(var_2768)
    var_2776 = pri;
    var_2784 = -2133533246548165864;
    var_2792 = 40;
    pri = fun_0898(var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2800 = 0;
    var_2808 = 0;
    var_2816 = 0;
    var_2824 = -20;
    pri = float(var_2824)
    var_2832 = pri;
    var_2840 = -4242657469657360075;
    var_2848 = 40;
    pri = fun_0898(var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2856 = 1;
    var_2864 = 1;
    var_2872 = -1;
    OP_PUSH2_C -3298867873700702363, -4242657469657360075
    var_2880 = 40;
    pri = fun_1070(var_2872, var_2864, var_2856, var_2848, var_2840)
    var_2888 = 0;
    var_2896 = 0;
    var_2904 = 0;
    var_2912 = -10;
    pri = float(var_2912)
    var_2920 = pri;
    var_2928 = 8802641224559852288;
    var_2936 = 40;
    pri = fun_0898(var_2928, var_2920, var_2912, var_2904, var_2896)
    var_2944 = 1;
    var_2952 = 1;
    var_2960 = -1;
    OP_PUSH2_C -3298867873700702363, 8802641224559852288
    var_2968 = 40;
    pri = fun_1070(var_2960, var_2952, var_2944, var_2936, var_2928)
    var_2976 = 0;
    var_2984 = 4629587826946185626;
    var_2992 = 3;
    OP_PUSH5_C 4670894703090451087, 4642287626051649536, 4663537106628420567, 4670853853484700140, 4643352305151057592
    var_3000 = 4663680087120496558;
    var_3008 = 60;
    pri = EvCameraMove(var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_3016 = 60;
    var_3024 = 8;
    pri = fun_0060(var_3016)
    var_3032 = -2133533246548165864;
    var_3040 = 8;
    pri = fun_0940(var_3032)
    var_3048 = -4242657469657360075;
    var_3056 = 8;
    pri = fun_0940(var_3048)
    var_3064 = 8802641224559852288;
    var_3072 = 8;
    pri = fun_0940(var_3064)
    var_3080 = 1;
    var_3088 = 0;
    var_3096 = 34160;
    var_3104 = 1;
    var_3112 = 32;
    pri = fun_02E0(var_3104, var_3096, var_3088, var_3080)
    var_3120 = 0;
    pri = fun_0350()
    var_3128 = 0;
    var_3136 = 4631065570573916570;
    var_3144 = 0;
    OP_PUSH5_C 4670973628783871918, 4640553388351391007, 4663266296914499338, 4670923199683063972, 4641755638345666396
    var_3152 = 4663346572258443264;
    var_3160 = 1;
    pri = EvCameraMove(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3168 = 0;
    pri = fun_2230()
    var_3176 = 34208;
    var_3184 = 8;
    var_3192 = 16;
    pri = fun_0280(var_3184, var_3176)
    var_3200 = 0;
    var_3208 = 4631065570573916570;
    var_3216 = 2;
    OP_PUSH5_C 4670979764058754908, 4640553388351391007, 4663300304809146450, 4670940049698759639, 4641754582814503731
    var_3224 = 4663448299074245100;
    var_3232 = 360;
    pri = EvCameraMove(var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160)
    var_3240 = 0;
    var_3248 = 0;
    var_3256 = 0;
    var_3264 = 831;
    pri = SoundPlayPokeVoice(var_3264, var_3256, var_3248, var_3240)
    var_3272 = 0;
    var_3280 = 3;
    var_3288 = 0;
    var_3296 = 100;
    var_3304 = -1;
    OP_PUSH2_C -2639337585097210305, -3298867873700702363
    var_3312 = 56;
    pri = fun_1E28(var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256)
    var_3320 = 1;
    var_3328 = 8;
    pri = fun_2038(var_3320)
    var_3336 = 0;
    pri = fun_20F8()
    var_3344 = -4242657469657360075;
    var_3352 = 8;
    pri = fun_11A0(var_3344)
    var_3360 = 2;
    var_3368 = -4242657469657360075;
    var_3376 = 16;
    pri = fun_11D8(var_3368, var_3360)
    var_3384 = 8;
    var_3392 = 1;
    var_3400 = 0;
    pri = float(var_3400)
    var_3408 = pri;
    var_3416 = 0;
    pri = float(var_3416)
    var_3424 = pri;
    var_3432 = -2133533246548165864;
    var_3440 = 40;
    pri = fun_1108(var_3432, var_3424, var_3416, var_3408, var_3400)
    var_3448 = 0;
    var_3456 = 3;
    var_3464 = 0;
    var_3472 = 100;
    var_3480 = -1;
    OP_PUSH2_C 4682049420797798730, -2133533246548165864
    var_3488 = 56;
    pri = fun_1E28(var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432)
    var_3496 = 1;
    var_3504 = 8;
    pri = fun_2038(var_3496)
    var_3512 = 0;
    pri = fun_20F8()
    var_3520 = 0;
    var_3528 = 4627167142146473984;
    var_3536 = 0;
    OP_PUSH5_C 4670910346392135270, 4642887519595764122, 4663492433470984028, 4670946569802712351, 4644195322706306007
    var_3544 = 4663342844914025103;
    var_3552 = 1;
    pri = EvCameraMove(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488, var_3480)
    var_3560 = 1;
    var_3568 = 0;
    var_3576 = 10;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_3584 = 40;
    pri = fun_1070(var_3576, var_3568, var_3560, var_3552, var_3544)
    var_3592 = 0;
    var_3600 = 5;
    var_3608 = 0;
    OP_PUSH2_C 4604480259023595111, -4242657469657360075
    var_3616 = 40;
    pri = fun_1108(var_3608, var_3600, var_3592, var_3584, var_3576)
    var_3624 = 1;
    var_3632 = 1;
    var_3640 = -1;
    var_3648 = -1;
    var_3656 = 0;
    var_3664 = 1;
    var_3672 = -4242657469657360075;
    var_3680 = 56;
    pri = fun_4080(var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3688 = 0;
    var_3696 = 3;
    var_3704 = 2;
    var_3712 = 100;
    var_3720 = -1;
    OP_PUSH2_C -5930781166321619287, -4242657469657360075
    var_3728 = 56;
    pri = fun_1E28(var_3720, var_3712, var_3704, var_3696, var_3688, var_3680, var_3672)
    var_3736 = 10;
    var_3744 = 8;
    pri = fun_0060(var_3736)
    var_3752 = 1;
    var_3760 = 1;
    var_3768 = -1;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_3776 = 40;
    pri = fun_1070(var_3768, var_3760, var_3752, var_3744, var_3736)
    var_3784 = 10;
    var_3792 = 8;
    pri = fun_0060(var_3784)
    var_3800 = 0;
    var_3808 = 0;
    var_3816 = 0;
    var_3824 = 15;
    pri = float(var_3824)
    var_3832 = pri;
    var_3840 = 8802641224559852288;
    var_3848 = 40;
    pri = fun_0898(var_3840, var_3832, var_3824, var_3816, var_3808)
    var_3856 = 8802641224559852288;
    var_3864 = 8;
    pri = fun_0940(var_3856)
    var_3872 = 1;
    var_3880 = 8;
    pri = fun_2038(var_3872)
    var_3888 = 0;
    pri = fun_1FA0()
    var_3896 = 0;
    pri = fun_20F8()
    var_3904 = 0;
    var_3912 = 4630038186908922675;
    var_3920 = 0;
    OP_PUSH5_C 4670876561148592783, 4641576198048013353, 4663371498187044946, 4670841558195922534, 4642086019599580529
    var_3928 = 4663202129415902331;
    var_3936 = 1;
    pri = EvCameraMove(var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3944 = 0;
    pri = fun_2230()
    var_3952 = 0;
    var_3960 = 4630038186908922675;
    var_3968 = 2;
    OP_PUSH5_C 4670870142749465641, 4641576198048013353, 4663396061276809462, 4670831220037842371, 4642084964068417864
    var_3976 = 4663240997151944212;
    var_3984 = 480;
    pri = EvCameraMove(var_3984, var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3992 = 1;
    var_4000 = 3;
    var_4008 = 0;
    var_4016 = 1;
    var_4024 = -4242657469657360075;
    var_4032 = 40;
    pri = fun_63B8(var_4024, var_4016, var_4008, var_4000, var_3992)
    var_4040 = 0;
    var_4048 = 0;
    var_4056 = 0;
    var_4064 = 0;
    OP_PUSH2_C -4242657469657360075, -2133533246548165864
    var_4072 = 48;
    pri = fun_08E8(var_4064, var_4056, var_4048, var_4040, var_4032, var_4024)
    var_4080 = 1;
    var_4088 = 1;
    var_4096 = 15;
    OP_PUSH2_C -4242657469657360075, -2133533246548165864
    var_4104 = 40;
    pri = fun_1070(var_4096, var_4088, var_4080, var_4072, var_4064)
    var_4112 = 6;
    var_4120 = 6;
    var_4128 = -2133533246548165864;
    var_4136 = 24;
    pri = fun_1250(var_4128, var_4120, var_4112)
    var_4144 = 0;
    var_4152 = 5;
    var_4160 = -4624296097384025292;
    var_4168 = 0;
    pri = float(var_4168)
    var_4176 = pri;
    var_4184 = -2133533246548165864;
    var_4192 = 40;
    pri = fun_1108(var_4184, var_4176, var_4168, var_4160, var_4152)
    var_4200 = 0;
    var_4208 = 3;
    var_4216 = 2;
    var_4224 = 100;
    var_4232 = -1;
    OP_PUSH2_C 4682043923239657675, -2133533246548165864
    var_4240 = 56;
    pri = fun_1E28(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4248 = 10;
    var_4256 = 8;
    pri = fun_0060(var_4248)
    var_4264 = -4242657469657360075;
    var_4272 = 8;
    pri = fun_12B8(var_4264)
    var_4280 = 1;
    var_4288 = 1;
    var_4296 = 20;
    OP_PUSH2_C -2133533246548165864, -4242657469657360075
    var_4304 = 40;
    pri = fun_1070(var_4296, var_4288, var_4280, var_4272, var_4264)
    var_4312 = 1;
    var_4320 = 1;
    var_4328 = 20;
    OP_PUSH2_C -2133533246548165864, 8802641224559852288
    var_4336 = 40;
    pri = fun_1070(var_4328, var_4320, var_4312, var_4304, var_4296)
    var_4344 = 1;
    var_4352 = 8;
    pri = fun_2038(var_4344)
    var_4360 = 0;
    pri = fun_1FA0()
    var_4368 = 0;
    pri = fun_20F8()
    var_4376 = -2133533246548165864;
    var_4384 = 8;
    pri = fun_0940(var_4376)
    var_4392 = 0;
    var_4400 = 3;
    var_4408 = 0;
    var_4416 = 100;
    var_4424 = -1;
    OP_PUSH2_C -5930780066809991076, -4242657469657360075
    var_4432 = 56;
    pri = fun_1E28(var_4424, var_4416, var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4440 = 1;
    var_4448 = 8;
    pri = fun_2038(var_4440)
    var_4456 = 0;
    pri = fun_20F8()
    var_4464 = 6;
    var_4472 = 8;
    var_4480 = -2133533246548165864;
    var_4488 = 24;
    pri = fun_1250(var_4480, var_4472, var_4464)
    var_4496 = 1;
    var_4504 = 1;
    var_4512 = -1;
    var_4520 = -1;
    var_4528 = 0;
    var_4536 = 6;
    var_4544 = -2133533246548165864;
    var_4552 = 56;
    pri = fun_4080(var_4544, var_4536, var_4528, var_4520, var_4512, var_4504, var_4496)
    var_4560 = 0;
    var_4568 = 0;
    var_4576 = 0;
    var_4584 = 0;
    OP_PUSH2_C -2133533246548165864, 8802641224559852288
    var_4592 = 48;
    pri = fun_08E8(var_4584, var_4576, var_4568, var_4560, var_4552, var_4544)
    var_4600 = 0;
    var_4608 = 3;
    var_4616 = 0;
    var_4624 = 100;
    var_4632 = -1;
    OP_PUSH2_C 4682042823728029464, -2133533246548165864
    var_4640 = 56;
    pri = fun_1E28(var_4632, var_4624, var_4616, var_4608, var_4600, var_4592, var_4584)
    var_4648 = 1;
    var_4656 = 8;
    pri = fun_2038(var_4648)
    var_4664 = 8802641224559852288;
    var_4672 = 8;
    pri = fun_0940(var_4664)
    var_4680 = -2133533246548165864;
    var_4688 = 8;
    pri = fun_12B8(var_4680)
    var_4696 = 1;
    var_4704 = 3;
    var_4712 = 0;
    var_4720 = 6;
    var_4728 = -2133533246548165864;
    var_4736 = 40;
    pri = fun_63B8(var_4728, var_4720, var_4712, var_4704, var_4696)
    var_4744 = 0;
    var_4752 = 3;
    var_4760 = 0;
    var_4768 = 100;
    var_4776 = -1;
    OP_PUSH2_C 4682046122262914097, -2133533246548165864
    var_4784 = 56;
    pri = fun_1E28(var_4776, var_4768, var_4760, var_4752, var_4744, var_4736, var_4728)
    var_4792 = 1;
    var_4800 = 8;
    pri = fun_2038(var_4792)
    var_4808 = 0;
    var_4816 = 3;
    var_4824 = 0;
    var_4832 = 100;
    var_4840 = -1;
    OP_PUSH2_C 4682045022751285886, -2133533246548165864
    var_4848 = 56;
    pri = fun_1E28(var_4840, var_4832, var_4824, var_4816, var_4808, var_4800, var_4792)
    var_4856 = 1;
    var_4864 = 8;
    pri = fun_2038(var_4856)
    var_4872 = 0;
    pri = fun_20F8()
    var_4880 = 0;
    var_4888 = 0;
    var_4896 = 0;
    var_4904 = 0;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_4912 = 48;
    pri = fun_08E8(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864)
    var_4920 = -1;
    var_4928 = -4242657469657360075;
    var_4936 = 16;
    pri = fun_10C8(var_4928, var_4920)
    var_4944 = 1;
    var_4952 = 1;
    var_4960 = -1;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_4968 = 40;
    pri = fun_1070(var_4960, var_4952, var_4944, var_4936, var_4928)
    var_4976 = 15;
    var_4984 = 8;
    pri = fun_0060(var_4976)
    var_4992 = 0;
    var_5000 = 5;
    OP_PUSH3_C -4624296097384025292, -4620693217682128896, -2133533246548165864
    var_5008 = 40;
    pri = fun_1108(var_5000, var_4992, var_4984, var_4976, var_4968)
    var_5016 = 1;
    var_5024 = 1;
    var_5032 = 60;
    OP_PUSH2_C 8802641224559852288, -2133533246548165864
    var_5040 = 40;
    pri = fun_1070(var_5032, var_5024, var_5016, var_5008, var_5000)
    var_5048 = -4242657469657360075;
    var_5056 = 8;
    pri = fun_0940(var_5048)
    var_5064 = 2;
    var_5072 = 2;
    var_5080 = -4242657469657360075;
    var_5088 = 24;
    pri = fun_1250(var_5080, var_5072, var_5064)
    var_5096 = 1;
    var_5104 = 1;
    var_5112 = -1;
    var_5120 = -1;
    var_5128 = 0;
    var_5136 = 8;
    var_5144 = -4242657469657360075;
    var_5152 = 56;
    pri = fun_4080(var_5144, var_5136, var_5128, var_5120, var_5112, var_5104, var_5096)
    var_5160 = 10;
    var_5168 = 8;
    pri = fun_0060(var_5160)
    var_5176 = 0;
    var_5184 = 3;
    var_5192 = 0;
    var_5200 = 100;
    var_5208 = -1;
    OP_PUSH2_C -5930778967298362865, -4242657469657360075
    var_5216 = 56;
    pri = fun_1E28(var_5208, var_5200, var_5192, var_5184, var_5176, var_5168, var_5160)
    var_5224 = 1;
    var_5232 = 8;
    pri = fun_2038(var_5224)
    var_5240 = 1;
    var_5248 = 3;
    var_5256 = 0;
    var_5264 = 8;
    var_5272 = -4242657469657360075;
    var_5280 = 40;
    pri = fun_63B8(var_5272, var_5264, var_5256, var_5248, var_5240)
    var_5288 = 0;
    var_5296 = 3;
    var_5304 = 0;
    var_5312 = 100;
    var_5320 = -1;
    OP_PUSH2_C -5930777867786734654, -4242657469657360075
    var_5328 = 56;
    pri = fun_1E28(var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272)
    var_5336 = 1;
    var_5344 = 8;
    pri = fun_2038(var_5336)
    var_5352 = 0;
    pri = fun_20F8()
    var_5360 = -4242657469657360075;
    var_5368 = 8;
    pri = fun_0B18(var_5360)
    var_5376 = 1;
    var_5384 = 0;
    var_5392 = 33552;
    var_5400 = 8;
    var_5408 = 32;
    pri = fun_02E0(var_5400, var_5392, var_5384, var_5376)
    var_5416 = 0;
    pri = fun_0350()
    var_5424 = 3;
    var_5432 = 0;
    pri = EvCameraEnd(var_5432, var_5424)
    var_5440 = 0;
    var_5448 = 8802641224559852288;
    var_5456 = 16;
    pri = fun_07A8(var_5448, var_5440)
    var_5464 = 0;
    var_5472 = -4242657469657360075;
    var_5480 = 16;
    pri = fun_07A8(var_5472, var_5464)
    var_5488 = 0;
    var_5496 = -2133533246548165864;
    var_5504 = 16;
    pri = fun_07A8(var_5496, var_5488)
    var_5512 = -1;
    var_5520 = -4242657469657360075;
    var_5528 = 16;
    pri = fun_10C8(var_5520, var_5512)
    var_5536 = -1;
    var_5544 = -2133533246548165864;
    var_5552 = 16;
    pri = fun_10C8(var_5544, var_5536)
    var_5560 = -1;
    var_5568 = 8802641224559852288;
    var_5576 = 16;
    pri = fun_10C8(var_5568, var_5560)
    var_5584 = 1;
    var_5592 = 8;
    pri = fun_0060(var_5584)
    var_5600 = -4242657469657360075;
    var_5608 = 8;
    pri = fun_12B8(var_5600)
    var_5616 = -2133533246548165864;
    var_5624 = 8;
    pri = fun_12B8(var_5616)
    var_5632 = 8802641224559852288;
    var_5640 = 8;
    pri = fun_12B8(var_5632)
    var_5648 = 1;
    var_5656 = 8;
    pri = fun_0060(var_5648)
    var_5664 = 8;
    var_5672 = 1;
    var_5680 = 0;
    pri = float(var_5680)
    var_5688 = pri;
    var_5696 = 0;
    pri = float(var_5696)
    var_5704 = pri;
    var_5712 = -4242657469657360075;
    var_5720 = 40;
    pri = fun_1108(var_5712, var_5704, var_5696, var_5688, var_5680)
    var_5728 = 8;
    var_5736 = 1;
    var_5744 = 0;
    pri = float(var_5744)
    var_5752 = pri;
    var_5760 = 0;
    pri = float(var_5760)
    var_5768 = pri;
    var_5776 = -2133533246548165864;
    var_5784 = 40;
    pri = fun_1108(var_5776, var_5768, var_5760, var_5752, var_5744)
    var_5792 = 8;
    var_5800 = 1;
    var_5808 = 0;
    pri = float(var_5808)
    var_5816 = pri;
    var_5824 = 0;
    pri = float(var_5824)
    var_5832 = pri;
    var_5840 = 8802641224559852288;
    var_5848 = 40;
    pri = fun_1108(var_5840, var_5832, var_5824, var_5816, var_5808)
    var_5856 = 1;
    var_5864 = 8;
    pri = fun_0060(var_5856)
    var_5872 = 0;
    var_5880 = 0;
    var_5888 = 0;
    var_5896 = 0;
    var_5904 = 0;
    OP_PUSH4_C 4677703720216035328, 4671147057501700096, 115789295882128190, -7332432130569991359
    var_5912 = 72;
    pri = fun_0408(var_5904, var_5896, var_5888, var_5880, var_5872, var_5864, var_5856, var_5848, var_5840)
    pri = EvCameraStart()
    var_5920 = 15;
    var_5928 = 8;
    pri = fun_0060(var_5920)
    var_5936 = 1;
    var_5944 = -1655053127185566619;
    var_5952 = 16;
    pri = fun_0770(var_5944, var_5936)
    var_5960 = 1;
    var_5968 = -2409953949732425464;
    var_5976 = 16;
    pri = fun_0770(var_5968, var_5960)
    var_5984 = 1;
    var_5992 = 7750031198002937679;
    var_6000 = 16;
    pri = fun_0770(var_5992, var_5984)
    var_6008 = 0;
    var_6016 = -5634459638772040499;
    var_6024 = 16;
    pri = fun_0770(var_6016, var_6008)
    var_6032 = 0;
    var_6040 = 4631952216750555136;
    var_6048 = 0;
    OP_PUSH5_C 4677676031764468859, 4654344694639980708, 4671178915851114906, 4677754158937570017, 4655159784599883612
    var_6056 = 4671165213187453747;
    var_6064 = 1;
    pri = EvCameraMove(var_6064, var_6056, var_6048, var_6040, var_6032, var_6024, var_6016, var_6008, var_6000, var_5992)
    var_6072 = 15;
    var_6080 = 8;
    pri = fun_0060(var_6072)
    var_6088 = 1;
    var_6096 = 1;
    var_6104 = -90;
    pri = float(var_6104)
    var_6112 = pri;
    var_6120 = 54400;
    pri = float(var_6120)
    var_6128 = pri;
    var_6136 = 19870;
    pri = float(var_6136)
    var_6144 = pri;
    var_6152 = -1655053127185566619;
    var_6160 = 48;
    pri = fun_0680(var_6152, var_6144, var_6136, var_6128, var_6120, var_6112)
    var_6168 = 1;
    var_6176 = 1;
    OP_PUSH4_C -4587338432941916160, 4677703170460221440, 4671222648926109696, -2409953949732425464
    var_6184 = 48;
    pri = fun_0680(var_6176, var_6168, var_6160, var_6152, var_6144, var_6136)
    var_6192 = 1;
    var_6200 = 1;
    var_6208 = 54400;
    pri = float(var_6208)
    var_6216 = pri;
    var_6224 = 1480;
    pri = float(var_6224)
    var_6232 = pri;
    var_6240 = 19870;
    pri = float(var_6240)
    var_6248 = pri;
    var_6256 = -1655053127185566619;
    var_6264 = 48;
    pri = fun_06D8(var_6256, var_6248, var_6240, var_6232, var_6224, var_6216)
    var_6272 = 1;
    var_6280 = -90;
    pri = float(var_6280)
    var_6288 = pri;
    var_6296 = -1655053127185566619;
    var_6304 = 24;
    pri = fun_0730(var_6296, var_6288, var_6280)
    var_6312 = 1;
    var_6320 = 1;
    var_6328 = 54354;
    pri = float(var_6328)
    var_6336 = pri;
    var_6344 = 1480;
    pri = float(var_6344)
    var_6352 = pri;
    OP_PUSH2_C 4671222648926109696, -2409953949732425464
    var_6360 = 48;
    pri = fun_06D8(var_6352, var_6344, var_6336, var_6328, var_6320, var_6312)
    var_6368 = 1;
    var_6376 = -90;
    pri = float(var_6376)
    var_6384 = pri;
    var_6392 = -2409953949732425464;
    var_6400 = 24;
    pri = fun_0730(var_6392, var_6384, var_6376)
    var_6408 = 1;
    var_6416 = 90;
    pri = float(var_6416)
    var_6424 = pri;
    var_6432 = 8802641224559852288;
    var_6440 = 24;
    pri = fun_0730(var_6432, var_6424, var_6416)
    var_6448 = 15;
    var_6456 = 8;
    pri = fun_0060(var_6448)
    var_6464 = 34256;
    var_6472 = 8;
    pri = fun_2128(var_6464)
    var_6480 = 0;
    pri = fun_2160()
    var_6488 = 34112;
    var_6496 = 8;
    var_6504 = 16;
    pri = fun_0280(var_6496, var_6488)
    var_6512 = 0;
    pri = fun_0350()
    var_6520 = 15;
    var_6528 = 8;
    pri = fun_0060(var_6520)
    var_6536 = 1;
    var_6544 = 0;
    var_6552 = 4641240890982006784;
    var_6560 = 0;
    var_6568 = 0;
    var_6576 = 54354;
    pri = float(var_6576)
    var_6584 = pri;
    var_6592 = 20450;
    pri = float(var_6592)
    var_6600 = pri;
    OP_PUSH2_C 4607182418800017408, -2409953949732425464
    var_6608 = 72;
    pri = fun_0820(var_6600, var_6592, var_6584, var_6576, var_6568, var_6560, var_6552, var_6544, var_6536)
    var_6616 = 1;
    var_6624 = -1;
    var_6632 = -1;
    var_6640 = 3;
    var_6648 = 0;
    var_6656 = 0;
    var_6664 = -1655053127185566619;
    var_6672 = 56;
    pri = fun_24A0(var_6664, var_6656, var_6648, var_6640, var_6632, var_6624, var_6616)
    var_6680 = 0;
    var_6688 = 3;
    var_6696 = 0;
    var_6704 = 100;
    var_6712 = -1;
    OP_PUSH2_C -5498919016819291862, -1655053127185566619
    var_6720 = 56;
    pri = fun_1ED8(var_6712, var_6704, var_6696, var_6688, var_6680, var_6672, var_6664)
    var_6728 = 1;
    var_6736 = 8;
    pri = fun_2038(var_6728)
    var_6744 = 0;
    pri = fun_20F8()
    var_6752 = 0;
    pri = fun_2200()
    var_6760 = 1;
    var_6768 = 0;
    var_6776 = 100;
    pri = float(var_6776)
    var_6784 = pri;
    var_6792 = 0;
    var_6800 = 0;
    var_6808 = 54354;
    pri = float(var_6808)
    var_6816 = pri;
    var_6824 = 20450;
    pri = float(var_6824)
    var_6832 = pri;
    OP_PUSH2_C 4611686018427387904, -1655053127185566619
    var_6840 = 72;
    pri = fun_0820(var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784, var_6776, var_6768)
    var_6848 = -1655053127185566619;
    var_6856 = 8;
    pri = fun_0940(var_6848)
    var_6864 = -2409953949732425464;
    var_6872 = 8;
    pri = fun_0940(var_6864)
    var_6880 = 0;
    var_6888 = -2409953949732425464;
    var_6896 = 16;
    pri = fun_0770(var_6888, var_6880)
    OP_PUSH2_C -1655053127185566619, 1820668922388781885
    pri = SetBamiriInfoToChara(var_6896, var_6888)
    var_6904 = 0;
    pri = fun_04A8()
    var_6912 = 3;
    var_6920 = 60;
    pri = EvCameraEnd(var_6920, var_6912)
    pri = 0;
    return pri;
}
// fun_CC00
fun_CC00() {
    pri = 0;
    return pri;
}
// fun_CC18
fun_CC18() {
    var_8 = -5634459638772040499;
    var_16 = 8;
    pri = fun_0628(var_8)
    var_24 = -4242657469657360075;
    var_32 = 8;
    pri = fun_0628(var_24)
    var_40 = -2133533246548165864;
    var_48 = 8;
    pri = fun_0628(var_40)
    var_56 = -7767209653950836110;
    var_64 = 8;
    pri = fun_0628(var_56)
    var_72 = -3298867873700702363;
    var_80 = 8;
    pri = fun_0628(var_72)
    var_88 = -2409953949732425464;
    var_96 = 8;
    pri = fun_0628(var_88)
    var_104 = 180;
    var_112 = 8;
    pri = fun_8DE0(var_104)
    var_120 = 20;
    var_128 = -7620394439834451339;
    pri = WorkSet(var_128, var_120)
    var_136 = -1655053127185566619;
    pri = VanishFlagReset(var_136)
    var_144 = 7750031198002937679;
    pri = VanishFlagReset(var_144)
    var_152 = -5634459638772040499;
    pri = VanishFlagSet(var_152)
    var_160 = -970134989010580305;
    pri = VanishFlagReset(var_160)
    var_168 = 8365856985993810941;
    pri = FlagReset(var_168)
    pri = 0;
    return pri;
}
// fun_CE38
fun_CE38() {
    OP_PUSH2_C -1655053127185566619, 1820668922388781885
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_CE80
fun_CE80() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8F78()
    var_16 = 0;
    pri = fun_8FF0()
    var_24 = 0;
    pri = fun_9080()
    var_32 = 0;
    pri = fun_90B0()
    var_40 = 0;
    pri = fun_CC00()
    var_48 = 0;
    pri = fun_CC18()
    var_56 = 0;
    pri = fun_CE38()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CF70
fun_CF70() {
    var_8 = 0;
    pri = fun_8FF0()
    var_16 = 0;
    pri = fun_CC18()
    pri = 0;
    return pri;
}
