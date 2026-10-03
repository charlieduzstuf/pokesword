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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_05B8()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0700
fun_0700() {
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
// fun_0778
fun_0778() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10B8(var_8)
    OP_JZER lab_0898
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10E8(var_24)
    OP_JNZ lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_JUMP lab_08A8
// lab_08A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0908
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A8
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A88
// lab_0A88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10B8(var_8)
    OP_JNZ lab_0B10
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B00
    pri = 0;
    return pri;
// lab_0B10
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B58
    pri = 0;
    return pri;
// lab_0B58
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C00(var_8)
    pri = 0;
    return pri;
// lab_0BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A88
    pri = 0;
    return pri;
// lab_0B00
    OP_JUMP lab_0B58
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C38
fun_0C38() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C88
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10B8(var_8)
    OP_JZER lab_0DB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE0
    OP_ZERO_P_S 64
// lab_0DB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF0
    OP_CONST_S 64, 1
// lab_0DF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E28
    OP_CONST_S 72, 1
// lab_0E28
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
// lab_0CE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D08
    OP_ZERO_P_S 72
// lab_0D08
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
    OP_JUMP lab_0EC8
// lab_0EC8
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1018
fun_1018() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F98(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0FD8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1118
fun_1118() {
    OP_JUMP lab_1130
// lab_1130
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11C0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_11B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    pri = 0;
    return pri;
// lab_11C0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1250
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1240
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    pri = 0;
    return pri;
// lab_1250
    pri = 0;
    return pri;
// lab_1240
    OP_JUMP lab_1260
// lab_1260
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1130
    pri = 0;
    return pri;
// lab_11B0
    OP_JUMP lab_1260
}
// fun_12A0
fun_12A0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1118(var_40)
    pri = 0;
    return pri;
}
// fun_1328
fun_1328() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1360
fun_1360() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1418
fun_1418() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1450
fun_1450() {
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
// switch_1A68
        case default:
        {
// switch_1A68_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AB0
// lab_1AB0
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
            OP_JNZ lab_1B58
            var_88 = 0;
            pri = fun_1D78()
// lab_1B58
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A68_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1650
                case default:
                {
// switch_1650_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16C8
// lab_16C8
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_1650_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16C8
                }
                case 0x1:
                {
// switch_1650_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16C8
                }
                case 0x2:
                {
// switch_1650_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16C8
                }
                case 0x3:
                {
// switch_1650_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16C8
                }
                case 0x4:
                {
// switch_1650_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16C8
                }
                case 0x5:
                {
// switch_1650_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16C8
                }
            }
        }
        case 0x65:
        {
// switch_1A68_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1808
                case default:
                {
// switch_1808_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1880
// lab_1880
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_1808_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1880
                }
                case 0x1:
                {
// switch_1808_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1880
                }
                case 0x2:
                {
// switch_1808_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1880
                }
                case 0x3:
                {
// switch_1808_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1880
                }
                case 0x4:
                {
// switch_1808_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1880
                }
                case 0x5:
                {
// switch_1808_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1880
                }
            }
        }
        case 0x66:
        {
// switch_1A68_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19C0
                case default:
                {
// switch_19C0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A38
// lab_1A38
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_19C0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A38
                }
                case 0x1:
                {
// switch_19C0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A38
                }
                case 0x2:
                {
// switch_19C0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A38
                }
                case 0x3:
                {
// switch_19C0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A38
                }
                case 0x4:
                {
// switch_19C0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A38
                }
                case 0x5:
                {
// switch_19C0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A38
                }
            }
        }
    }
}
// fun_1B70
fun_1B70() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1450(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C80
    pri = 1;
    return pri;
// lab_1C80
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CC8
fun_1CC8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BD8(var_8)
    arg_2 = pri;
// lab_1D18
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1450(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    OP_JUMP lab_1D90
// lab_1D90
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DD0
    pri = 0;
    return pri;
// lab_1DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D90
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    var_8 = 0;
    pri = fun_1D78()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EC0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1EC0
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
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
// fun_1F68
fun_1F68() {
    OP_JUMP lab_1F80
// lab_1F80
    pri = EvCameraMoveWait_()
    OP_JZER lab_1FB8
    pri = 0;
    return pri;
// lab_1FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F80
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2060(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_20B8()
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20B8
fun_20B8() {
    OP_JUMP lab_20D0
// lab_20D0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2128
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2138
// lab_2128
    pri = 0;
    return pri;
// lab_2138
    OP_JUMP lab_20D0
    pri = 0;
    return pri;
}
// fun_2158
fun_2158() {
    pri = arg_5;
    OP_JNZ lab_2190
    var_8 = 0;
    pri = fun_0ED8()
// lab_2190
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_21E0
    OP_CONST_S -8, -1
// lab_21E0
    pri = arg_1;
    switch (pri) {
// switch_3C98
        case default:
        {
// switch_3C98_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4140
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09C8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4140
            pri = 1;
            OP_JUMP lab_4148
// lab_4140
            pri = 0;
// lab_4148
            OP_JZER lab_4198
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_43F0
// lab_4198
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4200
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4200
            pri = 1;
            OP_JUMP lab_4208
// lab_4200
            pri = 0;
// lab_4208
            OP_JZER lab_4390
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C8(var_24, var_16)
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
            OP_JUMP lab_43F0
// lab_4390
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
// lab_43F0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4460
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4460
            var_8 = 0;
            pri = fun_0F18()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3C98_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1:
        {
// switch_3C98_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2:
        {
// switch_3C98_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3:
        {
// switch_3C98_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x4:
        {
// switch_3C98_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x5:
        {
// switch_3C98_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C00(var_40)
            OP_JUMP switch_3C98_case_default
        }
        case 0x6:
        {
// switch_3C98_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x7:
        {
// switch_3C98_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x8:
        {
// switch_3C98_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x9:
        {
// switch_3C98_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0xa:
        {
// switch_3C98_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0xb:
        {
// switch_3C98_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0xc:
        {
// switch_3C98_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0xd:
        {
// switch_3C98_case_0xd
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0xe:
        {
// switch_3C98_case_0xe
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0xf:
        {
// switch_3C98_case_0xf
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x10:
        {
// switch_3C98_case_0x10
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x11:
        {
// switch_3C98_case_0x11
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x12:
        {
// switch_3C98_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x13:
        {
// switch_3C98_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x14:
        {
// switch_3C98_case_0x14
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x15:
        {
// switch_3C98_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x16:
        {
// switch_3C98_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x17:
        {
// switch_3C98_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x18:
        {
// switch_3C98_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x19:
        {
// switch_3C98_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1a:
        {
// switch_3C98_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1b:
        {
// switch_3C98_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1c:
        {
// switch_3C98_case_0x1c
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1d:
        {
// switch_3C98_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1e:
        {
// switch_3C98_case_0x1e
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x1f:
        {
// switch_3C98_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x20:
        {
// switch_3C98_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x21:
        {
// switch_3C98_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x22:
        {
// switch_3C98_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x23:
        {
// switch_3C98_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x24:
        {
// switch_3C98_case_0x24
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x25:
        {
// switch_3C98_case_0x25
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x26:
        {
// switch_3C98_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x27:
        {
// switch_3C98_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x28:
        {
// switch_3C98_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x29:
        {
// switch_3C98_case_0x29
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2a:
        {
// switch_3C98_case_0x2a
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2b:
        {
// switch_3C98_case_0x2b
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2c:
        {
// switch_3C98_case_0x2c
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2d:
        {
// switch_3C98_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2e:
        {
// switch_3C98_case_0x2e
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x2f:
        {
// switch_3C98_case_0x2f
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x30:
        {
// switch_3C98_case_0x30
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x31:
        {
// switch_3C98_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x32:
        {
// switch_3C98_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x33:
        {
// switch_3C98_case_0x33
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x34:
        {
// switch_3C98_case_0x34
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x35:
        {
// switch_3C98_case_0x35
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x36:
        {
// switch_3C98_case_0x36
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x37:
        {
// switch_3C98_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x38:
        {
// switch_3C98_case_0x38
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
            pri = fun_0C38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C98_case_default
        }
        case 0x39:
        {
// switch_3C98_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3a:
        {
// switch_3C98_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3b:
        {
// switch_3C98_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3c:
        {
// switch_3C98_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3d:
        {
// switch_3C98_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
        case 0x3e:
        {
// switch_3C98_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            OP_JUMP switch_3C98_case_default
        }
    }
}
// fun_4490
fun_4490() {
    pri = arg_4;
    OP_JNZ lab_44C8
    var_8 = 0;
    pri = fun_0ED8()
// lab_44C8
    pri = arg_1;
    switch (pri) {
// switch_58A0
        case default:
        {
// switch_58A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_10B8(var_264)
            OP_JZER lab_5E68
            pri = arg_3;
            switch (pri) {
// switch_5E10
                case default:
                {
// switch_5E10_case_default
                    OP_JUMP lab_6120
// lab_6120
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6190
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6190
                    var_8 = 0;
                    pri = fun_0F18()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5E10_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E10_case_default
                }
                case 0x2:
                {
// switch_5E10_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E10_case_default
                }
                case 0x3:
                {
// switch_5E10_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E10_case_default
                }
            }
// lab_5E68
            pri = arg_1;
            OP_JZER lab_5EB8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5EB8
            pri = 0;
            OP_JUMP lab_5EC0
// lab_5EB8
            pri = 1;
// lab_5EC0
            OP_JZER lab_5F28
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09C8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F28
            pri = 1;
            OP_JUMP lab_5F30
// lab_5F28
            pri = 0;
// lab_5F30
            OP_JZER lab_5F80
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6120
// lab_5F80
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5FE8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6120
// lab_5FE8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C8(var_24, var_16)
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
// switch_58A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1:
        {
// switch_58A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2:
        {
// switch_58A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3:
        {
// switch_58A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x4:
        {
// switch_58A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x5:
        {
// switch_58A0_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C00(var_40)
            OP_JUMP switch_58A0_case_default
        }
        case 0x6:
        {
// switch_58A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x7:
        {
// switch_58A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x8:
        {
// switch_58A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x9:
        {
// switch_58A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xa:
        {
// switch_58A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xb:
        {
// switch_58A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xc:
        {
// switch_58A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xd:
        {
// switch_58A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xe:
        {
// switch_58A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0xf:
        {
// switch_58A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x10:
        {
// switch_58A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x11:
        {
// switch_58A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x12:
        {
// switch_58A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x13:
        {
// switch_58A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x14:
        {
// switch_58A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x15:
        {
// switch_58A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x16:
        {
// switch_58A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x17:
        {
// switch_58A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x18:
        {
// switch_58A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x19:
        {
// switch_58A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1a:
        {
// switch_58A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1b:
        {
// switch_58A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1c:
        {
// switch_58A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1d:
        {
// switch_58A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1e:
        {
// switch_58A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x1f:
        {
// switch_58A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x20:
        {
// switch_58A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x21:
        {
// switch_58A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x22:
        {
// switch_58A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x23:
        {
// switch_58A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x24:
        {
// switch_58A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x25:
        {
// switch_58A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x26:
        {
// switch_58A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x27:
        {
// switch_58A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x28:
        {
// switch_58A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x29:
        {
// switch_58A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2a:
        {
// switch_58A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2b:
        {
// switch_58A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2c:
        {
// switch_58A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2d:
        {
// switch_58A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2e:
        {
// switch_58A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x2f:
        {
// switch_58A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x30:
        {
// switch_58A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x31:
        {
// switch_58A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x32:
        {
// switch_58A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x33:
        {
// switch_58A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x34:
        {
// switch_58A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x35:
        {
// switch_58A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x36:
        {
// switch_58A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x37:
        {
// switch_58A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x38:
        {
// switch_58A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x39:
        {
// switch_58A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3a:
        {
// switch_58A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3b:
        {
// switch_58A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3c:
        {
// switch_58A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3d:
        {
// switch_58A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
        case 0x3e:
        {
// switch_58A0_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0988(var_24, var_16, var_8)
            OP_JUMP switch_58A0_case_default
        }
    }
}
// fun_61C0
fun_61C0() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6248
// lab_6248
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_63C8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_63B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6308
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6308
    pri = 0;
    OP_JUMP lab_6310
// lab_63C8
    pri = 0;
    return pri;
// lab_63B8
    OP_JUMP lab_6240
// lab_6240
    OP_INC_P_S -936
// lab_6308
    pri = 1;
// lab_6310
    OP_JZER lab_6388
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6380
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6388
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6380
}
// fun_63E8
fun_63E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6480
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1360()
// lab_6480
    pri = arg_4;
    OP_JZER lab_64B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1418(var_8)
// lab_64B8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6510
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6510
    pri = 0;
    OP_JUMP lab_6518
// lab_6510
    pri = 1;
// lab_6518
    OP_JZER lab_65E0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_65E0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_65B8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_12A0(var_32, var_24)
    OP_JUMP lab_65E0
// lab_65E0
    pri = arg_2;
    OP_JZER lab_66B8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6688
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F58(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06C8(var_40)
    OP_JUMP lab_66B8
// lab_66B8
    pri = arg_3;
    OP_JZER lab_66F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1328(var_8)
// lab_66F0
    pri = 0;
    return pri;
// lab_6688
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F58(var_16, var_8)
// lab_65B8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_12A0(var_16, var_8)
}
// fun_6700
fun_6700() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_61C0(var_24)
    pri = 0;
    return pri;
}
// fun_6768
fun_6768() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_68E8(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionX_(var_64)
    var_72 = pri;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_05E0(var_80, var_72, var_64, var_56, var_48)
    var_96 = 23280;
    var_104 = 23224;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1388(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_6870
fun_6870() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_68E8(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_13D8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_68E8
fun_68E8() {
    pri = arg_0;
    OP_JNZ lab_6930
    var_8 = 23336;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_6930
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6978
    var_8 = 23488;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_6978
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 23640;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_69C0
fun_69C0() {
    pri = g_mode;
    switch (pri) {
// switch_6A80
        case default:
        {
// switch_6A80_case_default
            pri = CommandNOP()
            OP_JUMP lab_6AC8
// lab_6AC8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6A80_case_0x0
            var_8 = 0;
            pri = fun_6AD8()
            OP_JUMP lab_6AC8
        }
        case 0x2ff8cc2aeaeff51f:
        {
// switch_6A80_case_0x2ff8cc2aeaeff51f
            var_8 = 0;
            pri = fun_8DE0()
            OP_JUMP lab_6AC8
        }
        case 0x570bba27878247ab:
        {
// switch_6A80_case_0x570bba27878247ab
            var_8 = 0;
            pri = fun_8ED0()
            OP_JUMP lab_6AC8
        }
    }
}
// fun_6AD8
fun_6AD8() {
    pri = 0;
    return pri;
}
// fun_6AF0
fun_6AF0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_63E8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6B48
fun_6B48() {
    pri = 0;
    return pri;
}
// fun_6B60
fun_6B60() {
    pri = 0;
    return pri;
}
// fun_6B78
fun_6B78() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_6768(var_64, var_56)
    var_80 = 1;
    var_88 = -1658347341221882014;
    var_96 = 16;
    pri = fun_6768(var_88, var_80)
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0688(var_112, var_104)
    var_128 = 1;
    var_136 = -1658347341221882014;
    var_144 = 16;
    pri = fun_0688(var_136, var_128)
    var_152 = 1;
    var_160 = 3458049540832089695;
    var_168 = 16;
    pri = fun_0688(var_160, var_152)
    var_176 = 1;
    var_184 = 3458048441320461484;
    var_192 = 16;
    pri = fun_0688(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672766088373600256, 4671226772094713856, 8802641224559852288
    var_216 = 48;
    pri = fun_0630(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C -4589097651546357760, 4671226772094713856, 4671268003780755456, -1658347341221882014
    var_240 = 48;
    pri = fun_0630(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 2;
    var_256 = 2;
    var_264 = 8802641224559852288;
    var_272 = 24;
    pri = fun_1050(var_264, var_256, var_248)
    var_280 = 8;
    var_288 = 8;
    var_296 = -1658347341221882014;
    var_304 = 24;
    pri = fun_1050(var_296, var_288, var_280)
    var_312 = 1;
    var_320 = 1;
    var_328 = -1;
    var_336 = -1;
    var_344 = 0;
    var_352 = 21;
    var_360 = -1658347341221882014;
    var_368 = 56;
    pri = fun_2158(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 0;
    var_384 = 60;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 23648;
    pri = SoundSetRTPC(var_400, var_392, var_384)
    var_408 = 15;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 1;
    var_432 = 0;
    var_440 = 0;
    var_448 = 160;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_456 = 48;
    pri = fun_0778(var_448, var_440, var_432, var_424, var_416, var_408)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_464 = 16;
    pri = fun_1FF8(var_456, var_448)
    var_472 = 0;
    var_480 = 1;
    var_488 = 150;
    pri = float(var_488)
    var_496 = pri;
    var_504 = 4619567317775286272;
    var_512 = 32;
    pri = fun_2060(var_504, var_496, var_488, var_480)
    var_520 = 0;
    var_528 = 4626857519672092262;
    var_536 = 0;
    OP_PUSH5_C 4672690136859132559, 4631701704021282652, 4671236904094363812, 4672795365619468861, 4631621483652920115
    var_544 = 4671239900263549501;
    var_552 = 1;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    pri = fun_1F68()
    var_568 = 0;
    var_576 = 4626857519672092262;
    var_584 = 0;
    OP_PUSH5_C 4672474830492181463, 4631857922633357066, 4671233682525294428, 4672580059252517765, 4631781924389645189
    var_592 = 4671236678694480118;
    var_600 = 300;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 23784;
    var_616 = 8;
    var_624 = 16;
    pri = fun_0280(var_616, var_608)
    var_632 = 0;
    pri = fun_0350()
    var_640 = 45;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = 0;
    var_664 = 60;
    var_672 = 1000;
    pri = float(var_672)
    var_680 = pri;
    var_688 = 4610785298501913805;
    var_696 = 32;
    pri = fun_2060(var_688, var_680, var_672, var_664)
    var_704 = 90;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 0;
    var_728 = 1;
    var_736 = 200;
    pri = float(var_736)
    var_744 = pri;
    var_752 = 4609434218613702656;
    var_760 = 32;
    pri = fun_2060(var_752, var_744, var_736, var_728)
    var_768 = 0;
    var_776 = 4629615974443856691;
    var_784 = 0;
    OP_PUSH5_C 4671173440283208581, 4638698468254867784, 4671269380919069245, 4671278405160754217, 4638640062197200323
    var_792 = 4671261354484186481;
    var_800 = 1;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 0;
    pri = fun_1F68()
    var_816 = 2;
    var_824 = 240;
    var_832 = 130;
    pri = float(var_832)
    var_840 = pri;
    var_848 = 4609434218613702656;
    var_856 = 32;
    pri = fun_2060(var_848, var_840, var_832, var_824)
    var_864 = 0;
    var_872 = 4629615974443856691;
    var_880 = 2;
    OP_PUSH5_C 4671159971265768325, 4639328268515257876, 4671270414459999355, 4671264936143313961, 4639299065486424146
    var_888 = 4671262385276337521;
    var_896 = 240;
    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = 60;
    var_912 = 8;
    pri = fun_0060(var_904)
    var_920 = 0;
    var_928 = 23832;
    var_936 = -1658347341221882014;
    var_944 = 24;
    pri = fun_0948(var_936, var_928, var_920)
    var_952 = 2;
    var_960 = 2;
    var_968 = -1658347341221882014;
    var_976 = 24;
    pri = fun_1050(var_968, var_960, var_952)
    var_984 = 90;
    var_992 = 8;
    pri = fun_0060(var_984)
    var_1000 = 8802641224559852288;
    var_1008 = 8;
    pri = fun_0820(var_1000)
    var_1016 = 1;
    var_1024 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_1032 = 48;
    pri = fun_0630(var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1040 = 1;
    var_1048 = 1;
    OP_PUSH4_C -4587338432941916160, 4671226772094713856, 4671268003780755456, -1658347341221882014
    var_1056 = 48;
    pri = fun_0630(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = 0;
    var_1072 = 1;
    var_1080 = 700;
    pri = float(var_1080)
    var_1088 = pri;
    var_1096 = 4611686018427387904;
    var_1104 = 32;
    pri = fun_2060(var_1096, var_1088, var_1080, var_1072)
    var_1112 = 0;
    var_1120 = 4626857519672092262;
    var_1128 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1136 = 4671083459000370463;
    var_1144 = 1;
    pri = EvCameraMove(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 0;
    pri = fun_1F68()
    var_1160 = 0;
    var_1168 = 4626857519672092262;
    var_1176 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1184 = 4671072741510778716;
    var_1192 = 480;
    pri = EvCameraMove(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1200 = 1;
    var_1208 = 8;
    pri = fun_0060(var_1200)
    var_1216 = 1;
    var_1224 = 0;
    var_1232 = 4641240890982006784;
    var_1240 = 0;
    var_1248 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1256 = 72;
    pri = fun_0700(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1264 = 45;
    var_1272 = 8;
    pri = fun_0060(var_1264)
    var_1280 = 1;
    var_1288 = 23920;
    var_1296 = -1658347341221882014;
    var_1304 = 24;
    pri = fun_0948(var_1296, var_1288, var_1280)
    var_1312 = -1658347341221882014;
    var_1320 = 8;
    pri = fun_1018(var_1312)
    var_1328 = 8802641224559852288;
    var_1336 = 8;
    pri = fun_0820(var_1328)
    var_1344 = 0;
    var_1352 = 30;
    pri = float(var_1352)
    var_1360 = pri;
    var_1368 = 24008;
    pri = SoundSetRTPC(var_1368, var_1360, var_1352)
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 90;
    pri = float(var_1400)
    var_1408 = pri;
    var_1416 = 8802641224559852288;
    var_1424 = 40;
    pri = fun_07D0(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = 8802641224559852288;
    var_1440 = 8;
    pri = fun_0820(var_1432)
    var_1448 = 0;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 100;
    var_1480 = -1;
    OP_PUSH2_C -1243455163114515851, -1658347341221882014
    var_1488 = 56;
    pri = fun_1CC8(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1496 = 1;
    var_1504 = 8;
    pri = fun_1E10(var_1496)
    var_1512 = 0;
    var_1520 = 1;
    var_1528 = 700;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = 4611686018427387904;
    var_1552 = 32;
    pri = fun_2060(var_1544, var_1536, var_1528, var_1520)
    var_1560 = 0;
    var_1568 = 4630178924397278003;
    var_1576 = 0;
    OP_PUSH5_C 4671183693229137592, 4640460149765355602, 4671307500987204239, 4671256912457210266, 4637407201799207649
    var_1584 = 4671234130576282747;
    var_1592 = 1;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 0;
    pri = fun_1F68()
    var_1608 = 0;
    var_1616 = 4630178924397278003;
    var_1624 = 2;
    OP_PUSH5_C 4671172579915359846, 4640460149765355602, 4671290461305752781, 4671264515580116337, 4637412831298741862
    var_1632 = 4671242610559711969;
    var_1640 = 480;
    pri = EvCameraMove(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 2;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C -1243458461649400484, -1658347341221882014
    var_1688 = 56;
    pri = fun_1CC8(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 0;
    pri = fun_1D78()
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_1E10(var_1704)
    var_1720 = 0;
    var_1728 = 60;
    var_1736 = 170;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = 4611686018427387904;
    var_1760 = 32;
    pri = fun_2060(var_1752, var_1744, var_1736, var_1728)
    var_1768 = 0;
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 100;
    var_1800 = -1;
    OP_PUSH2_C -1243457362137772273, -1658347341221882014
    var_1808 = 56;
    pri = fun_1CC8(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_1E10(var_1816)
    var_1832 = 0;
    var_1840 = 1;
    var_1848 = 300;
    pri = float(var_1848)
    var_1856 = pri;
    var_1864 = 4609434218613702656;
    var_1872 = 32;
    pri = fun_2060(var_1864, var_1856, var_1848, var_1840)
    var_1880 = 0;
    var_1888 = 4630474473122824192;
    var_1896 = 0;
    OP_PUSH5_C 4671217467477563802, 4634734596895339971, 4671251340682036511, 4671248000915467141, 4634734596895339971
    var_1904 = 4671150773851001979;
    var_1912 = 1;
    pri = EvCameraMove(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1920 = 0;
    pri = fun_1F68()
    var_1928 = 0;
    var_1936 = 4630474473122824192;
    var_1944 = 2;
    OP_PUSH5_C 4671217483970238218, 4635077292679485194, 4671251293952792330, 4671247981674013655, 4636321412076546294
    var_1952 = 4671150831575362437;
    var_1960 = 240;
    pri = EvCameraMove(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1968 = 0;
    var_1976 = 3;
    var_1984 = 0;
    var_1992 = 100;
    var_2000 = -1;
    OP_PUSH2_C -1243460660672656906, -1658347341221882014
    var_2008 = 56;
    pri = fun_1CC8(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2016 = 1;
    var_2024 = 8;
    pri = fun_1E10(var_2016)
    var_2032 = 0;
    var_2040 = 1;
    var_2048 = 170;
    pri = float(var_2048)
    var_2056 = pri;
    var_2064 = 4611686018427387904;
    var_2072 = 32;
    pri = fun_2060(var_2064, var_2056, var_2048, var_2040)
    var_2080 = 0;
    var_2088 = 4631079644322752102;
    var_2096 = 0;
    OP_PUSH5_C 4671223825403551416, 4637972262814954291, 4671319914473481830, 4671227797389306757, 4638662580195337175
    var_2104 = 4671214850639889695;
    var_2112 = 1;
    pri = EvCameraMove(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2120 = 0;
    pri = fun_1F68()
    var_2128 = 0;
    var_2136 = 4631642594276173414;
    var_2144 = 2;
    OP_PUSH5_C 4671224001325411860, 4637803377828927898, 4671315211312494019, 4671227976059946271, 4638492991521869005
    var_2152 = 4671210147478901883;
    var_2160 = 240;
    pri = EvCameraMove(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2168 = 0;
    var_2176 = 3;
    var_2184 = 0;
    var_2192 = 100;
    var_2200 = -1;
    OP_PUSH2_C -1243459561161028695, -1658347341221882014
    var_2208 = 56;
    pri = fun_1CC8(var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2216 = 1;
    var_2224 = 8;
    pri = fun_1E10(var_2216)
    var_2232 = 0;
    pri = fun_1ED0()
    var_2240 = 0;
    var_2248 = 1;
    var_2256 = 200;
    pri = float(var_2256)
    var_2264 = pri;
    var_2272 = 4612811918334230528;
    var_2280 = 32;
    pri = fun_2060(var_2272, var_2264, var_2256, var_2248)
    var_2288 = 0;
    var_2296 = 4631952216750555136;
    var_2304 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2312 = 4671031446602818519;
    var_2320 = 1;
    pri = EvCameraMove(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2328 = 0;
    pri = fun_1F68()
    var_2336 = 1;
    var_2344 = 3;
    var_2352 = 0;
    var_2360 = 21;
    var_2368 = -1658347341221882014;
    var_2376 = 40;
    pri = fun_4490(var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2384 = -1658347341221882014;
    var_2392 = 8;
    pri = fun_0A00(var_2384)
    var_2400 = 0;
    var_2408 = 4631952216750555136;
    var_2416 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2424 = 4671018568572878193;
    var_2432 = 240;
    pri = EvCameraMove(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 0;
    var_2448 = 60;
    pri = float(var_2448)
    var_2456 = pri;
    var_2464 = 24144;
    pri = SoundSetRTPC(var_2464, var_2456, var_2448)
    var_2472 = 24280;
    pri = SoundPostEvent(var_2472)
    var_2480 = 30;
    var_2488 = 8;
    pri = fun_0060(var_2480)
    var_2496 = 0;
    var_2504 = 120;
    var_2512 = 850;
    pri = float(var_2512)
    var_2520 = pri;
    var_2528 = 4605380978949069210;
    var_2536 = 32;
    pri = fun_2060(var_2528, var_2520, var_2512, var_2504)
    var_2544 = 1;
    var_2552 = 0;
    var_2560 = 4641240890982006784;
    var_2568 = 0;
    var_2576 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2584 = 72;
    pri = fun_0700(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
    var_2592 = 1;
    var_2600 = 0;
    var_2608 = 4641240890982006784;
    var_2616 = 0;
    var_2624 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -1658347341221882014
    var_2632 = 72;
    pri = fun_0700(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 8802641224559852288;
    var_2648 = 8;
    pri = fun_0820(var_2640)
    var_2656 = -1658347341221882014;
    var_2664 = 8;
    pri = fun_0820(var_2656)
    var_2672 = 15;
    var_2680 = 8;
    pri = fun_0060(var_2672)
    var_2688 = 0;
    var_2696 = 0;
    var_2704 = 0;
    var_2712 = 90;
    pri = float(var_2712)
    var_2720 = pri;
    var_2728 = 8802641224559852288;
    var_2736 = 40;
    pri = fun_07D0(var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2744 = 0;
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = 270;
    pri = float(var_2768)
    var_2776 = pri;
    var_2784 = -1658347341221882014;
    var_2792 = 40;
    pri = fun_07D0(var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2800 = 30;
    var_2808 = 8;
    pri = fun_0060(var_2800)
    var_2816 = 8802641224559852288;
    var_2824 = 8;
    pri = fun_0820(var_2816)
    var_2832 = -1658347341221882014;
    var_2840 = 8;
    pri = fun_0820(var_2832)
    var_2848 = 3;
    var_2856 = 0;
    var_2864 = 101;
    var_2872 = 3701511413583733119;
    var_2880 = 32;
    pri = fun_1B70(var_2872, var_2864, var_2856, var_2848)
    var_2888 = 1;
    var_2896 = 8;
    pri = fun_1E10(var_2888)
    var_2904 = 0;
    var_2912 = 4631952216750555136;
    var_2920 = 0;
    OP_PUSH5_C 4671361121420511805, 4656428621018337116, 4671240153151223890, 4671282973631567626, 4656551986222973583
    var_2928 = 4671170045541057823;
    var_2936 = 1;
    pri = EvCameraMove(var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864)
    var_2944 = 0;
    pri = fun_1F68()
    var_2952 = 0;
    var_2960 = 4631952216750555136;
    var_2968 = 2;
    OP_PUSH5_C 4671361121420511805, 4656428621018337116, 4671240153151223890, 4671301022114937569, 4656551854281578250
    var_2976 = 4671154069637106237;
    var_2984 = 480;
    pri = EvCameraMove(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2992 = 3;
    var_3000 = 0;
    var_3008 = 101;
    var_3016 = 3701512513095361330;
    var_3024 = 32;
    pri = fun_1B70(var_3016, var_3008, var_3000, var_2992)
    var_3032 = 1;
    var_3040 = 8;
    pri = fun_1E10(var_3032)
    var_3048 = 0;
    var_3056 = 4631952216750555136;
    var_3064 = 0;
    OP_PUSH5_C 4671228341647562506, 4656759068242948915, 4671866641132835308, 4671230320768492503, 4656889712214561260
    var_3072 = 4671758572883720274;
    var_3080 = 1;
    pri = EvCameraMove(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008)
    var_3088 = 0;
    pri = fun_1F68()
    var_3096 = 0;
    var_3104 = 4629981891913580544;
    var_3112 = 2;
    OP_PUSH5_C 4671239474202793738, 4656112753317909627, 4672513613016072192, 4671241453323723735, 4656374085241599427
    var_3120 = 4672405542018178089;
    var_3128 = 240;
    pri = EvCameraMove(var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3136 = 3;
    var_3144 = 0;
    var_3152 = 101;
    var_3160 = 3701513612606989541;
    var_3168 = 32;
    pri = fun_1B70(var_3160, var_3152, var_3144, var_3136)
    var_3176 = 1;
    var_3184 = 8;
    pri = fun_1E10(var_3176)
    var_3192 = 0;
    pri = fun_1ED0()
    var_3200 = 1;
    var_3208 = 0;
    var_3216 = 24528;
    var_3224 = 8;
    var_3232 = 32;
    pri = fun_02E0(var_3224, var_3216, var_3208, var_3200)
    var_3240 = 0;
    pri = fun_0350()
    var_3248 = 0;
    var_3256 = 8802641224559852288;
    var_3264 = 16;
    pri = fun_6870(var_3256, var_3248)
    var_3272 = 1;
    var_3280 = -1658347341221882014;
    var_3288 = 16;
    pri = fun_6870(var_3280, var_3272)
    var_3296 = 0;
    var_3304 = 1;
    var_3312 = 1;
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    var_3344 = 24584;
    var_3352 = 56;
    pri = fun_1F00(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    pri = 0;
    return pri;
}
// fun_89C8
fun_89C8() {
    pri = 0;
    return pri;
}
// fun_89E0
fun_89E0() {
    var_8 = -4889189955526537819;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 4153083102117004023;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 1810;
    var_48 = 8;
    pri = fun_6700(var_40)
    var_56 = -122628567419652549;
    pri = VanishFlagSet(var_56)
    var_64 = -1748623951613131052;
    pri = VanishFlagSet(var_64)
    var_72 = 7356533311563781232;
    pri = VanishFlagSet(var_72)
    var_80 = 1483708011585131345;
    pri = VanishFlagSet(var_80)
    var_88 = -122636264001050026;
    pri = VanishFlagSet(var_88)
    var_96 = 2375970181849788458;
    pri = VanishFlagSet(var_96)
    var_104 = -8764591052235238938;
    pri = VanishFlagSet(var_104)
    var_112 = 7154490619122646225;
    pri = VanishFlagSet(var_112)
    var_120 = -4661849163373684695;
    pri = VanishFlagSet(var_120)
    var_128 = -4318590674611970841;
    pri = VanishFlagSet(var_128)
    var_136 = 2783038146703910472;
    pri = VanishFlagSet(var_136)
    var_144 = 3728213071223358512;
    pri = VanishFlagSet(var_144)
    var_152 = 7116314638901664256;
    pri = VanishFlagSet(var_152)
    var_160 = 279354136510782265;
    pri = VanishFlagSet(var_160)
    var_168 = 577590369271743373;
    pri = VanishFlagSet(var_168)
    var_176 = 7469020547458231139;
    pri = VanishFlagSet(var_176)
    var_184 = -2125369913008984214;
    pri = VanishFlagSet(var_184)
    var_192 = 6172501094173624636;
    pri = VanishFlagSet(var_192)
    var_200 = 3007037875693876706;
    pri = VanishFlagSet(var_200)
    var_208 = 6976410510322452451;
    pri = FlagSet(var_208)
    pri = 0;
    return pri;
}
// fun_8D88
fun_8D88() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 341579963762795006;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_8DE0
fun_8DE0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6AF0()
    var_16 = 0;
    pri = fun_6B48()
    var_24 = 0;
    pri = fun_6B60()
    var_32 = 0;
    pri = fun_6B78()
    var_40 = 0;
    pri = fun_89C8()
    var_48 = 0;
    pri = fun_89E0()
    var_56 = 0;
    pri = fun_8D88()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8ED0
fun_8ED0() {
    var_8 = 0;
    pri = fun_6B48()
    var_16 = 0;
    pri = fun_89E0()
    pri = 0;
    return pri;
}
