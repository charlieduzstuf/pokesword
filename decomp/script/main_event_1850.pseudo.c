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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
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
// fun_0760
fun_0760() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10D0(var_8)
    OP_JZER lab_0828
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1100(var_24)
    OP_JNZ lab_0828
    pri = 0;
    return pri;
// lab_0828
    OP_JUMP lab_0838
// lab_0838
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0898
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0898
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0838
    pri = 0;
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09D0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A10
// lab_0A10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10D0(var_8)
    OP_JNZ lab_0A98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A88
    pri = 0;
    return pri;
// lab_0A98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AE0
    pri = 0;
    return pri;
// lab_0AE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_0B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A10
    pri = 0;
    return pri;
// lab_0A88
    OP_JUMP lab_0AE0
}
// fun_0B88
fun_0B88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C10
    pri = 0;
    return pri;
// lab_0C10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10D0(var_8)
    OP_JZER lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C68
    OP_ZERO_P_S 64
// lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_CONST_S 64, 1
// lab_0D78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB0
    OP_CONST_S 72, 1
// lab_0DB0
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
// lab_0C68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C90
    OP_ZERO_P_S 72
// lab_0C90
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
    OP_JUMP lab_0E50
// lab_0E50
    pri = 0;
    return pri;
}
// fun_0E60
fun_0E60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F20(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0F98(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F60(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0FD8(var_24)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1130
fun_1130() {
    OP_JUMP lab_1148
// lab_1148
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_11C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_11D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1268
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1258
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_1268
    pri = 0;
    return pri;
// lab_1258
    OP_JUMP lab_1278
// lab_1278
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1148
    pri = 0;
    return pri;
// lab_11C8
    OP_JUMP lab_1278
}
// fun_12B8
fun_12B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1130(var_40)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_13A0
fun_13A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
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
// switch_19F0
        case default:
        {
// switch_19F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A38
// lab_1A38
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
            OP_JNZ lab_1AE0
            var_88 = 0;
            pri = fun_1C98()
// lab_1AE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15D8
                case default:
                {
// switch_15D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
// lab_1650
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_15D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1650
                }
                case 0x1:
                {
// switch_15D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1650
                }
                case 0x2:
                {
// switch_15D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1650
                }
                case 0x3:
                {
// switch_15D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
                }
                case 0x4:
                {
// switch_15D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1650
                }
                case 0x5:
                {
// switch_15D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1650
                }
            }
        }
        case 0x65:
        {
// switch_19F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1790
                case default:
                {
// switch_1790_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
// lab_1808
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1790_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1808
                }
                case 0x1:
                {
// switch_1790_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1808
                }
                case 0x2:
                {
// switch_1790_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1808
                }
                case 0x3:
                {
// switch_1790_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
                }
                case 0x4:
                {
// switch_1790_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1808
                }
                case 0x5:
                {
// switch_1790_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1808
                }
            }
        }
        case 0x66:
        {
// switch_19F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1948
                case default:
                {
// switch_1948_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
// lab_19C0
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1948_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19C0
                }
                case 0x1:
                {
// switch_1948_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19C0
                }
                case 0x2:
                {
// switch_1948_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19C0
                }
                case 0x3:
                {
// switch_1948_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
                }
                case 0x4:
                {
// switch_1948_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19C0
                }
                case 0x5:
                {
// switch_1948_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19C0
                }
            }
        }
    }
}
// fun_1AF8
fun_1AF8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0950(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BA0
    pri = 1;
    return pri;
// lab_1BA0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BE8
fun_1BE8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AF8(var_8)
    arg_2 = pri;
// lab_1C38
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C98
fun_1C98() {
    OP_JUMP lab_1CB0
// lab_1CB0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CF0
    pri = 0;
    return pri;
// lab_1CF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CB0
    pri = 0;
    return pri;
}
// fun_1D30
fun_1D30() {
    var_8 = 0;
    pri = fun_1C98()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1DE0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1DE0
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E20
fun_1E20() {
    OP_JUMP lab_1E38
// lab_1E38
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E70
    pri = 0;
    return pri;
// lab_1E70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E38
    pri = 0;
    return pri;
}
// fun_1EB0
fun_1EB0() {
    pri = arg_6;
    OP_JNZ lab_1EE8
    var_8 = 0;
    pri = fun_0E60()
// lab_1EE8
    pri = arg_1;
    switch (pri) {
// switch_3450
        case default:
        {
// switch_3450_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37A0
            pri = 1;
            OP_JUMP lab_37A8
// lab_37A0
            pri = 0;
// lab_37A8
            OP_JZER lab_3900
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0950(var_24, var_16)
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
            OP_JUMP lab_3960
// lab_3900
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
// lab_3960
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A20
// lab_39C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A20
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A20
            pri = arg_2;
            OP_JZER lab_3A60
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A60
            var_8 = 0;
            pri = fun_0EA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3450_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1:
        {
// switch_3450_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x2:
        {
// switch_3450_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x3:
        {
// switch_3450_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x4:
        {
// switch_3450_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x5:
        {
// switch_3450_case_0x5
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x6:
        {
// switch_3450_case_0x6
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x7:
        {
// switch_3450_case_0x7
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x8:
        {
// switch_3450_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x9:
        {
// switch_3450_case_0x9
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xa:
        {
// switch_3450_case_0xa
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xb:
        {
// switch_3450_case_0xb
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xc:
        {
// switch_3450_case_0xc
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xd:
        {
// switch_3450_case_0xd
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xe:
        {
// switch_3450_case_0xe
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0xf:
        {
// switch_3450_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x10:
        {
// switch_3450_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x11:
        {
// switch_3450_case_0x11
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x12:
        {
// switch_3450_case_0x12
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x13:
        {
// switch_3450_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x14:
        {
// switch_3450_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x15:
        {
// switch_3450_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x16:
        {
// switch_3450_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x17:
        {
// switch_3450_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x18:
        {
// switch_3450_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x19:
        {
// switch_3450_case_0x19
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
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3450_case_default
        }
        case 0x1a:
        {
// switch_3450_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D8(var_48, var_40)
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
            pri = fun_0BC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1b:
        {
// switch_3450_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D8(var_48, var_40)
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
            pri = fun_0BC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1c:
        {
// switch_3450_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D8(var_48, var_40)
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
            pri = fun_0BC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3450_case_default
        }
        case 0x1d:
        {
// switch_3450_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1e:
        {
// switch_3450_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x1f:
        {
// switch_3450_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x20:
        {
// switch_3450_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x21:
        {
// switch_3450_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x22:
        {
// switch_3450_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x23:
        {
// switch_3450_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x24:
        {
// switch_3450_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x25:
        {
// switch_3450_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x26:
        {
// switch_3450_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x27:
        {
// switch_3450_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x28:
        {
// switch_3450_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
        case 0x29:
        {
// switch_3450_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3450_case_default
        }
    }
}
// fun_3A90
fun_3A90() {
    pri = 8440;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3B18
// lab_3B18
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3C98
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3C88
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3BD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3BD8
    pri = 0;
    OP_JUMP lab_3BE0
// lab_3C98
    pri = 0;
    return pri;
// lab_3C88
    OP_JUMP lab_3B10
// lab_3B10
    OP_INC_P_S -936
// lab_3BD8
    pri = 1;
// lab_3BE0
    OP_JZER lab_3C58
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3C50
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3C58
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3C50
}
// fun_3CB8
fun_3CB8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_3D00
    pri = arg_0;
    return pri;
// lab_3D00
    pri = arg_1;
    return pri;
}
// fun_3D10
fun_3D10() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3DA8
    var_8 = 1;
    var_16 = 0;
    var_24 = 9360;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1378()
// lab_3DA8
    pri = arg_4;
    OP_JZER lab_3DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_13A0(var_8)
// lab_3DE0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3E38
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3E38
    pri = 0;
    OP_JUMP lab_3E40
// lab_3E38
    pri = 1;
// lab_3E40
    OP_JZER lab_3F08
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3F08
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_3EE0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_12B8(var_32, var_24)
    OP_JUMP lab_3F08
// lab_3F08
    pri = arg_2;
    OP_JZER lab_3FE0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_3FB0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B0(var_40)
    OP_JUMP lab_3FE0
// lab_3FE0
    pri = arg_3;
    OP_JZER lab_4018
    var_8 = 1;
    var_16 = 8;
    pri = fun_1340(var_8)
// lab_4018
    pri = 0;
    return pri;
// lab_3FB0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EE0(var_16, var_8)
// lab_3EE0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_12B8(var_16, var_8)
}
// fun_4028
fun_4028() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3A90(var_24)
    pri = 0;
    return pri;
}
// fun_4090
fun_4090() {
    pri = g_mode;
    switch (pri) {
// switch_4150
        case default:
        {
// switch_4150_case_default
            pri = CommandNOP()
            OP_JUMP lab_4198
// lab_4198
            pri = 0;
            return pri;
        }
        case 0xe6ff172748336756:
        {
// switch_4150_case_0xe6ff172748336756
            var_8 = 0;
            pri = fun_6088()
            OP_JUMP lab_4198
        }
        case 0x0:
        {
// switch_4150_case_0x0
            var_8 = 0;
            pri = fun_41A8()
            OP_JUMP lab_4198
        }
        case 0x4b0112ad26d8bba:
        {
// switch_4150_case_0x4b0112ad26d8bba
            var_8 = 0;
            pri = fun_5F80()
            OP_JUMP lab_4198
        }
    }
}
// fun_41A8
fun_41A8() {
    pri = 0;
    return pri;
}
// fun_41C0
fun_41C0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_4210
    pri = -130826681769030093;
    return pri;
// lab_4210
    pri = -4214615090440700579;
    return pri;
}
// fun_4228
fun_4228() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_4278
    pri = -4214615090440700579;
    return pri;
// lab_4278
    pri = -130826681769030093;
    return pri;
}
// fun_4290
fun_4290() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 9360;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_42F8
fun_42F8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3D10(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4350
fun_4350() {
    pri = 0;
    return pri;
}
// fun_4368
fun_4368() {
    var_8 = 0;
    pri = fun_41C0()
    var_16 = pri;
    var_24 = 8;
    pri = fun_0408(var_16)
    var_32 = 0;
    pri = fun_4228()
    var_40 = pri;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 0;
    pri = fun_0438()
    var_64 = 0;
    var_72 = 0;
    pri = fun_41C0()
    var_80 = pri;
    var_88 = 16;
    pri = fun_0638(var_80, var_72)
    var_96 = 0;
    var_104 = 0;
    pri = fun_4228()
    var_112 = pri;
    var_120 = 16;
    pri = fun_0638(var_112, var_104)
    pri = 0;
    return pri;
}
// fun_4488
fun_4488() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4636033603912859648, 4665991997234872320, 4661422426909835264, 8802641224559852288
    var_24 = 48;
    pri = fun_05E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4665991997234872320, 4661559865863307264, -5661906939330003973
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH3_C 4617878467915022336, 4665001337258246144, 4661400436677279744
    var_72 = 0;
    pri = fun_41C0()
    var_80 = pri;
    var_88 = 48;
    pri = fun_05E0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH3_C 4617315517961601024, 4664611010630385664, 4661252002607529984
    var_112 = 0;
    pri = fun_4228()
    var_120 = pri;
    var_128 = 48;
    pri = fun_05E0(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 8802641224559852288;
    var_152 = 16;
    pri = fun_0670(var_144, var_136)
    var_160 = 1;
    var_168 = -5661906939330003973;
    var_176 = 16;
    pri = fun_0670(var_168, var_160)
    var_184 = 6;
    var_192 = 6;
    var_200 = -5661906939330003973;
    var_208 = 24;
    pri = fun_1010(var_200, var_192, var_184)
    var_216 = 10;
    var_224 = 8;
    pri = fun_0060(var_216)
    OP_PUSH2_C -9223372036854775808, 4630192998146113536
    var_232 = 0;
    OP_PUSH5_C 4665863381862213222, 4648684408780189860, 4661693500506547159, 4666143691356598436, 4650696778941810606
    var_240 = 4661267516716597903;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_1E20()
    OP_PUSH2_C -9223372036854775808, 4630192998146113536
    var_264 = 2;
    OP_PUSH5_C 4665866471489887273, 4648510773903931474, 4661688816587012833, 4666146918423225958, 4650520417276715336
    var_272 = 4661262986728691466;
    var_280 = 240;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 9408;
    var_296 = 8;
    var_304 = 16;
    pri = fun_0280(var_296, var_288)
    var_312 = 0;
    pri = fun_0350()
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C -6666260294819555181, -5661906939330003973
    var_360 = 56;
    pri = fun_1BE8(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1D30(var_368)
    var_384 = 0;
    pri = fun_1DF0()
    var_392 = -5661906939330003973;
    var_400 = 8;
    pri = fun_1078(var_392)
    var_408 = 0;
    var_416 = 4631952216750555136;
    var_424 = 0;
    OP_PUSH5_C 4667836186097908449, 4644875436618783130, 4661514576979359171, 4668062597532300083, 4648216808475129283
    var_432 = 4659705825376086262;
    var_440 = 1;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 0;
    pri = fun_1E20()
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 0;
    OP_PUSH5_C 4667881304557554237, 4644875436618783130, 4661578150741677179, 4668229580363210424, 4648215840904896840
    var_480 = 4660119615582083482;
    var_488 = 240;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 60;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 3;
    var_520 = 90;
    OP_PUSH3_C 4599075939470750516, 4680233971349454848, 4648488871632306176
    var_528 = 2;
    pri = FogStart(var_528, var_520, var_512, var_504, var_496, var_488)
    var_536 = 120;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = 1;
    var_560 = 0;
    pri = fun_41C0()
    var_568 = pri;
    var_576 = 16;
    pri = fun_0638(var_568, var_560)
    var_584 = 1;
    var_592 = 0;
    pri = fun_4228()
    var_600 = pri;
    var_608 = 16;
    pri = fun_0638(var_600, var_592)
    var_616 = 1;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 1;
    var_640 = 0;
    var_648 = 4641240890982006784;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH3_C 4665485122374467584, 4661455412258668544, 4602678819172646912
    var_672 = 0;
    pri = fun_41C0()
    var_680 = pri;
    var_688 = 72;
    pri = fun_06E8(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 1;
    var_704 = 0;
    var_712 = 4641240890982006784;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH3_C 4665138776211718144, 4661295983072641024, 4602678819172646912
    var_736 = 0;
    pri = fun_4228()
    var_744 = pri;
    var_752 = 72;
    pri = fun_06E8(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 0;
    var_768 = 4631079644322752102;
    var_776 = 0;
    OP_PUSH5_C 4665732853339321795, 4648597767263921111, 4661448903149832110, 4666094015421255516, 4650093542882347581
    var_784 = 4661497391612617032;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_1E20()
    var_808 = 0;
    var_816 = 4631079644322752102;
    var_824 = 2;
    OP_PUSH5_C 4665754739118272676, 4648688454982980076, 4661451838845878272, 4666115901200206397, 4650184142640476324
    var_832 = 4661500327308663194;
    var_840 = 240;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 60;
    var_856 = 8;
    pri = fun_0060(var_848)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 170;
    pri = float(var_888)
    var_896 = pri;
    var_904 = 8802641224559852288;
    var_912 = 40;
    pri = fun_0760(var_904, var_896, var_888, var_880, var_872)
    var_920 = 0;
    var_928 = 0;
    var_936 = 0;
    var_944 = -165;
    pri = float(var_944)
    var_952 = pri;
    var_960 = -5661906939330003973;
    var_968 = 40;
    pri = fun_0760(var_960, var_952, var_944, var_936, var_928)
    var_976 = 60;
    var_984 = 8;
    pri = fun_0060(var_976)
    var_992 = 8802641224559852288;
    var_1000 = 8;
    pri = fun_07B0(var_992)
    var_1008 = -5661906939330003973;
    var_1016 = 8;
    pri = fun_07B0(var_1008)
    var_1024 = 0;
    var_1032 = 4631135939318094234;
    var_1040 = 0;
    OP_PUSH5_C 4665072915465214362, 4649756212714945905, 4661641823460041687, 4665524693797951242, 4650412401254402621
    var_1048 = 4660878850351295365;
    var_1056 = 1;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 0;
    pri = fun_1E20()
    var_1072 = 0;
    var_1080 = 4631135939318094234;
    var_1088 = 2;
    OP_PUSH5_C 4665173476798690755, 4649804063460986716, 4661657755383528161, 4665784871234431877, 4650460515883234099
    var_1096 = 4661331079483799634;
    var_1104 = 90;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_41C0()
    var_1120 = pri;
    var_1128 = 8;
    pri = fun_07B0(var_1120)
    var_1136 = 0;
    pri = fun_4228()
    var_1144 = pri;
    var_1152 = 8;
    pri = fun_07B0(var_1144)
    var_1160 = 0;
    pri = fun_1E20()
    var_1168 = 0;
    var_1176 = 4628884139504408986;
    var_1184 = 0;
    OP_PUSH5_C 4665248419511239967, 4650263131555815752, 4661447847618669445, 4665861386248608809, 4650286529163254825
    var_1192 = 4661497820422151864;
    var_1200 = 1;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 0;
    pri = fun_1E20()
    var_1216 = 0;
    var_1224 = 4628884139504408986;
    var_1232 = 2;
    OP_PUSH5_C 4665288694622165402, 4650264363008838861, 4661450552417273774, 4665881523804071526, 4650287848577208156
    var_1240 = 4661500525220756193;
    var_1248 = 15;
    pri = EvCameraMove(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 1;
    var_1264 = -1;
    var_1272 = -1;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 30;
    var_1304 = 0;
    pri = fun_41C0()
    var_1312 = pri;
    var_1320 = 56;
    pri = fun_1EB0(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_52F0
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 888;
    pri = SoundPlayPokeVoice(var_1352, var_1344, var_1336, var_1328)
    var_1360 = 0;
    var_1368 = 3;
    var_1376 = 0;
    var_1384 = 101;
    var_1392 = -1;
    var_1400 = -8103250129147362327;
    var_1408 = 0;
    pri = fun_41C0()
    var_1416 = pri;
    var_1424 = 56;
    pri = fun_1BE8(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1432 = 1;
    var_1440 = 8;
    pri = fun_1D30(var_1432)
    var_1448 = 0;
    pri = fun_1DF0()
    OP_JUMP lab_53D0
// lab_52F0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 889;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    var_80 = 4150934688561945676;
    var_88 = 0;
    pri = fun_41C0()
    var_96 = pri;
    var_104 = 56;
    pri = fun_1BE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1D30(var_112)
    var_128 = 0;
    pri = fun_1DF0()
// lab_53D0
    var_8 = 0;
    var_16 = 4628884139504408986;
    var_24 = 0;
    OP_PUSH5_C 4665138028543811256, 4650064603736304517, 4661394741207047864, 4665757845238621143, 4650088265226534257
    var_32 = 4660822907199674122;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1E20()
    var_56 = 0;
    var_64 = 4628884139504408986;
    var_72 = 2;
    OP_PUSH5_C 4665216742581243740, 4650067506447001846, 4661349771181471826, 4665797202257337385, 4650091167937231585
    var_80 = 4660732967148522045;
    var_88 = 15;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 30;
    var_144 = 0;
    pri = fun_4228()
    var_152 = pri;
    var_160 = 56;
    pri = fun_1EB0(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_5670
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 889;
    pri = SoundPlayPokeVoice(var_192, var_184, var_176, var_168)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 101;
    var_232 = -1;
    var_240 = 4150934688561945676;
    var_248 = 0;
    pri = fun_4228()
    var_256 = pri;
    var_264 = 56;
    pri = fun_1BE8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1D30(var_272)
    var_288 = 0;
    pri = fun_1DF0()
    OP_JUMP lab_5750
// lab_5670
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 888;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 101;
    var_72 = -1;
    var_80 = -8103250129147362327;
    var_88 = 0;
    pri = fun_4228()
    var_96 = pri;
    var_104 = 56;
    pri = fun_1BE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1D30(var_112)
    var_128 = 0;
    pri = fun_1DF0()
// lab_5750
    var_8 = 0;
    var_16 = 4630052260657758208;
    var_24 = 0;
    OP_PUSH5_C 4665842139297564590, 4649378068675921183, 4661557018128191324, 4665378920546340700, 4650718681213435904
    var_32 = 4660997597607095173;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1E20()
    var_56 = 0;
    var_64 = 4630052260657758208;
    var_72 = 2;
    OP_PUSH5_C 4665845905124889723, 4649378068675921183, 4661544934495402066, 4665338062694252544, 4650714371127855022
    var_80 = 4661114651614988206;
    var_88 = 240;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C -6666259195307926970, -5661906939330003973
    var_136 = 56;
    pri = fun_1BE8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1D30(var_144)
    var_160 = 0;
    pri = fun_1DF0()
    var_168 = 0;
    var_176 = 4630558915615837389;
    var_184 = 0;
    OP_PUSH5_C 4665091486216607498, 4649914102584694538, 4661369144576353239, 4665857873308958065, 4650434391486958141
    var_192 = 4661437061409600963;
    var_200 = 1;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 0;
    pri = fun_1E20()
    var_216 = 0;
    var_224 = 4630558915615837389;
    var_232 = 0;
    OP_PUSH5_C 4665192058545200169, 4649972596603292221, 4661376775187050004, 4665908164970812539, 4650492885505555825
    var_240 = 4661444692020297728;
    var_248 = 240;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 889;
    var_288 = 888;
    var_296 = 16;
    pri = fun_3CB8(var_288, var_280)
    var_304 = pri;
    pri = SoundPlayPokeVoice(var_304, var_296, var_288, var_280)
    var_312 = 0;
    pri = fun_41C0()
    var_320 = pri;
    var_328 = 8;
    pri = fun_0988(var_320)
    var_336 = 1;
    var_344 = -1;
    var_352 = -1;
    var_360 = 3;
    var_368 = 0;
    var_376 = 30;
    var_384 = 0;
    pri = fun_41C0()
    var_392 = pri;
    var_400 = 56;
    pri = fun_1EB0(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 60;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 3;
    var_432 = 120;
    OP_PUSH3_C 4599075939470750516, 4681608360884174848, 4607182418800017408
    var_440 = 2;
    pri = FogStart(var_440, var_432, var_424, var_416, var_408, var_400)
    var_448 = 60;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 0;
    var_472 = 4631952216750555136;
    var_480 = 0;
    OP_PUSH5_C 4665626299667474022, 4649815938186566697, 4661426297190765036, 4666048979424981811, 4649658136277748285
    var_488 = 4661504285550523187;
    var_496 = 1;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    pri = fun_1E20()
    var_512 = 0;
    var_520 = 4631952216750555136;
    var_528 = 2;
    OP_PUSH5_C 4665651720376308204, 4649810572569823150, 4661428969004020531, 4666061695276957041, 4649652770661004739
    var_536 = 4661506957363778683;
    var_544 = 180;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 120;
    var_560 = 8;
    pri = fun_0060(var_552)
    var_568 = 0;
    var_576 = 0;
    pri = fun_4228()
    var_584 = pri;
    var_592 = 16;
    pri = fun_0638(var_584, var_576)
    var_600 = 0;
    var_608 = 0;
    pri = fun_41C0()
    var_616 = pri;
    var_624 = 16;
    pri = fun_0638(var_616, var_608)
    var_632 = 3;
    var_640 = 30;
    OP_PUSH3_C 4590068740216009523, 4678479150791524352, 4648488871632306176
    var_648 = 2;
    pri = FogStart(var_648, var_640, var_632, var_624, var_616, var_608)
    var_656 = 45;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 0;
    pri = fun_1E20()
    var_680 = 0;
    var_688 = 8802641224559852288;
    var_696 = 16;
    pri = fun_0670(var_688, var_680)
    var_704 = 0;
    var_712 = -5661906939330003973;
    var_720 = 16;
    pri = fun_0670(var_712, var_704)
    var_728 = 3;
    var_736 = 900;
    pri = EvCameraEnd(var_736, var_728)
    pri = 0;
    return pri;
}
// fun_5E78
fun_5E78() {
    pri = 0;
    return pri;
}
// fun_5E90
fun_5E90() {
    var_8 = 1860;
    var_16 = 8;
    pri = fun_4028(var_8)
    var_24 = -130826681769030093;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = -4214615090440700579;
    var_48 = 8;
    pri = fun_0588(var_40)
    var_56 = 3235464708911765657;
    pri = VanishFlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_5F40
fun_5F40() {
    var_8 = 336797088181023281;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_5F80
fun_5F80() {
    var_8 = 0;
    pri = fun_4290()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_42F8()
    var_24 = 0;
    pri = fun_4350()
    var_32 = 0;
    pri = fun_4368()
    var_40 = 0;
    pri = fun_4488()
    var_48 = 0;
    pri = fun_5E78()
    var_56 = 0;
    pri = fun_5E90()
    var_64 = 0;
    pri = fun_5F40()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6088
fun_6088() {
    var_8 = 0;
    pri = fun_4350()
    var_16 = 0;
    pri = fun_5E90()
    pri = 0;
    return pri;
}
