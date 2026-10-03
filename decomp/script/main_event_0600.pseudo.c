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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1298(var_8)
    OP_JZER lab_0980
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12C8(var_24)
    OP_JNZ lab_0980
    pri = 0;
    return pri;
// lab_0980
    OP_JUMP lab_0990
// lab_0990
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09F0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0990
    pri = 0;
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B28
    pri = 0;
    return pri;
// lab_0B28
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B68
// lab_0B68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1298(var_8)
    OP_JNZ lab_0BF0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BE0
    pri = 0;
    return pri;
// lab_0BF0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C38
    pri = 0;
    return pri;
// lab_0C38
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CE0(var_8)
    pri = 0;
    return pri;
// lab_0C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B68
    pri = 0;
    return pri;
// lab_0BE0
    OP_JUMP lab_0C38
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D68
    pri = 0;
    return pri;
// lab_0D68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1298(var_8)
    OP_JZER lab_0E98
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DC0
    OP_ZERO_P_S 64
// lab_0E98
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED0
    OP_CONST_S 64, 1
// lab_0ED0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F08
    OP_CONST_S 72, 1
// lab_0F08
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
// lab_0DC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE8
    OP_ZERO_P_S 72
// lab_0DE8
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
    OP_JUMP lab_0FA8
// lab_0FA8
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1078(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_10F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1130(var_24)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
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
// fun_1298
fun_1298() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12F8
fun_12F8() {
    OP_JUMP lab_1310
// lab_1310
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13A0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1390
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    pri = 0;
    return pri;
// lab_13A0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1430
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1420
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    pri = 0;
    return pri;
// lab_1430
    pri = 0;
    return pri;
// lab_1420
    OP_JUMP lab_1440
// lab_1440
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1310
    pri = 0;
    return pri;
// lab_1390
    OP_JUMP lab_1440
}
// fun_1480
fun_1480() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12F8(var_40)
    pri = 0;
    return pri;
}
// fun_1508
fun_1508() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1568
fun_1568() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1598
fun_1598() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15D0
fun_15D0() {
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
// switch_1BE8
        case default:
        {
// switch_1BE8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C30
// lab_1C30
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
            OP_JNZ lab_1CD8
            var_88 = 0;
            pri = fun_1EF8()
// lab_1CD8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BE8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17D0
                case default:
                {
// switch_17D0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1848
// lab_1848
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_17D0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1848
                }
                case 0x1:
                {
// switch_17D0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1848
                }
                case 0x2:
                {
// switch_17D0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1848
                }
                case 0x3:
                {
// switch_17D0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1848
                }
                case 0x4:
                {
// switch_17D0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1848
                }
                case 0x5:
                {
// switch_17D0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1848
                }
            }
        }
        case 0x65:
        {
// switch_1BE8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1988
                case default:
                {
// switch_1988_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A00
// lab_1A00
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_1988_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A00
                }
                case 0x1:
                {
// switch_1988_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A00
                }
                case 0x2:
                {
// switch_1988_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A00
                }
                case 0x3:
                {
// switch_1988_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A00
                }
                case 0x4:
                {
// switch_1988_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A00
                }
                case 0x5:
                {
// switch_1988_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A00
                }
            }
        }
        case 0x66:
        {
// switch_1BE8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B40
                case default:
                {
// switch_1B40_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BB8
// lab_1BB8
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_1B40_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1BB8
                }
                case 0x1:
                {
// switch_1B40_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1BB8
                }
                case 0x2:
                {
// switch_1B40_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1BB8
                }
                case 0x3:
                {
// switch_1B40_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BB8
                }
                case 0x4:
                {
// switch_1B40_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1BB8
                }
                case 0x5:
                {
// switch_1B40_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1BB8
                }
            }
        }
    }
}
// fun_1CF0
fun_1CF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_15D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AA8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E00
    pri = 1;
    return pri;
// lab_1E00
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E48
fun_1E48() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    arg_2 = pri;
// lab_1E98
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF8
fun_1EF8() {
    OP_JUMP lab_1F10
// lab_1F10
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F50
    pri = 0;
    return pri;
// lab_1F50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F10
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    var_8 = 0;
    pri = fun_1EF8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2040
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_2040
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_20B0
// lab_20B0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20F0
    OP_JUMP lab_2120
// lab_20F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20B0
// lab_2120
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
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
// fun_21D8
fun_21D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2250()
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2290
fun_2290() {
    OP_JUMP lab_22A8
// lab_22A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_22E0
    pri = 0;
    return pri;
// lab_22E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22A8
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    pri = arg_6;
    OP_JNZ lab_2358
    var_8 = 0;
    pri = fun_0FB8()
// lab_2358
    pri = arg_1;
    switch (pri) {
// switch_38C0
        case default:
        {
// switch_38C0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C10
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C10
            pri = 1;
            OP_JUMP lab_3C18
// lab_3C10
            pri = 0;
// lab_3C18
            OP_JZER lab_3D70
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA8(var_24, var_16)
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
            OP_JUMP lab_3DD0
// lab_3D70
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
// lab_3DD0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E30
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E90
// lab_3E30
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E90
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E90
            pri = arg_2;
            OP_JZER lab_3ED0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3ED0
            var_8 = 0;
            pri = fun_0FF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38C0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1:
        {
// switch_38C0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x2:
        {
// switch_38C0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x3:
        {
// switch_38C0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x4:
        {
// switch_38C0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x5:
        {
// switch_38C0_case_0x5
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x6:
        {
// switch_38C0_case_0x6
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x7:
        {
// switch_38C0_case_0x7
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x8:
        {
// switch_38C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x9:
        {
// switch_38C0_case_0x9
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xa:
        {
// switch_38C0_case_0xa
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xb:
        {
// switch_38C0_case_0xb
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xc:
        {
// switch_38C0_case_0xc
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xd:
        {
// switch_38C0_case_0xd
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xe:
        {
// switch_38C0_case_0xe
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0xf:
        {
// switch_38C0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x10:
        {
// switch_38C0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x11:
        {
// switch_38C0_case_0x11
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x12:
        {
// switch_38C0_case_0x12
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x13:
        {
// switch_38C0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x14:
        {
// switch_38C0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x15:
        {
// switch_38C0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x16:
        {
// switch_38C0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x17:
        {
// switch_38C0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x18:
        {
// switch_38C0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x19:
        {
// switch_38C0_case_0x19
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
            pri = fun_0D18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1a:
        {
// switch_38C0_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A68(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A30(var_48, var_40)
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
            pri = fun_0D18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1b:
        {
// switch_38C0_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A68(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A30(var_48, var_40)
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
            pri = fun_0D18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1c:
        {
// switch_38C0_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A68(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A30(var_48, var_40)
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
            pri = fun_0D18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1d:
        {
// switch_38C0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1e:
        {
// switch_38C0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x1f:
        {
// switch_38C0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x20:
        {
// switch_38C0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x21:
        {
// switch_38C0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x22:
        {
// switch_38C0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x23:
        {
// switch_38C0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x24:
        {
// switch_38C0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x25:
        {
// switch_38C0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x26:
        {
// switch_38C0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x27:
        {
// switch_38C0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x28:
        {
// switch_38C0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
        case 0x29:
        {
// switch_38C0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38C0_case_default
        }
    }
}
// fun_3F00
fun_3F00() {
    pri = arg_4;
    OP_JNZ lab_3F38
    var_8 = 0;
    pri = fun_0FB8()
// lab_3F38
    pri = arg_1;
    switch (pri) {
// switch_5310
        case default:
        {
// switch_5310_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8968;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1298(var_264)
            OP_JZER lab_58D8
            pri = arg_3;
            switch (pri) {
// switch_5880
                case default:
                {
// switch_5880_case_default
                    OP_JUMP lab_5B90
// lab_5B90
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5C00
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5C00
                    var_8 = 0;
                    pri = fun_0FF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5880_case_0x1
                    var_8 = 32;
                    var_16 = 9120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5880_case_default
                }
                case 0x2:
                {
// switch_5880_case_0x2
                    var_8 = 32;
                    var_16 = 9224;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5880_case_default
                }
                case 0x3:
                {
// switch_5880_case_0x3
                    var_8 = 32;
                    var_16 = 9024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5880_case_default
                }
            }
// lab_58D8
            pri = arg_1;
            OP_JZER lab_5928
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5928
            pri = 0;
            OP_JUMP lab_5930
// lab_5928
            pri = 1;
// lab_5930
            OP_JZER lab_5998
            var_8 = 9320;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AA8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5998
            pri = 1;
            OP_JUMP lab_59A0
// lab_5998
            pri = 0;
// lab_59A0
            OP_JZER lab_59F0
            var_8 = 32;
            var_16 = 9416;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5B90
// lab_59F0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5A58
            var_8 = 32;
            var_16 = 9576;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5B90
// lab_5A58
            var_16 = 9696;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA8(var_24, var_16)
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
// switch_5310_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1:
        {
// switch_5310_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2:
        {
// switch_5310_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3:
        {
// switch_5310_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x4:
        {
// switch_5310_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x5:
        {
// switch_5310_case_0x5
            var_8 = 1;
            var_16 = 8448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A68(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CE0(var_40)
            OP_JUMP switch_5310_case_default
        }
        case 0x6:
        {
// switch_5310_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x7:
        {
// switch_5310_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x8:
        {
// switch_5310_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x9:
        {
// switch_5310_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xa:
        {
// switch_5310_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xb:
        {
// switch_5310_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xc:
        {
// switch_5310_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xd:
        {
// switch_5310_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xe:
        {
// switch_5310_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0xf:
        {
// switch_5310_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x10:
        {
// switch_5310_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x11:
        {
// switch_5310_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x12:
        {
// switch_5310_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x13:
        {
// switch_5310_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x14:
        {
// switch_5310_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x15:
        {
// switch_5310_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x16:
        {
// switch_5310_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x17:
        {
// switch_5310_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x18:
        {
// switch_5310_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x19:
        {
// switch_5310_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1a:
        {
// switch_5310_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1b:
        {
// switch_5310_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1c:
        {
// switch_5310_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1d:
        {
// switch_5310_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1e:
        {
// switch_5310_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x1f:
        {
// switch_5310_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x20:
        {
// switch_5310_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x21:
        {
// switch_5310_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x22:
        {
// switch_5310_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x23:
        {
// switch_5310_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x24:
        {
// switch_5310_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x25:
        {
// switch_5310_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x26:
        {
// switch_5310_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x27:
        {
// switch_5310_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x28:
        {
// switch_5310_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x29:
        {
// switch_5310_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2a:
        {
// switch_5310_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2b:
        {
// switch_5310_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2c:
        {
// switch_5310_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2d:
        {
// switch_5310_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2e:
        {
// switch_5310_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x2f:
        {
// switch_5310_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x30:
        {
// switch_5310_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x31:
        {
// switch_5310_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x32:
        {
// switch_5310_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x33:
        {
// switch_5310_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x34:
        {
// switch_5310_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x35:
        {
// switch_5310_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x36:
        {
// switch_5310_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x37:
        {
// switch_5310_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x38:
        {
// switch_5310_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x39:
        {
// switch_5310_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3a:
        {
// switch_5310_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3b:
        {
// switch_5310_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3c:
        {
// switch_5310_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8544;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3d:
        {
// switch_5310_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8720;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
        case 0x3e:
        {
// switch_5310_case_0x3e
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A68(var_24, var_16, var_8)
            OP_JUMP switch_5310_case_default
        }
    }
}
// fun_5C30
fun_5C30() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5D30
        case default:
        {
// switch_5D30_case_default
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
// switch_5D30_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5D30_case_default
        }
        case 0x1:
        {
// switch_5D30_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5D30_case_default
        }
        case 0x2:
        {
// switch_5D30_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5D30_case_default
        }
        case 0x3:
        {
// switch_5D30_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5D30_case_default
        }
    }
}
// fun_5DF0
fun_5DF0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5E40
// lab_5E40
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9864;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5EB8
    OP_JUMP lab_5EE8
// lab_5EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_5E40
// lab_5EE8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5F70
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3F00(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1568(var_56)
// lab_5F70
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5FD8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1038(var_24, var_16)
// lab_5FD8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1038(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6098
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AE0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_08B8(var_88, var_80, var_72, var_64, var_56)
// lab_6098
    pri = IsPlayerRideBicycle()
    OP_JZER lab_60D8
    pri = 0;
    return pri;
// lab_60D8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6220
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 9984;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A30(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_61E8
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_6220
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0908(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0908(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AE0(var_40)
    pri = 0;
    return pri;
// lab_61E8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1038(var_16, var_8)
}
// fun_62A8
fun_62A8() {
    pri = 10120;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6330
// lab_6330
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_64B0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_64A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_63F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_63F0
    pri = 0;
    OP_JUMP lab_63F8
// lab_64B0
    pri = 0;
    return pri;
// lab_64A0
    OP_JUMP lab_6328
// lab_6328
    OP_INC_P_S -936
// lab_63F0
    pri = 1;
// lab_63F8
    OP_JZER lab_6470
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6468
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6470
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6468
}
// fun_64D0
fun_64D0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6568
    var_8 = 1;
    var_16 = 0;
    var_24 = 11040;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1540()
// lab_6568
    pri = arg_4;
    OP_JZER lab_65A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1598(var_8)
// lab_65A0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_65F8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_65F8
    pri = 0;
    OP_JUMP lab_6600
// lab_65F8
    pri = 1;
// lab_6600
    OP_JZER lab_66C8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_66C8
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_66A0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1480(var_32, var_24)
    OP_JUMP lab_66C8
// lab_66C8
    pri = arg_2;
    OP_JZER lab_67A0
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_6770
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1038(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07B0(var_40)
    OP_JUMP lab_67A0
// lab_67A0
    pri = arg_3;
    OP_JZER lab_67D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1508(var_8)
// lab_67D8
    pri = 0;
    return pri;
// lab_6770
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1038(var_16, var_8)
// lab_66A0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1480(var_16, var_8)
}
// fun_67E8
fun_67E8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0908(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_5C30(var_72, var_64, var_56, var_48, var_40, var_32)
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
    pri = fun_1E48(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1F90(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_6980
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2080(var_184, var_176, var_168)
// lab_6980
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2080(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2080(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2168(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_71E8
        case default:
        {
// switch_71E8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_71E8_case_0x0
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
            pri = fun_1E48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F90(var_72)
            var_88 = 0;
            pri = fun_2050()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_5DF0(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_6C48
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
            pri = fun_07E8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_0908(var_216)
// lab_6C48
            OP_JUMP switch_71E8_case_default
        }
        case 0x1:
        {
// switch_71E8_case_0x1
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
            pri = fun_1E48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F90(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_21D8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_6E68
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
            pri = fun_1E48(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_1F90(var_216)
            var_232 = 0;
            pri = fun_2050()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_5DF0(var_264, var_256, var_248, var_240)
            var_280 = 11088;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_6E68
            var_8 = 0;
            pri = fun_2050()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5DF0(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_6FB8
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
            pri = fun_07E8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0908(var_136)
// lab_6FB8
            OP_JUMP switch_71E8_case_default
        }
        case 0x2:
        {
// switch_71E8_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_7088
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
            pri = fun_1E48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F90(var_72)
// lab_7088
            var_8 = 0;
            pri = fun_2050()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5DF0(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_71D8
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
            pri = fun_07E8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0908(var_136)
// lab_71D8
            OP_JUMP switch_71E8_case_default
        }
    }
}
// fun_7248
fun_7248() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 0;
    pri = fun_0498()
    pri = arg_1;
    OP_JZER lab_72C0
    var_32 = 11200;
    pri = SoundPostEvent(var_32)
// lab_72C0
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
// fun_7340
fun_7340() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_7390
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7248(var_16, var_8)
// lab_7390
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0908(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_7430
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_7430
    pri = 1;
    OP_JUMP lab_7438
// lab_7430
    pri = 0;
// lab_7438
    OP_JZER lab_75D0
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_7518
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
    OP_JUMP lab_75C0
// lab_75D0
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
// lab_7518
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
// lab_75C0
    OP_JUMP lab_7690
// lab_7690
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_7708
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0730(var_32, var_24, var_16)
// lab_7708
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
// fun_7778
fun_7778() {
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
    pri = fun_07E8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0908(var_96)
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
    pri = fun_1228(var_376, var_368, var_360, var_352, var_344, var_336)
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
    pri = fun_1228(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 15;
    var_480 = 8;
    pri = fun_00B8(var_472)
    var_488 = 3;
    var_496 = 2;
    var_504 = 101;
    var_512 = arg_0;
    var_520 = 32;
    pri = fun_1CF0(var_512, var_504, var_496, var_488)
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
    pri = fun_1168(var_576, var_568, var_560)
    pri = arg_11;
    alt = -1;
    OP_JEQ lab_7D68
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 3;
    var_624 = 0;
    var_632 = arg_11;
    var_640 = 8802641224559852288;
    var_648 = 56;
    pri = fun_2320(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
// lab_7D68
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
    pri = fun_11D0(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 180;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 40;
    pri = fun_08B8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 30;
    var_128 = 8;
    pri = fun_00B8(var_120)
    var_136 = 0;
    pri = fun_1EF8()
    pri = MsgWinClose()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0908(var_144)
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
    pri = fun_0A30(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 0;
    var_240 = 90;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 48;
    pri = fun_0860(var_240, var_232, var_224, var_216, var_208, var_200)
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
    pri = fun_0908(var_352)
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
// fun_8230
fun_8230() {
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
    pri = fun_7340(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_82D0
fun_82D0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_62A8(var_24)
    pri = 0;
    return pri;
}
// fun_8338
fun_8338() {
    pri = g_mode;
    switch (pri) {
// switch_8448
        case default:
        {
// switch_8448_case_default
            pri = CommandNOP()
            OP_JUMP lab_84B0
// lab_84B0
            pri = 0;
            return pri;
        }
        case 0x9745d75b93d105f6:
        {
// switch_8448_case_0x9745d75b93d105f6
            var_8 = 0;
            pri = fun_A3C8()
            OP_JUMP lab_84B0
        }
        case 0xa635b122105625e4:
        {
// switch_8448_case_0xa635b122105625e4
            var_8 = 0;
            pri = fun_A178()
            OP_JUMP lab_84B0
        }
        case 0xd0e653473700144e:
        {
// switch_8448_case_0xd0e653473700144e
            var_8 = 0;
            pri = fun_A2F0()
            OP_JUMP lab_84B0
        }
        case 0x0:
        {
// switch_8448_case_0x0
            var_8 = 0;
            pri = fun_84C0()
            OP_JUMP lab_84B0
        }
        case 0x43f76f1e5f7e29e0:
        {
// switch_8448_case_0x43f76f1e5f7e29e0
            var_8 = 0;
            pri = fun_A268()
            OP_JUMP lab_84B0
        }
    }
}
// fun_84C0
fun_84C0() {
    pri = 0;
    return pri;
}
// fun_84D8
fun_84D8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_64D0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8530
fun_8530() {
    var_8 = 600;
    var_16 = 8;
    pri = fun_82D0(var_8)
    pri = 0;
    return pri;
}
// fun_8568
fun_8568() {
    pri = 0;
    return pri;
}
// fun_8580
fun_8580() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4673311446140977152, 4659585142979821568, 8802641224559852288
    var_24 = 48;
    pri = fun_06D8(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4672843878821265408, 4660596693677375488, 7428290664266241520
    var_48 = 48;
    pri = fun_06D8(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_0770(var_64, var_56)
    var_80 = 1;
    var_88 = 8;
    pri = fun_00B8(var_80)
    var_96 = 5877257304532669742;
    pri = FlagGet(var_96)
    alt = 1;
    OP_JEQ lab_96A0
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C -4573117173626400932, 4651890496725854454, 4659588045690518897, 4631804442387782042, 4651638312738907750
    var_128 = 4659588683407263007;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_2290()
    var_152 = 14376;
    pri = SoundPostEvent(var_152)
    var_160 = 14648;
    var_168 = 8;
    var_176 = 16;
    pri = fun_02D8(var_168, var_160)
    var_184 = 0;
    pri = fun_03A8()
    var_192 = 0;
    var_200 = 4634147721568898253;
    var_208 = 6;
    OP_PUSH5_C -4595695425000455537, 4650789489762264678, 4659588661417030451, 4650138314995830620, 4652577339649493565
    var_216 = 4659590398645402337;
    var_224 = 120;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 0;
    pri = fun_2290()
    var_240 = 0;
    var_248 = 4625393849793196851;
    var_256 = 3;
    OP_PUSH5_C 4671504269588111032, 4640695885058350776, 4661984882083024077, 4671281984071102628, 4641079746557839933
    var_264 = 4662265807303920845;
    var_272 = 240;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 180;
    var_288 = 8;
    pri = fun_00B8(var_280)
    var_296 = 1;
    var_304 = 0;
    var_312 = 4641240890982006784;
    var_320 = 0;
    var_328 = 0;
    OP_PUSH4_C 4672844153699172352, 4659585142979821568, 4607182418800017408, 8802641224559852288
    var_336 = 72;
    pri = fun_07E8(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 50;
    var_352 = 8;
    pri = fun_00B8(var_344)
    var_360 = 1;
    var_368 = 0;
    var_376 = 14664;
    var_384 = 1;
    var_392 = 32;
    pri = fun_0338(var_384, var_376, var_368, var_360)
    var_400 = 0;
    pri = fun_03A8()
    var_408 = 0;
    var_416 = 4631952216750555136;
    var_424 = 0;
    OP_PUSH5_C 4672913027107536241, 4640991785627617853, 4660416549692280668, 4672907996841839165, 4641088190807141253
    var_432 = 4660433218288557752;
    var_440 = 1;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 0;
    pri = fun_2290()
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 2;
    OP_PUSH5_C 4673160851530878812, 4644354707911868416, 4660370370203914076, 4673165813077099151, 4644465538683948237
    var_480 = 4660383322450889277;
    var_488 = 360;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 14712;
    var_504 = 30;
    var_512 = 16;
    pri = fun_02D8(var_504, var_496)
    var_520 = 240;
    var_528 = 8;
    pri = fun_00B8(var_520)
    var_536 = 8802641224559852288;
    var_544 = 8;
    pri = fun_0908(var_536)
    var_552 = 1;
    var_560 = 0;
    var_568 = 50;
    pri = float(var_568)
    var_576 = pri;
    var_584 = 0;
    var_592 = 0;
    OP_PUSH4_C 4672843878821265408, 4659871016003043328, 4611686018427387904, 7428290664266241520
    var_600 = 72;
    pri = fun_07E8(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 7428290664266241520;
    var_616 = 8;
    pri = fun_0908(var_608)
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    var_648 = 90;
    pri = float(var_648)
    var_656 = pri;
    var_664 = 8802641224559852288;
    var_672 = 40;
    pri = fun_08B8(var_664, var_656, var_648, var_640, var_632)
    var_680 = 30;
    var_688 = 8;
    pri = fun_00B8(var_680)
    var_696 = 8802641224559852288;
    var_704 = 8;
    pri = fun_0908(var_696)
    var_712 = 0;
    var_720 = 4630277440639126733;
    var_728 = 0;
    OP_PUSH5_C 4672868823991320576, 4637141207946216079, 4659407154037517189, 4672871583765506294, 4637056061765761106
    var_736 = 4659369198896126362;
    var_744 = 1;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 0;
    pri = fun_2290()
    var_760 = 0;
    var_768 = 4630277440639126733;
    var_776 = 2;
    OP_PUSH5_C 4672863708513472348, 4637141207946216079, 4659383338615659561, 4672866465538878996, 4637056061765761106
    var_784 = 4659345405464501289;
    var_792 = 180;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 101;
    var_832 = -1;
    OP_PUSH2_C 7972442592185671395, 7428290664266241520
    var_840 = 56;
    pri = fun_1E48(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1F90(var_848)
    var_864 = 0;
    var_872 = 4630178924397278003;
    var_880 = 0;
    OP_PUSH5_C 4672660373079368663, 4619612353771559977, 4659767002203055718, 4672528467418163446, 4636017419101698785
    var_888 = 4659854413377463910;
    var_896 = 1;
    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = 0;
    pri = fun_2290()
    var_912 = 0;
    var_920 = 4630361883132139930;
    var_928 = 29;
    OP_PUSH5_C 4672611705945944228, 4630484324747009065, 4659799239883982111, 4672479800284739011, 4638165776861442867
    var_936 = 4659886651058390303;
    var_944 = 15;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 1;
    var_960 = 8;
    pri = fun_00B8(var_952)
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    var_992 = 180;
    pri = float(var_992)
    var_1000 = pri;
    var_1008 = 7428290664266241520;
    var_1016 = 40;
    pri = fun_08B8(var_1008, var_1000, var_992, var_984, var_976)
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    var_1048 = 180;
    pri = float(var_1048)
    var_1056 = pri;
    var_1064 = 8802641224559852288;
    var_1072 = 40;
    pri = fun_08B8(var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1080 = 0;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 101;
    var_1112 = -1;
    OP_PUSH2_C 7972443691697299606, 7428290664266241520
    var_1120 = 56;
    pri = fun_1E48(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1128 = 1;
    var_1136 = 8;
    pri = fun_1F90(var_1128)
    var_1144 = 0;
    pri = fun_2290()
    var_1152 = 0;
    var_1160 = 4629644121941527757;
    var_1168 = 0;
    OP_PUSH5_C 4672117731105712374, 4645043441995507302, 4659909630851410821, 4672226299632618045, 4648267122127216312
    var_1176 = 4660330523902523474;
    var_1184 = 1;
    pri = EvCameraMove(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1192 = 0;
    pri = fun_2290()
    var_1200 = 0;
    var_1208 = 4629644121941527757;
    var_1216 = 2;
    OP_PUSH5_C 4672107544130481029, 4646524879982307574, 4659870136393741107, 4672216112657386701, 4649007841120616448
    var_1224 = 4660291051435086316;
    var_1232 = 60;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 45;
    var_1248 = 8;
    pri = fun_00B8(var_1240)
    var_1256 = 7428290664266241520;
    var_1264 = 8;
    pri = fun_0908(var_1256)
    var_1272 = 8802641224559852288;
    var_1280 = 8;
    pri = fun_0908(var_1272)
    var_1288 = 0;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 101;
    var_1320 = -1;
    OP_PUSH2_C 7972444791208927817, 7428290664266241520
    var_1328 = 56;
    pri = fun_1E48(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_1F90(var_1336)
    var_1352 = 0;
    pri = fun_2290()
    var_1360 = 0;
    pri = fun_2050()
    var_1368 = 1;
    var_1376 = 1;
    OP_PUSH4_C 4640537203540230144, 4672846627600334848, 4659827035537932288, 7428290664266241520
    var_1384 = 48;
    pri = fun_06D8(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1392 = 0;
    var_1400 = 4631952216750555136;
    var_1408 = 3;
    OP_PUSH5_C 4672896251308875448, 4637615493281973535, 4659559106544475832, 4673004113399560274, 4645810285385183396
    var_1416 = 4659556709609127281;
    var_1424 = 60;
    pri = EvCameraMove(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1432 = 0;
    pri = fun_2290()
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_00B8(var_1440)
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = 0;
    var_1480 = -90;
    pri = float(var_1480)
    var_1488 = pri;
    var_1496 = 7428290664266241520;
    var_1504 = 40;
    pri = fun_08B8(var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 90;
    pri = float(var_1536)
    var_1544 = pri;
    var_1552 = 8802641224559852288;
    var_1560 = 40;
    pri = fun_08B8(var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1568 = 0;
    var_1576 = 3;
    var_1584 = 0;
    var_1592 = 100;
    var_1600 = -1;
    OP_PUSH2_C 7972445890720556028, 7428290664266241520
    var_1608 = 56;
    pri = fun_1E48(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 1;
    var_1624 = 8;
    pri = fun_1F90(var_1616)
    var_1632 = 0;
    pri = fun_2050()
    var_1640 = 0;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 101;
    var_1672 = -1;
    OP_PUSH2_C 7972446990232184239, 7428290664266241520
    var_1680 = 56;
    pri = fun_1E48(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_1F90(var_1688)
    var_1704 = 0;
    pri = fun_2050()
    var_1712 = 7428290664266241520;
    var_1720 = 8;
    pri = fun_0908(var_1712)
    var_1728 = 8802641224559852288;
    var_1736 = 8;
    pri = fun_0908(var_1728)
    var_1744 = 5877257304532669742;
    pri = FlagSet(var_1744)
    OP_JUMP lab_9D18
// lab_96A0
    var_8 = 3;
    var_16 = 0;
    pri = EvCameraEnd(var_16, var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C 4640537203540230144, 4672931015117766656, 4659585142979821568, 8802641224559852288
    var_40 = 48;
    pri = fun_06D8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C -4587338432941916160, 4672843878821265408, 4660596693677375488, 7428290664266241520
    var_64 = 48;
    pri = fun_06D8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 15;
    var_80 = 8;
    pri = fun_00B8(var_72)
    var_88 = 1;
    var_96 = 0;
    var_104 = 4641240890982006784;
    var_112 = 0;
    var_120 = 0;
    var_128 = 25884;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 3350;
    pri = float(var_144)
    var_152 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_160 = 72;
    pri = fun_07E8(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 14760;
    pri = SoundPostEvent(var_168)
    var_176 = 15032;
    var_184 = 8;
    var_192 = 16;
    pri = fun_02D8(var_184, var_176)
    var_200 = 0;
    pri = fun_03A8()
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_0908(var_208)
    var_224 = 1;
    var_232 = 0;
    var_240 = 50;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 0;
    var_264 = 0;
    OP_PUSH4_C 4672846627600334848, 4659827035537932288, 4611686018427387904, 7428290664266241520
    var_272 = 72;
    pri = fun_07E8(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 7428290664266241520;
    var_288 = 8;
    pri = fun_0908(var_280)
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 90;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 8802641224559852288;
    var_344 = 40;
    pri = fun_08B8(var_336, var_328, var_320, var_312, var_304)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0908(var_352)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 101;
    var_400 = -1;
    OP_PUSH2_C 7972442592185671395, 7428290664266241520
    var_408 = 56;
    pri = fun_1E48(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1F90(var_416)
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 101;
    var_464 = -1;
    OP_PUSH2_C 7972443691697299606, 7428290664266241520
    var_472 = 56;
    pri = fun_1E48(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1F90(var_480)
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = 180;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 7428290664266241520;
    var_544 = 40;
    pri = fun_08B8(var_536, var_528, var_520, var_512, var_504)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 101;
    var_584 = -1;
    OP_PUSH2_C 7972444791208927817, 7428290664266241520
    var_592 = 56;
    pri = fun_1E48(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 7428290664266241520;
    var_608 = 8;
    pri = fun_0908(var_600)
    var_616 = 1;
    var_624 = 8;
    pri = fun_1F90(var_616)
    var_632 = 0;
    var_640 = 0;
    var_648 = 0;
    var_656 = -90;
    pri = float(var_656)
    var_664 = pri;
    var_672 = 7428290664266241520;
    var_680 = 40;
    pri = fun_08B8(var_672, var_664, var_656, var_648, var_640)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 101;
    var_720 = -1;
    OP_PUSH2_C 7972446990232184239, 7428290664266241520
    var_728 = 56;
    pri = fun_1E48(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 7428290664266241520;
    var_744 = 8;
    pri = fun_0908(var_736)
    var_752 = 1;
    var_760 = 8;
    pri = fun_1F90(var_752)
    var_768 = 0;
    pri = fun_2050()
// lab_9D18
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_08B8(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 7428290664266241520;
    var_112 = 40;
    pri = fun_08B8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 7428290664266241520;
    var_128 = 8;
    pri = fun_0908(var_120)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0908(var_136)
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 60;
    OP_PUSH2_C 4611686018427387904, 7428290664266241520
    var_184 = 48;
    pri = fun_0860(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 15048;
    pri = SoundPostEvent(var_192)
    var_200 = 3;
    var_208 = 60;
    pri = EvCameraEnd(var_208, var_200)
    var_216 = 0;
    var_224 = 8802641224559852288;
    var_232 = 16;
    pri = fun_0770(var_224, var_216)
    var_240 = 60;
    var_248 = 8;
    pri = fun_00B8(var_240)
    var_256 = 15272;
    pri = SoundPostEvent(var_256)
    var_264 = 7428290664266241520;
    var_272 = 8;
    pri = fun_0908(var_264)
    pri = 0;
    return pri;
}
// fun_9F78
fun_9F78() {
    pri = 0;
    return pri;
}
// fun_9F90
fun_9F90() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_9FD0
fun_9FD0() {
    var_8 = 610;
    var_16 = 8;
    pri = fun_82D0(var_8)
    var_24 = -5753047856625536358;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_A030
fun_A030() {
    var_8 = 590;
    var_16 = 8;
    pri = fun_82D0(var_8)
    var_24 = 0;
    var_32 = 7474429120239519668;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_A098
fun_A098() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4673146244518903808, 4659585142979821568, 7428290664266241520
    var_24 = 48;
    pri = fun_06D8(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    pri = 0;
    return pri;
}
// fun_A100
fun_A100() {
    var_8 = 180;
    var_16 = -8914110537742719526;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 5283455131070743918, 3971602330360908115
    var_40 = 5;
    var_48 = 56;
    pri = fun_8230(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_A178
fun_A178() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_84D8()
    var_16 = 0;
    pri = fun_8530()
    var_24 = 0;
    pri = fun_8568()
    var_32 = 0;
    pri = fun_8580()
    var_40 = 0;
    pri = fun_9F78()
    var_48 = 0;
    pri = fun_9F90()
    var_56 = 0;
    pri = fun_A098()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A268
fun_A268() {
    var_8 = 0;
    pri = fun_8530()
    var_16 = 0;
    pri = fun_9F90()
    var_24 = 0;
    pri = fun_9FD0()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_A2F0
fun_A2F0() {
    pri = 15536;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 26700;
    var_80 = 3350;
    OP_PUSH_P_ADR -64
    var_88 = 7428290664266241520;
    var_96 = 32;
    pri = fun_67E8(var_88, var_80, var_72, var_64)
    OP_JZER lab_A3B0
    var_104 = 0;
    pri = fun_A030()
    var_112 = 0;
    pri = fun_A100()
// lab_A3B0
    pri = 0;
    return pri;
}
// fun_A3C8
fun_A3C8() {
    var_8 = 0;
    pri = fun_9FD0()
    var_16 = 23;
    var_24 = 26500;
    var_32 = 20000;
    OP_PUSH2_C 5282464471093915032, 3972592990337737001
    var_40 = -290;
    var_48 = 851;
    var_56 = 3350;
    var_64 = 5;
    var_72 = 15600;
    OP_PUSH2_C 3427611981456943336, -3096702162697734107
    var_80 = 96;
    pri = fun_7778(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    pri = 0;
    return pri;
}
