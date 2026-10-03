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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
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
// fun_08A0
fun_08A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1330(var_8)
    OP_JZER lab_0A18
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1360(var_24)
    OP_JNZ lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_0A28
// lab_0A28
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A88
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A28
    pri = 0;
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C00
// lab_0C00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1330(var_8)
    OP_JNZ lab_0C88
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CD0
    pri = 0;
    return pri;
// lab_0CD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D78(var_8)
    pri = 0;
    return pri;
// lab_0D30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C00
    pri = 0;
    return pri;
// lab_0C78
    OP_JUMP lab_0CD0
}
// fun_0D78
fun_0D78() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E00
    pri = 0;
    return pri;
// lab_0E00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1330(var_8)
    OP_JZER lab_0F30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E58
    OP_ZERO_P_S 64
// lab_0F30
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F68
    OP_CONST_S 64, 1
// lab_0F68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FA0
    OP_CONST_S 72, 1
// lab_0FA0
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
// lab_0E58
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E80
    OP_ZERO_P_S 72
// lab_0E80
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
    OP_JUMP lab_1040
// lab_1040
    pri = 0;
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1150
fun_1150() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1110(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1188(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1150(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11C8(var_24)
    pri = 0;
    return pri;
}
// fun_12C0
fun_12C0() {
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
// fun_1330
fun_1330() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1360
fun_1360() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1390
fun_1390() {
    OP_JUMP lab_13A8
// lab_13A8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1438
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1428
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_1438
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_14B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_14C8
    pri = 0;
    return pri;
// lab_14B8
    OP_JUMP lab_14D8
// lab_14D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13A8
    pri = 0;
    return pri;
// lab_1428
    OP_JUMP lab_14D8
}
// fun_1518
fun_1518() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1390(var_40)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15D8
fun_15D8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1600
fun_1600() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1668
fun_1668() {
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
// switch_1C80
        case default:
        {
// switch_1C80_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CC8
// lab_1CC8
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
            OP_JNZ lab_1D70
            var_88 = 0;
            pri = fun_1F90()
// lab_1D70
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C80_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1868
                case default:
                {
// switch_1868_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18E0
// lab_18E0
                    OP_JUMP lab_1CC8
                }
                case 0x0:
                {
// switch_1868_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_18E0
                }
                case 0x1:
                {
// switch_1868_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_18E0
                }
                case 0x2:
                {
// switch_1868_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_18E0
                }
                case 0x3:
                {
// switch_1868_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18E0
                }
                case 0x4:
                {
// switch_1868_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_18E0
                }
                case 0x5:
                {
// switch_1868_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_18E0
                }
            }
        }
        case 0x65:
        {
// switch_1C80_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A20
                case default:
                {
// switch_1A20_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A98
// lab_1A98
                    OP_JUMP lab_1CC8
                }
                case 0x0:
                {
// switch_1A20_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A98
                }
                case 0x1:
                {
// switch_1A20_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A98
                }
                case 0x2:
                {
// switch_1A20_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A98
                }
                case 0x3:
                {
// switch_1A20_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A98
                }
                case 0x4:
                {
// switch_1A20_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A98
                }
                case 0x5:
                {
// switch_1A20_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A98
                }
            }
        }
        case 0x66:
        {
// switch_1C80_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1BD8
                case default:
                {
// switch_1BD8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C50
// lab_1C50
                    OP_JUMP lab_1CC8
                }
                case 0x0:
                {
// switch_1BD8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C50
                }
                case 0x1:
                {
// switch_1BD8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C50
                }
                case 0x2:
                {
// switch_1BD8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C50
                }
                case 0x3:
                {
// switch_1BD8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C50
                }
                case 0x4:
                {
// switch_1BD8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C50
                }
                case 0x5:
                {
// switch_1BD8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C50
                }
            }
        }
    }
}
// fun_1D88
fun_1D88() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1668(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B40(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E98
    pri = 1;
    return pri;
// lab_1E98
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1EE0
fun_1EE0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DF0(var_8)
    arg_2 = pri;
// lab_1F30
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1668(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    OP_JUMP lab_1FA8
// lab_1FA8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FE8
    pri = 0;
    return pri;
// lab_1FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FA8
    pri = 0;
    return pri;
}
// fun_2028
fun_2028() {
    var_8 = 0;
    pri = fun_1F90()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_20D8
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_20D8
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2118
fun_2118() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2148
// lab_2148
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2188
    OP_JUMP lab_21B8
// lab_2188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2148
// lab_21B8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
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
// fun_2270
fun_2270() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_22E8()
    return pri;
}
// fun_22E8
fun_22E8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2328
fun_2328() {
    OP_JUMP lab_2340
// lab_2340
    pri = EvCameraMoveWait_()
    OP_JZER lab_2378
    pri = 0;
    return pri;
// lab_2378
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2340
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
    pri = arg_6;
    OP_JNZ lab_23F0
    var_8 = 0;
    pri = fun_1050()
// lab_23F0
    pri = arg_1;
    switch (pri) {
// switch_3958
        case default:
        {
// switch_3958_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CA8
            pri = 1;
            OP_JUMP lab_3CB0
// lab_3CA8
            pri = 0;
// lab_3CB0
            OP_JZER lab_3E08
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
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
            OP_JUMP lab_3E68
// lab_3E08
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
// lab_3E68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3EC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F28
// lab_3EC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F28
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F28
            pri = arg_2;
            OP_JZER lab_3F68
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F68
            var_8 = 0;
            pri = fun_1090()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3958_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1:
        {
// switch_3958_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x2:
        {
// switch_3958_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x3:
        {
// switch_3958_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x4:
        {
// switch_3958_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x5:
        {
// switch_3958_case_0x5
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x6:
        {
// switch_3958_case_0x6
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x7:
        {
// switch_3958_case_0x7
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x8:
        {
// switch_3958_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x9:
        {
// switch_3958_case_0x9
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xa:
        {
// switch_3958_case_0xa
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xb:
        {
// switch_3958_case_0xb
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xc:
        {
// switch_3958_case_0xc
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xd:
        {
// switch_3958_case_0xd
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xe:
        {
// switch_3958_case_0xe
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xf:
        {
// switch_3958_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x10:
        {
// switch_3958_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x11:
        {
// switch_3958_case_0x11
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x12:
        {
// switch_3958_case_0x12
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x13:
        {
// switch_3958_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x14:
        {
// switch_3958_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x15:
        {
// switch_3958_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x16:
        {
// switch_3958_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x17:
        {
// switch_3958_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x18:
        {
// switch_3958_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x19:
        {
// switch_3958_case_0x19
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
            pri = fun_0DB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x1a:
        {
// switch_3958_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC8(var_48, var_40)
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
            pri = fun_0DB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1b:
        {
// switch_3958_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC8(var_48, var_40)
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
            pri = fun_0DB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1c:
        {
// switch_3958_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC8(var_48, var_40)
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
            pri = fun_0DB0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1d:
        {
// switch_3958_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1e:
        {
// switch_3958_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1f:
        {
// switch_3958_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x20:
        {
// switch_3958_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x21:
        {
// switch_3958_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x22:
        {
// switch_3958_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x23:
        {
// switch_3958_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x24:
        {
// switch_3958_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x25:
        {
// switch_3958_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x26:
        {
// switch_3958_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x27:
        {
// switch_3958_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x28:
        {
// switch_3958_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x29:
        {
// switch_3958_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
    }
}
// fun_3F98
fun_3F98() {
    pri = arg_4;
    OP_JNZ lab_3FD0
    var_8 = 0;
    pri = fun_1050()
// lab_3FD0
    pri = arg_1;
    switch (pri) {
// switch_53A8
        case default:
        {
// switch_53A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8968;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1330(var_264)
            OP_JZER lab_5970
            pri = arg_3;
            switch (pri) {
// switch_5918
                case default:
                {
// switch_5918_case_default
                    OP_JUMP lab_5C28
// lab_5C28
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5C98
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5C98
                    var_8 = 0;
                    pri = fun_1090()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5918_case_0x1
                    var_8 = 32;
                    var_16 = 9120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5918_case_default
                }
                case 0x2:
                {
// switch_5918_case_0x2
                    var_8 = 32;
                    var_16 = 9224;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5918_case_default
                }
                case 0x3:
                {
// switch_5918_case_0x3
                    var_8 = 32;
                    var_16 = 9024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5918_case_default
                }
            }
// lab_5970
            pri = arg_1;
            OP_JZER lab_59C0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_59C0
            pri = 0;
            OP_JUMP lab_59C8
// lab_59C0
            pri = 1;
// lab_59C8
            OP_JZER lab_5A30
            var_8 = 9320;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B40(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A30
            pri = 1;
            OP_JUMP lab_5A38
// lab_5A30
            pri = 0;
// lab_5A38
            OP_JZER lab_5A88
            var_8 = 32;
            var_16 = 9416;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5C28
// lab_5A88
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5AF0
            var_8 = 32;
            var_16 = 9576;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_5C28
// lab_5AF0
            var_16 = 9696;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
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
// switch_53A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1:
        {
// switch_53A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2:
        {
// switch_53A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3:
        {
// switch_53A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x4:
        {
// switch_53A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x5:
        {
// switch_53A8_case_0x5
            var_8 = 1;
            var_16 = 8448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D78(var_40)
            OP_JUMP switch_53A8_case_default
        }
        case 0x6:
        {
// switch_53A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x7:
        {
// switch_53A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x8:
        {
// switch_53A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x9:
        {
// switch_53A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xa:
        {
// switch_53A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xb:
        {
// switch_53A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xc:
        {
// switch_53A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xd:
        {
// switch_53A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xe:
        {
// switch_53A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0xf:
        {
// switch_53A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x10:
        {
// switch_53A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x11:
        {
// switch_53A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x12:
        {
// switch_53A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x13:
        {
// switch_53A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x14:
        {
// switch_53A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x15:
        {
// switch_53A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x16:
        {
// switch_53A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x17:
        {
// switch_53A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x18:
        {
// switch_53A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x19:
        {
// switch_53A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1a:
        {
// switch_53A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1b:
        {
// switch_53A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1c:
        {
// switch_53A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1d:
        {
// switch_53A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1e:
        {
// switch_53A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x1f:
        {
// switch_53A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x20:
        {
// switch_53A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x21:
        {
// switch_53A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x22:
        {
// switch_53A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x23:
        {
// switch_53A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x24:
        {
// switch_53A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x25:
        {
// switch_53A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x26:
        {
// switch_53A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x27:
        {
// switch_53A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x28:
        {
// switch_53A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x29:
        {
// switch_53A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2a:
        {
// switch_53A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2b:
        {
// switch_53A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2c:
        {
// switch_53A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2d:
        {
// switch_53A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2e:
        {
// switch_53A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x2f:
        {
// switch_53A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x30:
        {
// switch_53A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x31:
        {
// switch_53A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x32:
        {
// switch_53A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x33:
        {
// switch_53A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x34:
        {
// switch_53A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x35:
        {
// switch_53A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x36:
        {
// switch_53A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x37:
        {
// switch_53A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x38:
        {
// switch_53A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x39:
        {
// switch_53A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3a:
        {
// switch_53A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3b:
        {
// switch_53A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3c:
        {
// switch_53A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8544;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3d:
        {
// switch_53A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8720;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
        case 0x3e:
        {
// switch_53A8_case_0x3e
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            OP_JUMP switch_53A8_case_default
        }
    }
}
// fun_5CC8
fun_5CC8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5DC8
        case default:
        {
// switch_5DC8_case_default
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
// switch_5DC8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5DC8_case_default
        }
        case 0x1:
        {
// switch_5DC8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5DC8_case_default
        }
        case 0x2:
        {
// switch_5DC8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5DC8_case_default
        }
        case 0x3:
        {
// switch_5DC8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5DC8_case_default
        }
    }
}
// fun_5E88
fun_5E88() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5ED8
// lab_5ED8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9864;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5F50
    OP_JUMP lab_5F80
// lab_5F50
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_5ED8
// lab_5F80
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6008
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3F98(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1600(var_56)
// lab_6008
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6070
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10D0(var_24, var_16)
// lab_6070
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_10D0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6130
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0B78(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_08F8(var_88, var_80, var_72, var_64, var_56)
// lab_6130
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6170
    pri = 0;
    return pri;
// lab_6170
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_62B8
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 9984;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0AC8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6280
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_62B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09A0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B78(var_40)
    pri = 0;
    return pri;
// lab_6280
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10D0(var_16, var_8)
}
// fun_6340
fun_6340() {
    pri = 10120;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_63C8
// lab_63C8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6548
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6538
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6488
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6488
    pri = 0;
    OP_JUMP lab_6490
// lab_6548
    pri = 0;
    return pri;
// lab_6538
    OP_JUMP lab_63C0
// lab_63C0
    OP_INC_P_S -936
// lab_6488
    pri = 1;
// lab_6490
    OP_JZER lab_6508
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6500
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6508
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6500
}
// fun_6568
fun_6568() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6600
    var_8 = 1;
    var_16 = 0;
    var_24 = 11040;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_15D8()
// lab_6600
    pri = arg_4;
    OP_JZER lab_6638
    var_8 = 1;
    var_16 = 8;
    pri = fun_1630(var_8)
// lab_6638
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6690
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6690
    pri = 0;
    OP_JUMP lab_6698
// lab_6690
    pri = 1;
// lab_6698
    OP_JZER lab_6760
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6760
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_6738
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1518(var_32, var_24)
    OP_JUMP lab_6760
// lab_6760
    pri = arg_2;
    OP_JZER lab_6838
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_6808
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10D0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07F0(var_40)
    OP_JUMP lab_6838
// lab_6838
    pri = arg_3;
    OP_JZER lab_6870
    var_8 = 1;
    var_16 = 8;
    pri = fun_15A0(var_8)
// lab_6870
    pri = 0;
    return pri;
// lab_6808
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10D0(var_16, var_8)
// lab_6738
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1518(var_16, var_8)
}
// fun_6880
fun_6880() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_09A0(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_5CC8(var_72, var_64, var_56, var_48, var_40, var_32)
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
    pri = fun_1EE0(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2028(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_6A18
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2118(var_184, var_176, var_168)
// lab_6A18
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2118(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2118(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2200(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_7280
        case default:
        {
// switch_7280_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7280_case_0x0
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
            pri = fun_1EE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2028(var_72)
            var_88 = 0;
            pri = fun_20E8()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_5E88(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_6CE0
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
            pri = fun_0828(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_09A0(var_216)
// lab_6CE0
            OP_JUMP switch_7280_case_default
        }
        case 0x1:
        {
// switch_7280_case_0x1
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
            pri = fun_1EE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2028(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_2270(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_6F00
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
            pri = fun_1EE0(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_2028(var_216)
            var_232 = 0;
            pri = fun_20E8()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_5E88(var_264, var_256, var_248, var_240)
            var_280 = 11088;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_6F00
            var_8 = 0;
            pri = fun_20E8()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5E88(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_7050
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
            pri = fun_0828(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_09A0(var_136)
// lab_7050
            OP_JUMP switch_7280_case_default
        }
        case 0x2:
        {
// switch_7280_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_7120
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
            pri = fun_1EE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2028(var_72)
// lab_7120
            var_8 = 0;
            pri = fun_20E8()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_5E88(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_7270
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
            pri = fun_0828(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_09A0(var_136)
// lab_7270
            OP_JUMP switch_7280_case_default
        }
    }
}
// fun_72E0
fun_72E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 0;
    pri = fun_0498()
    pri = arg_1;
    OP_JZER lab_7358
    var_32 = 11200;
    pri = SoundPostEvent(var_32)
// lab_7358
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
// fun_73D8
fun_73D8() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_7428
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_72E0(var_16, var_8)
// lab_7428
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_74C8
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_74C8
    pri = 1;
    OP_JUMP lab_74D0
// lab_74C8
    pri = 0;
// lab_74D0
    OP_JZER lab_7668
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_75B0
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
    OP_JUMP lab_7658
// lab_7668
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
// lab_75B0
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
// lab_7658
    OP_JUMP lab_7728
// lab_7728
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_77A0
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0730(var_32, var_24, var_16)
// lab_77A0
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
// fun_7810
fun_7810() {
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
    pri = fun_0828(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_09A0(var_96)
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
    pri = fun_12C0(var_376, var_368, var_360, var_352, var_344, var_336)
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
    pri = fun_12C0(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 15;
    var_480 = 8;
    pri = fun_00B8(var_472)
    var_488 = 3;
    var_496 = 2;
    var_504 = 101;
    var_512 = arg_0;
    var_520 = 32;
    pri = fun_1D88(var_512, var_504, var_496, var_488)
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
    pri = fun_1200(var_576, var_568, var_560)
    pri = arg_11;
    alt = -1;
    OP_JEQ lab_7E00
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 3;
    var_624 = 0;
    var_632 = arg_11;
    var_640 = 8802641224559852288;
    var_648 = 56;
    pri = fun_23B8(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
// lab_7E00
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
    pri = fun_1268(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 180;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 40;
    pri = fun_08F8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 30;
    var_128 = 8;
    pri = fun_00B8(var_120)
    var_136 = 0;
    pri = fun_1F90()
    pri = MsgWinClose()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_09A0(var_144)
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
    pri = fun_0AC8(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 0;
    var_240 = 90;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 48;
    pri = fun_08A0(var_240, var_232, var_224, var_216, var_208, var_200)
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
    pri = fun_09A0(var_352)
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
// fun_82C8
fun_82C8() {
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
    pri = fun_73D8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_8368
fun_8368() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6340(var_24)
    pri = 0;
    return pri;
}
// fun_83D0
fun_83D0() {
    pri = g_mode;
    switch (pri) {
// switch_84E0
        case default:
        {
// switch_84E0_case_default
            pri = CommandNOP()
            OP_JUMP lab_8548
// lab_8548
            pri = 0;
            return pri;
        }
        case 0xb3e4f7d85b1e71c5:
        {
// switch_84E0_case_0xb3e4f7d85b1e71c5
            var_8 = 0;
            pri = fun_A120()
            OP_JUMP lab_8548
        }
        case 0xc483f41ea7e9607d:
        {
// switch_84E0_case_0xc483f41ea7e9607d
            var_8 = 0;
            pri = fun_A098()
            OP_JUMP lab_8548
        }
        case 0xf461f77db161933b:
        {
// switch_84E0_case_0xf461f77db161933b
            var_8 = 0;
            pri = fun_A1F8()
            OP_JUMP lab_8548
        }
        case 0x0:
        {
// switch_84E0_case_0x0
            var_8 = 0;
            pri = fun_8558()
            OP_JUMP lab_8548
        }
        case 0x58922e21e473ea79:
        {
// switch_84E0_case_0x58922e21e473ea79
            var_8 = 0;
            pri = fun_9FA8()
            OP_JUMP lab_8548
        }
    }
}
// fun_8558
fun_8558() {
    pri = 0;
    return pri;
}
// fun_8570
fun_8570() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6568(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_85C8
fun_85C8() {
    pri = 0;
    return pri;
}
// fun_85E0
fun_85E0() {
    pri = 0;
    return pri;
}
// fun_85F8
fun_85F8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4672546186048045056, 4659914996468154368, 8802641224559852288
    var_40 = 48;
    pri = fun_06D8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4636033603912859648, 4671913966862073856, 4659629123444932608, 8682405981608744873
    var_64 = 48;
    pri = fun_06D8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 8802641224559852288;
    var_88 = 16;
    pri = fun_07B0(var_80, var_72)
    var_96 = 1;
    var_104 = 8682405981608744873;
    var_112 = 16;
    pri = fun_07B0(var_104, var_96)
    var_120 = 9048314717660155916;
    pri = FlagGet(var_120)
    alt = 1;
    OP_JEQ lab_91D8
    var_128 = 10;
    var_136 = 8;
    pri = fun_00B8(var_128)
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 0;
    OP_PUSH5_C 4668222037713443881, 4608263282710586327, 4662529920992028918, 4667360130548430275, 4650433951682307031
    var_168 = 4663511081188191109;
    var_176 = 1;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    pri = fun_2328()
    var_192 = 14376;
    pri = SoundPostEvent(var_192)
    var_200 = 14648;
    var_208 = 8;
    var_216 = 16;
    pri = fun_02D8(var_208, var_200)
    var_224 = 0;
    pri = fun_03A8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 4641240890982006784;
    var_256 = 0;
    var_264 = 0;
    var_272 = 22600;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 3500;
    pri = float(var_288)
    var_296 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_304 = 72;
    pri = fun_0828(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 15;
    var_320 = 8;
    pri = fun_00B8(var_312)
    var_328 = 0;
    var_336 = 4631952216750555136;
    var_344 = 3;
    OP_PUSH5_C 4668810804199885373, 4659164030026383360, 4662177285622768599, 4668012201416840970, 4660057273272788582
    var_352 = 4663590191049809592;
    var_360 = 150;
    pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 0;
    pri = fun_2328()
    var_376 = 0;
    pri = fun_2328()
    var_384 = 45;
    var_392 = 8;
    pri = fun_00B8(var_384)
    var_400 = 0;
    var_408 = 4631952216750555136;
    var_416 = 3;
    OP_PUSH5_C 4672009360490899702, 4660970417679656550, 4660484565481574892, 4671720425327794586, 4662037735606971269
    var_424 = 4662377308778093609;
    var_432 = 150;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 0;
    pri = fun_2328()
    var_448 = 1;
    var_456 = 0;
    var_464 = 14664;
    var_472 = 1;
    var_480 = 32;
    pri = fun_0338(var_472, var_464, var_456, var_448)
    var_488 = 0;
    pri = fun_03A8()
    var_496 = 3;
    var_504 = 1;
    pri = EvCameraEnd(var_504, var_496)
    var_512 = 1;
    var_520 = 8;
    pri = fun_00B8(var_512)
    var_528 = 14712;
    var_536 = 15;
    var_544 = 16;
    pri = fun_02D8(var_536, var_528)
    var_552 = 8802641224559852288;
    var_560 = 8;
    pri = fun_09A0(var_552)
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    OP_PUSH2_C 8682405981608744873, 8802641224559852288
    var_600 = 48;
    pri = fun_0948(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 8802641224559852288, 8682405981608744873
    var_640 = 48;
    pri = fun_0948(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 8802641224559852288;
    var_656 = 8;
    pri = fun_09A0(var_648)
    var_664 = 8682405981608744873;
    var_672 = 8;
    pri = fun_09A0(var_664)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C -1709684992485403113, 8682405981608744873
    var_720 = 56;
    pri = fun_1EE0(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_2028(var_728)
    pri = EvCameraStart()
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 160;
    pri = float(var_768)
    var_776 = pri;
    var_784 = 8682405981608744873;
    var_792 = 40;
    pri = fun_08F8(var_784, var_776, var_768, var_760, var_752)
    var_800 = 0;
    var_808 = 4631952216750555136;
    var_816 = 0;
    OP_PUSH5_C 4671904827171667968, 4659582548132380017, 4659916601755130921, 4671599154692809032, 4662147620799051203
    var_824 = 4659925089984897352;
    var_832 = 1;
    pri = EvCameraMove(var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 0;
    pri = fun_2328()
    var_848 = 0;
    var_856 = 3;
    var_864 = 2;
    var_872 = 100;
    var_880 = -1;
    OP_PUSH2_C -1709683892973774902, 8682405981608744873
    var_888 = 56;
    pri = fun_1EE0(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 8682405981608744873;
    var_904 = 8;
    pri = fun_09A0(var_896)
    var_912 = 30;
    var_920 = 8;
    pri = fun_00B8(var_912)
    var_928 = 0;
    var_936 = 4631952216750555136;
    var_944 = 3;
    OP_PUSH5_C 4670717695462274499, 4659642251613768253, 4660022000939769528, 4670558183812874895, 4662465698517850522
    var_952 = 4660036096678837617;
    var_960 = 240;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    pri = fun_1F90()
    var_976 = 1;
    var_984 = 8;
    pri = fun_2028(var_976)
    var_992 = 0;
    var_1000 = 3;
    var_1008 = 0;
    var_1016 = 100;
    var_1024 = -1;
    OP_PUSH2_C -1709682793462146691, 8682405981608744873
    var_1032 = 56;
    pri = fun_1EE0(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 1;
    var_1048 = 8;
    pri = fun_2028(var_1040)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -1709690490043544168, 8682405981608744873
    var_1096 = 56;
    pri = fun_1EE0(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_2028(var_1104)
    var_1120 = 0;
    pri = fun_2328()
    var_1128 = 1;
    var_1136 = 0;
    var_1144 = 14760;
    var_1152 = 1;
    var_1160 = 32;
    pri = fun_0338(var_1152, var_1144, var_1136, var_1128)
    var_1168 = 0;
    pri = fun_03A8()
    var_1176 = 3;
    var_1184 = 1;
    pri = EvCameraEnd(var_1184, var_1176)
    var_1192 = 1;
    OP_PUSH2_C 8802641224559852288, 8682405981608744873
    var_1200 = 24;
    pri = fun_0770(var_1192, var_1184, var_1176)
    var_1208 = 15;
    var_1216 = 8;
    pri = fun_00B8(var_1208)
    var_1224 = 14824;
    var_1232 = 8;
    var_1240 = 16;
    pri = fun_02D8(var_1232, var_1224)
    var_1248 = 0;
    pri = fun_03A8()
    var_1256 = 9048314717660155916;
    pri = FlagSet(var_1256)
    OP_JUMP lab_9AD8
// lab_91D8
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4672051405815545856, 4659914996468154368, 8802641224559852288
    var_40 = 48;
    pri = fun_06D8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 3;
    var_56 = 1;
    pri = EvCameraEnd(var_56, var_48)
    var_64 = 10;
    var_72 = 8;
    pri = fun_00B8(var_64)
    var_80 = 1;
    var_88 = 0;
    var_96 = 4641240890982006784;
    var_104 = 0;
    var_112 = 0;
    var_120 = 22600;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 3500;
    pri = float(var_136)
    var_144 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_152 = 72;
    pri = fun_0828(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 14872;
    pri = SoundPostEvent(var_160)
    var_168 = 15144;
    var_176 = 8;
    var_184 = 16;
    pri = fun_02D8(var_176, var_168)
    var_192 = 0;
    pri = fun_03A8()
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_09A0(var_200)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    OP_PUSH2_C 8682405981608744873, 8802641224559852288
    var_248 = 48;
    pri = fun_0948(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    OP_PUSH2_C 8802641224559852288, 8682405981608744873
    var_288 = 48;
    pri = fun_0948(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_09A0(var_296)
    var_312 = 8682405981608744873;
    var_320 = 8;
    pri = fun_09A0(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C -1709684992485403113, 8682405981608744873
    var_368 = 56;
    pri = fun_1EE0(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_2028(var_376)
    var_392 = 0;
    var_400 = 3069682094634867766;
    var_408 = 0;
    var_416 = 24;
    pri = fun_2118(var_408, var_400, var_392)
    var_424 = 0;
    var_432 = 3069680995123239555;
    var_440 = 1;
    var_448 = 24;
    pri = fun_2118(var_440, var_432, var_424)
    var_464 = 0;
    var_472 = 1;
    var_480 = 0;
    var_488 = 1;
    var_496 = 32;
    pri = fun_2200(var_488, var_480, var_472, var_464)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9AA8
        case default:
        {
// switch_9AA8_case_default
            OP_JUMP lab_9AD0
// lab_9AD0
        }
        case 0x0:
        {
// switch_9AA8_case_0x0
            pri = EvCameraStart()
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 160;
            pri = float(var_32)
            var_40 = pri;
            var_48 = 8682405981608744873;
            var_56 = 40;
            pri = fun_08F8(var_48, var_40, var_32, var_24, var_16)
            var_64 = 0;
            var_72 = 4631952216750555136;
            var_80 = 0;
            OP_PUSH5_C 4671904827171667968, 4659582548132380017, 4659916601755130921, 4671599154692809032, 4662147620799051203
            var_88 = 4659925089984897352;
            var_96 = 1;
            pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_104 = 0;
            pri = fun_2328()
            var_112 = 0;
            var_120 = 3;
            var_128 = 2;
            var_136 = 100;
            var_144 = -1;
            OP_PUSH2_C -1709683892973774902, 8682405981608744873
            var_152 = 56;
            pri = fun_1EE0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 8682405981608744873;
            var_168 = 8;
            pri = fun_09A0(var_160)
            var_176 = 30;
            var_184 = 8;
            pri = fun_00B8(var_176)
            var_192 = 0;
            var_200 = 4631952216750555136;
            var_208 = 3;
            OP_PUSH5_C 4670717695462274499, 4659642251613768253, 4660022000939769528, 4670558183812874895, 4662465698517850522
            var_216 = 4660036096678837617;
            var_224 = 240;
            pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_232 = 0;
            pri = fun_1F90()
            var_240 = 1;
            var_248 = 8;
            pri = fun_2028(var_240)
            var_256 = 0;
            var_264 = 3;
            var_272 = 0;
            var_280 = 100;
            var_288 = -1;
            OP_PUSH2_C -1709682793462146691, 8682405981608744873
            var_296 = 56;
            pri = fun_1EE0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
            var_304 = 1;
            var_312 = 8;
            pri = fun_2028(var_304)
            var_320 = 0;
            var_328 = 3;
            var_336 = 0;
            var_344 = 100;
            var_352 = -1;
            OP_PUSH2_C -1709690490043544168, 8682405981608744873
            var_360 = 56;
            pri = fun_1EE0(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
            var_368 = 1;
            var_376 = 8;
            pri = fun_2028(var_368)
            var_384 = 0;
            pri = fun_20E8()
            var_392 = 1;
            var_400 = 0;
            var_408 = 15160;
            var_416 = 1;
            var_424 = 32;
            pri = fun_0338(var_416, var_408, var_400, var_392)
            var_432 = 0;
            pri = fun_03A8()
            var_440 = 3;
            var_448 = 1;
            pri = EvCameraEnd(var_448, var_440)
            var_456 = 1;
            OP_PUSH2_C 8802641224559852288, 8682405981608744873
            var_464 = 24;
            pri = fun_0770(var_456, var_448, var_440)
            var_472 = 15;
            var_480 = 8;
            pri = fun_00B8(var_472)
            var_488 = 14824;
            var_496 = 8;
            var_504 = 16;
            pri = fun_02D8(var_496, var_488)
            var_512 = 0;
            pri = fun_03A8()
            OP_JUMP lab_9AD0
        }
    }
// lab_9AD8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -1709689390531915957, 8682405981608744873
    var_48 = 56;
    pri = fun_1EE0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2028(var_56)
    var_72 = 0;
    pri = fun_20E8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 180;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 8802641224559852288;
    var_128 = 40;
    pri = fun_08F8(var_120, var_112, var_104, var_96, var_88)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 8682405981608744873;
    var_184 = 40;
    pri = fun_08F8(var_176, var_168, var_160, var_152, var_144)
    var_192 = 8682405981608744873;
    var_200 = 8;
    pri = fun_09A0(var_192)
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_09A0(var_208)
    var_224 = 1;
    var_232 = 0;
    var_240 = 0;
    var_248 = 60;
    OP_PUSH2_C 4611686018427387904, 8682405981608744873
    var_256 = 48;
    pri = fun_08A0(var_248, var_240, var_232, var_224, var_216, var_208)
    var_264 = 15224;
    pri = SoundPostEvent(var_264)
    var_272 = 0;
    var_280 = 8802641224559852288;
    var_288 = 16;
    pri = fun_07B0(var_280, var_272)
    var_296 = 0;
    var_304 = 8682405981608744873;
    var_312 = 16;
    pri = fun_07B0(var_304, var_296)
    var_320 = 60;
    var_328 = 8;
    pri = fun_00B8(var_320)
    var_336 = 8682405981608744873;
    var_344 = 8;
    pri = fun_09A0(var_336)
    var_352 = 15448;
    pri = SoundPostEvent(var_352)
    pri = 0;
    return pri;
}
// fun_9DD0
fun_9DD0() {
    pri = 0;
    return pri;
}
// fun_9DE8
fun_9DE8() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_9E28
fun_9E28() {
    var_8 = 990;
    var_16 = 8;
    pri = fun_8368(var_8)
    var_24 = -9189246923683046007;
    pri = VanishFlagReset(var_24)
    var_32 = -4576950263435708588;
    pri = FlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_9EB0
fun_9EB0() {
    var_8 = 960;
    var_16 = 8;
    pri = fun_8368(var_8)
    pri = 0;
    return pri;
}
// fun_9EE8
fun_9EE8() {
    OP_PUSH2_C 8682405981608744873, 3130778238093270099
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9F30
fun_9F30() {
    var_8 = 180;
    var_16 = 1902582762524271626;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C -5232240767779674943, 6673557315404781696
    var_40 = 2;
    var_48 = 56;
    pri = fun_82C8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9FA8
fun_9FA8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8570()
    var_16 = 0;
    pri = fun_85C8()
    var_24 = 0;
    pri = fun_85E0()
    var_32 = 0;
    pri = fun_85F8()
    var_40 = 0;
    pri = fun_9DD0()
    var_48 = 0;
    pri = fun_9DE8()
    var_56 = 0;
    pri = fun_9EE8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A098
fun_A098() {
    var_8 = 0;
    pri = fun_85C8()
    var_16 = 0;
    pri = fun_9DE8()
    var_24 = 0;
    pri = fun_9E28()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_A120
fun_A120() {
    pri = 15712;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 23400;
    var_80 = 3500;
    OP_PUSH_P_ADR -64
    var_88 = 8682405981608744873;
    var_96 = 32;
    pri = fun_6880(var_88, var_80, var_72, var_64)
    OP_JZER lab_A1E0
    var_104 = 0;
    pri = fun_9EB0()
    var_112 = 0;
    pri = fun_9F30()
// lab_A1E0
    pri = 0;
    return pri;
}
// fun_A1F8
fun_A1F8() {
    var_8 = 0;
    pri = fun_9E28()
    var_16 = 23;
    var_24 = 26500;
    var_32 = 20000;
    OP_PUSH2_C -5231390845291257065, 6672601839800055562
    var_40 = 1600;
    var_48 = 77;
    var_56 = 3500;
    var_64 = 2;
    var_72 = 15776;
    OP_PUSH2_C -2099402482615897084, -7490515871938915191
    var_80 = 96;
    pri = fun_7810(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    pri = 0;
    return pri;
}
