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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A0
fun_07A0() {
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
// fun_0818
fun_0818() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JZER lab_08E8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1278(var_24)
    OP_JNZ lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    OP_JUMP lab_08F8
// lab_08F8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0958
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0958
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08F8
    pri = 0;
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A58
    pri = 0;
    return pri;
// lab_0A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A98
// lab_0A98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JNZ lab_0B20
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B10
    pri = 0;
    return pri;
// lab_0B20
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B68
    pri = 0;
    return pri;
// lab_0B68
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D38(var_8)
    pri = 0;
    return pri;
// lab_0BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A98
    pri = 0;
    return pri;
// lab_0B10
    OP_JUMP lab_0B68
}
// fun_0C10
fun_0C10() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C58
// lab_0C58
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CB0
    pri = 0;
    return pri;
// lab_0CB0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CF0
    pri = 0;
    return pri;
// lab_0CF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C58
    pri = 0;
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DC0
    pri = 0;
    return pri;
// lab_0DC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JZER lab_0EF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E18
    OP_ZERO_P_S 64
// lab_0EF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F28
    OP_CONST_S 64, 1
// lab_0F28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F60
    OP_CONST_S 72, 1
// lab_0F60
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
// lab_0E18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E40
    OP_ZERO_P_S 72
// lab_0E40
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
    OP_JUMP lab_1000
// lab_1000
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1128(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1168(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12A8
fun_12A8() {
    OP_JUMP lab_12C0
// lab_12C0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1350
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1340
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A10(var_8)
    pri = 0;
    return pri;
// lab_1350
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A10(var_8)
    pri = 0;
    return pri;
// lab_13E0
    pri = 0;
    return pri;
// lab_13D0
    OP_JUMP lab_13F0
// lab_13F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12C0
    pri = 0;
    return pri;
// lab_1340
    OP_JUMP lab_13F0
}
// fun_1430
fun_1430() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A10(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12A8(var_40)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
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
// switch_1B68
        case default:
        {
// switch_1B68_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BB0
// lab_1BB0
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
            OP_JNZ lab_1C58
            var_88 = 0;
            pri = fun_1E10()
// lab_1C58
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B68_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1750
                case default:
                {
// switch_1750_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17C8
// lab_17C8
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1750_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17C8
                }
                case 0x1:
                {
// switch_1750_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17C8
                }
                case 0x2:
                {
// switch_1750_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17C8
                }
                case 0x3:
                {
// switch_1750_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17C8
                }
                case 0x4:
                {
// switch_1750_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17C8
                }
                case 0x5:
                {
// switch_1750_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17C8
                }
            }
        }
        case 0x65:
        {
// switch_1B68_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1908
                case default:
                {
// switch_1908_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1980
// lab_1980
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1908_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1980
                }
                case 0x1:
                {
// switch_1908_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1980
                }
                case 0x2:
                {
// switch_1908_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1980
                }
                case 0x3:
                {
// switch_1908_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1980
                }
                case 0x4:
                {
// switch_1908_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1980
                }
                case 0x5:
                {
// switch_1908_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1980
                }
            }
        }
        case 0x66:
        {
// switch_1B68_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AC0
                case default:
                {
// switch_1AC0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B38
// lab_1B38
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1AC0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B38
                }
                case 0x1:
                {
// switch_1AC0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B38
                }
                case 0x2:
                {
// switch_1AC0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B38
                }
                case 0x3:
                {
// switch_1AC0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B38
                }
                case 0x4:
                {
// switch_1AC0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B38
                }
                case 0x5:
                {
// switch_1AC0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B38
                }
            }
        }
    }
}
// fun_1C70
fun_1C70() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09D8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D18
    pri = 1;
    return pri;
// lab_1D18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C70(var_8)
    arg_2 = pri;
// lab_1DB0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1550(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    OP_JUMP lab_1E28
// lab_1E28
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E68
    pri = 0;
    return pri;
// lab_1E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E28
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    var_8 = 0;
    pri = fun_1E10()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F58
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F58
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
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
// fun_2000
fun_2000() {
    OP_JUMP lab_2018
// lab_2018
    pri = EvCameraMoveWait_()
    OP_JZER lab_2050
    pri = 0;
    return pri;
// lab_2050
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2018
    pri = 0;
    return pri;
}
// fun_2090
fun_2090() {
    pri = arg_5;
    OP_JNZ lab_20C8
    var_8 = 0;
    pri = fun_1010()
// lab_20C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2118
    OP_CONST_S -8, -1
// lab_2118
    pri = arg_1;
    switch (pri) {
// switch_3BD0
        case default:
        {
// switch_3BD0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4078
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09D8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4078
            pri = 1;
            OP_JUMP lab_4080
// lab_4078
            pri = 0;
// lab_4080
            OP_JZER lab_40D0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4328
// lab_40D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4138
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4138
            pri = 1;
            OP_JUMP lab_4140
// lab_4138
            pri = 0;
// lab_4140
            OP_JZER lab_42C8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D8(var_24, var_16)
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
            OP_JUMP lab_4328
// lab_42C8
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_4328
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4398
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4398
            var_8 = 0;
            pri = fun_1050()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3BD0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1:
        {
// switch_3BD0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2:
        {
// switch_3BD0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3:
        {
// switch_3BD0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x4:
        {
// switch_3BD0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x5:
        {
// switch_3BD0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0998(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D38(var_40)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x6:
        {
// switch_3BD0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x7:
        {
// switch_3BD0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x8:
        {
// switch_3BD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x9:
        {
// switch_3BD0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xa:
        {
// switch_3BD0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xb:
        {
// switch_3BD0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xc:
        {
// switch_3BD0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xd:
        {
// switch_3BD0_case_0xd
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xe:
        {
// switch_3BD0_case_0xe
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0xf:
        {
// switch_3BD0_case_0xf
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x10:
        {
// switch_3BD0_case_0x10
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x11:
        {
// switch_3BD0_case_0x11
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x12:
        {
// switch_3BD0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x13:
        {
// switch_3BD0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x14:
        {
// switch_3BD0_case_0x14
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x15:
        {
// switch_3BD0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x16:
        {
// switch_3BD0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x17:
        {
// switch_3BD0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x18:
        {
// switch_3BD0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x19:
        {
// switch_3BD0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1a:
        {
// switch_3BD0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1b:
        {
// switch_3BD0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1c:
        {
// switch_3BD0_case_0x1c
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1d:
        {
// switch_3BD0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1e:
        {
// switch_3BD0_case_0x1e
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x1f:
        {
// switch_3BD0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x20:
        {
// switch_3BD0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x21:
        {
// switch_3BD0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x22:
        {
// switch_3BD0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x23:
        {
// switch_3BD0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x24:
        {
// switch_3BD0_case_0x24
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x25:
        {
// switch_3BD0_case_0x25
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x26:
        {
// switch_3BD0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x27:
        {
// switch_3BD0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x28:
        {
// switch_3BD0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x29:
        {
// switch_3BD0_case_0x29
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2a:
        {
// switch_3BD0_case_0x2a
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2b:
        {
// switch_3BD0_case_0x2b
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2c:
        {
// switch_3BD0_case_0x2c
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2d:
        {
// switch_3BD0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2e:
        {
// switch_3BD0_case_0x2e
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x2f:
        {
// switch_3BD0_case_0x2f
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x30:
        {
// switch_3BD0_case_0x30
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x31:
        {
// switch_3BD0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x32:
        {
// switch_3BD0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x33:
        {
// switch_3BD0_case_0x33
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x34:
        {
// switch_3BD0_case_0x34
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x35:
        {
// switch_3BD0_case_0x35
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x36:
        {
// switch_3BD0_case_0x36
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x37:
        {
// switch_3BD0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x38:
        {
// switch_3BD0_case_0x38
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
            pri = fun_0D70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x39:
        {
// switch_3BD0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3a:
        {
// switch_3BD0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3b:
        {
// switch_3BD0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3c:
        {
// switch_3BD0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3d:
        {
// switch_3BD0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
        case 0x3e:
        {
// switch_3BD0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0998(var_24, var_16, var_8)
            OP_JUMP switch_3BD0_case_default
        }
    }
}
// fun_43C8
fun_43C8() {
    pri = arg_4;
    OP_JNZ lab_4400
    var_8 = 0;
    pri = fun_1010()
// lab_4400
    pri = arg_1;
    switch (pri) {
// switch_57D8
        case default:
        {
// switch_57D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1248(var_264)
            OP_JZER lab_5DA0
            pri = arg_3;
            switch (pri) {
// switch_5D48
                case default:
                {
// switch_5D48_case_default
                    OP_JUMP lab_6058
// lab_6058
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_60C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_60C8
                    var_8 = 0;
                    pri = fun_1050()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5D48_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D48_case_default
                }
                case 0x2:
                {
// switch_5D48_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D48_case_default
                }
                case 0x3:
                {
// switch_5D48_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D48_case_default
                }
            }
// lab_5DA0
            pri = arg_1;
            OP_JZER lab_5DF0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5DF0
            pri = 0;
            OP_JUMP lab_5DF8
// lab_5DF0
            pri = 1;
// lab_5DF8
            OP_JZER lab_5E60
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09D8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E60
            pri = 1;
            OP_JUMP lab_5E68
// lab_5E60
            pri = 0;
// lab_5E68
            OP_JZER lab_5EB8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6058
// lab_5EB8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5F20
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6058
// lab_5F20
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D8(var_24, var_16)
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
// switch_57D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1:
        {
// switch_57D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2:
        {
// switch_57D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3:
        {
// switch_57D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x4:
        {
// switch_57D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x5:
        {
// switch_57D8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0998(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D38(var_40)
            OP_JUMP switch_57D8_case_default
        }
        case 0x6:
        {
// switch_57D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x7:
        {
// switch_57D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x8:
        {
// switch_57D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x9:
        {
// switch_57D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xa:
        {
// switch_57D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xb:
        {
// switch_57D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xc:
        {
// switch_57D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xd:
        {
// switch_57D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xe:
        {
// switch_57D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0xf:
        {
// switch_57D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x10:
        {
// switch_57D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x11:
        {
// switch_57D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x12:
        {
// switch_57D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x13:
        {
// switch_57D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x14:
        {
// switch_57D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x15:
        {
// switch_57D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x16:
        {
// switch_57D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x17:
        {
// switch_57D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x18:
        {
// switch_57D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x19:
        {
// switch_57D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1a:
        {
// switch_57D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1b:
        {
// switch_57D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1c:
        {
// switch_57D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1d:
        {
// switch_57D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1e:
        {
// switch_57D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x1f:
        {
// switch_57D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x20:
        {
// switch_57D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x21:
        {
// switch_57D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x22:
        {
// switch_57D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x23:
        {
// switch_57D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x24:
        {
// switch_57D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x25:
        {
// switch_57D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x26:
        {
// switch_57D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x27:
        {
// switch_57D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x28:
        {
// switch_57D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x29:
        {
// switch_57D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2a:
        {
// switch_57D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2b:
        {
// switch_57D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2c:
        {
// switch_57D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2d:
        {
// switch_57D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2e:
        {
// switch_57D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x2f:
        {
// switch_57D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x30:
        {
// switch_57D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x31:
        {
// switch_57D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x32:
        {
// switch_57D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x33:
        {
// switch_57D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x34:
        {
// switch_57D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x35:
        {
// switch_57D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x36:
        {
// switch_57D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x37:
        {
// switch_57D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x38:
        {
// switch_57D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x39:
        {
// switch_57D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3a:
        {
// switch_57D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3b:
        {
// switch_57D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3c:
        {
// switch_57D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3d:
        {
// switch_57D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
        case 0x3e:
        {
// switch_57D8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0998(var_24, var_16, var_8)
            OP_JUMP switch_57D8_case_default
        }
    }
}
// fun_60F8
fun_60F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6308(var_16, var_8)
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
    OP_JZER lab_62F0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_62F0
    pri = 0;
    return pri;
}
// fun_6308
fun_6308() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0998(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6350
fun_6350() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_63D8
// lab_63D8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6558
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6548
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6498
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6498
    pri = 0;
    OP_JUMP lab_64A0
// lab_6558
    pri = 0;
    return pri;
// lab_6548
    OP_JUMP lab_63D0
// lab_63D0
    OP_INC_P_S -936
// lab_6498
    pri = 1;
// lab_64A0
    OP_JZER lab_6518
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6510
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6518
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6510
}
// fun_6578
fun_6578() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6610
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_14F0()
// lab_6610
    pri = arg_4;
    OP_JZER lab_6648
    var_8 = 1;
    var_16 = 8;
    pri = fun_1518(var_8)
// lab_6648
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_66A0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_66A0
    pri = 0;
    OP_JUMP lab_66A8
// lab_66A0
    pri = 1;
// lab_66A8
    OP_JZER lab_6770
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6770
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6748
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1430(var_32, var_24)
    OP_JUMP lab_6770
// lab_6770
    pri = arg_2;
    OP_JZER lab_6848
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6818
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10E8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0768(var_40)
    OP_JUMP lab_6848
// lab_6848
    pri = arg_3;
    OP_JZER lab_6880
    var_8 = 1;
    var_16 = 8;
    pri = fun_14B8(var_8)
// lab_6880
    pri = 0;
    return pri;
// lab_6818
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10E8(var_16, var_8)
// lab_6748
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1430(var_16, var_8)
}
// fun_6890
fun_6890() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6350(var_24)
    pri = 0;
    return pri;
}
// fun_68F8
fun_68F8() {
    pri = g_mode;
    switch (pri) {
// switch_69B8
        case default:
        {
// switch_69B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6A00
// lab_6A00
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_69B8_case_0x0
            var_8 = 0;
            pri = fun_6A10()
            OP_JUMP lab_6A00
        }
        case 0x2704ad2ae5c8a74e:
        {
// switch_69B8_case_0x2704ad2ae5c8a74e
            var_8 = 0;
            pri = fun_84E8()
            OP_JUMP lab_6A00
        }
        case 0x4faf0b2783b4d1f2:
        {
// switch_69B8_case_0x4faf0b2783b4d1f2
            var_8 = 0;
            pri = fun_85D8()
            OP_JUMP lab_6A00
        }
    }
}
// fun_6A10
fun_6A10() {
    pri = 0;
    return pri;
}
// fun_6A28
fun_6A28() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6578(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6A80
fun_6A80() {
    pri = 0;
    return pri;
}
// fun_6A98
fun_6A98() {
    var_8 = 0;
    pri = fun_04D8()
    pri = 0;
    return pri;
}
// fun_6AC8
fun_6AC8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = -7270143436548576266;
    var_32 = 8;
    pri = fun_04A8(var_24)
    var_40 = 6647385320559237855;
    var_48 = 8;
    pri = fun_04A8(var_40)
    var_56 = 0;
    pri = fun_04D8()
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C 4640537203540230144, 4655600512840761344, 4653507042701475840, 6647385320559237855
    var_80 = 48;
    pri = fun_06D0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4640537203540230144, 4655587318701228032, 4652662617771343872, -7270143436548576266
    var_104 = 48;
    pri = fun_06D0(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 23448;
    pri = SoundPostEvent(var_112)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 101;
    var_152 = -1;
    OP_PUSH2_C 6192341817090942471, 6647385320559237855
    var_160 = 56;
    pri = fun_1D60(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1EA8(var_168)
    var_184 = 0;
    pri = fun_1F68()
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    OP_PUSH2_C 6647385320559237855, 8802641224559852288
    var_224 = 48;
    pri = fun_0818(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 8802641224559852288;
    var_240 = 8;
    pri = fun_0870(var_232)
    var_248 = 1;
    var_256 = 0;
    var_264 = 23400;
    var_272 = 8;
    var_280 = 32;
    pri = fun_02E0(var_272, var_264, var_256, var_248)
    var_288 = 0;
    pri = fun_0350()
    var_296 = 0;
    var_304 = 4631459635541311488;
    var_312 = 3;
    OP_PUSH5_C 4653123533045707571, 4636437520504439439, 4653443490929390387, 4655210713978482196, 4640478445638841795
    var_320 = 4653445118206599496;
    var_328 = 40;
    pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 0;
    pri = fun_2000()
    var_344 = 30;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 0;
    var_368 = 4629897449420567347;
    var_376 = 0;
    OP_PUSH5_C 4653236035075461612, 4636115231656105738, 4653779237800048067, 4654176645282791424, 4637668973527548559
    var_384 = 4654945379832467292;
    var_392 = 1;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 0;
    pri = fun_2000()
    var_408 = 1;
    var_416 = 1;
    OP_PUSH4_C 4634626229029306368, 4652992471259676672, 4653590605585186816, 6647385320559237855
    var_424 = 48;
    pri = fun_06D0(var_416, var_408, var_400, var_392, var_384, var_376)
    var_432 = 1;
    var_440 = 1;
    OP_PUSH4_C 4636033603912859648, 4653405887631720448, 4653146402887565312, -7270143436548576266
    var_448 = 48;
    pri = fun_06D0(var_440, var_432, var_424, var_416, var_408, var_400)
    var_456 = 1;
    var_464 = 1;
    OP_PUSH3_C 4653360147948004966, 4654345310366492262, 8802641224559852288
    var_472 = 40;
    pri = fun_0680(var_464, var_456, var_448, var_440, var_432)
    var_480 = 1;
    OP_PUSH2_C 6647385320559237855, 8802641224559852288
    var_488 = 24;
    pri = fun_0728(var_480, var_472, var_464)
    var_496 = 23608;
    var_504 = 8;
    var_512 = 16;
    pri = fun_0280(var_504, var_496)
    var_520 = 0;
    pri = fun_0350()
    var_528 = 1;
    var_536 = 1;
    var_544 = -1;
    OP_PUSH2_C 6647385320559237855, -7270143436548576266
    var_552 = 40;
    pri = fun_1090(var_544, var_536, var_528, var_520, var_512)
    var_560 = 0;
    var_568 = 3;
    var_576 = 2;
    var_584 = 100;
    var_592 = -1;
    OP_PUSH2_C 6577642990799971598, -7270143436548576266
    var_600 = 56;
    pri = fun_1D60(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = -7270143436548576266;
    var_616 = 8;
    pri = fun_0870(var_608)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1EA8(var_624)
    var_640 = 1;
    var_648 = 1;
    var_656 = -1;
    OP_PUSH2_C -7270143436548576266, 6647385320559237855
    var_664 = 40;
    pri = fun_1090(var_656, var_648, var_640, var_632, var_624)
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    OP_PUSH2_C -7270143436548576266, 6647385320559237855
    var_704 = 48;
    pri = fun_0818(var_696, var_688, var_680, var_672, var_664, var_656)
    var_712 = 2;
    var_720 = 8;
    var_728 = -7270143436548576266;
    var_736 = 24;
    pri = fun_11E0(var_728, var_720, var_712)
    var_744 = 1;
    var_752 = 1;
    var_760 = -1;
    var_768 = -1;
    var_776 = 0;
    var_784 = 1;
    var_792 = -7270143436548576266;
    var_800 = 56;
    pri = fun_2090(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    OP_PUSH2_C 6577641891288343387, -7270143436548576266
    var_848 = 56;
    pri = fun_1D60(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 1;
    var_864 = 8;
    pri = fun_1EA8(var_856)
    var_872 = 0;
    pri = fun_1F68()
    var_880 = 6647385320559237855;
    var_888 = 8;
    pri = fun_0870(var_880)
    var_896 = 1;
    var_904 = 3;
    var_912 = 0;
    var_920 = 1;
    var_928 = -7270143436548576266;
    var_936 = 40;
    pri = fun_43C8(var_928, var_920, var_912, var_904, var_896)
    var_944 = 1;
    var_952 = 1;
    var_960 = -1;
    OP_PUSH2_C 8802641224559852288, -7270143436548576266
    var_968 = 40;
    pri = fun_1090(var_960, var_952, var_944, var_936, var_928)
    var_976 = 1;
    var_984 = 1;
    var_992 = -1;
    var_1000 = -1;
    var_1008 = 0;
    var_1016 = 8;
    var_1024 = -7270143436548576266;
    var_1032 = 56;
    pri = fun_2090(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 2;
    var_1048 = -7270143436548576266;
    var_1056 = 16;
    pri = fun_1128(var_1048, var_1040)
    var_1064 = 0;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 100;
    var_1096 = -1;
    OP_PUSH2_C 6577640791776715176, -7270143436548576266
    var_1104 = 56;
    pri = fun_1D60(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = 1;
    var_1120 = 8;
    pri = fun_1EA8(var_1112)
    var_1128 = 0;
    pri = fun_1F68()
    var_1136 = -7270143436548576266;
    var_1144 = 8;
    pri = fun_11A8(var_1136)
    var_1152 = 23656;
    var_1160 = -7270143436548576266;
    var_1168 = 16;
    pri = fun_0C10(var_1160, var_1152)
    var_1176 = 1;
    var_1184 = 3;
    var_1192 = 0;
    var_1200 = 8;
    var_1208 = -7270143436548576266;
    var_1216 = 40;
    pri = fun_43C8(var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1224 = -7270143436548576266;
    var_1232 = 8;
    pri = fun_0A10(var_1224)
    var_1240 = 1;
    var_1248 = 1;
    var_1256 = -1;
    var_1264 = -1;
    var_1272 = 0;
    var_1280 = 8;
    var_1288 = 6647385320559237855;
    var_1296 = 56;
    pri = fun_2090(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 1;
    var_1320 = -1;
    OP_PUSH2_C 6647385320559237855, -7270143436548576266
    var_1328 = 40;
    pri = fun_1090(var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1336 = 0;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 100;
    var_1368 = -1;
    OP_PUSH2_C 6192342916602570682, 6647385320559237855
    var_1376 = 56;
    pri = fun_1D60(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 1;
    var_1392 = 8;
    pri = fun_1EA8(var_1384)
    var_1400 = 1;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 8;
    var_1432 = 6647385320559237855;
    var_1440 = 40;
    pri = fun_43C8(var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1448 = 6647385320559237855;
    var_1456 = 8;
    pri = fun_0A10(var_1448)
    var_1464 = -1;
    var_1472 = 6647385320559237855;
    var_1480 = 16;
    pri = fun_10E8(var_1472, var_1464)
    var_1488 = 0;
    var_1496 = 0;
    var_1504 = 0;
    var_1512 = 0;
    OP_PUSH2_C 8802641224559852288, 6647385320559237855
    var_1520 = 48;
    pri = fun_0818(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1528 = 1;
    var_1536 = 1;
    var_1544 = -1;
    OP_PUSH2_C 6647385320559237855, 8802641224559852288
    var_1552 = 40;
    pri = fun_1090(var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1560 = 0;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 100;
    var_1592 = -1;
    OP_PUSH2_C 6192344016114198893, 6647385320559237855
    var_1600 = 56;
    pri = fun_1D60(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_1EA8(var_1608)
    var_1624 = 0;
    pri = fun_1F68()
    var_1632 = -1;
    var_1640 = -7270143436548576266;
    var_1648 = 16;
    pri = fun_10E8(var_1640, var_1632)
    var_1656 = 6647385320559237855;
    var_1664 = 8;
    pri = fun_0A10(var_1656)
    var_1672 = -1;
    var_1680 = 8802641224559852288;
    var_1688 = 16;
    pri = fun_10E8(var_1680, var_1672)
    var_1696 = 6647385320559237855;
    var_1704 = 8;
    pri = fun_0870(var_1696)
    var_1712 = 1;
    var_1720 = 0;
    var_1728 = 4641240890982006784;
    var_1736 = 0;
    var_1744 = 0;
    OP_PUSH4_C 4652878122050387968, 4654874835166429184, 4611686018427387904, 6647385320559237855
    var_1752 = 72;
    pri = fun_07A0(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1760 = 15;
    var_1768 = 8;
    pri = fun_0060(var_1760)
    var_1776 = 1;
    var_1784 = 0;
    var_1792 = 4641240890982006784;
    var_1800 = 0;
    var_1808 = 0;
    OP_PUSH4_C 4653379499352653824, 4655139157761746534, 4607182418800017408, 8802641224559852288
    var_1816 = 72;
    pri = fun_07A0(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1824 = 30;
    var_1832 = 8;
    pri = fun_0060(var_1824)
    var_1840 = 2;
    var_1848 = 5;
    var_1856 = -7270143436548576266;
    var_1864 = 24;
    pri = fun_11E0(var_1856, var_1848, var_1840)
    var_1872 = 0;
    var_1880 = 1;
    var_1888 = -7270143436548576266;
    var_1896 = 24;
    pri = fun_60F8(var_1888, var_1880, var_1872)
    var_1904 = 1;
    var_1912 = 8;
    pri = fun_0060(var_1904)
    var_1920 = -7270143436548576266;
    var_1928 = 8;
    pri = fun_0A10(var_1920)
    var_1936 = 50;
    var_1944 = 8;
    pri = fun_0060(var_1936)
    var_1952 = 1;
    var_1960 = 0;
    var_1968 = 23400;
    var_1976 = 8;
    var_1984 = 32;
    pri = fun_02E0(var_1976, var_1968, var_1960, var_1952)
    var_1992 = 0;
    pri = fun_0350()
    var_2000 = 23832;
    pri = SoundPostEvent(var_2000)
    var_2008 = 6647385320559237855;
    var_2016 = 8;
    pri = fun_0870(var_2008)
    var_2024 = 8802641224559852288;
    var_2032 = 8;
    pri = fun_0870(var_2024)
    var_2040 = 8802641224559852288;
    var_2048 = 8;
    pri = fun_0870(var_2040)
    var_2056 = 6647385320559237855;
    var_2064 = 8;
    pri = fun_0870(var_2056)
    var_2072 = 0;
    var_2080 = 1;
    var_2088 = 1;
    var_2096 = 0;
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 23992;
    var_2128 = 56;
    pri = fun_1F98(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    pri = 0;
    return pri;
}
// fun_7C68
fun_7C68() {
    pri = 0;
    return pri;
}
// fun_7C80
fun_7C80() {
    var_8 = -7270143436548576266;
    var_16 = 8;
    pri = fun_0628(var_8)
    var_24 = 6647385320559237855;
    var_32 = 8;
    pri = fun_0628(var_24)
    var_40 = 1460;
    var_48 = 8;
    pri = fun_6890(var_40)
    var_56 = -5896533038610949627;
    pri = VanishFlagSet(var_56)
    var_64 = 6155949791004856836;
    pri = VanishFlagSet(var_64)
    var_72 = 6086521948512369532;
    pri = VanishFlagReset(var_72)
    var_80 = 1854599915766895833;
    pri = VanishFlagReset(var_80)
    var_88 = 7506713967005848083;
    pri = FlagSet(var_88)
    var_96 = 5501743159805903958;
    pri = FlagReset(var_96)
    var_104 = 7432975670781276955;
    pri = VanishFlagSet(var_104)
    var_112 = 7432977869804533377;
    pri = VanishFlagSet(var_112)
    var_120 = 1452431273728693011;
    pri = VanishFlagSet(var_120)
    var_128 = 7432981168339418010;
    pri = VanishFlagSet(var_128)
    var_136 = 1151691026885595427;
    pri = VanishFlagSet(var_136)
    var_144 = 1151689927373967216;
    pri = VanishFlagSet(var_144)
    var_152 = 1452433472751949433;
    pri = VanishFlagSet(var_152)
    var_160 = 3902380436590392612;
    pri = VanishFlagSet(var_160)
    var_168 = -2838057900622105808;
    pri = VanishFlagSet(var_168)
    var_176 = 3902379337078764401;
    pri = VanishFlagSet(var_176)
    var_184 = 3902378237567136190;
    pri = VanishFlagSet(var_184)
    var_192 = -2838055701598849386;
    pri = VanishFlagSet(var_192)
    var_200 = 1151692126397223638;
    pri = VanishFlagSet(var_200)
    var_208 = 1151704221025133959;
    pri = VanishFlagSet(var_208)
    var_216 = 1452432373240321222;
    pri = VanishFlagSet(var_216)
    var_224 = -4302912376062203493;
    pri = VanishFlagSet(var_224)
    var_232 = 1151703121513505748;
    pri = VanishFlagSet(var_232)
    var_240 = -6262522284274375690;
    pri = VanishFlagSet(var_240)
    var_248 = 157350306758072480;
    pri = VanishFlagSet(var_248)
    var_256 = 546922064245419454;
    pri = VanishFlagSet(var_256)
    var_264 = -8787185482726947913;
    pri = VanishFlagSet(var_264)
    var_272 = 1547268981296325127;
    pri = VanishFlagSet(var_272)
    var_280 = -4302906878504062438;
    pri = VanishFlagReset(var_280)
    var_288 = -4689337920581802424;
    pri = VanishFlagReset(var_288)
    var_296 = 3902381536102020823;
    pri = VanishFlagReset(var_296)
    var_304 = 7432978969316161588;
    pri = VanishFlagReset(var_304)
    var_312 = -7103632191647310716;
    pri = VanishFlagReset(var_312)
    var_320 = -4302913475573831704;
    pri = VanishFlagReset(var_320)
    var_328 = 3902383735125277245;
    pri = VanishFlagReset(var_328)
    var_336 = 3728213071223358512;
    pri = VanishFlagReset(var_336)
    var_344 = 7116314638901664256;
    pri = VanishFlagReset(var_344)
    var_352 = 279354136510782265;
    pri = VanishFlagReset(var_352)
    var_360 = 577590369271743373;
    pri = VanishFlagReset(var_360)
    var_368 = 7469020547458231139;
    pri = VanishFlagReset(var_368)
    var_376 = -2125369913008984214;
    pri = VanishFlagReset(var_376)
    var_384 = 6172501094173624636;
    pri = VanishFlagReset(var_384)
    var_392 = 3007037875693876706;
    pri = VanishFlagReset(var_392)
    var_400 = 6664197755943220281;
    pri = FlagSet(var_400)
    pri = 0;
    return pri;
}
// fun_83E8
fun_83E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 750;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 675;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 2762211287739974860, 1413162306050941677
    var_80 = 72;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 23608;
    var_96 = 8;
    var_104 = 16;
    pri = fun_0280(var_96, var_88)
    var_112 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_84E8
fun_84E8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6A28()
    var_16 = 0;
    pri = fun_6A80()
    var_24 = 0;
    pri = fun_6A98()
    var_32 = 0;
    pri = fun_6AC8()
    var_40 = 0;
    pri = fun_7C68()
    var_48 = 0;
    pri = fun_7C80()
    var_56 = 0;
    pri = fun_83E8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_85D8
fun_85D8() {
    var_8 = 0;
    pri = fun_6A80()
    var_16 = 0;
    pri = fun_7C80()
    pri = 0;
    return pri;
}
