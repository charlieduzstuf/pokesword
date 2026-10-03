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
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06B8
fun_06B8() {
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
// fun_0730
fun_0730() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0788
fun_0788() {
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
// fun_0848
fun_0848() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetPosition_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JZER lab_09C0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12F8(var_24)
    OP_JNZ lab_09C0
    pri = 0;
    return pri;
// lab_09C0
    OP_JUMP lab_09D0
// lab_09D0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A30
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D0
    pri = 0;
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B20
fun_0B20() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B68
    pri = 0;
    return pri;
// lab_0B68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BA8
// lab_0BA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JNZ lab_0C30
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C20
    pri = 0;
    return pri;
// lab_0C30
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C78
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E48(var_8)
    pri = 0;
    return pri;
// lab_0CD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA8
    pri = 0;
    return pri;
// lab_0C20
    OP_JUMP lab_0C78
}
// fun_0D20
fun_0D20() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D68
// lab_0D68
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DC0
    pri = 0;
    return pri;
// lab_0DC0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E00
    pri = 0;
    return pri;
// lab_0E00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D68
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E80
fun_0E80() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0ED0
    pri = 0;
    return pri;
// lab_0ED0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    OP_JZER lab_1000
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F28
    OP_ZERO_P_S 64
// lab_1000
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1038
    OP_CONST_S 64, 1
// lab_1038
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1070
    OP_CONST_S 72, 1
// lab_1070
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
// lab_0F28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F50
    OP_ZERO_P_S 72
// lab_0F50
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
    OP_JUMP lab_1110
// lab_1110
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F8
fun_11F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
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
    pri = fun_0B20(var_8)
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
    pri = fun_0B20(var_8)
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
    pri = fun_0B20(var_8)
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
            pri = fun_1FD8()
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
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1600(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D88
fun_1D88() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AE8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E30
    pri = 1;
    return pri;
// lab_1E30
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E78
fun_1E78() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D88(var_8)
    arg_2 = pri;
// lab_1EC8
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
// fun_1F28
fun_1F28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1D20(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F78
fun_1F78() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1F28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
    OP_JUMP lab_1FF0
// lab_1FF0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2030
    pri = 0;
    return pri;
// lab_2030
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FF0
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    var_8 = 0;
    pri = fun_1FD8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2120
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2120
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2190
// lab_2190
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21D0
    OP_JUMP lab_2200
// lab_21D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2190
// lab_2200
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
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
// fun_22B8
fun_22B8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    OP_JUMP lab_2308
// lab_2308
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2350
    OP_JUMP lab_2380
    OP_JUMP lab_2370
// lab_2350
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2380
    pri = 0;
    return pri;
// lab_2370
    OP_JUMP lab_2308
}
// fun_2390
fun_2390() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2410
fun_2410() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24B0
fun_24B0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2500
fun_2500() {
    OP_JUMP lab_2518
// lab_2518
    pri = EvCameraMoveWait_()
    OP_JZER lab_2550
    pri = 0;
    return pri;
// lab_2550
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2518
    pri = 0;
    return pri;
}
// fun_2590
fun_2590() {
    pri = arg_6;
    OP_JNZ lab_25C8
    var_8 = 0;
    pri = fun_1120()
// lab_25C8
    pri = arg_1;
    switch (pri) {
// switch_3B30
        case default:
        {
// switch_3B30_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3E80
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3E80
            pri = 1;
            OP_JUMP lab_3E88
// lab_3E80
            pri = 0;
// lab_3E88
            OP_JZER lab_3FE0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE8(var_24, var_16)
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
            OP_JUMP lab_4040
// lab_3FE0
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
// lab_4040
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_40A0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4100
// lab_40A0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4100
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4100
            pri = arg_2;
            OP_JZER lab_4140
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4140
            var_8 = 0;
            pri = fun_1160()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B30_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1:
        {
// switch_3B30_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x2:
        {
// switch_3B30_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x3:
        {
// switch_3B30_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x4:
        {
// switch_3B30_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x5:
        {
// switch_3B30_case_0x5
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x6:
        {
// switch_3B30_case_0x6
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x7:
        {
// switch_3B30_case_0x7
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x8:
        {
// switch_3B30_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x9:
        {
// switch_3B30_case_0x9
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xa:
        {
// switch_3B30_case_0xa
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xb:
        {
// switch_3B30_case_0xb
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xc:
        {
// switch_3B30_case_0xc
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xd:
        {
// switch_3B30_case_0xd
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xe:
        {
// switch_3B30_case_0xe
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0xf:
        {
// switch_3B30_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x10:
        {
// switch_3B30_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x11:
        {
// switch_3B30_case_0x11
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x12:
        {
// switch_3B30_case_0x12
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x13:
        {
// switch_3B30_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x14:
        {
// switch_3B30_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x15:
        {
// switch_3B30_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x16:
        {
// switch_3B30_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x17:
        {
// switch_3B30_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x18:
        {
// switch_3B30_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x19:
        {
// switch_3B30_case_0x19
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1a:
        {
// switch_3B30_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A70(var_48, var_40)
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
            pri = fun_0E80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1b:
        {
// switch_3B30_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A70(var_48, var_40)
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
            pri = fun_0E80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1c:
        {
// switch_3B30_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A70(var_48, var_40)
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
            pri = fun_0E80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1d:
        {
// switch_3B30_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1e:
        {
// switch_3B30_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x1f:
        {
// switch_3B30_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x20:
        {
// switch_3B30_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x21:
        {
// switch_3B30_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x22:
        {
// switch_3B30_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x23:
        {
// switch_3B30_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x24:
        {
// switch_3B30_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x25:
        {
// switch_3B30_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x26:
        {
// switch_3B30_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x27:
        {
// switch_3B30_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x28:
        {
// switch_3B30_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
        case 0x29:
        {
// switch_3B30_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B30_case_default
        }
    }
}
// fun_4170
fun_4170() {
    pri = arg_5;
    OP_JNZ lab_41A8
    var_8 = 0;
    pri = fun_1120()
// lab_41A8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_41F8
    OP_CONST_S -8, -1
// lab_41F8
    pri = arg_1;
    switch (pri) {
// switch_5CB0
        case default:
        {
// switch_5CB0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6158
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AE8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6158
            pri = 1;
            OP_JUMP lab_6160
// lab_6158
            pri = 0;
// lab_6160
            OP_JZER lab_61B0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6408
// lab_61B0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6218
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6218
            pri = 1;
            OP_JUMP lab_6220
// lab_6218
            pri = 0;
// lab_6220
            OP_JZER lab_63A8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE8(var_24, var_16)
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
            OP_JUMP lab_6408
// lab_63A8
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_6408
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6478
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6478
            var_8 = 0;
            pri = fun_1160()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5CB0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1:
        {
// switch_5CB0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2:
        {
// switch_5CB0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3:
        {
// switch_5CB0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x4:
        {
// switch_5CB0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x5:
        {
// switch_5CB0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E48(var_40)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x6:
        {
// switch_5CB0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x7:
        {
// switch_5CB0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x8:
        {
// switch_5CB0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x9:
        {
// switch_5CB0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xa:
        {
// switch_5CB0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xb:
        {
// switch_5CB0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xc:
        {
// switch_5CB0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xd:
        {
// switch_5CB0_case_0xd
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xe:
        {
// switch_5CB0_case_0xe
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0xf:
        {
// switch_5CB0_case_0xf
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x10:
        {
// switch_5CB0_case_0x10
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x11:
        {
// switch_5CB0_case_0x11
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x12:
        {
// switch_5CB0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x13:
        {
// switch_5CB0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x14:
        {
// switch_5CB0_case_0x14
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x15:
        {
// switch_5CB0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x16:
        {
// switch_5CB0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x17:
        {
// switch_5CB0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x18:
        {
// switch_5CB0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x19:
        {
// switch_5CB0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1a:
        {
// switch_5CB0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1b:
        {
// switch_5CB0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1c:
        {
// switch_5CB0_case_0x1c
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1d:
        {
// switch_5CB0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1e:
        {
// switch_5CB0_case_0x1e
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x1f:
        {
// switch_5CB0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x20:
        {
// switch_5CB0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x21:
        {
// switch_5CB0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x22:
        {
// switch_5CB0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x23:
        {
// switch_5CB0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x24:
        {
// switch_5CB0_case_0x24
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x25:
        {
// switch_5CB0_case_0x25
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x26:
        {
// switch_5CB0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x27:
        {
// switch_5CB0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x28:
        {
// switch_5CB0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x29:
        {
// switch_5CB0_case_0x29
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2a:
        {
// switch_5CB0_case_0x2a
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2b:
        {
// switch_5CB0_case_0x2b
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2c:
        {
// switch_5CB0_case_0x2c
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2d:
        {
// switch_5CB0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2e:
        {
// switch_5CB0_case_0x2e
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x2f:
        {
// switch_5CB0_case_0x2f
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x30:
        {
// switch_5CB0_case_0x30
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x31:
        {
// switch_5CB0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x32:
        {
// switch_5CB0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x33:
        {
// switch_5CB0_case_0x33
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x34:
        {
// switch_5CB0_case_0x34
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x35:
        {
// switch_5CB0_case_0x35
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x36:
        {
// switch_5CB0_case_0x36
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x37:
        {
// switch_5CB0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x38:
        {
// switch_5CB0_case_0x38
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
            pri = fun_0E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x39:
        {
// switch_5CB0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3a:
        {
// switch_5CB0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3b:
        {
// switch_5CB0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3c:
        {
// switch_5CB0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3d:
        {
// switch_5CB0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
        case 0x3e:
        {
// switch_5CB0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            OP_JUMP switch_5CB0_case_default
        }
    }
}
// fun_64A8
fun_64A8() {
    pri = arg_4;
    OP_JNZ lab_64E0
    var_8 = 0;
    pri = fun_1120()
// lab_64E0
    pri = arg_1;
    switch (pri) {
// switch_78B8
        case default:
        {
// switch_78B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12C8(var_264)
            OP_JZER lab_7E80
            pri = arg_3;
            switch (pri) {
// switch_7E28
                case default:
                {
// switch_7E28_case_default
                    OP_JUMP lab_8138
// lab_8138
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_81A8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_81A8
                    var_8 = 0;
                    pri = fun_1160()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7E28_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7E28_case_default
                }
                case 0x2:
                {
// switch_7E28_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7E28_case_default
                }
                case 0x3:
                {
// switch_7E28_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7E28_case_default
                }
            }
// lab_7E80
            pri = arg_1;
            OP_JZER lab_7ED0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7ED0
            pri = 0;
            OP_JUMP lab_7ED8
// lab_7ED0
            pri = 1;
// lab_7ED8
            OP_JZER lab_7F40
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AE8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7F40
            pri = 1;
            OP_JUMP lab_7F48
// lab_7F40
            pri = 0;
// lab_7F48
            OP_JZER lab_7F98
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8138
// lab_7F98
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8000
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8138
// lab_8000
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE8(var_24, var_16)
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
// switch_78B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1:
        {
// switch_78B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2:
        {
// switch_78B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3:
        {
// switch_78B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x4:
        {
// switch_78B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x5:
        {
// switch_78B8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E48(var_40)
            OP_JUMP switch_78B8_case_default
        }
        case 0x6:
        {
// switch_78B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x7:
        {
// switch_78B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x8:
        {
// switch_78B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x9:
        {
// switch_78B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xa:
        {
// switch_78B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xb:
        {
// switch_78B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xc:
        {
// switch_78B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xd:
        {
// switch_78B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xe:
        {
// switch_78B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0xf:
        {
// switch_78B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x10:
        {
// switch_78B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x11:
        {
// switch_78B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x12:
        {
// switch_78B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x13:
        {
// switch_78B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x14:
        {
// switch_78B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x15:
        {
// switch_78B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x16:
        {
// switch_78B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x17:
        {
// switch_78B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x18:
        {
// switch_78B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x19:
        {
// switch_78B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1a:
        {
// switch_78B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1b:
        {
// switch_78B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1c:
        {
// switch_78B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1d:
        {
// switch_78B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1e:
        {
// switch_78B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x1f:
        {
// switch_78B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x20:
        {
// switch_78B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x21:
        {
// switch_78B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x22:
        {
// switch_78B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x23:
        {
// switch_78B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x24:
        {
// switch_78B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x25:
        {
// switch_78B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x26:
        {
// switch_78B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x27:
        {
// switch_78B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x28:
        {
// switch_78B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x29:
        {
// switch_78B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2a:
        {
// switch_78B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2b:
        {
// switch_78B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2c:
        {
// switch_78B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2d:
        {
// switch_78B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2e:
        {
// switch_78B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x2f:
        {
// switch_78B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x30:
        {
// switch_78B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x31:
        {
// switch_78B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x32:
        {
// switch_78B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x33:
        {
// switch_78B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x34:
        {
// switch_78B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x35:
        {
// switch_78B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x36:
        {
// switch_78B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x37:
        {
// switch_78B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x38:
        {
// switch_78B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x39:
        {
// switch_78B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3a:
        {
// switch_78B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3b:
        {
// switch_78B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3c:
        {
// switch_78B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3d:
        {
// switch_78B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
        case 0x3e:
        {
// switch_78B8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA8(var_24, var_16, var_8)
            OP_JUMP switch_78B8_case_default
        }
    }
}
// fun_81D8
fun_81D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_83E8(var_16, var_8)
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
    OP_JZER lab_83D0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_83D0
    pri = 0;
    return pri;
}
// fun_83E8
fun_83E8() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AA8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8430
fun_8430() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8530
        case default:
        {
// switch_8530_case_default
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
// switch_8530_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8530_case_default
        }
        case 0x1:
        {
// switch_8530_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8530_case_default
        }
        case 0x2:
        {
// switch_8530_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8530_case_default
        }
        case 0x3:
        {
// switch_8530_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8530_case_default
        }
    }
}
// fun_85F0
fun_85F0() {
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
    pri = fun_1E78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FD8()
    pri = 0;
    return pri;
}
// fun_8688
fun_8688() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8430(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_85F0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8730
fun_8730() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8780
// lab_8780
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_87F8
    OP_JUMP lab_8828
// lab_87F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8780
// lab_8828
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_88B0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_64A8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1598(var_56)
// lab_88B0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8918
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11F8(var_24, var_16)
// lab_8918
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11F8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_89D8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0B20(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0848(var_88, var_80, var_72, var_64, var_56)
// lab_89D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8A18
    pri = 0;
    return pri;
// lab_8A18
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8B60
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A70(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8B28
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8B60
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0948(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0948(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B20(var_40)
    pri = 0;
    return pri;
// lab_8B28
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11F8(var_16, var_8)
}
// fun_8BE8
fun_8BE8() {
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
    pri = fun_8688(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2070(var_112)
    var_128 = 0;
    pri = fun_2130()
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
    pri = fun_8730(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8D60
fun_8D60() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8DF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B20(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2590(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8DF8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8F50
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8EB8
    var_24 = 30528;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8EB8
    pri = 1;
    OP_JUMP lab_8EC0
// lab_8F50
    pri = 0;
    return pri;
// lab_8EB8
    pri = 0;
// lab_8EC0
    OP_JZER lab_8F50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B20(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2590(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8F60
fun_8F60() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8D60(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8FE8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8FE8
fun_8FE8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9180(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9050
fun_9050() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_90C0
    OP_CONST_S -8, 1
// lab_90C0
    pri = arg_0;
    OP_JNZ lab_90E0
    OP_ZERO_P_S -8
// lab_90E0
    pri = var_8;
    OP_JZER lab_9168
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9168
    pri = 0;
    return pri;
}
// fun_9180
fun_9180() {
    var_8 = 30632;
    var_16 = 8;
    pri = fun_22B8(var_8)
    var_24 = 0;
    pri = fun_22F0()
    pri = arg_3;
    OP_JNZ lab_92A0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9268
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9310(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9290
// lab_92A0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_94B0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9268
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_93D8(var_16, var_8)
// lab_9290
    OP_JUMP lab_92E8
// lab_92E8
    var_8 = 0;
    pri = fun_2390()
    pri = 0;
    return pri;
}
// fun_9310
fun_9310() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_94B0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_93C0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_93C0
    pri = 0;
    return pri;
}
// fun_93D8
fun_93D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2410(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1F78(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2070(var_72)
    var_88 = 0;
    pri = fun_2130()
    var_96 = 0;
    var_104 = 8;
    pri = fun_23C0(var_96)
    pri = 0;
    return pri;
}
// fun_94B0
fun_94B0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_94F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_97B8(var_8)
// lab_94F8
    pri = arg_4;
    OP_JNZ lab_9560
    var_8 = 0;
    var_16 = 8;
    pri = fun_23C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2410(var_40, var_32, var_24)
// lab_9560
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9600
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2460(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1F78(var_56, var_48, var_40)
    OP_JUMP lab_96F0
// lab_9600
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_96B8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_96B8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_96B8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1F78(var_24, var_16, var_8)
// lab_96F0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9730
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_9730
    var_8 = 1;
    var_16 = 8;
    pri = fun_2070(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_99C0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9050(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_97B8
fun_97B8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9818
    var_16 = 30792;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9818
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9958
        case default:
        {
// switch_9958_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9948
            var_16 = 31336;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9948
            OP_JUMP lab_9990
// lab_9990
            var_8 = 31552;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9958_case_0x1
            var_8 = 31008;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9990
        }
        case 0x2:
        {
// switch_9958_case_0x2
            var_8 = 31136;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9990
        }
    }
}
// fun_99C0
fun_99C0() {
    pri = arg_2;
    OP_JNZ lab_9AA8
    var_8 = 0;
    var_16 = 8;
    pri = fun_23C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2410(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_24B0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9AA8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1F78(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2070(var_40)
    var_56 = 0;
    pri = fun_2130()
    pri = 0;
    return pri;
}
// fun_9B20
fun_9B20() {
    pri = 31736;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9BA8
// lab_9BA8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9D28
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9D18
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9C68
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9C68
    pri = 0;
    OP_JUMP lab_9C70
// lab_9D28
    pri = 0;
    return pri;
// lab_9D18
    OP_JUMP lab_9BA0
// lab_9BA0
    OP_INC_P_S -936
// lab_9C68
    pri = 1;
// lab_9C70
    OP_JZER lab_9CE8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9CE0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9CE8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9CE0
}
// fun_9D48
fun_9D48() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9DE0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32656;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1570()
// lab_9DE0
    pri = arg_4;
    OP_JZER lab_9E18
    var_8 = 1;
    var_16 = 8;
    pri = fun_15C8(var_8)
// lab_9E18
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9E70
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9E70
    pri = 0;
    OP_JUMP lab_9E78
// lab_9E70
    pri = 1;
// lab_9E78
    OP_JZER lab_9F40
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9F40
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9F18
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14B0(var_32, var_24)
    OP_JUMP lab_9F40
// lab_9F40
    pri = arg_2;
    OP_JZER lab_A018
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9FE8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0680(var_40)
    OP_JUMP lab_A018
// lab_A018
    pri = arg_3;
    OP_JZER lab_A050
    var_8 = 1;
    var_16 = 8;
    pri = fun_1538(var_8)
// lab_A050
    pri = 0;
    return pri;
// lab_9FE8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11F8(var_16, var_8)
// lab_9F18
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14B0(var_16, var_8)
}
// fun_A060
fun_A060() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9B20(var_24)
    pri = 0;
    return pri;
}
// fun_A0C8
fun_A0C8() {
    pri = g_mode;
    switch (pri) {
// switch_A1B0
        case default:
        {
// switch_A1B0_case_default
            pri = CommandNOP()
            OP_JUMP lab_A208
// lab_A208
            pri = 0;
            return pri;
        }
        case 0x8d1626220259d74c:
        {
// switch_A1B0_case_0x8d1626220259d74c
            var_8 = 0;
            pri = fun_CE50()
            OP_JUMP lab_A208
        }
        case 0xf02368f607217588:
        {
// switch_A1B0_case_0xf02368f607217588
            var_8 = 0;
            pri = fun_CF88()
            OP_JUMP lab_A208
        }
        case 0x0:
        {
// switch_A1B0_case_0x0
            var_8 = 0;
            pri = fun_A218()
            OP_JUMP lab_A208
        }
        case 0x6de8cc1e76dcbdb8:
        {
// switch_A1B0_case_0x6de8cc1e76dcbdb8
            var_8 = 0;
            pri = fun_CF40()
            OP_JUMP lab_A208
        }
    }
}
// fun_A218
fun_A218() {
    pri = 0;
    return pri;
}
// fun_A230
fun_A230() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9D48(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A288
fun_A288() {
    pri = 0;
    return pri;
}
// fun_A2A0
fun_A2A0() {
    pri = 0;
    return pri;
}
// fun_A2B8
fun_A2B8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = EvCameraStart()
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 0;
    OP_PUSH5_C 4682709628294581453, 4661170550786144338, 4675476453255544832, 4682737210918153748, 4661332519844032020
    var_48 = 4675476126150835569;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_2500()
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 8802641224559852288, 7977662558473576712
    var_104 = 48;
    pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 7977662558473576712, 8802641224559852288
    var_144 = 48;
    pri = fun_0898(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C 5856776666291847448, 7977662558473576712
    var_192 = 56;
    pri = fun_1E78(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2070(var_200)
    var_216 = 0;
    pri = fun_2130()
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0948(var_224)
    var_240 = 7977662558473576712;
    var_248 = 8;
    pri = fun_0948(var_240)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH3_C 4682692939769656115, 4675467684650313318, 8802641224559852288
    var_280 = 48;
    pri = fun_08F0(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 8802641224559852288;
    var_296 = 8;
    pri = fun_0948(var_288)
    var_304 = 1;
    var_312 = 0;
    var_320 = 0;
    var_328 = 30;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_336 = 48;
    pri = fun_0730(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 15;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 1;
    var_368 = 0;
    var_376 = 32656;
    var_384 = 8;
    var_392 = 32;
    pri = fun_0308(var_384, var_376, var_368, var_360)
    var_400 = 0;
    pri = fun_0378()
    var_408 = 1;
    var_416 = 7977662558473576712;
    var_424 = 16;
    pri = fun_0640(var_416, var_408)
    var_432 = 1;
    var_440 = 8802641224559852288;
    var_448 = 16;
    pri = fun_0640(var_440, var_432)
    var_456 = 1;
    var_464 = -7643235762281396180;
    var_472 = 16;
    pri = fun_0640(var_464, var_456)
    var_480 = 8802641224559852288;
    var_488 = 8;
    pri = fun_0948(var_480)
    var_496 = 0;
    var_504 = 8802641224559852288;
    var_512 = 16;
    pri = fun_0608(var_504, var_496)
    var_520 = 1;
    var_528 = 1;
    var_536 = 171;
    pri = float(var_536)
    var_544 = pri;
    OP_PUSH3_C 4682692939769656115, 4675467684650313318, 8802641224559852288
    var_552 = 48;
    pri = fun_0570(var_544, var_536, var_528, var_520, var_512, var_504)
    var_560 = 1;
    OP_PUSH2_C -4584119062895788032, 7977662558473576712
    var_568 = 24;
    pri = fun_05C8(var_560, var_552, var_544)
    var_576 = 15;
    var_584 = 8;
    pri = fun_0060(var_576)
    var_592 = 0;
    var_600 = 4631656668025008947;
    var_608 = 0;
    OP_PUSH5_C 4682692533637548605, 4661071044983830610, 4675462156855604675, 4682693902529525187, 4661072452358714163
    var_616 = 4675461891598424474;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_2500()
    var_640 = 0;
    var_648 = 4631656668025008947;
    var_656 = 3;
    OP_PUSH5_C 4682693536254714184, 4661074431479644160, 4675482903265631273, 4682694904459495997, 4661075838854527713
    var_664 = 4675482635259672003;
    var_672 = 100;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 32704;
    var_688 = 8;
    var_696 = 16;
    pri = fun_02A8(var_688, var_680)
    var_704 = 0;
    pri = fun_0378()
    var_712 = 0;
    pri = fun_2500()
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C 5856771168733706393, 7977662558473576712
    var_760 = 56;
    pri = fun_1E78(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_2070(var_768)
    var_784 = 0;
    pri = fun_2130()
    var_792 = 1;
    var_800 = -7643235762281396180;
    var_808 = 16;
    pri = fun_0608(var_800, var_792)
    var_816 = 1;
    var_824 = 8802641224559852288;
    var_832 = 16;
    pri = fun_0608(var_824, var_816)
    var_840 = 30;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_0948(var_856)
    var_872 = 0;
    var_880 = 4630671505606521651;
    var_888 = 0;
    OP_PUSH5_C 4682696339322170245, 4660986360598259302, 4675477416702608671, 4682711117445642322, 4661020203566162248
    var_896 = 4675477077228393595;
    var_904 = 1;
    pri = EvCameraMove(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_912 = 0;
    pri = fun_2500()
    var_920 = 1;
    var_928 = 1;
    OP_PUSH4_C -4584119062895788032, 4682732563419942093, 4675493990466007859, -7643235762281396180
    var_936 = 48;
    pri = fun_0570(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 15;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH2_C 7977662558473576712, 8802641224559852288
    var_992 = 48;
    pri = fun_0898(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    OP_PUSH2_C 8802641224559852288, 7977662558473576712
    var_1032 = 48;
    pri = fun_0898(var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1040 = 8802641224559852288;
    var_1048 = 8;
    pri = fun_0948(var_1040)
    var_1056 = 7977662558473576712;
    var_1064 = 8;
    pri = fun_0948(var_1056)
    var_1072 = 0;
    var_1080 = 3;
    var_1088 = 0;
    var_1096 = 100;
    var_1104 = -1;
    OP_PUSH2_C 5857770624803560967, 7977662558473576712
    var_1112 = 56;
    pri = fun_1E78(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_2070(var_1120)
    var_1136 = 0;
    pri = fun_2130()
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 0;
    var_1168 = 0;
    OP_PUSH2_C -7643235762281396180, 7977662558473576712
    var_1176 = 48;
    pri = fun_0898(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1184 = 0;
    var_1192 = 4630671505606521651;
    var_1200 = 3;
    OP_PUSH5_C 4682696258233187697, 4661033771539649004, 4675480958504439644, 4682723760454972211, 4661096927487548457
    var_1208 = 4675480301546242048;
    var_1216 = 30;
    pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 1;
    var_1232 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4682699509351632077, 4675487530835194675, 4607182418800017408
    var_1240 = -7643235762281396180;
    var_1248 = 64;
    pri = fun_0788(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1256 = 15;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C 5856779964826732081, 7977662558473576712
    var_1312 = 56;
    pri = fun_1E78(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 8;
    pri = fun_2070(var_1320)
    var_1336 = 0;
    pri = fun_2130()
    var_1344 = 7977662558473576712;
    var_1352 = 8;
    pri = fun_0948(var_1344)
    var_1360 = 0;
    var_1368 = 0;
    var_1376 = 0;
    var_1384 = 0;
    OP_PUSH2_C -7643235762281396180, 8802641224559852288
    var_1392 = 48;
    pri = fun_0898(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1400 = 8802641224559852288;
    var_1408 = 8;
    pri = fun_0948(var_1400)
    var_1416 = -7643235762281396180;
    var_1424 = 8;
    pri = fun_0948(var_1416)
    var_1432 = 1;
    var_1440 = 1;
    var_1448 = -1;
    OP_PUSH2_C -7643235762281396180, 8802641224559852288
    var_1456 = 40;
    pri = fun_11A0(var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1464 = 1;
    var_1472 = 1;
    var_1480 = -1;
    OP_PUSH2_C -7643235762281396180, 7977662558473576712
    var_1488 = 40;
    pri = fun_11A0(var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1496 = 0;
    pri = fun_2500()
    var_1504 = 1;
    var_1512 = 1;
    OP_PUSH4_C 4613262278296967578, 4682689338869075149, 4675480933765428019, 7977662558473576712
    var_1520 = 48;
    pri = fun_0570(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1528 = 0;
    var_1536 = 4633021821662055629;
    var_1544 = 0;
    OP_PUSH5_C 4682695299596487229, 4661053694690344305, 4675474674795486904, 4682700307184756982, 4661089582749874913
    var_1552 = 4675458588940372541;
    var_1560 = 1;
    pri = EvCameraMove(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1568 = 0;
    pri = fun_2500()
    var_1576 = 1;
    var_1584 = 1;
    var_1592 = -1;
    OP_PUSH2_C 7977662558473576712, -7643235762281396180
    var_1600 = 40;
    pri = fun_11A0(var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1608 = 8802641224559852288;
    var_1616 = 8;
    pri = fun_0948(var_1608)
    var_1624 = 0;
    var_1632 = 2;
    var_1640 = -7643235762281396180;
    var_1648 = 24;
    pri = fun_81D8(var_1640, var_1632, var_1624)
    var_1656 = 1;
    var_1664 = 8;
    pri = fun_0060(var_1656)
    var_1672 = -7643235762281396180;
    var_1680 = 8;
    pri = fun_0B20(var_1672)
    var_1688 = 0;
    var_1696 = 3;
    var_1704 = 0;
    var_1712 = 100;
    var_1720 = -1;
    OP_PUSH2_C 8415963631278099757, -7643235762281396180
    var_1728 = 56;
    pri = fun_1E78(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1736 = 1;
    var_1744 = 8;
    pri = fun_2070(var_1736)
    var_1752 = 0;
    var_1760 = 1531059629927601863;
    var_1768 = 0;
    var_1776 = 24;
    pri = fun_2160(var_1768, var_1760, var_1752)
    var_1784 = 0;
    var_1792 = 1531060729439230074;
    var_1800 = 1;
    var_1808 = 24;
    pri = fun_2160(var_1800, var_1792, var_1784)
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = 0;
    var_1840 = 1;
    var_1848 = 32;
    pri = fun_2248(var_1840, var_1832, var_1824, var_1816)
    var_1856 = -1;
    var_1864 = -7643235762281396180;
    var_1872 = 16;
    pri = fun_11F8(var_1864, var_1856)
    var_1880 = 0;
    var_1888 = 0;
    var_1896 = -7643235762281396180;
    var_1904 = 24;
    pri = fun_81D8(var_1896, var_1888, var_1880)
    var_1912 = 1;
    var_1920 = 8;
    pri = fun_0060(var_1912)
    var_1928 = -7643235762281396180;
    var_1936 = 8;
    pri = fun_0B20(var_1928)
    var_1944 = 0;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 100;
    var_1976 = -1;
    OP_PUSH2_C 8415960332743215124, -7643235762281396180
    var_1984 = 56;
    pri = fun_1E78(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1992 = 1;
    var_2000 = 8;
    pri = fun_2070(var_1992)
    var_2008 = 0;
    pri = fun_2130()
    var_2016 = 0;
    var_2024 = 3;
    var_2032 = 0;
    var_2040 = 100;
    var_2048 = -1;
    OP_PUSH2_C 8415961432254843335, -7643235762281396180
    var_2056 = 56;
    pri = fun_1E78(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2064 = 1;
    var_2072 = 8;
    pri = fun_2070(var_2064)
    var_2080 = 0;
    pri = fun_2130()
    var_2088 = 0;
    var_2096 = 3;
    var_2104 = 0;
    var_2112 = 100;
    var_2120 = -1;
    OP_PUSH2_C 5856777765803475659, 7977662558473576712
    var_2128 = 56;
    pri = fun_1E78(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2136 = 1;
    var_2144 = 8;
    pri = fun_2070(var_2136)
    var_2152 = 0;
    pri = fun_2130()
    var_2160 = 1;
    var_2168 = 1;
    var_2176 = -1;
    OP_PUSH2_C 7977662558473576712, -7643235762281396180
    var_2184 = 40;
    pri = fun_11A0(var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2192 = 0;
    var_2200 = 2;
    var_2208 = -7643235762281396180;
    var_2216 = 24;
    pri = fun_81D8(var_2208, var_2200, var_2192)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_0060(var_2224)
    var_2240 = -7643235762281396180;
    var_2248 = 8;
    pri = fun_0B20(var_2240)
    var_2256 = 0;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 100;
    var_2288 = -1;
    OP_PUSH2_C 8415958133719958702, -7643235762281396180
    var_2296 = 56;
    pri = fun_1E78(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = 1;
    var_2312 = 8;
    pri = fun_2070(var_2304)
    var_2320 = 0;
    pri = fun_2130()
    var_2328 = 1;
    var_2336 = 1;
    var_2344 = -1;
    OP_PUSH2_C 7977662558473576712, 8802641224559852288
    var_2352 = 40;
    pri = fun_11A0(var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2360 = -1;
    var_2368 = 7977662558473576712;
    var_2376 = 16;
    pri = fun_11F8(var_2368, var_2360)
    var_2384 = 1;
    var_2392 = 1;
    var_2400 = -1;
    var_2408 = -1;
    var_2416 = 0;
    var_2424 = 22;
    var_2432 = 7977662558473576712;
    var_2440 = 56;
    pri = fun_4170(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2448 = 0;
    var_2456 = 3;
    var_2464 = 0;
    var_2472 = 100;
    var_2480 = -1;
    OP_PUSH2_C 5856770069222078182, 7977662558473576712
    var_2488 = 56;
    pri = fun_1E78(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2496 = 1;
    var_2504 = 8;
    pri = fun_2070(var_2496)
    var_2512 = 0;
    pri = fun_2130()
    var_2520 = 32752;
    var_2528 = 7977662558473576712;
    var_2536 = 16;
    pri = fun_0D20(var_2528, var_2520)
    var_2544 = 1;
    var_2552 = 3;
    var_2560 = 0;
    var_2568 = 22;
    var_2576 = 7977662558473576712;
    var_2584 = 40;
    pri = fun_64A8(var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2592 = 7977662558473576712;
    var_2600 = 8;
    pri = fun_0B20(var_2592)
    var_2608 = 1;
    var_2616 = 0;
    var_2624 = 30;
    pri = float(var_2624)
    var_2632 = pri;
    var_2640 = 0;
    pri = float(var_2640)
    var_2648 = pri;
    var_2656 = 0;
    OP_PUSH4_C 4682632645300767949, 4675482995349730099, 4611686018427387904, 7977662558473576712
    var_2664 = 72;
    pri = fun_06B8(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2672 = 30;
    var_2680 = 8;
    pri = fun_0060(var_2672)
    var_2688 = -1;
    var_2696 = 8802641224559852288;
    var_2704 = 16;
    pri = fun_11F8(var_2696, var_2688)
    var_2712 = 0;
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = 170;
    pri = float(var_2736)
    var_2744 = pri;
    var_2752 = 8802641224559852288;
    var_2760 = 40;
    pri = fun_0848(var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = -7643235762281396180;
    var_2792 = 24;
    pri = fun_81D8(var_2784, var_2776, var_2768)
    var_2800 = 1;
    var_2808 = 8;
    pri = fun_0060(var_2800)
    var_2816 = -7643235762281396180;
    var_2824 = 8;
    pri = fun_0B20(var_2816)
    var_2832 = 0;
    var_2840 = 0;
    var_2848 = 0;
    var_2856 = 0;
    OP_PUSH2_C 7977662558473576712, -7643235762281396180
    var_2864 = 48;
    pri = fun_0898(var_2856, var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2872 = -7643235762281396180;
    var_2880 = 8;
    pri = fun_0948(var_2872)
    var_2888 = 0;
    var_2896 = 1;
    var_2904 = -7643235762281396180;
    var_2912 = 24;
    pri = fun_81D8(var_2904, var_2896, var_2888)
    var_2920 = 1;
    var_2928 = 8;
    pri = fun_0060(var_2920)
    var_2936 = -7643235762281396180;
    var_2944 = 8;
    pri = fun_0B20(var_2936)
    var_2952 = 0;
    var_2960 = 3;
    var_2968 = 0;
    var_2976 = 100;
    var_2984 = -1;
    OP_PUSH2_C 8415959233231586913, -7643235762281396180
    var_2992 = 56;
    pri = fun_1E78(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_3000 = 1;
    var_3008 = 8;
    pri = fun_2070(var_3000)
    var_3016 = 0;
    pri = fun_2130()
    var_3024 = 30;
    var_3032 = 8;
    pri = fun_0060(var_3024)
    var_3040 = 0;
    var_3048 = 0;
    var_3056 = -7643235762281396180;
    var_3064 = 24;
    pri = fun_81D8(var_3056, var_3048, var_3040)
    var_3072 = 1;
    var_3080 = 8;
    pri = fun_0060(var_3072)
    var_3088 = -7643235762281396180;
    var_3096 = 8;
    pri = fun_0B20(var_3088)
    var_3104 = 8802641224559852288;
    var_3112 = 8;
    pri = fun_0948(var_3104)
    var_3120 = 7977662558473576712;
    var_3128 = 8;
    pri = fun_0948(var_3120)
    var_3136 = 0;
    var_3144 = 7977662558473576712;
    var_3152 = 16;
    pri = fun_0608(var_3144, var_3136)
    var_3160 = -1;
    var_3168 = -7643235762281396180;
    var_3176 = 16;
    pri = fun_11F8(var_3168, var_3160)
    var_3184 = 0;
    var_3192 = 0;
    var_3200 = 0;
    var_3208 = 0;
    OP_PUSH2_C -7643235762281396180, 8802641224559852288
    var_3216 = 48;
    pri = fun_0898(var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3224 = 0;
    var_3232 = 0;
    var_3240 = 0;
    var_3248 = 0;
    OP_PUSH2_C 8802641224559852288, -7643235762281396180
    var_3256 = 48;
    pri = fun_0898(var_3248, var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3264 = 8802641224559852288;
    var_3272 = 8;
    pri = fun_0948(var_3264)
    var_3280 = -7643235762281396180;
    var_3288 = 8;
    pri = fun_0948(var_3280)
    var_3296 = 1;
    var_3304 = 1;
    var_3312 = -1;
    OP_PUSH2_C -7643235762281396180, 8802641224559852288
    var_3320 = 40;
    pri = fun_11A0(var_3312, var_3304, var_3296, var_3288, var_3280)
    var_3328 = 0;
    var_3336 = 3;
    var_3344 = 0;
    var_3352 = 100;
    var_3360 = -1;
    OP_PUSH2_C 8415957034208330491, -7643235762281396180
    var_3368 = 56;
    pri = fun_1E78(var_3360, var_3352, var_3344, var_3336, var_3328, var_3320, var_3312)
    var_3376 = 1;
    var_3384 = 8;
    pri = fun_2070(var_3376)
    var_3392 = 0;
    pri = fun_2130()
    var_3400 = -1;
    var_3408 = 8802641224559852288;
    var_3416 = 16;
    pri = fun_11F8(var_3408, var_3400)
    var_3424 = 6;
    var_3432 = 4;
    var_3440 = 2;
    var_3448 = 1;
    var_3456 = 9;
    var_3464 = 1;
    var_3472 = 1075;
    var_3480 = -7643235762281396180;
    var_3488 = 64;
    pri = fun_8F60(var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3496 = 32928;
    pri = CallTips(var_3496)
    var_3504 = 1;
    var_3512 = 1;
    var_3520 = -1;
    OP_PUSH2_C -7643235762281396180, 8802641224559852288
    var_3528 = 40;
    pri = fun_11A0(var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3536 = 0;
    var_3544 = 1;
    var_3552 = -7643235762281396180;
    var_3560 = 24;
    pri = fun_81D8(var_3552, var_3544, var_3536)
    var_3568 = 1;
    var_3576 = 8;
    pri = fun_0060(var_3568)
    var_3584 = -7643235762281396180;
    var_3592 = 8;
    pri = fun_0B20(var_3584)
    var_3600 = 0;
    var_3608 = 3;
    var_3616 = 0;
    var_3624 = 100;
    var_3632 = -1;
    OP_PUSH2_C 8415953735673445858, -7643235762281396180
    var_3640 = 56;
    pri = fun_1E78(var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584)
    var_3648 = 1;
    var_3656 = 8;
    pri = fun_2070(var_3648)
    var_3664 = 0;
    pri = fun_2130()
    var_3672 = 0;
    var_3680 = 4633021821662055629;
    var_3688 = 0;
    OP_PUSH5_C 4682684965561575670, 4661003447008954941, 4675481133051910554, 4682707979027139789, 4661138533007543501
    var_3696 = 4675475396349992632;
    var_3704 = 1;
    pri = EvCameraMove(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632)
    var_3712 = 0;
    pri = fun_2500()
    var_3720 = 0;
    var_3728 = 3;
    var_3736 = 2;
    var_3744 = 100;
    var_3752 = -1;
    OP_PUSH2_C 8415954835185074069, -7643235762281396180
    var_3760 = 56;
    pri = fun_1E78(var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3768 = 0;
    pri = fun_1FD8()
    var_3776 = 1;
    var_3784 = 8;
    pri = fun_2070(var_3776)
    var_3792 = 0;
    pri = fun_2130()
    var_3800 = 0;
    var_3808 = 4631248529308778496;
    var_3816 = 1;
    OP_PUSH5_C 4682622050819039560, 4660980467215934423, 4675462005672755855, 4682681848446110925, 4661157554558704026
    var_3824 = 4675473470830254490;
    var_3832 = 120;
    pri = EvCameraMove(var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768, var_3760)
    var_3840 = 30;
    var_3848 = 8;
    pri = fun_0060(var_3840)
    var_3856 = 10;
    var_3864 = 8802641224559852288;
    var_3872 = 16;
    pri = fun_11F8(var_3864, var_3856)
    var_3880 = 0;
    var_3888 = 0;
    var_3896 = 0;
    var_3904 = 180;
    pri = float(var_3904)
    var_3912 = pri;
    var_3920 = 8802641224559852288;
    var_3928 = 40;
    pri = fun_0848(var_3920, var_3912, var_3904, var_3896, var_3888)
    var_3936 = 90;
    var_3944 = 8;
    pri = fun_0060(var_3936)
    var_3952 = 1;
    var_3960 = 180;
    pri = float(var_3960)
    var_3968 = pri;
    var_3976 = -7643235762281396180;
    var_3984 = 24;
    pri = fun_05C8(var_3976, var_3968, var_3960)
    var_3992 = 1;
    var_4000 = 0;
    var_4008 = 33000;
    var_4016 = 1;
    var_4024 = 32;
    pri = fun_0308(var_4016, var_4008, var_4000, var_3992)
    var_4032 = 0;
    pri = fun_0378()
    var_4040 = 0;
    var_4048 = 4630741874350699315;
    var_4056 = 0;
    OP_PUSH5_C 4682476865806149878, 4660028707960698962, 4675279921049638011, 4682484930036744847, 4660069939646740562
    var_4064 = 4675300281256205353;
    var_4072 = 1;
    pri = EvCameraMove(var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4080 = 0;
    pri = fun_2500()
    var_4088 = 0;
    var_4096 = 4630741874350699315;
    var_4104 = 0;
    OP_PUSH5_C 4682478967247748465, 4660028707960698962, 4675277962544551035, 4682484804280102420, 4660069917656508006
    var_4112 = 4675301164988676178;
    var_4120 = 90;
    pri = EvCameraMove(var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4128 = 33048;
    var_4136 = 15;
    var_4144 = 16;
    pri = fun_02A8(var_4136, var_4128)
    var_4152 = 0;
    pri = fun_2500()
    var_4160 = 1;
    var_4168 = 0;
    var_4176 = 33096;
    var_4184 = 1;
    var_4192 = 32;
    pri = fun_0308(var_4184, var_4176, var_4168, var_4160)
    var_4200 = 0;
    pri = fun_0378()
    var_4208 = 0;
    var_4216 = 4630741874350699315;
    var_4224 = 0;
    OP_PUSH5_C 4682109684585248850, 4657935831557692457, 4675769106142341366, 4682119091594419241, 4658018822695356989
    var_4232 = 4675786427573647442;
    var_4240 = 1;
    pri = EvCameraMove(var_4240, var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168)
    var_4248 = 0;
    pri = fun_2500()
    var_4256 = 0;
    var_4264 = 4630741874350699315;
    var_4272 = 0;
    OP_PUSH5_C 4682109388404304118, 4658051961975818158, 4675768561884085617, 4682118972709724488, 4658076503075350118
    var_4280 = 4675786200799374213;
    var_4288 = 90;
    pri = EvCameraMove(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216)
    var_4296 = 33144;
    var_4304 = 15;
    var_4312 = 16;
    pri = fun_02A8(var_4304, var_4296)
    var_4320 = 0;
    pri = fun_2500()
    var_4328 = 1;
    var_4336 = 0;
    var_4344 = 33192;
    var_4352 = 1;
    var_4360 = 32;
    pri = fun_0308(var_4352, var_4344, var_4336, var_4328)
    var_4368 = 0;
    pri = fun_0378()
    var_4376 = 0;
    var_4384 = 4631952216750555136;
    var_4392 = 0;
    OP_PUSH5_C 4681901832907134075, 4659968212830938726, 4676547498527277711, 4681964970300774810, 4660121176888594924
    var_4400 = 4676587041088581140;
    var_4408 = 1;
    pri = EvCameraMove(var_4408, var_4400, var_4392, var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336)
    var_4416 = 0;
    pri = fun_2500()
    var_4424 = 0;
    var_4432 = 4631023349327409971;
    var_4440 = 0;
    OP_PUSH5_C 4681854577271761797, 4660121330820222812, 4676565779282479022, 4681914665582219756, 4660210479223002890
    var_4448 = 4676621369215989842;
    var_4456 = 120;
    pri = EvCameraMove(var_4456, var_4448, var_4440, var_4432, var_4424, var_4416, var_4408, var_4400, var_4392, var_4384)
    var_4464 = 33240;
    var_4472 = 15;
    var_4480 = 16;
    pri = fun_02A8(var_4472, var_4464)
    var_4488 = 90;
    var_4496 = 8;
    pri = fun_0060(var_4488)
    var_4504 = 1;
    var_4512 = 0;
    var_4520 = 32656;
    var_4528 = 8;
    var_4536 = 32;
    pri = fun_0308(var_4528, var_4520, var_4512, var_4504)
    var_4544 = 0;
    pri = fun_0378()
    OP_PUSH2_C -7643235762281396180, 3830216702915419078
    pri = SetBamiriInfoToChara(var_4544, var_4536)
    var_4552 = 8;
    var_4560 = 1;
    var_4568 = 0;
    var_4576 = 0;
    var_4584 = -7643235762281396180;
    var_4592 = 40;
    pri = fun_1238(var_4584, var_4576, var_4568, var_4560, var_4552)
    var_4600 = -7643235762281396180;
    var_4608 = 8;
    pri = fun_1290(var_4600)
    var_4616 = 0;
    var_4624 = 0;
    var_4632 = -7643235762281396180;
    var_4640 = 24;
    pri = fun_81D8(var_4632, var_4624, var_4616)
    var_4648 = 30;
    var_4656 = 8;
    pri = fun_0060(var_4648)
    var_4664 = -7643235762281396180;
    var_4672 = 8;
    pri = fun_0B20(var_4664)
    var_4680 = -1;
    var_4688 = 8802641224559852288;
    var_4696 = 16;
    pri = fun_11F8(var_4688, var_4680)
    var_4704 = 3;
    var_4712 = 1;
    pri = EvCameraEnd(var_4712, var_4704)
    var_4720 = 8802641224559852288;
    var_4728 = 8;
    pri = fun_0948(var_4720)
    var_4736 = 0;
    var_4744 = 7977662558473576712;
    var_4752 = 16;
    pri = fun_0640(var_4744, var_4736)
    var_4760 = 0;
    var_4768 = 8802641224559852288;
    var_4776 = 16;
    pri = fun_0640(var_4768, var_4760)
    var_4784 = 0;
    var_4792 = -7643235762281396180;
    var_4800 = 16;
    pri = fun_0640(var_4792, var_4784)
    pri = 0;
    return pri;
}
// fun_CC38
fun_CC38() {
    pri = 0;
    return pri;
}
// fun_CC50
fun_CC50() {
    var_8 = 7977662558473576712;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 390;
    var_32 = 8;
    pri = fun_A060(var_24)
    var_40 = -6270886897370188264;
    pri = VanishFlagReset(var_40)
    var_48 = 1;
    var_56 = 1075;
    pri = ItemAdd(var_56, var_48)
    var_64 = 1;
    pri = ChangeWideRoadOtherPlayerVisibility(var_64)
    pri = 0;
    return pri;
}
// fun_CD20
fun_CD20() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4682705790311805747, 4675471792700632596, 8802641224559852288
    var_40 = 48;
    pri = fun_0570(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 20;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 0;
    pri = WideRoadCameraSetYaw(var_64)
    var_72 = -4601552919265804288;
    pri = WideRoadCameraSetPitch(var_72)
    var_80 = 32704;
    var_88 = 8;
    var_96 = 16;
    pri = fun_02A8(var_88, var_80)
    var_104 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_CE50
fun_CE50() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A230()
    var_16 = 0;
    pri = fun_A288()
    var_24 = 0;
    pri = fun_A2A0()
    var_32 = 0;
    pri = fun_A2B8()
    var_40 = 0;
    pri = fun_CC38()
    var_48 = 0;
    pri = fun_CC50()
    var_56 = 0;
    pri = fun_CD20()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CF40
fun_CF40() {
    var_8 = 0;
    pri = fun_A288()
    var_16 = 0;
    pri = fun_CC50()
    pri = 0;
    return pri;
}
// fun_CF88
fun_CF88() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8415953735673445858;
    var_88 = 80;
    pri = fun_8BE8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
