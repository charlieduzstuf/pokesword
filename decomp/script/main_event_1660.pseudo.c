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
// fun_04C8
fun_04C8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0530
// lab_0530
    var_8 = 0;
    pri = fun_0678()
    OP_JNZ lab_0568
    OP_JUMP lab_0598
// lab_0568
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0530
// lab_0598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05C8
// lab_05C8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0608
    pri = 0;
    return pri;
// lab_0608
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C8
    pri = 0;
    return pri;
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1198(var_8)
    OP_JZER lab_0940
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11C8(var_24)
    OP_JNZ lab_0940
    pri = 0;
    return pri;
// lab_0940
    OP_JUMP lab_0950
// lab_0950
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0950
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AE8
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B28
// lab_0B28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1198(var_8)
    OP_JNZ lab_0BB0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BA0
    pri = 0;
    return pri;
// lab_0BB0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BF8
    pri = 0;
    return pri;
// lab_0BF8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CA0(var_8)
    pri = 0;
    return pri;
// lab_0C58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B28
    pri = 0;
    return pri;
// lab_0BA0
    OP_JUMP lab_0BF8
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D28
    pri = 0;
    return pri;
// lab_0D28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1198(var_8)
    OP_JZER lab_0E58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D80
    OP_ZERO_P_S 64
// lab_0E58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E90
    OP_CONST_S 64, 1
// lab_0E90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_CONST_S 72, 1
// lab_0EC8
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
// lab_0D80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA8
    OP_ZERO_P_S 72
// lab_0DA8
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
    OP_JUMP lab_0F68
// lab_0F68
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
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
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1108(var_24)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_11F8
fun_11F8() {
    OP_JUMP lab_1210
// lab_1210
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_12A0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1290
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_12A0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1330
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1320
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_1330
    pri = 0;
    return pri;
// lab_1320
    OP_JUMP lab_1340
// lab_1340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1210
    pri = 0;
    return pri;
// lab_1290
    OP_JUMP lab_1340
}
// fun_1380
fun_1380() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_11F8(var_40)
    pri = 0;
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1468
fun_1468() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_14A0
fun_14A0() {
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
// switch_1AB8
        case default:
        {
// switch_1AB8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B00
// lab_1B00
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
            OP_JNZ lab_1BA8
            var_88 = 0;
            pri = fun_1D60()
// lab_1BA8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AB8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_16A0
                case default:
                {
// switch_16A0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1718
// lab_1718
                    OP_JUMP lab_1B00
                }
                case 0x0:
                {
// switch_16A0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1718
                }
                case 0x1:
                {
// switch_16A0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1718
                }
                case 0x2:
                {
// switch_16A0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1718
                }
                case 0x3:
                {
// switch_16A0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1718
                }
                case 0x4:
                {
// switch_16A0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1718
                }
                case 0x5:
                {
// switch_16A0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1718
                }
            }
        }
        case 0x65:
        {
// switch_1AB8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1858
                case default:
                {
// switch_1858_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18D0
// lab_18D0
                    OP_JUMP lab_1B00
                }
                case 0x0:
                {
// switch_1858_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_18D0
                }
                case 0x1:
                {
// switch_1858_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_18D0
                }
                case 0x2:
                {
// switch_1858_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_18D0
                }
                case 0x3:
                {
// switch_1858_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18D0
                }
                case 0x4:
                {
// switch_1858_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_18D0
                }
                case 0x5:
                {
// switch_1858_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_18D0
                }
            }
        }
        case 0x66:
        {
// switch_1AB8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A10
                case default:
                {
// switch_1A10_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A88
// lab_1A88
                    OP_JUMP lab_1B00
                }
                case 0x0:
                {
// switch_1A10_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A88
                }
                case 0x1:
                {
// switch_1A10_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A88
                }
                case 0x2:
                {
// switch_1A10_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A88
                }
                case 0x3:
                {
// switch_1A10_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A88
                }
                case 0x4:
                {
// switch_1A10_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A88
                }
                case 0x5:
                {
// switch_1A10_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A88
                }
            }
        }
    }
}
// fun_1BC0
fun_1BC0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A68(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C68
    pri = 1;
    return pri;
// lab_1C68
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CB0
fun_1CB0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BC0(var_8)
    arg_2 = pri;
// lab_1D00
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_14A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D60
fun_1D60() {
    OP_JUMP lab_1D78
// lab_1D78
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DB8
    pri = 0;
    return pri;
// lab_1DB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D78
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = 0;
    pri = fun_1D60()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EA8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1EA8
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1EE8
fun_1EE8() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F50
fun_1F50() {
    OP_JUMP lab_1F68
// lab_1F68
    pri = EvCameraMoveWait_()
    OP_JZER lab_1FA0
    pri = 0;
    return pri;
// lab_1FA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F68
    pri = 0;
    return pri;
}
// fun_1FE0
fun_1FE0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2048(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2120()
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2048(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2120()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
    OP_JUMP lab_2138
// lab_2138
    pri = IsEasingRunningDof_()
    OP_JZER lab_2190
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21A0
// lab_2190
    pri = 0;
    return pri;
// lab_21A0
    OP_JUMP lab_2138
    pri = 0;
    return pri;
}
// fun_21C0
fun_21C0() {
    pri = arg_6;
    OP_JNZ lab_21F8
    var_8 = 0;
    pri = fun_0F78()
// lab_21F8
    pri = arg_1;
    switch (pri) {
// switch_3760
        case default:
        {
// switch_3760_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AB0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AB0
            pri = 1;
            OP_JUMP lab_3AB8
// lab_3AB0
            pri = 0;
// lab_3AB8
            OP_JZER lab_3C10
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
            OP_JUMP lab_3C70
// lab_3C10
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
// lab_3C70
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3CD0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D30
// lab_3CD0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D30
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D30
            pri = arg_2;
            OP_JZER lab_3D70
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3D70
            var_8 = 0;
            pri = fun_0FB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3760_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x1:
        {
// switch_3760_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x2:
        {
// switch_3760_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x3:
        {
// switch_3760_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x4:
        {
// switch_3760_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x5:
        {
// switch_3760_case_0x5
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x6:
        {
// switch_3760_case_0x6
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x7:
        {
// switch_3760_case_0x7
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x8:
        {
// switch_3760_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x9:
        {
// switch_3760_case_0x9
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xa:
        {
// switch_3760_case_0xa
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xb:
        {
// switch_3760_case_0xb
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xc:
        {
// switch_3760_case_0xc
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xd:
        {
// switch_3760_case_0xd
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xe:
        {
// switch_3760_case_0xe
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0xf:
        {
// switch_3760_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x10:
        {
// switch_3760_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x11:
        {
// switch_3760_case_0x11
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x12:
        {
// switch_3760_case_0x12
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x13:
        {
// switch_3760_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x14:
        {
// switch_3760_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x15:
        {
// switch_3760_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x16:
        {
// switch_3760_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x17:
        {
// switch_3760_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x18:
        {
// switch_3760_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x19:
        {
// switch_3760_case_0x19
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3760_case_default
        }
        case 0x1a:
        {
// switch_3760_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3760_case_default
        }
        case 0x1b:
        {
// switch_3760_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3760_case_default
        }
        case 0x1c:
        {
// switch_3760_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3760_case_default
        }
        case 0x1d:
        {
// switch_3760_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x1e:
        {
// switch_3760_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x1f:
        {
// switch_3760_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x20:
        {
// switch_3760_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x21:
        {
// switch_3760_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x22:
        {
// switch_3760_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x23:
        {
// switch_3760_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x24:
        {
// switch_3760_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x25:
        {
// switch_3760_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x26:
        {
// switch_3760_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x27:
        {
// switch_3760_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x28:
        {
// switch_3760_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
        case 0x29:
        {
// switch_3760_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3760_case_default
        }
    }
}
// fun_3DA0
fun_3DA0() {
    pri = arg_5;
    OP_JNZ lab_3DD8
    var_8 = 0;
    pri = fun_0F78()
// lab_3DD8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3E28
    OP_CONST_S -8, -1
// lab_3E28
    pri = arg_1;
    switch (pri) {
// switch_58E0
        case default:
        {
// switch_58E0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5D88
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A68(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5D88
            pri = 1;
            OP_JUMP lab_5D90
// lab_5D88
            pri = 0;
// lab_5D90
            OP_JZER lab_5DE0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6038
// lab_5DE0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5E48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5E48
            pri = 1;
            OP_JUMP lab_5E50
// lab_5E48
            pri = 0;
// lab_5E50
            OP_JZER lab_5FD8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
            OP_JUMP lab_6038
// lab_5FD8
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
// lab_6038
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_60A8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_60A8
            var_8 = 0;
            pri = fun_0FB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_58E0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1:
        {
// switch_58E0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2:
        {
// switch_58E0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3:
        {
// switch_58E0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x4:
        {
// switch_58E0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x5:
        {
// switch_58E0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CA0(var_40)
            OP_JUMP switch_58E0_case_default
        }
        case 0x6:
        {
// switch_58E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x7:
        {
// switch_58E0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x8:
        {
// switch_58E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x9:
        {
// switch_58E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0xa:
        {
// switch_58E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0xb:
        {
// switch_58E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0xc:
        {
// switch_58E0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0xd:
        {
// switch_58E0_case_0xd
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0xe:
        {
// switch_58E0_case_0xe
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0xf:
        {
// switch_58E0_case_0xf
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x10:
        {
// switch_58E0_case_0x10
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x11:
        {
// switch_58E0_case_0x11
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x12:
        {
// switch_58E0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x13:
        {
// switch_58E0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x14:
        {
// switch_58E0_case_0x14
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x15:
        {
// switch_58E0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x16:
        {
// switch_58E0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x17:
        {
// switch_58E0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x18:
        {
// switch_58E0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x19:
        {
// switch_58E0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1a:
        {
// switch_58E0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1b:
        {
// switch_58E0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1c:
        {
// switch_58E0_case_0x1c
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1d:
        {
// switch_58E0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1e:
        {
// switch_58E0_case_0x1e
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x1f:
        {
// switch_58E0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x20:
        {
// switch_58E0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x21:
        {
// switch_58E0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x22:
        {
// switch_58E0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x23:
        {
// switch_58E0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x24:
        {
// switch_58E0_case_0x24
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x25:
        {
// switch_58E0_case_0x25
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x26:
        {
// switch_58E0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x27:
        {
// switch_58E0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x28:
        {
// switch_58E0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x29:
        {
// switch_58E0_case_0x29
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2a:
        {
// switch_58E0_case_0x2a
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2b:
        {
// switch_58E0_case_0x2b
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2c:
        {
// switch_58E0_case_0x2c
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2d:
        {
// switch_58E0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2e:
        {
// switch_58E0_case_0x2e
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x2f:
        {
// switch_58E0_case_0x2f
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x30:
        {
// switch_58E0_case_0x30
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x31:
        {
// switch_58E0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x32:
        {
// switch_58E0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x33:
        {
// switch_58E0_case_0x33
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x34:
        {
// switch_58E0_case_0x34
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x35:
        {
// switch_58E0_case_0x35
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x36:
        {
// switch_58E0_case_0x36
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x37:
        {
// switch_58E0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x38:
        {
// switch_58E0_case_0x38
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
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58E0_case_default
        }
        case 0x39:
        {
// switch_58E0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3a:
        {
// switch_58E0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3b:
        {
// switch_58E0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3c:
        {
// switch_58E0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3d:
        {
// switch_58E0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
        case 0x3e:
        {
// switch_58E0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_58E0_case_default
        }
    }
}
// fun_60D8
fun_60D8() {
    pri = arg_4;
    OP_JNZ lab_6110
    var_8 = 0;
    pri = fun_0F78()
// lab_6110
    pri = arg_1;
    switch (pri) {
// switch_74E8
        case default:
        {
// switch_74E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1198(var_264)
            OP_JZER lab_7AB0
            pri = arg_3;
            switch (pri) {
// switch_7A58
                case default:
                {
// switch_7A58_case_default
                    OP_JUMP lab_7D68
// lab_7D68
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7DD8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7DD8
                    var_8 = 0;
                    pri = fun_0FB8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7A58_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A58_case_default
                }
                case 0x2:
                {
// switch_7A58_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A58_case_default
                }
                case 0x3:
                {
// switch_7A58_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A58_case_default
                }
            }
// lab_7AB0
            pri = arg_1;
            OP_JZER lab_7B00
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B00
            pri = 0;
            OP_JUMP lab_7B08
// lab_7B00
            pri = 1;
// lab_7B08
            OP_JZER lab_7B70
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A68(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7B70
            pri = 1;
            OP_JUMP lab_7B78
// lab_7B70
            pri = 0;
// lab_7B78
            OP_JZER lab_7BC8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7D68
// lab_7BC8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7C30
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7D68
// lab_7C30
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
// switch_74E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1:
        {
// switch_74E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2:
        {
// switch_74E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3:
        {
// switch_74E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x4:
        {
// switch_74E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x5:
        {
// switch_74E8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CA0(var_40)
            OP_JUMP switch_74E8_case_default
        }
        case 0x6:
        {
// switch_74E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x7:
        {
// switch_74E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x8:
        {
// switch_74E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x9:
        {
// switch_74E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xa:
        {
// switch_74E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xb:
        {
// switch_74E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xc:
        {
// switch_74E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xd:
        {
// switch_74E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xe:
        {
// switch_74E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0xf:
        {
// switch_74E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x10:
        {
// switch_74E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x11:
        {
// switch_74E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x12:
        {
// switch_74E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x13:
        {
// switch_74E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x14:
        {
// switch_74E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x15:
        {
// switch_74E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x16:
        {
// switch_74E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x17:
        {
// switch_74E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x18:
        {
// switch_74E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x19:
        {
// switch_74E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1a:
        {
// switch_74E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1b:
        {
// switch_74E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1c:
        {
// switch_74E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1d:
        {
// switch_74E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1e:
        {
// switch_74E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x1f:
        {
// switch_74E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x20:
        {
// switch_74E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x21:
        {
// switch_74E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x22:
        {
// switch_74E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x23:
        {
// switch_74E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x24:
        {
// switch_74E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x25:
        {
// switch_74E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x26:
        {
// switch_74E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x27:
        {
// switch_74E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x28:
        {
// switch_74E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x29:
        {
// switch_74E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2a:
        {
// switch_74E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2b:
        {
// switch_74E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2c:
        {
// switch_74E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2d:
        {
// switch_74E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2e:
        {
// switch_74E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x2f:
        {
// switch_74E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x30:
        {
// switch_74E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x31:
        {
// switch_74E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x32:
        {
// switch_74E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x33:
        {
// switch_74E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x34:
        {
// switch_74E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x35:
        {
// switch_74E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x36:
        {
// switch_74E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x37:
        {
// switch_74E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x38:
        {
// switch_74E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x39:
        {
// switch_74E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3a:
        {
// switch_74E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3b:
        {
// switch_74E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3c:
        {
// switch_74E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3d:
        {
// switch_74E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
        case 0x3e:
        {
// switch_74E8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_74E8_case_default
        }
    }
}
// fun_7E08
fun_7E08() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7E90
// lab_7E90
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8010
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8000
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7F50
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7F50
    pri = 0;
    OP_JUMP lab_7F58
// lab_8010
    pri = 0;
    return pri;
// lab_8000
    OP_JUMP lab_7E88
// lab_7E88
    OP_INC_P_S -936
// lab_7F50
    pri = 1;
// lab_7F58
    OP_JZER lab_7FD0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7FC8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7FD0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7FC8
}
// fun_8030
fun_8030() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_80C8
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1440()
// lab_80C8
    pri = arg_4;
    OP_JZER lab_8100
    var_8 = 1;
    var_16 = 8;
    pri = fun_1468(var_8)
// lab_8100
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8158
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8158
    pri = 0;
    OP_JUMP lab_8160
// lab_8158
    pri = 1;
// lab_8160
    OP_JZER lab_8228
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8228
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8200
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1380(var_32, var_24)
    OP_JUMP lab_8228
// lab_8228
    pri = arg_2;
    OP_JZER lab_8300
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_82D0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1050(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    OP_JUMP lab_8300
// lab_8300
    pri = arg_3;
    OP_JZER lab_8338
    var_8 = 1;
    var_16 = 8;
    pri = fun_1408(var_8)
// lab_8338
    pri = 0;
    return pri;
// lab_82D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1050(var_16, var_8)
// lab_8200
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1380(var_16, var_8)
}
// fun_8348
fun_8348() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7E08(var_24)
    pri = 0;
    return pri;
}
// fun_83B0
fun_83B0() {
    pri = g_mode;
    switch (pri) {
// switch_8470
        case default:
        {
// switch_8470_case_default
            pri = CommandNOP()
            OP_JUMP lab_84B8
// lab_84B8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8470_case_0x0
            var_8 = 0;
            pri = fun_84C8()
            OP_JUMP lab_84B8
        }
        case 0x38ce752aeffd7cdf:
        {
// switch_8470_case_0x38ce752aeffd7cdf
            var_8 = 0;
            pri = fun_A3D0()
            OP_JUMP lab_84B8
        }
        case 0x6032d3278cd4e4e3:
        {
// switch_8470_case_0x6032d3278cd4e4e3
            var_8 = 0;
            pri = fun_A4C0()
            OP_JUMP lab_84B8
        }
    }
}
// fun_84C8
fun_84C8() {
    pri = 0;
    return pri;
}
// fun_84E0
fun_84E0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8030(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8538
fun_8538() {
    pri = 0;
    return pri;
}
// fun_8550
fun_8550() {
    pri = 0;
    return pri;
}
// fun_8568
fun_8568() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4667025648116144538, 4637412127611300086, 4671206345917448847, 4667753403867453194, 4635039293557629256
    var_32 = 4671182904329544663;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1F50()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 3;
    OP_PUSH5_C 4667025648116144538, 4637412127611300086, 4671206345917448847, 4667470878857138012, 4635960420418914877
    var_80 = 4671192008285822648;
    var_88 = 120;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4640537203540230144, 4666945823571968000, 4671235018431922176, 3447269533191472208
    var_112 = 48;
    pri = fun_06A0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C 4639481672377565184, 4667001348909170688, 4671198734548205568, -8328680712272566952
    var_136 = 48;
    pri = fun_06A0(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 1;
    var_152 = 1;
    OP_PUSH4_C 4640537203540230144, 4667657757350952960, 4671204506984251392, 8802641224559852288
    var_160 = 48;
    pri = fun_06A0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    OP_PUSH4_C 4640537203540230144, 4667657757350952960, 4671238316966805504, 8594007528122057589
    var_184 = 48;
    pri = fun_06A0(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 0;
    var_200 = 8802641224559852288;
    var_208 = 16;
    pri = fun_0738(var_200, var_192)
    var_216 = 0;
    var_224 = 8594007528122057589;
    var_232 = 16;
    pri = fun_0738(var_224, var_216)
    var_240 = 1;
    var_248 = 8;
    pri = fun_0060(var_240)
    var_256 = 31016;
    var_264 = 8;
    var_272 = 16;
    pri = fun_0280(var_264, var_256)
    var_280 = 0;
    pri = fun_0350()
    var_288 = 90;
    var_296 = 8;
    pri = fun_0060(var_288)
    var_304 = 1;
    var_312 = 0;
    var_320 = 30968;
    var_328 = 8;
    var_336 = 32;
    pri = fun_02E0(var_328, var_320, var_312, var_304)
    var_344 = 0;
    pri = fun_0350()
    var_352 = 0;
    var_360 = 1;
    var_368 = 1;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 31064;
    var_408 = 56;
    pri = fun_1EE8(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 6;
    var_424 = 8594007528122057589;
    var_432 = 16;
    pri = fun_1090(var_424, var_416)
    var_440 = 6;
    var_448 = 8802641224559852288;
    var_456 = 16;
    pri = fun_1090(var_448, var_440)
    var_464 = 1;
    var_472 = 0;
    var_480 = 4641240890982006784;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH4_C 4667179469792870400, 4671204506984251392, 4611686018427387904, 8802641224559852288
    var_504 = 72;
    pri = fun_07A8(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 1;
    var_520 = 0;
    var_528 = 4641240890982006784;
    var_536 = 0;
    var_544 = 0;
    OP_PUSH4_C 4667179469792870400, 4671238316966805504, 4611686018427387904, 8594007528122057589
    var_552 = 72;
    pri = fun_07A8(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    var_568 = 4631952216750555136;
    var_576 = 0;
    OP_PUSH5_C 4667016280277075886, 4637106727261569024, 4671228874910701978, 4666848973090235351, 4636785845788118876
    var_584 = 4671226285560818565;
    var_592 = 1;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    pri = fun_1F50()
    var_608 = 0;
    var_616 = 4631952216750555136;
    var_624 = 3;
    OP_PUSH5_C 4667001948143007826, 4638292440600962662, 4671228655008376422, 4666897296626276106, 4641308444976417341
    var_632 = 4671227030479946383;
    var_640 = 40;
    pri = EvCameraMove(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 1;
    var_656 = 8802641224559852288;
    var_664 = 16;
    pri = fun_0738(var_656, var_648)
    var_672 = 1;
    var_680 = 8594007528122057589;
    var_688 = 16;
    pri = fun_0738(var_680, var_672)
    var_696 = 31016;
    var_704 = 8;
    var_712 = 16;
    pri = fun_0280(var_704, var_696)
    var_720 = 0;
    pri = fun_0350()
    var_728 = 40;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 0;
    var_752 = 4631952216750555136;
    var_760 = 0;
    OP_PUSH5_C 4667158502106128712, 4638051779495875052, 4671226686882562703, 4667101129589391360, 4639587225493831680
    var_768 = 4671248440720118252;
    var_776 = 1;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 1;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 8594007528122057589;
    var_808 = 8;
    pri = fun_08C8(var_800)
    var_816 = 8802641224559852288;
    var_824 = 8;
    pri = fun_08C8(var_816)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C -2384644680014896772, 8594007528122057589
    var_872 = 56;
    pri = fun_1CB0(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_1DF8(var_880)
    var_896 = 0;
    pri = fun_1EB8()
    var_904 = 0;
    var_912 = 4631952216750555136;
    var_920 = 0;
    OP_PUSH5_C 4667094867870671176, 4635353138156661637, 4671224575820237373, 4667215709696121897, 4639827886598919291
    var_928 = 4671271863066568950;
    var_936 = 1;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 1;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH2_C 8594007528122057589, -8328680712272566952
    var_992 = 48;
    pri = fun_0870(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = -8328680712272566952;
    var_1008 = 8;
    pri = fun_08C8(var_1000)
    var_1016 = 8594007528122057589;
    var_1024 = 8;
    pri = fun_1140(var_1016)
    var_1032 = 1;
    var_1040 = 0;
    var_1048 = 4641240890982006784;
    var_1056 = 0;
    var_1064 = 0;
    OP_PUSH4_C 4667025538164981760, 4671235018431922176, 4607182418800017408, 3447269533191472208
    var_1072 = 72;
    pri = fun_07A8(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 3447269533191472208;
    var_1088 = 8;
    pri = fun_08C8(var_1080)
    var_1096 = 1;
    var_1104 = -1;
    var_1112 = -1;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 1;
    var_1144 = 3447269533191472208;
    var_1152 = 56;
    pri = fun_21C0(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH2_C 5088385068268132813, 3447269533191472208
    var_1200 = 56;
    pri = fun_1CB0(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 1;
    var_1216 = 8;
    pri = fun_1DF8(var_1208)
    var_1224 = 0;
    pri = fun_1EB8()
    var_1232 = 1;
    var_1240 = 0;
    var_1248 = 4641240890982006784;
    var_1256 = 0;
    var_1264 = 0;
    OP_PUSH4_C 4667162977118453760, 4671238316966805504, 4611686018427387904, 8594007528122057589
    var_1272 = 72;
    pri = fun_07A8(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1280 = 10;
    var_1288 = 8;
    pri = fun_0060(var_1280)
    var_1296 = 1;
    var_1304 = 1;
    var_1312 = -1;
    OP_PUSH2_C -8328680712272566952, 8802641224559852288
    var_1320 = 40;
    pri = fun_0FF8(var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1328 = 6;
    var_1336 = -8328680712272566952;
    var_1344 = 16;
    pri = fun_1090(var_1336, var_1328)
    var_1352 = 1;
    var_1360 = 1;
    var_1368 = -1;
    var_1376 = -1;
    var_1384 = 0;
    var_1392 = 1;
    var_1400 = -8328680712272566952;
    var_1408 = 56;
    pri = fun_3DA0(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH2_C 5088381769733248180, -8328680712272566952
    var_1456 = 56;
    pri = fun_1CB0(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_1DF8(var_1464)
    var_1480 = 0;
    pri = fun_1EB8()
    var_1488 = 1;
    var_1496 = 3;
    var_1504 = 0;
    var_1512 = 1;
    var_1520 = -8328680712272566952;
    var_1528 = 40;
    pri = fun_60D8(var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1536 = -8328680712272566952;
    var_1544 = 8;
    pri = fun_0AA0(var_1536)
    var_1552 = -8328680712272566952;
    var_1560 = 8;
    pri = fun_1140(var_1552)
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 0;
    OP_PUSH2_C 8802641224559852288, -8328680712272566952
    var_1600 = 48;
    pri = fun_0870(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1608 = -8328680712272566952;
    var_1616 = 8;
    pri = fun_08C8(var_1608)
    var_1624 = 8594007528122057589;
    var_1632 = 8;
    pri = fun_08C8(var_1624)
    var_1640 = 0;
    var_1648 = 4631952216750555136;
    var_1656 = 0;
    OP_PUSH5_C 4667148749437990339, 4638817391432528036, 4671204828591402516, 4667102619427646996, 4639516153062212239
    var_1664 = 4671206417385704653;
    var_1672 = 1;
    pri = EvCameraMove(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1680 = 0;
    pri = fun_1F50()
    var_1688 = 0;
    var_1696 = 4631952216750555136;
    var_1704 = 2;
    OP_PUSH5_C 4667148749437990339, 4638817391432528036, 4671204828591402516, 4667118507370668360, 4639275491957124628
    var_1712 = 4671205867629890765;
    var_1720 = 40;
    pri = EvCameraMove(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1728 = 0;
    pri = fun_1F50()
    var_1736 = 30;
    var_1744 = 8;
    pri = fun_0060(var_1736)
    var_1752 = 1;
    var_1760 = 30;
    pri = float(var_1760)
    var_1768 = pri;
    var_1776 = -8328680712272566952;
    var_1784 = 24;
    pri = fun_06F8(var_1776, var_1768, var_1760)
    var_1792 = 0;
    var_1800 = 4631952216750555136;
    var_1808 = 0;
    OP_PUSH5_C 4667034383736027218, 4639511227250119803, 4671207618602157998, 4667046753241839698, 4639545707934766858
    var_1816 = 4671210592781111132;
    var_1824 = 1;
    pri = EvCameraMove(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1832 = 0;
    pri = fun_1F50()
    var_1840 = 10;
    var_1848 = 8;
    pri = fun_0060(var_1840)
    var_1856 = 0;
    var_1864 = 4631952216750555136;
    var_1872 = 3;
    OP_PUSH5_C 4667018539773470966, 4637716120586147594, 4671225021122446623, 4667105577113925714, 4638202368608415252
    var_1880 = 4671245936582385992;
    var_1888 = 20;
    pri = EvCameraMove(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1896 = 10;
    var_1904 = 8;
    pri = fun_0060(var_1896)
    var_1912 = -1;
    var_1920 = 8802641224559852288;
    var_1928 = 16;
    pri = fun_1050(var_1920, var_1912)
    var_1936 = 1;
    var_1944 = -120;
    pri = float(var_1944)
    var_1952 = pri;
    var_1960 = 3447269533191472208;
    var_1968 = 24;
    pri = fun_06F8(var_1960, var_1952, var_1944)
    var_1976 = 1;
    var_1984 = 1;
    var_1992 = -1;
    OP_PUSH2_C 3447269533191472208, -8328680712272566952
    var_2000 = 40;
    pri = fun_0FF8(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 10;
    var_2016 = 8;
    pri = fun_0060(var_2008)
    var_2024 = 6;
    var_2032 = -8328680712272566952;
    var_2040 = 16;
    pri = fun_1090(var_2032, var_2024)
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C 5088382869244876391, -8328680712272566952
    var_2088 = 56;
    pri = fun_1CB0(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_1DF8(var_2096)
    var_2112 = 0;
    pri = fun_1EB8()
    var_2120 = 30;
    var_2128 = 8;
    pri = fun_0060(var_2120)
    var_2136 = -1;
    var_2144 = -8328680712272566952;
    var_2152 = 16;
    pri = fun_1050(var_2144, var_2136)
    var_2160 = -8328680712272566952;
    var_2168 = 8;
    pri = fun_1140(var_2160)
    var_2176 = 1;
    var_2184 = 0;
    var_2192 = 4641240890982006784;
    var_2200 = 0;
    var_2208 = 0;
    OP_PUSH4_C 4667658856862580736, 4671198734548205568, 4607182418800017408, -8328680712272566952
    var_2216 = 72;
    pri = fun_07A8(var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2224 = 30;
    var_2232 = 8;
    pri = fun_0060(var_2224)
    var_2240 = 0;
    var_2248 = 0;
    var_2256 = 0;
    var_2264 = 0;
    pri = float(var_2264)
    var_2272 = pri;
    var_2280 = 3447269533191472208;
    var_2288 = 40;
    pri = fun_0820(var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2296 = 3447269533191472208;
    var_2304 = 8;
    pri = fun_08C8(var_2296)
    var_2312 = 1;
    var_2320 = 1;
    OP_PUSH4_C 4640537203540230144, 4667355391653314560, 4671215776978436096, 8802641224559852288
    var_2328 = 48;
    pri = fun_06A0(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2336 = 1;
    var_2344 = 1;
    var_2352 = 0;
    OP_PUSH3_C 4667162977118453760, 4671238316966805504, 8594007528122057589
    var_2360 = 48;
    pri = fun_06A0(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2368 = 0;
    var_2376 = 4631952216750555136;
    var_2384 = 0;
    OP_PUSH5_C 4667008996012541870, 4641249335231308104, 4671232679220934083, 4666826103248377610, 4647164180023161651
    var_2392 = 4671230153092969267;
    var_2400 = 1;
    pri = EvCameraMove(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2408 = 5;
    var_2416 = 8;
    pri = fun_0060(var_2408)
    var_2424 = 1;
    var_2432 = 0;
    var_2440 = 4641240890982006784;
    var_2448 = 0;
    var_2456 = 0;
    OP_PUSH4_C 4667713832443969536, 4671215776978436096, 4607182418800017408, 8802641224559852288
    var_2464 = 72;
    pri = fun_07A8(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2472 = 4;
    var_2480 = 8;
    pri = fun_0060(var_2472)
    var_2488 = 1;
    var_2496 = 0;
    var_2504 = 4641240890982006784;
    var_2512 = 0;
    var_2520 = 0;
    OP_PUSH4_C 4667658856862580736, 4671238316966805504, 4607182418800017408, 8594007528122057589
    var_2528 = 72;
    pri = fun_07A8(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2536 = 2;
    var_2544 = 8;
    pri = fun_0060(var_2536)
    var_2552 = 60;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 1;
    var_2576 = 0;
    var_2584 = 4641240890982006784;
    var_2592 = 0;
    var_2600 = 0;
    OP_PUSH4_C 4666860611420815360, 4671237767210991616, 4607182418800017408, 3447269533191472208
    var_2608 = 72;
    pri = fun_07A8(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2616 = 40;
    var_2624 = 8;
    pri = fun_0060(var_2616)
    var_2632 = 0;
    var_2640 = 4631952216750555136;
    var_2648 = 0;
    OP_PUSH5_C 4666851348035351347, 4638939481203676283, 4671266670622906778, 4666853679000002232, 4639021812634364150
    var_2656 = 4671272003254301491;
    var_2664 = 1;
    pri = EvCameraMove(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2672 = 0;
    pri = fun_1F50()
    var_2680 = 3447269533191472208;
    var_2688 = 8;
    pri = fun_08C8(var_2680)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2696 = 16;
    pri = fun_1FE0(var_2688, var_2680)
    var_2704 = 3;
    var_2712 = 1;
    OP_PUSH2_C 4633022947561962471, 4611686018427387904
    var_2720 = 32;
    pri = fun_2048(var_2712, var_2704, var_2696, var_2688)
    var_2728 = 0;
    var_2736 = 4631952216750555136;
    var_2744 = 0;
    OP_PUSH5_C 4666854234253374259, 4638279774227010683, 4671236208653259244, 4666853046780816261, 4639304343142237471
    var_2752 = 4671253435251687424;
    var_2760 = 1;
    pri = EvCameraMove(var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688)
    var_2768 = 0;
    pri = fun_1F50()
    var_2776 = 5;
    var_2784 = 8;
    pri = fun_0060(var_2776)
    var_2792 = 0;
    var_2800 = 3;
    var_2808 = 0;
    var_2816 = 100;
    var_2824 = -1;
    OP_PUSH2_C -8952098018646565844, 3447269533191472208
    var_2832 = 56;
    pri = fun_1CB0(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2840 = 1;
    var_2848 = 8;
    pri = fun_1DF8(var_2840)
    var_2856 = 0;
    pri = fun_1EB8()
    var_2864 = 10;
    var_2872 = 8;
    pri = fun_0060(var_2864)
    var_2880 = 1;
    var_2888 = 0;
    var_2896 = 30968;
    var_2904 = 8;
    var_2912 = 32;
    pri = fun_02E0(var_2904, var_2896, var_2888, var_2880)
    var_2920 = 0;
    pri = fun_0350()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2928 = 3;
    var_2936 = 1;
    var_2944 = 32;
    pri = fun_20A0(var_2936, var_2928, var_2920, var_2912)
    var_2952 = -8328680712272566952;
    var_2960 = 8;
    pri = fun_08C8(var_2952)
    var_2968 = 8802641224559852288;
    var_2976 = 8;
    pri = fun_08C8(var_2968)
    var_2984 = 8594007528122057589;
    var_2992 = 8;
    pri = fun_08C8(var_2984)
    var_3000 = 3;
    var_3008 = 0;
    pri = EvCameraEnd(var_3008, var_3000)
    pri = 0;
    return pri;
}
// fun_A110
fun_A110() {
    pri = 0;
    return pri;
}
// fun_A128
fun_A128() {
    var_8 = -8328680712272566952;
    var_16 = 8;
    pri = fun_0648(var_8)
    var_24 = 3447269533191472208;
    var_32 = 8;
    pri = fun_0648(var_24)
    var_40 = 8594007528122057589;
    var_48 = 8;
    pri = fun_0648(var_40)
    var_56 = -1554014642428341586;
    var_64 = 8;
    pri = fun_04C8(var_56)
    var_72 = 5901625555322344598;
    var_80 = 8;
    pri = fun_04C8(var_72)
    var_88 = 1670;
    var_96 = 8;
    pri = fun_8348(var_88)
    var_104 = 3007338827744228661;
    pri = VanishFlagSet(var_104)
    var_112 = -259633803849608692;
    pri = VanishFlagSet(var_112)
    var_120 = -6427668652219346930;
    pri = FlagSet(var_120)
    var_128 = -4927740921529361424;
    pri = FlagSet(var_128)
    var_136 = 5664822906954742011;
    pri = FlagReset(var_136)
    pri = 0;
    return pri;
}
// fun_A2F0
fun_A2F0() {
    var_8 = 0;
    pri = fun_04F8()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 1352;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 2237;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 7866785123243537653, 742287118255506116, 4092346179113345878
    var_88 = 80;
    pri = fun_0408(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A3D0
fun_A3D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_84E0()
    var_16 = 0;
    pri = fun_8538()
    var_24 = 0;
    pri = fun_8550()
    var_32 = 0;
    pri = fun_8568()
    var_40 = 0;
    pri = fun_A110()
    var_48 = 0;
    pri = fun_A128()
    var_56 = 0;
    pri = fun_A2F0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A4C0
fun_A4C0() {
    var_8 = 0;
    pri = fun_8538()
    var_16 = 0;
    pri = fun_A128()
    pri = 0;
    return pri;
}
