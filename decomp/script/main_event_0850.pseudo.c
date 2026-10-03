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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0500
fun_0500() {
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
// fun_0578
fun_0578() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05D0
fun_05D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E88(var_8)
    OP_JZER lab_0648
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EB8(var_24)
    OP_JNZ lab_0648
    pri = 0;
    return pri;
// lab_0648
    OP_JUMP lab_0658
// lab_0658
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0658
    pri = 0;
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07B8
    pri = 0;
    return pri;
// lab_07B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07F8
// lab_07F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E88(var_8)
    OP_JNZ lab_0880
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0880
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08C8
    pri = 0;
    return pri;
// lab_08C8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A98(var_8)
    pri = 0;
    return pri;
// lab_0928
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F8
    pri = 0;
    return pri;
// lab_0870
    OP_JUMP lab_08C8
}
// fun_0970
fun_0970() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09B8
// lab_09B8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A50
    pri = 0;
    return pri;
// lab_0A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B8
    pri = 0;
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E88(var_8)
    OP_JZER lab_0C50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B78
    OP_ZERO_P_S 64
// lab_0C50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C88
    OP_CONST_S 64, 1
// lab_0C88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CC0
    OP_CONST_S 72, 1
// lab_0CC0
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
// lab_0B78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA0
    OP_ZERO_P_S 72
// lab_0BA0
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
    OP_JUMP lab_0D60
// lab_0D60
    pri = 0;
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EE8
fun_0EE8() {
    OP_JUMP lab_0F00
// lab_0F00
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F90
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    pri = 0;
    return pri;
// lab_0F90
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1020
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1010
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    pri = 0;
    return pri;
// lab_1020
    pri = 0;
    return pri;
// lab_1010
    OP_JUMP lab_1030
// lab_1030
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F00
    pri = 0;
    return pri;
// lab_0F80
    OP_JUMP lab_1030
}
// fun_1070
fun_1070() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EE8(var_40)
    pri = 0;
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
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
// switch_17A8
        case default:
        {
// switch_17A8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17F0
// lab_17F0
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
            OP_JNZ lab_1898
            var_88 = 0;
            pri = fun_1A50()
// lab_1898
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17A8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1390
                case default:
                {
// switch_1390_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1408
// lab_1408
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1390_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1408
                }
                case 0x1:
                {
// switch_1390_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1408
                }
                case 0x2:
                {
// switch_1390_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1408
                }
                case 0x3:
                {
// switch_1390_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1408
                }
                case 0x4:
                {
// switch_1390_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1408
                }
                case 0x5:
                {
// switch_1390_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1408
                }
            }
        }
        case 0x65:
        {
// switch_17A8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1548
                case default:
                {
// switch_1548_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C0
// lab_15C0
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1548_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15C0
                }
                case 0x1:
                {
// switch_1548_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15C0
                }
                case 0x2:
                {
// switch_1548_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15C0
                }
                case 0x3:
                {
// switch_1548_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C0
                }
                case 0x4:
                {
// switch_1548_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15C0
                }
                case 0x5:
                {
// switch_1548_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15C0
                }
            }
        }
        case 0x66:
        {
// switch_17A8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1700
                case default:
                {
// switch_1700_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1778
// lab_1778
                    OP_JUMP lab_17F0
                }
                case 0x0:
                {
// switch_1700_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1778
                }
                case 0x1:
                {
// switch_1700_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1778
                }
                case 0x2:
                {
// switch_1700_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1778
                }
                case 0x3:
                {
// switch_1700_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1778
                }
                case 0x4:
                {
// switch_1700_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1778
                }
                case 0x5:
                {
// switch_1700_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1778
                }
            }
        }
    }
}
// fun_18B0
fun_18B0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0738(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1958
    pri = 1;
    return pri;
// lab_1958
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19A0
fun_19A0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18B0(var_8)
    arg_2 = pri;
// lab_19F0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1190(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A50
fun_1A50() {
    OP_JUMP lab_1A68
// lab_1A68
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AA8
    pri = 0;
    return pri;
// lab_1AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A68
    pri = 0;
    return pri;
}
// fun_1AE8
fun_1AE8() {
    var_8 = 0;
    pri = fun_1A50()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B98
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B98
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
    OP_JUMP lab_1BF0
// lab_1BF0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C28
    pri = 0;
    return pri;
// lab_1C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BF0
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    pri = arg_5;
    OP_JNZ lab_1CA0
    var_8 = 0;
    pri = fun_0D70()
// lab_1CA0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1CF0
    OP_CONST_S -8, -1
// lab_1CF0
    pri = arg_1;
    switch (pri) {
// switch_37A8
        case default:
        {
// switch_37A8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3C50
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0738(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3C50
            pri = 1;
            OP_JUMP lab_3C58
// lab_3C50
            pri = 0;
// lab_3C58
            OP_JZER lab_3CA8
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3F00
// lab_3CA8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D10
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D10
            pri = 1;
            OP_JUMP lab_3D18
// lab_3D10
            pri = 0;
// lab_3D18
            OP_JZER lab_3EA0
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
            OP_JUMP lab_3F00
// lab_3EA0
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
// lab_3F00
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3F70
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3F70
            var_8 = 0;
            pri = fun_0DB0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37A8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1:
        {
// switch_37A8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2:
        {
// switch_37A8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3:
        {
// switch_37A8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x4:
        {
// switch_37A8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x5:
        {
// switch_37A8_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A98(var_40)
            OP_JUMP switch_37A8_case_default
        }
        case 0x6:
        {
// switch_37A8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x7:
        {
// switch_37A8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x8:
        {
// switch_37A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x9:
        {
// switch_37A8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0xa:
        {
// switch_37A8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0xb:
        {
// switch_37A8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0xc:
        {
// switch_37A8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0xd:
        {
// switch_37A8_case_0xd
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xe:
        {
// switch_37A8_case_0xe
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xf:
        {
// switch_37A8_case_0xf
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x10:
        {
// switch_37A8_case_0x10
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x11:
        {
// switch_37A8_case_0x11
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x12:
        {
// switch_37A8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x13:
        {
// switch_37A8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x14:
        {
// switch_37A8_case_0x14
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x15:
        {
// switch_37A8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x16:
        {
// switch_37A8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x17:
        {
// switch_37A8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x18:
        {
// switch_37A8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x19:
        {
// switch_37A8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1a:
        {
// switch_37A8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1b:
        {
// switch_37A8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1c:
        {
// switch_37A8_case_0x1c
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1d:
        {
// switch_37A8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1e:
        {
// switch_37A8_case_0x1e
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1f:
        {
// switch_37A8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x20:
        {
// switch_37A8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x21:
        {
// switch_37A8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x22:
        {
// switch_37A8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x23:
        {
// switch_37A8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x24:
        {
// switch_37A8_case_0x24
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x25:
        {
// switch_37A8_case_0x25
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x26:
        {
// switch_37A8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x27:
        {
// switch_37A8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x28:
        {
// switch_37A8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x29:
        {
// switch_37A8_case_0x29
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2a:
        {
// switch_37A8_case_0x2a
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2b:
        {
// switch_37A8_case_0x2b
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2c:
        {
// switch_37A8_case_0x2c
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2d:
        {
// switch_37A8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2e:
        {
// switch_37A8_case_0x2e
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2f:
        {
// switch_37A8_case_0x2f
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x30:
        {
// switch_37A8_case_0x30
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x31:
        {
// switch_37A8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x32:
        {
// switch_37A8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x33:
        {
// switch_37A8_case_0x33
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x34:
        {
// switch_37A8_case_0x34
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x35:
        {
// switch_37A8_case_0x35
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x36:
        {
// switch_37A8_case_0x36
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x37:
        {
// switch_37A8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x38:
        {
// switch_37A8_case_0x38
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
            pri = fun_0AD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x39:
        {
// switch_37A8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3a:
        {
// switch_37A8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3b:
        {
// switch_37A8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3c:
        {
// switch_37A8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3d:
        {
// switch_37A8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3e:
        {
// switch_37A8_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
    }
}
// fun_3FA0
fun_3FA0() {
    pri = arg_4;
    OP_JNZ lab_3FD8
    var_8 = 0;
    pri = fun_0D70()
// lab_3FD8
    pri = arg_1;
    switch (pri) {
// switch_53B0
        case default:
        {
// switch_53B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E88(var_264)
            OP_JZER lab_5978
            pri = arg_3;
            switch (pri) {
// switch_5920
                case default:
                {
// switch_5920_case_default
                    OP_JUMP lab_5C30
// lab_5C30
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5CA0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5CA0
                    var_8 = 0;
                    pri = fun_0DB0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5920_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5920_case_default
                }
                case 0x2:
                {
// switch_5920_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5920_case_default
                }
                case 0x3:
                {
// switch_5920_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5920_case_default
                }
            }
// lab_5978
            pri = arg_1;
            OP_JZER lab_59C8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_59C8
            pri = 0;
            OP_JUMP lab_59D0
// lab_59C8
            pri = 1;
// lab_59D0
            OP_JZER lab_5A38
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0738(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A38
            pri = 1;
            OP_JUMP lab_5A40
// lab_5A38
            pri = 0;
// lab_5A40
            OP_JZER lab_5A90
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C30
// lab_5A90
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5AF8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C30
// lab_5AF8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
// switch_53B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1:
        {
// switch_53B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2:
        {
// switch_53B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3:
        {
// switch_53B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x4:
        {
// switch_53B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x5:
        {
// switch_53B0_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A98(var_40)
            OP_JUMP switch_53B0_case_default
        }
        case 0x6:
        {
// switch_53B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x7:
        {
// switch_53B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x8:
        {
// switch_53B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x9:
        {
// switch_53B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xa:
        {
// switch_53B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xb:
        {
// switch_53B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xc:
        {
// switch_53B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xd:
        {
// switch_53B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xe:
        {
// switch_53B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0xf:
        {
// switch_53B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x10:
        {
// switch_53B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x11:
        {
// switch_53B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x12:
        {
// switch_53B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x13:
        {
// switch_53B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x14:
        {
// switch_53B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x15:
        {
// switch_53B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x16:
        {
// switch_53B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x17:
        {
// switch_53B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x18:
        {
// switch_53B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x19:
        {
// switch_53B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1a:
        {
// switch_53B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1b:
        {
// switch_53B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1c:
        {
// switch_53B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1d:
        {
// switch_53B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1e:
        {
// switch_53B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x1f:
        {
// switch_53B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x20:
        {
// switch_53B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x21:
        {
// switch_53B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x22:
        {
// switch_53B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x23:
        {
// switch_53B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x24:
        {
// switch_53B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x25:
        {
// switch_53B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x26:
        {
// switch_53B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x27:
        {
// switch_53B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x28:
        {
// switch_53B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x29:
        {
// switch_53B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2a:
        {
// switch_53B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2b:
        {
// switch_53B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2c:
        {
// switch_53B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2d:
        {
// switch_53B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2e:
        {
// switch_53B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x2f:
        {
// switch_53B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x30:
        {
// switch_53B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x31:
        {
// switch_53B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x32:
        {
// switch_53B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x33:
        {
// switch_53B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x34:
        {
// switch_53B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x35:
        {
// switch_53B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x36:
        {
// switch_53B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x37:
        {
// switch_53B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x38:
        {
// switch_53B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x39:
        {
// switch_53B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3a:
        {
// switch_53B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3b:
        {
// switch_53B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3c:
        {
// switch_53B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3d:
        {
// switch_53B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
        case 0x3e:
        {
// switch_53B0_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_53B0_case_default
        }
    }
}
// fun_5CD0
fun_5CD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5EE0(var_16, var_8)
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
    OP_JZER lab_5EC8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5EC8
    pri = 0;
    return pri;
}
// fun_5EE0
fun_5EE0() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_06F8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5F28
fun_5F28() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5FB0
// lab_5FB0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6130
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6120
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6070
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6070
    pri = 0;
    OP_JUMP lab_6078
// lab_6130
    pri = 0;
    return pri;
// lab_6120
    OP_JUMP lab_5FA8
// lab_5FA8
    OP_INC_P_S -936
// lab_6070
    pri = 1;
// lab_6078
    OP_JZER lab_60F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_60E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_60F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_60E8
}
// fun_6150
fun_6150() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_61E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1130()
// lab_61E8
    pri = arg_4;
    OP_JZER lab_6220
    var_8 = 1;
    var_16 = 8;
    pri = fun_1158(var_8)
// lab_6220
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6278
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6278
    pri = 0;
    OP_JUMP lab_6280
// lab_6278
    pri = 1;
// lab_6280
    OP_JZER lab_6348
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6348
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6320
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1070(var_32, var_24)
    OP_JUMP lab_6348
// lab_6348
    pri = arg_2;
    OP_JZER lab_6420
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_63F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E48(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04C8(var_40)
    OP_JUMP lab_6420
// lab_6420
    pri = arg_3;
    OP_JZER lab_6458
    var_8 = 1;
    var_16 = 8;
    pri = fun_10F8(var_8)
// lab_6458
    pri = 0;
    return pri;
// lab_63F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E48(var_16, var_8)
// lab_6320
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1070(var_16, var_8)
}
// fun_6468
fun_6468() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5F28(var_24)
    pri = 0;
    return pri;
}
// fun_64D0
fun_64D0() {
    pri = g_mode;
    switch (pri) {
// switch_6590
        case default:
        {
// switch_6590_case_default
            pri = CommandNOP()
            OP_JUMP lab_65D8
// lab_65D8
            pri = 0;
            return pri;
        }
        case 0xbd4d471ea43cbd67:
        {
// switch_6590_case_0xbd4d471ea43cbd67
            var_8 = 0;
            pri = fun_7EA0()
            OP_JUMP lab_65D8
        }
        case 0x0:
        {
// switch_6590_case_0x0
            var_8 = 0;
            pri = fun_65E8()
            OP_JUMP lab_65D8
        }
        case 0x4f8d1121df3e2cdb:
        {
// switch_6590_case_0x4f8d1121df3e2cdb
            var_8 = 0;
            pri = fun_7DB0()
            OP_JUMP lab_65D8
        }
    }
}
// fun_65E8
fun_65E8() {
    pri = 0;
    return pri;
}
// fun_6600
fun_6600() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6150(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6658
fun_6658() {
    pri = 0;
    return pri;
}
// fun_6670
fun_6670() {
    pri = 0;
    return pri;
}
// fun_6688
fun_6688() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 23448;
    pri = SoundPostEvent(var_24)
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    OP_PUSH2_C -7748209240823921678, -6245882449017408807
    var_56 = 40;
    pri = fun_0DF0(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 0;
    OP_PUSH5_C 4667237001738793779, 4636118046405872845, 4671128764376992973, 4667984697133472154, 4636198970461677158
    var_88 = 4671178102212510351;
    var_96 = 1;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    pri = fun_1BD8()
    var_112 = 1;
    var_120 = 1;
    OP_PUSH4_C 4640537203540230144, 4668089865420668928, 4671163550176116736, 8802641224559852288
    var_128 = 48;
    pri = fun_0438(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -7012239970196284148, -7748209240823921678
    var_176 = 56;
    pri = fun_19A0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1AE8(var_184)
    var_200 = 0;
    pri = fun_1BA8()
    var_208 = 0;
    var_216 = 1;
    var_224 = -6245882449017408807;
    var_232 = 24;
    pri = fun_5CD0(var_224, var_216, var_208)
    var_240 = 1;
    var_248 = 8;
    pri = fun_0060(var_240)
    var_256 = -6245882449017408807;
    var_264 = 8;
    pri = fun_0770(var_256)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C 3853067864727382677, -6245882449017408807
    var_312 = 56;
    pri = fun_19A0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1AE8(var_320)
    var_336 = 0;
    pri = fun_1BA8()
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C -6245882449017408807, -7748209240823921678
    var_376 = 48;
    pri = fun_0578(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = -7748209240823921678;
    var_392 = 8;
    pri = fun_05D0(var_384)
    var_400 = 1;
    var_408 = 1;
    var_416 = -1;
    var_424 = -1;
    var_432 = 0;
    var_440 = 29;
    var_448 = -7748209240823921678;
    var_456 = 56;
    pri = fun_1C68(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 23608;
    var_472 = -7748209240823921678;
    var_480 = 16;
    pri = fun_0970(var_472, var_464)
    var_488 = 0;
    var_496 = 3;
    var_504 = 0;
    var_512 = 100;
    var_520 = -1;
    OP_PUSH2_C -7012236671661399515, -7748209240823921678
    var_528 = 56;
    pri = fun_19A0(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_536 = 1;
    var_544 = 8;
    pri = fun_1AE8(var_536)
    var_552 = 0;
    pri = fun_1BA8()
    var_560 = 1;
    var_568 = 3;
    var_576 = 0;
    var_584 = 29;
    var_592 = -7748209240823921678;
    var_600 = 40;
    pri = fun_3FA0(var_592, var_584, var_576, var_568, var_560)
    var_608 = -7748209240823921678;
    var_616 = 8;
    pri = fun_0770(var_608)
    var_624 = 1;
    var_632 = 1;
    var_640 = -1;
    OP_PUSH2_C -6885374073561345874, -6245882449017408807
    var_648 = 40;
    pri = fun_0DF0(var_640, var_632, var_624, var_616, var_608)
    var_656 = 0;
    var_664 = 1;
    var_672 = -6885374073561345874;
    var_680 = 24;
    pri = fun_5CD0(var_672, var_664, var_656)
    var_688 = 1;
    var_696 = 8;
    pri = fun_0060(var_688)
    var_704 = -6885374073561345874;
    var_712 = 8;
    pri = fun_0770(var_704)
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C 3350971444192535469, -6885374073561345874
    var_760 = 56;
    pri = fun_19A0(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_1AE8(var_768)
    var_784 = 0;
    pri = fun_1BA8()
    var_792 = 0;
    var_800 = 3;
    var_808 = 0;
    var_816 = 100;
    var_824 = -1;
    OP_PUSH2_C 3350968145657650836, -6885374073561345874
    var_832 = 56;
    pri = fun_19A0(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_840 = 1;
    var_848 = 8;
    pri = fun_1AE8(var_840)
    var_856 = 0;
    pri = fun_1BA8()
    var_864 = 1;
    var_872 = 1;
    var_880 = -1;
    var_888 = -1;
    var_896 = 0;
    var_904 = 29;
    var_912 = -7748209240823921678;
    var_920 = 56;
    pri = fun_1C68(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 23744;
    var_936 = -7748209240823921678;
    var_944 = 16;
    pri = fun_0970(var_936, var_928)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C -7012237771173027726, -7748209240823921678
    var_992 = 56;
    pri = fun_19A0(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_1AE8(var_1000)
    var_1016 = 0;
    pri = fun_1BA8()
    var_1024 = 0;
    var_1032 = 3;
    var_1040 = 0;
    var_1048 = 100;
    var_1056 = -1;
    OP_PUSH2_C -7012243268731168781, -7748209240823921678
    var_1064 = 56;
    pri = fun_19A0(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1072 = 1;
    var_1080 = 8;
    pri = fun_1AE8(var_1072)
    var_1088 = 0;
    pri = fun_1BA8()
    var_1096 = 1;
    var_1104 = 3;
    var_1112 = 0;
    var_1120 = 29;
    var_1128 = -7748209240823921678;
    var_1136 = 40;
    pri = fun_3FA0(var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1144 = -7748209240823921678;
    var_1152 = 8;
    pri = fun_0770(var_1144)
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = -6885374073561345874;
    var_1184 = 24;
    pri = fun_5CD0(var_1176, var_1168, var_1160)
    var_1192 = 1;
    var_1200 = 8;
    pri = fun_0060(var_1192)
    var_1208 = -6885374073561345874;
    var_1216 = 8;
    pri = fun_0770(var_1208)
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 100;
    var_1256 = -1;
    OP_PUSH2_C 3350969245169279047, -6885374073561345874
    var_1264 = 56;
    pri = fun_19A0(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_1AE8(var_1272)
    var_1288 = 0;
    pri = fun_1BA8()
    var_1296 = 1;
    var_1304 = 1;
    var_1312 = -1;
    OP_PUSH2_C -7748209240823921678, -6245882449017408807
    var_1320 = 40;
    pri = fun_0DF0(var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = -6245882449017408807;
    var_1352 = 24;
    pri = fun_5CD0(var_1344, var_1336, var_1328)
    var_1360 = 1;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = -6245882449017408807;
    var_1384 = 8;
    pri = fun_0770(var_1376)
    var_1392 = 0;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 100;
    var_1424 = -1;
    OP_PUSH2_C 3853064566192498044, -6245882449017408807
    var_1432 = 56;
    pri = fun_19A0(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_1AE8(var_1440)
    var_1456 = 0;
    pri = fun_1BA8()
    var_1464 = -1;
    var_1472 = -6245882449017408807;
    var_1480 = 16;
    pri = fun_0E48(var_1472, var_1464)
    var_1488 = 1;
    var_1496 = 0;
    var_1504 = 4641240890982006784;
    var_1512 = 0;
    var_1520 = 0;
    OP_PUSH4_C 4666181662990663680, 4671168223100534784, 4607182418800017408, -6245882449017408807
    var_1528 = 72;
    pri = fun_0500(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1536 = 20;
    var_1544 = 8;
    pri = fun_0060(var_1536)
    var_1552 = 1;
    var_1560 = 0;
    var_1568 = 4641240890982006784;
    var_1576 = 0;
    var_1584 = 0;
    OP_PUSH4_C 4666176165432524800, 4671159701885419520, 4607182418800017408, -7748209240823921678
    var_1592 = 72;
    pri = fun_0500(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 40;
    var_1608 = 8;
    pri = fun_0060(var_1600)
    var_1616 = 1;
    var_1624 = 1;
    var_1632 = -1;
    OP_PUSH2_C 8802641224559852288, -6885374073561345874
    var_1640 = 40;
    pri = fun_0DF0(var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1648 = 40;
    var_1656 = 8;
    pri = fun_0060(var_1648)
    var_1664 = 0;
    var_1672 = 4631952216750555136;
    var_1680 = 3;
    OP_PUSH5_C 4667239838478793441, 4636118046405872845, 4671119599947575460, 4668166891707752776, 4636221488459814011
    var_1688 = 4671182819117393510;
    var_1696 = 50;
    pri = EvCameraMove(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1704 = 1;
    var_1712 = 0;
    var_1720 = 4641240890982006784;
    var_1728 = 0;
    var_1736 = 0;
    OP_PUSH4_C 4667981013769519104, 4671187464554020864, 4607182418800017408, -6885374073561345874
    var_1744 = 72;
    pri = fun_0500(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1752 = -6885374073561345874;
    var_1760 = 8;
    pri = fun_05D0(var_1752)
    var_1768 = 0;
    var_1776 = 1;
    var_1784 = -6885374073561345874;
    var_1792 = 24;
    pri = fun_5CD0(var_1784, var_1776, var_1768)
    var_1800 = 1;
    var_1808 = 8;
    pri = fun_0060(var_1800)
    var_1816 = -6885374073561345874;
    var_1824 = 8;
    pri = fun_0770(var_1816)
    var_1832 = 0;
    var_1840 = 3;
    var_1848 = 0;
    var_1856 = 100;
    var_1864 = -1;
    OP_PUSH2_C 3350965946634394414, -6885374073561345874
    var_1872 = 56;
    pri = fun_19A0(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1880 = 1;
    var_1888 = 8;
    pri = fun_1AE8(var_1880)
    var_1896 = 0;
    pri = fun_1BA8()
    var_1904 = 0;
    pri = fun_1BD8()
    var_1912 = 0;
    var_1920 = 4631952216750555136;
    var_1928 = 0;
    OP_PUSH5_C 4667583435862473441, 4638946518078094049, 4670956270244048404, 4668012025494980526, 4639019701572038820
    var_1936 = 4671207148560937124;
    var_1944 = 1;
    pri = EvCameraMove(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 0;
    pri = fun_1BD8()
    var_1960 = 0;
    var_1968 = 4631952216750555136;
    var_1976 = 0;
    OP_PUSH5_C 4667583435862473441, 4638946518078094049, 4670956270244048404, 4668004873171841843, 4639017942353434378
    var_1984 = 4671201510815065702;
    var_1992 = 300;
    pri = EvCameraMove(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_2000 = 0;
    var_2008 = -6245882449017408807;
    var_2016 = 16;
    pri = fun_0490(var_2008, var_2000)
    var_2024 = 0;
    var_2032 = -7748209240823921678;
    var_2040 = 16;
    pri = fun_0490(var_2032, var_2024)
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C 3350967046146022625, -6885374073561345874
    var_2088 = 56;
    pri = fun_19A0(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_1AE8(var_2096)
    var_2112 = 0;
    pri = fun_1BA8()
    var_2120 = 0;
    var_2128 = 3;
    var_2136 = 0;
    var_2144 = 100;
    var_2152 = -1;
    OP_PUSH2_C 3350963747611137992, -6885374073561345874
    var_2160 = 56;
    pri = fun_19A0(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2168 = 1;
    var_2176 = 8;
    pri = fun_1AE8(var_2168)
    var_2184 = 0;
    pri = fun_1BA8()
    var_2192 = 0;
    var_2200 = 4631952216750555136;
    var_2208 = 3;
    OP_PUSH5_C 4667239838478793441, 4636118046405872845, 4671119599947575460, 4668166891707752776, 4636221488459814011
    var_2216 = 4671182819117393510;
    var_2224 = 1;
    pri = EvCameraMove(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2232 = 0;
    var_2240 = 0;
    var_2248 = -6885374073561345874;
    var_2256 = 24;
    pri = fun_5CD0(var_2248, var_2240, var_2232)
    var_2264 = 1;
    var_2272 = 8;
    pri = fun_0060(var_2264)
    var_2280 = -6885374073561345874;
    var_2288 = 8;
    pri = fun_0770(var_2280)
    var_2296 = 0;
    var_2304 = 3;
    var_2312 = 0;
    var_2320 = 100;
    var_2328 = -1;
    OP_PUSH2_C 3350964847122766203, -6885374073561345874
    var_2336 = 56;
    pri = fun_19A0(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2344 = 1;
    var_2352 = 8;
    pri = fun_1AE8(var_2344)
    var_2360 = 0;
    pri = fun_1BA8()
    var_2368 = 1;
    var_2376 = 0;
    var_2384 = 4641240890982006784;
    var_2392 = 0;
    var_2400 = 0;
    OP_PUSH4_C 4666492824781324288, 4671187464554020864, 4607182418800017408, -6885374073561345874
    var_2408 = 72;
    pri = fun_0500(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2416 = 60;
    var_2424 = 8;
    pri = fun_0060(var_2416)
    var_2432 = 1;
    var_2440 = 0;
    var_2448 = 23400;
    var_2456 = 8;
    var_2464 = 32;
    pri = fun_02E0(var_2456, var_2448, var_2440, var_2432)
    var_2472 = 0;
    pri = fun_0350()
    var_2480 = 23880;
    pri = SoundPostEvent(var_2480)
    var_2488 = -6245882449017408807;
    var_2496 = 8;
    pri = fun_05D0(var_2488)
    var_2504 = -7748209240823921678;
    var_2512 = 8;
    pri = fun_05D0(var_2504)
    var_2520 = 3;
    var_2528 = 1;
    pri = EvCameraEnd(var_2528, var_2520)
    var_2536 = 0;
    var_2544 = -6885374073561345874;
    var_2552 = 16;
    pri = fun_0490(var_2544, var_2536)
    var_2560 = 30;
    var_2568 = 8;
    pri = fun_0060(var_2560)
    pri = 0;
    return pri;
}
// fun_7C18
fun_7C18() {
    pri = 0;
    return pri;
}
// fun_7C30
fun_7C30() {
    var_8 = -6885374073561345874;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = -6245882449017408807;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = -7748209240823921678;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 870;
    var_64 = 8;
    pri = fun_6468(var_56)
    var_72 = 4985763535029371052;
    pri = FlagReset(var_72)
    var_80 = 3896444167467819354;
    pri = FlagReset(var_80)
    var_88 = -2424754999503323182;
    pri = VanishFlagReset(var_88)
    pri = 0;
    return pri;
}
// fun_7D58
fun_7D58() {
    var_8 = 24040;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7DB0
fun_7DB0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6600()
    var_16 = 0;
    pri = fun_6658()
    var_24 = 0;
    pri = fun_6670()
    var_32 = 0;
    pri = fun_6688()
    var_40 = 0;
    pri = fun_7C18()
    var_48 = 0;
    pri = fun_7C30()
    var_56 = 0;
    pri = fun_7D58()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7EA0
fun_7EA0() {
    var_8 = 0;
    pri = fun_6658()
    var_16 = 0;
    pri = fun_7C30()
    pri = 0;
    return pri;
}
