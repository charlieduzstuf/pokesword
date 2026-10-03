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
    pri = arg_0;
    switch (pri) {
// switch_0608
        case default:
        {
// switch_0608_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0608_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x1:
        {
// switch_0608_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x2:
        {
// switch_0608_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x3:
        {
// switch_0608_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x4:
        {
// switch_0608_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x5:
        {
// switch_0608_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
        case 0x6:
        {
// switch_0608_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0608_case_default
        }
    }
}
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0708
// lab_0708
    var_8 = 0;
    pri = fun_0850()
    OP_JNZ lab_0740
    OP_JUMP lab_0770
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0708
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_07A0
// lab_07A0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0850
fun_0850() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D0
fun_08D0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_09F0
fun_09F0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
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
// fun_0CE0
fun_0CE0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D88
fun_0D88() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14F8(var_8)
    OP_JZER lab_0E00
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1528(var_24)
    OP_JNZ lab_0E00
    pri = 0;
    return pri;
// lab_0E00
    OP_JUMP lab_0E10
// lab_0E10
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0E70
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0E70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E10
    pri = 0;
    return pri;
}
// fun_0EB0
fun_0EB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0EE8
fun_0EE8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F28
fun_0F28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0FA8
    pri = 0;
    return pri;
// lab_0FA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0FE8
// lab_0FE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14F8(var_8)
    OP_JNZ lab_1070
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_1060
    pri = 0;
    return pri;
// lab_1070
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_10B8
    pri = 0;
    return pri;
// lab_10B8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1118
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1160(var_8)
    pri = 0;
    return pri;
// lab_1118
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0FE8
    pri = 0;
    return pri;
// lab_1060
    OP_JUMP lab_10B8
}
// fun_1160
fun_1160() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11E8
    pri = 0;
    return pri;
// lab_11E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14F8(var_8)
    OP_JZER lab_1318
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1240
    OP_ZERO_P_S 64
// lab_1318
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1350
    OP_CONST_S 64, 1
// lab_1350
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1388
    OP_CONST_S 72, 1
// lab_1388
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
// lab_1240
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1268
    OP_ZERO_P_S 72
// lab_1268
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
    OP_JUMP lab_1428
// lab_1428
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F8
fun_14F8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1528
fun_1528() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1558
fun_1558() {
    OP_JUMP lab_1570
// lab_1570
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1600
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F60(var_8)
    pri = 0;
    return pri;
// lab_1600
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1690
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1680
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F60(var_8)
    pri = 0;
    return pri;
// lab_1690
    pri = 0;
    return pri;
// lab_1680
    OP_JUMP lab_16A0
// lab_16A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1570
    pri = 0;
    return pri;
// lab_15F0
    OP_JUMP lab_16A0
}
// fun_16E0
fun_16E0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1558(var_40)
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_17A0
fun_17A0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_17F8
fun_17F8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1830
fun_1830() {
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
// switch_1E48
        case default:
        {
// switch_1E48_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E90
// lab_1E90
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
            OP_JNZ lab_1F38
            var_88 = 0;
            pri = fun_20F0()
// lab_1F38
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E48_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A30
                case default:
                {
// switch_1A30_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AA8
// lab_1AA8
                    OP_JUMP lab_1E90
                }
                case 0x0:
                {
// switch_1A30_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1AA8
                }
                case 0x1:
                {
// switch_1A30_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1AA8
                }
                case 0x2:
                {
// switch_1A30_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1AA8
                }
                case 0x3:
                {
// switch_1A30_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AA8
                }
                case 0x4:
                {
// switch_1A30_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1AA8
                }
                case 0x5:
                {
// switch_1A30_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1AA8
                }
            }
        }
        case 0x65:
        {
// switch_1E48_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BE8
                case default:
                {
// switch_1BE8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C60
// lab_1C60
                    OP_JUMP lab_1E90
                }
                case 0x0:
                {
// switch_1BE8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C60
                }
                case 0x1:
                {
// switch_1BE8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C60
                }
                case 0x2:
                {
// switch_1BE8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C60
                }
                case 0x3:
                {
// switch_1BE8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C60
                }
                case 0x4:
                {
// switch_1BE8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C60
                }
                case 0x5:
                {
// switch_1BE8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C60
                }
            }
        }
        case 0x66:
        {
// switch_1E48_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1DA0
                case default:
                {
// switch_1DA0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E18
// lab_1E18
                    OP_JUMP lab_1E90
                }
                case 0x0:
                {
// switch_1DA0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E18
                }
                case 0x1:
                {
// switch_1DA0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E18
                }
                case 0x2:
                {
// switch_1DA0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E18
                }
                case 0x3:
                {
// switch_1DA0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E18
                }
                case 0x4:
                {
// switch_1DA0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E18
                }
                case 0x5:
                {
// switch_1DA0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E18
                }
            }
        }
    }
}
// fun_1F50
fun_1F50() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0F28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FF8
    pri = 1;
    return pri;
// lab_1FF8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2040
fun_2040() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2090
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F50(var_8)
    arg_2 = pri;
// lab_2090
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1830(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20F0
fun_20F0() {
    OP_JUMP lab_2108
// lab_2108
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2148
    pri = 0;
    return pri;
// lab_2148
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2108
    pri = 0;
    return pri;
}
// fun_2188
fun_2188() {
    var_8 = 0;
    pri = fun_20F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2238
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2238
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2278
fun_2278() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_22A8
// lab_22A8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22E8
    OP_JUMP lab_2318
// lab_22E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22A8
// lab_2318
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2360
fun_2360() {
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
// fun_23D0
fun_23D0() {
    OP_JUMP lab_23E8
// lab_23E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2420
    pri = 0;
    return pri;
// lab_2420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23E8
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_08D0(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_09F0(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_0B10(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    pri = arg_5;
    OP_JNZ lab_25F8
    var_8 = 0;
    pri = fun_1438()
// lab_25F8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2648
    OP_CONST_S -8, -1
// lab_2648
    pri = arg_1;
    switch (pri) {
// switch_4100
        case default:
        {
// switch_4100_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_45A8
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0F28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_45A8
            pri = 1;
            OP_JUMP lab_45B0
// lab_45A8
            pri = 0;
// lab_45B0
            OP_JZER lab_4600
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_4858
// lab_4600
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4668
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4668
            pri = 1;
            OP_JUMP lab_4670
// lab_4668
            pri = 0;
// lab_4670
            OP_JZER lab_47F8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F28(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4858
// lab_47F8
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4858
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_48C8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_48C8
            var_8 = 0;
            pri = fun_1478()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4100_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x1:
        {
// switch_4100_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x2:
        {
// switch_4100_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3:
        {
// switch_4100_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x4:
        {
// switch_4100_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x5:
        {
// switch_4100_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0EE8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1160(var_40)
            OP_JUMP switch_4100_case_default
        }
        case 0x6:
        {
// switch_4100_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x7:
        {
// switch_4100_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x8:
        {
// switch_4100_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x9:
        {
// switch_4100_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0xa:
        {
// switch_4100_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0xb:
        {
// switch_4100_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0xc:
        {
// switch_4100_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0xd:
        {
// switch_4100_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0xe:
        {
// switch_4100_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0xf:
        {
// switch_4100_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x10:
        {
// switch_4100_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x11:
        {
// switch_4100_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x12:
        {
// switch_4100_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x13:
        {
// switch_4100_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x14:
        {
// switch_4100_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x15:
        {
// switch_4100_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x16:
        {
// switch_4100_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x17:
        {
// switch_4100_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x18:
        {
// switch_4100_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x19:
        {
// switch_4100_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x1a:
        {
// switch_4100_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x1b:
        {
// switch_4100_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x1c:
        {
// switch_4100_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x1d:
        {
// switch_4100_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x1e:
        {
// switch_4100_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x1f:
        {
// switch_4100_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x20:
        {
// switch_4100_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x21:
        {
// switch_4100_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x22:
        {
// switch_4100_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x23:
        {
// switch_4100_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x24:
        {
// switch_4100_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x25:
        {
// switch_4100_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x26:
        {
// switch_4100_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x27:
        {
// switch_4100_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x28:
        {
// switch_4100_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x29:
        {
// switch_4100_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x2a:
        {
// switch_4100_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x2b:
        {
// switch_4100_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x2c:
        {
// switch_4100_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x2d:
        {
// switch_4100_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x2e:
        {
// switch_4100_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x2f:
        {
// switch_4100_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x30:
        {
// switch_4100_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x31:
        {
// switch_4100_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x32:
        {
// switch_4100_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x33:
        {
// switch_4100_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x34:
        {
// switch_4100_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x35:
        {
// switch_4100_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x36:
        {
// switch_4100_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x37:
        {
// switch_4100_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x38:
        {
// switch_4100_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1198(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4100_case_default
        }
        case 0x39:
        {
// switch_4100_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3a:
        {
// switch_4100_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3b:
        {
// switch_4100_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3c:
        {
// switch_4100_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3d:
        {
// switch_4100_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
        case 0x3e:
        {
// switch_4100_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0EE8(var_24, var_16, var_8)
            OP_JUMP switch_4100_case_default
        }
    }
}
// fun_48F8
fun_48F8() {
    pri = arg_4;
    OP_JNZ lab_4930
    var_8 = 0;
    pri = fun_1438()
// lab_4930
    pri = arg_1;
    switch (pri) {
// switch_5D08
        case default:
        {
// switch_5D08_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14F8(var_264)
            OP_JZER lab_62D0
            pri = arg_3;
            switch (pri) {
// switch_6278
                case default:
                {
// switch_6278_case_default
                    OP_JUMP lab_6588
// lab_6588
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_65F8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_65F8
                    var_8 = 0;
                    pri = fun_1478()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6278_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6278_case_default
                }
                case 0x2:
                {
// switch_6278_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6278_case_default
                }
                case 0x3:
                {
// switch_6278_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_6278_case_default
                }
            }
// lab_62D0
            pri = arg_1;
            OP_JZER lab_6320
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6320
            pri = 0;
            OP_JUMP lab_6328
// lab_6320
            pri = 1;
// lab_6328
            OP_JZER lab_6390
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0F28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6390
            pri = 1;
            OP_JUMP lab_6398
// lab_6390
            pri = 0;
// lab_6398
            OP_JZER lab_63E8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6588
// lab_63E8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6450
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6588
// lab_6450
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F28(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5D08_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1:
        {
// switch_5D08_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2:
        {
// switch_5D08_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3:
        {
// switch_5D08_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x4:
        {
// switch_5D08_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x5:
        {
// switch_5D08_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0EE8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1160(var_40)
            OP_JUMP switch_5D08_case_default
        }
        case 0x6:
        {
// switch_5D08_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x7:
        {
// switch_5D08_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x8:
        {
// switch_5D08_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x9:
        {
// switch_5D08_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xa:
        {
// switch_5D08_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xb:
        {
// switch_5D08_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xc:
        {
// switch_5D08_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xd:
        {
// switch_5D08_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xe:
        {
// switch_5D08_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0xf:
        {
// switch_5D08_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x10:
        {
// switch_5D08_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x11:
        {
// switch_5D08_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x12:
        {
// switch_5D08_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x13:
        {
// switch_5D08_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x14:
        {
// switch_5D08_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x15:
        {
// switch_5D08_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x16:
        {
// switch_5D08_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x17:
        {
// switch_5D08_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x18:
        {
// switch_5D08_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x19:
        {
// switch_5D08_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1a:
        {
// switch_5D08_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1b:
        {
// switch_5D08_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1c:
        {
// switch_5D08_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1d:
        {
// switch_5D08_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1e:
        {
// switch_5D08_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x1f:
        {
// switch_5D08_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x20:
        {
// switch_5D08_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x21:
        {
// switch_5D08_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x22:
        {
// switch_5D08_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x23:
        {
// switch_5D08_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x24:
        {
// switch_5D08_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x25:
        {
// switch_5D08_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x26:
        {
// switch_5D08_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x27:
        {
// switch_5D08_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x28:
        {
// switch_5D08_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x29:
        {
// switch_5D08_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2a:
        {
// switch_5D08_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2b:
        {
// switch_5D08_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2c:
        {
// switch_5D08_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2d:
        {
// switch_5D08_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2e:
        {
// switch_5D08_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x2f:
        {
// switch_5D08_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x30:
        {
// switch_5D08_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x31:
        {
// switch_5D08_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x32:
        {
// switch_5D08_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x33:
        {
// switch_5D08_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x34:
        {
// switch_5D08_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x35:
        {
// switch_5D08_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x36:
        {
// switch_5D08_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x37:
        {
// switch_5D08_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x38:
        {
// switch_5D08_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x39:
        {
// switch_5D08_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3a:
        {
// switch_5D08_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3b:
        {
// switch_5D08_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3c:
        {
// switch_5D08_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3d:
        {
// switch_5D08_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
        case 0x3e:
        {
// switch_5D08_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0EE8(var_24, var_16, var_8)
            OP_JUMP switch_5D08_case_default
        }
    }
}
// fun_6628
fun_6628() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6838(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_6820
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6820
    pri = 0;
    return pri;
}
// fun_6838
fun_6838() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0EE8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6880
fun_6880() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6980
        case default:
        {
// switch_6980_case_default
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
// switch_6980_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6980_case_default
        }
        case 0x1:
        {
// switch_6980_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6980_case_default
        }
        case 0x2:
        {
// switch_6980_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6980_case_default
        }
        case 0x3:
        {
// switch_6980_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6980_case_default
        }
    }
}
// fun_6A40
fun_6A40() {
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
    pri = fun_2040(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_20F0()
    pri = 0;
    return pri;
}
// fun_6AD8
fun_6AD8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6880(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6A40(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6B80
fun_6B80() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6BD0
// lab_6BD0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22480;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6C48
    OP_JUMP lab_6C78
// lab_6C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_6BD0
// lab_6C78
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6D00
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_48F8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_17C8(var_56)
// lab_6D00
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6D68
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14B8(var_24, var_16)
// lab_6D68
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14B8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6E28
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F60(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0CE0(var_88, var_80, var_72, var_64, var_56)
// lab_6E28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6E68
    pri = 0;
    return pri;
// lab_6E68
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6FB0
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 22600;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0EB0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6F78
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_6FB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D88(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0F60(var_40)
    pri = 0;
    return pri;
// lab_6F78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14B8(var_16, var_8)
}
// fun_7038
fun_7038() {
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
    pri = fun_6AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2188(var_112)
    var_128 = 0;
    pri = fun_2248()
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
    pri = fun_6B80(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_71B0
fun_71B0() {
    pri = 22736;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7238
// lab_7238
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_73B8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_73A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_72F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_72F8
    pri = 0;
    OP_JUMP lab_7300
// lab_73B8
    pri = 0;
    return pri;
// lab_73A8
    OP_JUMP lab_7230
// lab_7230
    OP_INC_P_S -936
// lab_72F8
    pri = 1;
// lab_7300
    OP_JZER lab_7378
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7370
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7378
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7370
}
// fun_73D8
fun_73D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7470
    var_8 = 1;
    var_16 = 0;
    var_24 = 23656;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_17A0()
// lab_7470
    pri = arg_4;
    OP_JZER lab_74A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_17F8(var_8)
// lab_74A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7500
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7500
    pri = 0;
    OP_JUMP lab_7508
// lab_7500
    pri = 1;
// lab_7508
    OP_JZER lab_75D0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_75D0
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_75A8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16E0(var_32, var_24)
    OP_JUMP lab_75D0
// lab_75D0
    pri = arg_2;
    OP_JZER lab_76A8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_7678
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14B8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0C30(var_40)
    OP_JUMP lab_76A8
// lab_76A8
    pri = arg_3;
    OP_JZER lab_76E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1768(var_8)
// lab_76E0
    pri = 0;
    return pri;
// lab_7678
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14B8(var_16, var_8)
// lab_75A8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16E0(var_16, var_8)
}
// fun_76F0
fun_76F0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_71B0(var_24)
    pri = 0;
    return pri;
}
// fun_7758
fun_7758() {
    pri = g_mode;
    switch (pri) {
// switch_7840
        case default:
        {
// switch_7840_case_default
            pri = CommandNOP()
            OP_JUMP lab_7898
// lab_7898
            pri = 0;
            return pri;
        }
        case 0x8d19ac22025cf0d5:
        {
// switch_7840_case_0x8d19ac22025cf0d5
            var_8 = 0;
            pri = fun_8918()
            OP_JUMP lab_7898
        }
        case 0x9ecaba6480895db2:
        {
// switch_7840_case_0x9ecaba6480895db2
            var_8 = 0;
            pri = fun_8A50()
            OP_JUMP lab_7898
        }
        case 0x0:
        {
// switch_7840_case_0x0
            var_8 = 0;
            pri = fun_78A8()
            OP_JUMP lab_7898
        }
        case 0x6dec521e76dfd741:
        {
// switch_7840_case_0x6dec521e76dfd741
            var_8 = 0;
            pri = fun_8A08()
            OP_JUMP lab_7898
        }
    }
}
// fun_78A8
fun_78A8() {
    pri = 0;
    return pri;
}
// fun_78C0
fun_78C0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_73D8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7918
fun_7918() {
    var_8 = -8146230406596348434;
    var_16 = 8;
    pri = fun_06A0(var_8)
    var_24 = -988436650023575209;
    var_32 = 8;
    pri = fun_06A0(var_24)
    pri = 0;
    return pri;
}
// fun_7980
fun_7980() {
    var_8 = 0;
    pri = fun_06D0()
    pri = 0;
    return pri;
}
// fun_79B0
fun_79B0() {
    var_8 = 3;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 584;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 600;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 8802641224559852288;
    var_96 = 48;
    pri = fun_0878(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 578;
    pri = float(var_136)
    var_144 = pri;
    OP_PUSH2_C 4649878654329815040, -8146230406596348434
    var_152 = 48;
    pri = fun_0878(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 8;
    pri = fun_00B8(var_160)
    var_176 = 1;
    var_184 = 0;
    var_192 = 30;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 0;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 0;
    var_232 = 741;
    pri = float(var_232)
    var_240 = pri;
    OP_PUSH3_C 4649192559074082816, 4607182418800017408, 8802641224559852288
    var_248 = 72;
    pri = fun_0C68(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 0;
    var_272 = 30;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 0;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 0;
    var_312 = 688;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 758;
    pri = float(var_328)
    var_336 = pri;
    OP_PUSH2_C 4607182418800017408, -8146230406596348434
    var_344 = 72;
    pri = fun_0C68(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 30;
    var_360 = 8;
    pri = fun_00B8(var_352)
    var_368 = 23704;
    var_376 = 8;
    var_384 = 16;
    pri = fun_02D8(var_376, var_368)
    var_392 = 0;
    pri = fun_03A8()
    var_400 = 8802641224559852288;
    var_408 = 8;
    pri = fun_0D88(var_400)
    var_416 = -8146230406596348434;
    var_424 = 8;
    pri = fun_0D88(var_416)
    var_432 = 100;
    var_440 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -988436650023575209, 8802641224559852288
    var_448 = 15;
    var_456 = 56;
    pri = fun_2460(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH2_C -988436650023575209, 8802641224559852288
    var_496 = 48;
    pri = fun_0D30(var_488, var_480, var_472, var_464, var_456, var_448)
    var_504 = 0;
    var_512 = 0;
    var_520 = 0;
    var_528 = 0;
    OP_PUSH2_C -988436650023575209, -8146230406596348434
    var_536 = 48;
    pri = fun_0D30(var_528, var_520, var_512, var_504, var_496, var_488)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH2_C -8146230406596348434, -988436650023575209
    var_576 = 48;
    pri = fun_0D30(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 8802641224559852288;
    var_592 = 8;
    pri = fun_0D88(var_584)
    var_600 = -8146230406596348434;
    var_608 = 8;
    pri = fun_0D88(var_600)
    var_616 = -988436650023575209;
    var_624 = 8;
    pri = fun_0D88(var_616)
    var_632 = 0;
    pri = fun_23D0()
    var_640 = 0;
    var_648 = 1;
    var_656 = -8146230406596348434;
    var_664 = 24;
    pri = fun_6628(var_656, var_648, var_640)
    var_672 = 1;
    var_680 = 8;
    pri = fun_00B8(var_672)
    var_688 = -8146230406596348434;
    var_696 = 8;
    pri = fun_0F60(var_688)
    var_704 = 0;
    var_712 = 3;
    var_720 = 0;
    var_728 = 100;
    var_736 = -1;
    OP_PUSH2_C -5905363517837481874, -8146230406596348434
    var_744 = 56;
    pri = fun_2040(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 1;
    var_760 = 8;
    pri = fun_2188(var_752)
    var_768 = 0;
    pri = fun_2248()
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C -528546015706439572, -988436650023575209
    var_816 = 56;
    pri = fun_2040(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_2188(var_824)
    var_840 = 0;
    pri = fun_2248()
    var_848 = 0;
    var_856 = 0;
    var_864 = -8146230406596348434;
    var_872 = 24;
    pri = fun_6628(var_864, var_856, var_848)
    var_880 = 1;
    var_888 = 8;
    pri = fun_00B8(var_880)
    var_896 = -8146230406596348434;
    var_904 = 8;
    pri = fun_0F60(var_896)
    var_912 = 0;
    var_920 = 0;
    var_928 = 0;
    var_936 = 0;
    OP_PUSH2_C -8146230406596348434, 8802641224559852288
    var_944 = 48;
    pri = fun_0D30(var_936, var_928, var_920, var_912, var_904, var_896)
    var_952 = 0;
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    OP_PUSH2_C 8802641224559852288, -8146230406596348434
    var_984 = 48;
    pri = fun_0D30(var_976, var_968, var_960, var_952, var_944, var_936)
    var_992 = 8802641224559852288;
    var_1000 = 8;
    pri = fun_0D88(var_992)
    var_1008 = -8146230406596348434;
    var_1016 = 8;
    pri = fun_0D88(var_1008)
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = -1;
    var_1048 = -1;
    var_1056 = 0;
    var_1064 = 22;
    var_1072 = -8146230406596348434;
    var_1080 = 56;
    pri = fun_25C0(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1088 = 0;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 100;
    var_1120 = -1;
    OP_PUSH2_C -5905364617349110085, -8146230406596348434
    var_1128 = 56;
    pri = fun_2040(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_2188(var_1136)
    var_1152 = 0;
    var_1160 = 4605512992191391554;
    var_1168 = 0;
    var_1176 = 24;
    pri = fun_2278(var_1168, var_1160, var_1152)
    var_1184 = 0;
    var_1192 = 4605511892679763343;
    var_1200 = 1;
    var_1208 = 24;
    pri = fun_2278(var_1200, var_1192, var_1184)
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 1;
    var_1248 = 32;
    pri = fun_2360(var_1240, var_1232, var_1224, var_1216)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C -5905365716860738296, -8146230406596348434
    var_1296 = 56;
    pri = fun_2040(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_2188(var_1304)
    var_1320 = 0;
    pri = fun_2248()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 22;
    var_1360 = -8146230406596348434;
    var_1368 = 40;
    pri = fun_48F8(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = -8146230406596348434;
    var_1384 = 8;
    pri = fun_0F60(var_1376)
    var_1392 = 1;
    var_1400 = 0;
    var_1408 = 30;
    pri = float(var_1408)
    var_1416 = pri;
    var_1424 = 0;
    pri = float(var_1424)
    var_1432 = pri;
    var_1440 = 0;
    var_1448 = 4652293181864411136;
    var_1456 = 925;
    pri = float(var_1456)
    var_1464 = pri;
    OP_PUSH2_C 4611686018427387904, -8146230406596348434
    var_1472 = 72;
    pri = fun_0C68(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1480 = 30;
    var_1488 = 8;
    pri = fun_00B8(var_1480)
    var_1496 = 0;
    var_1504 = 0;
    var_1512 = 0;
    var_1520 = 0;
    OP_PUSH2_C -8146230406596348434, 8802641224559852288
    var_1528 = 48;
    pri = fun_0D30(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1536 = 8802641224559852288;
    var_1544 = 8;
    pri = fun_0D88(var_1536)
    var_1552 = -8146230406596348434;
    var_1560 = 8;
    pri = fun_0D88(var_1552)
    var_1568 = 10;
    var_1576 = 8;
    pri = fun_00B8(var_1568)
    var_1584 = 3;
    var_1592 = 30;
    pri = EvCameraEnd(var_1592, var_1584)
    pri = 0;
    return pri;
}
// fun_86E0
fun_86E0() {
    pri = 0;
    return pri;
}
// fun_86F8
fun_86F8() {
    var_8 = -8146230406596348434;
    var_16 = 8;
    pri = fun_0820(var_8)
    var_24 = 365;
    var_32 = 8;
    pri = fun_76F0(var_24)
    var_40 = 10;
    var_48 = 5131457787967621499;
    pri = WorkSet(var_48, var_40)
    var_56 = 7977662558473576712;
    pri = VanishFlagReset(var_56)
    var_64 = -7643235762281396180;
    pri = VanishFlagReset(var_64)
    var_72 = 972678789484826509;
    pri = VanishFlagSet(var_72)
    var_80 = 9204041731284319614;
    pri = VanishFlagSet(var_80)
    var_88 = -2539670835808990616;
    pri = VanishFlagSet(var_88)
    var_96 = 892252226641320290;
    pri = FlagSet(var_96)
    var_104 = -7218496173801542558;
    pri = FlagSet(var_104)
    var_112 = 3;
    var_120 = 8;
    pri = fun_0460(var_112)
    pri = 0;
    return pri;
}
// fun_88C0
fun_88C0() {
    var_8 = 23704;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02D8(var_16, var_8)
    var_32 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_8918
fun_8918() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_78C0()
    var_16 = 0;
    pri = fun_7918()
    var_24 = 0;
    pri = fun_7980()
    var_32 = 0;
    pri = fun_79B0()
    var_40 = 0;
    pri = fun_86E0()
    var_48 = 0;
    pri = fun_86F8()
    var_56 = 0;
    pri = fun_88C0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8A08
fun_8A08() {
    var_8 = 0;
    pri = fun_7918()
    var_16 = 0;
    pri = fun_86F8()
    pri = 0;
    return pri;
}
// fun_8A50
fun_8A50() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -528542717171554939;
    var_88 = 80;
    pri = fun_7038(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
