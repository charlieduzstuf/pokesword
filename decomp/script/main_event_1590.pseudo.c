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
    pri = arg_0;
    switch (pri) {
// switch_05B0
        case default:
        {
// switch_05B0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_05B0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x1:
        {
// switch_05B0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x2:
        {
// switch_05B0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x3:
        {
// switch_05B0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x4:
        {
// switch_05B0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x5:
        {
// switch_05B0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x6:
        {
// switch_05B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
    }
}
// fun_0648
fun_0648() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0710
fun_0710() {
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
// fun_0788
fun_0788() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JZER lab_08A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10A0(var_24)
    OP_JNZ lab_08A8
    pri = 0;
    return pri;
// lab_08A8
    OP_JUMP lab_08B8
// lab_08B8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0918
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08B8
    pri = 0;
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A50
    pri = 0;
    return pri;
// lab_0A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A90
// lab_0A90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JNZ lab_0B18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B08
    pri = 0;
    return pri;
// lab_0B18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B60
    pri = 0;
    return pri;
// lab_0B60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A90
    pri = 0;
    return pri;
// lab_0B08
    OP_JUMP lab_0B60
}
// fun_0C08
fun_0C08() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C90
    pri = 0;
    return pri;
// lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JZER lab_0DC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE8
    OP_ZERO_P_S 64
// lab_0DC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF8
    OP_CONST_S 64, 1
// lab_0DF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E30
    OP_CONST_S 72, 1
// lab_0E30
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
// lab_0CE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D10
    OP_ZERO_P_S 72
// lab_0D10
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
    OP_JUMP lab_0ED0
// lab_0ED0
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10D0
fun_10D0() {
    OP_JUMP lab_10E8
// lab_10E8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1178
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1168
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1178
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1208
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1208
    pri = 0;
    return pri;
// lab_11F8
    OP_JUMP lab_1218
// lab_1218
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10E8
    pri = 0;
    return pri;
// lab_1168
    OP_JUMP lab_1218
}
// fun_1258
fun_1258() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10D0(var_40)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
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
// switch_1990
        case default:
        {
// switch_1990_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19D8
// lab_19D8
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
            OP_JNZ lab_1A80
            var_88 = 0;
            pri = fun_1C38()
// lab_1A80
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1990_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1578
                case default:
                {
// switch_1578_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F0
// lab_15F0
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_1578_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15F0
                }
                case 0x1:
                {
// switch_1578_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15F0
                }
                case 0x2:
                {
// switch_1578_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15F0
                }
                case 0x3:
                {
// switch_1578_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F0
                }
                case 0x4:
                {
// switch_1578_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15F0
                }
                case 0x5:
                {
// switch_1578_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15F0
                }
            }
        }
        case 0x65:
        {
// switch_1990_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1730
                case default:
                {
// switch_1730_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17A8
// lab_17A8
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_1730_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17A8
                }
                case 0x1:
                {
// switch_1730_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17A8
                }
                case 0x2:
                {
// switch_1730_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17A8
                }
                case 0x3:
                {
// switch_1730_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17A8
                }
                case 0x4:
                {
// switch_1730_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17A8
                }
                case 0x5:
                {
// switch_1730_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17A8
                }
            }
        }
        case 0x66:
        {
// switch_1990_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18E8
                case default:
                {
// switch_18E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1960
// lab_1960
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_18E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1960
                }
                case 0x1:
                {
// switch_18E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1960
                }
                case 0x2:
                {
// switch_18E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1960
                }
                case 0x3:
                {
// switch_18E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1960
                }
                case 0x4:
                {
// switch_18E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1960
                }
                case 0x5:
                {
// switch_18E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1960
                }
            }
        }
    }
}
// fun_1A98
fun_1A98() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B40
    pri = 1;
    return pri;
// lab_1B40
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B88
fun_1B88() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1BD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A98(var_8)
    arg_2 = pri;
// lab_1BD8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1378(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
    OP_JUMP lab_1C50
// lab_1C50
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C90
    pri = 0;
    return pri;
// lab_1C90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C50
    pri = 0;
    return pri;
}
// fun_1CD0
fun_1CD0() {
    var_8 = 0;
    pri = fun_1C38()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D80
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D80
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1DF0
// lab_1DF0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E30
    OP_JUMP lab_1E60
// lab_1E30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DF0
// lab_1E60
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
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
// fun_1F18
fun_1F18() {
    OP_JUMP lab_1F30
// lab_1F30
    pri = EvCameraMoveWait_()
    OP_JZER lab_1F68
    pri = 0;
    return pri;
// lab_1F68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F30
    pri = 0;
    return pri;
}
// fun_1FA8
fun_1FA8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2010(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_20E8()
    pri = 0;
    return pri;
}
// fun_2010
fun_2010() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2068
fun_2068() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2010(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_20E8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    OP_JUMP lab_2100
// lab_2100
    pri = IsEasingRunningDof_()
    OP_JZER lab_2158
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2168
// lab_2158
    pri = 0;
    return pri;
// lab_2168
    OP_JUMP lab_2100
    pri = 0;
    return pri;
}
// fun_2188
fun_2188() {
    pri = arg_6;
    OP_JNZ lab_21C0
    var_8 = 0;
    pri = fun_0EE0()
// lab_21C0
    pri = arg_1;
    switch (pri) {
// switch_3728
        case default:
        {
// switch_3728_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3A78
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3A78
            pri = 1;
            OP_JUMP lab_3A80
// lab_3A78
            pri = 0;
// lab_3A80
            OP_JZER lab_3BD8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
            OP_JUMP lab_3C38
// lab_3BD8
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
// lab_3C38
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3C98
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3CF8
// lab_3C98
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3CF8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3CF8
            pri = arg_2;
            OP_JZER lab_3D38
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3D38
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3728_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x1:
        {
// switch_3728_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x2:
        {
// switch_3728_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x3:
        {
// switch_3728_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x4:
        {
// switch_3728_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x5:
        {
// switch_3728_case_0x5
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x6:
        {
// switch_3728_case_0x6
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x7:
        {
// switch_3728_case_0x7
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x8:
        {
// switch_3728_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x9:
        {
// switch_3728_case_0x9
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xa:
        {
// switch_3728_case_0xa
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xb:
        {
// switch_3728_case_0xb
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xc:
        {
// switch_3728_case_0xc
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xd:
        {
// switch_3728_case_0xd
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xe:
        {
// switch_3728_case_0xe
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0xf:
        {
// switch_3728_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x10:
        {
// switch_3728_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x11:
        {
// switch_3728_case_0x11
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x12:
        {
// switch_3728_case_0x12
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x13:
        {
// switch_3728_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x14:
        {
// switch_3728_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x15:
        {
// switch_3728_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x16:
        {
// switch_3728_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x17:
        {
// switch_3728_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x18:
        {
// switch_3728_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x19:
        {
// switch_3728_case_0x19
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3728_case_default
        }
        case 0x1a:
        {
// switch_3728_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3728_case_default
        }
        case 0x1b:
        {
// switch_3728_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3728_case_default
        }
        case 0x1c:
        {
// switch_3728_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3728_case_default
        }
        case 0x1d:
        {
// switch_3728_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x1e:
        {
// switch_3728_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x1f:
        {
// switch_3728_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x20:
        {
// switch_3728_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x21:
        {
// switch_3728_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x22:
        {
// switch_3728_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x23:
        {
// switch_3728_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x24:
        {
// switch_3728_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x25:
        {
// switch_3728_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x26:
        {
// switch_3728_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x27:
        {
// switch_3728_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x28:
        {
// switch_3728_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
        case 0x29:
        {
// switch_3728_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3728_case_default
        }
    }
}
// fun_3D68
fun_3D68() {
    pri = arg_5;
    OP_JNZ lab_3DA0
    var_8 = 0;
    pri = fun_0EE0()
// lab_3DA0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3DF0
    OP_CONST_S -8, -1
// lab_3DF0
    pri = arg_1;
    switch (pri) {
// switch_58A8
        case default:
        {
// switch_58A8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5D50
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09D0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5D50
            pri = 1;
            OP_JUMP lab_5D58
// lab_5D50
            pri = 0;
// lab_5D58
            OP_JZER lab_5DA8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6000
// lab_5DA8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5E10
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5E10
            pri = 1;
            OP_JUMP lab_5E18
// lab_5E10
            pri = 0;
// lab_5E18
            OP_JZER lab_5FA0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
            OP_JUMP lab_6000
// lab_5FA0
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
// lab_6000
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6070
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6070
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_58A8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1:
        {
// switch_58A8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2:
        {
// switch_58A8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3:
        {
// switch_58A8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x4:
        {
// switch_58A8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x5:
        {
// switch_58A8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_58A8_case_default
        }
        case 0x6:
        {
// switch_58A8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x7:
        {
// switch_58A8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x8:
        {
// switch_58A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x9:
        {
// switch_58A8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0xa:
        {
// switch_58A8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0xb:
        {
// switch_58A8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0xc:
        {
// switch_58A8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0xd:
        {
// switch_58A8_case_0xd
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0xe:
        {
// switch_58A8_case_0xe
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0xf:
        {
// switch_58A8_case_0xf
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x10:
        {
// switch_58A8_case_0x10
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x11:
        {
// switch_58A8_case_0x11
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x12:
        {
// switch_58A8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x13:
        {
// switch_58A8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x14:
        {
// switch_58A8_case_0x14
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x15:
        {
// switch_58A8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x16:
        {
// switch_58A8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x17:
        {
// switch_58A8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x18:
        {
// switch_58A8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x19:
        {
// switch_58A8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1a:
        {
// switch_58A8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1b:
        {
// switch_58A8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1c:
        {
// switch_58A8_case_0x1c
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1d:
        {
// switch_58A8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1e:
        {
// switch_58A8_case_0x1e
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x1f:
        {
// switch_58A8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x20:
        {
// switch_58A8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x21:
        {
// switch_58A8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x22:
        {
// switch_58A8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x23:
        {
// switch_58A8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x24:
        {
// switch_58A8_case_0x24
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x25:
        {
// switch_58A8_case_0x25
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x26:
        {
// switch_58A8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x27:
        {
// switch_58A8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x28:
        {
// switch_58A8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x29:
        {
// switch_58A8_case_0x29
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2a:
        {
// switch_58A8_case_0x2a
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2b:
        {
// switch_58A8_case_0x2b
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2c:
        {
// switch_58A8_case_0x2c
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2d:
        {
// switch_58A8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2e:
        {
// switch_58A8_case_0x2e
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x2f:
        {
// switch_58A8_case_0x2f
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x30:
        {
// switch_58A8_case_0x30
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x31:
        {
// switch_58A8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x32:
        {
// switch_58A8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x33:
        {
// switch_58A8_case_0x33
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x34:
        {
// switch_58A8_case_0x34
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x35:
        {
// switch_58A8_case_0x35
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x36:
        {
// switch_58A8_case_0x36
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x37:
        {
// switch_58A8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x38:
        {
// switch_58A8_case_0x38
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_58A8_case_default
        }
        case 0x39:
        {
// switch_58A8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3a:
        {
// switch_58A8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3b:
        {
// switch_58A8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3c:
        {
// switch_58A8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3d:
        {
// switch_58A8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
        case 0x3e:
        {
// switch_58A8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_58A8_case_default
        }
    }
}
// fun_60A0
fun_60A0() {
    pri = arg_4;
    OP_JNZ lab_60D8
    var_8 = 0;
    pri = fun_0EE0()
// lab_60D8
    pri = arg_1;
    switch (pri) {
// switch_74B0
        case default:
        {
// switch_74B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1070(var_264)
            OP_JZER lab_7A78
            pri = arg_3;
            switch (pri) {
// switch_7A20
                case default:
                {
// switch_7A20_case_default
                    OP_JUMP lab_7D30
// lab_7D30
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7DA0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7DA0
                    var_8 = 0;
                    pri = fun_0F20()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7A20_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A20_case_default
                }
                case 0x2:
                {
// switch_7A20_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A20_case_default
                }
                case 0x3:
                {
// switch_7A20_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A20_case_default
                }
            }
// lab_7A78
            pri = arg_1;
            OP_JZER lab_7AC8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7AC8
            pri = 0;
            OP_JUMP lab_7AD0
// lab_7AC8
            pri = 1;
// lab_7AD0
            OP_JZER lab_7B38
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09D0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7B38
            pri = 1;
            OP_JUMP lab_7B40
// lab_7B38
            pri = 0;
// lab_7B40
            OP_JZER lab_7B90
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7D30
// lab_7B90
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7BF8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7D30
// lab_7BF8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
// switch_74B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1:
        {
// switch_74B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2:
        {
// switch_74B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3:
        {
// switch_74B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x4:
        {
// switch_74B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x5:
        {
// switch_74B0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_74B0_case_default
        }
        case 0x6:
        {
// switch_74B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x7:
        {
// switch_74B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x8:
        {
// switch_74B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x9:
        {
// switch_74B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xa:
        {
// switch_74B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xb:
        {
// switch_74B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xc:
        {
// switch_74B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xd:
        {
// switch_74B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xe:
        {
// switch_74B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0xf:
        {
// switch_74B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x10:
        {
// switch_74B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x11:
        {
// switch_74B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x12:
        {
// switch_74B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x13:
        {
// switch_74B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x14:
        {
// switch_74B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x15:
        {
// switch_74B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x16:
        {
// switch_74B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x17:
        {
// switch_74B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x18:
        {
// switch_74B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x19:
        {
// switch_74B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1a:
        {
// switch_74B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1b:
        {
// switch_74B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1c:
        {
// switch_74B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1d:
        {
// switch_74B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1e:
        {
// switch_74B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x1f:
        {
// switch_74B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x20:
        {
// switch_74B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x21:
        {
// switch_74B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x22:
        {
// switch_74B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x23:
        {
// switch_74B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x24:
        {
// switch_74B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x25:
        {
// switch_74B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x26:
        {
// switch_74B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x27:
        {
// switch_74B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x28:
        {
// switch_74B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x29:
        {
// switch_74B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2a:
        {
// switch_74B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2b:
        {
// switch_74B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2c:
        {
// switch_74B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2d:
        {
// switch_74B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2e:
        {
// switch_74B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x2f:
        {
// switch_74B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x30:
        {
// switch_74B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x31:
        {
// switch_74B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x32:
        {
// switch_74B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x33:
        {
// switch_74B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x34:
        {
// switch_74B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x35:
        {
// switch_74B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x36:
        {
// switch_74B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x37:
        {
// switch_74B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x38:
        {
// switch_74B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x39:
        {
// switch_74B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3a:
        {
// switch_74B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3b:
        {
// switch_74B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3c:
        {
// switch_74B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3d:
        {
// switch_74B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
        case 0x3e:
        {
// switch_74B0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_74B0_case_default
        }
    }
}
// fun_7DD0
fun_7DD0() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7E58
// lab_7E58
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7FD8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7FC8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7F18
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7F18
    pri = 0;
    OP_JUMP lab_7F20
// lab_7FD8
    pri = 0;
    return pri;
// lab_7FC8
    OP_JUMP lab_7E50
// lab_7E50
    OP_INC_P_S -936
// lab_7F18
    pri = 1;
// lab_7F20
    OP_JZER lab_7F98
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7F90
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7F98
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7F90
}
// fun_7FF8
fun_7FF8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8090
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1318()
// lab_8090
    pri = arg_4;
    OP_JZER lab_80C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1340(var_8)
// lab_80C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8120
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8120
    pri = 0;
    OP_JUMP lab_8128
// lab_8120
    pri = 1;
// lab_8128
    OP_JZER lab_81F0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_81F0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_81C8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1258(var_32, var_24)
    OP_JUMP lab_81F0
// lab_81F0
    pri = arg_2;
    OP_JZER lab_82C8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8298
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FB8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06D8(var_40)
    OP_JUMP lab_82C8
// lab_82C8
    pri = arg_3;
    OP_JZER lab_8300
    var_8 = 1;
    var_16 = 8;
    pri = fun_12E0(var_8)
// lab_8300
    pri = 0;
    return pri;
// lab_8298
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
// lab_81C8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1258(var_16, var_8)
}
// fun_8310
fun_8310() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7DD0(var_24)
    pri = 0;
    return pri;
}
// fun_8378
fun_8378() {
    pri = g_mode;
    switch (pri) {
// switch_8438
        case default:
        {
// switch_8438_case_default
            pri = CommandNOP()
            OP_JUMP lab_8480
// lab_8480
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8438_case_0x0
            var_8 = 0;
            pri = fun_8490()
            OP_JUMP lab_8480
        }
        case 0x1f7f762ae1d8f869:
        {
// switch_8438_case_0x1f7f762ae1d8f869
            var_8 = 0;
            pri = fun_B4A0()
            OP_JUMP lab_8480
        }
        case 0x46c864277e98da65:
        {
// switch_8438_case_0x46c864277e98da65
            var_8 = 0;
            pri = fun_B590()
            OP_JUMP lab_8480
        }
    }
}
// fun_8490
fun_8490() {
    pri = 0;
    return pri;
}
// fun_84A8
fun_84A8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7FF8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8500
fun_8500() {
    pri = 0;
    return pri;
}
// fun_8518
fun_8518() {
    pri = 0;
    return pri;
}
// fun_8530
fun_8530() {
    var_8 = 5;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = EvCameraStart()
    var_24 = 0;
    var_32 = -4616189618054758400;
    var_40 = -1;
    OP_PUSH5_C 4667068693996371968, 4640354244805368218, 4662207808065555661, 4667156270097524326, 4640326097307697152
    var_48 = 4662207698114392883;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 1;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4636033603912859648, 4666847417281282048, 4659391628933332992, 8802641224559852288
    var_96 = 48;
    pri = fun_0648(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C -4587338432941916160, 4666900193839415296, 4660134898793709568, -4463401185607446837
    var_120 = 48;
    pri = fun_0648(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4636033603912859648, 4666910089444065280, 4659123348096155648, 3007338827744228661
    var_144 = 48;
    pri = fun_0648(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C 4636033603912859648, 4666877653851045888, 4661192628979630080, -259633803849608692
    var_168 = 48;
    pri = fun_0648(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 0;
    var_184 = 8802641224559852288;
    var_192 = 16;
    pri = fun_06A0(var_184, var_176)
    var_200 = 0;
    var_208 = -4463401185607446837;
    var_216 = 16;
    pri = fun_06A0(var_208, var_200)
    var_224 = 0;
    var_232 = 3007338827744228661;
    var_240 = 16;
    pri = fun_06A0(var_232, var_224)
    var_248 = 0;
    var_256 = -259633803849608692;
    var_264 = 16;
    pri = fun_06A0(var_256, var_248)
    var_272 = 1;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 6;
    var_296 = 8802641224559852288;
    var_304 = 16;
    pri = fun_0FF8(var_296, var_288)
    var_312 = 31016;
    var_320 = 8;
    var_328 = 16;
    pri = fun_0280(var_320, var_312)
    var_336 = 0;
    pri = fun_0350()
    var_344 = 1;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 0;
    var_368 = -4616189618054758400;
    var_376 = 3;
    OP_PUSH5_C 4666219376239496397, 4640354244805368218, 4662212755867880653, 4666262477095305216, 4630277440639126733
    var_384 = 4662212645916717875;
    var_392 = 120;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 0;
    pri = fun_1F18()
    var_408 = 0;
    var_416 = 4631952216750555136;
    var_424 = 0;
    OP_PUSH5_C 4666931958730341745, 4650833822071096607, 4659749300065848525, 4667252207984605921, 4651091635557577523
    var_432 = 4660750295451775795;
    var_440 = 1;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 0;
    pri = fun_1F18()
    var_456 = 1;
    var_464 = 8802641224559852288;
    var_472 = 16;
    pri = fun_06A0(var_464, var_456)
    var_480 = 1;
    var_488 = -4463401185607446837;
    var_496 = 16;
    pri = fun_06A0(var_488, var_480)
    var_504 = 1;
    var_512 = 3007338827744228661;
    var_520 = 16;
    pri = fun_06A0(var_512, var_504)
    var_528 = 0;
    var_536 = 4631952216750555136;
    var_544 = 3;
    OP_PUSH5_C 4666942530534642811, 4643066959893417165, 4659782285414681805, 4667262779788906988, 4643654714829161103
    var_552 = 4660783258810376520;
    var_560 = 90;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 30;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 1;
    var_592 = 0;
    var_600 = 4641240890982006784;
    var_608 = 0;
    var_616 = 0;
    OP_PUSH4_C 4666910089444065280, 4661014508095930368, 4611686018427387904, 3007338827744228661
    var_624 = 72;
    pri = fun_0710(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 1;
    var_640 = 0;
    var_648 = 4641240890982006784;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH4_C 4666833123630120960, 4661014508095930368, 4611686018427387904, 8802641224559852288
    var_672 = 72;
    pri = fun_0710(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 1;
    var_688 = 0;
    var_696 = 4641240890982006784;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH4_C 4666870507025465344, 4661014508095930368, 4611686018427387904, -4463401185607446837
    var_720 = 72;
    pri = fun_0710(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 0;
    pri = fun_1F18()
    var_736 = 30;
    var_744 = 8;
    pri = fun_0060(var_736)
    var_752 = -4463401185607446837;
    var_760 = 8;
    pri = fun_0830(var_752)
    var_768 = 1;
    var_776 = 1;
    OP_PUSH4_C 4636737291354636288, 4666895246037090304, 4661614841444696064, -4463401185607446837
    var_784 = 48;
    pri = fun_0648(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 0;
    var_800 = 4629798933178718618;
    var_808 = 0;
    OP_PUSH5_C 4666676943500953518, 4642495917534415421, 4662101386335103222, 4667053515238350520, 4636593035429072077
    var_816 = 4661834007097460654;
    var_824 = 1;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 1;
    var_840 = 8;
    pri = fun_0060(var_832)
    var_848 = 1;
    var_856 = 0;
    var_864 = 4641240890982006784;
    var_872 = 0;
    var_880 = 0;
    OP_PUSH4_C 4666773200246407168, 4662126114351611904, 4611686018427387904, -4463401185607446837
    var_888 = 72;
    pri = fun_0710(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = -4463401185607446837;
    var_904 = 8;
    pri = fun_0830(var_896)
    var_912 = 0;
    var_920 = 0;
    var_928 = 0;
    var_936 = 180;
    pri = float(var_936)
    var_944 = pri;
    var_952 = -4463401185607446837;
    var_960 = 40;
    pri = fun_0788(var_952, var_944, var_936, var_928, var_920)
    var_968 = -4463401185607446837;
    var_976 = 8;
    pri = fun_0830(var_968)
    var_984 = 1;
    var_992 = 1;
    var_1000 = -1;
    var_1008 = -1;
    var_1016 = 0;
    var_1024 = 22;
    var_1032 = -4463401185607446837;
    var_1040 = 56;
    pri = fun_3D68(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    OP_PUSH2_C 2637826451628405250, -4463401185607446837
    var_1088 = 56;
    pri = fun_1B88(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 1;
    var_1104 = 8;
    pri = fun_1CD0(var_1096)
    var_1112 = 0;
    pri = fun_1D90()
    var_1120 = 8802641224559852288;
    var_1128 = 8;
    pri = fun_0830(var_1120)
    var_1136 = 3007338827744228661;
    var_1144 = 8;
    pri = fun_0830(var_1136)
    var_1152 = 1;
    var_1160 = 1;
    OP_PUSH4_C 4634626229029306368, 4666783645606871040, 4661317973305196544, 8802641224559852288
    var_1168 = 48;
    pri = fun_0648(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1176 = 1;
    var_1184 = 1;
    OP_PUSH4_C 4636033603912859648, 4666877104095232000, 4661317973305196544, 3007338827744228661
    var_1192 = 48;
    pri = fun_0648(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1200 = 1;
    var_1208 = 0;
    var_1216 = 4641240890982006784;
    var_1224 = 0;
    var_1232 = 0;
    OP_PUSH4_C 4666746262211526656, 4661889719351640064, 4611686018427387904, 8802641224559852288
    var_1240 = 72;
    pri = fun_0710(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1248 = 5;
    var_1256 = 8;
    pri = fun_0060(var_1248)
    var_1264 = 1;
    var_1272 = 0;
    var_1280 = 4641240890982006784;
    var_1288 = 0;
    var_1296 = 0;
    OP_PUSH4_C 4666783645606871040, 4661732489188868096, 4611686018427387904, 3007338827744228661
    var_1304 = 72;
    pri = fun_0710(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1312 = 0;
    var_1320 = 4629798933178718618;
    var_1328 = 3;
    OP_PUSH5_C 4666749962068154122, 4636835103909043241, 4661925453479542784, 4666996230682543391, 4643029664459003003
    var_1336 = 4662342839088562831;
    var_1344 = 60;
    pri = EvCameraMove(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1352 = 30;
    var_1360 = 8;
    pri = fun_0060(var_1352)
    var_1368 = 1;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 22;
    var_1400 = -4463401185607446837;
    var_1408 = 40;
    pri = fun_60A0(var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1416 = -4463401185607446837;
    var_1424 = 8;
    pri = fun_0A08(var_1416)
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = 250;
    pri = float(var_1456)
    var_1464 = pri;
    var_1472 = -4463401185607446837;
    var_1480 = 40;
    pri = fun_0788(var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1488 = 3007338827744228661;
    var_1496 = 8;
    pri = fun_0830(var_1488)
    var_1504 = 8802641224559852288;
    var_1512 = 8;
    pri = fun_0830(var_1504)
    var_1520 = -4463401185607446837;
    var_1528 = 8;
    pri = fun_0830(var_1520)
    var_1536 = 0;
    pri = fun_1F18()
    var_1544 = 0;
    var_1552 = 0;
    var_1560 = 0;
    var_1568 = 0;
    OP_PUSH2_C -4463401185607446837, 8802641224559852288
    var_1576 = 48;
    pri = fun_07D8(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = 0;
    OP_PUSH2_C -4463401185607446837, 3007338827744228661
    var_1616 = 48;
    pri = fun_07D8(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1624 = 8802641224559852288;
    var_1632 = 8;
    pri = fun_0830(var_1624)
    var_1640 = 3007338827744228661;
    var_1648 = 8;
    pri = fun_0830(var_1640)
    var_1656 = 1;
    var_1664 = 1;
    var_1672 = -1;
    var_1680 = -1;
    var_1688 = 0;
    var_1696 = 1;
    var_1704 = 3007338827744228661;
    var_1712 = 56;
    pri = fun_3D68(var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1720 = 0;
    var_1728 = 3;
    var_1736 = 0;
    var_1744 = 100;
    var_1752 = -1;
    OP_PUSH2_C -3388743611999353950, 3007338827744228661
    var_1760 = 56;
    pri = fun_1B88(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = 1;
    var_1776 = 8;
    pri = fun_1CD0(var_1768)
    var_1784 = 0;
    pri = fun_1D90()
    var_1792 = 1;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = 3007338827744228661;
    var_1832 = 40;
    pri = fun_60A0(var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1840 = 0;
    var_1848 = 0;
    var_1856 = 0;
    var_1864 = 0;
    OP_PUSH2_C 8802641224559852288, -4463401185607446837
    var_1872 = 48;
    pri = fun_07D8(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1880 = -4463401185607446837;
    var_1888 = 8;
    pri = fun_0830(var_1880)
    var_1896 = 0;
    var_1904 = 3;
    var_1912 = 0;
    var_1920 = 100;
    var_1928 = -1;
    OP_PUSH2_C 2637825352116777039, -4463401185607446837
    var_1936 = 56;
    pri = fun_1B88(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1944 = 1;
    var_1952 = 8;
    pri = fun_1CD0(var_1944)
    var_1960 = 0;
    var_1968 = -7957094158006321586;
    var_1976 = 0;
    var_1984 = 24;
    pri = fun_1DC0(var_1976, var_1968, var_1960)
    var_1992 = 0;
    var_2000 = -7957095257517949797;
    var_2008 = 1;
    var_2016 = 24;
    pri = fun_1DC0(var_2008, var_2000, var_1992)
    var_2032 = 0;
    var_2040 = 0;
    var_2048 = 0;
    var_2056 = 1;
    var_2064 = 32;
    pri = fun_1EA8(var_2056, var_2048, var_2040, var_2032)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9B18
        case default:
        {
// switch_9B18_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            OP_PUSH2_C 8802641224559852288, 3007338827744228661
            var_40 = 48;
            pri = fun_07D8(var_32, var_24, var_16, var_8, var_0, var_-8)
            var_48 = 4;
            var_56 = 8;
            pri = fun_0060(var_48)
            var_64 = 0;
            var_72 = 0;
            var_80 = 0;
            var_88 = 0;
            OP_PUSH2_C 3007338827744228661, 8802641224559852288
            var_96 = 48;
            pri = fun_07D8(var_88, var_80, var_72, var_64, var_56, var_48)
            var_104 = 3007338827744228661;
            var_112 = 8;
            pri = fun_0830(var_104)
            var_120 = 8802641224559852288;
            var_128 = 8;
            pri = fun_0830(var_120)
            var_136 = 1;
            var_144 = 1;
            var_152 = -1;
            var_160 = -1;
            var_168 = 0;
            var_176 = 2;
            var_184 = 3007338827744228661;
            var_192 = 56;
            pri = fun_3D68(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = 0;
            var_208 = 3;
            var_216 = 0;
            var_224 = 100;
            var_232 = -1;
            OP_PUSH2_C -3388744711510982161, 3007338827744228661
            var_240 = 56;
            pri = fun_1B88(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            var_248 = 1;
            var_256 = 8;
            pri = fun_1CD0(var_248)
            var_264 = 0;
            pri = fun_1D90()
            var_272 = 1;
            var_280 = 3;
            var_288 = 0;
            var_296 = 2;
            var_304 = 3007338827744228661;
            var_312 = 40;
            pri = fun_60A0(var_304, var_296, var_288, var_280, var_272)
            var_320 = 3007338827744228661;
            var_328 = 8;
            pri = fun_0A08(var_320)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_336 = 16;
            pri = fun_1FA8(var_328, var_320)
            var_344 = 3;
            var_352 = 1;
            OP_PUSH2_C 4639438114124919210, 4611686018427387904
            var_360 = 32;
            pri = fun_2010(var_352, var_344, var_336, var_328)
            var_368 = 0;
            var_376 = 4629798933178718618;
            var_384 = 0;
            OP_PUSH5_C 4666800957417450373, 4639065441255754301, 4661844562409087304, 4666818241740239012, 4638757929843697910
            var_392 = 4661884232788617462;
            var_400 = 1;
            pri = EvCameraMove(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
            var_408 = 0;
            pri = fun_1F18()
            var_416 = 0;
            var_424 = 4629798933178718618;
            var_432 = 3;
            OP_PUSH5_C 4666807092692333363, 4639065441255754301, 4661833864160949043, 4666824382512680141, 4638757577999977021
            var_440 = 4661873534540479201;
            var_448 = 200;
            pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
            var_456 = 30;
            var_464 = 8;
            pri = fun_0060(var_456)
            var_472 = 0;
            var_480 = 3;
            var_488 = 0;
            var_496 = 100;
            var_504 = -1;
            OP_PUSH2_C -3388746910534238583, 3007338827744228661
            var_512 = 56;
            pri = fun_1B88(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_520 = 1;
            var_528 = 8;
            pri = fun_1CD0(var_520)
            var_536 = 0;
            var_544 = 3;
            var_552 = 0;
            var_560 = 100;
            var_568 = -1;
            OP_PUSH2_C -3388748010045866794, 3007338827744228661
            var_576 = 56;
            pri = fun_1B88(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
            var_584 = 1;
            var_592 = 8;
            pri = fun_1CD0(var_584)
            var_600 = 0;
            pri = fun_1D90()
            var_608 = 30;
            var_616 = 8;
            pri = fun_0060(var_608)
            var_624 = 1;
            var_632 = -259633803849608692;
            var_640 = 16;
            pri = fun_06A0(var_632, var_624)
            var_648 = 1;
            var_656 = 0;
            var_664 = 4641240890982006784;
            var_672 = 0;
            var_680 = 0;
            OP_PUSH4_C 4666866658734768128, 4661667618002829312, 4607182418800017408, -259633803849608692
            var_688 = 72;
            pri = fun_0710(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
            var_696 = 0;
            var_704 = 4629798933178718618;
            var_712 = 3;
            OP_PUSH5_C 4666799011281869210, 4640160730758879642, 4661830103831182049, 4666799165213497098, 4640410187956989460
            var_720 = 4661883001335594353;
            var_728 = 30;
            pri = EvCameraMove(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_736 = 3;
            var_744 = 30;
            var_752 = 32;
            pri = fun_2068(var_744, var_736, var_728, var_720)
            var_760 = 40;
            var_768 = 8;
            pri = fun_0060(var_760)
            var_776 = 0;
            var_784 = 4629798933178718618;
            var_792 = 0;
            OP_PUSH5_C 4666830242909656187, 4639531986029652214, 4662062408647898563, 4666899957444415324, 4643386082148262871
            var_800 = 4662473790923430953;
            var_808 = 1;
            pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
            var_816 = 1;
            var_824 = 1;
            var_832 = -1;
            OP_PUSH2_C -259633803849608692, 8802641224559852288
            var_840 = 40;
            pri = fun_0F60(var_832, var_824, var_816, var_808, var_800)
            var_848 = 1;
            var_856 = 1;
            var_864 = -1;
            OP_PUSH2_C -259633803849608692, -4463401185607446837
            var_872 = 40;
            pri = fun_0F60(var_864, var_856, var_848, var_840, var_832)
            var_880 = 1;
            var_888 = 1;
            var_896 = -1;
            OP_PUSH2_C -259633803849608692, 3007338827744228661
            var_904 = 40;
            pri = fun_0F60(var_896, var_888, var_880, var_872, var_864)
            var_912 = 0;
            var_920 = 3;
            var_928 = 0;
            var_936 = 100;
            var_944 = -1;
            OP_PUSH2_C -3566807517551841656, -259633803849608692
            var_952 = 56;
            pri = fun_1B88(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_960 = 1;
            var_968 = 8;
            pri = fun_1CD0(var_960)
            var_976 = 0;
            pri = fun_1D90()
            var_984 = -259633803849608692;
            var_992 = 8;
            pri = fun_0830(var_984)
            var_1000 = 0;
            var_1008 = 4629798933178718618;
            var_1016 = 3;
            OP_PUSH5_C 4666877153573255250, 4640295838747700756, 4662033458506739220, 4667019534831494103, 4644158027271891845
            var_1024 = 4662460805691106918;
            var_1032 = 60;
            pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
            var_1040 = 0;
            var_1048 = 0;
            var_1056 = 0;
            var_1064 = 0;
            OP_PUSH2_C 8802641224559852288, -259633803849608692
            var_1072 = 48;
            pri = fun_07D8(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
            var_1080 = 0;
            var_1088 = 3;
            var_1096 = 0;
            var_1104 = 100;
            var_1112 = -1;
            OP_PUSH2_C -3566800920482072390, -259633803849608692
            var_1120 = 56;
            pri = fun_1B88(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
            var_1128 = 1;
            var_1136 = 8;
            pri = fun_1CD0(var_1128)
            var_1144 = 0;
            pri = fun_1D90()
            var_1152 = 0;
            var_1160 = 0;
            var_1168 = 0;
            var_1176 = 0;
            OP_PUSH2_C -259633803849608692, 8802641224559852288
            var_1184 = 48;
            pri = fun_07D8(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
            var_1192 = 0;
            var_1200 = 0;
            var_1208 = 0;
            var_1216 = 0;
            OP_PUSH2_C -259633803849608692, -4463401185607446837
            var_1224 = 48;
            pri = fun_07D8(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
            var_1232 = 0;
            var_1240 = 0;
            var_1248 = 0;
            var_1256 = 0;
            OP_PUSH2_C -259633803849608692, 3007338827744228661
            var_1264 = 48;
            pri = fun_07D8(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
            var_1272 = -259633803849608692;
            var_1280 = 8;
            pri = fun_0830(var_1272)
            var_1288 = 8802641224559852288;
            var_1296 = 8;
            pri = fun_0830(var_1288)
            var_1304 = -4463401185607446837;
            var_1312 = 8;
            pri = fun_0830(var_1304)
            var_1320 = 3007338827744228661;
            var_1328 = 8;
            pri = fun_0830(var_1320)
            var_1336 = 1;
            var_1344 = 1;
            var_1352 = -1;
            var_1360 = -1;
            var_1368 = 0;
            var_1376 = 0;
            var_1384 = -259633803849608692;
            var_1392 = 56;
            pri = fun_3D68(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
            var_1400 = 0;
            var_1408 = 3;
            var_1416 = 0;
            var_1424 = 100;
            var_1432 = -1;
            OP_PUSH2_C -3566806418040213445, -259633803849608692
            var_1440 = 56;
            pri = fun_1B88(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
            var_1448 = 1;
            var_1456 = 8;
            pri = fun_1CD0(var_1448)
            var_1464 = 0;
            pri = fun_1D90()
            var_1472 = 1;
            var_1480 = 3;
            var_1488 = 0;
            var_1496 = 0;
            var_1504 = -259633803849608692;
            var_1512 = 40;
            pri = fun_60A0(var_1504, var_1496, var_1488, var_1480, var_1472)
            var_1520 = -259633803849608692;
            var_1528 = 8;
            pri = fun_0A08(var_1520)
            var_1536 = 0;
            var_1544 = 0;
            var_1552 = 0;
            var_1560 = 0;
            OP_PUSH2_C 8802641224559852288, 3007338827744228661
            var_1568 = 48;
            pri = fun_07D8(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
            var_1576 = 4;
            var_1584 = 8;
            pri = fun_0060(var_1576)
            var_1592 = 3007338827744228661;
            var_1600 = 8;
            pri = fun_0830(var_1592)
            var_1608 = -1;
            var_1616 = 8802641224559852288;
            var_1624 = 16;
            pri = fun_0FB8(var_1616, var_1608)
            var_1632 = -1;
            var_1640 = -4463401185607446837;
            var_1648 = 16;
            pri = fun_0FB8(var_1640, var_1632)
            var_1656 = -1;
            var_1664 = 3007338827744228661;
            var_1672 = 16;
            pri = fun_0FB8(var_1664, var_1656)
            var_1680 = 1;
            var_1688 = 1;
            var_1696 = -1;
            var_1704 = -1;
            var_1712 = 0;
            var_1720 = 1;
            var_1728 = 3007338827744228661;
            var_1736 = 56;
            pri = fun_3D68(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
            var_1744 = 0;
            var_1752 = 3;
            var_1760 = 0;
            var_1768 = 100;
            var_1776 = -1;
            OP_PUSH2_C -3388745811022610372, 3007338827744228661
            var_1784 = 56;
            pri = fun_1B88(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
            var_1792 = 1;
            var_1800 = 8;
            pri = fun_1CD0(var_1792)
            var_1808 = 0;
            pri = fun_1D90()
            var_1816 = 1;
            var_1824 = 3;
            var_1832 = 0;
            var_1840 = 1;
            var_1848 = 3007338827744228661;
            var_1856 = 40;
            pri = fun_60A0(var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1864 = 3007338827744228661;
            var_1872 = 8;
            pri = fun_0A08(var_1864)
            var_1880 = 0;
            var_1888 = 4629798933178718618;
            var_1896 = 0;
            OP_PUSH5_C 4666704986545019945, 4637547235600121201, 4662069390546734940, 4666940628379526758, 4640298301653746975
            var_1904 = 4661715523724451512;
            var_1912 = 1;
            pri = EvCameraMove(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
            var_1920 = 0;
            pri = fun_1F18()
            var_1928 = 0;
            var_1936 = 0;
            var_1944 = 0;
            var_1952 = 0;
            OP_PUSH2_C 8802641224559852288, -4463401185607446837
            var_1960 = 48;
            pri = fun_07D8(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
            var_1968 = 4;
            var_1976 = 8;
            pri = fun_0060(var_1968)
            var_1984 = 0;
            var_1992 = 0;
            var_2000 = 0;
            var_2008 = 0;
            OP_PUSH2_C -4463401185607446837, 8802641224559852288
            var_2016 = 48;
            pri = fun_07D8(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
            var_2024 = 8802641224559852288;
            var_2032 = 8;
            pri = fun_0830(var_2024)
            var_2040 = -4463401185607446837;
            var_2048 = 8;
            pri = fun_0830(var_2040)
            var_2056 = 1;
            var_2064 = -1;
            var_2072 = -1;
            var_2080 = 3;
            var_2088 = 0;
            var_2096 = 0;
            var_2104 = -4463401185607446837;
            var_2112 = 56;
            pri = fun_2188(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
            var_2120 = 0;
            var_2128 = 3;
            var_2136 = 0;
            var_2144 = 100;
            var_2152 = -1;
            OP_PUSH2_C 2637822053581892406, -4463401185607446837
            var_2160 = 56;
            pri = fun_1B88(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
            var_2168 = 1;
            var_2176 = 8;
            pri = fun_1CD0(var_2168)
            var_2184 = 0;
            pri = fun_1D90()
            var_2192 = -4463401185607446837;
            var_2200 = 8;
            pri = fun_0A08(var_2192)
            var_2208 = 0;
            var_2216 = 4629798933178718618;
            var_2224 = 0;
            OP_PUSH5_C 4666641346812004270, 4640711366182069862, 4662230095166250680, 4667175528043684823, 4639586169962669015
            var_2232 = 4662228489879274127;
            var_2240 = 1;
            pri = EvCameraMove(var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
            var_2248 = 1;
            var_2256 = 1;
            OP_PUSH4_C -4587338432941916160, 4666684689560371200, 4662316329863217152, -4463401185607446837
            var_2264 = 48;
            pri = fun_0648(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
            var_2272 = 1;
            var_2280 = 1;
            OP_PUSH4_C 4636033603912859648, 4666684689560371200, 4662128313374867456, 8802641224559852288
            var_2288 = 48;
            pri = fun_0648(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
            var_2296 = 1;
            var_2304 = 1;
            OP_PUSH4_C 4640537203540230144, 4666833123630120960, 4661966685165584384, -259633803849608692
            var_2312 = 48;
            pri = fun_0648(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
            var_2320 = 1;
            var_2328 = 1;
            OP_PUSH4_C 4640185359819341824, 4666789143165009920, 4661863331072573440, 3007338827744228661
            var_2336 = 48;
            pri = fun_0648(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
            var_2344 = 0;
            pri = fun_1F18()
            var_2352 = 0;
            var_2360 = 0;
            var_2368 = 0;
            var_2376 = 180;
            pri = float(var_2376)
            var_2384 = pri;
            var_2392 = -4463401185607446837;
            var_2400 = 40;
            pri = fun_0788(var_2392, var_2384, var_2376, var_2368, var_2360)
            var_2408 = 0;
            var_2416 = 0;
            var_2424 = 0;
            var_2432 = 180;
            pri = float(var_2432)
            var_2440 = pri;
            var_2448 = 8802641224559852288;
            var_2456 = 40;
            pri = fun_0788(var_2448, var_2440, var_2432, var_2424, var_2416)
            var_2464 = 0;
            var_2472 = 4629798933178718618;
            var_2480 = 3;
            OP_PUSH5_C 4666641346812004270, 4640711366182069862, 4662230095166250680, 4666920182960808264, 4640123787168186368
            var_2488 = 4662229248542297293;
            var_2496 = 120;
            pri = EvCameraMove(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
            var_2504 = 20;
            var_2512 = 8;
            pri = fun_0060(var_2504)
            var_2520 = 1;
            var_2528 = 1;
            var_2536 = -1;
            var_2544 = -1;
            var_2552 = 0;
            var_2560 = 41;
            var_2568 = -259633803849608692;
            var_2576 = 56;
            pri = fun_3D68(var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
            var_2584 = 40;
            var_2592 = 8;
            pri = fun_0060(var_2584)
            var_2600 = 1;
            var_2608 = 0;
            var_2616 = 30968;
            var_2624 = 8;
            var_2632 = 32;
            pri = fun_02E0(var_2624, var_2616, var_2608, var_2600)
            var_2640 = 0;
            pri = fun_0350()
            var_2648 = 8802641224559852288;
            var_2656 = 8;
            pri = fun_1038(var_2648)
            var_2664 = 1;
            var_2672 = 3;
            var_2680 = 0;
            var_2688 = 41;
            var_2696 = -259633803849608692;
            var_2704 = 40;
            pri = fun_60A0(var_2696, var_2688, var_2680, var_2672, var_2664)
            var_2712 = -259633803849608692;
            var_2720 = 8;
            pri = fun_0A08(var_2712)
            OP_PUSH2_C -4463401185607446837, 3429954768966456285
            pri = SetBamiriInfoToChara(var_2720, var_2712)
            OP_PUSH2_C 3007338827744228661, 7367871484628754311
            pri = SetBamiriInfoToChara(var_2720, var_2712)
            OP_PUSH2_C -259633803849608692, 1475741874985849382
            pri = SetBamiriInfoToChara(var_2720, var_2712)
            var_2728 = 1;
            var_2736 = 1;
            OP_PUSH4_C 4640537203540230144, 4666380124839477248, 4662211876258578432, 8802641224559852288
            var_2744 = 48;
            pri = fun_0648(var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
            var_2752 = 3;
            var_2760 = 1;
            pri = EvCameraEnd(var_2760, var_2752)
            var_2768 = -4463401185607446837;
            var_2776 = 8;
            pri = fun_0830(var_2768)
            var_2784 = 8802641224559852288;
            var_2792 = 8;
            pri = fun_0830(var_2784)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9B18_case_0x0
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 19;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2188(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8;
            var_80 = 8;
            pri = fun_0060(var_72)
            var_88 = 1;
            var_96 = 1;
            var_104 = -1;
            var_112 = -1;
            var_120 = 0;
            var_128 = 2;
            var_136 = -4463401185607446837;
            var_144 = 56;
            pri = fun_3D68(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            OP_PUSH2_C 2637824252605148828, -4463401185607446837
            var_192 = 56;
            pri = fun_1B88(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = 1;
            var_208 = 8;
            pri = fun_1CD0(var_200)
            var_216 = 0;
            pri = fun_1D90()
            var_224 = 1;
            var_232 = 3;
            var_240 = 0;
            var_248 = 2;
            var_256 = -4463401185607446837;
            var_264 = 40;
            pri = fun_60A0(var_256, var_248, var_240, var_232, var_224)
            OP_JUMP switch_9B18_case_default
        }
        case 0x1:
        {
// switch_9B18_case_0x1
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 20;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2188(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8;
            var_80 = 8;
            pri = fun_0060(var_72)
            var_88 = 1;
            var_96 = 1;
            var_104 = -1;
            var_112 = -1;
            var_120 = 0;
            var_128 = 2;
            var_136 = -4463401185607446837;
            var_144 = 56;
            pri = fun_3D68(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            OP_PUSH2_C 2637823153093520617, -4463401185607446837
            var_192 = 56;
            pri = fun_1B88(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = 1;
            var_208 = 8;
            pri = fun_1CD0(var_200)
            var_216 = 0;
            pri = fun_1D90()
            var_224 = 1;
            var_232 = 3;
            var_240 = 0;
            var_248 = 2;
            var_256 = -4463401185607446837;
            var_264 = 40;
            pri = fun_60A0(var_256, var_248, var_240, var_232, var_224)
            OP_JUMP switch_9B18_case_default
        }
    }
}
// fun_B3B0
fun_B3B0() {
    pri = 0;
    return pri;
}
// fun_B3C8
fun_B3C8() {
    var_8 = 1600;
    var_16 = 8;
    pri = fun_8310(var_8)
    var_24 = 1520678507684672495;
    pri = VanishFlagReset(var_24)
    var_32 = 5;
    var_40 = 8;
    pri = fun_0408(var_32)
    pri = 0;
    return pri;
}
// fun_B448
fun_B448() {
    var_8 = 31016;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_B4A0
fun_B4A0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_84A8()
    var_16 = 0;
    pri = fun_8500()
    var_24 = 0;
    pri = fun_8518()
    var_32 = 0;
    pri = fun_8530()
    var_40 = 0;
    pri = fun_B3B0()
    var_48 = 0;
    pri = fun_B3C8()
    var_56 = 0;
    pri = fun_B448()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B590
fun_B590() {
    var_8 = 0;
    pri = fun_8500()
    var_16 = 0;
    pri = fun_B3C8()
    pri = 0;
    return pri;
}
