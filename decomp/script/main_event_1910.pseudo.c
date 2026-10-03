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
    pri = arg_0;
    switch (pri) {
// switch_0650
        case default:
        {
// switch_0650_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0650_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x1:
        {
// switch_0650_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x2:
        {
// switch_0650_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x3:
        {
// switch_0650_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x4:
        {
// switch_0650_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x5:
        {
// switch_0650_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
        case 0x6:
        {
// switch_0650_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0650_case_default
        }
    }
}
// fun_06E8
fun_06E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    OP_JZER lab_0898
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D20(var_24)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A40
    pri = 0;
    return pri;
// lab_0A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    OP_JNZ lab_0B08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AF8
    pri = 0;
    return pri;
// lab_0B08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B50
    pri = 0;
    return pri;
// lab_0B50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    pri = 0;
    return pri;
// lab_0BB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
// lab_0AF8
    OP_JUMP lab_0B50
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D20
fun_0D20() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D50
fun_0D50() {
    OP_JUMP lab_0D68
// lab_0D68
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0DF8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0DE8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_0DF8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E88
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0E78
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_0E88
    pri = 0;
    return pri;
// lab_0E78
    OP_JUMP lab_0E98
// lab_0E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D68
    pri = 0;
    return pri;
// lab_0DE8
    OP_JUMP lab_0E98
}
// fun_0ED8
fun_0ED8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D50(var_40)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FC0
fun_0FC0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
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
// switch_1640
        case default:
        {
// switch_1640_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1688
// lab_1688
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
            OP_JNZ lab_1730
            var_88 = 0;
            pri = fun_18E8()
// lab_1730
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1640_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1228
                case default:
                {
// switch_1228_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A0
// lab_12A0
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_1228_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_12A0
                }
                case 0x1:
                {
// switch_1228_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_12A0
                }
                case 0x2:
                {
// switch_1228_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_12A0
                }
                case 0x3:
                {
// switch_1228_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A0
                }
                case 0x4:
                {
// switch_1228_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_12A0
                }
                case 0x5:
                {
// switch_1228_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_12A0
                }
            }
        }
        case 0x65:
        {
// switch_1640_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_13E0
                case default:
                {
// switch_13E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1458
// lab_1458
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_13E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1458
                }
                case 0x1:
                {
// switch_13E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1458
                }
                case 0x2:
                {
// switch_13E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1458
                }
                case 0x3:
                {
// switch_13E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1458
                }
                case 0x4:
                {
// switch_13E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1458
                }
                case 0x5:
                {
// switch_13E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1458
                }
            }
        }
        case 0x66:
        {
// switch_1640_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1598
                case default:
                {
// switch_1598_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1610
// lab_1610
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_1598_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1610
                }
                case 0x1:
                {
// switch_1598_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1610
                }
                case 0x2:
                {
// switch_1598_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1610
                }
                case 0x3:
                {
// switch_1598_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1610
                }
                case 0x4:
                {
// switch_1598_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1610
                }
                case 0x5:
                {
// switch_1598_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1610
                }
            }
        }
    }
}
// fun_1748
fun_1748() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17F0
    pri = 1;
    return pri;
// lab_17F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1838
fun_1838() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1888
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1748(var_8)
    arg_2 = pri;
// lab_1888
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1028(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18E8
fun_18E8() {
    OP_JUMP lab_1900
// lab_1900
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1940
    pri = 0;
    return pri;
// lab_1940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1900
    pri = 0;
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = 0;
    pri = fun_18E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A30
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1A30
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1AA0
// lab_1AA0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AE0
    OP_JUMP lab_1B10
// lab_1AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AA0
// lab_1B10
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B58
fun_1B58() {
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
// fun_1BC8
fun_1BC8() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_1C00
fun_1C00() {
    pri = arg_4;
    OP_JNZ lab_1C38
    var_8 = 0;
    pri = fun_0C30()
// lab_1C38
    pri = arg_1;
    switch (pri) {
// switch_3010
        case default:
        {
// switch_3010_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0CF0(var_264)
            OP_JZER lab_35D8
            pri = arg_3;
            switch (pri) {
// switch_3580
                case default:
                {
// switch_3580_case_default
                    OP_JUMP lab_3890
// lab_3890
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3900
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3900
                    var_8 = 0;
                    pri = fun_0C70()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3580_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3580_case_default
                }
                case 0x2:
                {
// switch_3580_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3580_case_default
                }
                case 0x3:
                {
// switch_3580_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3580_case_default
                }
            }
// lab_35D8
            pri = arg_1;
            OP_JZER lab_3628
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3628
            pri = 0;
            OP_JUMP lab_3630
// lab_3628
            pri = 1;
// lab_3630
            OP_JZER lab_3698
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09C0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3698
            pri = 1;
            OP_JUMP lab_36A0
// lab_3698
            pri = 0;
// lab_36A0
            OP_JZER lab_36F0
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3890
// lab_36F0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3758
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3890
// lab_3758
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_3010_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1:
        {
// switch_3010_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2:
        {
// switch_3010_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3:
        {
// switch_3010_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x4:
        {
// switch_3010_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x5:
        {
// switch_3010_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BF8(var_40)
            OP_JUMP switch_3010_case_default
        }
        case 0x6:
        {
// switch_3010_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x7:
        {
// switch_3010_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x8:
        {
// switch_3010_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x9:
        {
// switch_3010_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xa:
        {
// switch_3010_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xb:
        {
// switch_3010_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xc:
        {
// switch_3010_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xd:
        {
// switch_3010_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xe:
        {
// switch_3010_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0xf:
        {
// switch_3010_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x10:
        {
// switch_3010_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x11:
        {
// switch_3010_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x12:
        {
// switch_3010_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x13:
        {
// switch_3010_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x14:
        {
// switch_3010_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x15:
        {
// switch_3010_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x16:
        {
// switch_3010_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x17:
        {
// switch_3010_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x18:
        {
// switch_3010_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x19:
        {
// switch_3010_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1a:
        {
// switch_3010_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1b:
        {
// switch_3010_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1c:
        {
// switch_3010_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1d:
        {
// switch_3010_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1e:
        {
// switch_3010_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x1f:
        {
// switch_3010_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x20:
        {
// switch_3010_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x21:
        {
// switch_3010_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x22:
        {
// switch_3010_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x23:
        {
// switch_3010_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x24:
        {
// switch_3010_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x25:
        {
// switch_3010_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x26:
        {
// switch_3010_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x27:
        {
// switch_3010_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x28:
        {
// switch_3010_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x29:
        {
// switch_3010_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2a:
        {
// switch_3010_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2b:
        {
// switch_3010_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2c:
        {
// switch_3010_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2d:
        {
// switch_3010_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2e:
        {
// switch_3010_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x2f:
        {
// switch_3010_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x30:
        {
// switch_3010_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x31:
        {
// switch_3010_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x32:
        {
// switch_3010_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x33:
        {
// switch_3010_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x34:
        {
// switch_3010_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x35:
        {
// switch_3010_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x36:
        {
// switch_3010_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x37:
        {
// switch_3010_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x38:
        {
// switch_3010_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x39:
        {
// switch_3010_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3a:
        {
// switch_3010_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3b:
        {
// switch_3010_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3c:
        {
// switch_3010_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3d:
        {
// switch_3010_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
        case 0x3e:
        {
// switch_3010_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            OP_JUMP switch_3010_case_default
        }
    }
}
// fun_3930
fun_3930() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3A30
        case default:
        {
// switch_3A30_case_default
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
// switch_3A30_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3A30_case_default
        }
        case 0x1:
        {
// switch_3A30_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3A30_case_default
        }
        case 0x2:
        {
// switch_3A30_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3A30_case_default
        }
        case 0x3:
        {
// switch_3A30_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3A30_case_default
        }
    }
}
// fun_3AF0
fun_3AF0() {
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
    pri = fun_1838(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_18E8()
    pri = 0;
    return pri;
}
// fun_3B88
fun_3B88() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3930(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3AF0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3C30
fun_3C30() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3C80
// lab_3C80
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3CF8
    OP_JUMP lab_3D28
// lab_3CF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3C80
// lab_3D28
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3DB0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1C00(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0FC0(var_56)
// lab_3DB0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3E18
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CB0(var_24, var_16)
// lab_3E18
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CB0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3ED8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09F8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0778(var_88, var_80, var_72, var_64, var_56)
// lab_3ED8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3F18
    pri = 0;
    return pri;
// lab_3F18
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4060
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0948(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_4028
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4060
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0820(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0820(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09F8(var_40)
    pri = 0;
    return pri;
// lab_4028
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CB0(var_16, var_8)
}
// fun_40E8
fun_40E8() {
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
    pri = fun_3B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1980(var_112)
    var_128 = 0;
    pri = fun_1A40()
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
    pri = fun_3C30(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_4260
fun_4260() {
    pri = 2008;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_42E8
// lab_42E8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4468
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4458
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_43A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_43A8
    pri = 0;
    OP_JUMP lab_43B0
// lab_4468
    pri = 0;
    return pri;
// lab_4458
    OP_JUMP lab_42E0
// lab_42E0
    OP_INC_P_S -936
// lab_43A8
    pri = 1;
// lab_43B0
    OP_JZER lab_4428
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4420
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4428
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4420
}
// fun_4488
fun_4488() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4520
    var_8 = 1;
    var_16 = 0;
    var_24 = 2928;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_0F98()
// lab_4520
    pri = arg_4;
    OP_JZER lab_4558
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FF0(var_8)
// lab_4558
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_45B0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_45B0
    pri = 0;
    OP_JUMP lab_45B8
// lab_45B0
    pri = 1;
// lab_45B8
    OP_JZER lab_4680
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4680
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_4658
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0ED8(var_32, var_24)
    OP_JUMP lab_4680
// lab_4680
    pri = arg_2;
    OP_JZER lab_4758
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_4728
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CB0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0740(var_40)
    OP_JUMP lab_4758
// lab_4758
    pri = arg_3;
    OP_JZER lab_4790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F60(var_8)
// lab_4790
    pri = 0;
    return pri;
// lab_4728
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CB0(var_16, var_8)
// lab_4658
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0ED8(var_16, var_8)
}
// fun_47A0
fun_47A0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4260(var_24)
    pri = 0;
    return pri;
}
// fun_4808
fun_4808() {
    pri = g_mode;
    switch (pri) {
// switch_4918
        case default:
        {
// switch_4918_case_default
            pri = CommandNOP()
            OP_JUMP lab_4980
// lab_4980
            pri = 0;
            return pri;
        }
        case 0x8596be14edd2bfef:
        {
// switch_4918_case_0x8596be14edd2bfef
            var_8 = 0;
            pri = fun_4EA0()
            OP_JUMP lab_4980
        }
        case 0xcb6eddc9c1f1fb8b:
        {
// switch_4918_case_0xcb6eddc9c1f1fb8b
            var_8 = 0;
            pri = fun_5418()
            OP_JUMP lab_4980
        }
        case 0xdde1f02742e906d9:
        {
// switch_4918_case_0xdde1f02742e906d9
            var_8 = 0;
            pri = fun_4E40()
            OP_JUMP lab_4980
        }
        case 0xfbae5a2acd3ab145:
        {
// switch_4918_case_0xfbae5a2acd3ab145
            var_8 = 0;
            pri = fun_4D50()
            OP_JUMP lab_4980
        }
        case 0x0:
        {
// switch_4918_case_0x0
            var_8 = 0;
            pri = fun_4990()
            OP_JUMP lab_4980
        }
    }
}
// fun_4990
fun_4990() {
    pri = 0;
    return pri;
}
// fun_49A8
fun_49A8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4488(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4A00
fun_4A00() {
    pri = 0;
    return pri;
}
// fun_4A18
fun_4A18() {
    pri = 0;
    return pri;
}
// fun_4A30
fun_4A30() {
    var_8 = 2976;
    var_16 = 8;
    pri = fun_1BC8(var_8)
    pri = 0;
    return pri;
}
// fun_4A68
fun_4A68() {
    pri = 0;
    return pri;
}
// fun_4A80
fun_4A80() {
    var_8 = 1920;
    var_16 = 8;
    pri = fun_47A0(var_8)
    pri = 0;
    return pri;
}
// fun_4AB8
fun_4AB8() {
    var_8 = 1930;
    var_16 = 8;
    pri = fun_47A0(var_8)
    var_24 = 1514373463937579588;
    pri = VanishFlagSet(var_24)
    var_32 = -4984428124630057404;
    pri = VanishFlagReset(var_32)
    var_40 = -4893233655299320911;
    pri = VanishFlagReset(var_40)
    var_48 = -785782855654695402;
    pri = VanishFlagReset(var_48)
    var_56 = -5689261488698659897;
    pri = VanishFlagReset(var_56)
    var_64 = 6;
    var_72 = 8;
    pri = fun_04A8(var_64)
    pri = 0;
    return pri;
}
// fun_4BD8
fun_4BD8() {
    OP_PUSH2_C 1514373463937579588, -6480272240389879794
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -2039142712897586641, 3221492539525397369
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 3136;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_4C90
fun_4C90() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 11922;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 7627;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C -7458546722088023822, -2994985144365028533
    var_80 = 72;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4D50
fun_4D50() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_49A8()
    var_16 = 0;
    pri = fun_4A00()
    var_24 = 0;
    pri = fun_4A18()
    var_32 = 0;
    pri = fun_4A30()
    var_40 = 0;
    pri = fun_4A68()
    var_48 = 0;
    pri = fun_4A80()
    var_56 = 0;
    pri = fun_4BD8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4E40
fun_4E40() {
    var_8 = 0;
    pri = fun_4A00()
    var_16 = 0;
    pri = fun_4A80()
    var_24 = 0;
    pri = fun_4AB8()
    pri = 0;
    return pri;
}
// fun_4EA0
fun_4EA0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 1514373463937579588, 8802641224559852288
    var_40 = 48;
    pri = fun_07C8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C 8802641224559852288, 1514373463937579588
    var_80 = 48;
    pri = fun_07C8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0820(var_88)
    var_104 = 1514373463937579588;
    var_112 = 8;
    pri = fun_0820(var_104)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    OP_PUSH2_C -142853428383013973, 1514373463937579588
    var_160 = 56;
    pri = fun_1838(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1980(var_168)
    var_184 = 0;
    var_192 = -8664008050177536046;
    var_200 = 0;
    var_208 = 24;
    pri = fun_1A70(var_200, var_192, var_184)
    var_216 = 0;
    var_224 = -8664009149689164257;
    var_232 = 1;
    var_240 = 24;
    pri = fun_1A70(var_232, var_224, var_216)
    var_256 = 0;
    var_264 = 1;
    var_272 = 0;
    var_280 = 1;
    var_288 = 32;
    pri = fun_1B58(var_280, var_272, var_264, var_256)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_53C8
        case default:
        {
// switch_53C8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_53C8_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -142854527894642184, 1514373463937579588
            var_48 = 56;
            pri = fun_1838(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1980(var_56)
            var_72 = 0;
            pri = fun_1A40()
            var_80 = 0;
            pri = fun_4AB8()
            var_88 = 0;
            pri = fun_4C90()
            OP_JUMP switch_53C8_case_default
        }
        case 0x1:
        {
// switch_53C8_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -142846831313244707, 1514373463937579588
            var_48 = 56;
            pri = fun_1838(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1980(var_56)
            var_72 = 0;
            pri = fun_1A40()
            var_80 = 0;
            pri = fun_1A40()
            var_88 = 1;
            var_96 = 0;
            var_104 = 2928;
            var_112 = 8;
            var_120 = 32;
            pri = fun_02E0(var_112, var_104, var_96, var_88)
            var_128 = 0;
            pri = fun_0350()
            var_136 = 1;
            var_144 = 1;
            var_152 = 90;
            pri = float(var_152)
            var_160 = pri;
            var_168 = 9275;
            pri = float(var_168)
            var_176 = pri;
            var_184 = 5000;
            pri = float(var_184)
            var_192 = pri;
            var_200 = 8802641224559852288;
            var_208 = 48;
            pri = fun_06E8(var_200, var_192, var_184, var_176, var_168, var_160)
            var_216 = 5;
            var_224 = 8;
            pri = fun_0060(var_216)
            var_232 = 3136;
            var_240 = 8;
            var_248 = 16;
            pri = fun_0280(var_240, var_232)
            var_256 = 0;
            pri = fun_0350()
            OP_JUMP switch_53C8_case_default
        }
    }
}
// fun_5418
fun_5418() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4545931486205679483;
    var_88 = 80;
    pri = fun_40E8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
