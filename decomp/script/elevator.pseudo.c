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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0570
fun_0570() {
    pri = arg_8;
    OP_JZER lab_05E0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_05E0
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_04D0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0820(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_06D0
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_06D0
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0710
fun_0710() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0758
// lab_0758
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0798
    OP_JUMP lab_0808
// lab_0798
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_07D8
    OP_JUMP lab_0808
// lab_07D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0758
// lab_0808
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0898
fun_0898() {
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
// fun_0910
fun_0910() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E70(var_8)
    OP_JZER lab_09D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EA0(var_24)
    OP_JNZ lab_09D8
    pri = 0;
    return pri;
// lab_09D8
    OP_JUMP lab_09E8
// lab_09E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A48
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09E8
    pri = 0;
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C00
// lab_0C00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E70(var_8)
    OP_JNZ lab_0C88
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CD0
    pri = 0;
    return pri;
// lab_0CD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D78(var_8)
    pri = 0;
    return pri;
// lab_0D30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C00
    pri = 0;
    return pri;
// lab_0C78
    OP_JUMP lab_0CD0
}
// fun_0D78
fun_0D78() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0ED0
fun_0ED0() {
    OP_JUMP lab_0EE8
// lab_0EE8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F78
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_0F78
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1008
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FF8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_1008
    pri = 0;
    return pri;
// lab_0FF8
    OP_JUMP lab_1018
// lab_1018
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EE8
    pri = 0;
    return pri;
// lab_0F68
    OP_JUMP lab_1018
}
// fun_1058
fun_1058() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0ED0(var_40)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1170
fun_1170() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
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
// switch_17C0
        case default:
        {
// switch_17C0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1808
// lab_1808
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
            OP_JNZ lab_18B0
            var_88 = 0;
            pri = fun_1C48()
// lab_18B0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17C0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_13A8
                case default:
                {
// switch_13A8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1420
// lab_1420
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_13A8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1420
                }
                case 0x1:
                {
// switch_13A8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1420
                }
                case 0x2:
                {
// switch_13A8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1420
                }
                case 0x3:
                {
// switch_13A8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1420
                }
                case 0x4:
                {
// switch_13A8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1420
                }
                case 0x5:
                {
// switch_13A8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1420
                }
            }
        }
        case 0x65:
        {
// switch_17C0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1560
                case default:
                {
// switch_1560_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15D8
// lab_15D8
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_1560_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15D8
                }
                case 0x1:
                {
// switch_1560_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15D8
                }
                case 0x2:
                {
// switch_1560_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15D8
                }
                case 0x3:
                {
// switch_1560_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15D8
                }
                case 0x4:
                {
// switch_1560_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15D8
                }
                case 0x5:
                {
// switch_1560_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15D8
                }
            }
        }
        case 0x66:
        {
// switch_17C0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1718
                case default:
                {
// switch_1718_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1790
// lab_1790
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_1718_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1790
                }
                case 0x1:
                {
// switch_1718_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1790
                }
                case 0x2:
                {
// switch_1718_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1790
                }
                case 0x3:
                {
// switch_1718_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1790
                }
                case 0x4:
                {
// switch_1718_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1790
                }
                case 0x5:
                {
// switch_1718_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1790
                }
            }
        }
    }
}
// fun_18C8
fun_18C8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_11A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    pri = 128;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 208;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B40(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19D8
    pri = 1;
    return pri;
// lab_19D8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A20
fun_1A20() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1930(var_8)
    arg_2 = pri;
// lab_1A70
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1930(var_8)
    arg_2 = pri;
// lab_1B20
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A20(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B98
fun_1B98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_18C8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BE8
fun_1BE8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1B98(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C48
fun_1C48() {
    OP_JUMP lab_1C60
// lab_1C60
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CA0
    pri = 0;
    return pri;
// lab_1CA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C60
    pri = 0;
    return pri;
}
// fun_1CE0
fun_1CE0() {
    var_8 = 0;
    pri = fun_1C48()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D90
    var_32 = 256;
    pri = SoundPostEvent(var_32)
// lab_1D90
    pri = 0;
    return pri;
}
// fun_1DA0
fun_1DA0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DD0
fun_1DD0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1E00
// lab_1E00
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E40
    OP_JUMP lab_1E70
// lab_1E40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E00
// lab_1E70
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
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
// fun_1F28
fun_1F28() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F60
fun_1F60() {
    OP_JUMP lab_1F78
// lab_1F78
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1FC0
    OP_JUMP lab_1FF0
    OP_JUMP lab_1FE0
// lab_1FC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1FF0
    pri = 0;
    return pri;
// lab_1FE0
    OP_JUMP lab_1F78
}
// fun_2000
fun_2000() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    pri = arg_4;
    OP_JNZ lab_2068
    var_8 = 0;
    pri = fun_0DB0()
// lab_2068
    pri = arg_1;
    switch (pri) {
// switch_3440
        case default:
        {
// switch_3440_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 952;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E70(var_264)
            OP_JZER lab_3A08
            pri = arg_3;
            switch (pri) {
// switch_39B0
                case default:
                {
// switch_39B0_case_default
                    OP_JUMP lab_3CC0
// lab_3CC0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3D30
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3D30
                    var_8 = 0;
                    pri = fun_0DF0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_39B0_case_0x1
                    var_8 = 32;
                    var_16 = 1104;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_39B0_case_default
                }
                case 0x2:
                {
// switch_39B0_case_0x2
                    var_8 = 32;
                    var_16 = 1208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_39B0_case_default
                }
                case 0x3:
                {
// switch_39B0_case_0x3
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_39B0_case_default
                }
            }
// lab_3A08
            pri = arg_1;
            OP_JZER lab_3A58
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3A58
            pri = 0;
            OP_JUMP lab_3A60
// lab_3A58
            pri = 1;
// lab_3A60
            OP_JZER lab_3AC8
            var_8 = 1304;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B40(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3AC8
            pri = 1;
            OP_JUMP lab_3AD0
// lab_3AC8
            pri = 0;
// lab_3AD0
            OP_JZER lab_3B20
            var_8 = 32;
            var_16 = 1400;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3CC0
// lab_3B20
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3B88
            var_8 = 32;
            var_16 = 1560;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3CC0
// lab_3B88
            var_16 = 1680;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
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
            var_176 = 1784;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1800;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_3440_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1:
        {
// switch_3440_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2:
        {
// switch_3440_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3:
        {
// switch_3440_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x4:
        {
// switch_3440_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x5:
        {
// switch_3440_case_0x5
            var_8 = 1;
            var_16 = 432;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D78(var_40)
            OP_JUMP switch_3440_case_default
        }
        case 0x6:
        {
// switch_3440_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x7:
        {
// switch_3440_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x8:
        {
// switch_3440_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x9:
        {
// switch_3440_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xa:
        {
// switch_3440_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xb:
        {
// switch_3440_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xc:
        {
// switch_3440_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xd:
        {
// switch_3440_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xe:
        {
// switch_3440_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0xf:
        {
// switch_3440_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x10:
        {
// switch_3440_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x11:
        {
// switch_3440_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x12:
        {
// switch_3440_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x13:
        {
// switch_3440_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x14:
        {
// switch_3440_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x15:
        {
// switch_3440_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x16:
        {
// switch_3440_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x17:
        {
// switch_3440_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x18:
        {
// switch_3440_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x19:
        {
// switch_3440_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1a:
        {
// switch_3440_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1b:
        {
// switch_3440_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1c:
        {
// switch_3440_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1d:
        {
// switch_3440_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1e:
        {
// switch_3440_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1f:
        {
// switch_3440_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x20:
        {
// switch_3440_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x21:
        {
// switch_3440_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x22:
        {
// switch_3440_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x23:
        {
// switch_3440_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x24:
        {
// switch_3440_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x25:
        {
// switch_3440_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x26:
        {
// switch_3440_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x27:
        {
// switch_3440_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x28:
        {
// switch_3440_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x29:
        {
// switch_3440_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2a:
        {
// switch_3440_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2b:
        {
// switch_3440_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2c:
        {
// switch_3440_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2d:
        {
// switch_3440_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2e:
        {
// switch_3440_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2f:
        {
// switch_3440_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x30:
        {
// switch_3440_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x31:
        {
// switch_3440_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x32:
        {
// switch_3440_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x33:
        {
// switch_3440_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x34:
        {
// switch_3440_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x35:
        {
// switch_3440_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x36:
        {
// switch_3440_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x37:
        {
// switch_3440_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x38:
        {
// switch_3440_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x39:
        {
// switch_3440_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3a:
        {
// switch_3440_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3b:
        {
// switch_3440_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3c:
        {
// switch_3440_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3d:
        {
// switch_3440_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3e:
        {
// switch_3440_case_0x3e
            var_8 = 3;
            var_16 = 848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
    }
}
// fun_3D60
fun_3D60() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3E60
        case default:
        {
// switch_3E60_case_default
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
// switch_3E60_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3E60_case_default
        }
        case 0x1:
        {
// switch_3E60_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3E60_case_default
        }
        case 0x2:
        {
// switch_3E60_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3E60_case_default
        }
        case 0x3:
        {
// switch_3E60_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3E60_case_default
        }
    }
}
// fun_3F20
fun_3F20() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3F70
// lab_3F70
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1848;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3FE8
    OP_JUMP lab_4018
// lab_3FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3F70
// lab_4018
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_40A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_2030(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1140(var_56)
// lab_40A0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_4108
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E30(var_24, var_16)
// lab_4108
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_41C8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0B78(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0910(var_88, var_80, var_72, var_64, var_56)
// lab_41C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_4208
    pri = 0;
    return pri;
// lab_4208
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4350
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1968;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A88(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_4318
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4350
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0960(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0960(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B78(var_40)
    pri = 0;
    return pri;
// lab_4318
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
}
// fun_43D8
fun_43D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4470
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1118()
// lab_4470
    pri = arg_4;
    OP_JZER lab_44A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1170(var_8)
// lab_44A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4500
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4500
    pri = 0;
    OP_JUMP lab_4508
// lab_4500
    pri = 1;
// lab_4508
    OP_JZER lab_45D0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_45D0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_45A8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1058(var_32, var_24)
    OP_JUMP lab_45D0
// lab_45D0
    pri = arg_2;
    OP_JZER lab_46A8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_4678
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E30(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0860(var_40)
    OP_JUMP lab_46A8
// lab_46A8
    pri = arg_3;
    OP_JZER lab_46E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_10E0(var_8)
// lab_46E0
    pri = 0;
    return pri;
// lab_4678
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
// lab_45A8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1058(var_16, var_8)
}
// fun_46F0
fun_46F0() {
    pri = g_mode;
    switch (pri) {
// switch_4828
        case default:
        {
// switch_4828_case_default
            pri = CommandNOP()
            OP_JUMP lab_48A0
// lab_48A0
            pri = 0;
            return pri;
        }
        case 0x80a36dc914e14c31:
        {
// switch_4828_case_0x80a36dc914e14c31
            var_8 = 0;
            pri = fun_6AB0()
            OP_JUMP lab_48A0
        }
        case 0x0:
        {
// switch_4828_case_0x0
            var_8 = 0;
            pri = fun_48B0()
            OP_JUMP lab_48A0
        }
        case 0x1124e67abb7893d0:
        {
// switch_4828_case_0x1124e67abb7893d0
            var_8 = 0;
            pri = fun_69F0()
            OP_JUMP lab_48A0
        }
        case 0x1124e97abb7898e9:
        {
// switch_4828_case_0x1124e97abb7898e9
            var_8 = 0;
            pri = fun_6A30()
            OP_JUMP lab_48A0
        }
        case 0x13d1ee3ae8f8d30e:
        {
// switch_4828_case_0x13d1ee3ae8f8d30e
            var_8 = 0;
            pri = fun_6A70()
            OP_JUMP lab_48A0
        }
        case 0x451a5e3319337233:
        {
// switch_4828_case_0x451a5e3319337233
            var_8 = 0;
            pri = fun_6960()
            OP_JUMP lab_48A0
        }
    }
}
// fun_48B0
fun_48B0() {
    pri = 0;
    return pri;
}
// fun_48C8
fun_48C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_43D8(var_40, var_32, var_24, var_16, var_8)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_JUMP lab_4948
// lab_4948
    pri = var_16;
    alt = 33;
    OP_JSGEQ lab_49E8
    alt = 2104;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_MOVE_ALT 
    pri = arg_0;
    OP_JNEQ lab_49D8
    pri = var_16;
    var_8 = pri;
// lab_49E8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    alt = 2104;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 64
    OP_LOAD_I 
    OP_JNZ lab_4AB8
    alt = 2104;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_24 = pri;
    OP_JUMP lab_4B18
// lab_4AB8
    alt = 2104;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 64
    OP_LOAD_I 
    var_24 = pri;
    OP_CONST_S -16, 1
// lab_4B18
    pri = var_24;
    OP_EQ_C_PRI 3373561773420931286
    OP_JZER lab_4CC8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_32 = pri;
    pri = var_32;
    alt = 1880;
    OP_JSLESS lab_4C20
    pri = var_32;
    alt = 3098;
    OP_JSLESS lab_4BF0
    pri = var_32;
    alt = 3160;
    OP_JSGEQ lab_4BF0
    pri = 1;
    OP_JUMP lab_4BF8
// lab_4CC8
    pri = var_24;
    OP_EQ_C_PRI 9045916866987739527
    OP_JZER lab_4E28
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_32 = pri;
    pri = var_32;
    OP_EQ_P_C_PRI 1890
    OP_JZER lab_4E20
    var_24 = 4744;
    var_32 = 8;
    pri = fun_1F28(var_24)
    var_40 = 0;
    pri = fun_1F60()
    var_48 = 3;
    var_56 = 0;
    var_64 = -4802222234379563540;
    var_72 = 24;
    pri = fun_1BE8(var_64, var_56, var_48)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1CE0(var_80)
    var_96 = 0;
    pri = fun_1DA0()
    var_104 = 0;
    pri = fun_2000()
    pri = 0;
    return pri;
// lab_4E28
    pri = var_24;
    OP_EQ_C_PRI -978731075708602895
    OP_JZER lab_5060
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1680
    OP_JZER lab_5018
    var_16 = 4896;
    var_24 = 8;
    pri = fun_1F28(var_16)
    var_32 = 0;
    pri = fun_1F60()
    var_40 = 1;
    var_48 = 1;
    var_56 = 1;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5484313460813071206;
    var_88 = 48;
    pri = fun_3D60(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C 2863595586341627491, -5484313460813071206
    var_136 = 56;
    pri = fun_1AD0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1CE0(var_144)
    var_160 = 0;
    pri = fun_1DA0()
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = -5484313460813071206;
    var_200 = 32;
    pri = fun_3F20(var_192, var_184, var_176, var_168)
    var_208 = 0;
    pri = fun_2000()
    pri = 0;
    return pri;
// lab_5060
    pri = var_24;
    OP_EQ_C_PRI 304175435543070622
    OP_JZER lab_5220
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_32 = pri;
    pri = 1520;
    OP_LOAD_P_S_ALT -32
    OP_JSGRTR lab_5118
    pri = var_32;
    alt = 1540;
    OP_JSGRTR lab_5118
    pri = 1;
    OP_JUMP lab_5120
// lab_5220
    alt = 2104;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    switch (pri) {
// switch_52E0
        case default:
        {
// switch_52E0_case_default
            var_8 = 5360;
            pri = SoundPostEvent(var_8)
            pri = var_16;
            OP_JZER lab_54B0
            var_16 = 1;
            var_24 = 0;
            var_32 = 4641240890982006784;
            var_40 = 0;
            var_48 = 0;
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 24
            OP_LOAD_I 
            var_56 = pri;
            pri = float(var_56)
            var_64 = pri;
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 16
            OP_LOAD_I 
            var_72 = pri;
            pri = float(var_72)
            var_80 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_88 = 72;
            pri = fun_0898(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_96 = 16;
            var_104 = 8;
            pri = fun_0060(var_96)
            OP_JUMP lab_5580
// lab_54B0
            var_8 = 1;
            var_16 = 0;
            var_24 = 4641240890982006784;
            var_32 = 0;
            var_40 = 0;
            var_48 = var_24;
            pri = GetFieldObjectPositionZ_(var_48)
            var_56 = pri;
            var_64 = var_24;
            pri = GetFieldObjectPositionX_(var_64)
            var_72 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_80 = 72;
            pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_88 = 8;
            var_96 = 8;
            pri = fun_0060(var_88)
// lab_5580
            pri = var_24;
            OP_EQ_C_PRI -4927740921529361424
            OP_JZER lab_5648
            var_8 = 11;
            var_16 = 8;
            pri = fun_0408(var_8)
            var_24 = 0;
            pri = fun_0440()
            var_32 = 5512;
            pri = SoundPostEvent(var_32)
            var_40 = 1;
            var_48 = 0;
            var_56 = 5808;
            var_64 = 8;
            var_72 = 32;
            pri = fun_02E0(var_64, var_56, var_48, var_40)
            OP_JUMP lab_5680
// lab_5648
            var_8 = 1;
            var_16 = 0;
            var_24 = 32;
            var_32 = 8;
            var_40 = 32;
            pri = fun_02E0(var_32, var_24, var_16, var_8)
// lab_5680
            var_8 = 0;
            pri = fun_0350()
            var_16 = 8802641224559852288;
            var_24 = 8;
            pri = fun_0960(var_16)
            pri = var_24;
            OP_EQ_C_PRI -4927740921529361424
            OP_JZER lab_58C0
            var_40 = 6910712898869243;
            pri = WorkGet(var_40)
            var_32 = pri;
            pri = var_32;
            alt = 1640;
            OP_JSLESS lab_5778
            pri = var_32;
            alt = 1660;
            OP_JSGEQ lab_5778
            pri = 1;
            OP_JUMP lab_5780
// lab_58C0
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_32 = pri;
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_40 = pri;
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_48 = pri;
            alt = 2104;
            pri = var_8;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_56 = pri;
            pri = arg_3;
            alt = -1;
            OP_JEQ lab_5A30
            pri = arg_3;
            var_48 = pri;
// lab_5A30
            pri = arg_4;
            alt = -1;
            OP_JEQ lab_5A60
            pri = arg_4;
            var_56 = pri;
// lab_5A60
            pri = arg_1;
            alt = -1;
            OP_JEQ lab_5A90
            pri = arg_1;
            var_32 = pri;
// lab_5A90
            pri = arg_2;
            alt = -1;
            OP_JEQ lab_5AC0
            pri = arg_2;
            var_40 = pri;
// lab_5AC0
            OP_CONST_S -64, -1
            pri = arg_5;
            OP_JZER lab_5B20
            var_16 = 5936;
            pri = SoundPostEvent(var_16)
            var_64 = pri;
// lab_5B20
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = 0;
            var_48 = var_56;
            pri = float(var_48)
            var_56 = pri;
            var_64 = var_48;
            pri = float(var_64)
            var_72 = pri;
            var_80 = var_40;
            var_88 = var_32;
            var_96 = 72;
            pri = fun_04D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            pri = FieldCameraClearDelay()
            pri = var_64;
            alt = -1;
            OP_JEQ lab_5C18
            var_104 = var_64;
            var_112 = 8;
            pri = fun_0710(var_104)
// lab_5C18
            var_8 = 6152;
            pri = SoundPostEvent(var_8)
            var_16 = 15;
            var_24 = 8;
            pri = fun_0060(var_16)
            pri = var_24;
            OP_EQ_C_PRI -4927740921529361424
            OP_JZER lab_5D48
            var_40 = 6910712898869243;
            pri = WorkGet(var_40)
            var_72 = pri;
            pri = var_72;
            OP_EQ_P_C_PRI 1610
            OP_JZER lab_5CE8
            OP_JUMP lab_5D30
// lab_5D48
            var_16 = 6910712898869243;
            pri = WorkGet(var_16)
            var_72 = pri;
            pri = var_24;
            OP_EQ_C_PRI 9045916866987739527
            OP_JZER lab_5DE0
            pri = var_72;
            OP_EQ_P_C_PRI 3170
            OP_JZER lab_5DE0
            pri = 1;
            OP_JUMP lab_5DE8
// lab_5DE0
            pri = 0;
// lab_5DE8
            OP_JZER lab_5E08
            OP_JUMP lab_5E30
// lab_5E08
            var_8 = 80;
            var_16 = 8;
            var_24 = 16;
            pri = fun_0280(var_16, var_8)
// lab_5E30
// lab_5CE8
            var_8 = 6304;
            pri = SoundPostEvent(var_8)
            var_16 = 6608;
            var_24 = 8;
            var_32 = 16;
            pri = fun_0280(var_24, var_16)
// lab_5D30
            OP_JUMP lab_5E38
// lab_5E38
            var_8 = 0;
            pri = fun_0350()
            pri = var_40;
            OP_EQ_C_PRI -7458547821599652033
            OP_JNZ lab_5F30
            pri = var_40;
            OP_EQ_C_PRI -7458546722088023822
            OP_JNZ lab_5F30
            pri = var_40;
            OP_EQ_C_PRI -2908913071569379095
            OP_JNZ lab_5F30
            pri = var_40;
            OP_EQ_C_PRI 9117464242582929906
            OP_JNZ lab_5F30
            pri = var_40;
            OP_EQ_C_PRI 9117463143071301695
            OP_JNZ lab_5F30
            pri = 0;
            OP_JUMP lab_5F38
// lab_5F30
            pri = 1;
// lab_5F38
            OP_JZER lab_5F60
            var_8 = 0;
            pri = fun_06E0()
// lab_5F60
            var_8 = 0;
            var_16 = 1;
            var_24 = 6624;
            pri = PokeMemoryCheckParty(var_24, var_16, var_8)
            pri = 0;
            return pri;
// lab_5778
            pri = 0;
// lab_5780
            OP_JZER lab_58B8
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = 0;
            var_48 = 180;
            pri = float(var_48)
            var_56 = pri;
            var_64 = 19554;
            pri = float(var_64)
            var_72 = pri;
            var_80 = 19814;
            pri = float(var_80)
            var_88 = pri;
            OP_PUSH2_C 7241591816491295918, 1367339687519336843
            var_96 = 80;
            pri = fun_0570(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_104 = 5872;
            var_112 = 8;
            var_120 = 16;
            pri = fun_0280(var_112, var_104)
            var_128 = 0;
            pri = fun_0350()
            pri = 0;
            return pri;
// lab_58B8
        }
        case 0x0:
        {
// switch_52E0_case_0x0
            var_8 = 1;
            var_16 = 5112;
            var_24 = var_24;
            var_32 = 24;
            pri = fun_0AC0(var_24, var_16, var_8)
            OP_JUMP switch_52E0_case_default
        }
        case 0x1:
        {
// switch_52E0_case_0x1
            var_8 = 5224;
            var_16 = var_24;
            var_24 = 16;
            pri = fun_0A88(var_16, var_8)
            OP_JUMP switch_52E0_case_default
        }
    }
// lab_5118
    pri = 0;
// lab_5120
    OP_JNZ lab_51B8
    pri = 1705;
    OP_LOAD_P_S_ALT -32
    OP_JSGRTR lab_5188
    pri = var_32;
    alt = 1850;
    OP_JSGEQ lab_5188
    pri = 1;
    OP_JUMP lab_5190
// lab_51B8
    pri = 1;
// lab_5188
    pri = 0;
// lab_5190
    OP_JNZ lab_51B8
    pri = 0;
    OP_JUMP lab_51C0
// lab_51C0
    OP_JZER lab_5218
    pri = IsPlayerUniform()
    OP_JNZ lab_5218
    var_8 = 1;
    pri = SetPlayerUniform(var_8)
// lab_5218
// lab_5018
    pri = IsPlayerUniform()
    OP_JZER lab_5060
    var_8 = 0;
    pri = SetPlayerUniform(var_8)
// lab_4E20
// lab_4C20
    pri = 1;
// lab_4BF0
    pri = 0;
// lab_4BF8
    OP_JNZ lab_4C20
    pri = 0;
    OP_JUMP lab_4C28
// lab_4C28
    OP_JZER lab_4CC0
    var_8 = 3;
    var_16 = 0;
    var_24 = 6167127359139950753;
    var_32 = 24;
    pri = fun_1B98(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CE0(var_40)
    var_56 = 0;
    pri = fun_1DA0()
    pri = 0;
    return pri;
// lab_4CC0
// lab_49D8
    OP_JUMP lab_4940
// lab_4940
    OP_INC_P_S -16
}
// fun_5FA8
fun_5FA8() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -58479033813865268;
    var_32 = 24;
    pri = fun_1B98(var_24, var_16, var_8)
    pri = arg_0;
    alt = -1156518929676790841;
    OP_JEQ lab_6048
    var_40 = 0;
    var_48 = -58475735278980635;
    var_56 = 0;
    var_64 = 24;
    pri = fun_1DD0(var_56, var_48, var_40)
// lab_6048
    pri = arg_0;
    alt = -1156517830165162630;
    OP_JEQ lab_60A8
    var_8 = 0;
    var_16 = -58476834790608846;
    var_24 = 1;
    var_32 = 24;
    pri = fun_1DD0(var_24, var_16, var_8)
// lab_60A8
    pri = arg_0;
    alt = -4378171149556049932;
    OP_JEQ lab_6108
    var_8 = 0;
    var_16 = -58482332348749901;
    var_24 = 2;
    var_32 = 24;
    pri = fun_1DD0(var_24, var_16, var_8)
// lab_6108
    pri = arg_0;
    alt = -2441011312235244656;
    OP_JEQ lab_6188
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1590;
    OP_JSLESS lab_6188
    pri = 1;
    OP_JUMP lab_6190
// lab_6188
    pri = 0;
// lab_6190
    OP_JZER lab_6258
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_6220
    var_16 = 0;
    var_24 = -58480133325493479;
    var_32 = 3;
    var_40 = 24;
    pri = fun_1DD0(var_32, var_24, var_16)
    OP_JUMP lab_6258
// lab_6258
    var_8 = 0;
    var_16 = 8600717705133625572;
    var_24 = 4;
    var_32 = 24;
    pri = fun_1DD0(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 32;
    pri = fun_1EB8(var_72, var_64, var_56, var_48)
    var_8 = pri;
    var_88 = 0;
    pri = fun_1DA0()
    pri = var_8;
    switch (pri) {
// switch_68F0
        case default:
        {
// switch_68F0_case_default
            pri = arg_0;
            switch (pri) {
// switch_6860
                case default:
                {
// switch_6860_case_default
                    var_8 = 1;
                    var_16 = 0;
                    var_24 = 4641240890982006784;
                    var_32 = 0;
                    var_40 = 0;
                    var_48 = 10264;
                    pri = float(var_48)
                    var_56 = pri;
                    var_64 = 3145;
                    pri = float(var_64)
                    var_72 = pri;
                    OP_PUSH2_C 4611686018427387904, 8802641224559852288
                    var_80 = 72;
                    pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_68B8
// lab_68B8
                    var_8 = 8802641224559852288;
                    var_16 = 8;
                    pri = fun_0960(var_8)
                    OP_JUMP lab_6948
// lab_6948
                    pri = 0;
                    return pri;
                }
                case 0xc33d9c8938d917f4:
                {
// switch_6860_case_0xc33d9c8938d917f4
                    var_8 = 1;
                    var_16 = 0;
                    var_24 = 4641240890982006784;
                    var_32 = 0;
                    var_40 = 0;
                    var_48 = 2575;
                    pri = float(var_48)
                    var_56 = pri;
                    var_64 = 2445;
                    pri = float(var_64)
                    var_72 = pri;
                    OP_PUSH2_C 4611686018427387904, 8802641224559852288
                    var_80 = 72;
                    pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_68B8
                }
                case 0xde1fc92501821390:
                {
// switch_6860_case_0xde1fc92501821390
                    var_8 = 1;
                    var_16 = 0;
                    var_24 = 4641240890982006784;
                    var_32 = 0;
                    var_40 = 0;
                    var_48 = 10264;
                    pri = float(var_48)
                    var_56 = pri;
                    var_64 = 3145;
                    pri = float(var_64)
                    var_72 = pri;
                    OP_PUSH2_C 4611686018427387904, 8802641224559852288
                    var_80 = 72;
                    pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_68B8
                }
                case 0xeff33829349993c7:
                {
// switch_6860_case_0xeff33829349993c7
                    var_8 = 1;
                    var_16 = 0;
                    var_24 = 4641240890982006784;
                    var_32 = 0;
                    var_40 = 0;
                    var_48 = 4434;
                    pri = float(var_48)
                    var_56 = pri;
                    var_64 = 9610;
                    pri = float(var_64)
                    var_72 = pri;
                    OP_PUSH2_C 4611686018427387904, 8802641224559852288
                    var_80 = 72;
                    pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_68B8
                }
                case 0xeff339293499957a:
                {
// switch_6860_case_0xeff339293499957a
                    var_8 = 1;
                    var_16 = 0;
                    var_24 = 4641240890982006784;
                    var_32 = 0;
                    var_40 = 0;
                    var_48 = 3234;
                    pri = float(var_48)
                    var_56 = pri;
                    var_64 = 24707;
                    pri = float(var_64)
                    var_72 = pri;
                    OP_PUSH2_C 4611686018427387904, 8802641224559852288
                    var_80 = 72;
                    pri = fun_0898(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_68B8
                }
            }
        }
        case 0x0:
        {
// switch_68F0_case_0x0
            var_8 = 1;
            var_16 = 4434;
            var_24 = 9610;
            OP_PUSH2_C -935838431704349219, 5475743609293200544
            var_32 = arg_0;
            var_40 = 48;
            pri = fun_48C8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_6948
        }
        case 0x1:
        {
// switch_68F0_case_0x1
            var_8 = 1;
            var_16 = 3234;
            var_24 = 24707;
            OP_PUSH2_C -935838431704349219, 5475743609293200544
            var_32 = arg_0;
            var_40 = 48;
            pri = fun_48C8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_6948
        }
        case 0x2:
        {
// switch_68F0_case_0x2
            var_8 = 1;
            var_16 = 2575;
            var_24 = 2445;
            OP_PUSH2_C -6671058735196667065, 6009338534933018162
            var_32 = arg_0;
            var_40 = 48;
            pri = fun_48C8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_6948
        }
        case 0x3:
        {
// switch_68F0_case_0x3
            var_8 = 1;
            var_16 = 10264;
            var_24 = 3145;
            OP_PUSH2_C -935846128285746696, 5475751305874598021
            var_32 = arg_0;
            var_40 = 48;
            pri = fun_48C8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_6948
        }
    }
// lab_6220
    var_8 = 0;
    var_16 = -58483431860378112;
    var_24 = 3;
    var_32 = 24;
    pri = fun_1DD0(var_24, var_16, var_8)
}
// fun_6960
fun_6960() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = -1;
    var_32 = -1;
    var_40 = -1;
    var_48 = -1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_48C8(var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_69F0
fun_69F0() {
    var_8 = -1156518929676790841;
    var_16 = 8;
    pri = fun_5FA8(var_8)
    pri = 0;
    return pri;
}
// fun_6A30
fun_6A30() {
    var_8 = -1156517830165162630;
    var_16 = 8;
    pri = fun_5FA8(var_8)
    pri = 0;
    return pri;
}
// fun_6A70
fun_6A70() {
    var_8 = -4378171149556049932;
    var_16 = 8;
    pri = fun_5FA8(var_8)
    pri = 0;
    return pri;
}
// fun_6AB0
fun_6AB0() {
    var_8 = -2441011312235244656;
    var_16 = 8;
    pri = fun_5FA8(var_8)
    pri = 0;
    return pri;
}
