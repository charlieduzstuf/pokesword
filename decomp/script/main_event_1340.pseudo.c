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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04E8
fun_04E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1108(var_8)
    OP_JZER lab_05B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1138(var_24)
    OP_JNZ lab_05B8
    pri = 0;
    return pri;
// lab_05B8
    OP_JUMP lab_05C8
// lab_05C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0628
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C8
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07A0
// lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1108(var_8)
    OP_JNZ lab_0828
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0818
    pri = 0;
    return pri;
// lab_0828
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0870
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
// lab_0818
    OP_JUMP lab_0870
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09A0
    pri = 0;
    return pri;
// lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1108(var_8)
    OP_JZER lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09F8
    OP_ZERO_P_S 64
// lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B08
    OP_CONST_S 64, 1
// lab_0B08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B40
    OP_CONST_S 72, 1
// lab_0B40
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
// lab_09F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A20
    OP_ZERO_P_S 72
// lab_0A20
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
    OP_JUMP lab_0BE0
// lab_0BE0
    pri = 0;
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CB0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0D28(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D68(var_24)
    pri = 0;
    return pri;
}
// fun_0E60
fun_0E60() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1108(var_8)
    OP_JZER lab_0F00
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_0F00
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0F68
fun_0F68() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_0E60(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1168
fun_1168() {
    OP_JUMP lab_1180
// lab_1180
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1210
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1200
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_1210
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1290
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_12A0
    pri = 0;
    return pri;
// lab_1290
    OP_JUMP lab_12B0
// lab_12B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1180
    pri = 0;
    return pri;
// lab_1200
    OP_JUMP lab_12B0
}
// fun_12F0
fun_12F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1168(var_40)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_13D8
fun_13D8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
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
// switch_1A58
        case default:
        {
// switch_1A58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AA0
// lab_1AA0
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
            OP_JNZ lab_1B48
            var_88 = 0;
            pri = fun_1D00()
// lab_1B48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1640
                case default:
                {
// switch_1640_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16B8
// lab_16B8
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_1640_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16B8
                }
                case 0x1:
                {
// switch_1640_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16B8
                }
                case 0x2:
                {
// switch_1640_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16B8
                }
                case 0x3:
                {
// switch_1640_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16B8
                }
                case 0x4:
                {
// switch_1640_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16B8
                }
                case 0x5:
                {
// switch_1640_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16B8
                }
            }
        }
        case 0x65:
        {
// switch_1A58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_17F8
                case default:
                {
// switch_17F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1870
// lab_1870
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_17F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1870
                }
                case 0x1:
                {
// switch_17F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1870
                }
                case 0x2:
                {
// switch_17F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1870
                }
                case 0x3:
                {
// switch_17F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1870
                }
                case 0x4:
                {
// switch_17F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1870
                }
                case 0x5:
                {
// switch_17F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1870
                }
            }
        }
        case 0x66:
        {
// switch_1A58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19B0
                case default:
                {
// switch_19B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A28
// lab_1A28
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_19B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A28
                }
                case 0x1:
                {
// switch_19B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A28
                }
                case 0x2:
                {
// switch_19B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A28
                }
                case 0x3:
                {
// switch_19B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A28
                }
                case 0x4:
                {
// switch_19B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A28
                }
                case 0x5:
                {
// switch_19B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A28
                }
            }
        }
    }
}
// fun_1B60
fun_1B60() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C08
    pri = 1;
    return pri;
// lab_1C08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C50
fun_1C50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B60(var_8)
    arg_2 = pri;
// lab_1CA0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1440(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    OP_JUMP lab_1D18
// lab_1D18
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D58
    pri = 0;
    return pri;
// lab_1D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D18
    pri = 0;
    return pri;
}
// fun_1D98
fun_1D98() {
    var_8 = 0;
    pri = fun_1D00()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E48
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_1E48
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E88
fun_1E88() {
    OP_JUMP lab_1EA0
// lab_1EA0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1ED8
    pri = 0;
    return pri;
// lab_1ED8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EA0
    pri = 0;
    return pri;
}
// fun_1F18
fun_1F18() {
    pri = arg_6;
    OP_JNZ lab_1F50
    var_8 = 0;
    pri = fun_0BF0()
// lab_1F50
    pri = arg_1;
    switch (pri) {
// switch_34B8
        case default:
        {
// switch_34B8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3808
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3808
            pri = 1;
            OP_JUMP lab_3810
// lab_3808
            pri = 0;
// lab_3810
            OP_JZER lab_3968
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_39C8
// lab_3968
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_39C8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3A28
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A88
// lab_3A28
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A88
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A88
            pri = arg_2;
            OP_JZER lab_3AC8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3AC8
            var_8 = 0;
            pri = fun_0C30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_34B8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1:
        {
// switch_34B8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x2:
        {
// switch_34B8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x3:
        {
// switch_34B8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x4:
        {
// switch_34B8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x5:
        {
// switch_34B8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x6:
        {
// switch_34B8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x7:
        {
// switch_34B8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x8:
        {
// switch_34B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x9:
        {
// switch_34B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xa:
        {
// switch_34B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xb:
        {
// switch_34B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xc:
        {
// switch_34B8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xd:
        {
// switch_34B8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xe:
        {
// switch_34B8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0xf:
        {
// switch_34B8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x10:
        {
// switch_34B8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x11:
        {
// switch_34B8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x12:
        {
// switch_34B8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x13:
        {
// switch_34B8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x14:
        {
// switch_34B8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x15:
        {
// switch_34B8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x16:
        {
// switch_34B8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x17:
        {
// switch_34B8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x18:
        {
// switch_34B8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x19:
        {
// switch_34B8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1a:
        {
// switch_34B8_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1b:
        {
// switch_34B8_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1c:
        {
// switch_34B8_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1d:
        {
// switch_34B8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1e:
        {
// switch_34B8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x1f:
        {
// switch_34B8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x20:
        {
// switch_34B8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x21:
        {
// switch_34B8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x22:
        {
// switch_34B8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x23:
        {
// switch_34B8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x24:
        {
// switch_34B8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x25:
        {
// switch_34B8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x26:
        {
// switch_34B8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x27:
        {
// switch_34B8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x28:
        {
// switch_34B8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
        case 0x29:
        {
// switch_34B8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34B8_case_default
        }
    }
}
// fun_3AF8
fun_3AF8() {
    pri = arg_5;
    OP_JNZ lab_3B30
    var_8 = 0;
    pri = fun_0BF0()
// lab_3B30
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3B80
    OP_CONST_S -8, -1
// lab_3B80
    pri = arg_1;
    switch (pri) {
// switch_5638
        case default:
        {
// switch_5638_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5AE0
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_06E0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5AE0
            pri = 1;
            OP_JUMP lab_5AE8
// lab_5AE0
            pri = 0;
// lab_5AE8
            OP_JZER lab_5B38
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D90
// lab_5B38
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5BA0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5BA0
            pri = 1;
            OP_JUMP lab_5BA8
// lab_5BA0
            pri = 0;
// lab_5BA8
            OP_JZER lab_5D30
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5D90
// lab_5D30
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5D90
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5E00
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5E00
            var_8 = 0;
            pri = fun_0C30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5638_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x1:
        {
// switch_5638_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x2:
        {
// switch_5638_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3:
        {
// switch_5638_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x4:
        {
// switch_5638_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x5:
        {
// switch_5638_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0918(var_40)
            OP_JUMP switch_5638_case_default
        }
        case 0x6:
        {
// switch_5638_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x7:
        {
// switch_5638_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x8:
        {
// switch_5638_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x9:
        {
// switch_5638_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0xa:
        {
// switch_5638_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0xb:
        {
// switch_5638_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0xc:
        {
// switch_5638_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0xd:
        {
// switch_5638_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0xe:
        {
// switch_5638_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0xf:
        {
// switch_5638_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x10:
        {
// switch_5638_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x11:
        {
// switch_5638_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x12:
        {
// switch_5638_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x13:
        {
// switch_5638_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x14:
        {
// switch_5638_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x15:
        {
// switch_5638_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x16:
        {
// switch_5638_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x17:
        {
// switch_5638_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x18:
        {
// switch_5638_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x19:
        {
// switch_5638_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x1a:
        {
// switch_5638_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x1b:
        {
// switch_5638_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x1c:
        {
// switch_5638_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x1d:
        {
// switch_5638_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x1e:
        {
// switch_5638_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x1f:
        {
// switch_5638_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x20:
        {
// switch_5638_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x21:
        {
// switch_5638_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x22:
        {
// switch_5638_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x23:
        {
// switch_5638_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x24:
        {
// switch_5638_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x25:
        {
// switch_5638_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x26:
        {
// switch_5638_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x27:
        {
// switch_5638_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x28:
        {
// switch_5638_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x29:
        {
// switch_5638_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x2a:
        {
// switch_5638_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x2b:
        {
// switch_5638_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x2c:
        {
// switch_5638_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x2d:
        {
// switch_5638_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x2e:
        {
// switch_5638_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x2f:
        {
// switch_5638_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x30:
        {
// switch_5638_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x31:
        {
// switch_5638_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x32:
        {
// switch_5638_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x33:
        {
// switch_5638_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x34:
        {
// switch_5638_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x35:
        {
// switch_5638_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x36:
        {
// switch_5638_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x37:
        {
// switch_5638_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x38:
        {
// switch_5638_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5638_case_default
        }
        case 0x39:
        {
// switch_5638_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3a:
        {
// switch_5638_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3b:
        {
// switch_5638_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3c:
        {
// switch_5638_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3d:
        {
// switch_5638_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
        case 0x3e:
        {
// switch_5638_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            OP_JUMP switch_5638_case_default
        }
    }
}
// fun_5E30
fun_5E30() {
    pri = arg_4;
    OP_JNZ lab_5E68
    var_8 = 0;
    pri = fun_0BF0()
// lab_5E68
    pri = arg_1;
    switch (pri) {
// switch_7240
        case default:
        {
// switch_7240_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1108(var_264)
            OP_JZER lab_7808
            pri = arg_3;
            switch (pri) {
// switch_77B0
                case default:
                {
// switch_77B0_case_default
                    OP_JUMP lab_7AC0
// lab_7AC0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7B30
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7B30
                    var_8 = 0;
                    pri = fun_0C30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_77B0_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77B0_case_default
                }
                case 0x2:
                {
// switch_77B0_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77B0_case_default
                }
                case 0x3:
                {
// switch_77B0_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_77B0_case_default
                }
            }
// lab_7808
            pri = arg_1;
            OP_JZER lab_7858
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7858
            pri = 0;
            OP_JUMP lab_7860
// lab_7858
            pri = 1;
// lab_7860
            OP_JZER lab_78C8
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_06E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_78C8
            pri = 1;
            OP_JUMP lab_78D0
// lab_78C8
            pri = 0;
// lab_78D0
            OP_JZER lab_7920
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7AC0
// lab_7920
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7988
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7AC0
// lab_7988
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7240_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1:
        {
// switch_7240_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2:
        {
// switch_7240_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3:
        {
// switch_7240_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x4:
        {
// switch_7240_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x5:
        {
// switch_7240_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0918(var_40)
            OP_JUMP switch_7240_case_default
        }
        case 0x6:
        {
// switch_7240_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x7:
        {
// switch_7240_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x8:
        {
// switch_7240_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x9:
        {
// switch_7240_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xa:
        {
// switch_7240_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xb:
        {
// switch_7240_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xc:
        {
// switch_7240_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xd:
        {
// switch_7240_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xe:
        {
// switch_7240_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0xf:
        {
// switch_7240_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x10:
        {
// switch_7240_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x11:
        {
// switch_7240_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x12:
        {
// switch_7240_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x13:
        {
// switch_7240_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x14:
        {
// switch_7240_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x15:
        {
// switch_7240_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x16:
        {
// switch_7240_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x17:
        {
// switch_7240_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x18:
        {
// switch_7240_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x19:
        {
// switch_7240_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1a:
        {
// switch_7240_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1b:
        {
// switch_7240_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1c:
        {
// switch_7240_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1d:
        {
// switch_7240_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1e:
        {
// switch_7240_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x1f:
        {
// switch_7240_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x20:
        {
// switch_7240_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x21:
        {
// switch_7240_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x22:
        {
// switch_7240_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x23:
        {
// switch_7240_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x24:
        {
// switch_7240_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x25:
        {
// switch_7240_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x26:
        {
// switch_7240_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x27:
        {
// switch_7240_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x28:
        {
// switch_7240_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x29:
        {
// switch_7240_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2a:
        {
// switch_7240_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2b:
        {
// switch_7240_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2c:
        {
// switch_7240_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2d:
        {
// switch_7240_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2e:
        {
// switch_7240_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x2f:
        {
// switch_7240_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x30:
        {
// switch_7240_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x31:
        {
// switch_7240_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x32:
        {
// switch_7240_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x33:
        {
// switch_7240_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x34:
        {
// switch_7240_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x35:
        {
// switch_7240_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x36:
        {
// switch_7240_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x37:
        {
// switch_7240_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x38:
        {
// switch_7240_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x39:
        {
// switch_7240_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3a:
        {
// switch_7240_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3b:
        {
// switch_7240_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3c:
        {
// switch_7240_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3d:
        {
// switch_7240_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
        case 0x3e:
        {
// switch_7240_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            OP_JUMP switch_7240_case_default
        }
    }
}
// fun_7B60
fun_7B60() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7C60
        case default:
        {
// switch_7C60_case_default
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
// switch_7C60_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7C60_case_default
        }
        case 0x1:
        {
// switch_7C60_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7C60_case_default
        }
        case 0x2:
        {
// switch_7C60_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7C60_case_default
        }
        case 0x3:
        {
// switch_7C60_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7C60_case_default
        }
    }
}
// fun_7D20
fun_7D20() {
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
    pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1D00()
    pri = 0;
    return pri;
}
// fun_7DB8
fun_7DB8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7B60(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7D20(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7E60
fun_7E60() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7EB0
// lab_7EB0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7F28
    OP_JUMP lab_7F58
// lab_7F28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7EB0
// lab_7F58
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7FE0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5E30(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_13D8(var_56)
// lab_7FE0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8048
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C70(var_24, var_16)
// lab_8048
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8108
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0718(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0498(var_88, var_80, var_72, var_64, var_56)
// lab_8108
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8148
    pri = 0;
    return pri;
// lab_8148
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8290
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0668(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8258
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8290
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0718(var_40)
    pri = 0;
    return pri;
// lab_8258
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
}
// fun_8318
fun_8318() {
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
    pri = fun_7DB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1D98(var_112)
    var_128 = 0;
    pri = fun_1E58()
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
    pri = fun_7E60(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8490
fun_8490() {
    pri = 33064;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8518
// lab_8518
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8698
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8688
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_85D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_85D8
    pri = 0;
    OP_JUMP lab_85E0
// lab_8698
    pri = 0;
    return pri;
// lab_8688
    OP_JUMP lab_8510
// lab_8510
    OP_INC_P_S -936
// lab_85D8
    pri = 1;
// lab_85E0
    OP_JZER lab_8658
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8650
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8658
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8650
}
// fun_86B8
fun_86B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8750
    var_8 = 1;
    var_16 = 0;
    var_24 = 33984;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_13B0()
// lab_8750
    pri = arg_4;
    OP_JZER lab_8788
    var_8 = 1;
    var_16 = 8;
    pri = fun_1408(var_8)
// lab_8788
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_87E0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_87E0
    pri = 0;
    OP_JUMP lab_87E8
// lab_87E0
    pri = 1;
// lab_87E8
    OP_JZER lab_88B0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_88B0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8888
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_12F0(var_32, var_24)
    OP_JUMP lab_88B0
// lab_88B0
    pri = arg_2;
    OP_JZER lab_8988
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8958
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0460(var_40)
    OP_JUMP lab_8988
// lab_8988
    pri = arg_3;
    OP_JZER lab_89C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1378(var_8)
// lab_89C0
    pri = 0;
    return pri;
// lab_8958
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
// lab_8888
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_12F0(var_16, var_8)
}
// fun_89D0
fun_89D0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8490(var_24)
    pri = 0;
    return pri;
}
// fun_8A38
fun_8A38() {
    pri = g_mode;
    switch (pri) {
// switch_8B98
        case default:
        {
// switch_8B98_case_default
            pri = CommandNOP()
            OP_JUMP lab_8C20
// lab_8C20
            pri = 0;
            return pri;
        }
        case 0xcb9d1c39621553af:
        {
// switch_8B98_case_0xcb9d1c39621553af
            var_8 = 0;
            pri = fun_A548()
            OP_JUMP lab_8C20
        }
        case 0xe8dfca15f5489d71:
        {
// switch_8B98_case_0xe8dfca15f5489d71
            var_8 = 0;
            pri = fun_A6E0()
            OP_JUMP lab_8C20
        }
        case 0xe8dfcb15f5489f24:
        {
// switch_8B98_case_0xe8dfcb15f5489f24
            var_8 = 0;
            pri = fun_A5D0()
            OP_JUMP lab_8C20
        }
        case 0xfebdc2ea4bb6716f:
        {
// switch_8B98_case_0xfebdc2ea4bb6716f
            var_8 = 0;
            pri = fun_A658()
            OP_JUMP lab_8C20
        }
        case 0x0:
        {
// switch_8B98_case_0x0
            var_8 = 0;
            pri = fun_8C30()
            OP_JUMP lab_8C20
        }
        case 0x34dca0277447253a:
        {
// switch_8B98_case_0x34dca0277447253a
            var_8 = 0;
            pri = fun_A500()
            OP_JUMP lab_8C20
        }
        case 0x52577a2afe5383ce:
        {
// switch_8B98_case_0x52577a2afe5383ce
            var_8 = 0;
            pri = fun_A410()
            OP_JUMP lab_8C20
        }
    }
}
// fun_8C30
fun_8C30() {
    pri = 0;
    return pri;
}
// fun_8C48
fun_8C48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_86B8(var_40, var_32, var_24, var_16, var_8)
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
    pri = 0;
    return pri;
}
// fun_8CD0
fun_8CD0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4658221880502774661, 4639481672377565184, 4670908556936961065, 4659935337433268224, 4642835798568793539
    var_32 = 4670908556936961065;
    var_40 = 30;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -303377521461947352, 8802641224559852288
    var_96 = 48;
    pri = fun_04E8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    pri = fun_1E88()
    var_112 = 6;
    var_120 = 6;
    var_128 = -303377521461947352;
    var_136 = 24;
    pri = fun_0DA0(var_128, var_120, var_112)
    var_144 = 1;
    var_152 = 1;
    var_160 = -1;
    var_168 = -1;
    var_176 = 0;
    var_184 = 11;
    var_192 = -303377521461947352;
    var_200 = 56;
    pri = fun_3AF8(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 101;
    var_240 = 2;
    OP_PUSH2_C -4879348342557465559, -303377521461947352
    var_248 = 56;
    pri = fun_1C50(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 1;
    var_264 = 8;
    pri = fun_1D98(var_256)
    var_272 = 0;
    pri = fun_1E58()
    var_280 = 8802641224559852288;
    var_288 = 8;
    pri = fun_0540(var_280)
    var_296 = 1;
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 0;
    var_336 = 9;
    var_344 = 4949930660899271115;
    var_352 = 56;
    pri = fun_3AF8(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 1;
    var_376 = -1;
    var_384 = -1;
    var_392 = 0;
    var_400 = 9;
    var_408 = 3593635681699453544;
    var_416 = 56;
    pri = fun_3AF8(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 1;
    var_440 = -1;
    var_448 = -1;
    var_456 = 0;
    var_464 = 9;
    var_472 = -2963512058666503901;
    var_480 = 56;
    pri = fun_3AF8(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 1;
    var_496 = 3;
    var_504 = 0;
    var_512 = 11;
    var_520 = -303377521461947352;
    var_528 = 40;
    pri = fun_5E30(var_520, var_512, var_504, var_496, var_488)
    var_536 = -303377521461947352;
    var_544 = 8;
    pri = fun_0718(var_536)
    var_552 = -303377521461947352;
    var_560 = 8;
    pri = fun_0E08(var_552)
    var_568 = 1;
    var_576 = 0;
    var_584 = 0;
    OP_PUSH2_C 4607182418800017408, -303377521461947352
    var_592 = 0;
    var_600 = 48;
    pri = fun_0F68(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 8802641224559852288, -303377521461947352
    var_640 = 48;
    pri = fun_04E8(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 0;
    var_656 = 3;
    var_664 = 0;
    var_672 = 100;
    var_680 = -1;
    OP_PUSH2_C -4879351641092350192, -303377521461947352
    var_688 = 56;
    pri = fun_1C50(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 8;
    pri = fun_1D98(var_696)
    var_712 = 0;
    pri = fun_1E58()
    var_720 = -303377521461947352;
    var_728 = 8;
    pri = fun_0540(var_720)
    var_736 = 1;
    var_744 = 1;
    var_752 = -1;
    var_760 = -1;
    var_768 = 0;
    var_776 = 2;
    var_784 = -303377521461947352;
    var_792 = 56;
    pri = fun_3AF8(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C -4879350541580721981, -303377521461947352
    var_840 = 56;
    pri = fun_1C50(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1D98(var_848)
    var_864 = 0;
    pri = fun_1E58()
    var_872 = 1;
    var_880 = 3;
    var_888 = 0;
    var_896 = 2;
    var_904 = -303377521461947352;
    var_912 = 40;
    pri = fun_5E30(var_904, var_896, var_888, var_880, var_872)
    var_920 = 1;
    var_928 = 3;
    var_936 = 0;
    var_944 = 9;
    var_952 = 4949930660899271115;
    var_960 = 40;
    pri = fun_5E30(var_952, var_944, var_936, var_928, var_920)
    var_968 = 1;
    var_976 = 3;
    var_984 = 0;
    var_992 = 9;
    var_1000 = 3593635681699453544;
    var_1008 = 40;
    pri = fun_5E30(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = 1;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 9;
    var_1048 = -2963512058666503901;
    var_1056 = 40;
    pri = fun_5E30(var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1064 = -303377521461947352;
    var_1072 = 8;
    pri = fun_0718(var_1064)
    var_1080 = 4949930660899271115;
    var_1088 = 8;
    pri = fun_0718(var_1080)
    var_1096 = 3593635681699453544;
    var_1104 = 8;
    pri = fun_0718(var_1096)
    var_1112 = -2963512058666503901;
    var_1120 = 8;
    pri = fun_0718(var_1112)
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 90;
    pri = float(var_1152)
    var_1160 = pri;
    var_1168 = -303377521461947352;
    var_1176 = 40;
    pri = fun_0498(var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1184 = 1;
    var_1192 = 1;
    var_1200 = -1;
    var_1208 = -1;
    var_1216 = 0;
    var_1224 = 1;
    var_1232 = 4949930660899271115;
    var_1240 = 56;
    pri = fun_3AF8(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 0;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 100;
    var_1280 = -1;
    OP_PUSH2_C -8879259473759866727, 4949930660899271115
    var_1288 = 56;
    pri = fun_1C50(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 1;
    var_1304 = 8;
    pri = fun_1D98(var_1296)
    var_1312 = 0;
    pri = fun_1E58()
    var_1320 = -303377521461947352;
    var_1328 = 8;
    pri = fun_0540(var_1320)
    var_1336 = 1;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 1;
    var_1368 = 4949930660899271115;
    var_1376 = 40;
    pri = fun_5E30(var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1384 = 4949930660899271115;
    var_1392 = 8;
    pri = fun_0718(var_1384)
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 1;
    var_1448 = 3593635681699453544;
    var_1456 = 56;
    pri = fun_1F18(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 0;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 100;
    var_1496 = -1;
    OP_PUSH2_C 3139510816981928486, 3593635681699453544
    var_1504 = 56;
    pri = fun_1C50(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_1D98(var_1512)
    var_1528 = 0;
    pri = fun_1E58()
    var_1536 = 3593635681699453544;
    var_1544 = 8;
    pri = fun_0718(var_1536)
    var_1552 = 1;
    var_1560 = -1;
    var_1568 = -1;
    var_1576 = 3;
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 4949930660899271115;
    var_1608 = 56;
    pri = fun_1F18(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 100;
    var_1648 = -1;
    OP_PUSH2_C -8879262772294751360, 4949930660899271115
    var_1656 = 56;
    pri = fun_1C50(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_1D98(var_1664)
    var_1680 = 0;
    pri = fun_1E58()
    var_1688 = 4949930660899271115;
    var_1696 = 8;
    pri = fun_0718(var_1688)
    var_1704 = 1;
    var_1712 = 1;
    var_1720 = -1;
    var_1728 = -1;
    var_1736 = 0;
    var_1744 = 2;
    var_1752 = 3593635681699453544;
    var_1760 = 56;
    pri = fun_3AF8(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = 0;
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 100;
    var_1800 = -1;
    OP_PUSH2_C 3139509717470300275, 3593635681699453544
    var_1808 = 56;
    pri = fun_1C50(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_1D98(var_1816)
    var_1832 = 0;
    pri = fun_1E58()
    var_1840 = 1;
    var_1848 = 3;
    var_1856 = 0;
    var_1864 = 2;
    var_1872 = 3593635681699453544;
    var_1880 = 40;
    pri = fun_5E30(var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1888 = 1;
    var_1896 = 1;
    var_1904 = -1;
    var_1912 = -1;
    var_1920 = 0;
    var_1928 = 9;
    var_1936 = -303377521461947352;
    var_1944 = 56;
    pri = fun_3AF8(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = 0;
    var_1960 = 3;
    var_1968 = 0;
    var_1976 = 100;
    var_1984 = -1;
    OP_PUSH2_C -4879345044022580926, -303377521461947352
    var_1992 = 56;
    pri = fun_1C50(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2000 = 1;
    var_2008 = 8;
    pri = fun_1D98(var_2000)
    var_2016 = 0;
    pri = fun_1E58()
    var_2024 = 1;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 9;
    var_2056 = -303377521461947352;
    var_2064 = 40;
    pri = fun_5E30(var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2072 = -303377521461947352;
    var_2080 = 8;
    pri = fun_0718(var_2072)
    var_2088 = 0;
    var_2096 = 0;
    var_2104 = 0;
    var_2112 = 0;
    OP_PUSH2_C 8802641224559852288, -303377521461947352
    var_2120 = 48;
    pri = fun_04E8(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2128 = 0;
    var_2136 = 3;
    var_2144 = 0;
    var_2152 = 100;
    var_2160 = -1;
    OP_PUSH2_C -4879343944510952715, -303377521461947352
    var_2168 = 56;
    pri = fun_1C50(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = -303377521461947352;
    var_2184 = 8;
    pri = fun_0540(var_2176)
    var_2192 = 1;
    var_2200 = 8;
    pri = fun_1D98(var_2192)
    var_2208 = 0;
    pri = fun_1E58()
    var_2216 = 0;
    var_2224 = 4631952216750555136;
    var_2232 = 1;
    OP_PUSH5_C 4658222100405100216, 4639481672377565184, 4671092667410253087, 4659935469374663557, 4642847761255303741
    var_2240 = 4671092667410253087;
    var_2248 = 60;
    pri = EvCameraMove(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2256 = 5;
    var_2264 = 8;
    pri = fun_0060(var_2256)
    var_2272 = 0;
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 90;
    pri = float(var_2296)
    var_2304 = pri;
    var_2312 = -303377521461947352;
    var_2320 = 40;
    pri = fun_0498(var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2328 = 15;
    var_2336 = 8;
    pri = fun_0060(var_2328)
    var_2344 = 0;
    var_2352 = 0;
    var_2360 = 0;
    var_2368 = 90;
    pri = float(var_2368)
    var_2376 = pri;
    var_2384 = 8802641224559852288;
    var_2392 = 40;
    pri = fun_0498(var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2400 = 25;
    var_2408 = 8;
    pri = fun_0060(var_2400)
    var_2416 = 1;
    var_2424 = 0;
    var_2432 = 34032;
    var_2440 = 1;
    var_2448 = 32;
    pri = fun_02E0(var_2440, var_2432, var_2424, var_2416)
    var_2456 = 0;
    pri = fun_0350()
    var_2464 = 34080;
    pri = SoundPostEvent(var_2464)
    var_2472 = 0;
    var_2480 = 4630685579355357184;
    var_2488 = 0;
    OP_PUSH5_C 4658150632149294776, 4633377887507594609, 4671227585733318410, 4658688315325509796, 4634270163183767388
    var_2496 = 4671104055601937777;
    var_2504 = 1;
    pri = EvCameraMove(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 0;
    pri = fun_1E88()
    var_2520 = 0;
    var_2528 = 4630685579355357184;
    var_2536 = 2;
    OP_PUSH5_C 4658109290512090399, 4635586058699889705, 4671350786011210711, 4658646599854351974, 4636062455097972490
    var_2544 = 4671227211899364966;
    var_2552 = 180;
    pri = EvCameraMove(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2560 = 34368;
    var_2568 = 15;
    var_2576 = 16;
    pri = fun_0280(var_2568, var_2560)
    var_2584 = 120;
    var_2592 = 8;
    pri = fun_0060(var_2584)
    var_2600 = 1;
    var_2608 = 0;
    var_2616 = 33984;
    var_2624 = 8;
    var_2632 = 32;
    pri = fun_02E0(var_2624, var_2616, var_2608, var_2600)
    var_2640 = 0;
    pri = fun_0350()
    var_2648 = 8802641224559852288;
    var_2656 = 8;
    pri = fun_0540(var_2648)
    var_2664 = -303377521461947352;
    var_2672 = 8;
    pri = fun_0540(var_2664)
    var_2680 = 34416;
    pri = SoundPostEvent(var_2680)
    var_2688 = 3;
    var_2696 = 1;
    pri = EvCameraEnd(var_2696, var_2688)
    pri = 0;
    return pri;
}
// fun_A0F0
fun_A0F0() {
    pri = 0;
    return pri;
}
// fun_A108
fun_A108() {
    var_8 = 1350;
    var_16 = 8;
    pri = fun_89D0(var_8)
    var_24 = -2963507660619991057;
    pri = FlagSet(var_24)
    var_32 = 3932988810004887490;
    pri = FlagSet(var_32)
    var_40 = -2963506561108362846;
    pri = FlagSet(var_40)
    var_48 = 3932987710493259279;
    pri = FlagSet(var_48)
    var_56 = -5196931039515366606;
    pri = FlagSet(var_56)
    var_64 = -2963505461596734635;
    pri = FlagSet(var_64)
    var_72 = -2963513158178132112;
    pri = FlagSet(var_72)
    var_80 = 6332055657046231525;
    pri = FlagSet(var_80)
    var_88 = -2963510959154875690;
    pri = FlagSet(var_88)
    var_96 = -7205741670279695942;
    pri = FlagSet(var_96)
    var_104 = -1421941409151136461;
    pri = FlagSet(var_104)
    var_112 = -1397410882338721035;
    pri = FlagReset(var_112)
    var_120 = -6545290045693462799;
    pri = FlagSet(var_120)
    pri = 0;
    return pri;
}
// fun_A348
fun_A348() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4636033603912859648, 4658375680189267968, 4670851068971502797, 8802641224559852288
    var_24 = 48;
    pri = fun_0408(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 15;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 34704;
    var_56 = 8;
    var_64 = 16;
    pri = fun_0280(var_56, var_48)
    var_72 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A410
fun_A410() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8C48()
    var_16 = 0;
    pri = fun_8CA0()
    var_24 = 0;
    pri = fun_8CB8()
    var_32 = 0;
    pri = fun_8CD0()
    var_40 = 0;
    pri = fun_A0F0()
    var_48 = 0;
    pri = fun_A108()
    var_56 = 0;
    pri = fun_A348()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A500
fun_A500() {
    var_8 = 0;
    pri = fun_8CA0()
    var_16 = 0;
    pri = fun_A108()
    pri = 0;
    return pri;
}
// fun_A548
fun_A548() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4879343944510952715;
    var_88 = 80;
    pri = fun_8318(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A5D0
fun_A5D0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8879261672783123149;
    var_88 = 80;
    pri = fun_8318(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A658
fun_A658() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3139508617958672064;
    var_88 = 80;
    pri = fun_8318(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A6E0
fun_A6E0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6434470115924768699;
    var_88 = 80;
    pri = fun_8318(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
