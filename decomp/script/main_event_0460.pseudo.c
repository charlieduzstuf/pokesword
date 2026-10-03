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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_01F0
fun_01F0() {
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
// fun_0260
fun_0260() {
    OP_JUMP lab_0278
// lab_0278
    pri = FadeWait_()
    OP_JZER lab_02B0
    pri = 0;
    return pri;
// lab_02B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0278
    pri = 0;
    return pri;
}
// fun_02F0
fun_02F0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0318
fun_0318() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0360
// lab_0360
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_03A0
    OP_JUMP lab_0410
// lab_03A0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_03E0
    OP_JUMP lab_0410
// lab_03E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0360
// lab_0410
    pri = 0;
    return pri;
}
// fun_0428
fun_0428() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0458
fun_0458() {
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
// fun_0578
fun_0578() {
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
// fun_0698
fun_0698() {
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
// fun_07B8
fun_07B8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
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
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C70(var_8)
    OP_JZER lab_0910
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0CA0(var_24)
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
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C70(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CD0
fun_0CD0() {
    OP_JUMP lab_0CE8
// lab_0CE8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D78
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0D68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_0D78
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E08
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0DF8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_0E08
    pri = 0;
    return pri;
// lab_0DF8
    OP_JUMP lab_0E18
// lab_0E18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CE8
    pri = 0;
    return pri;
// lab_0D68
    OP_JUMP lab_0E18
}
// fun_0E58
fun_0E58() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0CD0(var_40)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
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
// switch_1590
        case default:
        {
// switch_1590_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_15D8
// lab_15D8
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
            OP_JNZ lab_1680
            var_88 = 0;
            pri = fun_1838()
// lab_1680
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1590_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1178
                case default:
                {
// switch_1178_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11F0
// lab_11F0
                    OP_JUMP lab_15D8
                }
                case 0x0:
                {
// switch_1178_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_11F0
                }
                case 0x1:
                {
// switch_1178_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_11F0
                }
                case 0x2:
                {
// switch_1178_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_11F0
                }
                case 0x3:
                {
// switch_1178_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11F0
                }
                case 0x4:
                {
// switch_1178_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_11F0
                }
                case 0x5:
                {
// switch_1178_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_11F0
                }
            }
        }
        case 0x65:
        {
// switch_1590_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1330
                case default:
                {
// switch_1330_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13A8
// lab_13A8
                    OP_JUMP lab_15D8
                }
                case 0x0:
                {
// switch_1330_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_13A8
                }
                case 0x1:
                {
// switch_1330_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_13A8
                }
                case 0x2:
                {
// switch_1330_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_13A8
                }
                case 0x3:
                {
// switch_1330_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13A8
                }
                case 0x4:
                {
// switch_1330_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_13A8
                }
                case 0x5:
                {
// switch_1330_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_13A8
                }
            }
        }
        case 0x66:
        {
// switch_1590_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_14E8
                case default:
                {
// switch_14E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1560
// lab_1560
                    OP_JUMP lab_15D8
                }
                case 0x0:
                {
// switch_14E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1560
                }
                case 0x1:
                {
// switch_14E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1560
                }
                case 0x2:
                {
// switch_14E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1560
                }
                case 0x3:
                {
// switch_14E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1560
                }
                case 0x4:
                {
// switch_14E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1560
                }
                case 0x5:
                {
// switch_14E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1560
                }
            }
        }
    }
}
// fun_1698
fun_1698() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1740
    pri = 1;
    return pri;
// lab_1740
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1788
fun_1788() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1698(var_8)
    arg_2 = pri;
// lab_17D8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
    OP_JUMP lab_1850
// lab_1850
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1890
    pri = 0;
    return pri;
// lab_1890
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1850
    pri = 0;
    return pri;
}
// fun_18D0
fun_18D0() {
    var_8 = 0;
    pri = fun_1838()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1980
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1980
    pri = 0;
    return pri;
}
// fun_1990
fun_1990() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_19C0
fun_19C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1A38()
    return pri;
}
// fun_1A38
fun_1A38() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1A78
fun_1A78() {
    OP_JUMP lab_1A90
// lab_1A90
    pri = EvCameraMoveWait_()
    OP_JZER lab_1AC8
    pri = 0;
    return pri;
// lab_1AC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A90
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0458(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0578(var_72, var_64, var_56)
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
    pri = fun_0698(var_136, var_128, var_120)
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
// fun_1C68
fun_1C68() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1CF0
// lab_1CF0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1E70
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1E60
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1DB0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1DB0
    pri = 0;
    OP_JUMP lab_1DB8
// lab_1E70
    pri = 0;
    return pri;
// lab_1E60
    OP_JUMP lab_1CE8
// lab_1CE8
    OP_INC_P_S -936
// lab_1DB0
    pri = 1;
// lab_1DB8
    OP_JZER lab_1E30
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1E28
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1E30
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1E28
}
// fun_1E90
fun_1E90() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1F28
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_0F18()
// lab_1F28
    pri = arg_4;
    OP_JZER lab_1F60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F40(var_8)
// lab_1F60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1FB8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1FB8
    pri = 0;
    OP_JUMP lab_1FC0
// lab_1FB8
    pri = 1;
// lab_1FC0
    OP_JZER lab_2088
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_2088
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_2060
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0E58(var_32, var_24)
    OP_JUMP lab_2088
// lab_2088
    pri = arg_2;
    OP_JZER lab_2160
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_2130
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C30(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07B8(var_40)
    OP_JUMP lab_2160
// lab_2160
    pri = arg_3;
    OP_JZER lab_2198
    var_8 = 1;
    var_16 = 8;
    pri = fun_0EE0(var_8)
// lab_2198
    pri = 0;
    return pri;
// lab_2130
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C30(var_16, var_8)
// lab_2060
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0E58(var_16, var_8)
}
// fun_21A8
fun_21A8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_2328
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2240
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
// lab_2328
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_2240
    pri = arg_0;
    OP_JNZ lab_2288
    var_8 = 1304;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_22A8
// lab_2288
    var_8 = 1480;
    pri = SoundPostEvent(var_8)
// lab_22A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0318(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2328
    var_24 = 1744;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0190(var_32, var_24)
    var_48 = 0;
    pri = fun_0260()
}
// fun_2368
fun_2368() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1C68(var_24)
    pri = 0;
    return pri;
}
// fun_23D0
fun_23D0() {
    pri = g_mode;
    switch (pri) {
// switch_2490
        case default:
        {
// switch_2490_case_default
            pri = CommandNOP()
            OP_JUMP lab_24D8
// lab_24D8
            pri = 0;
            return pri;
        }
        case 0xb868f3221ae4b3cc:
        {
// switch_2490_case_0xb868f3221ae4b3cc
            var_8 = 0;
            pri = fun_2DC0()
            OP_JUMP lab_24D8
        }
        case 0x0:
        {
// switch_2490_case_0x0
            var_8 = 0;
            pri = fun_24E8()
            OP_JUMP lab_24D8
        }
        case 0x545c411e68839d40:
        {
// switch_2490_case_0x545c411e68839d40
            var_8 = 0;
            pri = fun_2EF0()
            OP_JUMP lab_24D8
        }
    }
}
// fun_24E8
fun_24E8() {
    pri = 0;
    return pri;
}
// fun_2500
fun_2500() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1E90(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2558
fun_2558() {
    pri = 0;
    return pri;
}
// fun_2570
fun_2570() {
    pri = 0;
    return pri;
}
// fun_2588
fun_2588() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -282799482538826992, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_1B08(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C -282799482538826992, 8802641224559852288
    var_88 = 48;
    pri = fun_0840(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, -282799482538826992
    var_128 = 48;
    pri = fun_0840(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C 1068518902048735478, -282799482538826992
    var_176 = 56;
    pri = fun_1788(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_18D0(var_184)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C 1068517802537107267, -282799482538826992
    var_240 = 56;
    pri = fun_1788(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_18D0(var_248)
    var_264 = 8802641224559852288;
    var_272 = 8;
    pri = fun_0898(var_264)
    var_280 = -282799482538826992;
    var_288 = 8;
    pri = fun_0898(var_280)
    var_296 = 0;
    pri = fun_1A78()
    var_312 = 0;
    var_320 = 0;
    var_328 = 1;
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = 48;
    pri = fun_19C0(var_352, var_344, var_336, var_328, var_320, var_312)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2900
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C 1068516703025479056, -282799482538826992
    var_408 = 56;
    pri = fun_1788(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_18D0(var_416)
    OP_JUMP lab_2978
// lab_2900
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 1068524399606876533, -282799482538826992
    var_48 = 56;
    pri = fun_1788(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_18D0(var_56)
// lab_2978
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 1068523300095248322, -282799482538826992
    var_48 = 56;
    pri = fun_1788(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_18D0(var_56)
    var_72 = 0;
    pri = fun_1990()
    var_80 = 1;
    var_88 = 0;
    var_96 = 1256;
    var_104 = 30;
    var_112 = 32;
    pri = fun_01F0(var_104, var_96, var_88, var_80)
    var_120 = 0;
    pri = fun_0260()
    var_128 = 1792;
    pri = SoundPostEvent(var_128)
    var_136 = 80;
    var_144 = 8;
    pri = fun_00B8(var_136)
    var_152 = 1904;
    pri = SoundPostEvent(var_152)
    var_160 = 0;
    var_168 = 8;
    pri = fun_0318(var_160)
    var_176 = 3;
    var_184 = 0;
    pri = EvCameraEnd(var_184, var_176)
    var_192 = 0;
    var_200 = 2;
    var_208 = 16;
    pri = fun_21A8(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_2B40
fun_2B40() {
    pri = 0;
    return pri;
}
// fun_2B58
fun_2B58() {
    var_8 = 3563100693386837929;
    var_16 = 8;
    pri = fun_0428(var_8)
    var_24 = 5767568996398104757;
    var_32 = 8;
    pri = fun_0428(var_24)
    var_40 = 4103919529309054878;
    var_48 = 8;
    pri = fun_0428(var_40)
    var_56 = -686112562623115494;
    var_64 = 8;
    pri = fun_0428(var_56)
    var_72 = 470;
    var_80 = 8;
    pri = fun_2368(var_72)
    var_88 = 20;
    var_96 = -4873681772358681767;
    pri = WorkSet(var_96, var_88)
    pri = 0;
    return pri;
}
// fun_2C60
fun_2C60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 90;
    pri = float(var_32)
    var_40 = pri;
    var_48 = -282799482538826992;
    var_56 = 40;
    pri = fun_07F0(var_48, var_40, var_32, var_24, var_16)
    var_64 = -282799482538826992;
    var_72 = 8;
    pri = fun_0898(var_64)
    OP_PUSH2_C 4166911318193987639, 5078579635059349393
    pri = SetBamiriInfoToChara(var_72, var_64)
    OP_PUSH2_C 5996991087849294980, 1543963376809491099
    pri = SetBamiriInfoToChara(var_72, var_64)
    OP_PUSH2_C -8424277323871559939, 4987045086607094143
    pri = SetBamiriInfoToChara(var_72, var_64)
    var_80 = -5157614285858812587;
    pri = ReserveScript(var_80)
    pri = 0;
    return pri;
}
// fun_2DC0
fun_2DC0() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 460
    OP_JZER lab_2EE0
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_2500()
    var_24 = 0;
    pri = fun_2558()
    var_32 = 0;
    pri = fun_2570()
    var_40 = 0;
    pri = fun_2588()
    var_48 = 0;
    pri = fun_2B40()
    var_56 = 0;
    pri = fun_2B58()
    var_64 = 0;
    pri = fun_2C60()
    pri = CommandNOP()
// lab_2EE0
    pri = 0;
    return pri;
}
// fun_2EF0
fun_2EF0() {
    var_8 = 0;
    pri = fun_2558()
    var_16 = 0;
    pri = fun_2B58()
    pri = 0;
    return pri;
}
