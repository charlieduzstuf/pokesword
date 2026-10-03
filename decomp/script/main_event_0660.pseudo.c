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
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    OP_JUMP lab_04B0
// lab_04B0
    pri = IsLoadedLogoFade_()
    OP_JZER lab_04E8
    pri = 0;
    return pri;
// lab_04E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B0
    pri = 0;
    return pri;
}
// fun_0528
fun_0528() {
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
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
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
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
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
// fun_0820
fun_0820() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12B0(var_8)
    OP_JZER lab_0998
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12E0(var_24)
    OP_JNZ lab_0998
    pri = 0;
    return pri;
// lab_0998
    OP_JUMP lab_09A8
// lab_09A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A08
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09A8
    pri = 0;
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B40
    pri = 0;
    return pri;
// lab_0B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B80
// lab_0B80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12B0(var_8)
    OP_JNZ lab_0C08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BF8
    pri = 0;
    return pri;
// lab_0C08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    pri = 0;
    return pri;
// lab_0CB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B80
    pri = 0;
    return pri;
// lab_0BF8
    OP_JUMP lab_0C50
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D80
    pri = 0;
    return pri;
// lab_0D80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12B0(var_8)
    OP_JZER lab_0EB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DD8
    OP_ZERO_P_S 64
// lab_0EB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EE8
    OP_CONST_S 64, 1
// lab_0EE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F20
    OP_CONST_S 72, 1
// lab_0F20
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
// lab_0DD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E00
    OP_ZERO_P_S 72
// lab_0E00
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
    OP_JUMP lab_0FC0
// lab_0FC0
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1090(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1108(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1148(var_24)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 344;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1310
fun_1310() {
    OP_JUMP lab_1328
// lab_1328
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    pri = 0;
    return pri;
// lab_13B8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1448
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1438
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    pri = 0;
    return pri;
// lab_1448
    pri = 0;
    return pri;
// lab_1438
    OP_JUMP lab_1458
// lab_1458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1328
    pri = 0;
    return pri;
// lab_13A8
    OP_JUMP lab_1458
}
// fun_1498
fun_1498() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1310(var_40)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1558
fun_1558() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_15B0
fun_15B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
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
            pri = fun_1F10()
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
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_15E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AC0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E18
    pri = 1;
    return pri;
// lab_1E18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E60
fun_1E60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D70(var_8)
    arg_2 = pri;
// lab_1EB0
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
// fun_1F10
fun_1F10() {
    OP_JUMP lab_1F28
// lab_1F28
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F68
    pri = 0;
    return pri;
// lab_1F68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F28
    pri = 0;
    return pri;
}
// fun_1FA8
fun_1FA8() {
    var_8 = 0;
    pri = fun_1F10()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2058
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_2058
    pri = 0;
    return pri;
}
// fun_2068
fun_2068() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2098
fun_2098() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_20C8
// lab_20C8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2108
    OP_JUMP lab_2138
// lab_2108
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20C8
// lab_2138
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
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
// fun_21F0
fun_21F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2268()
    return pri;
}
// fun_2268
fun_2268() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_22A8
fun_22A8() {
    OP_JUMP lab_22C0
// lab_22C0
    pri = EvCameraMoveWait_()
    OP_JZER lab_22F8
    pri = 0;
    return pri;
// lab_22F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22C0
    pri = 0;
    return pri;
}
// fun_2338
fun_2338() {
    pri = arg_6;
    OP_JNZ lab_2370
    var_8 = 0;
    pri = fun_0FD0()
// lab_2370
    pri = arg_1;
    switch (pri) {
// switch_38D8
        case default:
        {
// switch_38D8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C28
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C28
            pri = 1;
            OP_JUMP lab_3C30
// lab_3C28
            pri = 0;
// lab_3C30
            OP_JZER lab_3D88
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AC0(var_24, var_16)
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3DE8
// lab_3D88
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_3DE8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E48
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3EA8
// lab_3E48
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3EA8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3EA8
            pri = arg_2;
            OP_JZER lab_3EE8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EE8
            var_8 = 0;
            pri = fun_1010()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38D8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1:
        {
// switch_38D8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x2:
        {
// switch_38D8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x3:
        {
// switch_38D8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x4:
        {
// switch_38D8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x5:
        {
// switch_38D8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x6:
        {
// switch_38D8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x7:
        {
// switch_38D8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x8:
        {
// switch_38D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x9:
        {
// switch_38D8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xa:
        {
// switch_38D8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xb:
        {
// switch_38D8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xc:
        {
// switch_38D8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xd:
        {
// switch_38D8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xe:
        {
// switch_38D8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0xf:
        {
// switch_38D8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x10:
        {
// switch_38D8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x11:
        {
// switch_38D8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x12:
        {
// switch_38D8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x13:
        {
// switch_38D8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x14:
        {
// switch_38D8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x15:
        {
// switch_38D8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x16:
        {
// switch_38D8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x17:
        {
// switch_38D8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x18:
        {
// switch_38D8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x19:
        {
// switch_38D8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1a:
        {
// switch_38D8_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1b:
        {
// switch_38D8_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1c:
        {
// switch_38D8_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1d:
        {
// switch_38D8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1e:
        {
// switch_38D8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x1f:
        {
// switch_38D8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x20:
        {
// switch_38D8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x21:
        {
// switch_38D8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x22:
        {
// switch_38D8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x23:
        {
// switch_38D8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x24:
        {
// switch_38D8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x25:
        {
// switch_38D8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x26:
        {
// switch_38D8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x27:
        {
// switch_38D8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x28:
        {
// switch_38D8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
        case 0x29:
        {
// switch_38D8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38D8_case_default
        }
    }
}
// fun_3F18
fun_3F18() {
    pri = arg_4;
    OP_JNZ lab_3F50
    var_8 = 0;
    pri = fun_0FD0()
// lab_3F50
    pri = arg_1;
    switch (pri) {
// switch_5328
        case default:
        {
// switch_5328_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8968;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12B0(var_264)
            OP_JZER lab_58F0
            pri = arg_3;
            switch (pri) {
// switch_5898
                case default:
                {
// switch_5898_case_default
                    OP_JUMP lab_5BA8
// lab_5BA8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5C18
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5C18
                    var_8 = 0;
                    pri = fun_1010()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5898_case_0x1
                    var_8 = 32;
                    var_16 = 9120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5898_case_default
                }
                case 0x2:
                {
// switch_5898_case_0x2
                    var_8 = 32;
                    var_16 = 9224;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5898_case_default
                }
                case 0x3:
                {
// switch_5898_case_0x3
                    var_8 = 32;
                    var_16 = 9024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5898_case_default
                }
            }
// lab_58F0
            pri = arg_1;
            OP_JZER lab_5940
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5940
            pri = 0;
            OP_JUMP lab_5948
// lab_5940
            pri = 1;
// lab_5948
            OP_JZER lab_59B0
            var_8 = 9320;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AC0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_59B0
            pri = 1;
            OP_JUMP lab_59B8
// lab_59B0
            pri = 0;
// lab_59B8
            OP_JZER lab_5A08
            var_8 = 32;
            var_16 = 9416;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5BA8
// lab_5A08
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5A70
            var_8 = 32;
            var_16 = 9576;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5BA8
// lab_5A70
            var_16 = 9696;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AC0(var_24, var_16)
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
            var_176 = 9800;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9816;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5328_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1:
        {
// switch_5328_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2:
        {
// switch_5328_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3:
        {
// switch_5328_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x4:
        {
// switch_5328_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x5:
        {
// switch_5328_case_0x5
            var_8 = 1;
            var_16 = 8448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CF8(var_40)
            OP_JUMP switch_5328_case_default
        }
        case 0x6:
        {
// switch_5328_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x7:
        {
// switch_5328_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x8:
        {
// switch_5328_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x9:
        {
// switch_5328_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xa:
        {
// switch_5328_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xb:
        {
// switch_5328_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xc:
        {
// switch_5328_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xd:
        {
// switch_5328_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xe:
        {
// switch_5328_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0xf:
        {
// switch_5328_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x10:
        {
// switch_5328_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x11:
        {
// switch_5328_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x12:
        {
// switch_5328_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x13:
        {
// switch_5328_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x14:
        {
// switch_5328_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x15:
        {
// switch_5328_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x16:
        {
// switch_5328_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x17:
        {
// switch_5328_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x18:
        {
// switch_5328_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x19:
        {
// switch_5328_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1a:
        {
// switch_5328_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1b:
        {
// switch_5328_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1c:
        {
// switch_5328_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1d:
        {
// switch_5328_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1e:
        {
// switch_5328_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x1f:
        {
// switch_5328_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x20:
        {
// switch_5328_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x21:
        {
// switch_5328_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x22:
        {
// switch_5328_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x23:
        {
// switch_5328_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x24:
        {
// switch_5328_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x25:
        {
// switch_5328_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x26:
        {
// switch_5328_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x27:
        {
// switch_5328_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x28:
        {
// switch_5328_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x29:
        {
// switch_5328_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2a:
        {
// switch_5328_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2b:
        {
// switch_5328_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2c:
        {
// switch_5328_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2d:
        {
// switch_5328_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2e:
        {
// switch_5328_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x2f:
        {
// switch_5328_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x30:
        {
// switch_5328_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x31:
        {
// switch_5328_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x32:
        {
// switch_5328_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x33:
        {
// switch_5328_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x34:
        {
// switch_5328_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x35:
        {
// switch_5328_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x36:
        {
// switch_5328_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x37:
        {
// switch_5328_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x38:
        {
// switch_5328_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x39:
        {
// switch_5328_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3a:
        {
// switch_5328_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3b:
        {
// switch_5328_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3c:
        {
// switch_5328_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8544;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3d:
        {
// switch_5328_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8720;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
        case 0x3e:
        {
// switch_5328_case_0x3e
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            OP_JUMP switch_5328_case_default
        }
    }
}
// fun_5C48
fun_5C48() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5D48
        case default:
        {
// switch_5D48_case_default
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
// switch_5D48_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5D48_case_default
        }
        case 0x1:
        {
// switch_5D48_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5D48_case_default
        }
        case 0x2:
        {
// switch_5D48_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5D48_case_default
        }
        case 0x3:
        {
// switch_5D48_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5D48_case_default
        }
    }
}
// fun_5E08
fun_5E08() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5E58
// lab_5E58
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9864;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5ED0
    OP_JUMP lab_5F00
// lab_5ED0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_5E58
// lab_5F00
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5F88
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3F18(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1580(var_56)
// lab_5F88
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5FF0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1050(var_24, var_16)
// lab_5FF0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1050(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_60B0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AF8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0878(var_88, var_80, var_72, var_64, var_56)
// lab_60B0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_60F0
    pri = 0;
    return pri;
// lab_60F0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6238
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 9984;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A48(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6200
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_6238
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0920(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0920(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AF8(var_40)
    pri = 0;
    return pri;
// lab_6200
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1050(var_16, var_8)
}
// fun_62C0
fun_62C0() {
    pri = 10120;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6348
// lab_6348
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_64C8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_64B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6408
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6408
    pri = 0;
    OP_JUMP lab_6410
// lab_64C8
    pri = 0;
    return pri;
// lab_64B8
    OP_JUMP lab_6340
// lab_6340
    OP_INC_P_S -936
// lab_6408
    pri = 1;
// lab_6410
    OP_JZER lab_6488
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6480
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6488
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6480
}
// fun_64E8
fun_64E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6580
    var_8 = 1;
    var_16 = 0;
    var_24 = 11040;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1558()
// lab_6580
    pri = arg_4;
    OP_JZER lab_65B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_15B0(var_8)
// lab_65B8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6610
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6610
    pri = 0;
    OP_JUMP lab_6618
// lab_6610
    pri = 1;
// lab_6618
    OP_JZER lab_66E0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_66E0
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_66B8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1498(var_32, var_24)
    OP_JUMP lab_66E0
// lab_66E0
    pri = arg_2;
    OP_JZER lab_67B8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_6788
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1050(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    OP_JUMP lab_67B8
// lab_67B8
    pri = arg_3;
    OP_JZER lab_67F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1520(var_8)
// lab_67F0
    pri = 0;
    return pri;
// lab_6788
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1050(var_16, var_8)
// lab_66B8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1498(var_16, var_8)
}
// fun_6800
fun_6800() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0920(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_5C48(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    pri = arg_1;
    OP_LOAD_I 
    var_128 = pri;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1E60(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1FA8(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_6998
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2098(var_184, var_176, var_168)
// lab_6998
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2098(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2098(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2180(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_7200
        case default:
        {
// switch_7200_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7200_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1E60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1FA8(var_72)
            var_88 = 0;
            pri = fun_2068()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_5E08(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_6C60
            var_136 = 1;
            var_144 = 0;
            var_152 = 4641240890982006784;
            var_160 = 0;
            var_168 = 0;
            var_176 = arg_3;
            pri = float(var_176)
            var_184 = pri;
            var_192 = arg_2;
            pri = float(var_192)
            var_200 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_208 = 72;
            pri = fun_07A8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_0920(var_216)
// lab_6C60
            OP_JUMP switch_7200_case_default
        }
        case 0x1:
        {
// switch_7200_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1E60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1FA8(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_21F0(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_6E80
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            pri = arg_1;
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_192 = pri;
            var_200 = arg_0;
            var_208 = 56;
            pri = fun_1E60(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_1FA8(var_216)
            var_232 = 0;
            pri = fun_2068()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_5E08(var_264, var_256, var_248, var_240)
            var_280 = 11088;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_6E80
            var_8 = 0;
            pri = fun_2068()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5E08(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_6FD0
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_07A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0920(var_136)
// lab_6FD0
            OP_JUMP switch_7200_case_default
        }
        case 0x2:
        {
// switch_7200_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_70A0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1E60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1FA8(var_72)
// lab_70A0
            var_8 = 0;
            pri = fun_2068()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5E08(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_71F0
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_07A8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0920(var_136)
// lab_71F0
            OP_JUMP switch_7200_case_default
        }
    }
}
// fun_7260
fun_7260() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 0;
    pri = fun_0498()
    pri = arg_1;
    OP_JZER lab_72D8
    var_32 = 11200;
    pri = SoundPostEvent(var_32)
// lab_72D8
    var_8 = 11400;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 11664;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0338(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_7358
fun_7358() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_73A8
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7260(var_16, var_8)
// lab_73A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0920(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_7448
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_7448
    pri = 1;
    OP_JUMP lab_7450
// lab_7448
    pri = 0;
// lab_7450
    OP_JZER lab_75E8
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_7530
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_0528(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_75D8
// lab_75E8
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0688(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_7530
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_05C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_75D8
    OP_JUMP lab_76A8
// lab_76A8
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_7720
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0730(var_32, var_24, var_16)
// lab_7720
    var_8 = 11680;
    pri = SoundPostEvent(var_8)
    var_16 = 11952;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02D8(var_24, var_16)
    var_40 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_7790
fun_7790() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = arg_6;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_4;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_07A8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0920(var_96)
    pri = EvCameraStart()
    var_112 = 0;
    var_120 = 4630544841867001856;
    var_128 = 6;
    var_136 = arg_6;
    pri = float(var_136)
    var_144 = pri;
    pri = arg_5;
    alt = 4639230104117130035;
    var_152 = pri;
    var_160 = alt;
    var_168 = 16;
    pri = fun_0060(var_160, var_152)
    var_176 = pri;
    var_184 = arg_4;
    pri = float(var_184)
    var_192 = pri;
    pri = arg_6;
    alt = 4649161684787574866;
    var_200 = pri;
    var_208 = alt;
    var_216 = 16;
    pri = fun_0060(var_208, var_200)
    var_224 = pri;
    pri = arg_5;
    alt = 4641312315257347113;
    var_232 = pri;
    var_240 = alt;
    var_248 = 16;
    pri = fun_0060(var_240, var_232)
    var_256 = pri;
    var_264 = arg_4;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 10;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 8;
    var_296 = 8;
    pri = fun_00B8(var_288)
    var_304 = 11968;
    pri = SoundPostEvent(var_304)
    var_312 = 1;
    var_320 = 4607182418800017408;
    pri = arg_6;
    OP_ADD_P_C 169
    var_328 = pri;
    pri = float(var_328)
    var_336 = pri;
    var_344 = arg_5;
    pri = float(var_344)
    var_352 = pri;
    pri = arg_4;
    OP_ADD_P_C 206
    var_360 = pri;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 12224;
    var_384 = 48;
    pri = fun_1240(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 2;
    var_400 = 4607182418800017408;
    pri = arg_6;
    OP_ADD_P_C 169
    var_408 = pri;
    pri = float(var_408)
    var_416 = pri;
    var_424 = arg_5;
    pri = float(var_424)
    var_432 = pri;
    pri = arg_4;
    OP_ADD_P_C -199
    var_440 = pri;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 12440;
    var_464 = 48;
    pri = fun_1240(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 15;
    var_480 = 8;
    pri = fun_00B8(var_472)
    var_488 = 3;
    var_496 = 2;
    var_504 = 101;
    var_512 = arg_0;
    var_520 = 32;
    pri = fun_1D08(var_512, var_504, var_496, var_488)
    var_528 = 12656;
    pri = SoundPostEvent(var_528)
    var_536 = 12896;
    pri = SoundPostEvent(var_536)
    var_544 = 15;
    var_552 = 8;
    pri = fun_00B8(var_544)
    var_560 = 5;
    var_568 = 5;
    var_576 = 8802641224559852288;
    var_584 = 24;
    pri = fun_1180(var_576, var_568, var_560)
    pri = arg_11;
    alt = -1;
    OP_JEQ lab_7D80
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 3;
    var_624 = 0;
    var_632 = arg_11;
    var_640 = 8802641224559852288;
    var_648 = 56;
    pri = fun_2338(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
// lab_7D80
    var_8 = 15;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 13120;
    pri = SoundPostEvent(var_24)
    var_32 = 45;
    var_40 = 8;
    pri = fun_00B8(var_32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_11E8(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 180;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 40;
    pri = fun_0878(var_104, var_96, var_88, var_80, var_72)
    var_120 = 30;
    var_128 = 8;
    pri = fun_00B8(var_120)
    var_136 = 0;
    pri = fun_1F10()
    pri = MsgWinClose()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0920(var_144)
    var_160 = arg_3;
    var_168 = 8;
    pri = fun_0460(var_160)
    var_176 = 0;
    pri = fun_0498()
    var_184 = 13376;
    pri = SoundPostEvent(var_184)
    var_192 = arg_2;
    var_200 = arg_1;
    var_208 = 16;
    pri = fun_0A48(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 0;
    var_240 = 90;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 48;
    pri = fun_0820(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 60;
    var_264 = 8;
    pri = fun_00B8(var_256)
    var_272 = 13608;
    pri = SoundPostEvent(var_272)
    var_280 = 13808;
    pri = SoundPostEvent(var_280)
    var_288 = 1;
    var_296 = 0;
    var_304 = 14072;
    var_312 = 8;
    var_320 = 32;
    pri = fun_0338(var_312, var_304, var_296, var_288)
    var_328 = 0;
    pri = fun_03A8()
    var_336 = 3;
    var_344 = 0;
    pri = EvCameraEnd(var_344, var_336)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0920(var_352)
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = arg_10;
    pri = float(var_408)
    var_416 = pri;
    var_424 = arg_9;
    pri = float(var_424)
    var_432 = pri;
    var_440 = arg_8;
    var_448 = arg_7;
    var_456 = 72;
    pri = fun_0528(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 1;
    var_472 = 180;
    pri = float(var_472)
    var_480 = pri;
    var_488 = 8802641224559852288;
    var_496 = 24;
    pri = fun_0730(var_488, var_480, var_472)
    var_504 = 14088;
    pri = SoundPostEvent(var_504)
    var_512 = 14360;
    var_520 = 8;
    var_528 = 16;
    pri = fun_02D8(var_520, var_512)
    var_536 = 0;
    pri = fun_03A8()
    var_544 = -3293621181990616472;
    pri = FlagReset(var_544)
    pri = 0;
    return pri;
}
// fun_8248
fun_8248() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_7358(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_82E8
fun_82E8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_62C0(var_24)
    pri = 0;
    return pri;
}
// fun_8350
fun_8350() {
    pri = g_mode;
    switch (pri) {
// switch_8460
        case default:
        {
// switch_8460_case_default
            pri = CommandNOP()
            OP_JUMP lab_84C8
// lab_84C8
            pri = 0;
            return pri;
        }
        case 0xa62f25221050cc52:
        {
// switch_8460_case_0xa62f25221050cc52
            var_8 = 0;
            pri = fun_9FF0()
            OP_JUMP lab_84C8
        }
        case 0xf6dc56867f2104a8:
        {
// switch_8460_case_0xf6dc56867f2104a8
            var_8 = 0;
            pri = fun_A240()
            OP_JUMP lab_84C8
        }
        case 0x0:
        {
// switch_8460_case_0x0
            var_8 = 0;
            pri = fun_84D8()
            OP_JUMP lab_84C8
        }
        case 0x26c874edfd526920:
        {
// switch_8460_case_0x26c874edfd526920
            var_8 = 0;
            pri = fun_A168()
            OP_JUMP lab_84C8
        }
        case 0x440bf31e5f8fb336:
        {
// switch_8460_case_0x440bf31e5f8fb336
            var_8 = 0;
            pri = fun_A0E0()
            OP_JUMP lab_84C8
        }
    }
}
// fun_84D8
fun_84D8() {
    pri = 0;
    return pri;
}
// fun_84F0
fun_84F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_64E8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8548
fun_8548() {
    pri = 0;
    return pri;
}
// fun_8560
fun_8560() {
    pri = 0;
    return pri;
}
// fun_8578
fun_8578() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4666244884909260800, 4661394939119140864, 8802641224559852288
    var_24 = 48;
    pri = fun_06D8(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -9223372036854775808, 4665419151676801024, 4661504890281918464, 7772332018018283175
    var_48 = 48;
    pri = fun_06D8(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    var_72 = -9092623507643828173;
    pri = FlagGet(var_72)
    alt = 1;
    OP_JEQ lab_96D8
    var_80 = 0;
    var_88 = 4630910759336725709;
    var_96 = 0;
    OP_PUSH5_C 4665959754056387789, 4646499371312543171, 4661287274940549038, 4666010518508242207, 4651510329585434624
    var_104 = 4662364532452978852;
    var_112 = 1;
    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_120 = 0;
    pri = fun_22A8()
    var_128 = 1;
    var_136 = 0;
    var_144 = 4641240890982006784;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH4_C 4665716019816300544, 4661394939119140864, 4607182418800017408, 8802641224559852288
    var_168 = 72;
    pri = fun_07A8(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 14376;
    pri = SoundPostEvent(var_176)
    var_184 = 14648;
    var_192 = 8;
    var_200 = 16;
    pri = fun_02D8(var_192, var_184)
    var_208 = 0;
    pri = fun_03A8()
    var_216 = 0;
    var_224 = 4632304060471443456;
    var_232 = 3;
    OP_PUSH5_C 4665518085733068308, 4646949203509698888, 4661445461678437171, 4666165027379735429, 4644427011796510966
    var_240 = 4661971402070467543;
    var_248 = 150;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_22A8()
    var_264 = 30;
    var_272 = 8;
    pri = fun_00B8(var_264)
    var_280 = 1;
    var_288 = 0;
    var_296 = 14664;
    var_304 = 1;
    var_312 = 32;
    pri = fun_0338(var_304, var_296, var_288, var_280)
    var_320 = 0;
    pri = fun_03A8()
    var_328 = 0;
    var_336 = 4630713726853028250;
    var_344 = 0;
    OP_PUSH5_C 4664176571596018811, 4651955060048637460, 4661211078784744161, 4665352455301460132, 4649732111420065055
    var_352 = 4660977322612678984;
    var_360 = 1;
    pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 0;
    pri = fun_22A8()
    OP_PUSH2_C 4616752568008179712, 4631642594276173414
    var_376 = 0;
    OP_PUSH5_C 4663841924236988908, 4651234132264537293, 4662136438765796721, 4664791198595945595, 4651663381604021043
    var_384 = 4662660048193176207;
    var_392 = 105;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 14712;
    var_408 = 15;
    var_416 = 16;
    pri = fun_02D8(var_408, var_400)
    var_424 = 90;
    var_432 = 8;
    pri = fun_00B8(var_424)
    var_440 = 1;
    var_448 = 0;
    var_456 = 14760;
    var_464 = 1;
    var_472 = 32;
    pri = fun_0338(var_464, var_456, var_448, var_440)
    var_480 = 0;
    pri = fun_03A8()
    var_488 = 0;
    var_496 = 4631642594276173414;
    var_504 = 0;
    OP_PUSH5_C 4653148865793611530, 4653492705069849641, 4661352080155890156, 4658285916059976335, 4653819040120973558
    var_512 = 4662072227286734602;
    var_520 = 1;
    pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_528 = 0;
    pri = fun_22A8()
    var_536 = 0;
    var_544 = 4631642594276173414;
    var_552 = 2;
    OP_PUSH5_C 4653148865793611530, 4653492705069849641, 4661352080155890156, 4658640024774817874, 4653784427494931169
    var_560 = 4662148258515795313;
    var_568 = 60;
    pri = EvCameraMove(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_576 = 14808;
    var_584 = 15;
    var_592 = 16;
    pri = fun_02D8(var_584, var_576)
    var_600 = 0;
    pri = fun_22A8()
    var_608 = 0;
    var_616 = 4631642594276173414;
    var_624 = 3;
    OP_PUSH5_C 4653597378576813916, 4653492705069849641, 4659565989487265710, 4666298618042510213, 4645529690017774961
    var_632 = 4661932479358844273;
    var_640 = 120;
    pri = EvCameraMove(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 90;
    var_656 = 8;
    pri = fun_00B8(var_648)
    var_664 = 1;
    var_672 = 0;
    var_680 = 4641240890982006784;
    var_688 = 0;
    var_696 = 0;
    OP_PUSH4_C 4665716019816300544, 4661504890281918464, 4607182418800017408, 7772332018018283175
    var_704 = 72;
    pri = fun_07A8(var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 0;
    pri = fun_22A8()
    var_720 = 1;
    var_728 = 0;
    var_736 = 14856;
    var_744 = 1;
    var_752 = 32;
    pri = fun_0338(var_744, var_736, var_728, var_720)
    var_760 = 0;
    pri = fun_03A8()
    var_768 = 0;
    var_776 = 4631952216750555136;
    var_784 = 0;
    OP_PUSH5_C 4664434791901802004, -4581370107904487588, 4660643225009462968, 4665933332791972332, 4647566513317997445
    var_792 = 4661666100676782981;
    var_800 = 1;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 0;
    pri = fun_22A8()
    var_816 = 0;
    var_824 = 4631952216750555136;
    var_832 = 3;
    OP_PUSH5_C 4664455979490869248, -4581370107904487588, 4660544598816451461, 4665943921088947814, 4647566513317997445
    var_840 = 4661616787580277228;
    var_848 = 120;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 14904;
    var_864 = 15;
    var_872 = 16;
    pri = fun_02D8(var_864, var_856)
    var_880 = 0;
    pri = fun_03A8()
    var_888 = 8802641224559852288;
    var_896 = 8;
    pri = fun_0920(var_888)
    var_904 = 7772332018018283175;
    var_912 = 8;
    pri = fun_0920(var_904)
    var_920 = 0;
    var_928 = 0;
    var_936 = 0;
    var_944 = 0;
    OP_PUSH2_C 8802641224559852288, 7772332018018283175
    var_952 = 48;
    pri = fun_08C8(var_944, var_936, var_928, var_920, var_912, var_904)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH2_C 7772332018018283175, 8802641224559852288
    var_992 = 48;
    pri = fun_08C8(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 7772332018018283175;
    var_1008 = 8;
    pri = fun_0920(var_1000)
    var_1016 = 8802641224559852288;
    var_1024 = 8;
    pri = fun_0920(var_1016)
    var_1032 = 0;
    var_1040 = 3;
    var_1048 = 0;
    var_1056 = 100;
    var_1064 = -1;
    OP_PUSH2_C -9110695090913947512, 7772332018018283175
    var_1072 = 56;
    pri = fun_1E60(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1080 = 1;
    var_1088 = 8;
    pri = fun_1FA8(var_1080)
    var_1096 = 0;
    var_1104 = 4631952216750555136;
    var_1112 = 0;
    OP_PUSH5_C 4663090430029636567, 4642958240183662674, 4660824182633162342, 4664793078760829092, 4651778698383542190
    var_1120 = 4661756601478865224;
    var_1128 = 1;
    pri = EvCameraMove(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 0;
    pri = fun_22A8()
    var_1144 = 0;
    var_1152 = 4631952216750555136;
    var_1160 = 2;
    OP_PUSH5_C 4663172431606836101, 4633663584608955924, 4660894661328502784, 4664875080338028626, 4650119315434902651
    var_1168 = 4661791840826535444;
    var_1176 = 240;
    pri = EvCameraMove(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1184 = 0;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 100;
    var_1216 = -1;
    OP_PUSH2_C -9110691792379062879, 7772332018018283175
    var_1224 = 56;
    pri = fun_1E60(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_1FA8(var_1232)
    var_1248 = 1;
    var_1256 = 144;
    pri = float(var_1256)
    var_1264 = pri;
    var_1272 = 8802641224559852288;
    var_1280 = 24;
    pri = fun_0730(var_1272, var_1264, var_1256)
    var_1288 = 1;
    var_1296 = 144;
    pri = float(var_1296)
    var_1304 = pri;
    var_1312 = 7772332018018283175;
    var_1320 = 24;
    pri = fun_0730(var_1312, var_1304, var_1296)
    var_1328 = 0;
    var_1336 = 4631952216750555136;
    var_1344 = 0;
    OP_PUSH5_C 4663738702085373297, 4635756351060799652, 4662887548144079340, 4664887691736399217, 4648207396655595520
    var_1352 = 4662867932856639816;
    var_1360 = 1;
    pri = EvCameraMove(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = 0;
    pri = fun_22A8()
    var_1376 = 0;
    var_1384 = 4631952216750555136;
    var_1392 = 2;
    OP_PUSH5_C 4663910984562329518, 4639774758197065155, 4662884612448033178, 4665059985208471716, 4648843002337380270
    var_1400 = 4662864997160593654;
    var_1408 = 240;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH2_C -9110692891890691090, 7772332018018283175
    var_1456 = 56;
    pri = fun_1E60(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_1FA8(var_1464)
    var_1480 = 0;
    var_1488 = 4631952216750555136;
    var_1496 = 3;
    OP_PUSH5_C 4664247688008103363, -4580439481262737981, 4661402360822628352, 4665913580065579336, 4647180892599903846
    var_1504 = 4661458248998668206;
    var_1512 = 60;
    pri = EvCameraMove(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1520 = 0;
    pri = fun_22A8()
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    OP_PUSH2_C 8802641224559852288, 7772332018018283175
    var_1560 = 48;
    pri = fun_08C8(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1568 = 5;
    var_1576 = 8;
    pri = fun_00B8(var_1568)
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = 0;
    OP_PUSH2_C 7772332018018283175, 8802641224559852288
    var_1616 = 48;
    pri = fun_08C8(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1624 = 7772332018018283175;
    var_1632 = 8;
    pri = fun_0920(var_1624)
    var_1640 = 8802641224559852288;
    var_1648 = 8;
    pri = fun_0920(var_1640)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -9110689593355806457, 7772332018018283175
    var_1696 = 56;
    pri = fun_1E60(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_1FA8(var_1704)
    var_1720 = 0;
    pri = fun_2068()
    var_1728 = -9092623507643828173;
    pri = FlagSet(var_1728)
    OP_JUMP lab_9BE8
// lab_96D8
    var_8 = 3;
    var_16 = 0;
    pri = EvCameraEnd(var_16, var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C 4640537203540230144, 4665887543630233600, 4661394939119140864, 8802641224559852288
    var_40 = 48;
    pri = fun_06D8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 15;
    var_56 = 8;
    pri = fun_00B8(var_48)
    var_64 = 1;
    var_72 = 0;
    var_80 = 4641240890982006784;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH4_C 4665716019816300544, 4661394939119140864, 4607182418800017408, 8802641224559852288
    var_104 = 72;
    pri = fun_07A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 14952;
    pri = SoundPostEvent(var_112)
    var_120 = 15224;
    var_128 = 8;
    var_136 = 16;
    pri = fun_02D8(var_128, var_120)
    var_144 = 0;
    pri = fun_03A8()
    var_152 = 1;
    var_160 = 0;
    var_168 = 4641240890982006784;
    var_176 = 0;
    var_184 = 0;
    OP_PUSH4_C 4665716019816300544, 4661504890281918464, 4607182418800017408, 7772332018018283175
    var_192 = 72;
    pri = fun_07A8(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0920(var_200)
    var_216 = 7772332018018283175;
    var_224 = 8;
    pri = fun_0920(var_216)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 8802641224559852288, 7772332018018283175
    var_264 = 48;
    pri = fun_08C8(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH2_C 7772332018018283175, 8802641224559852288
    var_304 = 48;
    pri = fun_08C8(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 7772332018018283175;
    var_320 = 8;
    pri = fun_0920(var_312)
    var_328 = 8802641224559852288;
    var_336 = 8;
    pri = fun_0920(var_328)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -9110695090913947512, 7772332018018283175
    var_384 = 56;
    pri = fun_1E60(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1FA8(var_392)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C -9110691792379062879, 7772332018018283175
    var_448 = 56;
    pri = fun_1E60(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1FA8(var_456)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C -9110692891890691090, 7772332018018283175
    var_512 = 56;
    pri = fun_1E60(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_1FA8(var_520)
    var_536 = 0;
    var_544 = 3;
    var_552 = 0;
    var_560 = 100;
    var_568 = -1;
    OP_PUSH2_C -9110689593355806457, 7772332018018283175
    var_576 = 56;
    pri = fun_1E60(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 1;
    var_592 = 8;
    pri = fun_1FA8(var_584)
    var_600 = 0;
    pri = fun_2068()
// lab_9BE8
    var_8 = 1;
    var_16 = 0;
    var_24 = 50;
    pri = float(var_24)
    var_32 = pri;
    var_40 = -90;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 1;
    var_64 = 8300;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 4480;
    pri = float(var_80)
    var_88 = pri;
    OP_PUSH2_C 4611686018427387904, 7772332018018283175
    var_96 = 72;
    pri = fun_07A8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 15;
    var_112 = 8;
    pri = fun_00B8(var_104)
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 180;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 8802641224559852288;
    var_168 = 40;
    pri = fun_0878(var_160, var_152, var_144, var_136, var_128)
    var_176 = 15240;
    pri = SoundPostEvent(var_176)
    var_184 = 3;
    var_192 = 60;
    pri = EvCameraEnd(var_192, var_184)
    var_200 = 60;
    var_208 = 8;
    pri = fun_00B8(var_200)
    var_216 = 7772332018018283175;
    var_224 = 8;
    pri = fun_0920(var_216)
    var_232 = 8802641224559852288;
    var_240 = 8;
    pri = fun_0920(var_232)
    var_248 = 15464;
    pri = SoundPostEvent(var_248)
    pri = 0;
    return pri;
}
// fun_9E40
fun_9E40() {
    pri = 0;
    return pri;
}
// fun_9E58
fun_9E58() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_9E98
fun_9E98() {
    var_8 = 670;
    var_16 = 8;
    pri = fun_82E8(var_8)
    var_24 = -8408427875907330823;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_9EF8
fun_9EF8() {
    var_8 = 650;
    var_16 = 8;
    pri = fun_82E8(var_8)
    pri = 0;
    return pri;
}
// fun_9F30
fun_9F30() {
    OP_PUSH2_C 7772332018018283175, -4398500008829458911
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9F78
fun_9F78() {
    var_8 = 180;
    var_16 = -8459470141266686975;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 3133527603482252227, -2500388889229905346
    var_40 = 4;
    var_48 = 56;
    pri = fun_8248(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9FF0
fun_9FF0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_84F0()
    var_16 = 0;
    pri = fun_8548()
    var_24 = 0;
    pri = fun_8560()
    var_32 = 0;
    pri = fun_8578()
    var_40 = 0;
    pri = fun_9E40()
    var_48 = 0;
    pri = fun_9E58()
    var_56 = 0;
    pri = fun_9F30()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A0E0
fun_A0E0() {
    var_8 = 0;
    pri = fun_8548()
    var_16 = 0;
    pri = fun_9E58()
    var_24 = 0;
    pri = fun_9E98()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_A168
fun_A168() {
    pri = 15728;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 8200;
    var_80 = 4250;
    OP_PUSH_P_ADR -64
    var_88 = 7772332018018283175;
    var_96 = 32;
    pri = fun_6800(var_88, var_80, var_72, var_64)
    OP_JZER lab_A228
    var_104 = 0;
    pri = fun_9EF8()
    var_112 = 0;
    pri = fun_9F78()
// lab_A228
    pri = 0;
    return pri;
}
// fun_A240
fun_A240() {
    var_8 = 0;
    pri = fun_9E98()
    var_16 = 23;
    var_24 = 26500;
    var_32 = 20000;
    OP_PUSH2_C 3134377525970670105, -2501238811718323224
    var_40 = 1300;
    var_48 = 1230;
    var_56 = 4250;
    var_64 = 4;
    var_72 = 15792;
    OP_PUSH2_C -1733659085889459171, 2767629335847248714
    var_80 = 96;
    pri = fun_7790(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    pri = 0;
    return pri;
}
