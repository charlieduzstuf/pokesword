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
    pri = ABKeyWait_()
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01E8
// lab_01E8
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02E8
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0268
    pri = 0;
    return pri;
// lab_02E8
    pri = 0;
    return pri;
// lab_0268
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
    OP_JUMP lab_01E0
// lab_01E0
    OP_INC_P_S -8
}
// fun_0300
fun_0300() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
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
// fun_03D0
fun_03D0() {
    OP_JUMP lab_03E8
// lab_03E8
    pri = FadeWait_()
    OP_JZER lab_0420
    pri = 0;
    return pri;
// lab_0420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03E8
    pri = 0;
    return pri;
}
// fun_0460
fun_0460() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0488
fun_0488() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04D0
// lab_04D0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0510
    OP_JUMP lab_0580
// lab_0510
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0550
    OP_JUMP lab_0580
// lab_0550
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04D0
// lab_0580
    pri = 0;
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0620
fun_0620() {
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
// fun_0740
fun_0740() {
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
// fun_0860
fun_0860() {
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
// fun_0980
fun_0980() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09B8
fun_09B8() {
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
// fun_0A30
fun_0A30() {
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
// fun_0AF0
fun_0AF0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B98
fun_0B98() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14B8(var_8)
    OP_JZER lab_0C10
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14E8(var_24)
    OP_JNZ lab_0C10
    pri = 0;
    return pri;
// lab_0C10
    OP_JUMP lab_0C20
// lab_0C20
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C80
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C20
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0DB8
    pri = 0;
    return pri;
// lab_0DB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DF8
// lab_0DF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14B8(var_8)
    OP_JNZ lab_0E80
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E70
    pri = 0;
    return pri;
// lab_0E80
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0EC8
    pri = 0;
    return pri;
// lab_0EC8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F70(var_8)
    pri = 0;
    return pri;
// lab_0F28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DF8
    pri = 0;
    return pri;
// lab_0E70
    OP_JUMP lab_0EC8
}
// fun_0F70
fun_0F70() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FF8
    pri = 0;
    return pri;
// lab_0FF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14B8(var_8)
    OP_JZER lab_1128
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1050
    OP_ZERO_P_S 64
// lab_1128
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1160
    OP_CONST_S 64, 1
// lab_1160
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1198
    OP_CONST_S 72, 1
// lab_1198
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
// lab_1050
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1078
    OP_ZERO_P_S 72
// lab_1078
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
    OP_JUMP lab_1238
// lab_1238
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1288
fun_1288() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C0
fun_13C0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_13F8
fun_13F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1308(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1380(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1348(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13C0(var_24)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1518
fun_1518() {
    OP_JUMP lab_1530
// lab_1530
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_15C0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D70(var_8)
    pri = 0;
    return pri;
// lab_15C0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1650
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1640
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D70(var_8)
    pri = 0;
    return pri;
// lab_1650
    pri = 0;
    return pri;
// lab_1640
    OP_JUMP lab_1660
// lab_1660
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1530
    pri = 0;
    return pri;
// lab_15B0
    OP_JUMP lab_1660
}
// fun_16A0
fun_16A0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D70(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1518(var_40)
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1760
fun_1760() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1788
fun_1788() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_17C0
fun_17C0() {
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
// switch_1DD8
        case default:
        {
// switch_1DD8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E20
// lab_1E20
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
            OP_JNZ lab_1EC8
            var_88 = 0;
            pri = fun_2198()
// lab_1EC8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1DD8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_19C0
                case default:
                {
// switch_19C0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A38
// lab_1A38
                    OP_JUMP lab_1E20
                }
                case 0x0:
                {
// switch_19C0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A38
                }
                case 0x1:
                {
// switch_19C0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A38
                }
                case 0x2:
                {
// switch_19C0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A38
                }
                case 0x3:
                {
// switch_19C0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A38
                }
                case 0x4:
                {
// switch_19C0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A38
                }
                case 0x5:
                {
// switch_19C0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A38
                }
            }
        }
        case 0x65:
        {
// switch_1DD8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B78
                case default:
                {
// switch_1B78_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BF0
// lab_1BF0
                    OP_JUMP lab_1E20
                }
                case 0x0:
                {
// switch_1B78_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BF0
                }
                case 0x1:
                {
// switch_1B78_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BF0
                }
                case 0x2:
                {
// switch_1B78_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BF0
                }
                case 0x3:
                {
// switch_1B78_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BF0
                }
                case 0x4:
                {
// switch_1B78_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BF0
                }
                case 0x5:
                {
// switch_1B78_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BF0
                }
            }
        }
        case 0x66:
        {
// switch_1DD8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D30
                case default:
                {
// switch_1D30_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DA8
// lab_1DA8
                    OP_JUMP lab_1E20
                }
                case 0x0:
                {
// switch_1D30_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DA8
                }
                case 0x1:
                {
// switch_1D30_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DA8
                }
                case 0x2:
                {
// switch_1D30_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DA8
                }
                case 0x3:
                {
// switch_1D30_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DA8
                }
                case 0x4:
                {
// switch_1D30_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DA8
                }
                case 0x5:
                {
// switch_1D30_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DA8
                }
            }
        }
    }
}
// fun_1EE0
fun_1EE0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_17C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D38(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FF0
    pri = 1;
    return pri;
// lab_1FF0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2038
fun_2038() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2088
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F48(var_8)
    arg_2 = pri;
// lab_2088
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1EE0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2138
fun_2138() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_20E8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    OP_JUMP lab_21B0
// lab_21B0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21F0
    pri = 0;
    return pri;
// lab_21F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21B0
    pri = 0;
    return pri;
}
// fun_2230
fun_2230() {
    var_8 = 0;
    pri = fun_2198()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22E0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_22E0
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    OP_JUMP lab_2370
// lab_2370
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_23B8
    OP_JUMP lab_23E8
    OP_JUMP lab_23D8
// lab_23B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_23E8
    pri = 0;
    return pri;
// lab_23D8
    OP_JUMP lab_2370
}
// fun_23F8
fun_23F8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2428
fun_2428() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2478
fun_2478() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24C8
fun_24C8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2518
fun_2518() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2568
fun_2568() {
    pri = arg_1;
    OP_JNZ lab_25B0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_25B0
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2608
fun_2608() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2680
fun_2680() {
    var_8 = 0;
    pri = fun_2608()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2700
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2700
    pri = 1;
    return pri;
// lab_2700
    var_8 = 0;
    pri = fun_2608()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2740
    pri = 1;
    return pri;
// lab_2740
    var_8 = 0;
    pri = fun_2608()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2770
fun_2770() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    OP_JUMP lab_27D8
// lab_27D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2810
    pri = 0;
    return pri;
// lab_2810
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27D8
    pri = 0;
    return pri;
}
// fun_2850
fun_2850() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0620(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0740(var_72, var_64, var_56)
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
    pri = fun_0860(var_136, var_128, var_120)
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
// fun_29B0
fun_29B0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2A18(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2AF0()
    pri = 0;
    return pri;
}
// fun_2A18
fun_2A18() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A70
fun_2A70() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2A18(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2AF0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2AF0
fun_2AF0() {
    OP_JUMP lab_2B08
// lab_2B08
    pri = IsEasingRunningDof_()
    OP_JZER lab_2B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B70
// lab_2B60
    pri = 0;
    return pri;
// lab_2B70
    OP_JUMP lab_2B08
    pri = 0;
    return pri;
}
// fun_2B90
fun_2B90() {
    pri = arg_6;
    OP_JNZ lab_2BC8
    var_8 = 0;
    pri = fun_1248()
// lab_2BC8
    pri = arg_1;
    switch (pri) {
// switch_4130
        case default:
        {
// switch_4130_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4480
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4480
            pri = 1;
            OP_JUMP lab_4488
// lab_4480
            pri = 0;
// lab_4488
            OP_JZER lab_45E0
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D38(var_24, var_16)
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
            OP_JUMP lab_4640
// lab_45E0
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
            pri = fun_01B8(var_16, var_8, var_0)
// lab_4640
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_46A0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4700
// lab_46A0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4700
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4700
            pri = arg_2;
            OP_JZER lab_4740
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4740
            var_8 = 0;
            pri = fun_1288()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4130_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x1:
        {
// switch_4130_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x2:
        {
// switch_4130_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x3:
        {
// switch_4130_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x4:
        {
// switch_4130_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x5:
        {
// switch_4130_case_0x5
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x6:
        {
// switch_4130_case_0x6
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x7:
        {
// switch_4130_case_0x7
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x8:
        {
// switch_4130_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x9:
        {
// switch_4130_case_0x9
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xa:
        {
// switch_4130_case_0xa
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xb:
        {
// switch_4130_case_0xb
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xc:
        {
// switch_4130_case_0xc
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xd:
        {
// switch_4130_case_0xd
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xe:
        {
// switch_4130_case_0xe
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0xf:
        {
// switch_4130_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x10:
        {
// switch_4130_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x11:
        {
// switch_4130_case_0x11
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x12:
        {
// switch_4130_case_0x12
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x13:
        {
// switch_4130_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x14:
        {
// switch_4130_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x15:
        {
// switch_4130_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x16:
        {
// switch_4130_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x17:
        {
// switch_4130_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x18:
        {
// switch_4130_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x19:
        {
// switch_4130_case_0x19
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
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4130_case_default
        }
        case 0x1a:
        {
// switch_4130_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CC0(var_48, var_40)
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
            pri = fun_0FA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4130_case_default
        }
        case 0x1b:
        {
// switch_4130_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CC0(var_48, var_40)
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
            pri = fun_0FA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4130_case_default
        }
        case 0x1c:
        {
// switch_4130_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CC0(var_48, var_40)
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
            pri = fun_0FA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4130_case_default
        }
        case 0x1d:
        {
// switch_4130_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x1e:
        {
// switch_4130_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x1f:
        {
// switch_4130_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x20:
        {
// switch_4130_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x21:
        {
// switch_4130_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x22:
        {
// switch_4130_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x23:
        {
// switch_4130_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x24:
        {
// switch_4130_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x25:
        {
// switch_4130_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x26:
        {
// switch_4130_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x27:
        {
// switch_4130_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x28:
        {
// switch_4130_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
        case 0x29:
        {
// switch_4130_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4130_case_default
        }
    }
}
// fun_4770
fun_4770() {
    pri = arg_5;
    OP_JNZ lab_47A8
    var_8 = 0;
    pri = fun_1248()
// lab_47A8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_47F8
    OP_CONST_S -8, -1
// lab_47F8
    pri = arg_1;
    switch (pri) {
// switch_62B0
        case default:
        {
// switch_62B0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6758
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D38(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6758
            pri = 1;
            OP_JUMP lab_6760
// lab_6758
            pri = 0;
// lab_6760
            OP_JZER lab_67B0
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_6A08
// lab_67B0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6818
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6818
            pri = 1;
            OP_JUMP lab_6820
// lab_6818
            pri = 0;
// lab_6820
            OP_JZER lab_69A8
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D38(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6A08
// lab_69A8
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
// lab_6A08
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6A78
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6A78
            var_8 = 0;
            pri = fun_1288()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_62B0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1:
        {
// switch_62B0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2:
        {
// switch_62B0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3:
        {
// switch_62B0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x4:
        {
// switch_62B0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x5:
        {
// switch_62B0_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F70(var_40)
            OP_JUMP switch_62B0_case_default
        }
        case 0x6:
        {
// switch_62B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x7:
        {
// switch_62B0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x8:
        {
// switch_62B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x9:
        {
// switch_62B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0xa:
        {
// switch_62B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0xb:
        {
// switch_62B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0xc:
        {
// switch_62B0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0xd:
        {
// switch_62B0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0xe:
        {
// switch_62B0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0xf:
        {
// switch_62B0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x10:
        {
// switch_62B0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x11:
        {
// switch_62B0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x12:
        {
// switch_62B0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x13:
        {
// switch_62B0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x14:
        {
// switch_62B0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x15:
        {
// switch_62B0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x16:
        {
// switch_62B0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x17:
        {
// switch_62B0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x18:
        {
// switch_62B0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x19:
        {
// switch_62B0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1a:
        {
// switch_62B0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1b:
        {
// switch_62B0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1c:
        {
// switch_62B0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1d:
        {
// switch_62B0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1e:
        {
// switch_62B0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x1f:
        {
// switch_62B0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x20:
        {
// switch_62B0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x21:
        {
// switch_62B0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x22:
        {
// switch_62B0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x23:
        {
// switch_62B0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x24:
        {
// switch_62B0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x25:
        {
// switch_62B0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x26:
        {
// switch_62B0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x27:
        {
// switch_62B0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x28:
        {
// switch_62B0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x29:
        {
// switch_62B0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2a:
        {
// switch_62B0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2b:
        {
// switch_62B0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2c:
        {
// switch_62B0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2d:
        {
// switch_62B0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2e:
        {
// switch_62B0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x2f:
        {
// switch_62B0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x30:
        {
// switch_62B0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x31:
        {
// switch_62B0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x32:
        {
// switch_62B0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x33:
        {
// switch_62B0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x34:
        {
// switch_62B0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x35:
        {
// switch_62B0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x36:
        {
// switch_62B0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x37:
        {
// switch_62B0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x38:
        {
// switch_62B0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B0_case_default
        }
        case 0x39:
        {
// switch_62B0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3a:
        {
// switch_62B0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3b:
        {
// switch_62B0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3c:
        {
// switch_62B0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3d:
        {
// switch_62B0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
        case 0x3e:
        {
// switch_62B0_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            OP_JUMP switch_62B0_case_default
        }
    }
}
// fun_6AA8
fun_6AA8() {
    pri = arg_4;
    OP_JNZ lab_6AE0
    var_8 = 0;
    pri = fun_1248()
// lab_6AE0
    pri = arg_1;
    switch (pri) {
// switch_7EB8
        case default:
        {
// switch_7EB8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14B8(var_264)
            OP_JZER lab_8480
            pri = arg_3;
            switch (pri) {
// switch_8428
                case default:
                {
// switch_8428_case_default
                    OP_JUMP lab_8738
// lab_8738
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_87A8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_87A8
                    var_8 = 0;
                    pri = fun_1288()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8428_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_8428_case_default
                }
                case 0x2:
                {
// switch_8428_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_8428_case_default
                }
                case 0x3:
                {
// switch_8428_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_8428_case_default
                }
            }
// lab_8480
            pri = arg_1;
            OP_JZER lab_84D0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_84D0
            pri = 0;
            OP_JUMP lab_84D8
// lab_84D0
            pri = 1;
// lab_84D8
            OP_JZER lab_8540
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D38(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8540
            pri = 1;
            OP_JUMP lab_8548
// lab_8540
            pri = 0;
// lab_8548
            OP_JZER lab_8598
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_8738
// lab_8598
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8600
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_8738
// lab_8600
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D38(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7EB8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1:
        {
// switch_7EB8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2:
        {
// switch_7EB8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3:
        {
// switch_7EB8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x4:
        {
// switch_7EB8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x5:
        {
// switch_7EB8_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F70(var_40)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x6:
        {
// switch_7EB8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x7:
        {
// switch_7EB8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x8:
        {
// switch_7EB8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x9:
        {
// switch_7EB8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xa:
        {
// switch_7EB8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xb:
        {
// switch_7EB8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xc:
        {
// switch_7EB8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xd:
        {
// switch_7EB8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xe:
        {
// switch_7EB8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0xf:
        {
// switch_7EB8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x10:
        {
// switch_7EB8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x11:
        {
// switch_7EB8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x12:
        {
// switch_7EB8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x13:
        {
// switch_7EB8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x14:
        {
// switch_7EB8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x15:
        {
// switch_7EB8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x16:
        {
// switch_7EB8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x17:
        {
// switch_7EB8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x18:
        {
// switch_7EB8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x19:
        {
// switch_7EB8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1a:
        {
// switch_7EB8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1b:
        {
// switch_7EB8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1c:
        {
// switch_7EB8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1d:
        {
// switch_7EB8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1e:
        {
// switch_7EB8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x1f:
        {
// switch_7EB8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x20:
        {
// switch_7EB8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x21:
        {
// switch_7EB8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x22:
        {
// switch_7EB8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x23:
        {
// switch_7EB8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x24:
        {
// switch_7EB8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x25:
        {
// switch_7EB8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x26:
        {
// switch_7EB8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x27:
        {
// switch_7EB8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x28:
        {
// switch_7EB8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x29:
        {
// switch_7EB8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2a:
        {
// switch_7EB8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2b:
        {
// switch_7EB8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2c:
        {
// switch_7EB8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2d:
        {
// switch_7EB8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2e:
        {
// switch_7EB8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x2f:
        {
// switch_7EB8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x30:
        {
// switch_7EB8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x31:
        {
// switch_7EB8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x32:
        {
// switch_7EB8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x33:
        {
// switch_7EB8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x34:
        {
// switch_7EB8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x35:
        {
// switch_7EB8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x36:
        {
// switch_7EB8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x37:
        {
// switch_7EB8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x38:
        {
// switch_7EB8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x39:
        {
// switch_7EB8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3a:
        {
// switch_7EB8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3b:
        {
// switch_7EB8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3c:
        {
// switch_7EB8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3d:
        {
// switch_7EB8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
        case 0x3e:
        {
// switch_7EB8_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CF8(var_24, var_16, var_8)
            OP_JUMP switch_7EB8_case_default
        }
    }
}
// fun_87D8
fun_87D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_89E8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30056;
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
    var_424 = 30112;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30128;
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
    OP_JZER lab_89D0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_89D0
    pri = 0;
    return pri;
}
// fun_89E8
fun_89E8() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0CF8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8A30
fun_8A30() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8AC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2B90(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8AC8
    var_8 = 8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8C20
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8B88
    var_24 = 30280;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8B88
    pri = 1;
    OP_JUMP lab_8B90
// lab_8C20
    pri = 0;
    return pri;
// lab_8B88
    pri = 0;
// lab_8B90
    OP_JZER lab_8C20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2B90(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8C30
fun_8C30() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8A30(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8CB8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8CB8
fun_8CB8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8D20
fun_8D20() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8D90
    OP_CONST_S -8, 1
// lab_8D90
    pri = arg_0;
    OP_JNZ lab_8DB0
    OP_ZERO_P_S -8
// lab_8DB0
    pri = var_8;
    OP_JZER lab_8E38
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 0;
    pri = fun_0190()
    pri = ItemCloseDescWindow()
// lab_8E38
    pri = 0;
    return pri;
}
// fun_8E50
fun_8E50() {
    var_8 = 30384;
    var_16 = 8;
    pri = fun_2320(var_8)
    var_24 = 0;
    pri = fun_2358()
    pri = arg_3;
    OP_JNZ lab_8F70
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8F38
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8FE0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8F60
// lab_8F70
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9180(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8F38
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_90A8(var_16, var_8)
// lab_8F60
    OP_JUMP lab_8FB8
// lab_8FB8
    var_8 = 0;
    pri = fun_23F8()
    pri = 0;
    return pri;
}
// fun_8FE0
fun_8FE0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9180(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9090
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9090
    pri = 0;
    return pri;
}
// fun_90A8
fun_90A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2478(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2138(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2230(var_72)
    var_88 = 0;
    pri = fun_22F0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2428(var_96)
    pri = 0;
    return pri;
}
// fun_9180
fun_9180() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_91C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9488(var_8)
// lab_91C8
    pri = arg_4;
    OP_JNZ lab_9230
    var_8 = 0;
    var_16 = 8;
    pri = fun_2428(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2478(var_40, var_32, var_24)
// lab_9230
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_92D0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_24C8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2138(var_56, var_48, var_40)
    OP_JUMP lab_93C0
// lab_92D0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9388
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9388
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9388
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2138(var_24, var_16, var_8)
// lab_93C0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9400
    var_8 = 0;
    var_16 = 8;
    pri = fun_0488(var_8)
// lab_9400
    var_8 = 1;
    var_16 = 8;
    pri = fun_2230(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9690(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8D20(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9488
fun_9488() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_94E8
    var_16 = 30544;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_94E8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9628
        case default:
        {
// switch_9628_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9618
            var_16 = 31088;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9618
            OP_JUMP lab_9660
// lab_9660
            var_8 = 31304;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9628_case_0x1
            var_8 = 30760;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9660
        }
        case 0x2:
        {
// switch_9628_case_0x2
            var_8 = 30888;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9660
        }
    }
}
// fun_9690
fun_9690() {
    pri = arg_2;
    OP_JNZ lab_9778
    var_8 = 0;
    var_16 = 8;
    pri = fun_2428(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2478(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2518(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9778
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2138(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2230(var_40)
    var_56 = 0;
    pri = fun_22F0()
    pri = 0;
    return pri;
}
// fun_97F0
fun_97F0() {
    pri = 31488;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9878
// lab_9878
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_99F8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_99E8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9938
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9938
    pri = 0;
    OP_JUMP lab_9940
// lab_99F8
    pri = 0;
    return pri;
// lab_99E8
    OP_JUMP lab_9870
// lab_9870
    OP_INC_P_S -936
// lab_9938
    pri = 1;
// lab_9940
    OP_JZER lab_99B8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_99B0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_99B8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_99B0
}
// fun_9A18
fun_9A18() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9A50
fun_9A50() {
    var_8 = 0;
    pri = fun_9A18()
    switch (pri) {
// switch_9B00
        case default:
        {
// switch_9B00_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_9B48
// lab_9B48
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_9B00_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_9B48
        }
        case 0x1:
        {
// switch_9B00_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_9B48
        }
        case 0x2:
        {
// switch_9B00_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_9B48
        }
    }
}
// fun_9B58
fun_9B58() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9BF0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32408;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0360(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D0()
    var_56 = 0;
    pri = fun_1760()
// lab_9BF0
    pri = arg_4;
    OP_JZER lab_9C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_1788(var_8)
// lab_9C28
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9C80
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9C80
    pri = 0;
    OP_JUMP lab_9C88
// lab_9C80
    pri = 1;
// lab_9C88
    OP_JZER lab_9D50
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9D50
    var_16 = 0;
    pri = fun_0460()
    OP_JZER lab_9D28
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16A0(var_32, var_24)
    OP_JUMP lab_9D50
// lab_9D50
    pri = arg_2;
    OP_JZER lab_9E28
    var_8 = 0;
    pri = fun_0460()
    OP_JZER lab_9DF8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12C8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0980(var_40)
    OP_JUMP lab_9E28
// lab_9E28
    pri = arg_3;
    OP_JZER lab_9E60
    var_8 = 1;
    var_16 = 8;
    pri = fun_1728(var_8)
// lab_9E60
    pri = 0;
    return pri;
// lab_9DF8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12C8(var_16, var_8)
// lab_9D28
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16A0(var_16, var_8)
}
// fun_9E70
fun_9E70() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_97F0(var_24)
    pri = 0;
    return pri;
}
// fun_9ED8
fun_9ED8() {
    pri = g_mode;
    switch (pri) {
// switch_9FC0
        case default:
        {
// switch_9FC0_case_default
            pri = CommandNOP()
            OP_JUMP lab_A018
// lab_A018
            pri = 0;
            return pri;
        }
        case 0x946820eb6110a824:
        {
// switch_9FC0_case_0x946820eb6110a824
            var_8 = 0;
            pri = fun_B248()
            OP_JUMP lab_A018
        }
        case 0xa6402322105f3c1f:
        {
// switch_9FC0_case_0xa6402322105f3c1f
            var_8 = 0;
            pri = fun_B110()
            OP_JUMP lab_A018
        }
        case 0x0:
        {
// switch_9FC0_case_0x0
            var_8 = 0;
            pri = fun_A028()
            OP_JUMP lab_A018
        }
        case 0x4401811e5f869cfb:
        {
// switch_9FC0_case_0x4401811e5f869cfb
            var_8 = 0;
            pri = fun_B200()
            OP_JUMP lab_A018
        }
    }
}
// fun_A028
fun_A028() {
    pri = 0;
    return pri;
}
// fun_A040
fun_A040() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9B58(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A098
fun_A098() {
    pri = 0;
    return pri;
}
// fun_A0B0
fun_A0B0() {
    pri = 0;
    return pri;
}
// fun_A0C8
fun_A0C8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 32456;
    pri = SoundPostEvent(var_24)
    var_32 = 0;
    var_40 = 4630981128080903373;
    var_48 = 0;
    OP_PUSH5_C 4664546579248997990, 4639490468470587392, 4674407738948462838, 4664564149444809851, 4639683630673355080
    var_56 = 4674404797754858537;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_27C0()
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4637849117512643379, 4664516562581559706, 4674363761232130867, 8802641224559852288
    var_96 = 48;
    pri = fun_05C8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, 3038398906929913387
    var_136 = 48;
    pri = fun_0B40(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 3038398906929913387;
    var_152 = 8;
    pri = fun_0B98(var_144)
    var_160 = 20;
    var_168 = 8;
    pri = fun_00B8(var_160)
    var_176 = 0;
    var_184 = 4630981128080903373;
    var_192 = 3;
    OP_PUSH5_C 4664649515527590380, 4639110829095748895, 4674353994820097147, 4664666953782006907, 4639321231640840110
    var_200 = 4674351078365504471;
    var_208 = 20;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_0B98(var_216)
    var_232 = 3038398906929913387;
    var_240 = 8;
    pri = fun_0B98(var_232)
    var_248 = 2;
    var_256 = 2;
    var_264 = 3038398906929913387;
    var_272 = 24;
    pri = fun_13F8(var_264, var_256, var_248)
    var_280 = 1;
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 0;
    var_320 = 8;
    var_328 = 3038398906929913387;
    var_336 = 56;
    pri = fun_4770(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C 2303865640007720186, 3038398906929913387
    var_384 = 56;
    pri = fun_2038(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_2230(var_392)
    var_408 = 0;
    pri = fun_22F0()
    var_416 = 0;
    pri = fun_27C0()
    var_432 = 123;
    var_440 = 122;
    var_448 = 121;
    var_456 = 24;
    pri = fun_9A50(var_448, var_440, var_432)
    var_8 = pri;
    var_464 = 5;
    var_472 = 0;
    var_480 = 0;
    var_488 = 8585237335037680770;
    var_496 = var_8;
    var_504 = 40;
    pri = fun_2568(var_496, var_488, var_480, var_472, var_464)
    OP_CONST_S -16, 2303860142449579131
    var_520 = 0;
    pri = fun_2680()
    OP_JZER lab_A580
    var_528 = 0;
    pri = fun_2770()
// lab_A580
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 16;
    pri = fun_29B0(var_0, var_-8)
    var_16 = 3;
    var_24 = 1;
    OP_PUSH2_C 4641346655204505813, 4611686018427387904
    var_32 = 32;
    pri = fun_2A18(var_24, var_16, var_8, var_0)
    OP_PUSH2_C -4604930618986332160, 4630305588136797798
    var_40 = 0;
    OP_PUSH5_C 4664758477129902981, 4640311671715140731, 4674323604318705418, 4664774123180366234, 4640519259510464840
    var_48 = 4674320102374170952;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_27C0()
    OP_PUSH2_C -4604930618986332160, 4630305588136797798
    var_72 = 3;
    OP_PUSH5_C 4664683182573632881, 4640073825359820227, 4674340457083180155, 4664698828624096133, 4640281413155144335
    var_80 = 4674336955138645688;
    var_88 = 120;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4637849117512643379, 4664516562581559706, 4674363761232130867, 8802641224559852288
    var_112 = 48;
    pri = fun_05C8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 3;
    var_128 = 120;
    OP_PUSH2_C 4641698498925394133, 4611686018427387904
    var_136 = 32;
    pri = fun_2A18(var_128, var_120, var_112, var_104)
    var_144 = 15;
    var_152 = 8;
    pri = fun_00B8(var_144)
    var_160 = 32616;
    var_168 = 8;
    var_176 = 16;
    pri = fun_0300(var_168, var_160)
    var_184 = 0;
    pri = fun_03D0()
    var_192 = 15;
    var_200 = 8;
    pri = fun_00B8(var_192)
    var_208 = 0;
    var_216 = 2;
    var_224 = 3038398906929913387;
    var_232 = 24;
    pri = fun_87D8(var_224, var_216, var_208)
    var_240 = 1;
    var_248 = 8;
    pri = fun_00B8(var_240)
    var_256 = 3038398906929913387;
    var_264 = 8;
    pri = fun_0D70(var_256)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    var_312 = var_16;
    var_320 = 3038398906929913387;
    var_328 = 56;
    pri = fun_2038(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_2230(var_336)
    var_352 = 0;
    pri = fun_22F0()
    var_360 = 0;
    var_368 = 0;
    var_376 = 3038398906929913387;
    var_384 = 24;
    pri = fun_87D8(var_376, var_368, var_360)
    var_392 = 1;
    var_400 = 8;
    pri = fun_00B8(var_392)
    var_408 = 3038398906929913387;
    var_416 = 8;
    pri = fun_0D70(var_408)
    OP_PUSH2_C -4609659398595071181, 4630305588136797798
    var_424 = 3;
    OP_PUSH5_C 4664655694782938481, 4639602354773829878, 4674348799627655905, 4664673199008052675, 4639809238881712210
    var_432 = 4674345905163295785;
    var_440 = 45;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 1;
    var_456 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4664503258490863616, 4674393365582708736, 4607182418800017408
    var_464 = 3038398906929913387;
    var_472 = 64;
    pri = fun_0A30(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_480 = 3038398906929913387;
    var_488 = 8;
    pri = fun_0B98(var_480)
    var_496 = 6;
    var_504 = 4;
    var_512 = 2;
    var_520 = 1;
    var_528 = 9;
    var_536 = 1;
    var_544 = 28;
    var_552 = 3038398906929913387;
    var_560 = 64;
    pri = fun_8C30(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_568 = 1;
    var_576 = 1;
    var_584 = -1;
    var_592 = -1;
    var_600 = 0;
    var_608 = 8;
    var_616 = 3038398906929913387;
    var_624 = 56;
    pri = fun_4770(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 5;
    var_640 = 5;
    var_648 = 3038398906929913387;
    var_656 = 24;
    pri = fun_13F8(var_648, var_640, var_632)
    var_664 = 0;
    var_672 = 3;
    var_680 = 0;
    var_688 = 100;
    var_696 = -1;
    OP_PUSH2_C 2303862341472835553, 3038398906929913387
    var_704 = 56;
    pri = fun_2038(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 1;
    var_720 = 8;
    pri = fun_2230(var_712)
    var_728 = 0;
    pri = fun_22F0()
    var_736 = 3038398906929913387;
    var_744 = 8;
    pri = fun_1460(var_736)
    var_752 = 1;
    var_760 = 3;
    var_768 = 0;
    var_776 = 8;
    var_784 = 3038398906929913387;
    var_792 = 40;
    pri = fun_6AA8(var_784, var_776, var_768, var_760, var_752)
    var_800 = 3038398906929913387;
    var_808 = 8;
    pri = fun_0D70(var_800)
    var_816 = 1;
    var_824 = 0;
    var_832 = 30;
    pri = float(var_832)
    var_840 = pri;
    var_848 = 0;
    pri = float(var_848)
    var_856 = pri;
    var_864 = 0;
    var_872 = 7035;
    pri = float(var_872)
    var_880 = pri;
    var_888 = 32300;
    pri = float(var_888)
    var_896 = pri;
    OP_PUSH2_C 4611686018427387904, 3038398906929913387
    var_904 = 72;
    pri = fun_09B8(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_912 = 3038398906929913387;
    var_920 = 8;
    pri = fun_0B98(var_912)
    var_928 = 5;
    var_936 = 8;
    pri = fun_00B8(var_928)
    var_944 = 32664;
    pri = SoundPostEvent(var_944)
    var_952 = 3;
    var_960 = 40;
    pri = EvCameraEnd(var_960, var_952)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_968 = 3;
    var_976 = 1;
    var_984 = 32;
    pri = fun_2A70(var_976, var_968, var_960, var_952)
    var_992 = 30;
    var_1000 = 8;
    pri = fun_00B8(var_992)
    pri = 0;
    return pri;
}
// fun_AEC0
fun_AEC0() {
    pri = 0;
    return pri;
}
// fun_AED8
fun_AED8() {
    var_8 = 3038398906929913387;
    var_16 = 8;
    pri = fun_0598(var_8)
    var_24 = 637;
    var_32 = 8;
    pri = fun_9E70(var_24)
    var_40 = 10;
    var_48 = -8018767981987652408;
    pri = WorkSet(var_48, var_40)
    var_56 = -5750634935458327434;
    pri = VanishFlagReset(var_56)
    var_64 = -5750633835946699223;
    pri = VanishFlagReset(var_64)
    var_72 = 6577952962885434863;
    pri = VanishFlagReset(var_72)
    var_80 = 1003091793780467894;
    pri = VanishFlagReset(var_80)
    var_88 = 8896463344906650392;
    pri = VanishFlagReset(var_88)
    var_96 = 6925251713131868404;
    pri = VanishFlagReset(var_96)
    var_104 = 6925255011666753037;
    pri = VanishFlagReset(var_104)
    var_112 = -1900706673916255456;
    pri = VanishFlagSet(var_112)
    var_120 = -1437839325395537641;
    pri = VanishFlagSet(var_120)
    var_128 = 1;
    var_136 = 28;
    pri = ItemAdd(var_136, var_128)
    pri = 0;
    return pri;
}
// fun_B0F8
fun_B0F8() {
    pri = 0;
    return pri;
}
// fun_B110
fun_B110() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A040()
    var_16 = 0;
    pri = fun_A098()
    var_24 = 0;
    pri = fun_A0B0()
    var_32 = 0;
    pri = fun_A0C8()
    var_40 = 0;
    pri = fun_AEC0()
    var_48 = 0;
    pri = fun_AED8()
    var_56 = 0;
    pri = fun_B0F8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B200
fun_B200() {
    var_8 = 0;
    pri = fun_A098()
    var_16 = 0;
    pri = fun_AED8()
    pri = 0;
    return pri;
}
// fun_B248
fun_B248() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9B58(var_40, var_32, var_24, var_16, var_8)
    var_56 = 100;
    var_64 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, 3038398906929913387, 8802641224559852288
    var_72 = 15;
    var_80 = 56;
    pri = fun_2850(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH2_C 3038398906929913387, 8802641224559852288
    var_120 = 48;
    pri = fun_0B40(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    OP_PUSH2_C 8802641224559852288, 3038398906929913387
    var_160 = 48;
    pri = fun_0B40(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 8802641224559852288;
    var_176 = 8;
    pri = fun_0B98(var_168)
    var_184 = 3038398906929913387;
    var_192 = 8;
    pri = fun_0B98(var_184)
    var_200 = 0;
    pri = fun_27C0()
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 22;
    var_256 = 3038398906929913387;
    var_264 = 56;
    pri = fun_4770(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C 2303863440984463764, 3038398906929913387
    var_312 = 56;
    pri = fun_2038(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_2230(var_320)
    var_336 = 0;
    pri = fun_22F0()
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C 2303866739519348397, 3038398906929913387
    var_384 = 56;
    pri = fun_2038(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_2230(var_392)
    var_408 = 0;
    pri = fun_22F0()
    var_416 = 1;
    var_424 = 3;
    var_432 = 0;
    var_440 = 22;
    var_448 = 3038398906929913387;
    var_456 = 40;
    pri = fun_6AA8(var_448, var_440, var_432, var_424, var_416)
    var_464 = 3038398906929913387;
    var_472 = 8;
    pri = fun_0D70(var_464)
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = -90;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 3038398906929913387;
    var_528 = 40;
    pri = fun_0AF0(var_520, var_512, var_504, var_496, var_488)
    var_536 = 3038398906929913387;
    var_544 = 8;
    pri = fun_0B98(var_536)
    var_552 = 3;
    var_560 = 15;
    pri = EvCameraEnd(var_560, var_552)
    var_568 = 635;
    var_576 = 8;
    pri = fun_9E70(var_568)
    pri = 0;
    return pri;
}
