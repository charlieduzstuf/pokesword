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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0650
fun_0650() {
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
// fun_06C8
fun_06C8() {
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
    pri = fun_0FF8(var_8)
    OP_JZER lab_08A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1028(var_24)
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
    pri = fun_0FF8(var_8)
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
    pri = fun_0FF8(var_8)
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
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1028
fun_1028() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1058
fun_1058() {
    OP_JUMP lab_1070
// lab_1070
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1100
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_10F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1100
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1190
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1180
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1190
    pri = 0;
    return pri;
// lab_1180
    OP_JUMP lab_11A0
// lab_11A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1070
    pri = 0;
    return pri;
// lab_10F0
    OP_JUMP lab_11A0
}
// fun_11E0
fun_11E0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1058(var_40)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
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
// switch_1948
        case default:
        {
// switch_1948_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1990
// lab_1990
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
            OP_JNZ lab_1A38
            var_88 = 0;
            pri = fun_1BF0()
// lab_1A38
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1948_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1530
                case default:
                {
// switch_1530_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15A8
// lab_15A8
                    OP_JUMP lab_1990
                }
                case 0x0:
                {
// switch_1530_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15A8
                }
                case 0x1:
                {
// switch_1530_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15A8
                }
                case 0x2:
                {
// switch_1530_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15A8
                }
                case 0x3:
                {
// switch_1530_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15A8
                }
                case 0x4:
                {
// switch_1530_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15A8
                }
                case 0x5:
                {
// switch_1530_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15A8
                }
            }
        }
        case 0x65:
        {
// switch_1948_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_16E8
                case default:
                {
// switch_16E8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1760
// lab_1760
                    OP_JUMP lab_1990
                }
                case 0x0:
                {
// switch_16E8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1760
                }
                case 0x1:
                {
// switch_16E8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1760
                }
                case 0x2:
                {
// switch_16E8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1760
                }
                case 0x3:
                {
// switch_16E8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1760
                }
                case 0x4:
                {
// switch_16E8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1760
                }
                case 0x5:
                {
// switch_16E8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1760
                }
            }
        }
        case 0x66:
        {
// switch_1948_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18A0
                case default:
                {
// switch_18A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1918
// lab_1918
                    OP_JUMP lab_1990
                }
                case 0x0:
                {
// switch_18A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1918
                }
                case 0x1:
                {
// switch_18A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1918
                }
                case 0x2:
                {
// switch_18A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1918
                }
                case 0x3:
                {
// switch_18A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1918
                }
                case 0x4:
                {
// switch_18A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1918
                }
                case 0x5:
                {
// switch_18A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1918
                }
            }
        }
    }
}
// fun_1A50
fun_1A50() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1AF8
    pri = 1;
    return pri;
// lab_1AF8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B40
fun_1B40() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A50(var_8)
    arg_2 = pri;
// lab_1B90
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1330(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BF0
fun_1BF0() {
    OP_JUMP lab_1C08
// lab_1C08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C48
    pri = 0;
    return pri;
// lab_1C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C08
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    var_8 = 0;
    pri = fun_1BF0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D38
    pri = 0;
    return pri;
}
// fun_1D48
fun_1D48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    OP_JUMP lab_1D90
// lab_1D90
    pri = EvCameraMoveWait_()
    OP_JZER lab_1DC8
    pri = 0;
    return pri;
// lab_1DC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D90
    pri = 0;
    return pri;
}
// fun_1E08
fun_1E08() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1E70(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1F48()
    pri = 0;
    return pri;
}
// fun_1E70
fun_1E70() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EC8
fun_1EC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_1E70(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1F48()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    OP_JUMP lab_1F60
// lab_1F60
    pri = IsEasingRunningDof_()
    OP_JZER lab_1FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FC8
// lab_1FB8
    pri = 0;
    return pri;
// lab_1FC8
    OP_JUMP lab_1F60
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
    pri = arg_6;
    OP_JNZ lab_2020
    var_8 = 0;
    pri = fun_0EE0()
// lab_2020
    pri = arg_1;
    switch (pri) {
// switch_3588
        case default:
        {
// switch_3588_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_38D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_38D8
            pri = 1;
            OP_JUMP lab_38E0
// lab_38D8
            pri = 0;
// lab_38E0
            OP_JZER lab_3A38
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
            OP_JUMP lab_3A98
// lab_3A38
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
// lab_3A98
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3AF8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3B58
// lab_3AF8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3B58
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3B58
            pri = arg_2;
            OP_JZER lab_3B98
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3B98
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3588_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x1:
        {
// switch_3588_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x2:
        {
// switch_3588_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x3:
        {
// switch_3588_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x4:
        {
// switch_3588_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x5:
        {
// switch_3588_case_0x5
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
            OP_JUMP switch_3588_case_default
        }
        case 0x6:
        {
// switch_3588_case_0x6
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
            OP_JUMP switch_3588_case_default
        }
        case 0x7:
        {
// switch_3588_case_0x7
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
            OP_JUMP switch_3588_case_default
        }
        case 0x8:
        {
// switch_3588_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x9:
        {
// switch_3588_case_0x9
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
            OP_JUMP switch_3588_case_default
        }
        case 0xa:
        {
// switch_3588_case_0xa
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
            OP_JUMP switch_3588_case_default
        }
        case 0xb:
        {
// switch_3588_case_0xb
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
            OP_JUMP switch_3588_case_default
        }
        case 0xc:
        {
// switch_3588_case_0xc
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
            OP_JUMP switch_3588_case_default
        }
        case 0xd:
        {
// switch_3588_case_0xd
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
            OP_JUMP switch_3588_case_default
        }
        case 0xe:
        {
// switch_3588_case_0xe
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
            OP_JUMP switch_3588_case_default
        }
        case 0xf:
        {
// switch_3588_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x10:
        {
// switch_3588_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x11:
        {
// switch_3588_case_0x11
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
            OP_JUMP switch_3588_case_default
        }
        case 0x12:
        {
// switch_3588_case_0x12
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
            OP_JUMP switch_3588_case_default
        }
        case 0x13:
        {
// switch_3588_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x14:
        {
// switch_3588_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x15:
        {
// switch_3588_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x16:
        {
// switch_3588_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x17:
        {
// switch_3588_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x18:
        {
// switch_3588_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x19:
        {
// switch_3588_case_0x19
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
            OP_JUMP switch_3588_case_default
        }
        case 0x1a:
        {
// switch_3588_case_0x1a
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
            OP_JUMP switch_3588_case_default
        }
        case 0x1b:
        {
// switch_3588_case_0x1b
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
            OP_JUMP switch_3588_case_default
        }
        case 0x1c:
        {
// switch_3588_case_0x1c
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
            OP_JUMP switch_3588_case_default
        }
        case 0x1d:
        {
// switch_3588_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x1e:
        {
// switch_3588_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x1f:
        {
// switch_3588_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x20:
        {
// switch_3588_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x21:
        {
// switch_3588_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x22:
        {
// switch_3588_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x23:
        {
// switch_3588_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x24:
        {
// switch_3588_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x25:
        {
// switch_3588_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x26:
        {
// switch_3588_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x27:
        {
// switch_3588_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x28:
        {
// switch_3588_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
        case 0x29:
        {
// switch_3588_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3588_case_default
        }
    }
}
// fun_3BC8
fun_3BC8() {
    pri = arg_5;
    OP_JNZ lab_3C00
    var_8 = 0;
    pri = fun_0EE0()
// lab_3C00
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3C50
    OP_CONST_S -8, -1
// lab_3C50
    pri = arg_1;
    switch (pri) {
// switch_5708
        case default:
        {
// switch_5708_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5BB0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09D0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5BB0
            pri = 1;
            OP_JUMP lab_5BB8
// lab_5BB0
            pri = 0;
// lab_5BB8
            OP_JZER lab_5C08
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E60
// lab_5C08
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5C70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5C70
            pri = 1;
            OP_JUMP lab_5C78
// lab_5C70
            pri = 0;
// lab_5C78
            OP_JZER lab_5E00
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
            OP_JUMP lab_5E60
// lab_5E00
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
// lab_5E60
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5ED0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5ED0
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5708_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x1:
        {
// switch_5708_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x2:
        {
// switch_5708_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3:
        {
// switch_5708_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x4:
        {
// switch_5708_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x5:
        {
// switch_5708_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_5708_case_default
        }
        case 0x6:
        {
// switch_5708_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x7:
        {
// switch_5708_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x8:
        {
// switch_5708_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x9:
        {
// switch_5708_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0xa:
        {
// switch_5708_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0xb:
        {
// switch_5708_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0xc:
        {
// switch_5708_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0xd:
        {
// switch_5708_case_0xd
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
            OP_JUMP switch_5708_case_default
        }
        case 0xe:
        {
// switch_5708_case_0xe
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
            OP_JUMP switch_5708_case_default
        }
        case 0xf:
        {
// switch_5708_case_0xf
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
            OP_JUMP switch_5708_case_default
        }
        case 0x10:
        {
// switch_5708_case_0x10
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
            OP_JUMP switch_5708_case_default
        }
        case 0x11:
        {
// switch_5708_case_0x11
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
            OP_JUMP switch_5708_case_default
        }
        case 0x12:
        {
// switch_5708_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x13:
        {
// switch_5708_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x14:
        {
// switch_5708_case_0x14
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
            OP_JUMP switch_5708_case_default
        }
        case 0x15:
        {
// switch_5708_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x16:
        {
// switch_5708_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x17:
        {
// switch_5708_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x18:
        {
// switch_5708_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x19:
        {
// switch_5708_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x1a:
        {
// switch_5708_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x1b:
        {
// switch_5708_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x1c:
        {
// switch_5708_case_0x1c
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
            OP_JUMP switch_5708_case_default
        }
        case 0x1d:
        {
// switch_5708_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x1e:
        {
// switch_5708_case_0x1e
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
            OP_JUMP switch_5708_case_default
        }
        case 0x1f:
        {
// switch_5708_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x20:
        {
// switch_5708_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x21:
        {
// switch_5708_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x22:
        {
// switch_5708_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x23:
        {
// switch_5708_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x24:
        {
// switch_5708_case_0x24
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
            OP_JUMP switch_5708_case_default
        }
        case 0x25:
        {
// switch_5708_case_0x25
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
            OP_JUMP switch_5708_case_default
        }
        case 0x26:
        {
// switch_5708_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x27:
        {
// switch_5708_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x28:
        {
// switch_5708_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x29:
        {
// switch_5708_case_0x29
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
            OP_JUMP switch_5708_case_default
        }
        case 0x2a:
        {
// switch_5708_case_0x2a
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
            OP_JUMP switch_5708_case_default
        }
        case 0x2b:
        {
// switch_5708_case_0x2b
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
            OP_JUMP switch_5708_case_default
        }
        case 0x2c:
        {
// switch_5708_case_0x2c
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
            OP_JUMP switch_5708_case_default
        }
        case 0x2d:
        {
// switch_5708_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x2e:
        {
// switch_5708_case_0x2e
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
            OP_JUMP switch_5708_case_default
        }
        case 0x2f:
        {
// switch_5708_case_0x2f
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
            OP_JUMP switch_5708_case_default
        }
        case 0x30:
        {
// switch_5708_case_0x30
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
            OP_JUMP switch_5708_case_default
        }
        case 0x31:
        {
// switch_5708_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x32:
        {
// switch_5708_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x33:
        {
// switch_5708_case_0x33
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
            OP_JUMP switch_5708_case_default
        }
        case 0x34:
        {
// switch_5708_case_0x34
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
            OP_JUMP switch_5708_case_default
        }
        case 0x35:
        {
// switch_5708_case_0x35
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
            OP_JUMP switch_5708_case_default
        }
        case 0x36:
        {
// switch_5708_case_0x36
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
            OP_JUMP switch_5708_case_default
        }
        case 0x37:
        {
// switch_5708_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x38:
        {
// switch_5708_case_0x38
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
            OP_JUMP switch_5708_case_default
        }
        case 0x39:
        {
// switch_5708_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3a:
        {
// switch_5708_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3b:
        {
// switch_5708_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3c:
        {
// switch_5708_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3d:
        {
// switch_5708_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
        case 0x3e:
        {
// switch_5708_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_5708_case_default
        }
    }
}
// fun_5F00
fun_5F00() {
    pri = arg_4;
    OP_JNZ lab_5F38
    var_8 = 0;
    pri = fun_0EE0()
// lab_5F38
    pri = arg_1;
    switch (pri) {
// switch_7310
        case default:
        {
// switch_7310_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0FF8(var_264)
            OP_JZER lab_78D8
            pri = arg_3;
            switch (pri) {
// switch_7880
                case default:
                {
// switch_7880_case_default
                    OP_JUMP lab_7B90
// lab_7B90
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7C00
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7C00
                    var_8 = 0;
                    pri = fun_0F20()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7880_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7880_case_default
                }
                case 0x2:
                {
// switch_7880_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7880_case_default
                }
                case 0x3:
                {
// switch_7880_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7880_case_default
                }
            }
// lab_78D8
            pri = arg_1;
            OP_JZER lab_7928
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7928
            pri = 0;
            OP_JUMP lab_7930
// lab_7928
            pri = 1;
// lab_7930
            OP_JZER lab_7998
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09D0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7998
            pri = 1;
            OP_JUMP lab_79A0
// lab_7998
            pri = 0;
// lab_79A0
            OP_JZER lab_79F0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7B90
// lab_79F0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7A58
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7B90
// lab_7A58
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
// switch_7310_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1:
        {
// switch_7310_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2:
        {
// switch_7310_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3:
        {
// switch_7310_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x4:
        {
// switch_7310_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x5:
        {
// switch_7310_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_7310_case_default
        }
        case 0x6:
        {
// switch_7310_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x7:
        {
// switch_7310_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x8:
        {
// switch_7310_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x9:
        {
// switch_7310_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xa:
        {
// switch_7310_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xb:
        {
// switch_7310_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xc:
        {
// switch_7310_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xd:
        {
// switch_7310_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xe:
        {
// switch_7310_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0xf:
        {
// switch_7310_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x10:
        {
// switch_7310_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x11:
        {
// switch_7310_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x12:
        {
// switch_7310_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x13:
        {
// switch_7310_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x14:
        {
// switch_7310_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x15:
        {
// switch_7310_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x16:
        {
// switch_7310_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x17:
        {
// switch_7310_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x18:
        {
// switch_7310_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x19:
        {
// switch_7310_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1a:
        {
// switch_7310_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1b:
        {
// switch_7310_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1c:
        {
// switch_7310_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1d:
        {
// switch_7310_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1e:
        {
// switch_7310_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x1f:
        {
// switch_7310_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x20:
        {
// switch_7310_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x21:
        {
// switch_7310_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x22:
        {
// switch_7310_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x23:
        {
// switch_7310_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x24:
        {
// switch_7310_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x25:
        {
// switch_7310_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x26:
        {
// switch_7310_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x27:
        {
// switch_7310_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x28:
        {
// switch_7310_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x29:
        {
// switch_7310_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2a:
        {
// switch_7310_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2b:
        {
// switch_7310_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2c:
        {
// switch_7310_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2d:
        {
// switch_7310_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2e:
        {
// switch_7310_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x2f:
        {
// switch_7310_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x30:
        {
// switch_7310_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x31:
        {
// switch_7310_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x32:
        {
// switch_7310_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x33:
        {
// switch_7310_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x34:
        {
// switch_7310_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x35:
        {
// switch_7310_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x36:
        {
// switch_7310_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x37:
        {
// switch_7310_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x38:
        {
// switch_7310_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x39:
        {
// switch_7310_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3a:
        {
// switch_7310_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3b:
        {
// switch_7310_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3c:
        {
// switch_7310_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3d:
        {
// switch_7310_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
        case 0x3e:
        {
// switch_7310_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_7310_case_default
        }
    }
}
// fun_7C30
fun_7C30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7E40(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_7E28
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7E28
    pri = 0;
    return pri;
}
// fun_7E40
fun_7E40() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0990(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7E88
fun_7E88() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7F88
        case default:
        {
// switch_7F88_case_default
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
// switch_7F88_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7F88_case_default
        }
        case 0x1:
        {
// switch_7F88_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7F88_case_default
        }
        case 0x2:
        {
// switch_7F88_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7F88_case_default
        }
        case 0x3:
        {
// switch_7F88_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7F88_case_default
        }
    }
}
// fun_8048
fun_8048() {
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
    pri = fun_1B40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1BF0()
    pri = 0;
    return pri;
}
// fun_80E0
fun_80E0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7E88(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8048(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8188
fun_8188() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_81D8
// lab_81D8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8250
    OP_JUMP lab_8280
// lab_8250
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_81D8
// lab_8280
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8308
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5F00(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_12C8(var_56)
// lab_8308
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8370
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FB8(var_24, var_16)
// lab_8370
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8430
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A08(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0788(var_88, var_80, var_72, var_64, var_56)
// lab_8430
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8470
    pri = 0;
    return pri;
// lab_8470
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_85B8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0958(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8580
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_85B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0830(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0830(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A08(var_40)
    pri = 0;
    return pri;
// lab_8580
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
}
// fun_8640
fun_8640() {
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
    pri = fun_80E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1C88(var_112)
    var_128 = 0;
    pri = fun_1D48()
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
    pri = fun_8188(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_87B8
fun_87B8() {
    pri = 30528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8840
// lab_8840
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_89C0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_89B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8900
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8900
    pri = 0;
    OP_JUMP lab_8908
// lab_89C0
    pri = 0;
    return pri;
// lab_89B0
    OP_JUMP lab_8838
// lab_8838
    OP_INC_P_S -936
// lab_8900
    pri = 1;
// lab_8908
    OP_JZER lab_8980
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8978
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8980
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8978
}
// fun_89E0
fun_89E0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8A78
    var_8 = 1;
    var_16 = 0;
    var_24 = 31448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_12A0()
// lab_8A78
    pri = arg_4;
    OP_JZER lab_8AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_12F8(var_8)
// lab_8AB0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8B08
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8B08
    pri = 0;
    OP_JUMP lab_8B10
// lab_8B08
    pri = 1;
// lab_8B10
    OP_JZER lab_8BD8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8BD8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8BB0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_11E0(var_32, var_24)
    OP_JUMP lab_8BD8
// lab_8BD8
    pri = arg_2;
    OP_JZER lab_8CB0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8C80
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FB8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0618(var_40)
    OP_JUMP lab_8CB0
// lab_8CB0
    pri = arg_3;
    OP_JZER lab_8CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1268(var_8)
// lab_8CE8
    pri = 0;
    return pri;
// lab_8C80
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
// lab_8BB0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_11E0(var_16, var_8)
}
// fun_8CF8
fun_8CF8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_8E78
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8D90
    var_8 = 1;
    var_16 = 0;
    var_24 = 31448;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_8E78
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_8D90
    pri = arg_0;
    OP_JNZ lab_8DD8
    var_8 = 31496;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_8DF8
// lab_8DD8
    var_8 = 31672;
    pri = SoundPostEvent(var_8)
// lab_8DF8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8E78
    var_24 = 31936;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_8EB8
fun_8EB8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_87B8(var_24)
    pri = 0;
    return pri;
}
// fun_8F20
fun_8F20() {
    pri = g_mode;
    switch (pri) {
// switch_9008
        case default:
        {
// switch_9008_case_default
            pri = CommandNOP()
            OP_JUMP lab_9060
// lab_9060
            pri = 0;
            return pri;
        }
        case 0x84148e21fd273184:
        {
// switch_9008_case_0x84148e21fd273184
            var_8 = 0;
            pri = fun_B490()
            OP_JUMP lab_9060
        }
        case 0xe0fd9409d3fb0d7a:
        {
// switch_9008_case_0xe0fd9409d3fb0d7a
            var_8 = 0;
            pri = fun_B5C8()
            OP_JUMP lab_9060
        }
        case 0x0:
        {
// switch_9008_case_0x0
            var_8 = 0;
            pri = fun_9070()
            OP_JUMP lab_9060
        }
        case 0x669a141e731b7610:
        {
// switch_9008_case_0x669a141e731b7610
            var_8 = 0;
            pri = fun_B580()
            OP_JUMP lab_9060
        }
    }
}
// fun_9070
fun_9070() {
    pri = 0;
    return pri;
}
// fun_9088
fun_9088() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_89E0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_90E0
fun_90E0() {
    pri = 0;
    return pri;
}
// fun_90F8
fun_90F8() {
    pri = 0;
    return pri;
}
// fun_9110
fun_9110() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = -90;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 4649803887539126272;
    var_48 = 1925;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 8802641224559852288;
    var_72 = 48;
    pri = fun_0548(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    var_96 = -90;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 4650228738832098918;
    var_120 = 2000;
    pri = float(var_120)
    var_128 = pri;
    var_136 = -7688158225218808343;
    var_144 = 48;
    pri = fun_0548(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    var_168 = 78;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 683;
    pri = float(var_184)
    var_192 = pri;
    OP_PUSH2_C 4654679122096685056, 5804806806352038632
    var_200 = 48;
    pri = fun_0548(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 1;
    var_216 = 1;
    var_224 = 110;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 795;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 1541;
    pri = float(var_256)
    var_264 = pri;
    var_272 = -4015134941316681380;
    var_280 = 48;
    pri = fun_0548(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 1;
    var_296 = -7688158225218808343;
    var_304 = 16;
    pri = fun_05D8(var_296, var_288)
    var_312 = 1;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 1;
    var_336 = 0;
    OP_PUSH3_C 4641240890982006784, 5804806806352038632, 4649155615483389542
    var_344 = 1823;
    pri = float(var_344)
    var_352 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_360 = 64;
    pri = fun_06C8(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_368 = 1;
    var_376 = 0;
    OP_PUSH3_C 4641240890982006784, 5804806806352038632, 4650228738832098918
    var_384 = 1816;
    pri = float(var_384)
    var_392 = pri;
    OP_PUSH2_C 4607182418800017408, -7688158225218808343
    var_400 = 64;
    pri = fun_06C8(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_408 = 15;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 0;
    var_432 = 4630699653104192717;
    var_440 = 0;
    OP_PUSH5_C 4650109463810717778, 4635638131570581176, 4655089943621287281, 4652597966487630643, 4638124962989819822
    var_448 = 4655090427406403502;
    var_456 = 1;
    pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    pri = fun_1D78()
    var_472 = 31936;
    var_480 = 8;
    var_488 = 16;
    pri = fun_0280(var_480, var_472)
    var_496 = 0;
    pri = fun_0350()
    var_504 = 8802641224559852288;
    var_512 = 8;
    pri = fun_0830(var_504)
    var_520 = -7688158225218808343;
    var_528 = 8;
    pri = fun_0830(var_520)
    var_536 = 1;
    var_544 = 1;
    var_552 = -1;
    OP_PUSH2_C -7688158225218808343, 5804806806352038632
    var_560 = 40;
    pri = fun_0F60(var_552, var_544, var_536, var_528, var_520)
    var_568 = 15;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C 8391546925453412314, 5804806806352038632
    var_624 = 56;
    pri = fun_1B40(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1C88(var_632)
    var_648 = 0;
    pri = fun_1D48()
    var_656 = 1;
    var_664 = 1;
    var_672 = -1;
    var_680 = -1;
    var_688 = 0;
    var_696 = 6;
    var_704 = 5804806806352038632;
    var_712 = 56;
    pri = fun_3BC8(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 1;
    var_736 = -1;
    OP_PUSH2_C 8802641224559852288, 5804806806352038632
    var_744 = 40;
    pri = fun_0F60(var_736, var_728, var_720, var_712, var_704)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C 8391545825941784103, 5804806806352038632
    var_792 = 56;
    pri = fun_1B40(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1C88(var_800)
    var_816 = 0;
    pri = fun_1D48()
    var_824 = 1;
    var_832 = 3;
    var_840 = 0;
    var_848 = 6;
    var_856 = 5804806806352038632;
    var_864 = 40;
    pri = fun_5F00(var_856, var_848, var_840, var_832, var_824)
    var_872 = 5804806806352038632;
    var_880 = 8;
    pri = fun_0A08(var_872)
    var_888 = 1;
    var_896 = 1;
    var_904 = -1;
    OP_PUSH2_C -4015134941316681380, 8802641224559852288
    var_912 = 40;
    pri = fun_0F60(var_904, var_896, var_888, var_880, var_872)
    var_920 = 0;
    var_928 = 0;
    var_936 = 0;
    var_944 = 0;
    OP_PUSH2_C 8802641224559852288, -4015134941316681380
    var_952 = 48;
    pri = fun_07D8(var_944, var_936, var_928, var_920, var_912, var_904)
    var_960 = -4015134941316681380;
    var_968 = 8;
    pri = fun_0830(var_960)
    var_976 = 0;
    var_984 = 1;
    var_992 = -4015134941316681380;
    var_1000 = 24;
    pri = fun_7C30(var_992, var_984, var_976)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = -4015134941316681380;
    var_1032 = 8;
    pri = fun_0A08(var_1024)
    var_1040 = 0;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 100;
    var_1072 = -1;
    OP_PUSH2_C -6740932092048067838, -4015134941316681380
    var_1080 = 56;
    pri = fun_1B40(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1088 = 1;
    var_1096 = 8;
    pri = fun_1C88(var_1088)
    var_1104 = 0;
    pri = fun_1D48()
    var_1112 = 0;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 100;
    var_1144 = -1;
    OP_PUSH2_C -6740933191559696049, -4015134941316681380
    var_1152 = 56;
    pri = fun_1B40(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_1C88(var_1160)
    var_1176 = 0;
    pri = fun_1D48()
    var_1184 = 1;
    var_1192 = 1;
    var_1200 = -1;
    OP_PUSH2_C 5804806806352038632, 8802641224559852288
    var_1208 = 40;
    pri = fun_0F60(var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1216 = 1;
    var_1224 = 1;
    var_1232 = -1;
    OP_PUSH2_C -4015134941316681380, 5804806806352038632
    var_1240 = 40;
    pri = fun_0F60(var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1248 = -1;
    var_1256 = 5804806806352038632;
    var_1264 = 16;
    pri = fun_0FB8(var_1256, var_1248)
    var_1272 = 15;
    var_1280 = 8;
    pri = fun_0060(var_1272)
    var_1288 = 0;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 100;
    var_1320 = -1;
    OP_PUSH2_C 8391544726430155892, 5804806806352038632
    var_1328 = 56;
    pri = fun_1B40(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_1C88(var_1336)
    var_1352 = 0;
    pri = fun_1D48()
    var_1360 = 1;
    var_1368 = 1;
    var_1376 = -1;
    OP_PUSH2_C -7688158225218808343, 5804806806352038632
    var_1384 = 40;
    pri = fun_0F60(var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1392 = 0;
    var_1400 = 3;
    var_1408 = -7688158225218808343;
    var_1416 = 24;
    pri = fun_7C30(var_1408, var_1400, var_1392)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = -7688158225218808343;
    var_1448 = 8;
    pri = fun_0A08(var_1440)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 0;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C 5745861270341335913, -7688158225218808343
    var_1496 = 56;
    pri = fun_1B40(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_1C88(var_1504)
    var_1520 = 0;
    pri = fun_1D48()
    var_1528 = -1;
    var_1536 = 5804806806352038632;
    var_1544 = 16;
    pri = fun_0FB8(var_1536, var_1528)
    var_1552 = 15;
    var_1560 = 8;
    pri = fun_0060(var_1552)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1568 = 16;
    pri = fun_1E08(var_1560, var_1552)
    var_1576 = 3;
    var_1584 = 1;
    OP_PUSH2_C 4642037570719214207, 4611686018427387904
    var_1592 = 32;
    pri = fun_1E70(var_1584, var_1576, var_1568, var_1560)
    var_1600 = 0;
    var_1608 = 4628687107020711526;
    var_1616 = 0;
    OP_PUSH5_C 4649147083273158001, 4638435289151643320, 4654330225066959176, 4651428086115676979, 4639717055826839470
    var_1624 = 4655201566041739100;
    var_1632 = 1;
    pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1640 = 0;
    pri = fun_1D78()
    var_1648 = 0;
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 0;
    OP_PUSH2_C -4015134941316681380, 5804806806352038632
    var_1680 = 48;
    pri = fun_07D8(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1688 = 5804806806352038632;
    var_1696 = 8;
    pri = fun_0830(var_1688)
    var_1704 = 1;
    var_1712 = 1;
    var_1720 = -1;
    OP_PUSH2_C -4015134941316681380, 5804806806352038632
    var_1728 = 40;
    pri = fun_0F60(var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1736 = 1;
    var_1744 = 1;
    var_1752 = -1;
    OP_PUSH2_C 5804806806352038632, -4015134941316681380
    var_1760 = 40;
    pri = fun_0F60(var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1768 = 0;
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 100;
    var_1800 = -1;
    OP_PUSH2_C 8391543626918527681, 5804806806352038632
    var_1808 = 56;
    pri = fun_1B40(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_1C88(var_1816)
    var_1832 = 0;
    pri = fun_1D48()
    var_1840 = 1;
    var_1848 = 1;
    var_1856 = -1;
    OP_PUSH2_C -4015134941316681380, 8802641224559852288
    var_1864 = 40;
    pri = fun_0F60(var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = -4015134941316681380;
    var_1896 = 24;
    pri = fun_7C30(var_1888, var_1880, var_1872)
    var_1904 = 1;
    var_1912 = 8;
    pri = fun_0060(var_1904)
    var_1920 = -4015134941316681380;
    var_1928 = 8;
    pri = fun_0A08(var_1920)
    var_1936 = 0;
    var_1944 = 0;
    var_1952 = 0;
    var_1960 = 0;
    OP_PUSH2_C 5804806806352038632, -4015134941316681380
    var_1968 = 48;
    pri = fun_07D8(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1976 = 0;
    var_1984 = 3;
    var_1992 = 0;
    var_2000 = 100;
    var_2008 = -1;
    OP_PUSH2_C -6740935390582952471, -4015134941316681380
    var_2016 = 56;
    pri = fun_1B40(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2024 = 1;
    var_2032 = 8;
    pri = fun_1C88(var_2024)
    var_2040 = 0;
    pri = fun_1D48()
    var_2048 = -4015134941316681380;
    var_2056 = 8;
    pri = fun_0830(var_2048)
    var_2064 = 1;
    var_2072 = 1;
    var_2080 = -1;
    OP_PUSH2_C 5804806806352038632, 8802641224559852288
    var_2088 = 40;
    pri = fun_0F60(var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2096 = 1;
    var_2104 = 1;
    var_2112 = -1;
    var_2120 = -1;
    var_2128 = 0;
    var_2136 = 8;
    var_2144 = 5804806806352038632;
    var_2152 = 56;
    pri = fun_3BC8(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096)
    var_2160 = 0;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 100;
    var_2192 = -1;
    OP_PUSH2_C 8391542527406899470, 5804806806352038632
    var_2200 = 56;
    pri = fun_1B40(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 1;
    var_2216 = 8;
    pri = fun_1C88(var_2208)
    var_2224 = 0;
    pri = fun_1D48()
    var_2232 = 1;
    var_2240 = 1;
    var_2248 = -1;
    var_2256 = -1;
    var_2264 = 0;
    var_2272 = 6;
    var_2280 = -4015134941316681380;
    var_2288 = 56;
    pri = fun_3BC8(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
    var_2296 = 1;
    var_2304 = 1;
    var_2312 = -1;
    var_2320 = -1;
    var_2328 = 0;
    var_2336 = 8;
    var_2344 = -7688158225218808343;
    var_2352 = 56;
    pri = fun_3BC8(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2360 = 0;
    var_2368 = 3;
    var_2376 = 0;
    var_2384 = 100;
    var_2392 = -1;
    OP_PUSH2_C 8391541427895271259, -4015134941316681380
    var_2400 = 56;
    pri = fun_1B40(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2408 = 1;
    var_2416 = 8;
    pri = fun_1C88(var_2408)
    var_2424 = 0;
    pri = fun_1D48()
    var_2432 = 1;
    var_2440 = 3;
    var_2448 = 0;
    var_2456 = 8;
    var_2464 = 5804806806352038632;
    var_2472 = 40;
    pri = fun_5F00(var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2480 = 1;
    var_2488 = 3;
    var_2496 = 0;
    var_2504 = 6;
    var_2512 = -4015134941316681380;
    var_2520 = 40;
    pri = fun_5F00(var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2528 = -4015134941316681380;
    var_2536 = 8;
    pri = fun_0A08(var_2528)
    var_2544 = 5804806806352038632;
    var_2552 = 8;
    pri = fun_0A08(var_2544)
    var_2560 = 1;
    var_2568 = 1;
    var_2576 = -1;
    OP_PUSH2_C -4015134941316681380, 8802641224559852288
    var_2584 = 40;
    pri = fun_0F60(var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2592 = -1;
    var_2600 = -4015134941316681380;
    var_2608 = 16;
    pri = fun_0FB8(var_2600, var_2592)
    var_2616 = -1;
    var_2624 = 8802641224559852288;
    var_2632 = 16;
    pri = fun_0FB8(var_2624, var_2616)
    var_2640 = -1;
    var_2648 = 5804806806352038632;
    var_2656 = 16;
    pri = fun_0FB8(var_2648, var_2640)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2664 = 3;
    var_2672 = 1;
    var_2680 = 32;
    pri = fun_1EC8(var_2672, var_2664, var_2656, var_2648)
    var_2688 = 0;
    var_2696 = 4630699653104192717;
    var_2704 = 0;
    OP_PUSH5_C 4650109463810717778, 4635638131570581176, 4655089943621287281, 4652597966487630643, 4638124962989819822
    var_2712 = 4655090427406403502;
    var_2720 = 1;
    pri = EvCameraMove(var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2728 = 0;
    pri = fun_1D78()
    var_2736 = 15;
    var_2744 = 8;
    pri = fun_0060(var_2736)
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 0;
    OP_PUSH2_C 8802641224559852288, -4015134941316681380
    var_2784 = 48;
    pri = fun_07D8(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736)
    var_2792 = 0;
    var_2800 = 0;
    var_2808 = 0;
    var_2816 = 0;
    OP_PUSH2_C -7688158225218808343, 5804806806352038632
    var_2824 = 48;
    pri = fun_07D8(var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2832 = 5804806806352038632;
    var_2840 = 8;
    pri = fun_0830(var_2832)
    var_2848 = -4015134941316681380;
    var_2856 = 8;
    pri = fun_0830(var_2848)
    var_2864 = 0;
    var_2872 = 1;
    var_2880 = -4015134941316681380;
    var_2888 = 24;
    pri = fun_7C30(var_2880, var_2872, var_2864)
    var_2896 = 1;
    var_2904 = 8;
    pri = fun_0060(var_2896)
    var_2912 = -4015134941316681380;
    var_2920 = 8;
    pri = fun_0A08(var_2912)
    var_2928 = 0;
    var_2936 = 3;
    var_2944 = 0;
    var_2952 = 100;
    var_2960 = -1;
    OP_PUSH2_C -6740936490094580682, -4015134941316681380
    var_2968 = 56;
    pri = fun_1B40(var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2976 = 1;
    var_2984 = 8;
    pri = fun_1C88(var_2976)
    var_2992 = 0;
    pri = fun_1D48()
    var_3000 = 0;
    var_3008 = 0;
    var_3016 = -4015134941316681380;
    var_3024 = 24;
    pri = fun_7C30(var_3016, var_3008, var_3000)
    var_3032 = 1;
    var_3040 = 8;
    pri = fun_0060(var_3032)
    var_3048 = -4015134941316681380;
    var_3056 = 8;
    pri = fun_0A08(var_3048)
    var_3064 = 1;
    var_3072 = 3;
    var_3080 = 0;
    var_3088 = 8;
    var_3096 = -7688158225218808343;
    var_3104 = 40;
    pri = fun_5F00(var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3112 = 1;
    var_3120 = 0;
    var_3128 = 4641240890982006784;
    var_3136 = 0;
    var_3144 = 0;
    OP_PUSH4_C 4649922634794926080, 4655222280840806400, 4607182418800017408, -4015134941316681380
    var_3152 = 72;
    pri = fun_0650(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
    var_3160 = 10;
    var_3168 = 8;
    pri = fun_0060(var_3160)
    var_3176 = 0;
    var_3184 = 4630699653104192717;
    var_3192 = 0;
    OP_PUSH5_C 4649384050019176284, 4635812646056141783, 4655673960217496781, 4651875807250507366, 4639820497880780636
    var_3200 = 4655021378076179169;
    var_3208 = 1;
    pri = EvCameraMove(var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136)
    var_3216 = 0;
    pri = fun_1D78()
    var_3224 = 15;
    var_3232 = 8;
    pri = fun_0060(var_3224)
    var_3240 = -7688158225218808343;
    var_3248 = 8;
    pri = fun_0A08(var_3240)
    var_3256 = 1;
    var_3264 = 1;
    var_3272 = -1;
    OP_PUSH2_C -4015134941316681380, 8802641224559852288
    var_3280 = 40;
    pri = fun_0F60(var_3272, var_3264, var_3256, var_3248, var_3240)
    var_3288 = 1;
    var_3296 = 1;
    var_3304 = -1;
    OP_PUSH2_C -4015134941316681380, -7688158225218808343
    var_3312 = 40;
    pri = fun_0F60(var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3320 = -4015134941316681380;
    var_3328 = 8;
    pri = fun_0830(var_3320)
    var_3336 = 1;
    var_3344 = -1;
    var_3352 = -1;
    var_3360 = 3;
    var_3368 = 0;
    var_3376 = 2;
    var_3384 = -4015134941316681380;
    var_3392 = 56;
    pri = fun_1FE8(var_3384, var_3376, var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3400 = 15;
    var_3408 = 8;
    pri = fun_0060(var_3400)
    var_3416 = 1;
    var_3424 = 1;
    var_3432 = 16;
    pri = fun_8CF8(var_3424, var_3416)
    var_3440 = 30;
    var_3448 = 8;
    pri = fun_0060(var_3440)
    var_3456 = -4015134941316681380;
    var_3464 = 8;
    pri = fun_0A08(var_3456)
    var_3472 = -1;
    var_3480 = 8802641224559852288;
    var_3488 = 16;
    pri = fun_0FB8(var_3480, var_3472)
    var_3496 = -1;
    var_3504 = -7688158225218808343;
    var_3512 = 16;
    pri = fun_0FB8(var_3504, var_3496)
    var_3520 = 0;
    var_3528 = 0;
    var_3536 = 0;
    var_3544 = 0;
    OP_PUSH2_C -7688158225218808343, 8802641224559852288
    var_3552 = 48;
    pri = fun_07D8(var_3544, var_3536, var_3528, var_3520, var_3512, var_3504)
    var_3560 = 0;
    var_3568 = 0;
    var_3576 = 0;
    var_3584 = 0;
    OP_PUSH2_C 8802641224559852288, -7688158225218808343
    var_3592 = 48;
    pri = fun_07D8(var_3584, var_3576, var_3568, var_3560, var_3552, var_3544)
    var_3600 = 8802641224559852288;
    var_3608 = 8;
    pri = fun_0830(var_3600)
    var_3616 = -7688158225218808343;
    var_3624 = 8;
    pri = fun_0830(var_3616)
    var_3632 = 0;
    var_3640 = 3;
    var_3648 = 0;
    var_3656 = 100;
    var_3664 = -1;
    OP_PUSH2_C 5745857971806451280, -7688158225218808343
    var_3672 = 56;
    pri = fun_1B40(var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616)
    var_3680 = 1;
    var_3688 = 8;
    pri = fun_1C88(var_3680)
    var_3696 = 0;
    pri = fun_1D48()
    var_3704 = 1;
    var_3712 = 0;
    var_3720 = 30;
    pri = float(var_3720)
    var_3728 = pri;
    var_3736 = 0;
    pri = float(var_3736)
    var_3744 = pri;
    var_3752 = 0;
    OP_PUSH4_C 4650228738832098918, 4657038674049892352, 4611686018427387904, -7688158225218808343
    var_3760 = 72;
    pri = fun_0650(var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704, var_3696, var_3688)
    var_3768 = 20;
    var_3776 = 8;
    pri = fun_0060(var_3768)
    var_3784 = 0;
    var_3792 = 0;
    var_3800 = 0;
    var_3808 = 0;
    OP_PUSH2_C -7688158225218808343, 8802641224559852288
    var_3816 = 48;
    pri = fun_07D8(var_3808, var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3824 = 8802641224559852288;
    var_3832 = 8;
    pri = fun_0830(var_3824)
    var_3840 = -7688158225218808343;
    var_3848 = 8;
    pri = fun_0830(var_3840)
    var_3856 = 1;
    var_3864 = 0;
    var_3872 = 31448;
    var_3880 = 8;
    var_3888 = 32;
    pri = fun_02E0(var_3880, var_3872, var_3864, var_3856)
    var_3896 = 0;
    pri = fun_0350()
    var_3904 = 31984;
    pri = SoundPostEvent(var_3904)
    var_3912 = 30;
    var_3920 = 8;
    pri = fun_0060(var_3912)
    var_3928 = 3;
    var_3936 = 1;
    pri = EvCameraEnd(var_3936, var_3928)
    var_3944 = 0;
    var_3952 = -7688158225218808343;
    var_3960 = 16;
    pri = fun_05A0(var_3952, var_3944)
    var_3968 = 0;
    var_3976 = -4015134941316681380;
    var_3984 = 16;
    pri = fun_05A0(var_3976, var_3968)
    var_3992 = 1;
    var_4000 = 8;
    pri = fun_0060(var_3992)
    var_4008 = 1;
    var_4016 = 1;
    var_4024 = 90;
    pri = float(var_4024)
    var_4032 = pri;
    OP_PUSH3_C 4650067594407932068, 4656501408688095887, 8802641224559852288
    var_4040 = 48;
    pri = fun_0548(var_4032, var_4024, var_4016, var_4008, var_4000, var_3992)
    var_4048 = 0;
    var_4056 = -7688158225218808343;
    var_4064 = 16;
    pri = fun_05D8(var_4056, var_4048)
    pri = 0;
    return pri;
}
// fun_B2F0
fun_B2F0() {
    pri = 0;
    return pri;
}
// fun_B308
fun_B308() {
    var_8 = -7688158225218808343;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = -4015134941316681380;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = 280;
    var_48 = 8;
    pri = fun_8EB8(var_40)
    var_56 = 10;
    var_64 = -3860840703277833219;
    pri = WorkSet(var_64, var_56)
    var_72 = 702631533266588014;
    pri = VanishFlagReset(var_72)
    var_80 = -3470649453704576271;
    pri = VanishFlagReset(var_80)
    var_88 = 3447853788456145154;
    pri = FlagReset(var_88)
    pri = 0;
    return pri;
}
// fun_B438
fun_B438() {
    var_8 = 31936;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_B490
fun_B490() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9088()
    var_16 = 0;
    pri = fun_90E0()
    var_24 = 0;
    pri = fun_90F8()
    var_32 = 0;
    pri = fun_9110()
    var_40 = 0;
    pri = fun_B2F0()
    var_48 = 0;
    pri = fun_B308()
    var_56 = 0;
    pri = fun_B438()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B580
fun_B580() {
    var_8 = 0;
    pri = fun_90E0()
    var_16 = 0;
    pri = fun_B308()
    pri = 0;
    return pri;
}
// fun_B5C8
fun_B5C8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8391540328383643048;
    var_88 = 80;
    pri = fun_8640(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
