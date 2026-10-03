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
    pri = floatcmp(var_24, var_16)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    return pri;
}
// fun_00D8
fun_00D8() {
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatcmp(var_24, var_16)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SLESS 
    return pri;
}
// fun_0150
fun_0150() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_0190
    pri = 0;
    return pri;
// lab_0190
    OP_ZERO_P_S -8
    OP_JUMP lab_01B8
// lab_01B8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0210
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_01B0
// lab_0210
    pri = 0;
    return pri;
// lab_01B0
    OP_INC_P_S -8
}
// fun_0228
fun_0228() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0258
// lab_0258
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0358
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_02D8
    pri = 0;
    return pri;
// lab_0358
    pri = 0;
    return pri;
// lab_02D8
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
    OP_JUMP lab_0250
// lab_0250
    OP_INC_P_S -8
}
// fun_0370
fun_0370() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03D0
fun_03D0() {
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
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = FadeWait_()
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
    pri = FadeCheckOut_()
    return pri;
}
// fun_04F8
fun_04F8() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0528
fun_0528() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0570
// lab_0570
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05B0
    OP_JUMP lab_0620
// lab_05B0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05F0
    OP_JUMP lab_0620
// lab_05F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0570
// lab_0620
    pri = 0;
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0690
fun_0690() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
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
// fun_0740
fun_0740() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetPosition_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1040(var_8)
    OP_JZER lab_0910
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1070(var_24)
    OP_JNZ lab_0910
    pri = 0;
    return pri;
// lab_0910
    OP_JUMP lab_0920
// lab_0920
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0980
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0920
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A80
    pri = 0;
    return pri;
// lab_0A80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0150(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AC0
// lab_0AC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1040(var_8)
    OP_JNZ lab_0B48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B38
    pri = 0;
    return pri;
// lab_0B48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0B90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C38(var_8)
    pri = 0;
    return pri;
// lab_0BF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AC0
    pri = 0;
    return pri;
// lab_0B38
    OP_JUMP lab_0B90
}
// fun_0C38
fun_0C38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CC0
    pri = 0;
    return pri;
// lab_0CC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1040(var_8)
    OP_JZER lab_0DF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D18
    OP_ZERO_P_S 64
// lab_0DF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E28
    OP_CONST_S 64, 1
// lab_0E28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E60
    OP_CONST_S 72, 1
// lab_0E60
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
// lab_0D18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_ZERO_P_S 72
// lab_0D40
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
    OP_JUMP lab_0F00
// lab_0F00
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 344;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10A0
fun_10A0() {
    OP_JUMP lab_10B8
// lab_10B8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1148
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1138
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_1148
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_11D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_11D8
    pri = 0;
    return pri;
// lab_11C8
    OP_JUMP lab_11E8
// lab_11E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10B8
    pri = 0;
    return pri;
// lab_1138
    OP_JUMP lab_11E8
}
// fun_1228
fun_1228() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10A0(var_40)
    pri = 0;
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12E8
fun_12E8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
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
// switch_1960
        case default:
        {
// switch_1960_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19A8
// lab_19A8
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
            OP_JNZ lab_1A50
            var_88 = 0;
            pri = fun_1C08()
// lab_1A50
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1960_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1548
                case default:
                {
// switch_1548_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15C0
// lab_15C0
                    OP_JUMP lab_19A8
                }
                case 0x0:
                {
// switch_1548_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15C0
                }
                case 0x1:
                {
// switch_1548_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15C0
                }
                case 0x2:
                {
// switch_1548_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15C0
                }
                case 0x3:
                {
// switch_1548_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15C0
                }
                case 0x4:
                {
// switch_1548_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15C0
                }
                case 0x5:
                {
// switch_1548_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15C0
                }
            }
        }
        case 0x65:
        {
// switch_1960_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1700
                case default:
                {
// switch_1700_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1778
// lab_1778
                    OP_JUMP lab_19A8
                }
                case 0x0:
                {
// switch_1700_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1778
                }
                case 0x1:
                {
// switch_1700_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1778
                }
                case 0x2:
                {
// switch_1700_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1778
                }
                case 0x3:
                {
// switch_1700_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1778
                }
                case 0x4:
                {
// switch_1700_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1778
                }
                case 0x5:
                {
// switch_1700_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1778
                }
            }
        }
        case 0x66:
        {
// switch_1960_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18B8
                case default:
                {
// switch_18B8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1930
// lab_1930
                    OP_JUMP lab_19A8
                }
                case 0x0:
                {
// switch_18B8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1930
                }
                case 0x1:
                {
// switch_18B8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1930
                }
                case 0x2:
                {
// switch_18B8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1930
                }
                case 0x3:
                {
// switch_18B8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1930
                }
                case 0x4:
                {
// switch_18B8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1930
                }
                case 0x5:
                {
// switch_18B8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1930
                }
            }
        }
    }
}
// fun_1A68
fun_1A68() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A00(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B10
    pri = 1;
    return pri;
// lab_1B10
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B58
fun_1B58() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1BA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A68(var_8)
    arg_2 = pri;
// lab_1BA8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1348(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C08
fun_1C08() {
    OP_JUMP lab_1C20
// lab_1C20
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C60
    pri = 0;
    return pri;
// lab_1C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C20
    pri = 0;
    return pri;
}
// fun_1CA0
fun_1CA0() {
    var_8 = 0;
    pri = fun_1C08()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D50
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_1D50
    pri = 0;
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE0
fun_1DE0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E28
fun_1E28() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1EA0
fun_1EA0() {
    var_8 = 0;
    pri = fun_1E28()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1F20
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1F20
    pri = 1;
    return pri;
// lab_1F20
    var_8 = 0;
    pri = fun_1E28()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1F50
fun_1F50() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0150(var_8)
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    OP_JUMP lab_1FB8
// lab_1FB8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1FF0
    pri = 0;
    return pri;
// lab_1FF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FB8
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    pri = arg_5;
    OP_JNZ lab_2068
    var_8 = 0;
    pri = fun_0F10()
// lab_2068
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_20B8
    OP_CONST_S -8, -1
// lab_20B8
    pri = arg_1;
    switch (pri) {
// switch_3B70
        case default:
        {
// switch_3B70_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4018
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A00(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4018
            pri = 1;
            OP_JUMP lab_4020
// lab_4018
            pri = 0;
// lab_4020
            OP_JZER lab_4070
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0228(var_16, var_8, var_0)
            OP_JUMP lab_42C8
// lab_4070
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_40D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_40D8
            pri = 1;
            OP_JUMP lab_40E0
// lab_40D8
            pri = 0;
// lab_40E0
            OP_JZER lab_4268
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A00(var_24, var_16)
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_42C8
// lab_4268
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0228(var_16, var_8, var_0)
// lab_42C8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4338
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4338
            var_8 = 0;
            pri = fun_0F50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B70_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1:
        {
// switch_3B70_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2:
        {
// switch_3B70_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3:
        {
// switch_3B70_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x4:
        {
// switch_3B70_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x5:
        {
// switch_3B70_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C38(var_40)
            OP_JUMP switch_3B70_case_default
        }
        case 0x6:
        {
// switch_3B70_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x7:
        {
// switch_3B70_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x8:
        {
// switch_3B70_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x9:
        {
// switch_3B70_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0xa:
        {
// switch_3B70_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0xb:
        {
// switch_3B70_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0xc:
        {
// switch_3B70_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0xd:
        {
// switch_3B70_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0xe:
        {
// switch_3B70_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0xf:
        {
// switch_3B70_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x10:
        {
// switch_3B70_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x11:
        {
// switch_3B70_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x12:
        {
// switch_3B70_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x13:
        {
// switch_3B70_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x14:
        {
// switch_3B70_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x15:
        {
// switch_3B70_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x16:
        {
// switch_3B70_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x17:
        {
// switch_3B70_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x18:
        {
// switch_3B70_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x19:
        {
// switch_3B70_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1a:
        {
// switch_3B70_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1b:
        {
// switch_3B70_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1c:
        {
// switch_3B70_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1d:
        {
// switch_3B70_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1e:
        {
// switch_3B70_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x1f:
        {
// switch_3B70_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x20:
        {
// switch_3B70_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x21:
        {
// switch_3B70_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x22:
        {
// switch_3B70_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x23:
        {
// switch_3B70_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x24:
        {
// switch_3B70_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x25:
        {
// switch_3B70_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x26:
        {
// switch_3B70_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x27:
        {
// switch_3B70_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x28:
        {
// switch_3B70_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x29:
        {
// switch_3B70_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2a:
        {
// switch_3B70_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2b:
        {
// switch_3B70_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2c:
        {
// switch_3B70_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2d:
        {
// switch_3B70_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2e:
        {
// switch_3B70_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x2f:
        {
// switch_3B70_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x30:
        {
// switch_3B70_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x31:
        {
// switch_3B70_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x32:
        {
// switch_3B70_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x33:
        {
// switch_3B70_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x34:
        {
// switch_3B70_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x35:
        {
// switch_3B70_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x36:
        {
// switch_3B70_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x37:
        {
// switch_3B70_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x38:
        {
// switch_3B70_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B70_case_default
        }
        case 0x39:
        {
// switch_3B70_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3a:
        {
// switch_3B70_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3b:
        {
// switch_3B70_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3c:
        {
// switch_3B70_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3d:
        {
// switch_3B70_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
        case 0x3e:
        {
// switch_3B70_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            OP_JUMP switch_3B70_case_default
        }
    }
}
// fun_4368
fun_4368() {
    pri = arg_4;
    OP_JNZ lab_43A0
    var_8 = 0;
    pri = fun_0F10()
// lab_43A0
    pri = arg_1;
    switch (pri) {
// switch_5778
        case default:
        {
// switch_5778_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1040(var_264)
            OP_JZER lab_5D40
            pri = arg_3;
            switch (pri) {
// switch_5CE8
                case default:
                {
// switch_5CE8_case_default
                    OP_JUMP lab_5FF8
// lab_5FF8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6068
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6068
                    var_8 = 0;
                    pri = fun_0F50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5CE8_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0228(var_16, var_8, var_0)
                    OP_JUMP switch_5CE8_case_default
                }
                case 0x2:
                {
// switch_5CE8_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0228(var_16, var_8, var_0)
                    OP_JUMP switch_5CE8_case_default
                }
                case 0x3:
                {
// switch_5CE8_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0228(var_16, var_8, var_0)
                    OP_JUMP switch_5CE8_case_default
                }
            }
// lab_5D40
            pri = arg_1;
            OP_JZER lab_5D90
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5D90
            pri = 0;
            OP_JUMP lab_5D98
// lab_5D90
            pri = 1;
// lab_5D98
            OP_JZER lab_5E00
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A00(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E00
            pri = 1;
            OP_JUMP lab_5E08
// lab_5E00
            pri = 0;
// lab_5E08
            OP_JZER lab_5E58
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0228(var_16, var_8, var_0)
            OP_JUMP lab_5FF8
// lab_5E58
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5EC0
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0228(var_16, var_8, var_0)
            OP_JUMP lab_5FF8
// lab_5EC0
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A00(var_24, var_16)
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5778_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1:
        {
// switch_5778_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2:
        {
// switch_5778_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3:
        {
// switch_5778_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x4:
        {
// switch_5778_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x5:
        {
// switch_5778_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C38(var_40)
            OP_JUMP switch_5778_case_default
        }
        case 0x6:
        {
// switch_5778_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x7:
        {
// switch_5778_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x8:
        {
// switch_5778_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x9:
        {
// switch_5778_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xa:
        {
// switch_5778_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xb:
        {
// switch_5778_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xc:
        {
// switch_5778_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xd:
        {
// switch_5778_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xe:
        {
// switch_5778_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0xf:
        {
// switch_5778_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x10:
        {
// switch_5778_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x11:
        {
// switch_5778_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x12:
        {
// switch_5778_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x13:
        {
// switch_5778_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x14:
        {
// switch_5778_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x15:
        {
// switch_5778_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x16:
        {
// switch_5778_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x17:
        {
// switch_5778_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x18:
        {
// switch_5778_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x19:
        {
// switch_5778_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1a:
        {
// switch_5778_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1b:
        {
// switch_5778_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1c:
        {
// switch_5778_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1d:
        {
// switch_5778_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1e:
        {
// switch_5778_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x1f:
        {
// switch_5778_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x20:
        {
// switch_5778_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x21:
        {
// switch_5778_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x22:
        {
// switch_5778_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x23:
        {
// switch_5778_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x24:
        {
// switch_5778_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x25:
        {
// switch_5778_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x26:
        {
// switch_5778_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x27:
        {
// switch_5778_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x28:
        {
// switch_5778_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x29:
        {
// switch_5778_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2a:
        {
// switch_5778_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2b:
        {
// switch_5778_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2c:
        {
// switch_5778_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2d:
        {
// switch_5778_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2e:
        {
// switch_5778_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x2f:
        {
// switch_5778_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x30:
        {
// switch_5778_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x31:
        {
// switch_5778_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x32:
        {
// switch_5778_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x33:
        {
// switch_5778_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x34:
        {
// switch_5778_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x35:
        {
// switch_5778_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x36:
        {
// switch_5778_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x37:
        {
// switch_5778_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x38:
        {
// switch_5778_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x39:
        {
// switch_5778_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3a:
        {
// switch_5778_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3b:
        {
// switch_5778_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3c:
        {
// switch_5778_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3d:
        {
// switch_5778_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
        case 0x3e:
        {
// switch_5778_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            OP_JUMP switch_5778_case_default
        }
    }
}
// fun_6098
fun_6098() {
    pri = 22264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6120
// lab_6120
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_62A0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6290
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_61E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_61E0
    pri = 0;
    OP_JUMP lab_61E8
// lab_62A0
    pri = 0;
    return pri;
// lab_6290
    OP_JUMP lab_6118
// lab_6118
    OP_INC_P_S -936
// lab_61E0
    pri = 1;
// lab_61E8
    OP_JZER lab_6260
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6258
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6260
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6258
}
// fun_62C0
fun_62C0() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_62F8
fun_62F8() {
    var_8 = 0;
    pri = fun_62C0()
    switch (pri) {
// switch_63A8
        case default:
        {
// switch_63A8_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_63F0
// lab_63F0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_63A8_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_63F0
        }
        case 0x1:
        {
// switch_63A8_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_63F0
        }
        case 0x2:
        {
// switch_63A8_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_63F0
        }
    }
}
// fun_6400
fun_6400() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_6448
    pri = arg_0;
    return pri;
// lab_6448
    pri = arg_1;
    return pri;
}
// fun_6458
fun_6458() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_64F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0440()
    var_56 = 0;
    pri = fun_12E8()
// lab_64F0
    pri = arg_4;
    OP_JZER lab_6528
    var_8 = 1;
    var_16 = 8;
    pri = fun_1310(var_8)
// lab_6528
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6580
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6580
    pri = 0;
    OP_JUMP lab_6588
// lab_6580
    pri = 1;
// lab_6588
    OP_JZER lab_6650
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6650
    var_16 = 0;
    pri = fun_04D0()
    OP_JZER lab_6628
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1228(var_32, var_24)
    OP_JUMP lab_6650
// lab_6650
    pri = arg_2;
    OP_JZER lab_6728
    var_8 = 0;
    pri = fun_04D0()
    OP_JZER lab_66F8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F90(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0690(var_40)
    OP_JUMP lab_6728
// lab_6728
    pri = arg_3;
    OP_JZER lab_6760
    var_8 = 1;
    var_16 = 8;
    pri = fun_12B0(var_8)
// lab_6760
    pri = 0;
    return pri;
// lab_66F8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F90(var_16, var_8)
// lab_6628
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1228(var_16, var_8)
}
// fun_6770
fun_6770() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_68F0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6808
    var_8 = 1;
    var_16 = 0;
    var_24 = 23184;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0440()
// lab_68F0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6808
    pri = arg_0;
    OP_JNZ lab_6850
    var_8 = 23232;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6870
// lab_6850
    var_8 = 23408;
    pri = SoundPostEvent(var_8)
// lab_6870
    var_8 = 0;
    var_16 = 8;
    pri = fun_0528(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_68F0
    var_24 = 23672;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0370(var_32, var_24)
    var_48 = 0;
    pri = fun_0440()
}
// fun_6930
fun_6930() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6098(var_24)
    pri = 0;
    return pri;
}
// fun_6998
fun_6998() {
    pri = g_mode;
    switch (pri) {
// switch_6B48
        case default:
        {
// switch_6B48_case_default
            pri = CommandNOP()
            OP_JUMP lab_6BF0
// lab_6BF0
            pri = 0;
            return pri;
        }
        case 0x931fcaf0cdf75479:
        {
// switch_6B48_case_0x931fcaf0cdf75479
            var_8 = 0;
            pri = fun_8C90()
            OP_JUMP lab_6BF0
        }
        case 0x9d2d0e220b1d4ebd:
        {
// switch_6B48_case_0x9d2d0e220b1d4ebd
            var_8 = 0;
            pri = fun_7768()
            OP_JUMP lab_6BF0
        }
        case 0xfc5a6b9457deb822:
        {
// switch_6B48_case_0xfc5a6b9457deb822
            var_8 = 0;
            pri = fun_7F10()
            OP_JUMP lab_6BF0
        }
        case 0xfc5a6c9457deb9d5:
        {
// switch_6B48_case_0xfc5a6c9457deb9d5
            var_8 = 0;
            pri = fun_7BE8()
            OP_JUMP lab_6BF0
        }
        case 0x0:
        {
// switch_6B48_case_0x0
            var_8 = 0;
            pri = fun_6C00()
            OP_JUMP lab_6BF0
        }
        case 0x2dde7aa63de5ccf4:
        {
// switch_6B48_case_0x2dde7aa63de5ccf4
            var_8 = 0;
            pri = fun_85E0()
            OP_JUMP lab_6BF0
        }
        case 0x5ed3eadd07da4265:
        {
// switch_6B48_case_0x5ed3eadd07da4265
            var_8 = 0;
            pri = fun_78C0()
            OP_JUMP lab_6BF0
        }
        case 0x739220cb07ab7197:
        {
// switch_6B48_case_0x739220cb07ab7197
            var_8 = 0;
            pri = fun_8238()
            OP_JUMP lab_6BF0
        }
        case 0x7fb2941e81119349:
        {
// switch_6B48_case_0x7fb2941e81119349
            var_8 = 0;
            pri = fun_7858()
            OP_JUMP lab_6BF0
        }
    }
}
// fun_6C00
fun_6C00() {
    pri = 0;
    return pri;
}
// fun_6C18
fun_6C18() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6458(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6C70
fun_6C70() {
    pri = 0;
    return pri;
}
// fun_6C88
fun_6C88() {
    pri = 0;
    return pri;
}
// fun_6CA0
fun_6CA0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4589843560234640998, 4671850305138825626, 4668919227041500365, 8802641224559852288
    var_24 = 48;
    pri = fun_0638(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4589730970243956736, 4671847446408593408, 4668841381618253824, -4242657469657360075
    var_48 = 48;
    pri = fun_0638(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8;
    pri = fun_0150(var_56)
    OP_PUSH2_C -9223372036854775808, 4632881084173700301
    var_72 = 0;
    OP_PUSH5_C 4672156018849370604, 4644130231617941668, 4668386101340982477, 4672110938872631788, 4638837094680897782
    var_80 = 4668747362378962698;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_1FA0()
    var_104 = 23672;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0370(var_112, var_104)
    var_128 = 0;
    pri = fun_0440()
    var_136 = 0;
    pri = fun_04F8()
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_144 = 3;
    OP_PUSH5_C 4672026523867409285, 4635180031045984584, 4668480280009459630, 4672094976712575549, 4639359934450137825
    var_152 = 4668420043264931922;
    var_160 = 300;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 180;
    var_176 = 8;
    pri = fun_0150(var_168)
    var_184 = 1;
    var_192 = 0;
    var_200 = 4641240890982006784;
    var_208 = 0;
    var_216 = 0;
    OP_PUSH4_C 4671945852699279360, 4668591132771772006, 4611686018427387904, 8802641224559852288
    var_224 = 72;
    pri = fun_06C8(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 1;
    var_240 = 0;
    var_248 = 4641240890982006784;
    var_256 = 0;
    var_264 = 0;
    OP_PUSH4_C 4671935407338815488, 4668511528129921024, 4611686018427387904, -4242657469657360075
    var_272 = 72;
    pri = fun_06C8(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 23672;
    var_288 = 8;
    var_296 = 16;
    pri = fun_0370(var_288, var_280)
    var_304 = 0;
    pri = fun_0440()
    var_312 = 8802641224559852288;
    var_320 = 8;
    pri = fun_0898(var_312)
    var_328 = -4242657469657360075;
    var_336 = 8;
    pri = fun_0898(var_328)
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 3;
    var_392 = -4242657469657360075;
    var_400 = 56;
    pri = fun_2030(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 30;
    var_416 = 8;
    pri = fun_0150(var_408)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C -7065178234587331722, -4242657469657360075
    var_464 = 56;
    pri = fun_1B58(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1CA0(var_472)
    var_488 = 0;
    pri = fun_1D60()
    var_496 = 0;
    pri = fun_1FA0()
    OP_PUSH2_C -9223372036854775808, 4629897449420567347
    var_504 = 3;
    OP_PUSH5_C 4671912985547946066, -4590941312643812557, 4668600258718282547, 4672085990953797550, 4635151179860871741
    var_512 = 4668447525558068183;
    var_520 = 180;
    pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_528 = 1;
    var_536 = 3;
    var_544 = 0;
    var_552 = 3;
    var_560 = -4242657469657360075;
    var_568 = 40;
    pri = fun_4368(var_560, var_552, var_544, var_536, var_528)
    var_576 = -4242657469657360075;
    var_584 = 8;
    pri = fun_0A38(var_576)
    var_592 = 15;
    var_600 = 8;
    pri = fun_0150(var_592)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_640 = 48;
    pri = fun_07E8(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 5;
    var_656 = 8;
    pri = fun_0150(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_696 = 48;
    pri = fun_07E8(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = -4242657469657360075;
    var_712 = 8;
    pri = fun_0898(var_704)
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C -7065179334098959933, -4242657469657360075
    var_760 = 56;
    pri = fun_1B58(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_1CA0(var_768)
    var_784 = 0;
    pri = fun_1D60()
    var_792 = 8802641224559852288;
    var_800 = 8;
    pri = fun_0898(var_792)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = -60;
    pri = float(var_832)
    var_840 = pri;
    var_848 = -4242657469657360075;
    var_856 = 40;
    pri = fun_0798(var_848, var_840, var_832, var_824, var_816)
    var_864 = -4242657469657360075;
    var_872 = 8;
    pri = fun_0898(var_864)
    var_880 = 1;
    var_888 = 0;
    var_896 = 0;
    var_904 = 30;
    OP_PUSH2_C 4611686018427387904, -4242657469657360075
    var_912 = 48;
    pri = fun_0740(var_904, var_896, var_888, var_880, var_872, var_864)
    var_920 = -4242657469657360075;
    var_928 = 8;
    pri = fun_0898(var_920)
    var_936 = 3;
    var_944 = 60;
    pri = EvCameraEnd(var_944, var_936)
    var_952 = -1;
    var_960 = 8802641224559852288;
    var_968 = 16;
    pri = fun_0F90(var_960, var_952)
    pri = 0;
    return pri;
}
// fun_75C0
fun_75C0() {
    pri = 0;
    return pri;
}
// fun_75D8
fun_75D8() {
    var_8 = 141;
    var_16 = 8;
    pri = fun_6930(var_8)
    var_24 = 10;
    var_32 = -7620394439834451339;
    pri = WorkSet(var_32, var_24)
    var_40 = 20;
    var_48 = -5552271472220922956;
    pri = WorkSet(var_48, var_40)
    var_56 = -4242657469657360075;
    pri = VanishFlagReset(var_56)
    var_64 = 8365856985993810941;
    pri = FlagSet(var_64)
    pri = 0;
    return pri;
}
// fun_76C0
fun_76C0() {
    OP_PUSH2_C -4242657469657360075, 1936207237021580040
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0150(var_8)
    var_24 = 23672;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0370(var_32, var_24)
    var_48 = 0;
    pri = fun_0440()
    pri = 0;
    return pri;
}
// fun_7768
fun_7768() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6C18()
    var_16 = 0;
    pri = fun_6C70()
    var_24 = 0;
    pri = fun_6C88()
    var_32 = 0;
    pri = fun_6CA0()
    var_40 = 0;
    pri = fun_75C0()
    var_48 = 0;
    pri = fun_75D8()
    var_56 = 0;
    pri = fun_76C0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7858
fun_7858() {
    var_8 = 0;
    pri = fun_6C70()
    var_16 = 0;
    pri = fun_75D8()
    var_24 = 150;
    var_32 = 8;
    pri = fun_6930(var_24)
    pri = 0;
    return pri;
}
// fun_78C0
fun_78C0() {
    var_8 = 0;
    var_16 = 4607182418800017408;
    var_24 = 22924;
    pri = float(var_24)
    var_32 = pri;
    var_40 = -110;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 12723;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 23720;
    var_80 = 48;
    pri = fun_0FD0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 4607182418800017408;
    var_104 = 22924;
    pri = float(var_104)
    var_112 = pri;
    var_120 = -110;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 12723;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 23992;
    var_160 = 48;
    pri = fun_0FD0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 10;
    var_176 = 8;
    pri = fun_0150(var_168)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 22924;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 12723;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 8802641224559852288;
    var_248 = 48;
    pri = fun_0840(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_0898(var_256)
    var_272 = 0;
    var_280 = -1;
    var_288 = -4136197752323836110;
    var_296 = 24;
    pri = fun_1DE0(var_288, var_280, var_272)
    var_304 = 0;
    pri = fun_1EA0()
    OP_JZER lab_7B78
    var_312 = 0;
    pri = fun_1F50()
// lab_7B78
    var_8 = 23672;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0370(var_16, var_8)
    var_32 = 0;
    pri = fun_0440()
    var_40 = 143;
    var_48 = 8;
    pri = fun_6930(var_40)
    pri = 0;
    return pri;
}
// fun_7BE8
fun_7BE8() {
    var_8 = 0;
    var_16 = 4607182418800017408;
    var_24 = 25050;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 18;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 9675;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 24256;
    var_80 = 48;
    pri = fun_0FD0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 4607182418800017408;
    var_104 = 25050;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 18;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 9675;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 24528;
    var_160 = 48;
    pri = fun_0FD0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 10;
    var_176 = 8;
    pri = fun_0150(var_168)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 25050;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 9675;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 8802641224559852288;
    var_248 = 48;
    pri = fun_0840(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_0898(var_256)
    var_272 = 0;
    var_280 = -1;
    var_288 = -4136198851835464321;
    var_296 = 24;
    pri = fun_1DE0(var_288, var_280, var_272)
    var_304 = 0;
    pri = fun_1EA0()
    OP_JZER lab_7EA0
    var_312 = 0;
    pri = fun_1F50()
// lab_7EA0
    var_8 = 23672;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0370(var_16, var_8)
    var_32 = 0;
    pri = fun_0440()
    var_40 = 144;
    var_48 = 8;
    pri = fun_6930(var_40)
    pri = 0;
    return pri;
}
// fun_7F10
fun_7F10() {
    var_8 = 0;
    var_16 = 4607182418800017408;
    var_24 = 25750;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 85;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 7570;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 24792;
    var_80 = 48;
    pri = fun_0FD0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 4607182418800017408;
    var_104 = 25750;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 85;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 7570;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 25064;
    var_160 = 48;
    pri = fun_0FD0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 10;
    var_176 = 8;
    pri = fun_0150(var_168)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 25750;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 7570;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 8802641224559852288;
    var_248 = 48;
    pri = fun_0840(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_0898(var_256)
    var_272 = 0;
    var_280 = -1;
    var_288 = -4136199951347092532;
    var_296 = 24;
    pri = fun_1DE0(var_288, var_280, var_272)
    var_304 = 0;
    pri = fun_1EA0()
    OP_JZER lab_81C8
    var_312 = 0;
    pri = fun_1F50()
// lab_81C8
    var_8 = 23672;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0370(var_16, var_8)
    var_32 = 0;
    pri = fun_0440()
    var_40 = 147;
    var_48 = 8;
    pri = fun_6930(var_40)
    pri = 0;
    return pri;
}
// fun_8238
fun_8238() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 889;
    var_40 = 888;
    var_48 = 16;
    pri = fun_6400(var_40, var_32)
    var_56 = pri;
    pri = SoundPlayPokeVoice(var_56, var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4589730970243956736, 4672645142094544896, 4666288865374371840, -4242657469657360075
    var_80 = 48;
    pri = fun_0638(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0150(var_88)
    var_104 = 1;
    var_112 = 0;
    var_120 = 4641240890982006784;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH4_C 4672713861571280896, 4665860055839539200, 4611686018427387904, -4242657469657360075
    var_144 = 72;
    pri = fun_06C8(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_152 = -4242657469657360075;
    var_160 = 8;
    pri = fun_0898(var_152)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_200 = 48;
    pri = fun_07E8(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 3;
    var_256 = -4242657469657360075;
    var_264 = 56;
    pri = fun_2030(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -7065174936052447089, -4242657469657360075
    var_312 = 56;
    pri = fun_1B58(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1CA0(var_320)
    var_336 = 0;
    pri = fun_1D60()
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_0898(var_344)
    var_360 = 145;
    var_368 = 8;
    pri = fun_6930(var_360)
    var_376 = 10;
    var_384 = 5485305711447580246;
    pri = WorkSet(var_384, var_376)
    var_392 = 1;
    var_400 = 3;
    var_408 = 0;
    var_416 = 3;
    var_424 = -4242657469657360075;
    var_432 = 40;
    pri = fun_4368(var_424, var_416, var_408, var_400, var_392)
    OP_PUSH2_C -4242657469657360075, 1936208336533208251
    pri = SetBamiriInfoToChara(var_432, var_424)
    pri = 0;
    return pri;
}
// fun_85E0
fun_85E0() {
    OP_ZERO_P_S -8
    var_16 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_16)
    OP_MOVE_ALT 
    pri = 6630;
    var_24 = pri;
    var_32 = pri;
    var_40 = alt;
    var_48 = 16;
    pri = fun_00D8(var_40, var_32)
    OP_POP_ALT 
    OP_JNZ lab_8710
    var_56 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_56)
    OP_MOVE_ALT 
    pri = 6830;
    var_64 = pri;
    var_72 = pri;
    var_80 = alt;
    var_88 = 16;
    pri = fun_0060(var_80, var_72)
    OP_POP_ALT 
    OP_JNZ lab_8710
    pri = 0;
    OP_JUMP lab_8718
// lab_8710
    pri = 1;
// lab_8718
    OP_JZER lab_8750
    OP_CONST_S -8, 6730
    OP_JUMP lab_8768
// lab_8750
    OP_CONST_S -8, 6930
// lab_8768
    var_8 = 1;
    var_16 = 1;
    OP_PUSH2_C 4640537203540230144, 4672705615234072576
    var_24 = var_8;
    pri = float(var_24)
    var_32 = pri;
    var_40 = -4242657469657360075;
    var_48 = 48;
    pri = fun_0638(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 889;
    var_88 = 888;
    var_96 = 16;
    pri = fun_6400(var_88, var_80)
    var_104 = pri;
    pri = SoundPlayPokeVoice(var_104, var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 0;
    var_128 = 50;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 0;
    var_152 = 0;
    var_160 = 4672570925059670016;
    var_168 = var_8;
    pri = float(var_168)
    var_176 = pri;
    OP_PUSH2_C 4611686018427387904, -4242657469657360075
    var_184 = 72;
    pri = fun_06C8(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = -4242657469657360075;
    var_200 = 8;
    pri = fun_0898(var_192)
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_240 = 48;
    pri = fun_07E8(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_280 = 48;
    pri = fun_07E8(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 8802641224559852288;
    var_296 = 8;
    pri = fun_0898(var_288)
    var_304 = -4242657469657360075;
    var_312 = 8;
    pri = fun_0898(var_304)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C -7065176035564075300, -4242657469657360075
    var_360 = 56;
    pri = fun_1B58(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1CA0(var_368)
    var_384 = 0;
    pri = fun_1D60()
    var_392 = 1;
    var_400 = 0;
    var_408 = 50;
    pri = float(var_408)
    var_416 = pri;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH4_C 4671941454652768256, 4664033767025803264, 4611686018427387904, -4242657469657360075
    var_440 = 72;
    pri = fun_06C8(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 20;
    var_456 = 8;
    pri = fun_0150(var_448)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 180;
    pri = float(var_488)
    var_496 = pri;
    var_504 = 8802641224559852288;
    var_512 = 40;
    pri = fun_0798(var_504, var_496, var_488, var_480, var_472)
    var_520 = 8802641224559852288;
    var_528 = 8;
    pri = fun_0898(var_520)
    var_536 = -4242657469657360075;
    var_544 = 8;
    pri = fun_0898(var_536)
    var_552 = 150;
    var_560 = 8;
    pri = fun_6930(var_552)
    var_568 = 20;
    var_576 = 5485305711447580246;
    pri = WorkSet(var_576, var_568)
    OP_PUSH2_C -4242657469657360075, 1936212734579721095
    pri = SetBamiriInfoToChara(var_576, var_568)
    pri = 0;
    return pri;
}
// fun_8C90
fun_8C90() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_40 = 48;
    pri = fun_07E8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_80 = 48;
    pri = fun_07E8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0898(var_88)
    var_104 = -4242657469657360075;
    var_112 = 8;
    pri = fun_0898(var_104)
    var_128 = 816;
    var_136 = 813;
    var_144 = 810;
    var_152 = 24;
    pri = fun_62F8(var_144, var_136, var_128)
    var_8 = pri;
    var_160 = var_8;
    var_168 = 1;
    var_176 = 16;
    pri = fun_1D90(var_168, var_160)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C -7065180433610588144, -4242657469657360075
    var_224 = 56;
    pri = fun_1B58(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1CA0(var_232)
    var_248 = 0;
    pri = fun_1D60()
    var_256 = 1;
    var_264 = 1;
    var_272 = 16;
    pri = fun_6770(var_264, var_256)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C -7065172737029190667, -4242657469657360075
    var_320 = 56;
    pri = fun_1B58(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_1CA0(var_328)
    var_344 = 0;
    pri = fun_1D60()
    pri = 0;
    return pri;
}
