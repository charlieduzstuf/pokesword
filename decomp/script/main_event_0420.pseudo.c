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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
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
// fun_0728
fun_0728() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JZER lab_07F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F18(var_24)
    OP_JNZ lab_07F0
    pri = 0;
    return pri;
// lab_07F0
    OP_JUMP lab_0800
// lab_0800
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0860
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0860
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0800
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0998
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09D8
// lab_09D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JNZ lab_0A60
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A50
    pri = 0;
    return pri;
// lab_0A60
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B50(var_8)
    pri = 0;
    return pri;
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D8
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0AA8
}
// fun_0B50
fun_0B50() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BD8
    pri = 0;
    return pri;
// lab_0BD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JZER lab_0D08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C30
    OP_ZERO_P_S 64
// lab_0D08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_CONST_S 64, 1
// lab_0D40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_CONST_S 72, 1
// lab_0D78
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
// lab_0C30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C58
    OP_ZERO_P_S 72
// lab_0C58
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
    OP_JUMP lab_0E18
// lab_0E18
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EA8
fun_0EA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE8
fun_0EE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F48
fun_0F48() {
    OP_JUMP lab_0F60
// lab_0F60
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FF0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1080
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1070
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_1080
    pri = 0;
    return pri;
// lab_1070
    OP_JUMP lab_1090
// lab_1090
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F60
    pri = 0;
    return pri;
// lab_0FE0
    OP_JUMP lab_1090
}
// fun_10D0
fun_10D0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F48(var_40)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1220
fun_1220() {
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
// switch_1838
        case default:
        {
// switch_1838_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1880
// lab_1880
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
            OP_JNZ lab_1928
            var_88 = 0;
            pri = fun_1AE0()
// lab_1928
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1838_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1420
                case default:
                {
// switch_1420_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1498
// lab_1498
                    OP_JUMP lab_1880
                }
                case 0x0:
                {
// switch_1420_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1498
                }
                case 0x1:
                {
// switch_1420_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1498
                }
                case 0x2:
                {
// switch_1420_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1498
                }
                case 0x3:
                {
// switch_1420_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1498
                }
                case 0x4:
                {
// switch_1420_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1498
                }
                case 0x5:
                {
// switch_1420_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1498
                }
            }
        }
        case 0x65:
        {
// switch_1838_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15D8
                case default:
                {
// switch_15D8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1650
// lab_1650
                    OP_JUMP lab_1880
                }
                case 0x0:
                {
// switch_15D8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1650
                }
                case 0x1:
                {
// switch_15D8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1650
                }
                case 0x2:
                {
// switch_15D8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1650
                }
                case 0x3:
                {
// switch_15D8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1650
                }
                case 0x4:
                {
// switch_15D8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1650
                }
                case 0x5:
                {
// switch_15D8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1650
                }
            }
        }
        case 0x66:
        {
// switch_1838_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1790
                case default:
                {
// switch_1790_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1808
// lab_1808
                    OP_JUMP lab_1880
                }
                case 0x0:
                {
// switch_1790_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1808
                }
                case 0x1:
                {
// switch_1790_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1808
                }
                case 0x2:
                {
// switch_1790_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1808
                }
                case 0x3:
                {
// switch_1790_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1808
                }
                case 0x4:
                {
// switch_1790_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1808
                }
                case 0x5:
                {
// switch_1790_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1808
                }
            }
        }
    }
}
// fun_1940
fun_1940() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0918(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19E8
    pri = 1;
    return pri;
// lab_19E8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A30
fun_1A30() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1940(var_8)
    arg_2 = pri;
// lab_1A80
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1220(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AE0
fun_1AE0() {
    OP_JUMP lab_1AF8
// lab_1AF8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B38
    pri = 0;
    return pri;
// lab_1B38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AF8
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
    var_8 = 0;
    pri = fun_1AE0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C28
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C28
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CB8
fun_1CB8() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_1CF0
fun_1CF0() {
    pri = arg_5;
    OP_JNZ lab_1D28
    var_8 = 0;
    pri = fun_0E28()
// lab_1D28
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1D78
    OP_CONST_S -8, -1
// lab_1D78
    pri = arg_1;
    switch (pri) {
// switch_3830
        case default:
        {
// switch_3830_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3CD8
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0918(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3CD8
            pri = 1;
            OP_JUMP lab_3CE0
// lab_3CD8
            pri = 0;
// lab_3CE0
            OP_JZER lab_3D30
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3F88
// lab_3D30
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D98
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D98
            pri = 1;
            OP_JUMP lab_3DA0
// lab_3D98
            pri = 0;
// lab_3DA0
            OP_JZER lab_3F28
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0918(var_24, var_16)
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
            OP_JUMP lab_3F88
// lab_3F28
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
// lab_3F88
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3FF8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3FF8
            var_8 = 0;
            pri = fun_0E68()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3830_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x1:
        {
// switch_3830_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x2:
        {
// switch_3830_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3:
        {
// switch_3830_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x4:
        {
// switch_3830_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x5:
        {
// switch_3830_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B50(var_40)
            OP_JUMP switch_3830_case_default
        }
        case 0x6:
        {
// switch_3830_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x7:
        {
// switch_3830_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x8:
        {
// switch_3830_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x9:
        {
// switch_3830_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0xa:
        {
// switch_3830_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0xb:
        {
// switch_3830_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0xc:
        {
// switch_3830_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0xd:
        {
// switch_3830_case_0xd
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0xe:
        {
// switch_3830_case_0xe
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0xf:
        {
// switch_3830_case_0xf
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x10:
        {
// switch_3830_case_0x10
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x11:
        {
// switch_3830_case_0x11
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x12:
        {
// switch_3830_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x13:
        {
// switch_3830_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x14:
        {
// switch_3830_case_0x14
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x15:
        {
// switch_3830_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x16:
        {
// switch_3830_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x17:
        {
// switch_3830_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x18:
        {
// switch_3830_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x19:
        {
// switch_3830_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x1a:
        {
// switch_3830_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x1b:
        {
// switch_3830_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x1c:
        {
// switch_3830_case_0x1c
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x1d:
        {
// switch_3830_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x1e:
        {
// switch_3830_case_0x1e
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x1f:
        {
// switch_3830_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x20:
        {
// switch_3830_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x21:
        {
// switch_3830_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x22:
        {
// switch_3830_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x23:
        {
// switch_3830_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x24:
        {
// switch_3830_case_0x24
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x25:
        {
// switch_3830_case_0x25
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x26:
        {
// switch_3830_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x27:
        {
// switch_3830_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x28:
        {
// switch_3830_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x29:
        {
// switch_3830_case_0x29
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x2a:
        {
// switch_3830_case_0x2a
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x2b:
        {
// switch_3830_case_0x2b
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x2c:
        {
// switch_3830_case_0x2c
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x2d:
        {
// switch_3830_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x2e:
        {
// switch_3830_case_0x2e
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x2f:
        {
// switch_3830_case_0x2f
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x30:
        {
// switch_3830_case_0x30
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x31:
        {
// switch_3830_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x32:
        {
// switch_3830_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x33:
        {
// switch_3830_case_0x33
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x34:
        {
// switch_3830_case_0x34
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x35:
        {
// switch_3830_case_0x35
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x36:
        {
// switch_3830_case_0x36
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x37:
        {
// switch_3830_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x38:
        {
// switch_3830_case_0x38
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3830_case_default
        }
        case 0x39:
        {
// switch_3830_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3a:
        {
// switch_3830_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3b:
        {
// switch_3830_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3c:
        {
// switch_3830_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3d:
        {
// switch_3830_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
        case 0x3e:
        {
// switch_3830_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            OP_JUMP switch_3830_case_default
        }
    }
}
// fun_4028
fun_4028() {
    pri = arg_4;
    OP_JNZ lab_4060
    var_8 = 0;
    pri = fun_0E28()
// lab_4060
    pri = arg_1;
    switch (pri) {
// switch_5438
        case default:
        {
// switch_5438_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0EE8(var_264)
            OP_JZER lab_5A00
            pri = arg_3;
            switch (pri) {
// switch_59A8
                case default:
                {
// switch_59A8_case_default
                    OP_JUMP lab_5CB8
// lab_5CB8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5D28
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5D28
                    var_8 = 0;
                    pri = fun_0E68()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_59A8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59A8_case_default
                }
                case 0x2:
                {
// switch_59A8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59A8_case_default
                }
                case 0x3:
                {
// switch_59A8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59A8_case_default
                }
            }
// lab_5A00
            pri = arg_1;
            OP_JZER lab_5A50
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5A50
            pri = 0;
            OP_JUMP lab_5A58
// lab_5A50
            pri = 1;
// lab_5A58
            OP_JZER lab_5AC0
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0918(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5AC0
            pri = 1;
            OP_JUMP lab_5AC8
// lab_5AC0
            pri = 0;
// lab_5AC8
            OP_JZER lab_5B18
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CB8
// lab_5B18
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5B80
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CB8
// lab_5B80
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0918(var_24, var_16)
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
// switch_5438_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1:
        {
// switch_5438_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2:
        {
// switch_5438_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3:
        {
// switch_5438_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x4:
        {
// switch_5438_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x5:
        {
// switch_5438_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B50(var_40)
            OP_JUMP switch_5438_case_default
        }
        case 0x6:
        {
// switch_5438_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x7:
        {
// switch_5438_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x8:
        {
// switch_5438_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x9:
        {
// switch_5438_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xa:
        {
// switch_5438_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xb:
        {
// switch_5438_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xc:
        {
// switch_5438_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xd:
        {
// switch_5438_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xe:
        {
// switch_5438_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0xf:
        {
// switch_5438_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x10:
        {
// switch_5438_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x11:
        {
// switch_5438_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x12:
        {
// switch_5438_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x13:
        {
// switch_5438_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x14:
        {
// switch_5438_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x15:
        {
// switch_5438_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x16:
        {
// switch_5438_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x17:
        {
// switch_5438_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x18:
        {
// switch_5438_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x19:
        {
// switch_5438_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1a:
        {
// switch_5438_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1b:
        {
// switch_5438_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1c:
        {
// switch_5438_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1d:
        {
// switch_5438_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1e:
        {
// switch_5438_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x1f:
        {
// switch_5438_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x20:
        {
// switch_5438_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x21:
        {
// switch_5438_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x22:
        {
// switch_5438_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x23:
        {
// switch_5438_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x24:
        {
// switch_5438_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x25:
        {
// switch_5438_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x26:
        {
// switch_5438_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x27:
        {
// switch_5438_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x28:
        {
// switch_5438_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x29:
        {
// switch_5438_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2a:
        {
// switch_5438_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2b:
        {
// switch_5438_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2c:
        {
// switch_5438_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2d:
        {
// switch_5438_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2e:
        {
// switch_5438_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x2f:
        {
// switch_5438_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x30:
        {
// switch_5438_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x31:
        {
// switch_5438_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x32:
        {
// switch_5438_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x33:
        {
// switch_5438_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x34:
        {
// switch_5438_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x35:
        {
// switch_5438_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x36:
        {
// switch_5438_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x37:
        {
// switch_5438_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x38:
        {
// switch_5438_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x39:
        {
// switch_5438_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3a:
        {
// switch_5438_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3b:
        {
// switch_5438_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3c:
        {
// switch_5438_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3d:
        {
// switch_5438_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
        case 0x3e:
        {
// switch_5438_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            OP_JUMP switch_5438_case_default
        }
    }
}
// fun_5D58
fun_5D58() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5E58
        case default:
        {
// switch_5E58_case_default
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
// switch_5E58_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5E58_case_default
        }
        case 0x1:
        {
// switch_5E58_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5E58_case_default
        }
        case 0x2:
        {
// switch_5E58_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5E58_case_default
        }
        case 0x3:
        {
// switch_5E58_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5E58_case_default
        }
    }
}
// fun_5F18
fun_5F18() {
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
    pri = fun_1A30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1AE0()
    pri = 0;
    return pri;
}
// fun_5FB0
fun_5FB0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5D58(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5F18(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6058
fun_6058() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_60A8
// lab_60A8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22256;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6120
    OP_JUMP lab_6150
// lab_6120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_60A8
// lab_6150
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_61D8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4028(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_11B8(var_56)
// lab_61D8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6240
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EA8(var_24, var_16)
// lab_6240
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0EA8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6300
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0950(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0728(var_88, var_80, var_72, var_64, var_56)
// lab_6300
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6340
    pri = 0;
    return pri;
// lab_6340
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6488
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22376;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_08A0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6450
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6488
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0778(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0778(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0950(var_40)
    pri = 0;
    return pri;
// lab_6450
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EA8(var_16, var_8)
}
// fun_6510
fun_6510() {
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
    pri = fun_5FB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1B78(var_112)
    var_128 = 0;
    pri = fun_1C38()
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
    pri = fun_6058(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6688
fun_6688() {
    pri = 22512;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6710
// lab_6710
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6890
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6880
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_67D0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_67D0
    pri = 0;
    OP_JUMP lab_67D8
// lab_6890
    pri = 0;
    return pri;
// lab_6880
    OP_JUMP lab_6708
// lab_6708
    OP_INC_P_S -936
// lab_67D0
    pri = 1;
// lab_67D8
    OP_JZER lab_6850
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6848
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6850
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6848
}
// fun_68B0
fun_68B0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6948
    var_8 = 1;
    var_16 = 0;
    var_24 = 23432;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1190()
// lab_6948
    pri = arg_4;
    OP_JZER lab_6980
    var_8 = 1;
    var_16 = 8;
    pri = fun_11E8(var_8)
// lab_6980
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_69D8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_69D8
    pri = 0;
    OP_JUMP lab_69E0
// lab_69D8
    pri = 1;
// lab_69E0
    OP_JZER lab_6AA8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6AA8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6A80
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10D0(var_32, var_24)
    OP_JUMP lab_6AA8
// lab_6AA8
    pri = arg_2;
    OP_JZER lab_6B80
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6B50
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EA8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0678(var_40)
    OP_JUMP lab_6B80
// lab_6B80
    pri = arg_3;
    OP_JZER lab_6BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1158(var_8)
// lab_6BB8
    pri = 0;
    return pri;
// lab_6B50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EA8(var_16, var_8)
// lab_6A80
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10D0(var_16, var_8)
}
// fun_6BC8
fun_6BC8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6688(var_24)
    pri = 0;
    return pri;
}
// fun_6C30
fun_6C30() {
    pri = g_mode;
    switch (pri) {
// switch_6D68
        case default:
        {
// switch_6D68_case_default
            pri = CommandNOP()
            OP_JUMP lab_6DE0
// lab_6DE0
            pri = 0;
            return pri;
        }
        case 0x811bc600efeffd1b:
        {
// switch_6D68_case_0x811bc600efeffd1b
            var_8 = 0;
            pri = fun_7AD8()
            OP_JUMP lab_6DE0
        }
        case 0x8f5e9b4119e5a455:
        {
// switch_6D68_case_0x8f5e9b4119e5a455
            var_8 = 0;
            pri = fun_7A50()
            OP_JUMP lab_6DE0
        }
        case 0xb85b7b221ad95d88:
        {
// switch_6D68_case_0xb85b7b221ad95d88
            var_8 = 0;
            pri = fun_7890()
            OP_JUMP lab_6DE0
        }
        case 0xc8607ed9b0051778:
        {
// switch_6D68_case_0xc8607ed9b0051778
            var_8 = 0;
            pri = fun_79C8()
            OP_JUMP lab_6DE0
        }
        case 0x0:
        {
// switch_6D68_case_0x0
            var_8 = 0;
            pri = fun_6DF0()
            OP_JUMP lab_6DE0
        }
        case 0x5469d91e688f29e4:
        {
// switch_6D68_case_0x5469d91e688f29e4
            var_8 = 0;
            pri = fun_7980()
            OP_JUMP lab_6DE0
        }
    }
}
// fun_6DF0
fun_6DF0() {
    pri = 0;
    return pri;
}
// fun_6E08
fun_6E08() {
    OP_JUMP lab_6E20
// lab_6E20
    OP_ZERO_P_S -8
    var_16 = var_8;
    pri = CallInputShirtNumber(var_16)
    var_32 = var_8;
    pri = TempWorkGet(var_32)
    var_16 = pri;
    pri = var_16;
    OP_JZER lab_6EB0
    pri = 0;
    return pri;
// lab_6EB0
    OP_JUMP lab_6E20
    pri = 0;
    return pri;
}
// fun_6ED8
fun_6ED8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_68B0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6F30
fun_6F30() {
    pri = 0;
    return pri;
}
// fun_6F48
fun_6F48() {
    pri = 0;
    return pri;
}
// fun_6F60
fun_6F60() {
    var_8 = 23480;
    var_16 = 8;
    pri = fun_1CB8(var_8)
    var_24 = 15;
    var_32 = 8;
    pri = fun_0060(var_24)
    var_40 = 4;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 23640;
    var_64 = 8;
    var_72 = 16;
    pri = fun_0280(var_64, var_56)
    var_80 = 0;
    pri = fun_0350()
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C 8014464455680262060, 8847452862006642298
    var_128 = 56;
    pri = fun_1A30(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1B78(var_136)
    var_152 = 0;
    pri = fun_1C38()
    var_160 = 8847452862006642298;
    var_168 = 8;
    pri = fun_6E08(var_160)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1C68(var_176)
    var_192 = 0;
    var_200 = 3;
    var_208 = 0;
    var_216 = 100;
    var_224 = -1;
    OP_PUSH2_C 8014467754215146693, 8847452862006642298
    var_232 = 56;
    pri = fun_1A30(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 1;
    var_248 = 8;
    pri = fun_1B78(var_240)
    var_256 = 0;
    pri = fun_1C38()
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C 8014466654703518482, 8847452862006642298
    var_304 = 56;
    pri = fun_1A30(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1B78(var_312)
    var_328 = 0;
    pri = fun_1C38()
    var_336 = 1;
    var_344 = 1;
    var_352 = -1;
    var_360 = -1;
    var_368 = 0;
    var_376 = 8;
    var_384 = -2664763386676178833;
    var_392 = 56;
    pri = fun_1CF0(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 0;
    var_408 = 3;
    var_416 = 0;
    var_424 = 100;
    var_432 = -1;
    OP_PUSH2_C -3274279070421493401, -2664763386676178833
    var_440 = 56;
    pri = fun_1A30(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 1;
    var_456 = 8;
    pri = fun_1B78(var_448)
    var_464 = 0;
    pri = fun_1C38()
    var_472 = 1;
    var_480 = 3;
    var_488 = 0;
    var_496 = 8;
    var_504 = -2664763386676178833;
    var_512 = 40;
    pri = fun_4028(var_504, var_496, var_488, var_480, var_472)
    var_520 = -2664763386676178833;
    var_528 = 8;
    pri = fun_0950(var_520)
    var_536 = -2664763386676178833;
    var_544 = 8;
    pri = fun_0778(var_536)
    var_552 = 8802641224559852288;
    var_560 = 8;
    pri = fun_0778(var_552)
    var_568 = 1;
    var_576 = 0;
    var_584 = 4641240890982006784;
    var_592 = 0;
    var_600 = 0;
    var_608 = 2430;
    pri = float(var_608)
    var_616 = pri;
    var_624 = -2664763386676178833;
    pri = GetFieldObjectPositionX_(var_624)
    var_632 = pri;
    OP_PUSH2_C 4611686018427387904, -2664763386676178833
    var_640 = 72;
    pri = fun_06B0(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 15;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 8802641224559852288;
    var_712 = 40;
    pri = fun_0728(var_704, var_696, var_688, var_680, var_672)
    var_720 = -2664763386676178833;
    var_728 = 8;
    pri = fun_0778(var_720)
    var_736 = 8802641224559852288;
    var_744 = 8;
    pri = fun_0778(var_736)
    pri = 0;
    return pri;
}
// fun_7548
fun_7548() {
    pri = 0;
    return pri;
}
// fun_7560
fun_7560() {
    var_8 = -2664763386676178833;
    var_16 = 8;
    pri = fun_0648(var_8)
    var_24 = 431;
    var_32 = 8;
    pri = fun_6BC8(var_24)
    var_40 = 20;
    var_48 = -632418990022576455;
    pri = WorkSet(var_48, var_40)
    var_56 = 8333688502895045657;
    pri = VanishFlagSet(var_56)
    var_64 = 3563100693386837929;
    pri = VanishFlagReset(var_64)
    var_72 = -8424277323871559939;
    pri = VanishFlagReset(var_72)
    var_80 = 8990122872356867010;
    pri = VanishFlagReset(var_80)
    var_88 = 8990121772845238799;
    pri = VanishFlagReset(var_88)
    var_96 = 8892309384594757773;
    pri = VanishFlagReset(var_96)
    var_104 = -2560267667239473489;
    pri = VanishFlagReset(var_104)
    var_112 = 6318695584273792737;
    pri = VanishFlagSet(var_112)
    var_120 = 231539292373669382;
    pri = VanishFlagReset(var_120)
    var_128 = 5767568996398104757;
    pri = VanishFlagReset(var_128)
    var_136 = 4103919529309054878;
    pri = VanishFlagReset(var_136)
    var_144 = -686112562623115494;
    pri = VanishFlagReset(var_144)
    var_152 = -1996477309097037698;
    pri = FlagSet(var_152)
    var_160 = 4;
    var_168 = 8;
    pri = fun_0408(var_160)
    pri = 0;
    return pri;
}
// fun_7818
fun_7818() {
    OP_PUSH2_C 5238487797000439776, 5080532621525700882
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 7457989319736929833, -2776460031792718714
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_7890
fun_7890() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6ED8()
    var_16 = 0;
    pri = fun_6F30()
    var_24 = 0;
    pri = fun_6F48()
    var_32 = 0;
    pri = fun_6F60()
    var_40 = 0;
    pri = fun_7548()
    var_48 = 0;
    pri = fun_7560()
    var_56 = 0;
    pri = fun_7818()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7980
fun_7980() {
    var_8 = 0;
    pri = fun_6F30()
    var_16 = 0;
    pri = fun_7560()
    pri = 0;
    return pri;
}
// fun_79C8
fun_79C8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6965560244779513033;
    var_88 = 80;
    pri = fun_6510(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7A50
fun_7A50() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3646657667330016417;
    var_88 = 80;
    pri = fun_6510(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7AD8
fun_7AD8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8014469953238403115;
    var_88 = 80;
    pri = fun_6510(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
