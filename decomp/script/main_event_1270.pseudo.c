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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0508
fun_0508() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
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
// fun_05B8
fun_05B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1280(var_8)
    OP_JZER lab_06D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12B0(var_24)
    OP_JNZ lab_06D8
    pri = 0;
    return pri;
// lab_06D8
    OP_JUMP lab_06E8
// lab_06E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0748
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0748
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06E8
    pri = 0;
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0838
fun_0838() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0880
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08C0
// lab_08C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1280(var_8)
    OP_JNZ lab_0948
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0938
    pri = 0;
    return pri;
// lab_0948
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0990
    pri = 0;
    return pri;
// lab_0990
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_09F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08C0
    pri = 0;
    return pri;
// lab_0938
    OP_JUMP lab_0990
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AC0
    pri = 0;
    return pri;
// lab_0AC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1280(var_8)
    OP_JZER lab_0BF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B18
    OP_ZERO_P_S 64
// lab_0BF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C28
    OP_CONST_S 64, 1
// lab_0C28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C60
    OP_CONST_S 72, 1
// lab_0C60
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
// lab_0B18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B40
    OP_ZERO_P_S 72
// lab_0B40
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
    OP_JUMP lab_0D00
// lab_0D00
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D90
fun_0D90() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E28(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0EA0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0F80
fun_0F80() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E68(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EE0(var_24)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1280(var_8)
    OP_JZER lab_1078
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1078
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_10E0
fun_10E0() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_0FD8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1280
fun_1280() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12E0
fun_12E0() {
    OP_JUMP lab_12F8
// lab_12F8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1388
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1378
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    pri = 0;
    return pri;
// lab_1388
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1418
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1408
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    pri = 0;
    return pri;
// lab_1418
    pri = 0;
    return pri;
// lab_1408
    OP_JUMP lab_1428
// lab_1428
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12F8
    pri = 0;
    return pri;
// lab_1378
    OP_JUMP lab_1428
}
// fun_1468
fun_1468() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12E0(var_40)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1588
fun_1588() {
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
// switch_1BA0
        case default:
        {
// switch_1BA0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BE8
// lab_1BE8
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
            OP_JNZ lab_1C90
            var_88 = 0;
            pri = fun_1E48()
// lab_1C90
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BA0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1788
                case default:
                {
// switch_1788_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1800
// lab_1800
                    OP_JUMP lab_1BE8
                }
                case 0x0:
                {
// switch_1788_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1800
                }
                case 0x1:
                {
// switch_1788_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1800
                }
                case 0x2:
                {
// switch_1788_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1800
                }
                case 0x3:
                {
// switch_1788_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1800
                }
                case 0x4:
                {
// switch_1788_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1800
                }
                case 0x5:
                {
// switch_1788_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1800
                }
            }
        }
        case 0x65:
        {
// switch_1BA0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1940
                case default:
                {
// switch_1940_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B8
// lab_19B8
                    OP_JUMP lab_1BE8
                }
                case 0x0:
                {
// switch_1940_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19B8
                }
                case 0x1:
                {
// switch_1940_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19B8
                }
                case 0x2:
                {
// switch_1940_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19B8
                }
                case 0x3:
                {
// switch_1940_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B8
                }
                case 0x4:
                {
// switch_1940_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19B8
                }
                case 0x5:
                {
// switch_1940_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19B8
                }
            }
        }
        case 0x66:
        {
// switch_1BA0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AF8
                case default:
                {
// switch_1AF8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B70
// lab_1B70
                    OP_JUMP lab_1BE8
                }
                case 0x0:
                {
// switch_1AF8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B70
                }
                case 0x1:
                {
// switch_1AF8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B70
                }
                case 0x2:
                {
// switch_1AF8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B70
                }
                case 0x3:
                {
// switch_1AF8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B70
                }
                case 0x4:
                {
// switch_1AF8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B70
                }
                case 0x5:
                {
// switch_1AF8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B70
                }
            }
        }
    }
}
// fun_1CA8
fun_1CA8() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0800(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D50
    pri = 1;
    return pri;
// lab_1D50
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D98
fun_1D98() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CA8(var_8)
    arg_2 = pri;
// lab_1DE8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1588(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    OP_JUMP lab_1E60
// lab_1E60
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EA0
    pri = 0;
    return pri;
// lab_1EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E60
    pri = 0;
    return pri;
}
// fun_1EE0
fun_1EE0() {
    var_8 = 0;
    pri = fun_1E48()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F90
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_1F90
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2000
// lab_2000
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2040
    OP_JUMP lab_2070
// lab_2040
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2000
// lab_2070
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20B8
fun_20B8() {
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
// fun_2128
fun_2128() {
    OP_JUMP lab_2140
// lab_2140
    pri = EvCameraMoveWait_()
    OP_JZER lab_2178
    pri = 0;
    return pri;
// lab_2178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2140
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2320()
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = -1;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = arg_5;
    var_120 = arg_4;
    pri = StartBlur_(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_2288
fun_2288() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2320()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    OP_JUMP lab_2338
// lab_2338
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2390
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23A0
// lab_2390
    pri = 0;
    return pri;
// lab_23A0
    OP_JUMP lab_2338
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    pri = arg_6;
    OP_JNZ lab_23F8
    var_8 = 0;
    pri = fun_0D10()
// lab_23F8
    pri = arg_1;
    switch (pri) {
// switch_3960
        case default:
        {
// switch_3960_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CB0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CB0
            pri = 1;
            OP_JUMP lab_3CB8
// lab_3CB0
            pri = 0;
// lab_3CB8
            OP_JZER lab_3E10
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3E70
// lab_3E10
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3E70
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3ED0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F30
// lab_3ED0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F30
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F30
            pri = arg_2;
            OP_JZER lab_3F70
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F70
            var_8 = 0;
            pri = fun_0D50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3960_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x1:
        {
// switch_3960_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x2:
        {
// switch_3960_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x3:
        {
// switch_3960_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x4:
        {
// switch_3960_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x5:
        {
// switch_3960_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x6:
        {
// switch_3960_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x7:
        {
// switch_3960_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x8:
        {
// switch_3960_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x9:
        {
// switch_3960_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xa:
        {
// switch_3960_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xb:
        {
// switch_3960_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xc:
        {
// switch_3960_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xd:
        {
// switch_3960_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xe:
        {
// switch_3960_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0xf:
        {
// switch_3960_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x10:
        {
// switch_3960_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x11:
        {
// switch_3960_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x12:
        {
// switch_3960_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x13:
        {
// switch_3960_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x14:
        {
// switch_3960_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x15:
        {
// switch_3960_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x16:
        {
// switch_3960_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x17:
        {
// switch_3960_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x18:
        {
// switch_3960_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x19:
        {
// switch_3960_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3960_case_default
        }
        case 0x1a:
        {
// switch_3960_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3960_case_default
        }
        case 0x1b:
        {
// switch_3960_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3960_case_default
        }
        case 0x1c:
        {
// switch_3960_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3960_case_default
        }
        case 0x1d:
        {
// switch_3960_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x1e:
        {
// switch_3960_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x1f:
        {
// switch_3960_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x20:
        {
// switch_3960_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x21:
        {
// switch_3960_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x22:
        {
// switch_3960_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x23:
        {
// switch_3960_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x24:
        {
// switch_3960_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x25:
        {
// switch_3960_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x26:
        {
// switch_3960_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x27:
        {
// switch_3960_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x28:
        {
// switch_3960_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
        case 0x29:
        {
// switch_3960_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3960_case_default
        }
    }
}
// fun_3FA0
fun_3FA0() {
    pri = arg_5;
    OP_JNZ lab_3FD8
    var_8 = 0;
    pri = fun_0D10()
// lab_3FD8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4028
    OP_CONST_S -8, -1
// lab_4028
    pri = arg_1;
    switch (pri) {
// switch_5AE0
        case default:
        {
// switch_5AE0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F88
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0800(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F88
            pri = 1;
            OP_JUMP lab_5F90
// lab_5F88
            pri = 0;
// lab_5F90
            OP_JZER lab_5FE0
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6238
// lab_5FE0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6048
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6048
            pri = 1;
            OP_JUMP lab_6050
// lab_6048
            pri = 0;
// lab_6050
            OP_JZER lab_61D8
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6238
// lab_61D8
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6238
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_62A8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_62A8
            var_8 = 0;
            pri = fun_0D50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AE0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1:
        {
// switch_5AE0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2:
        {
// switch_5AE0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3:
        {
// switch_5AE0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x4:
        {
// switch_5AE0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x5:
        {
// switch_5AE0_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A38(var_40)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x6:
        {
// switch_5AE0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x7:
        {
// switch_5AE0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x8:
        {
// switch_5AE0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x9:
        {
// switch_5AE0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xa:
        {
// switch_5AE0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xb:
        {
// switch_5AE0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xc:
        {
// switch_5AE0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xd:
        {
// switch_5AE0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xe:
        {
// switch_5AE0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0xf:
        {
// switch_5AE0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x10:
        {
// switch_5AE0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x11:
        {
// switch_5AE0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x12:
        {
// switch_5AE0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x13:
        {
// switch_5AE0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x14:
        {
// switch_5AE0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x15:
        {
// switch_5AE0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x16:
        {
// switch_5AE0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x17:
        {
// switch_5AE0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x18:
        {
// switch_5AE0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x19:
        {
// switch_5AE0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1a:
        {
// switch_5AE0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1b:
        {
// switch_5AE0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1c:
        {
// switch_5AE0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1d:
        {
// switch_5AE0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1e:
        {
// switch_5AE0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x1f:
        {
// switch_5AE0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x20:
        {
// switch_5AE0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x21:
        {
// switch_5AE0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x22:
        {
// switch_5AE0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x23:
        {
// switch_5AE0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x24:
        {
// switch_5AE0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x25:
        {
// switch_5AE0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x26:
        {
// switch_5AE0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x27:
        {
// switch_5AE0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x28:
        {
// switch_5AE0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x29:
        {
// switch_5AE0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2a:
        {
// switch_5AE0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2b:
        {
// switch_5AE0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2c:
        {
// switch_5AE0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2d:
        {
// switch_5AE0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2e:
        {
// switch_5AE0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x2f:
        {
// switch_5AE0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x30:
        {
// switch_5AE0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x31:
        {
// switch_5AE0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x32:
        {
// switch_5AE0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x33:
        {
// switch_5AE0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x34:
        {
// switch_5AE0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x35:
        {
// switch_5AE0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x36:
        {
// switch_5AE0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x37:
        {
// switch_5AE0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x38:
        {
// switch_5AE0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x39:
        {
// switch_5AE0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3a:
        {
// switch_5AE0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3b:
        {
// switch_5AE0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3c:
        {
// switch_5AE0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3d:
        {
// switch_5AE0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
        case 0x3e:
        {
// switch_5AE0_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            OP_JUMP switch_5AE0_case_default
        }
    }
}
// fun_62D8
fun_62D8() {
    pri = arg_4;
    OP_JNZ lab_6310
    var_8 = 0;
    pri = fun_0D10()
// lab_6310
    pri = arg_1;
    switch (pri) {
// switch_76E8
        case default:
        {
// switch_76E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1280(var_264)
            OP_JZER lab_7CB0
            pri = arg_3;
            switch (pri) {
// switch_7C58
                case default:
                {
// switch_7C58_case_default
                    OP_JUMP lab_7F68
// lab_7F68
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FD8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FD8
                    var_8 = 0;
                    pri = fun_0D50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C58_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C58_case_default
                }
                case 0x2:
                {
// switch_7C58_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C58_case_default
                }
                case 0x3:
                {
// switch_7C58_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C58_case_default
                }
            }
// lab_7CB0
            pri = arg_1;
            OP_JZER lab_7D00
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7D00
            pri = 0;
            OP_JUMP lab_7D08
// lab_7D00
            pri = 1;
// lab_7D08
            OP_JZER lab_7D70
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0800(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D70
            pri = 1;
            OP_JUMP lab_7D78
// lab_7D70
            pri = 0;
// lab_7D78
            OP_JZER lab_7DC8
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F68
// lab_7DC8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7E30
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F68
// lab_7E30
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_76E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1:
        {
// switch_76E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2:
        {
// switch_76E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3:
        {
// switch_76E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x4:
        {
// switch_76E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x5:
        {
// switch_76E8_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A38(var_40)
            OP_JUMP switch_76E8_case_default
        }
        case 0x6:
        {
// switch_76E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x7:
        {
// switch_76E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x8:
        {
// switch_76E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x9:
        {
// switch_76E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xa:
        {
// switch_76E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xb:
        {
// switch_76E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xc:
        {
// switch_76E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xd:
        {
// switch_76E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xe:
        {
// switch_76E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0xf:
        {
// switch_76E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x10:
        {
// switch_76E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x11:
        {
// switch_76E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x12:
        {
// switch_76E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x13:
        {
// switch_76E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x14:
        {
// switch_76E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x15:
        {
// switch_76E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x16:
        {
// switch_76E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x17:
        {
// switch_76E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x18:
        {
// switch_76E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x19:
        {
// switch_76E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1a:
        {
// switch_76E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1b:
        {
// switch_76E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1c:
        {
// switch_76E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1d:
        {
// switch_76E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1e:
        {
// switch_76E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x1f:
        {
// switch_76E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x20:
        {
// switch_76E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x21:
        {
// switch_76E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x22:
        {
// switch_76E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x23:
        {
// switch_76E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x24:
        {
// switch_76E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x25:
        {
// switch_76E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x26:
        {
// switch_76E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x27:
        {
// switch_76E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x28:
        {
// switch_76E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x29:
        {
// switch_76E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2a:
        {
// switch_76E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2b:
        {
// switch_76E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2c:
        {
// switch_76E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2d:
        {
// switch_76E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2e:
        {
// switch_76E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x2f:
        {
// switch_76E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x30:
        {
// switch_76E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x31:
        {
// switch_76E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x32:
        {
// switch_76E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x33:
        {
// switch_76E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x34:
        {
// switch_76E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x35:
        {
// switch_76E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x36:
        {
// switch_76E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x37:
        {
// switch_76E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x38:
        {
// switch_76E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x39:
        {
// switch_76E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3a:
        {
// switch_76E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3b:
        {
// switch_76E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3c:
        {
// switch_76E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3d:
        {
// switch_76E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
        case 0x3e:
        {
// switch_76E8_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            OP_JUMP switch_76E8_case_default
        }
    }
}
// fun_8008
fun_8008() {
    pri = 32808;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8090
// lab_8090
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8210
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8200
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8150
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8150
    pri = 0;
    OP_JUMP lab_8158
// lab_8210
    pri = 0;
    return pri;
// lab_8200
    OP_JUMP lab_8088
// lab_8088
    OP_INC_P_S -936
// lab_8150
    pri = 1;
// lab_8158
    OP_JZER lab_81D0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_81C8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_81D0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_81C8
}
// fun_8230
fun_8230() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_82C8
    var_8 = 1;
    var_16 = 0;
    var_24 = 33728;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1528()
// lab_82C8
    pri = arg_4;
    OP_JZER lab_8300
    var_8 = 1;
    var_16 = 8;
    pri = fun_1550(var_8)
// lab_8300
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8358
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8358
    pri = 0;
    OP_JUMP lab_8360
// lab_8358
    pri = 1;
// lab_8360
    OP_JZER lab_8428
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8428
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8400
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1468(var_32, var_24)
    OP_JUMP lab_8428
// lab_8428
    pri = arg_2;
    OP_JZER lab_8500
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_84D0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DE8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0508(var_40)
    OP_JUMP lab_8500
// lab_8500
    pri = arg_3;
    OP_JZER lab_8538
    var_8 = 1;
    var_16 = 8;
    pri = fun_14F0(var_8)
// lab_8538
    pri = 0;
    return pri;
// lab_84D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DE8(var_16, var_8)
// lab_8400
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1468(var_16, var_8)
}
// fun_8548
fun_8548() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8008(var_24)
    pri = 0;
    return pri;
}
// fun_85B0
fun_85B0() {
    pri = g_mode;
    switch (pri) {
// switch_8670
        case default:
        {
// switch_8670_case_default
            pri = CommandNOP()
            OP_JUMP lab_86B8
// lab_86B8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8670_case_0x0
            var_8 = 0;
            pri = fun_86C8()
            OP_JUMP lab_86B8
        }
        case 0x3da4b12779492056:
        {
// switch_8670_case_0x3da4b12779492056
            var_8 = 0;
            pri = fun_CCF8()
            OP_JUMP lab_86B8
        }
        case 0x5b55ab2b038344ba:
        {
// switch_8670_case_0x5b55ab2b038344ba
            var_8 = 0;
            pri = fun_CC08()
            OP_JUMP lab_86B8
        }
    }
}
// fun_86C8
fun_86C8() {
    pri = 0;
    return pri;
}
// fun_86E0
fun_86E0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8230(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8738
fun_8738() {
    pri = 0;
    return pri;
}
// fun_8750
fun_8750() {
    pri = 0;
    return pri;
}
// fun_8768
fun_8768() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4654050201445597184, 4646606507725553664, 8802641224559852288
    var_24 = 48;
    pri = fun_0438(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636301005140734771, 4653040849771298816, 4646940759260397568, 8567564428947440771
    var_48 = 48;
    pri = fun_0438(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4590448731434568909, 4652812151352721408, 4648673589585772544, -1517632578076027777
    var_72 = 48;
    pri = fun_0438(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_04C8(var_88, var_80)
    var_104 = 1;
    var_112 = 8567564428947440771;
    var_120 = 16;
    pri = fun_04C8(var_112, var_104)
    var_128 = 1;
    var_136 = -1517632578076027777;
    var_144 = 16;
    pri = fun_04C8(var_136, var_128)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 0;
    var_208 = 1;
    var_216 = 8567564428947440771;
    var_224 = 56;
    pri = fun_3FA0(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 1;
    var_248 = -1;
    var_256 = -1;
    var_264 = 0;
    var_272 = 1;
    var_280 = -1517632578076027777;
    var_288 = 56;
    pri = fun_3FA0(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 0;
    var_304 = 4627983419578934886;
    var_312 = 0;
    OP_PUSH5_C 4653466976497759683, 4642554675435803771, 4648768763312272835, 4654926468232469545, 4642747133951129682
    var_320 = 4651210558735237775;
    var_328 = 1;
    pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 0;
    pri = fun_2128()
    var_344 = 14;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 33776;
    var_368 = 8;
    var_376 = 16;
    pri = fun_0280(var_368, var_360)
    var_384 = 0;
    var_392 = 4627983419578934886;
    var_400 = 3;
    OP_PUSH5_C 4653573013399142400, 4636811882223464612, 4648411553974640968, 4655208998740342866, 4641132523115973181
    var_408 = 4650163119978153247;
    var_416 = 115;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    pri = fun_0350()
    var_432 = 45;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 33824;
    pri = SoundPostEvent(var_448)
    var_456 = 1;
    var_464 = 0;
    var_472 = 4641240890982006784;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH4_C 4653491649538686976, 4647292602981285888, 4607182418800017408, 8802641224559852288
    var_496 = 72;
    pri = fun_0540(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 1;
    var_536 = 8567564428947440771;
    var_544 = 40;
    pri = fun_62D8(var_536, var_528, var_520, var_512, var_504)
    var_552 = 5;
    var_560 = 8;
    pri = fun_0060(var_552)
    var_568 = 1;
    var_576 = 3;
    var_584 = 0;
    var_592 = 1;
    var_600 = -1517632578076027777;
    var_608 = 40;
    pri = fun_62D8(var_600, var_592, var_584, var_576, var_568)
    var_616 = 1;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 4602678819172646912, 8567564428947440771
    var_640 = 0;
    var_648 = 48;
    pri = fun_10E0(var_640, var_632, var_624, var_616, var_608, var_600)
    var_656 = 8567564428947440771;
    var_664 = 8;
    pri = fun_0838(var_656)
    var_672 = -1517632578076027777;
    var_680 = 8;
    pri = fun_0838(var_672)
    var_688 = 10;
    var_696 = 8;
    pri = fun_0060(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 8802641224559852288, 8567564428947440771
    var_736 = 48;
    pri = fun_0608(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 8567564428947440771;
    var_752 = 8;
    pri = fun_0660(var_744)
    var_760 = 5;
    var_768 = 5;
    var_776 = 8567564428947440771;
    var_784 = 24;
    pri = fun_0F18(var_776, var_768, var_760)
    var_792 = 0;
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH2_C 8802641224559852288, -1517632578076027777
    var_824 = 48;
    pri = fun_0608(var_816, var_808, var_800, var_792, var_784, var_776)
    var_832 = 1;
    var_840 = -1;
    var_848 = -1;
    var_856 = 3;
    var_864 = 0;
    var_872 = 0;
    var_880 = 8567564428947440771;
    var_888 = 56;
    pri = fun_23C0(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C -5951850638154752621, 8567564428947440771
    var_936 = 56;
    pri = fun_1D98(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 8802641224559852288;
    var_952 = 8;
    pri = fun_0660(var_944)
    var_960 = 8567564428947440771;
    var_968 = 8;
    pri = fun_0838(var_960)
    var_976 = -1517632578076027777;
    var_984 = 8;
    pri = fun_0660(var_976)
    var_992 = 1;
    var_1000 = 8;
    pri = fun_1EE0(var_992)
    var_1008 = 0;
    pri = fun_1FA0()
    var_1016 = 5;
    var_1024 = 5;
    var_1032 = -1517632578076027777;
    var_1040 = 24;
    pri = fun_0F18(var_1032, var_1024, var_1016)
    var_1048 = 1;
    var_1056 = 1;
    var_1064 = -1;
    var_1072 = -1;
    var_1080 = 0;
    var_1088 = 1;
    var_1096 = -1517632578076027777;
    var_1104 = 56;
    pri = fun_3FA0(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = 0;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 100;
    var_1144 = -1;
    OP_PUSH2_C 1567512536849869799, -1517632578076027777
    var_1152 = 56;
    pri = fun_1D98(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_1EE0(var_1160)
    var_1176 = 0;
    pri = fun_1FA0()
    var_1184 = 1;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 1;
    var_1216 = -1517632578076027777;
    var_1224 = 40;
    pri = fun_62D8(var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1232 = -1517632578076027777;
    var_1240 = 8;
    pri = fun_0838(var_1232)
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    var_1272 = 180;
    pri = float(var_1272)
    var_1280 = pri;
    var_1288 = -1517632578076027777;
    var_1296 = 40;
    pri = fun_05B8(var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1304 = -1517632578076027777;
    var_1312 = 8;
    pri = fun_0660(var_1304)
    var_1320 = 1;
    var_1328 = 1;
    var_1336 = 70;
    OP_PUSH2_C -1517632578076027777, 8802641224559852288
    var_1344 = 40;
    pri = fun_0D90(var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1352 = 1;
    var_1360 = 1;
    var_1368 = 70;
    OP_PUSH2_C -1517632578076027777, 8567564428947440771
    var_1376 = 40;
    pri = fun_0D90(var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1384 = 1;
    var_1392 = 1;
    var_1400 = -1;
    var_1408 = -1;
    var_1416 = 0;
    var_1424 = 9;
    var_1432 = -1517632578076027777;
    var_1440 = 56;
    pri = fun_3FA0(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 8567564428947440771;
    var_1456 = 8;
    pri = fun_0F80(var_1448)
    var_1464 = -1517632578076027777;
    var_1472 = 8;
    pri = fun_0F80(var_1464)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C 1568360260315031255, -1517632578076027777
    var_1520 = 56;
    pri = fun_1D98(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_1EE0(var_1528)
    var_1544 = 0;
    pri = fun_1FA0()
    var_1552 = 0;
    var_1560 = 4627983419578934886;
    var_1568 = 0;
    OP_PUSH5_C 4652065011211415060, 4639258955302242877, 4648815910370871869, 4654005165449323479, 4640065381110518907
    var_1576 = 4649560587606131999;
    var_1584 = 1;
    pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1592 = 0;
    pri = fun_2128()
    var_1600 = 0;
    var_1608 = 4627983419578934886;
    var_1616 = 3;
    OP_PUSH5_C 4651576388244031406, 4639365563949672038, 4648718273738325361, 4653760809985166541, 4640171989757948068
    var_1624 = 4649462950973585490;
    var_1632 = 50;
    pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1640 = 1;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 9;
    var_1672 = -1517632578076027777;
    var_1680 = 40;
    pri = fun_62D8(var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1688 = -1517632578076027777;
    var_1696 = 8;
    pri = fun_0838(var_1688)
    var_1704 = 1;
    var_1712 = 0;
    var_1720 = 0;
    OP_PUSH2_C 4602678819172646912, -1517632578076027777
    var_1728 = 3;
    var_1736 = 48;
    pri = fun_10E0(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1744 = 15;
    var_1752 = 8;
    pri = fun_0060(var_1744)
    var_1760 = 40;
    var_1768 = 8;
    pri = fun_0060(var_1760)
    var_1776 = 1;
    var_1784 = 0;
    var_1792 = 0;
    OP_PUSH2_C 4602678819172646912, -1517632578076027777
    var_1800 = 0;
    var_1808 = 48;
    pri = fun_10E0(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1816 = -1;
    var_1824 = 8802641224559852288;
    var_1832 = 16;
    pri = fun_0DE8(var_1824, var_1816)
    var_1840 = 40;
    var_1848 = 8;
    pri = fun_0060(var_1840)
    var_1856 = 0;
    var_1864 = 4627983419578934886;
    var_1872 = 3;
    OP_PUSH5_C 4653573013399142400, 4636811882223464612, 4648411553974640968, 4655208998740342866, 4641132523115973181
    var_1880 = 4650163119978153247;
    var_1888 = 1;
    pri = EvCameraMove(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1896 = 0;
    pri = fun_2128()
    var_1904 = 6;
    var_1912 = -1517632578076027777;
    var_1920 = 16;
    pri = fun_0EA0(var_1912, var_1904)
    var_1928 = 0;
    var_1936 = 0;
    var_1944 = 0;
    var_1952 = -11;
    pri = float(var_1952)
    var_1960 = pri;
    var_1968 = -1517632578076027777;
    var_1976 = 40;
    pri = fun_05B8(var_1968, var_1960, var_1952, var_1944, var_1936)
    var_1984 = 0;
    var_1992 = 3;
    var_2000 = 0;
    var_2008 = 100;
    var_2016 = -1;
    OP_PUSH2_C 1567513636361498010, -1517632578076027777
    var_2024 = 56;
    pri = fun_1D98(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2032 = -1;
    var_2040 = 8567564428947440771;
    var_2048 = 16;
    pri = fun_0DE8(var_2040, var_2032)
    var_2056 = 0;
    var_2064 = 0;
    var_2072 = 0;
    var_2080 = 0;
    OP_PUSH2_C -1517632578076027777, 8567564428947440771
    var_2088 = 48;
    pri = fun_0608(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2096 = -1517632578076027777;
    var_2104 = 8;
    pri = fun_0660(var_2096)
    var_2112 = 8567564428947440771;
    var_2120 = 8;
    pri = fun_0660(var_2112)
    var_2128 = 1;
    var_2136 = 8;
    pri = fun_1EE0(var_2128)
    var_2144 = 0;
    pri = fun_1FA0()
    var_2152 = -1517632578076027777;
    var_2160 = 8;
    pri = fun_0EE0(var_2152)
    var_2168 = -1;
    var_2176 = 8802641224559852288;
    var_2184 = 16;
    pri = fun_0DE8(var_2176, var_2168)
    var_2192 = -1517632578076027777;
    var_2200 = 8;
    pri = fun_0660(var_2192)
    var_2208 = 1;
    var_2216 = 0;
    var_2224 = 30;
    pri = float(var_2224)
    var_2232 = pri;
    var_2240 = 0;
    pri = float(var_2240)
    var_2248 = pri;
    var_2256 = 0;
    OP_PUSH4_C 4646870390516219904, 4648673589585772544, 4611686018427387904, -1517632578076027777
    var_2264 = 72;
    pri = fun_0540(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2272 = 5;
    var_2280 = 8;
    pri = fun_0060(var_2272)
    var_2288 = 0;
    var_2296 = 0;
    var_2304 = 0;
    var_2312 = 170;
    pri = float(var_2312)
    var_2320 = pri;
    var_2328 = 8802641224559852288;
    var_2336 = 40;
    pri = fun_05B8(var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2344 = 0;
    var_2352 = 0;
    var_2360 = 0;
    var_2368 = 170;
    pri = float(var_2368)
    var_2376 = pri;
    var_2384 = 8567564428947440771;
    var_2392 = 40;
    pri = fun_05B8(var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2400 = 30;
    var_2408 = 8;
    pri = fun_0060(var_2400)
    var_2416 = 0;
    var_2424 = 4629813006927554150;
    var_2432 = 0;
    OP_PUSH5_C 4644696524086711419, 4640337356306765578, 4648592489608107786, 4650709709198553252, 4638764263030673900
    var_2440 = 4649719620967973519;
    var_2448 = 1;
    pri = EvCameraMove(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2456 = 0;
    pri = fun_2128()
    var_2464 = 0;
    var_2472 = 4629813006927554150;
    var_2480 = 3;
    OP_PUSH5_C 4639678704861262643, 4641201836328988180, 4648843442142031380, 4648829896158777180, 4643276482829206159
    var_2488 = 4650677163654371082;
    var_2496 = 40;
    pri = EvCameraMove(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2504 = -1517632578076027777;
    var_2512 = 8;
    pri = fun_0660(var_2504)
    var_2520 = 8802641224559852288;
    var_2528 = 8;
    pri = fun_0660(var_2520)
    var_2536 = 8567564428947440771;
    var_2544 = 8;
    pri = fun_0660(var_2536)
    var_2552 = 1;
    var_2560 = 1;
    OP_PUSH4_C -4583728516365601997, 4648728125362510234, 4649160893139202867, 8802641224559852288
    var_2568 = 48;
    pri = fun_0438(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2576 = -1517632578076027777;
    var_2584 = 8;
    pri = fun_0660(var_2576)
    var_2592 = 30;
    var_2600 = 8;
    pri = fun_0060(var_2592)
    var_2608 = 1;
    var_2616 = 1;
    OP_PUSH4_C -4583728516365601997, 4648728090178138145, 4649143397710181695, 8802641224559852288
    var_2624 = 48;
    pri = fun_0438(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    var_2632 = 1;
    var_2640 = 1;
    OP_PUSH4_C 4640417576675128115, 4649157374701993984, 4648506463818350592, 8567564428947440771
    var_2648 = 48;
    pri = fun_0438(var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2656 = 0;
    pri = fun_2128()
    var_2664 = 0;
    var_2672 = 4629813006927554150;
    var_2680 = 3;
    OP_PUSH5_C 4639679056704983532, 4641197966048058409, 4648843442142031380, 4648596975615549112, 4643214558334329815
    var_2688 = 4650575041014383247;
    var_2696 = 60;
    pri = EvCameraMove(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 0;
    pri = fun_2128()
    var_2712 = 0;
    var_2720 = 4631952216750555136;
    var_2728 = 3;
    OP_PUSH5_C 4643287741828274586, 4635631094696163410, 4648091552110493041, 4650560703382757048, 4640354244805368218
    var_2736 = 4650432192463702589;
    var_2744 = 8;
    pri = EvCameraMove(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2752 = 34072;
    pri = SoundPostEvent(var_2752)
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 3;
    var_2784 = 4;
    OP_PUSH2_C 4600877379321698714, 4599075939470750516
    var_2792 = 48;
    pri = fun_21B8(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2800 = 0;
    pri = fun_2320()
    var_2808 = 3;
    var_2816 = 4;
    var_2824 = 16;
    pri = fun_2288(var_2816, var_2808)
    var_2832 = 1;
    var_2840 = -1;
    var_2848 = -1;
    var_2856 = 3;
    var_2864 = 0;
    var_2872 = 1;
    var_2880 = -1517632578076027777;
    var_2888 = 56;
    pri = fun_23C0(var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832)
    var_2896 = 0;
    var_2904 = 3;
    var_2912 = 0;
    var_2920 = 100;
    var_2928 = -1;
    OP_PUSH2_C 1567514735873126221, -1517632578076027777
    var_2936 = 56;
    pri = fun_1D98(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2944 = -1517632578076027777;
    var_2952 = 8;
    pri = fun_0838(var_2944)
    var_2960 = 1;
    var_2968 = 8;
    pri = fun_1EE0(var_2960)
    var_2976 = 0;
    var_2984 = 1166939162458857317;
    var_2992 = 0;
    var_3000 = 24;
    pri = fun_1FD0(var_2992, var_2984, var_2976)
    var_3008 = 0;
    var_3016 = 1166935863923972684;
    var_3024 = 1;
    var_3032 = 24;
    pri = fun_1FD0(var_3024, var_3016, var_3008)
    var_3040 = 0;
    var_3048 = 1166934764412344473;
    var_3056 = 2;
    var_3064 = 24;
    pri = fun_1FD0(var_3056, var_3048, var_3040)
    var_3080 = 0;
    var_3088 = 0;
    var_3096 = 0;
    var_3104 = 1;
    var_3112 = 32;
    pri = fun_20B8(var_3104, var_3096, var_3088, var_3080)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A808
        case default:
        {
// switch_A808_case_default
            var_8 = 34360;
            pri = SoundPostEvent(var_8)
            var_16 = 8;
            var_24 = -1517632578076027777;
            var_32 = 16;
            pri = fun_0E28(var_24, var_16)
            var_40 = 1;
            var_48 = 1;
            var_56 = -1;
            var_64 = -1;
            var_72 = 0;
            var_80 = 6;
            var_88 = -1517632578076027777;
            var_96 = 56;
            pri = fun_3FA0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            OP_PUSH2_C 1567507039291728744, -1517632578076027777
            var_144 = 56;
            pri = fun_1D98(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = 1;
            var_160 = 8;
            pri = fun_1EE0(var_152)
            var_168 = 0;
            var_176 = 1166932565389088051;
            var_184 = 0;
            var_192 = 24;
            pri = fun_1FD0(var_184, var_176, var_168)
            var_200 = 0;
            var_208 = 1166946859040254794;
            var_216 = 1;
            var_224 = 24;
            pri = fun_1FD0(var_216, var_208, var_200)
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = 1;
            var_272 = 32;
            pri = fun_20B8(var_264, var_256, var_248, var_240)
            var_16 = pri;
            pri = var_16;
            switch (pri) {
// switch_B0B0
                case default:
                {
// switch_B0B0_case_default
                    var_8 = 0;
                    var_16 = 4630108555653100339;
                    var_24 = 0;
                    OP_PUSH5_C 4644826178497858765, 4638670320757196718, 4647705491587748332, 4650745421336223416, 4639336360920838308
                    var_32 = 4650647256938095575;
                    var_40 = 1;
                    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
                    var_48 = 0;
                    pri = fun_2128()
                    var_56 = 1;
                    var_64 = 1;
                    var_72 = -1;
                    var_80 = -1;
                    var_88 = 0;
                    var_96 = 1;
                    var_104 = 8567564428947440771;
                    var_112 = 56;
                    pri = fun_3FA0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
                    var_120 = 0;
                    var_128 = 3;
                    var_136 = 0;
                    var_144 = 100;
                    var_152 = -1;
                    OP_PUSH2_C -5951849538643124410, 8567564428947440771
                    var_160 = 56;
                    pri = fun_1D98(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
                    var_168 = 1;
                    var_176 = 8;
                    pri = fun_1EE0(var_168)
                    var_184 = 0;
                    pri = fun_1FA0()
                    var_192 = 1;
                    var_200 = 3;
                    var_208 = 0;
                    var_216 = 1;
                    var_224 = 8567564428947440771;
                    var_232 = 40;
                    pri = fun_62D8(var_224, var_216, var_208, var_200, var_192)
                    var_240 = 0;
                    var_248 = 0;
                    var_256 = 0;
                    var_264 = 0;
                    OP_PUSH2_C 8567564428947440771, -1517632578076027777
                    var_272 = 48;
                    pri = fun_0608(var_264, var_256, var_248, var_240, var_232, var_224)
                    var_280 = 0;
                    var_288 = 3;
                    var_296 = 0;
                    var_304 = 100;
                    var_312 = -1;
                    OP_PUSH2_C 1567508138803356955, -1517632578076027777
                    var_320 = 56;
                    pri = fun_1D98(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
                    var_328 = -1517632578076027777;
                    var_336 = 8;
                    pri = fun_0660(var_328)
                    var_344 = 8567564428947440771;
                    var_352 = 8;
                    pri = fun_0838(var_344)
                    var_360 = 1;
                    var_368 = 8;
                    pri = fun_1EE0(var_360)
                    var_376 = 0;
                    pri = fun_1FA0()
                    var_384 = 0;
                    var_392 = 0;
                    var_400 = 0;
                    var_408 = 0;
                    OP_PUSH2_C 8802641224559852288, 8567564428947440771
                    var_416 = 48;
                    pri = fun_0608(var_408, var_400, var_392, var_384, var_376, var_368)
                    var_424 = 0;
                    var_432 = 3;
                    var_440 = 0;
                    var_448 = 100;
                    var_456 = -1;
                    OP_PUSH2_C -5951848439131496199, 8567564428947440771
                    var_464 = 56;
                    pri = fun_1D98(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
                    var_472 = 8567564428947440771;
                    var_480 = 8;
                    pri = fun_0660(var_472)
                    var_488 = 1;
                    var_496 = 8;
                    pri = fun_1EE0(var_488)
                    var_504 = 0;
                    pri = fun_1FA0()
                    var_512 = 7;
                    var_520 = 7;
                    var_528 = -1517632578076027777;
                    var_536 = 24;
                    pri = fun_0F18(var_528, var_520, var_512)
                    var_544 = 1;
                    var_552 = -1;
                    var_560 = -1;
                    var_568 = 3;
                    var_576 = 0;
                    var_584 = 1;
                    var_592 = -1517632578076027777;
                    var_600 = 56;
                    pri = fun_23C0(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
                    var_608 = 0;
                    var_616 = 3;
                    var_624 = 0;
                    var_632 = 100;
                    var_640 = -1;
                    OP_PUSH2_C 1567509238314985166, -1517632578076027777
                    var_648 = 56;
                    pri = fun_1D98(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
                    var_656 = -1517632578076027777;
                    var_664 = 8;
                    pri = fun_0838(var_656)
                    var_672 = 1;
                    var_680 = 8;
                    pri = fun_1EE0(var_672)
                    var_688 = 0;
                    pri = fun_1FA0()
                    var_696 = 1;
                    var_704 = 1;
                    var_712 = 70;
                    OP_PUSH2_C 8567564428947440771, 8802641224559852288
                    var_720 = 40;
                    pri = fun_0D90(var_712, var_704, var_696, var_688, var_680)
                    var_728 = 1;
                    var_736 = 1;
                    var_744 = -1;
                    var_752 = -1;
                    var_760 = 0;
                    var_768 = 22;
                    var_776 = 8567564428947440771;
                    var_784 = 56;
                    pri = fun_3FA0(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
                    var_792 = 0;
                    var_800 = 3;
                    var_808 = 0;
                    var_816 = 100;
                    var_824 = -1;
                    OP_PUSH2_C -5951847339619867988, 8567564428947440771
                    var_832 = 56;
                    pri = fun_1D98(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
                    var_840 = 1;
                    var_848 = 8;
                    pri = fun_1EE0(var_840)
                    var_856 = 0;
                    var_864 = 1166936963435600895;
                    var_872 = 0;
                    var_880 = 24;
                    pri = fun_1FD0(var_872, var_864, var_856)
                    var_888 = 0;
                    var_896 = 1166933664900716262;
                    var_904 = 1;
                    var_912 = 24;
                    pri = fun_1FD0(var_904, var_896, var_888)
                    var_928 = 0;
                    var_936 = 0;
                    var_944 = 0;
                    var_952 = 1;
                    var_960 = 32;
                    pri = fun_20B8(var_952, var_944, var_936, var_928)
                    var_24 = pri;
                    pri = var_24;
                    switch (pri) {
// switch_BBA8
                        case default:
                        {
// switch_BBA8_case_default
                            var_8 = 0;
                            var_16 = 0;
                            var_24 = 0;
                            var_32 = 0;
                            OP_PUSH2_C -1517632578076027777, 8567564428947440771
                            var_40 = 48;
                            pri = fun_0608(var_32, var_24, var_16, var_8, var_0, var_-8)
                            var_48 = 8567564428947440771;
                            var_56 = 8;
                            pri = fun_0F80(var_48)
                            var_64 = -1;
                            var_72 = 8802641224559852288;
                            var_80 = 16;
                            pri = fun_0DE8(var_72, var_64)
                            var_88 = 6;
                            var_96 = 6;
                            var_104 = -1517632578076027777;
                            var_112 = 24;
                            pri = fun_0F18(var_104, var_96, var_88)
                            var_120 = 1;
                            var_128 = 1;
                            var_136 = -1;
                            var_144 = -1;
                            var_152 = 0;
                            var_160 = 12;
                            var_168 = -1517632578076027777;
                            var_176 = 56;
                            pri = fun_3FA0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
                            var_184 = 0;
                            var_192 = 3;
                            var_200 = 0;
                            var_208 = 100;
                            var_216 = -1;
                            OP_PUSH2_C 1567510337826613377, -1517632578076027777
                            var_224 = 56;
                            pri = fun_1D98(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
                            var_232 = 8567564428947440771;
                            var_240 = 8;
                            pri = fun_0660(var_232)
                            var_248 = 1;
                            var_256 = 8;
                            pri = fun_1EE0(var_248)
                            var_264 = 0;
                            pri = fun_1FA0()
                            var_272 = 5;
                            var_280 = 5;
                            var_288 = -1517632578076027777;
                            var_296 = 24;
                            pri = fun_0F18(var_288, var_280, var_272)
                            var_304 = 1;
                            var_312 = 3;
                            var_320 = 0;
                            var_328 = 12;
                            var_336 = -1517632578076027777;
                            var_344 = 40;
                            pri = fun_62D8(var_336, var_328, var_320, var_312, var_304)
                            var_352 = -1517632578076027777;
                            var_360 = 8;
                            pri = fun_0838(var_352)
                            var_368 = 1;
                            var_376 = 1;
                            var_384 = -1;
                            var_392 = -1;
                            var_400 = 0;
                            var_408 = 8;
                            var_416 = -1517632578076027777;
                            var_424 = 56;
                            pri = fun_3FA0(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
                            var_432 = 0;
                            var_440 = 3;
                            var_448 = 0;
                            var_456 = 100;
                            var_464 = -1;
                            OP_PUSH2_C 1567502641245215900, -1517632578076027777
                            var_472 = 56;
                            pri = fun_1D98(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
                            var_480 = 1;
                            var_488 = 8;
                            pri = fun_1EE0(var_480)
                            var_496 = 0;
                            pri = fun_1FA0()
                            var_504 = 1;
                            var_512 = 3;
                            var_520 = 0;
                            var_528 = 8;
                            var_536 = -1517632578076027777;
                            var_544 = 40;
                            pri = fun_62D8(var_536, var_528, var_520, var_512, var_504)
                            var_552 = -1517632578076027777;
                            var_560 = 8;
                            pri = fun_0838(var_552)
                            var_568 = 0;
                            var_576 = 0;
                            var_584 = 0;
                            var_592 = -90;
                            pri = float(var_592)
                            var_600 = pri;
                            var_608 = -1517632578076027777;
                            var_616 = 40;
                            pri = fun_05B8(var_608, var_600, var_592, var_584, var_576)
                            var_624 = -1517632578076027777;
                            var_632 = 8;
                            pri = fun_0660(var_624)
                            var_640 = 1;
                            var_648 = 1;
                            var_656 = -1;
                            var_664 = -1;
                            var_672 = 0;
                            var_680 = 2;
                            var_688 = -1517632578076027777;
                            var_696 = 56;
                            pri = fun_3FA0(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
                            var_704 = 10;
                            var_712 = 8;
                            pri = fun_0060(var_704)
                            var_720 = 34544;
                            pri = SoundPostEvent(var_720)
                            var_728 = 1;
                            var_736 = 0;
                            var_744 = 33728;
                            var_752 = 8;
                            var_760 = 32;
                            pri = fun_02E0(var_752, var_744, var_736, var_728)
                            var_768 = 0;
                            pri = fun_0350()
                            var_776 = -1517632578076027777;
                            var_784 = 8;
                            pri = fun_0F80(var_776)
                            var_792 = 1;
                            var_800 = 1;
                            var_808 = 0;
                            OP_PUSH3_C 4652199063669073510, 4648938351985741005, 8802641224559852288
                            var_816 = 48;
                            pri = fun_0438(var_808, var_800, var_792, var_784, var_776, var_768)
                            var_824 = 1;
                            var_832 = 1;
                            OP_PUSH4_C -4600989969312382976, 4652530676376010752, 4648515259911372800, 8567564428947440771
                            var_840 = 48;
                            pri = fun_0438(var_832, var_824, var_816, var_808, var_800, var_792)
                            var_848 = 1;
                            var_856 = 1;
                            OP_PUSH4_C 4639048904600872550, 4653388295445676032, 4646975943632486400, -1517632578076027777
                            var_864 = 48;
                            pri = fun_0438(var_856, var_848, var_840, var_832, var_824, var_816)
                            var_872 = 0;
                            var_880 = 4631952216750555136;
                            var_888 = 0;
                            OP_PUSH5_C 4652508818084850565, 4630860093840917791, 4647641280108686213, 4654270763478129050, 4639371193449206252
                            var_896 = 4648968346662946734;
                            var_904 = 1;
                            pri = EvCameraMove(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
                            var_912 = 0;
                            pri = fun_2128()
                            var_920 = 1;
                            var_928 = 3;
                            var_936 = 0;
                            var_944 = 2;
                            var_952 = -1517632578076027777;
                            var_960 = 40;
                            pri = fun_62D8(var_952, var_944, var_936, var_928, var_920)
                            var_968 = -1517632578076027777;
                            var_976 = 8;
                            pri = fun_0838(var_968)
                            var_984 = 34728;
                            pri = SoundPostEvent(var_984)
                            var_992 = 130;
                            var_1000 = 8;
                            pri = fun_0060(var_992)
                            var_1008 = 1;
                            var_1016 = 0;
                            var_1024 = 30;
                            pri = float(var_1024)
                            var_1032 = pri;
                            var_1040 = -4591391672606549606;
                            var_1048 = 1;
                            OP_PUSH4_C 4652857891036436890, 4648938351985741005, 4607182418800017408, 8802641224559852288
                            var_1056 = 72;
                            pri = fun_0540(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
                            var_1064 = 1;
                            var_1072 = 0;
                            var_1080 = 30;
                            pri = float(var_1080)
                            var_1088 = pri;
                            var_1096 = -4600989969312382976;
                            var_1104 = 1;
                            OP_PUSH4_C 4652926500562010112, 4647969902143995904, 4607182418800017408, 8567564428947440771
                            var_1112 = 72;
                            pri = fun_0540(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
                            var_1120 = 5;
                            var_1128 = 8;
                            pri = fun_0060(var_1120)
                            var_1136 = 33776;
                            var_1144 = 8;
                            var_1152 = 16;
                            pri = fun_0280(var_1144, var_1136)
                            var_1160 = 0;
                            pri = fun_0350()
                            var_1168 = 8802641224559852288;
                            var_1176 = 8;
                            pri = fun_0660(var_1168)
                            var_1184 = 8567564428947440771;
                            var_1192 = 8;
                            pri = fun_0660(var_1184)
                            var_1200 = 1;
                            var_1208 = -1;
                            var_1216 = -1;
                            var_1224 = 3;
                            var_1232 = 0;
                            var_1240 = 0;
                            var_1248 = -1517632578076027777;
                            var_1256 = 56;
                            pri = fun_23C0(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
                            var_1264 = 0;
                            var_1272 = 3;
                            var_1280 = 0;
                            var_1288 = 100;
                            var_1296 = -1;
                            OP_PUSH2_C 1567503740756844111, -1517632578076027777
                            var_1304 = 56;
                            pri = fun_1D98(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
                            var_1312 = -1517632578076027777;
                            var_1320 = 8;
                            pri = fun_0838(var_1312)
                            var_1328 = 1;
                            var_1336 = 8;
                            pri = fun_1EE0(var_1328)
                            var_1344 = 0;
                            pri = fun_1FA0()
                            var_1352 = 1;
                            var_1360 = 0;
                            var_1368 = 4641240890982006784;
                            var_1376 = 0;
                            var_1384 = 0;
                            OP_PUSH4_C 4653828100096786432, 4646975943632486400, 4607182418800017408, -1517632578076027777
                            var_1392 = 72;
                            pri = fun_0540(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
                            var_1400 = 15;
                            var_1408 = 8;
                            pri = fun_0060(var_1400)
                            var_1416 = 1;
                            var_1424 = 0;
                            var_1432 = 33728;
                            var_1440 = 8;
                            var_1448 = 32;
                            pri = fun_02E0(var_1440, var_1432, var_1424, var_1416)
                            var_1456 = 0;
                            pri = fun_0350()
                            var_1464 = 34928;
                            pri = SoundPostEvent(var_1464)
                            var_1472 = 3;
                            var_1480 = 1;
                            pri = EvCameraEnd(var_1480, var_1472)
                            var_1488 = 0;
                            var_1496 = 8567564428947440771;
                            var_1504 = 16;
                            pri = fun_0490(var_1496, var_1488)
                            var_1512 = 0;
                            var_1520 = -1517632578076027777;
                            var_1528 = 16;
                            pri = fun_0490(var_1520, var_1512)
                            var_1536 = 0;
                            var_1544 = 8802641224559852288;
                            var_1552 = 16;
                            pri = fun_04C8(var_1544, var_1536)
                            var_1560 = 0;
                            var_1568 = 8567564428947440771;
                            var_1576 = 16;
                            pri = fun_04C8(var_1568, var_1560)
                            var_1584 = 0;
                            var_1592 = -1517632578076027777;
                            var_1600 = 16;
                            pri = fun_04C8(var_1592, var_1584)
                            var_1608 = 15;
                            var_1616 = 8;
                            pri = fun_0060(var_1608)
                            var_1624 = -1517632578076027777;
                            var_1632 = 8;
                            pri = fun_0660(var_1624)
                            pri = 0;
                            return pri;
                        }
                        case 0x0:
                        {
// switch_BBA8_case_0x0
                            var_8 = 1;
                            var_16 = -1;
                            var_24 = -1;
                            var_32 = 3;
                            var_40 = 0;
                            var_48 = 19;
                            var_56 = 8802641224559852288;
                            var_64 = 56;
                            pri = fun_23C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                            var_72 = 8802641224559852288;
                            var_80 = 8;
                            pri = fun_0838(var_72)
                            var_88 = 5;
                            var_96 = 5;
                            var_104 = 8567564428947440771;
                            var_112 = 24;
                            pri = fun_0F18(var_104, var_96, var_88)
                            var_120 = 1;
                            var_128 = 3;
                            var_136 = 0;
                            var_144 = 22;
                            var_152 = 8567564428947440771;
                            var_160 = 40;
                            pri = fun_62D8(var_152, var_144, var_136, var_128, var_120)
                            var_168 = 0;
                            var_176 = 3;
                            var_184 = 0;
                            var_192 = 100;
                            var_200 = -1;
                            OP_PUSH2_C -5951846240108239777, 8567564428947440771
                            var_208 = 56;
                            pri = fun_1D98(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
                            var_216 = 8567564428947440771;
                            var_224 = 8;
                            pri = fun_0838(var_216)
                            var_232 = 1;
                            var_240 = 8;
                            pri = fun_1EE0(var_232)
                            var_248 = 0;
                            pri = fun_1FA0()
                            OP_JUMP switch_BBA8_case_default
                        }
                        case 0x1:
                        {
// switch_BBA8_case_0x1
                            var_8 = 1;
                            var_16 = -1;
                            var_24 = -1;
                            var_32 = 3;
                            var_40 = 0;
                            var_48 = 20;
                            var_56 = 8802641224559852288;
                            var_64 = 56;
                            pri = fun_23C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                            var_72 = 8802641224559852288;
                            var_80 = 8;
                            pri = fun_0838(var_72)
                            var_88 = 7;
                            var_96 = 7;
                            var_104 = 8567564428947440771;
                            var_112 = 24;
                            pri = fun_0F18(var_104, var_96, var_88)
                            var_120 = 1;
                            var_128 = 3;
                            var_136 = 0;
                            var_144 = 22;
                            var_152 = 8567564428947440771;
                            var_160 = 40;
                            pri = fun_62D8(var_152, var_144, var_136, var_128, var_120)
                            var_168 = 0;
                            var_176 = 3;
                            var_184 = 0;
                            var_192 = 100;
                            var_200 = -1;
                            OP_PUSH2_C -5951845140596611566, 8567564428947440771
                            var_208 = 56;
                            pri = fun_1D98(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
                            var_216 = 8567564428947440771;
                            var_224 = 8;
                            pri = fun_0838(var_216)
                            var_232 = 1;
                            var_240 = 8;
                            pri = fun_1EE0(var_232)
                            var_248 = 0;
                            pri = fun_1FA0()
                            OP_JUMP switch_BBA8_case_default
                        }
                    }
                }
                case 0x0:
                {
// switch_B0B0_case_0x0
                    var_8 = 0;
                    pri = fun_1FA0()
                    var_16 = -1517632578076027777;
                    var_24 = 8;
                    pri = fun_0E68(var_16)
                    var_32 = 1;
                    var_40 = 3;
                    var_48 = 0;
                    var_56 = 6;
                    var_64 = -1517632578076027777;
                    var_72 = 40;
                    pri = fun_62D8(var_64, var_56, var_48, var_40, var_32)
                    var_80 = -1517632578076027777;
                    var_88 = 8;
                    pri = fun_0838(var_80)
                    OP_PUSH2_C 4618328827877759386, 4631952216750555136
                    var_96 = 0;
                    OP_PUSH5_C 4642275311521418445, 4641038228998775112, 4647954684903067484, 4647908153570980004, 4638177739547953070
                    var_104 = 4649358101544760771;
                    var_112 = 1;
                    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
                    var_120 = 0;
                    pri = fun_2128()
                    OP_PUSH2_C 4618328827877759386, 4631952216750555136
                    var_128 = 3;
                    OP_PUSH5_C 4642054001820979692, 4641038228998775112, 4648060238019333980, 4647852826145870316, 4638177739547953070
                    var_136 = 4649463742621957489;
                    var_144 = 150;
                    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
                    var_152 = 0;
                    var_160 = 0;
                    var_168 = 0;
                    var_176 = 180;
                    pri = float(var_176)
                    var_184 = pri;
                    var_192 = -1517632578076027777;
                    var_200 = 40;
                    pri = fun_05B8(var_192, var_184, var_176, var_168, var_160)
                    var_208 = -1517632578076027777;
                    var_216 = 8;
                    pri = fun_0660(var_208)
                    var_224 = 5;
                    var_232 = 8;
                    pri = fun_0060(var_224)
                    var_240 = 0;
                    var_248 = 3;
                    var_256 = 0;
                    var_264 = 100;
                    var_272 = -1;
                    OP_PUSH2_C 1568362459338287677, -1517632578076027777
                    var_280 = 56;
                    pri = fun_1D98(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
                    var_288 = 1;
                    var_296 = 8;
                    pri = fun_1EE0(var_288)
                    var_304 = 0;
                    pri = fun_1FA0()
                    var_312 = 45;
                    var_320 = 8;
                    pri = fun_0060(var_312)
                    OP_JUMP switch_B0B0_case_default
                }
                case 0x1:
                {
// switch_B0B0_case_0x1
                    var_8 = 0;
                    pri = fun_1FA0()
                    var_16 = -1517632578076027777;
                    var_24 = 8;
                    pri = fun_0E68(var_16)
                    var_32 = 1;
                    var_40 = 3;
                    var_48 = 0;
                    var_56 = 6;
                    var_64 = -1517632578076027777;
                    var_72 = 40;
                    pri = fun_62D8(var_64, var_56, var_48, var_40, var_32)
                    var_80 = -1517632578076027777;
                    var_88 = 8;
                    pri = fun_0838(var_80)
                    OP_PUSH2_C 4618328827877759386, 4631952216750555136
                    var_96 = 0;
                    OP_PUSH5_C 4642275311521418445, 4641038228998775112, 4647954684903067484, 4647908153570980004, 4638177739547953070
                    var_104 = 4649358101544760771;
                    var_112 = 1;
                    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
                    var_120 = 0;
                    pri = fun_2128()
                    OP_PUSH2_C 4618328827877759386, 4631952216750555136
                    var_128 = 3;
                    OP_PUSH5_C 4642054001820979692, 4641038228998775112, 4648060238019333980, 4647852826145870316, 4638177739547953070
                    var_136 = 4649463742621957489;
                    var_144 = 150;
                    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
                    var_152 = 0;
                    var_160 = 0;
                    var_168 = 0;
                    var_176 = 180;
                    pri = float(var_176)
                    var_184 = pri;
                    var_192 = -1517632578076027777;
                    var_200 = 40;
                    pri = fun_05B8(var_192, var_184, var_176, var_168, var_160)
                    var_208 = -1517632578076027777;
                    var_216 = 8;
                    pri = fun_0660(var_208)
                    var_224 = 5;
                    var_232 = 8;
                    pri = fun_0060(var_224)
                    var_240 = 0;
                    var_248 = 3;
                    var_256 = 0;
                    var_264 = 100;
                    var_272 = -1;
                    OP_PUSH2_C 1568361359826659466, -1517632578076027777
                    var_280 = 56;
                    pri = fun_1D98(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
                    var_288 = 1;
                    var_296 = 8;
                    pri = fun_1EE0(var_288)
                    var_304 = 0;
                    pri = fun_1FA0()
                    var_312 = 45;
                    var_320 = 8;
                    pri = fun_0060(var_312)
                    OP_JUMP switch_B0B0_case_default
                }
            }
        }
        case 0x0:
        {
// switch_A808_case_0x0
            var_8 = 0;
            pri = fun_1FA0()
            var_16 = -1;
            var_24 = -1517632578076027777;
            var_32 = 16;
            pri = fun_0DE8(var_24, var_16)
            var_40 = 0;
            var_48 = 0;
            var_56 = 0;
            var_64 = 0;
            OP_PUSH2_C 8802641224559852288, -1517632578076027777
            var_72 = 48;
            pri = fun_0608(var_64, var_56, var_48, var_40, var_32, var_24)
            var_80 = -1517632578076027777;
            var_88 = 8;
            pri = fun_0660(var_80)
            OP_JUMP switch_A808_case_default
        }
        case 0x1:
        {
// switch_A808_case_0x1
            var_8 = 0;
            pri = fun_1FA0()
            var_16 = -1;
            var_24 = -1517632578076027777;
            var_32 = 16;
            pri = fun_0DE8(var_24, var_16)
            var_40 = 0;
            var_48 = 0;
            var_56 = 0;
            var_64 = 0;
            OP_PUSH2_C 8802641224559852288, -1517632578076027777
            var_72 = 48;
            pri = fun_0608(var_64, var_56, var_48, var_40, var_32, var_24)
            var_80 = -1517632578076027777;
            var_88 = 8;
            pri = fun_0660(var_80)
            OP_JUMP switch_A808_case_default
        }
        case 0x2:
        {
// switch_A808_case_0x2
            var_8 = 0;
            pri = fun_1FA0()
            var_16 = 34216;
            pri = SoundPostEvent(var_16)
            var_24 = 0;
            var_32 = 4631952216750555136;
            var_40 = 3;
            OP_PUSH5_C 4637936374755423683, 4640718051212766740, 4650557888632989942, 4648167726276065362, 4642312606955832607
            var_48 = 4650692292934369280;
            var_56 = 15;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
            var_64 = 0;
            var_72 = 0;
            var_80 = 3;
            var_88 = 8;
            OP_PUSH2_C 4600877379321698714, 4599075939470750516
            var_96 = 48;
            pri = fun_21B8(var_88, var_80, var_72, var_64, var_56, var_48)
            var_104 = 0;
            pri = fun_2320()
            var_112 = 3;
            var_120 = 7;
            var_128 = 16;
            pri = fun_2288(var_120, var_112)
            var_136 = 0;
            pri = fun_2128()
            var_144 = 0;
            var_152 = 4631952216750555136;
            var_160 = 3;
            OP_PUSH5_C 4637961707503327642, 4640593850379293164, 4650558064554850386, 4647864524949589852, 4642064205288885453
            var_168 = 4650681913544603075;
            var_176 = 240;
            pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_184 = 0;
            var_192 = 3;
            var_200 = 0;
            var_208 = 100;
            var_216 = -1;
            OP_PUSH2_C 1568359160803403044, -1517632578076027777
            var_224 = 56;
            pri = fun_1D98(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_232 = 1;
            var_240 = 8;
            pri = fun_1EE0(var_232)
            var_248 = 0;
            pri = fun_1FA0()
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            var_280 = 0;
            OP_PUSH2_C 8802641224559852288, -1517632578076027777
            var_288 = 48;
            pri = fun_0608(var_280, var_272, var_264, var_256, var_248, var_240)
            var_296 = 0;
            var_304 = 4631952216750555136;
            var_312 = 3;
            OP_PUSH5_C 4643677584671018844, 4636236265896091320, 4647599762549621391, 4650467288874861199, 4639706852358933709
            var_320 = 4650409058739054182;
            var_328 = 15;
            pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
            var_336 = 10;
            var_344 = 8;
            pri = fun_0060(var_336)
            var_352 = 6;
            var_360 = 9;
            var_368 = -1517632578076027777;
            var_376 = 24;
            pri = fun_0F18(var_368, var_360, var_352)
            var_384 = 0;
            var_392 = 3;
            var_400 = 0;
            var_408 = 100;
            var_416 = -1;
            OP_PUSH2_C 1568358061291774833, -1517632578076027777
            var_424 = 56;
            pri = fun_1D98(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
            var_432 = 1;
            var_440 = 8;
            pri = fun_1EE0(var_432)
            var_448 = 0;
            pri = fun_1FA0()
            var_456 = -1517632578076027777;
            var_464 = 8;
            pri = fun_0F80(var_456)
            var_472 = -1517632578076027777;
            var_480 = 8;
            pri = fun_0660(var_472)
            OP_JUMP switch_A808_case_default
        }
    }
}
// fun_C900
fun_C900() {
    pri = 0;
    return pri;
}
// fun_C918
fun_C918() {
    var_8 = -1517632578076027777;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 8567564428947440771;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 1280;
    var_48 = 8;
    pri = fun_8548(var_40)
    var_56 = -957350763623574401;
    pri = VanishFlagReset(var_56)
    var_64 = 2162984971204676483;
    pri = VanishFlagReset(var_64)
    var_72 = -3637774825512187412;
    pri = VanishFlagSet(var_72)
    var_80 = 6296125677953197721;
    pri = VanishFlagSet(var_80)
    var_88 = 3968503458629079712;
    pri = VanishFlagSet(var_88)
    var_96 = 6169098201486535376;
    pri = VanishFlagSet(var_96)
    var_104 = -5281747768360460553;
    pri = VanishFlagSet(var_104)
    var_112 = 8648780495101599026;
    pri = VanishFlagSet(var_112)
    var_120 = 1386192076629656845;
    pri = VanishFlagSet(var_120)
    var_128 = -4304237231279263455;
    pri = VanishFlagSet(var_128)
    var_136 = -1761483136653644672;
    pri = VanishFlagSet(var_136)
    var_144 = -79520384900933986;
    pri = VanishFlagSet(var_144)
    var_152 = 0;
    var_160 = 1;
    var_168 = 35176;
    pri = PokeMemoryCheckParty(var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_CBB0
fun_CBB0() {
    var_8 = 33776;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_CC08
fun_CC08() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_86E0()
    var_16 = 0;
    pri = fun_8738()
    var_24 = 0;
    pri = fun_8750()
    var_32 = 0;
    pri = fun_8768()
    var_40 = 0;
    pri = fun_C900()
    var_48 = 0;
    pri = fun_C918()
    var_56 = 0;
    pri = fun_CBB0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CCF8
fun_CCF8() {
    var_8 = 0;
    pri = fun_8738()
    var_16 = 0;
    pri = fun_C918()
    pri = 0;
    return pri;
}
