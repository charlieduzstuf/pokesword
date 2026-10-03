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
    pri = arg_0;
    switch (pri) {
// switch_05B0
        case default:
        {
// switch_05B0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_05B0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x1:
        {
// switch_05B0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x2:
        {
// switch_05B0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x3:
        {
// switch_05B0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x4:
        {
// switch_05B0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x5:
        {
// switch_05B0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x6:
        {
// switch_05B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
    }
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_06B0
// lab_06B0
    var_8 = 0;
    pri = fun_07F8()
    OP_JNZ lab_06E8
    OP_JUMP lab_0718
// lab_06E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06B0
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0748
// lab_0748
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0748
    pri = 0;
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
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
// fun_0928
fun_0928() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1268(var_8)
    OP_JZER lab_0A48
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1298(var_24)
    OP_JNZ lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    OP_JUMP lab_0A58
// lab_0A58
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AB8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A58
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B30
fun_0B30() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BF0
    pri = 0;
    return pri;
// lab_0BF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C30
// lab_0C30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1268(var_8)
    OP_JNZ lab_0CB8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CA8
    pri = 0;
    return pri;
// lab_0CB8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D00
    pri = 0;
    return pri;
// lab_0D00
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    pri = 0;
    return pri;
// lab_0D60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C30
    pri = 0;
    return pri;
// lab_0CA8
    OP_JUMP lab_0D00
}
// fun_0DA8
fun_0DA8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DF0
// lab_0DF0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E48
    pri = 0;
    return pri;
// lab_0E48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E88
    pri = 0;
    return pri;
// lab_0E88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DF0
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F58
    pri = 0;
    return pri;
// lab_0F58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1268(var_8)
    OP_JZER lab_1088
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB0
    OP_ZERO_P_S 64
// lab_1088
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10C0
    OP_CONST_S 64, 1
// lab_10C0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10F8
    OP_CONST_S 72, 1
// lab_10F8
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
// lab_0FB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD8
    OP_ZERO_P_S 72
// lab_0FD8
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
    OP_JUMP lab_1198
// lab_1198
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1298
fun_1298() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12C8
fun_12C8() {
    OP_JUMP lab_12E0
// lab_12E0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1370
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1360
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA8(var_8)
    pri = 0;
    return pri;
// lab_1370
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1400
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA8(var_8)
    pri = 0;
    return pri;
// lab_1400
    pri = 0;
    return pri;
// lab_13F0
    OP_JUMP lab_1410
// lab_1410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12E0
    pri = 0;
    return pri;
// lab_1360
    OP_JUMP lab_1410
}
// fun_1450
fun_1450() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BA8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12C8(var_40)
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1510
fun_1510() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1568
fun_1568() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
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
// switch_1BB8
        case default:
        {
// switch_1BB8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C00
// lab_1C00
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
            OP_JNZ lab_1CA8
            var_88 = 0;
            pri = fun_1F18()
// lab_1CA8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BB8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17A0
                case default:
                {
// switch_17A0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1818
// lab_1818
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_17A0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1818
                }
                case 0x1:
                {
// switch_17A0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1818
                }
                case 0x2:
                {
// switch_17A0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1818
                }
                case 0x3:
                {
// switch_17A0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1818
                }
                case 0x4:
                {
// switch_17A0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1818
                }
                case 0x5:
                {
// switch_17A0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1818
                }
            }
        }
        case 0x65:
        {
// switch_1BB8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1958
                case default:
                {
// switch_1958_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19D0
// lab_19D0
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_1958_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19D0
                }
                case 0x1:
                {
// switch_1958_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19D0
                }
                case 0x2:
                {
// switch_1958_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19D0
                }
                case 0x3:
                {
// switch_1958_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19D0
                }
                case 0x4:
                {
// switch_1958_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19D0
                }
                case 0x5:
                {
// switch_1958_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19D0
                }
            }
        }
        case 0x66:
        {
// switch_1BB8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B10
                case default:
                {
// switch_1B10_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B88
// lab_1B88
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_1B10_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B88
                }
                case 0x1:
                {
// switch_1B10_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B88
                }
                case 0x2:
                {
// switch_1B10_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B88
                }
                case 0x3:
                {
// switch_1B10_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B88
                }
                case 0x4:
                {
// switch_1B10_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B88
                }
                case 0x5:
                {
// switch_1B10_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B88
                }
            }
        }
    }
}
// fun_1CC0
fun_1CC0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_15A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D28
fun_1D28() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B70(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DD0
    pri = 1;
    return pri;
// lab_1DD0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E18
fun_1E18() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D28(var_8)
    arg_2 = pri;
// lab_1E68
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EC8
fun_1EC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1CC0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F18
fun_1F18() {
    OP_JUMP lab_1F30
// lab_1F30
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F70
    pri = 0;
    return pri;
// lab_1F70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F30
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    var_8 = 0;
    pri = fun_1F18()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2060
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2060
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    OP_JUMP lab_20B8
// lab_20B8
    pri = EvCameraMoveWait_()
    OP_JZER lab_20F0
    pri = 0;
    return pri;
// lab_20F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20B8
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    pri = arg_6;
    OP_JNZ lab_2168
    var_8 = 0;
    pri = fun_11A8()
// lab_2168
    pri = arg_1;
    switch (pri) {
// switch_36D0
        case default:
        {
// switch_36D0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3A20
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3A20
            pri = 1;
            OP_JUMP lab_3A28
// lab_3A20
            pri = 0;
// lab_3A28
            OP_JZER lab_3B80
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B70(var_24, var_16)
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
            OP_JUMP lab_3BE0
// lab_3B80
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
// lab_3BE0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3C40
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3CA0
// lab_3C40
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3CA0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3CA0
            pri = arg_2;
            OP_JZER lab_3CE0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3CE0
            var_8 = 0;
            pri = fun_11E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_36D0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1:
        {
// switch_36D0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x2:
        {
// switch_36D0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x3:
        {
// switch_36D0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x4:
        {
// switch_36D0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x5:
        {
// switch_36D0_case_0x5
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x6:
        {
// switch_36D0_case_0x6
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x7:
        {
// switch_36D0_case_0x7
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x8:
        {
// switch_36D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x9:
        {
// switch_36D0_case_0x9
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xa:
        {
// switch_36D0_case_0xa
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xb:
        {
// switch_36D0_case_0xb
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xc:
        {
// switch_36D0_case_0xc
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xd:
        {
// switch_36D0_case_0xd
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xe:
        {
// switch_36D0_case_0xe
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0xf:
        {
// switch_36D0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x10:
        {
// switch_36D0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x11:
        {
// switch_36D0_case_0x11
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x12:
        {
// switch_36D0_case_0x12
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x13:
        {
// switch_36D0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x14:
        {
// switch_36D0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x15:
        {
// switch_36D0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x16:
        {
// switch_36D0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x17:
        {
// switch_36D0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x18:
        {
// switch_36D0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x19:
        {
// switch_36D0_case_0x19
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1a:
        {
// switch_36D0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF8(var_48, var_40)
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
            pri = fun_0F08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1b:
        {
// switch_36D0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF8(var_48, var_40)
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
            pri = fun_0F08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1c:
        {
// switch_36D0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AF8(var_48, var_40)
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
            pri = fun_0F08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1d:
        {
// switch_36D0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1e:
        {
// switch_36D0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x1f:
        {
// switch_36D0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x20:
        {
// switch_36D0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x21:
        {
// switch_36D0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x22:
        {
// switch_36D0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x23:
        {
// switch_36D0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x24:
        {
// switch_36D0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x25:
        {
// switch_36D0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x26:
        {
// switch_36D0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x27:
        {
// switch_36D0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x28:
        {
// switch_36D0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
        case 0x29:
        {
// switch_36D0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36D0_case_default
        }
    }
}
// fun_3D10
fun_3D10() {
    pri = arg_5;
    OP_JNZ lab_3D48
    var_8 = 0;
    pri = fun_11A8()
// lab_3D48
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3D98
    OP_CONST_S -8, -1
// lab_3D98
    pri = arg_1;
    switch (pri) {
// switch_5850
        case default:
        {
// switch_5850_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5CF8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B70(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5CF8
            pri = 1;
            OP_JUMP lab_5D00
// lab_5CF8
            pri = 0;
// lab_5D00
            OP_JZER lab_5D50
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5FA8
// lab_5D50
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5DB8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5DB8
            pri = 1;
            OP_JUMP lab_5DC0
// lab_5DB8
            pri = 0;
// lab_5DC0
            OP_JZER lab_5F48
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B70(var_24, var_16)
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
            OP_JUMP lab_5FA8
// lab_5F48
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
// lab_5FA8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6018
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6018
            var_8 = 0;
            pri = fun_11E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5850_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x1:
        {
// switch_5850_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x2:
        {
// switch_5850_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3:
        {
// switch_5850_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x4:
        {
// switch_5850_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x5:
        {
// switch_5850_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0ED0(var_40)
            OP_JUMP switch_5850_case_default
        }
        case 0x6:
        {
// switch_5850_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x7:
        {
// switch_5850_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x8:
        {
// switch_5850_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x9:
        {
// switch_5850_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0xa:
        {
// switch_5850_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0xb:
        {
// switch_5850_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0xc:
        {
// switch_5850_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0xd:
        {
// switch_5850_case_0xd
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0xe:
        {
// switch_5850_case_0xe
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0xf:
        {
// switch_5850_case_0xf
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x10:
        {
// switch_5850_case_0x10
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x11:
        {
// switch_5850_case_0x11
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x12:
        {
// switch_5850_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x13:
        {
// switch_5850_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x14:
        {
// switch_5850_case_0x14
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x15:
        {
// switch_5850_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x16:
        {
// switch_5850_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x17:
        {
// switch_5850_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x18:
        {
// switch_5850_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x19:
        {
// switch_5850_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x1a:
        {
// switch_5850_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x1b:
        {
// switch_5850_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x1c:
        {
// switch_5850_case_0x1c
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x1d:
        {
// switch_5850_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x1e:
        {
// switch_5850_case_0x1e
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x1f:
        {
// switch_5850_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x20:
        {
// switch_5850_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x21:
        {
// switch_5850_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x22:
        {
// switch_5850_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x23:
        {
// switch_5850_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x24:
        {
// switch_5850_case_0x24
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x25:
        {
// switch_5850_case_0x25
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x26:
        {
// switch_5850_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x27:
        {
// switch_5850_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x28:
        {
// switch_5850_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x29:
        {
// switch_5850_case_0x29
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x2a:
        {
// switch_5850_case_0x2a
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x2b:
        {
// switch_5850_case_0x2b
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x2c:
        {
// switch_5850_case_0x2c
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x2d:
        {
// switch_5850_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x2e:
        {
// switch_5850_case_0x2e
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x2f:
        {
// switch_5850_case_0x2f
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x30:
        {
// switch_5850_case_0x30
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x31:
        {
// switch_5850_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x32:
        {
// switch_5850_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x33:
        {
// switch_5850_case_0x33
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x34:
        {
// switch_5850_case_0x34
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x35:
        {
// switch_5850_case_0x35
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x36:
        {
// switch_5850_case_0x36
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x37:
        {
// switch_5850_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x38:
        {
// switch_5850_case_0x38
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
            pri = fun_0F08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5850_case_default
        }
        case 0x39:
        {
// switch_5850_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3a:
        {
// switch_5850_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3b:
        {
// switch_5850_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3c:
        {
// switch_5850_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3d:
        {
// switch_5850_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
        case 0x3e:
        {
// switch_5850_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            OP_JUMP switch_5850_case_default
        }
    }
}
// fun_6048
fun_6048() {
    pri = arg_4;
    OP_JNZ lab_6080
    var_8 = 0;
    pri = fun_11A8()
// lab_6080
    pri = arg_1;
    switch (pri) {
// switch_7458
        case default:
        {
// switch_7458_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1268(var_264)
            OP_JZER lab_7A20
            pri = arg_3;
            switch (pri) {
// switch_79C8
                case default:
                {
// switch_79C8_case_default
                    OP_JUMP lab_7CD8
// lab_7CD8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7D48
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7D48
                    var_8 = 0;
                    pri = fun_11E8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_79C8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_79C8_case_default
                }
                case 0x2:
                {
// switch_79C8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_79C8_case_default
                }
                case 0x3:
                {
// switch_79C8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_79C8_case_default
                }
            }
// lab_7A20
            pri = arg_1;
            OP_JZER lab_7A70
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7A70
            pri = 0;
            OP_JUMP lab_7A78
// lab_7A70
            pri = 1;
// lab_7A78
            OP_JZER lab_7AE0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B70(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7AE0
            pri = 1;
            OP_JUMP lab_7AE8
// lab_7AE0
            pri = 0;
// lab_7AE8
            OP_JZER lab_7B38
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7CD8
// lab_7B38
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7BA0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7CD8
// lab_7BA0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B70(var_24, var_16)
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
// switch_7458_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1:
        {
// switch_7458_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2:
        {
// switch_7458_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3:
        {
// switch_7458_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x4:
        {
// switch_7458_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x5:
        {
// switch_7458_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0ED0(var_40)
            OP_JUMP switch_7458_case_default
        }
        case 0x6:
        {
// switch_7458_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x7:
        {
// switch_7458_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x8:
        {
// switch_7458_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x9:
        {
// switch_7458_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xa:
        {
// switch_7458_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xb:
        {
// switch_7458_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xc:
        {
// switch_7458_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xd:
        {
// switch_7458_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xe:
        {
// switch_7458_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0xf:
        {
// switch_7458_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x10:
        {
// switch_7458_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x11:
        {
// switch_7458_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x12:
        {
// switch_7458_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x13:
        {
// switch_7458_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x14:
        {
// switch_7458_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x15:
        {
// switch_7458_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x16:
        {
// switch_7458_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x17:
        {
// switch_7458_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x18:
        {
// switch_7458_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x19:
        {
// switch_7458_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1a:
        {
// switch_7458_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1b:
        {
// switch_7458_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1c:
        {
// switch_7458_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1d:
        {
// switch_7458_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1e:
        {
// switch_7458_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x1f:
        {
// switch_7458_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x20:
        {
// switch_7458_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x21:
        {
// switch_7458_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x22:
        {
// switch_7458_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x23:
        {
// switch_7458_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x24:
        {
// switch_7458_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x25:
        {
// switch_7458_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x26:
        {
// switch_7458_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x27:
        {
// switch_7458_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x28:
        {
// switch_7458_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x29:
        {
// switch_7458_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2a:
        {
// switch_7458_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2b:
        {
// switch_7458_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2c:
        {
// switch_7458_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2d:
        {
// switch_7458_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2e:
        {
// switch_7458_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x2f:
        {
// switch_7458_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x30:
        {
// switch_7458_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x31:
        {
// switch_7458_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x32:
        {
// switch_7458_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x33:
        {
// switch_7458_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x34:
        {
// switch_7458_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x35:
        {
// switch_7458_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x36:
        {
// switch_7458_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x37:
        {
// switch_7458_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x38:
        {
// switch_7458_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x39:
        {
// switch_7458_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3a:
        {
// switch_7458_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3b:
        {
// switch_7458_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3c:
        {
// switch_7458_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3d:
        {
// switch_7458_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
        case 0x3e:
        {
// switch_7458_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B30(var_24, var_16, var_8)
            OP_JUMP switch_7458_case_default
        }
    }
}
// fun_7D78
fun_7D78() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7F88(var_16, var_8)
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
    OP_JZER lab_7F70
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7F70
    pri = 0;
    return pri;
}
// fun_7F88
fun_7F88() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B30(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7FD0
fun_7FD0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_80D0
        case default:
        {
// switch_80D0_case_default
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
// switch_80D0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_80D0_case_default
        }
        case 0x1:
        {
// switch_80D0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_80D0_case_default
        }
        case 0x2:
        {
// switch_80D0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_80D0_case_default
        }
        case 0x3:
        {
// switch_80D0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_80D0_case_default
        }
    }
}
// fun_8190
fun_8190() {
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
    pri = fun_1E18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1F18()
    pri = 0;
    return pri;
}
// fun_8228
fun_8228() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7FD0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8190(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_82D0
fun_82D0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8320
// lab_8320
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8398
    OP_JUMP lab_83C8
// lab_8398
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8320
// lab_83C8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8450
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6048(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1538(var_56)
// lab_8450
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_84B8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1228(var_24, var_16)
// lab_84B8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1228(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8578
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BA8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0928(var_88, var_80, var_72, var_64, var_56)
// lab_8578
    pri = IsPlayerRideBicycle()
    OP_JZER lab_85B8
    pri = 0;
    return pri;
// lab_85B8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8700
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0AF8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_86C8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8700
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09D0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BA8(var_40)
    pri = 0;
    return pri;
// lab_86C8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1228(var_16, var_8)
}
// fun_8788
fun_8788() {
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
    pri = fun_8228(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1FB0(var_112)
    var_128 = 0;
    pri = fun_2070()
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
    pri = fun_82D0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8900
fun_8900() {
    pri = 30528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8988
// lab_8988
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8B08
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8AF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8A48
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8A48
    pri = 0;
    OP_JUMP lab_8A50
// lab_8B08
    pri = 0;
    return pri;
// lab_8AF8
    OP_JUMP lab_8980
// lab_8980
    OP_INC_P_S -936
// lab_8A48
    pri = 1;
// lab_8A50
    OP_JZER lab_8AC8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8AC0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8AC8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8AC0
}
// fun_8B28
fun_8B28() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8BC0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1510()
// lab_8BC0
    pri = arg_4;
    OP_JZER lab_8BF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1568(var_8)
// lab_8BF8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8C50
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8C50
    pri = 0;
    OP_JUMP lab_8C58
// lab_8C50
    pri = 1;
// lab_8C58
    OP_JZER lab_8D20
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8D20
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8CF8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1450(var_32, var_24)
    OP_JUMP lab_8D20
// lab_8D20
    pri = arg_2;
    OP_JZER lab_8DF8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8DC8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1228(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0878(var_40)
    OP_JUMP lab_8DF8
// lab_8DF8
    pri = arg_3;
    OP_JZER lab_8E30
    var_8 = 1;
    var_16 = 8;
    pri = fun_14D8(var_8)
// lab_8E30
    pri = 0;
    return pri;
// lab_8DC8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1228(var_16, var_8)
// lab_8CF8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1450(var_16, var_8)
}
// fun_8E40
fun_8E40() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8900(var_24)
    pri = 0;
    return pri;
}
// fun_8EA8
fun_8EA8() {
    pri = g_mode;
    switch (pri) {
// switch_8FB8
        case default:
        {
// switch_8FB8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9020
// lab_9020
            pri = 0;
            return pri;
        }
        case 0xb86c79221ae7cd55:
        {
// switch_8FB8_case_0xb86c79221ae7cd55
            var_8 = 0;
            pri = fun_9DF0()
            OP_JUMP lab_9020
        }
        case 0xe4d973ab6b8ed4eb:
        {
// switch_8FB8_case_0xe4d973ab6b8ed4eb
            var_8 = 0;
            pri = fun_9F28()
            OP_JUMP lab_9020
        }
        case 0x0:
        {
// switch_8FB8_case_0x0
            var_8 = 0;
            pri = fun_9030()
            OP_JUMP lab_9020
        }
        case 0x3811e25154d6d485:
        {
// switch_8FB8_case_0x3811e25154d6d485
            var_8 = 0;
            pri = fun_9FB0()
            OP_JUMP lab_9020
        }
        case 0x545fc71e6886b6c9:
        {
// switch_8FB8_case_0x545fc71e6886b6c9
            var_8 = 0;
            pri = fun_9EE0()
            OP_JUMP lab_9020
        }
    }
}
// fun_9030
fun_9030() {
    pri = 0;
    return pri;
}
// fun_9048
fun_9048() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8B28(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_90A0
fun_90A0() {
    pri = 0;
    return pri;
}
// fun_90B8
fun_90B8() {
    pri = 0;
    return pri;
}
// fun_90D0
fun_90D0() {
    pri = EvCameraStart()
    var_8 = 2;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C -4605043208977016422, 4650838308078537933, 4654759166543187149, 8802641224559852288
    var_40 = 48;
    pri = fun_0820(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C -4605043208977016422, 4654145199250237030, 4653146402887565312, -8424277323871559939
    var_64 = 48;
    pri = fun_0820(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 8;
    pri = fun_0060(var_72)
    var_88 = 0;
    var_96 = 4631952216750555136;
    var_104 = 0;
    OP_PUSH5_C 4654365057595327119, 4642431881977213747, 4652061756656996844, 4656826204422940918, 4647861270395171635
    var_112 = 4654244507140457759;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_20A0()
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH4_C 4653679006320060006, 4653672849054944461, 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_08B0(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    var_192 = 4631952216750555136;
    var_200 = 0;
    OP_PUSH5_C 4653547768612168663, 4642431881977213747, 4653136375341519995, 4656112973220235182, 4647862237965404078
    var_208 = 4655240708655687926;
    var_216 = 200;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 10;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 31496;
    var_248 = 30;
    var_256 = 16;
    pri = fun_0280(var_248, var_240)
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 3;
    var_296 = 0;
    var_304 = 8;
    var_312 = -8424277323871559939;
    var_320 = 56;
    pri = fun_2130(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    pri = fun_0350()
    var_336 = 10;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 3;
    var_360 = 0;
    var_368 = -7811394662312566480;
    var_376 = 24;
    pri = fun_1EC8(var_368, var_360, var_352)
    var_384 = 80;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 0;
    pri = fun_2070()
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_09D0(var_408)
    var_424 = -8424277323871559939;
    var_432 = 8;
    pri = fun_0BA8(var_424)
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH2_C -8424277323871559939, 8802641224559852288
    var_472 = 48;
    pri = fun_0978(var_464, var_456, var_448, var_440, var_432, var_424)
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    OP_PUSH2_C 8802641224559852288, -8424277323871559939
    var_512 = 48;
    pri = fun_0978(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = 8802641224559852288;
    var_528 = 8;
    pri = fun_09D0(var_520)
    var_536 = -8424277323871559939;
    var_544 = 8;
    pri = fun_09D0(var_536)
    var_552 = 15;
    var_560 = 8;
    pri = fun_0060(var_552)
    var_568 = 0;
    var_576 = 4631952216750555136;
    var_584 = 0;
    OP_PUSH5_C 4651439696958466294, 4641447775089889116, 4652884411256898847, 4655281830390566748, 4644060038795624448
    var_592 = 4653647340385180058;
    var_600 = 1;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 0;
    pri = fun_20A0()
    var_616 = 31544;
    pri = SoundPostEvent(var_616)
    var_624 = 0;
    var_632 = 1;
    var_640 = -8424277323871559939;
    var_648 = 24;
    pri = fun_7D78(var_640, var_632, var_624)
    var_656 = 1;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = -8424277323871559939;
    var_680 = 8;
    pri = fun_0BA8(var_672)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C -6189953796127420254, -8424277323871559939
    var_728 = 56;
    pri = fun_1E18(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_1FB0(var_736)
    var_752 = 0;
    pri = fun_2070()
    var_760 = 0;
    var_768 = 0;
    var_776 = -8424277323871559939;
    var_784 = 24;
    pri = fun_7D78(var_776, var_768, var_760)
    var_792 = -8424277323871559939;
    var_800 = 8;
    pri = fun_0BA8(var_792)
    var_808 = 1;
    var_816 = 1;
    var_824 = -1;
    var_832 = -1;
    var_840 = 0;
    var_848 = 23;
    var_856 = -8424277323871559939;
    var_864 = 56;
    pri = fun_3D10(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 0;
    var_880 = 3;
    var_888 = 0;
    var_896 = 100;
    var_904 = -1;
    OP_PUSH2_C -6189954895639048465, -8424277323871559939
    var_912 = 56;
    pri = fun_1E18(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 1;
    var_928 = 8;
    pri = fun_1FB0(var_920)
    var_936 = 0;
    pri = fun_2070()
    var_944 = 31704;
    var_952 = -8424277323871559939;
    var_960 = 16;
    pri = fun_0DA8(var_952, var_944)
    var_968 = 1;
    var_976 = 3;
    var_984 = 0;
    var_992 = 23;
    var_1000 = -8424277323871559939;
    var_1008 = 40;
    pri = fun_6048(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = -8424277323871559939;
    var_1024 = 8;
    pri = fun_0BA8(var_1016)
    var_1032 = 1;
    var_1040 = 1;
    var_1048 = -1;
    var_1056 = -1;
    var_1064 = 0;
    var_1072 = 8;
    var_1080 = -8424277323871559939;
    var_1088 = 56;
    pri = fun_3D10(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 0;
    var_1104 = 3;
    var_1112 = 0;
    var_1120 = 100;
    var_1128 = -1;
    OP_PUSH2_C -6189955995150676676, -8424277323871559939
    var_1136 = 56;
    pri = fun_1E18(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_1FB0(var_1144)
    var_1160 = 0;
    pri = fun_2070()
    var_1168 = 1;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 8;
    var_1200 = -8424277323871559939;
    var_1208 = 40;
    pri = fun_6048(var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1216 = -8424277323871559939;
    var_1224 = 8;
    pri = fun_0BA8(var_1216)
    var_1232 = 1;
    var_1240 = 0;
    var_1248 = 30;
    pri = float(var_1248)
    var_1256 = pri;
    var_1264 = 0;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 0;
    OP_PUSH4_C 4656287047901144678, 4651057330794790912, 4611686018427387904, -8424277323871559939
    var_1288 = 72;
    pri = fun_08B0(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1296 = -8424277323871559939;
    var_1304 = 8;
    pri = fun_09D0(var_1296)
    var_1312 = 1;
    var_1320 = 0;
    var_1328 = 31448;
    var_1336 = 8;
    var_1344 = 32;
    pri = fun_02E0(var_1336, var_1328, var_1320, var_1312)
    var_1352 = 0;
    pri = fun_0350()
    var_1360 = 31864;
    pri = SoundPostEvent(var_1360)
    var_1368 = 32024;
    pri = SoundPostEvent(var_1368)
    var_1376 = 3;
    var_1384 = 1;
    pri = EvCameraEnd(var_1384, var_1376)
    var_1392 = 10;
    var_1400 = 8;
    pri = fun_0060(var_1392)
    pri = 0;
    return pri;
}
// fun_9CC0
fun_9CC0() {
    pri = 0;
    return pri;
}
// fun_9CD8
fun_9CD8() {
    var_8 = -8424277323871559939;
    var_16 = 8;
    pri = fun_07C8(var_8)
    var_24 = 471;
    var_32 = 8;
    pri = fun_8E40(var_24)
    var_40 = -2664763386676178833;
    var_48 = 8;
    pri = fun_0648(var_40)
    var_56 = 2;
    var_64 = 8;
    pri = fun_0408(var_56)
    pri = 0;
    return pri;
}
// fun_9D80
fun_9D80() {
    var_8 = 0;
    pri = fun_0678()
    var_16 = 31496;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9DF0
fun_9DF0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9048()
    var_16 = 0;
    pri = fun_90A0()
    var_24 = 0;
    pri = fun_90B8()
    var_32 = 0;
    pri = fun_90D0()
    var_40 = 0;
    pri = fun_9CC0()
    var_48 = 0;
    pri = fun_9CD8()
    var_56 = 0;
    pri = fun_9D80()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9EE0
fun_9EE0() {
    var_8 = 0;
    pri = fun_90A0()
    var_16 = 0;
    pri = fun_9CD8()
    pri = 0;
    return pri;
}
// fun_9F28
fun_9F28() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6189957094662304887;
    var_88 = 80;
    pri = fun_8788(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9FB0
fun_9FB0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -3888723010699920574;
    var_88 = 80;
    pri = fun_8788(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
