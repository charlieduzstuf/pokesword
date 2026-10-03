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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04E8
    OP_JUMP lab_0558
// lab_04E8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0528
    OP_JUMP lab_0558
// lab_0528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0558
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
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
// fun_0718
fun_0718() {
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
// fun_0838
fun_0838() {
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
// fun_0958
fun_0958() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0990
fun_0990() {
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
// fun_0A08
fun_0A08() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1220(var_8)
    OP_JZER lab_0B28
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1250(var_24)
    OP_JNZ lab_0B28
    pri = 0;
    return pri;
// lab_0B28
    OP_JUMP lab_0B38
// lab_0B38
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B98
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B38
    pri = 0;
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CD0
    pri = 0;
    return pri;
// lab_0CD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D10
// lab_0D10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1220(var_8)
    OP_JNZ lab_0D98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D88
    pri = 0;
    return pri;
// lab_0D98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0DE0
    pri = 0;
    return pri;
// lab_0DE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E88(var_8)
    pri = 0;
    return pri;
// lab_0E40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D10
    pri = 0;
    return pri;
// lab_0D88
    OP_JUMP lab_0DE0
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC0
fun_0EC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F10
    pri = 0;
    return pri;
// lab_0F10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1220(var_8)
    OP_JZER lab_1040
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F68
    OP_ZERO_P_S 64
// lab_1040
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1078
    OP_CONST_S 64, 1
// lab_1078
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10B0
    OP_CONST_S 72, 1
// lab_10B0
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
// lab_0F68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F90
    OP_ZERO_P_S 72
// lab_0F90
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
    OP_JUMP lab_1150
// lab_1150
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1220
fun_1220() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1280
fun_1280() {
    OP_JUMP lab_1298
// lab_1298
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1328
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1318
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C88(var_8)
    pri = 0;
    return pri;
// lab_1328
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C88(var_8)
    pri = 0;
    return pri;
// lab_13B8
    pri = 0;
    return pri;
// lab_13A8
    OP_JUMP lab_13C8
// lab_13C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1298
    pri = 0;
    return pri;
// lab_1318
    OP_JUMP lab_13C8
}
// fun_1408
fun_1408() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1280(var_40)
    pri = 0;
    return pri;
}
// fun_1490
fun_1490() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_14F0
fun_14F0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
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
// switch_1B40
        case default:
        {
// switch_1B40_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B88
// lab_1B88
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
            OP_JNZ lab_1C30
            var_88 = 0;
            pri = fun_1DE8()
// lab_1C30
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B40_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1728
                case default:
                {
// switch_1728_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17A0
// lab_17A0
                    OP_JUMP lab_1B88
                }
                case 0x0:
                {
// switch_1728_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17A0
                }
                case 0x1:
                {
// switch_1728_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17A0
                }
                case 0x2:
                {
// switch_1728_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17A0
                }
                case 0x3:
                {
// switch_1728_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17A0
                }
                case 0x4:
                {
// switch_1728_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17A0
                }
                case 0x5:
                {
// switch_1728_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17A0
                }
            }
        }
        case 0x65:
        {
// switch_1B40_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_18E0
                case default:
                {
// switch_18E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1958
// lab_1958
                    OP_JUMP lab_1B88
                }
                case 0x0:
                {
// switch_18E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1958
                }
                case 0x1:
                {
// switch_18E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1958
                }
                case 0x2:
                {
// switch_18E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1958
                }
                case 0x3:
                {
// switch_18E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1958
                }
                case 0x4:
                {
// switch_18E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1958
                }
                case 0x5:
                {
// switch_18E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1958
                }
            }
        }
        case 0x66:
        {
// switch_1B40_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A98
                case default:
                {
// switch_1A98_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B10
// lab_1B10
                    OP_JUMP lab_1B88
                }
                case 0x0:
                {
// switch_1A98_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B10
                }
                case 0x1:
                {
// switch_1A98_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B10
                }
                case 0x2:
                {
// switch_1A98_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B10
                }
                case 0x3:
                {
// switch_1A98_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B10
                }
                case 0x4:
                {
// switch_1A98_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B10
                }
                case 0x5:
                {
// switch_1A98_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B10
                }
            }
        }
    }
}
// fun_1C48
fun_1C48() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1CF0
    pri = 1;
    return pri;
// lab_1CF0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D38
fun_1D38() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C48(var_8)
    arg_2 = pri;
// lab_1D88
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1528(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE8
fun_1DE8() {
    OP_JUMP lab_1E00
// lab_1E00
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E40
    pri = 0;
    return pri;
// lab_1E40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E00
    pri = 0;
    return pri;
}
// fun_1E80
fun_1E80() {
    var_8 = 0;
    pri = fun_1DE8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F30
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F30
    pri = 0;
    return pri;
}
// fun_1F40
fun_1F40() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F70
fun_1F70() {
    pri = arg_1;
    OP_JNZ lab_1FB8
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1FB8
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
// fun_2010
fun_2010() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2088
fun_2088() {
    var_8 = 0;
    pri = fun_2010()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2108
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2108
    pri = 1;
    return pri;
// lab_2108
    var_8 = 0;
    pri = fun_2010()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2148
    pri = 1;
    return pri;
// lab_2148
    var_8 = 0;
    pri = fun_2010()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2178
fun_2178() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_21C8
fun_21C8() {
    OP_JUMP lab_21E0
// lab_21E0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2218
    pri = 0;
    return pri;
// lab_2218
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21E0
    pri = 0;
    return pri;
}
// fun_2258
fun_2258() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_05F8(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0718(var_72, var_64, var_56)
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
    pri = fun_0838(var_136, var_128, var_120)
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
// fun_23B8
fun_23B8() {
    pri = arg_6;
    OP_JNZ lab_23F0
    var_8 = 0;
    pri = fun_1160()
// lab_23F0
    pri = arg_1;
    switch (pri) {
// switch_3958
        case default:
        {
// switch_3958_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CA8
            pri = 1;
            OP_JUMP lab_3CB0
// lab_3CA8
            pri = 0;
// lab_3CB0
            OP_JZER lab_3E08
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C50(var_24, var_16)
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
            OP_JUMP lab_3E68
// lab_3E08
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_3E68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3EC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F28
// lab_3EC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F28
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F28
            pri = arg_2;
            OP_JZER lab_3F68
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F68
            var_8 = 0;
            pri = fun_11A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3958_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1:
        {
// switch_3958_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x2:
        {
// switch_3958_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x3:
        {
// switch_3958_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x4:
        {
// switch_3958_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x5:
        {
// switch_3958_case_0x5
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x6:
        {
// switch_3958_case_0x6
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x7:
        {
// switch_3958_case_0x7
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x8:
        {
// switch_3958_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x9:
        {
// switch_3958_case_0x9
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xa:
        {
// switch_3958_case_0xa
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xb:
        {
// switch_3958_case_0xb
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xc:
        {
// switch_3958_case_0xc
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xd:
        {
// switch_3958_case_0xd
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xe:
        {
// switch_3958_case_0xe
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0xf:
        {
// switch_3958_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x10:
        {
// switch_3958_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x11:
        {
// switch_3958_case_0x11
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x12:
        {
// switch_3958_case_0x12
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x13:
        {
// switch_3958_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x14:
        {
// switch_3958_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x15:
        {
// switch_3958_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x16:
        {
// switch_3958_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x17:
        {
// switch_3958_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x18:
        {
// switch_3958_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x19:
        {
// switch_3958_case_0x19
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3958_case_default
        }
        case 0x1a:
        {
// switch_3958_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD8(var_48, var_40)
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
            pri = fun_0EC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1b:
        {
// switch_3958_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD8(var_48, var_40)
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
            pri = fun_0EC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1c:
        {
// switch_3958_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD8(var_48, var_40)
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
            pri = fun_0EC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3958_case_default
        }
        case 0x1d:
        {
// switch_3958_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1e:
        {
// switch_3958_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x1f:
        {
// switch_3958_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x20:
        {
// switch_3958_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x21:
        {
// switch_3958_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x22:
        {
// switch_3958_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x23:
        {
// switch_3958_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x24:
        {
// switch_3958_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x25:
        {
// switch_3958_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x26:
        {
// switch_3958_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x27:
        {
// switch_3958_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x28:
        {
// switch_3958_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
        case 0x29:
        {
// switch_3958_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3958_case_default
        }
    }
}
// fun_3F98
fun_3F98() {
    pri = arg_5;
    OP_JNZ lab_3FD0
    var_8 = 0;
    pri = fun_1160()
// lab_3FD0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4020
    OP_CONST_S -8, -1
// lab_4020
    pri = arg_1;
    switch (pri) {
// switch_5AD8
        case default:
        {
// switch_5AD8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F80
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F80
            pri = 1;
            OP_JUMP lab_5F88
// lab_5F80
            pri = 0;
// lab_5F88
            OP_JZER lab_5FD8
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6230
// lab_5FD8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6040
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6040
            pri = 1;
            OP_JUMP lab_6048
// lab_6040
            pri = 0;
// lab_6048
            OP_JZER lab_61D0
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C50(var_24, var_16)
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
            OP_JUMP lab_6230
// lab_61D0
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_6230
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_62A0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_62A0
            var_8 = 0;
            pri = fun_11A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AD8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1:
        {
// switch_5AD8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2:
        {
// switch_5AD8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3:
        {
// switch_5AD8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x4:
        {
// switch_5AD8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x5:
        {
// switch_5AD8_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E88(var_40)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x6:
        {
// switch_5AD8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x7:
        {
// switch_5AD8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x8:
        {
// switch_5AD8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x9:
        {
// switch_5AD8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xa:
        {
// switch_5AD8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xb:
        {
// switch_5AD8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xc:
        {
// switch_5AD8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xd:
        {
// switch_5AD8_case_0xd
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xe:
        {
// switch_5AD8_case_0xe
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0xf:
        {
// switch_5AD8_case_0xf
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x10:
        {
// switch_5AD8_case_0x10
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x11:
        {
// switch_5AD8_case_0x11
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x12:
        {
// switch_5AD8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x13:
        {
// switch_5AD8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x14:
        {
// switch_5AD8_case_0x14
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x15:
        {
// switch_5AD8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x16:
        {
// switch_5AD8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x17:
        {
// switch_5AD8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x18:
        {
// switch_5AD8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x19:
        {
// switch_5AD8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1a:
        {
// switch_5AD8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1b:
        {
// switch_5AD8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1c:
        {
// switch_5AD8_case_0x1c
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1d:
        {
// switch_5AD8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1e:
        {
// switch_5AD8_case_0x1e
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x1f:
        {
// switch_5AD8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x20:
        {
// switch_5AD8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x21:
        {
// switch_5AD8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x22:
        {
// switch_5AD8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x23:
        {
// switch_5AD8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x24:
        {
// switch_5AD8_case_0x24
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x25:
        {
// switch_5AD8_case_0x25
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x26:
        {
// switch_5AD8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x27:
        {
// switch_5AD8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x28:
        {
// switch_5AD8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x29:
        {
// switch_5AD8_case_0x29
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2a:
        {
// switch_5AD8_case_0x2a
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2b:
        {
// switch_5AD8_case_0x2b
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2c:
        {
// switch_5AD8_case_0x2c
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2d:
        {
// switch_5AD8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2e:
        {
// switch_5AD8_case_0x2e
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x2f:
        {
// switch_5AD8_case_0x2f
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x30:
        {
// switch_5AD8_case_0x30
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x31:
        {
// switch_5AD8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x32:
        {
// switch_5AD8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x33:
        {
// switch_5AD8_case_0x33
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x34:
        {
// switch_5AD8_case_0x34
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x35:
        {
// switch_5AD8_case_0x35
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x36:
        {
// switch_5AD8_case_0x36
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x37:
        {
// switch_5AD8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x38:
        {
// switch_5AD8_case_0x38
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
            pri = fun_0EC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x39:
        {
// switch_5AD8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3a:
        {
// switch_5AD8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3b:
        {
// switch_5AD8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3c:
        {
// switch_5AD8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3d:
        {
// switch_5AD8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
        case 0x3e:
        {
// switch_5AD8_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            OP_JUMP switch_5AD8_case_default
        }
    }
}
// fun_62D0
fun_62D0() {
    pri = arg_4;
    OP_JNZ lab_6308
    var_8 = 0;
    pri = fun_1160()
// lab_6308
    pri = arg_1;
    switch (pri) {
// switch_76E0
        case default:
        {
// switch_76E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1220(var_264)
            OP_JZER lab_7CA8
            pri = arg_3;
            switch (pri) {
// switch_7C50
                case default:
                {
// switch_7C50_case_default
                    OP_JUMP lab_7F60
// lab_7F60
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FD0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FD0
                    var_8 = 0;
                    pri = fun_11A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C50_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
                case 0x2:
                {
// switch_7C50_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
                case 0x3:
                {
// switch_7C50_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7C50_case_default
                }
            }
// lab_7CA8
            pri = arg_1;
            OP_JZER lab_7CF8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7CF8
            pri = 0;
            OP_JUMP lab_7D00
// lab_7CF8
            pri = 1;
// lab_7D00
            OP_JZER lab_7D68
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D68
            pri = 1;
            OP_JUMP lab_7D70
// lab_7D68
            pri = 0;
// lab_7D70
            OP_JZER lab_7DC0
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_7F60
// lab_7DC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7E28
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_7F60
// lab_7E28
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C50(var_24, var_16)
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
// switch_76E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1:
        {
// switch_76E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2:
        {
// switch_76E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3:
        {
// switch_76E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x4:
        {
// switch_76E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x5:
        {
// switch_76E0_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E88(var_40)
            OP_JUMP switch_76E0_case_default
        }
        case 0x6:
        {
// switch_76E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x7:
        {
// switch_76E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x8:
        {
// switch_76E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x9:
        {
// switch_76E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xa:
        {
// switch_76E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xb:
        {
// switch_76E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xc:
        {
// switch_76E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xd:
        {
// switch_76E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xe:
        {
// switch_76E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0xf:
        {
// switch_76E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x10:
        {
// switch_76E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x11:
        {
// switch_76E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x12:
        {
// switch_76E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x13:
        {
// switch_76E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x14:
        {
// switch_76E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x15:
        {
// switch_76E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x16:
        {
// switch_76E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x17:
        {
// switch_76E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x18:
        {
// switch_76E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x19:
        {
// switch_76E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1a:
        {
// switch_76E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1b:
        {
// switch_76E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1c:
        {
// switch_76E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1d:
        {
// switch_76E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1e:
        {
// switch_76E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x1f:
        {
// switch_76E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x20:
        {
// switch_76E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x21:
        {
// switch_76E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x22:
        {
// switch_76E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x23:
        {
// switch_76E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x24:
        {
// switch_76E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x25:
        {
// switch_76E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x26:
        {
// switch_76E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x27:
        {
// switch_76E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x28:
        {
// switch_76E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x29:
        {
// switch_76E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2a:
        {
// switch_76E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2b:
        {
// switch_76E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2c:
        {
// switch_76E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2d:
        {
// switch_76E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2e:
        {
// switch_76E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x2f:
        {
// switch_76E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x30:
        {
// switch_76E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x31:
        {
// switch_76E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x32:
        {
// switch_76E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x33:
        {
// switch_76E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x34:
        {
// switch_76E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x35:
        {
// switch_76E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x36:
        {
// switch_76E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x37:
        {
// switch_76E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x38:
        {
// switch_76E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x39:
        {
// switch_76E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3a:
        {
// switch_76E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3b:
        {
// switch_76E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3c:
        {
// switch_76E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3d:
        {
// switch_76E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
        case 0x3e:
        {
// switch_76E0_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C10(var_24, var_16, var_8)
            OP_JUMP switch_76E0_case_default
        }
    }
}
// fun_8000
fun_8000() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8210(var_16, var_8)
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
    OP_JZER lab_81F8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_81F8
    pri = 0;
    return pri;
}
// fun_8210
fun_8210() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C10(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8258
fun_8258() {
    pri = 30280;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_82E0
// lab_82E0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8460
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8450
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_83A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_83A0
    pri = 0;
    OP_JUMP lab_83A8
// lab_8460
    pri = 0;
    return pri;
// lab_8450
    OP_JUMP lab_82D8
// lab_82D8
    OP_INC_P_S -936
// lab_83A0
    pri = 1;
// lab_83A8
    OP_JZER lab_8420
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8418
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8420
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8418
}
// fun_8480
fun_8480() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_84B8
fun_84B8() {
    var_8 = 0;
    pri = fun_8480()
    switch (pri) {
// switch_8568
        case default:
        {
// switch_8568_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_85B0
// lab_85B0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8568_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_85B0
        }
        case 0x1:
        {
// switch_8568_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_85B0
        }
        case 0x2:
        {
// switch_8568_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_85B0
        }
    }
}
// fun_85C0
fun_85C0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8658
    var_8 = 1;
    var_16 = 0;
    var_24 = 31200;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_14C8()
// lab_8658
    pri = arg_4;
    OP_JZER lab_8690
    var_8 = 1;
    var_16 = 8;
    pri = fun_14F0(var_8)
// lab_8690
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_86E8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_86E8
    pri = 0;
    OP_JUMP lab_86F0
// lab_86E8
    pri = 1;
// lab_86F0
    OP_JZER lab_87B8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_87B8
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_8790
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1408(var_32, var_24)
    OP_JUMP lab_87B8
// lab_87B8
    pri = arg_2;
    OP_JZER lab_8890
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_8860
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11E0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0958(var_40)
    OP_JUMP lab_8890
// lab_8890
    pri = arg_3;
    OP_JZER lab_88C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1490(var_8)
// lab_88C8
    pri = 0;
    return pri;
// lab_8860
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11E0(var_16, var_8)
// lab_8790
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1408(var_16, var_8)
}
// fun_88D8
fun_88D8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_8A58
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8970
    var_8 = 1;
    var_16 = 0;
    var_24 = 31200;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
// lab_8A58
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_8970
    pri = arg_0;
    OP_JNZ lab_89B8
    var_8 = 31248;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_89D8
// lab_89B8
    var_8 = 31424;
    pri = SoundPostEvent(var_8)
// lab_89D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8A58
    var_24 = 31688;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    var_48 = 0;
    pri = fun_03A8()
}
// fun_8A98
fun_8A98() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8258(var_24)
    pri = 0;
    return pri;
}
// fun_8B00
fun_8B00() {
    pri = g_mode;
    switch (pri) {
// switch_8BC0
        case default:
        {
// switch_8BC0_case_default
            pri = CommandNOP()
            OP_JUMP lab_8C08
// lab_8C08
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8BC0_case_0x0
            var_8 = 0;
            pri = fun_8C18()
            OP_JUMP lab_8C08
        }
        case 0x245938276b27b569:
        {
// switch_8BC0_case_0x245938276b27b569
            var_8 = 0;
            pri = fun_A098()
            OP_JUMP lab_8C08
        }
        case 0x41eea22af54a1d65:
        {
// switch_8BC0_case_0x41eea22af54a1d65
            var_8 = 0;
            pri = fun_9FA8()
            OP_JUMP lab_8C08
        }
    }
}
// fun_8C18
fun_8C18() {
    pri = 0;
    return pri;
}
// fun_8C30
fun_8C30() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_85C0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8C88
fun_8C88() {
    pri = 0;
    return pri;
}
// fun_8CA0
fun_8CA0() {
    pri = 0;
    return pri;
}
// fun_8CB8
fun_8CB8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, 7927692416553760981, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_2258(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 7927692416553760981, 8802641224559852288
    var_88 = 48;
    pri = fun_0A58(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, 7927692416553760981
    var_128 = 48;
    pri = fun_0A58(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0AB0(var_136)
    var_152 = 7927692416553760981;
    var_160 = 8;
    pri = fun_0AB0(var_152)
    var_168 = 31736;
    pri = SoundPostEvent(var_168)
    var_176 = 0;
    var_184 = 2;
    var_192 = 7927692416553760981;
    var_200 = 24;
    pri = fun_8000(var_192, var_184, var_176)
    var_208 = 1;
    var_216 = 8;
    pri = fun_00B8(var_208)
    var_224 = 7927692416553760981;
    var_232 = 8;
    pri = fun_0C88(var_224)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C 4991794521072533934, 7927692416553760981
    var_280 = 56;
    pri = fun_1D38(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1E80(var_288)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C 4991793421560905723, 7927692416553760981
    var_344 = 56;
    pri = fun_1D38(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_1E80(var_352)
    var_368 = 0;
    pri = fun_1F40()
    var_376 = 0;
    var_384 = 0;
    var_392 = 7927692416553760981;
    var_400 = 24;
    pri = fun_8000(var_392, var_384, var_376)
    var_408 = 1;
    var_416 = 8;
    pri = fun_00B8(var_408)
    var_424 = 7927692416553760981;
    var_432 = 8;
    pri = fun_0C88(var_424)
    var_440 = 0;
    var_448 = 3;
    var_456 = 0;
    var_464 = 100;
    var_472 = -1;
    OP_PUSH2_C 4991792322049277512, 7927692416553760981
    var_480 = 56;
    pri = fun_1D38(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 1;
    var_496 = 8;
    pri = fun_1E80(var_488)
    var_504 = 0;
    pri = fun_1F40()
    var_520 = 129;
    var_528 = 128;
    var_536 = 127;
    var_544 = 24;
    pri = fun_84B8(var_536, var_528, var_520)
    var_8 = pri;
    var_552 = 13;
    var_560 = 0;
    var_568 = 0;
    var_576 = 8585237335037680770;
    var_584 = var_8;
    var_592 = 40;
    pri = fun_1F70(var_584, var_576, var_568, var_560, var_552)
    var_600 = 0;
    pri = fun_2088()
    OP_JZER lab_91C0
    var_608 = 0;
    pri = fun_2178()
// lab_91C0
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4661264097235435520, 4657966661863735296, 8802641224559852288
    var_40 = 48;
    pri = fun_05A0(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 4631952216750555136;
    var_64 = 0;
    OP_PUSH5_C 4661302877010547180, 4631950809375671583, 4658321958051134833, 4661632213728414925, 4636172230338889646
    var_72 = 4658842158992468214;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_21C8()
    var_96 = 15;
    var_104 = 8;
    pri = fun_00B8(var_96)
    var_112 = 0;
    var_120 = 4631952216750555136;
    var_128 = 0;
    OP_PUSH5_C 4661185504144282092, 4631950809375671583, 4658568446567849656, 4661534994910286971, 4636153230777961677
    var_136 = 4659088471587322593;
    var_144 = 300;
    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_152 = 31688;
    var_160 = 8;
    var_168 = 16;
    pri = fun_02D8(var_160, var_152)
    var_176 = 0;
    pri = fun_03A8()
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = -30;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 7927692416553760981;
    var_232 = 40;
    pri = fun_0A08(var_224, var_216, var_208, var_200, var_192)
    var_240 = 7927692416553760981;
    var_248 = 8;
    pri = fun_0AB0(var_240)
    var_256 = 15;
    var_264 = 8;
    pri = fun_00B8(var_256)
    var_272 = 0;
    var_280 = 3;
    var_288 = 7927692416553760981;
    var_296 = 24;
    pri = fun_8000(var_288, var_280, var_272)
    var_304 = 1;
    var_312 = 8;
    pri = fun_00B8(var_304)
    var_320 = 7927692416553760981;
    var_328 = 8;
    pri = fun_0C88(var_320)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    OP_PUSH2_C 4991800018630674989, 7927692416553760981
    var_376 = 56;
    pri = fun_1D38(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_1E80(var_384)
    var_400 = 0;
    var_408 = 3;
    var_416 = 0;
    var_424 = 100;
    var_432 = -1;
    OP_PUSH2_C 4991798919119046778, 7927692416553760981
    var_440 = 56;
    pri = fun_1D38(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 1;
    var_456 = 8;
    pri = fun_1E80(var_448)
    var_464 = 0;
    pri = fun_1F40()
    var_472 = 0;
    var_480 = 0;
    var_488 = 7927692416553760981;
    var_496 = 24;
    pri = fun_8000(var_488, var_480, var_472)
    var_504 = 1;
    var_512 = 8;
    pri = fun_00B8(var_504)
    var_520 = 7927692416553760981;
    var_528 = 8;
    pri = fun_0C88(var_520)
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    OP_PUSH2_C 8802641224559852288, 7927692416553760981
    var_568 = 48;
    pri = fun_0A58(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 7927692416553760981;
    var_584 = 8;
    pri = fun_0AB0(var_576)
    var_592 = 0;
    var_600 = 4631952216750555136;
    var_608 = 0;
    OP_PUSH5_C 4661281986289619436, 4635689500753830871, 4658351688845549896, 4661916569425590354, 4639547115309650412
    var_616 = 4658351688845549896;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_21C8()
    var_640 = 15;
    var_648 = 8;
    pri = fun_00B8(var_640)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    OP_PUSH2_C 4991786824491136457, 7927692416553760981
    var_696 = 56;
    pri = fun_1D38(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_1E80(var_704)
    var_720 = 0;
    pri = fun_1F40()
    var_728 = 1;
    var_736 = 0;
    var_744 = 4641240890982006784;
    var_752 = 0;
    var_760 = 0;
    OP_PUSH4_C 4661264097235435520, 4658234942700912640, 4607182418800017408, 7927692416553760981
    var_768 = 72;
    pri = fun_0990(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 10;
    var_784 = 8;
    pri = fun_00B8(var_776)
    var_792 = 0;
    var_800 = 4631952216750555136;
    var_808 = 3;
    OP_PUSH5_C 4661281986289619436, 4635689500753830871, 4658132116373483028, 4661916569425590354, 4639546059778487747
    var_816 = 4658132116373483028;
    var_824 = 20;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 7927692416553760981;
    var_840 = 8;
    pri = fun_0AB0(var_832)
    var_848 = 1;
    var_856 = 1;
    var_864 = 16;
    pri = fun_88D8(var_856, var_848)
    var_872 = 30;
    var_880 = 8;
    pri = fun_00B8(var_872)
    var_888 = 0;
    pri = fun_21C8()
    var_896 = 1;
    var_904 = -1;
    var_912 = -1;
    var_920 = 3;
    var_928 = 0;
    var_936 = 0;
    var_944 = 7927692416553760981;
    var_952 = 56;
    pri = fun_23B8(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 0;
    var_968 = 3;
    var_976 = 0;
    var_984 = 100;
    var_992 = -1;
    OP_PUSH2_C 4991797819607418567, 7927692416553760981
    var_1000 = 56;
    pri = fun_1D38(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_1E80(var_1008)
    var_1024 = 7927692416553760981;
    var_1032 = 8;
    pri = fun_0C88(var_1024)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 8;
    var_1088 = 7927692416553760981;
    var_1096 = 56;
    pri = fun_3F98(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 0;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 100;
    var_1136 = -1;
    OP_PUSH2_C 4991796720095790356, 7927692416553760981
    var_1144 = 56;
    pri = fun_1D38(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_1E80(var_1152)
    var_1168 = 0;
    pri = fun_1F40()
    var_1176 = 1;
    var_1184 = 3;
    var_1192 = 0;
    var_1200 = 8;
    var_1208 = 7927692416553760981;
    var_1216 = 40;
    pri = fun_62D0(var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1224 = 7927692416553760981;
    var_1232 = 8;
    pri = fun_0C88(var_1224)
    var_1240 = 1;
    var_1248 = 0;
    var_1256 = 4641240890982006784;
    var_1264 = 30;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 0;
    var_1288 = 4131;
    pri = float(var_1288)
    var_1296 = pri;
    var_1304 = 3400;
    pri = float(var_1304)
    var_1312 = pri;
    OP_PUSH2_C 4611686018427387904, 7927692416553760981
    var_1320 = 72;
    pri = fun_0990(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1328 = 7927692416553760981;
    var_1336 = 8;
    pri = fun_0AB0(var_1328)
    var_1344 = 3;
    var_1352 = 15;
    pri = EvCameraEnd(var_1352, var_1344)
    var_1360 = 31896;
    pri = SoundPostEvent(var_1360)
    pri = 0;
    return pri;
}
// fun_9D60
fun_9D60() {
    pri = 0;
    return pri;
}
// fun_9D78
fun_9D78() {
    var_8 = 7927692416553760981;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = -8208209633826348795;
    var_32 = 8;
    pri = fun_0570(var_24)
    var_40 = 1210;
    var_48 = 8;
    pri = fun_8A98(var_40)
    var_56 = -8755440991666276328;
    pri = VanishFlagReset(var_56)
    var_64 = -8755446489224417383;
    pri = VanishFlagReset(var_64)
    var_72 = 3728213071223358512;
    pri = VanishFlagReset(var_72)
    var_80 = 7116314638901664256;
    pri = VanishFlagReset(var_80)
    var_88 = 279354136510782265;
    pri = VanishFlagReset(var_88)
    var_96 = 577590369271743373;
    pri = VanishFlagReset(var_96)
    var_104 = 7469020547458231139;
    pri = VanishFlagReset(var_104)
    var_112 = -2125369913008984214;
    pri = VanishFlagReset(var_112)
    var_120 = 6172501094173624636;
    pri = VanishFlagReset(var_120)
    var_128 = 3007037875693876706;
    pri = VanishFlagReset(var_128)
    pri = 0;
    return pri;
}
// fun_9F90
fun_9F90() {
    pri = 0;
    return pri;
}
// fun_9FA8
fun_9FA8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8C30()
    var_16 = 0;
    pri = fun_8C88()
    var_24 = 0;
    pri = fun_8CA0()
    var_32 = 0;
    pri = fun_8CB8()
    var_40 = 0;
    pri = fun_9D60()
    var_48 = 0;
    pri = fun_9D78()
    var_56 = 0;
    pri = fun_9F90()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A098
fun_A098() {
    var_8 = 0;
    pri = fun_8C88()
    var_16 = 0;
    pri = fun_9D78()
    pri = 0;
    return pri;
}
