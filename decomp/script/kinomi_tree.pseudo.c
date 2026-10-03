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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_LOAD_S_BOTH 24, 32
    OP_SUB_ALT 
    var_8 = pri;
    pri = GetPublicRand(var_8)
    OP_LOAD_P_S_ALT 24
    OP_ADD 
    return pri;
}
// fun_0218
fun_0218() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = AddRecord_(var_16, var_8)
    return pri;
}
// fun_0250
fun_0250() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0280
fun_0280() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0890(var_8)
    OP_JZER lab_02F8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08C0(var_24)
    OP_JNZ lab_02F8
    pri = 0;
    return pri;
// lab_02F8
    OP_JUMP lab_0308
// lab_0308
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0368
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0420
fun_0420() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0468
    pri = 0;
    return pri;
// lab_0468
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0890(var_8)
    OP_JNZ lab_0530
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0520
    pri = 0;
    return pri;
// lab_0530
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0578
    pri = 0;
    return pri;
// lab_0578
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_05D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0748(var_8)
    pri = 0;
    return pri;
// lab_05D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
    pri = 0;
    return pri;
// lab_0520
    OP_JUMP lab_0578
}
// fun_0620
fun_0620() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0668
// lab_0668
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06C0
    pri = 0;
    return pri;
// lab_06C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0700
    pri = 0;
    return pri;
// lab_0700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0668
    pri = 0;
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_8;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = arg_2;
    var_56 = arg_7;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07F0
fun_07F0() {
    OP_JUMP lab_0808
// lab_0808
    var_8 = arg_0;
    pri = IsEndParticleVfx_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0850
    OP_JUMP lab_0880
// lab_0850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0808
// lab_0880
    pri = 0;
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_08F0
fun_08F0() {
    OP_JUMP lab_0908
// lab_0908
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0998
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0988
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0420(var_8)
    pri = 0;
    return pri;
// lab_0998
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0A18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0420(var_8)
    pri = 0;
    return pri;
// lab_0A28
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_0A38
// lab_0A38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0908
    pri = 0;
    return pri;
// lab_0988
    OP_JUMP lab_0A38
}
// fun_0A78
fun_0A78() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0420(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_08F0(var_40)
    pri = 0;
    return pri;
}
// fun_0B00
fun_0B00() {
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
// switch_1118
        case default:
        {
// switch_1118_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1160
// lab_1160
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
            OP_JNZ lab_1208
            var_88 = 0;
            pri = fun_12D8()
// lab_1208
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1118_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0D00
                case default:
                {
// switch_0D00_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D78
// lab_0D78
                    OP_JUMP lab_1160
                }
                case 0x0:
                {
// switch_0D00_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0D78
                }
                case 0x1:
                {
// switch_0D00_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0D78
                }
                case 0x2:
                {
// switch_0D00_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0D78
                }
                case 0x3:
                {
// switch_0D00_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D78
                }
                case 0x4:
                {
// switch_0D00_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0D78
                }
                case 0x5:
                {
// switch_0D00_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0D78
                }
            }
        }
        case 0x65:
        {
// switch_1118_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0EB8
                case default:
                {
// switch_0EB8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F30
// lab_0F30
                    OP_JUMP lab_1160
                }
                case 0x0:
                {
// switch_0EB8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F30
                }
                case 0x1:
                {
// switch_0EB8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F30
                }
                case 0x2:
                {
// switch_0EB8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F30
                }
                case 0x3:
                {
// switch_0EB8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F30
                }
                case 0x4:
                {
// switch_0EB8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F30
                }
                case 0x5:
                {
// switch_0EB8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F30
                }
            }
        }
        case 0x66:
        {
// switch_1118_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1070
                case default:
                {
// switch_1070_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10E8
// lab_10E8
                    OP_JUMP lab_1160
                }
                case 0x0:
                {
// switch_1070_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_10E8
                }
                case 0x1:
                {
// switch_1070_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_10E8
                }
                case 0x2:
                {
// switch_1070_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_10E8
                }
                case 0x3:
                {
// switch_1070_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10E8
                }
                case 0x4:
                {
// switch_1070_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_10E8
                }
                case 0x5:
                {
// switch_1070_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_10E8
                }
            }
        }
    }
}
// fun_1220
fun_1220() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0B00(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1288
fun_1288() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1220(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    OP_JUMP lab_12F0
// lab_12F0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1330
    pri = 0;
    return pri;
// lab_1330
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12F0
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = 0;
    pri = fun_12D8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1420
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_1420
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1490
// lab_1490
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14D0
    OP_JUMP lab_1500
// lab_14D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1490
// lab_1500
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
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
// fun_15B8
fun_15B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1630()
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16C0
fun_16C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1710
fun_1710() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1788
fun_1788() {
    var_8 = 0;
    pri = fun_1710()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1808
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1808
    pri = 1;
    return pri;
// lab_1808
    var_8 = 0;
    pri = fun_1710()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1838
fun_1838() {
    pri = g_mode;
    switch (pri) {
// switch_18D0
        case default:
        {
// switch_18D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_1908
// lab_1908
            pri = 0;
            return pri;
        }
        case 0xad973146eddd72ea:
        {
// switch_18D0_case_0xad973146eddd72ea
            var_8 = 0;
            pri = fun_1930()
            OP_JUMP lab_1908
        }
        case 0x0:
        {
// switch_18D0_case_0x0
            var_8 = 0;
            pri = fun_1918()
            OP_JUMP lab_1908
        }
    }
}
// fun_1918
fun_1918() {
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    OP_ZERO_P_S -8
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    pri = IsKinomiTreeActive_(var_16)
    OP_JZER lab_2858
    var_24 = 3;
    var_32 = 0;
    var_40 = 3959987110228996685;
    var_48 = 24;
    pri = fun_1288(var_40, var_32, var_24)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1370(var_56)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 48;
    pri = fun_15B8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_16 = pri;
    OP_CONST_S -24, 1
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    pri = var_16;
    OP_JZER lab_2828
    var_168 = 0;
    pri = fun_1430()
    var_176 = 39;
    var_184 = 8;
    pri = fun_0250(var_176)
    pri = GetTargetFieldObjectID()
    var_192 = pri;
    pri = LoadKinomiTreeVibrationData_(var_192)
    var_200 = 60;
    pri = GetTargetFieldObjectID()
    var_208 = pri;
    pri = KinomiTreeShakeInterval_(var_208, var_200)
    var_216 = 75;
    var_224 = 40;
    pri = GetTargetFieldObjectID()
    var_232 = pri;
    pri = SetKinomiTreeConstantNum_(var_232, var_224, var_216)
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1C88
    OP_CONST_S -40, 1
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_0420(var_240)
    var_256 = 0;
    var_264 = 2;
    pri = RequestPlayerRideBicycle(var_264, var_256)
// lab_2858
    var_8 = 3;
    var_16 = 0;
    var_24 = 3959981612670855630;
    var_32 = 24;
    pri = fun_1288(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1370(var_40)
    var_56 = 0;
    pri = fun_1430()
// lab_2828
    var_8 = 0;
    pri = fun_1430()
// lab_1C88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0420(var_8)
    var_24 = 5;
    pri = GetTargetFieldObjectID()
    var_32 = pri;
    pri = SetKinomiTreeForceMove_(var_32, var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0280(var_40)
    var_56 = 208;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_03A8(var_64, var_56)
    var_80 = 336;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0620(var_88, var_80)
    var_104 = 79;
    var_112 = 21;
    var_120 = 16;
    pri = fun_01B8(var_112, var_104)
    var_128 = pri;
    pri = GetTargetFieldObjectID()
    var_136 = pri;
    pri = SetKinomiTreeRiskNum_(var_136, var_128)
    OP_ZERO_P_S -56
    OP_JUMP lab_1E08
// lab_1E08
    pri = var_56;
    alt = 10;
    OP_JSGEQ lab_1E78
    var_8 = var_56;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    pri = ClearKinomiTreeItem_(var_16, var_8)
    OP_JUMP lab_1E00
// lab_1E78
// lab_1E00
    OP_INC_P_S -56
}
// lab_1C30
pri = IsPlayerRideBicycle()
OP_JZER lab_1C88
var_8 = 1;
var_16 = 8;
pri = fun_0060(var_8)
OP_JUMP lab_1C30
// lab_1E80
pri = GetTargetFieldObjectID()
var_8 = pri;
pri = IsLoadedKinomiTreeVibrationData_(var_8)
OP_JNZ lab_1EF8
var_16 = 1;
var_24 = 8;
pri = fun_0060(var_16)
OP_JUMP lab_1E80
// lab_1EF8
OP_LCTRL 5
OP_ADD_C -48
OP_SCTRL 4
OP_ZERO_P_S -56
var_16 = 0;
pri = fun_28E0()
var_56 = pri;
pri = var_56;
OP_MOVE_ALT 
pri = 0;
OP_JSGEQ lab_2360
OP_LOAD_S_BOTH -56, -8
OP_ADD 
var_8 = pri;
var_24 = 0;
var_32 = 0;
var_40 = var_8;
var_48 = 0;
pri = WordSetNumber(var_48, var_40, var_32, var_24)
pri = var_8;
OP_EQ_P_C_PRI 1
OP_JZER lab_2048
var_56 = 3;
var_64 = 0;
var_72 = 3960949182903492085;
var_80 = 24;
pri = fun_1288(var_72, var_64, var_56)
OP_JUMP lab_2080
// lab_2360
pri = GetTargetFieldObjectID()
var_8 = pri;
pri = UnloadKinomiTreeVibrationData_(var_8)
var_16 = 0;
pri = GetTargetFieldObjectID()
var_24 = pri;
pri = SetKinomiTreeActive_(var_24, var_16)
var_32 = 0;
pri = GetTargetFieldObjectID()
var_40 = pri;
pri = SetKinomiTreeRiskNum_(var_40, var_32)
pri = GetTargetFieldObjectID()
var_48 = pri;
pri = CallKinomiTreeBattleEvent_(var_48)
OP_CONST_S -48, 1
var_56 = 0;
pri = fun_1788()
OP_JZER lab_24B8
OP_CONST_S -32, 1
OP_JUMP lab_2728
// lab_24B8
OP_ZERO_P_S -64
OP_ZERO_P_S -72
OP_JUMP lab_24F0
// lab_24F0
pri = var_72;
alt = 10;
OP_JSGEQ lab_2630
var_16 = var_72;
pri = GetTargetFieldObjectID()
var_24 = pri;
pri = GetKinomiTreeItemNo_(var_24, var_16)
var_80 = pri;
var_40 = var_72;
pri = GetTargetFieldObjectID()
var_48 = pri;
pri = GetKinomiTreeItemNum_(var_48, var_40)
var_88 = pri;
pri = var_80;
OP_JZER lab_25F8
pri = var_88;
OP_JZER lab_25F8
pri = 1;
OP_JUMP lab_2600
// lab_2630
pri = var_64;
OP_EQ_P_C_PRI 1
OP_JNZ lab_26B0
arg_-3 = 1;
var_8 = 100;
var_16 = 16;
pri = fun_0138(var_8, var_0)
alt = 10;
OP_JSLESS lab_26B0
pri = 0;
OP_JUMP lab_26B8
// lab_26B0
pri = 1;
// lab_26B8
OP_JZER lab_2708
OP_CONST_S -32, 1
var_8 = 0;
pri = fun_3FF0()
OP_JUMP lab_2720
// lab_2708
var_8 = 0;
pri = fun_3CD8()
// lab_2720
// lab_25F8
pri = 0;
// lab_2600
OP_JZER lab_2618
OP_INC_P_S -64
// lab_2618
OP_JUMP lab_24E8
// lab_24E8
OP_INC_P_S -72
// lab_2728
pri = var_32;
OP_JNZ lab_2758
var_8 = 0;
pri = fun_35C8()
// lab_2758
pri = var_40;
OP_JZER lab_2810
pri = var_48;
OP_JZER lab_27E8
var_8 = 0;
pri = fun_1788()
OP_JNZ lab_27D8
var_16 = 0;
var_24 = 1;
var_32 = 16;
pri = fun_0A78(var_24, var_16)
// lab_2810
OP_JUMP lab_2840
// lab_2840
OP_JUMP lab_28C8
// lab_28C8
pri = 0;
return pri;
// lab_27E8
var_8 = 0;
var_16 = 1;
var_24 = 16;
pri = fun_0A78(var_16, var_8)
// lab_27D8
OP_JUMP lab_2810
// lab_2048
var_8 = 3;
var_16 = 0;
var_24 = 3960948083391863874;
var_32 = 24;
pri = fun_1288(var_24, var_16, var_8)
// lab_2080
var_8 = 0;
var_16 = 3959977214624342786;
var_24 = 0;
var_32 = 24;
pri = fun_1460(var_24, var_16, var_8)
var_40 = 0;
var_48 = 3959978314135970997;
var_56 = 1;
var_64 = 24;
pri = fun_1460(var_56, var_48, var_40)
var_72 = 0;
var_80 = 1;
var_88 = 0;
var_96 = 1;
var_104 = 32;
pri = fun_1548(var_96, var_88, var_80, var_72)
var_24 = pri;
var_112 = 0;
pri = fun_1430()
pri = var_24;
alt = 1;
OP_JEQ lab_2178
OP_JUMP lab_1EF8
// lab_2178
pri = GetTargetFieldObjectID()
var_8 = pri;
pri = UnloadKinomiTreeVibrationData_(var_8)
var_16 = 0;
pri = GetTargetFieldObjectID()
var_24 = pri;
pri = SetKinomiTreeActive_(var_24, var_16)
var_32 = 568;
var_40 = 8802641224559852288;
var_48 = 16;
pri = fun_03A8(var_40, var_32)
var_56 = 704;
var_64 = 8802641224559852288;
var_72 = 16;
pri = fun_0620(var_64, var_56)
var_80 = 824;
pri = GetTargetFieldObjectID()
var_88 = pri;
var_96 = 16;
pri = fun_0620(var_88, var_80)
var_104 = 864;
pri = GetTargetFieldObjectID()
var_112 = pri;
var_120 = 16;
pri = fun_03A8(var_112, var_104)
var_128 = 1008;
pri = GetTargetFieldObjectID()
var_136 = pri;
var_144 = 16;
pri = fun_03A8(var_136, var_128)
var_152 = 0;
pri = GetTargetFieldObjectID()
var_160 = pri;
pri = SetKinomiTreeRiskNum_(var_160, var_152)
OP_JUMP lab_2728
// fun_28E0
fun_28E0() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    var_48 = 14;
    var_56 = 8;
    var_64 = 16;
    pri = fun_01B8(var_56, var_48)
    var_40 = pri;
    var_80 = var_40;
    pri = GetTargetFieldObjectID()
    var_88 = pri;
    pri = KinomiTreeShakeTree_(var_88, var_80)
    var_48 = pri;
    pri = GetTargetFieldObjectID()
    var_96 = pri;
    pri = GetKinomiTreeRiskNum_(var_96)
    alt = 75;
    OP_JSLESS lab_2A40
    var_104 = 30;
    pri = GetTargetFieldObjectID()
    var_112 = pri;
    pri = KinomiTreeShakeInterval_(var_112, var_104)
// lab_2A40
    var_8 = 1208;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_24 = 16;
    pri = fun_0620(var_16, var_8)
    var_32 = 1248;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_03A8(var_40, var_32)
    var_56 = 1376;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    var_72 = 16;
    pri = fun_03A8(var_64, var_56)
    pri = GetTargetFieldObjectID()
    var_80 = pri;
    pri = PlayKinomiTreeShakeVibration_(var_80)
    var_96 = 0;
    var_104 = 1808;
    var_112 = 0;
    var_120 = 4607182418800017408;
    var_128 = 0;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 0;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    pri = GetTargetFieldObjectID()
    var_176 = pri;
    var_184 = 1568;
    var_192 = 72;
    pri = fun_0780(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_56 = pri;
    pri = var_48;
    OP_JZER lab_2D80
    var_208 = 0;
    var_216 = 2048;
    var_224 = 0;
    var_232 = 4607182418800017408;
    var_240 = 0;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 0;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 0;
    pri = float(var_272)
    var_280 = pri;
    pri = GetTargetFieldObjectID()
    var_288 = pri;
    var_296 = 1816;
    var_304 = 72;
    pri = fun_0780(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_64 = pri;
    var_312 = var_64;
    var_320 = 8;
    pri = fun_07F0(var_312)
    pri = GetTargetFieldObjectID()
    var_328 = pri;
    pri = SetKinomiTreeSoundPlayNutDrop_(var_328)
// lab_2D80
    var_8 = var_56;
    var_16 = 8;
    pri = fun_07F0(var_8)
    pri = var_48;
    OP_JZER lab_35B0
    var_24 = 0;
    pri = GetTargetFieldObjectID()
    var_32 = pri;
    pri = GetKinomiTreeTempItemNo_(var_32, var_24)
    var_8 = pri;
    var_40 = 1;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    pri = GetKinomiTreeTempItemNo_(var_48, var_40)
    var_16 = pri;
    var_56 = 2;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    pri = GetKinomiTreeTempItemNo_(var_64, var_56)
    var_24 = pri;
    pri = var_16;
    OP_JZER lab_2ED8
    pri = var_24;
    OP_JZER lab_2ED8
    pri = 1;
    OP_JUMP lab_2EE0
// lab_35B0
    pri = var_32;
    return pri;
// lab_2ED8
    pri = 0;
// lab_2EE0
    OP_JZER lab_3348
    OP_LOAD_S_BOTH -16, -8
    OP_JNEQ lab_2F58
    OP_LOAD_S_BOTH -24, -8
    OP_JNEQ lab_2F58
    pri = 1;
    OP_JUMP lab_2F60
// lab_3348
    pri = var_16;
    OP_JZER lab_34C0
    OP_LOAD_S_BOTH -16, -8
    OP_JNEQ lab_3400
    var_8 = 2;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 3958003591252082491;
    var_64 = 24;
    pri = fun_1288(var_56, var_48, var_40)
    OP_JUMP lab_3498
// lab_34C0
    var_8 = 1;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 3959982712182483841;
    var_64 = 24;
    pri = fun_1288(var_56, var_48, var_40)
    OP_CONST_S -32, 1
// lab_3400
    var_8 = 1;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = var_16;
    var_56 = 1;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3959979413647599208;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
// lab_3498
    OP_CONST_S -32, 2
    OP_JUMP lab_3540
// lab_3540
    var_8 = 1;
    var_16 = 8;
    pri = fun_1370(var_8)
    var_24 = 0;
    pri = fun_1430()
    pri = GetTargetFieldObjectID()
    var_32 = pri;
    pri = SetKinomiTreeTemporaryItemToGetItem_(var_32)
// lab_2F58
    pri = 0;
// lab_2F60
    OP_JZER lab_2FE8
    var_8 = 3;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 3960950282415120296;
    var_64 = 24;
    pri = fun_1288(var_56, var_48, var_40)
    OP_JUMP lab_3320
// lab_2FE8
    OP_LOAD_S_BOTH -16, -8
    OP_JNEQ lab_30B8
    var_8 = 2;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = var_24;
    var_56 = 1;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3958002491740454280;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
    OP_JUMP lab_3320
// lab_30B8
    OP_LOAD_S_BOTH -24, -16
    OP_JNEQ lab_3188
    var_8 = 2;
    var_16 = var_16;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = var_8;
    var_56 = 1;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3958002491740454280;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
    OP_JUMP lab_3320
// lab_3188
    OP_LOAD_S_BOTH -24, -8
    OP_JNEQ lab_3258
    var_8 = 2;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = var_16;
    var_56 = 1;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3958002491740454280;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
    OP_JUMP lab_3320
// lab_3258
    var_8 = 1;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = var_16;
    var_56 = 1;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = var_24;
    var_88 = 2;
    var_96 = 24;
    pri = fun_16C0(var_88, var_80, var_72)
    var_104 = 3;
    var_112 = 0;
    var_120 = 3959980513159227419;
    var_128 = 24;
    pri = fun_1288(var_120, var_112, var_104)
// lab_3320
    OP_CONST_S -32, 3
    OP_JUMP lab_3540
}
// fun_35C8
fun_35C8() {
    var_8 = 6;
    var_16 = 2056;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_03E0(var_24, var_16, var_8)
    var_40 = 2184;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_03A8(var_48, var_40)
    var_64 = 2320;
    pri = SoundPostEvent(var_64)
    var_72 = 6;
    var_80 = 8;
    pri = fun_0060(var_72)
    var_88 = 0;
    var_96 = 8;
    pri = fun_1670(var_88)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_JUMP lab_36D0
// lab_36D0
    pri = var_16;
    alt = 10;
    OP_JSGEQ lab_3768
    pri = var_8;
    var_8 = pri;
    var_16 = var_16;
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    pri = GetKinomiTreeItemNum_(var_24, var_16)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    OP_JUMP lab_36C8
// lab_3768
    arg_-3 = var_8;
    var_8 = 40;
    var_16 = 16;
    pri = fun_0218(var_8, var_0)
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3838
    var_24 = 3;
    var_32 = 0;
    var_40 = 3960942585833722819;
    var_48 = 24;
    pri = fun_1288(var_40, var_32, var_24)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1370(var_56)
    var_72 = 0;
    pri = fun_1430()
    OP_JUMP lab_38A8
// lab_3838
    var_8 = 3;
    var_16 = 0;
    var_24 = 3960951381926748507;
    var_32 = 24;
    pri = fun_1288(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1370(var_40)
    var_56 = 0;
    pri = fun_1430()
// lab_38A8
    OP_ZERO_P_S -16
    OP_JUMP lab_38D0
// lab_38D0
    pri = var_16;
    alt = 10;
    OP_JSGEQ lab_3CB8
    var_16 = var_16;
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    pri = GetKinomiTreeItemNo_(var_24, var_16)
    var_24 = pri;
    var_40 = var_16;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    pri = GetKinomiTreeItemNum_(var_48, var_40)
    var_32 = pri;
    pri = var_24;
    OP_JZER lab_39D8
    pri = var_32;
    OP_JZER lab_39D8
    pri = 1;
    OP_JUMP lab_39E0
// lab_3CB8
    pri = 0;
    return pri;
// lab_39D8
    pri = 0;
// lab_39E0
    OP_JZER lab_3CA0
    pri = var_32;
    alt = 1;
    OP_JSLEQ lab_3AF8
    var_8 = 1;
    var_16 = var_24;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = var_32;
    var_64 = 1;
    pri = WordSetNumber(var_64, var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3960944784856979241;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1370(var_104)
    var_120 = 0;
    pri = fun_1430()
    OP_JUMP lab_3BD0
// lab_3CA0
    OP_JUMP lab_38C8
// lab_38C8
    OP_INC_P_S -16
// lab_3AF8
    var_8 = 1;
    var_16 = var_24;
    var_24 = 0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = var_32;
    var_64 = 1;
    pri = WordSetNumber(var_64, var_56, var_48, var_40)
    var_72 = 3;
    var_80 = 0;
    var_88 = 3960941486322094608;
    var_96 = 24;
    pri = fun_1288(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1370(var_104)
    var_120 = 0;
    pri = fun_1430()
// lab_3BD0
    var_16 = var_24;
    pri = ItemGetNum(var_16)
    var_40 = pri;
    pri = var_32;
    var_48 = pri;
    OP_LOAD_S_BOTH -40, -32
    OP_ADD 
    alt = 999;
    OP_JSLEQ lab_3C70
    pri = var_40;
    alt = 999;
    OP_SUB_ALT 
    var_48 = pri;
// lab_3C70
    var_8 = var_48;
    var_16 = var_24;
    pri = ItemAdd(var_16, var_8)
// lab_36C8
    OP_INC_P_S -16
}
// fun_3CD8
fun_3CD8() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_JUMP lab_3D18
// lab_3D18
    pri = var_16;
    alt = 10;
    OP_JSGEQ lab_3E58
    var_16 = var_16;
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    pri = GetKinomiTreeItemNo_(var_24, var_16)
    var_24 = pri;
    var_40 = var_16;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    pri = GetKinomiTreeItemNum_(var_48, var_40)
    var_32 = pri;
    pri = var_24;
    OP_JZER lab_3E20
    pri = var_32;
    OP_JZER lab_3E20
    pri = 1;
    OP_JUMP lab_3E28
// lab_3E58
    var_8 = 1;
    pri = var_8;
    OP_ADD_P_C -1
    var_16 = pri;
    var_24 = 16;
    pri = fun_0138(var_16, var_8)
    var_16 = pri;
    var_40 = var_16;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    pri = GetKinomiTreeItemNo_(var_48, var_40)
    var_24 = pri;
    var_56 = var_16;
    pri = GetTargetFieldObjectID()
    var_64 = pri;
    pri = ClearKinomiTreeItem_(var_64, var_56)
    var_72 = 1;
    var_80 = var_24;
    var_88 = 0;
    var_96 = 24;
    pri = fun_16C0(var_88, var_80, var_72)
    var_104 = 3;
    var_112 = 0;
    var_120 = 3960946983880235663;
    var_128 = 24;
    pri = fun_1288(var_120, var_112, var_104)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1370(var_136)
    var_152 = 0;
    pri = fun_1430()
    pri = 0;
    return pri;
// lab_3E20
    pri = 0;
// lab_3E28
    OP_JZER lab_3E40
    OP_INC_P_S -8
// lab_3E40
    OP_JUMP lab_3D10
// lab_3D10
    OP_INC_P_S -16
}
// fun_3FF0
fun_3FF0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_4020
// lab_4020
    pri = var_8;
    alt = 10;
    OP_JSGEQ lab_4090
    var_8 = var_8;
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    pri = ClearKinomiTreeItem_(var_16, var_8)
    OP_JUMP lab_4018
// lab_4090
    arg_-3 = 3;
    var_8 = 0;
    var_16 = 3960945884368607452;
    var_24 = 24;
    pri = fun_1288(var_16, var_8, var_0)
    var_32 = 1;
    var_40 = 8;
    pri = fun_1370(var_32)
    var_48 = 0;
    pri = fun_1430()
    pri = 0;
    return pri;
// lab_4018
    OP_INC_P_S -8
}
