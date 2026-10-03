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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
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
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_02F0
fun_02F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0380
fun_0380() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
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
// fun_0430
fun_0430() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0860(var_8)
    OP_JZER lab_0500
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0890(var_24)
    OP_JNZ lab_0500
    pri = 0;
    return pri;
// lab_0500
    OP_JUMP lab_0510
// lab_0510
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0570
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
    pri = 0;
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0630
    pri = 0;
    return pri;
// lab_0630
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0670
// lab_0670
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0860(var_8)
    OP_JNZ lab_06F8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06E8
    pri = 0;
    return pri;
// lab_06F8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0740
    pri = 0;
    return pri;
// lab_0740
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E8(var_8)
    pri = 0;
    return pri;
// lab_07A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
// lab_06E8
    OP_JUMP lab_0740
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    OP_JUMP lab_08D8
// lab_08D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0968
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0958
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05E8(var_8)
    pri = 0;
    return pri;
// lab_0968
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_09E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05E8(var_8)
    pri = 0;
    return pri;
// lab_09F8
    pri = 0;
    return pri;
// lab_09E8
    OP_JUMP lab_0A08
// lab_0A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08D8
    pri = 0;
    return pri;
// lab_0958
    OP_JUMP lab_0A08
}
// fun_0A48
fun_0A48() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05E8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_08C0(var_40)
    pri = 0;
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0B08
fun_0B08() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0B30
fun_0B30() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
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
// switch_1180
        case default:
        {
// switch_1180_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_11C8
// lab_11C8
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
            OP_JNZ lab_1270
            var_88 = 0;
            pri = fun_1428()
// lab_1270
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1180_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0D68
                case default:
                {
// switch_0D68_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0DE0
// lab_0DE0
                    OP_JUMP lab_11C8
                }
                case 0x0:
                {
// switch_0D68_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0DE0
                }
                case 0x1:
                {
// switch_0D68_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0DE0
                }
                case 0x2:
                {
// switch_0D68_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0DE0
                }
                case 0x3:
                {
// switch_0D68_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0DE0
                }
                case 0x4:
                {
// switch_0D68_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0DE0
                }
                case 0x5:
                {
// switch_0D68_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0DE0
                }
            }
        }
        case 0x65:
        {
// switch_1180_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0F20
                case default:
                {
// switch_0F20_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F98
// lab_0F98
                    OP_JUMP lab_11C8
                }
                case 0x0:
                {
// switch_0F20_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F98
                }
                case 0x1:
                {
// switch_0F20_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F98
                }
                case 0x2:
                {
// switch_0F20_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F98
                }
                case 0x3:
                {
// switch_0F20_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F98
                }
                case 0x4:
                {
// switch_0F20_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F98
                }
                case 0x5:
                {
// switch_0F20_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F98
                }
            }
        }
        case 0x66:
        {
// switch_1180_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_10D8
                case default:
                {
// switch_10D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1150
// lab_1150
                    OP_JUMP lab_11C8
                }
                case 0x0:
                {
// switch_10D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1150
                }
                case 0x1:
                {
// switch_10D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1150
                }
                case 0x2:
                {
// switch_10D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1150
                }
                case 0x3:
                {
// switch_10D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1150
                }
                case 0x4:
                {
// switch_10D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1150
                }
                case 0x5:
                {
// switch_10D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1150
                }
            }
        }
    }
}
// fun_1288
fun_1288() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05B0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1330
    pri = 1;
    return pri;
// lab_1330
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1378
fun_1378() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1288(var_8)
    arg_2 = pri;
// lab_13C8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    OP_JUMP lab_1440
// lab_1440
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1480
    pri = 0;
    return pri;
// lab_1480
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1440
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    var_8 = 0;
    pri = fun_1428()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1570
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1570
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    OP_JUMP lab_15C8
// lab_15C8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1600
    pri = 0;
    return pri;
// lab_1600
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15C8
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_16C8
// lab_16C8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1848
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1838
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1788
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1788
    pri = 0;
    OP_JUMP lab_1790
// lab_1848
    pri = 0;
    return pri;
// lab_1838
    OP_JUMP lab_16C0
// lab_16C0
    OP_INC_P_S -936
// lab_1788
    pri = 1;
// lab_1790
    OP_JZER lab_1808
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1800
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1808
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1800
}
// fun_1868
fun_1868() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1900
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0B08()
// lab_1900
    pri = arg_4;
    OP_JZER lab_1938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0B30(var_8)
// lab_1938
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1990
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1990
    pri = 0;
    OP_JUMP lab_1998
// lab_1990
    pri = 1;
// lab_1998
    OP_JZER lab_1A60
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1A60
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1A38
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0A48(var_32, var_24)
    OP_JUMP lab_1A60
// lab_1A60
    pri = arg_2;
    OP_JZER lab_1B38
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1B08
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0820(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0380(var_40)
    OP_JUMP lab_1B38
// lab_1B38
    pri = arg_3;
    OP_JZER lab_1B70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0AD0(var_8)
// lab_1B70
    pri = 0;
    return pri;
// lab_1B08
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0820(var_16, var_8)
// lab_1A38
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0A48(var_16, var_8)
}
// fun_1B80
fun_1B80() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1640(var_24)
    pri = 0;
    return pri;
}
// fun_1BE8
fun_1BE8() {
    pri = g_mode;
    switch (pri) {
// switch_1CA8
        case default:
        {
// switch_1CA8_case_default
            pri = CommandNOP()
            OP_JUMP lab_1CF0
// lab_1CF0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1CA8_case_0x0
            var_8 = 0;
            pri = fun_1D00()
            OP_JUMP lab_1CF0
        }
        case 0x3009c72aeafe5fd3:
        {
// switch_1CA8_case_0x3009c72aeafe5fd3
            var_8 = 0;
            pri = fun_2B48()
            OP_JUMP lab_1CF0
        }
        case 0x571cbd278790bff7:
        {
// switch_1CA8_case_0x571cbd278790bff7
            var_8 = 0;
            pri = fun_2C38()
            OP_JUMP lab_1CF0
        }
    }
}
// fun_1D00
fun_1D00() {
    pri = 0;
    return pri;
}
// fun_1D18
fun_1D18() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1868(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    pri = 0;
    return pri;
}
// fun_1D88
fun_1D88() {
    pri = 0;
    return pri;
}
// fun_1DA0
fun_1DA0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4654320681306030080, 4655301445678006272, 8802641224559852288
    var_32 = 48;
    pri = fun_02F0(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 1;
    var_48 = 1;
    OP_PUSH4_C -4586951404848939008, 4656768194189459456, 4657012285770825728, -587242334477354430
    var_56 = 48;
    pri = fun_02F0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4587781756030235443, 4656414151445315584, 4656772592235970560, 1141313780110520273
    var_80 = 48;
    pri = fun_02F0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C 4657149482831739617, 4635465024459904123, 4655687066396099871, 4657189175201502331, 4635471357646880113
    var_128 = 4655724933576560476;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_15B0()
    var_152 = 1;
    var_160 = 0;
    var_168 = 30;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 80;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 1;
    OP_PUSH4_C 4656554888933670912, 4655301445678006272, 4607182418800017408, 8802641224559852288
    var_208 = 72;
    pri = fun_03B8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 5;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 1304;
    pri = SoundPostEvent(var_232)
    var_240 = 1576;
    var_248 = 8;
    var_256 = 16;
    pri = fun_0138(var_248, var_240)
    var_264 = 0;
    pri = fun_0208()
    var_272 = 50;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -6534018541165042817, 1141313780110520273
    var_328 = 56;
    pri = fun_1378(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_14C0(var_336)
    var_352 = 0;
    pri = fun_1580()
    var_360 = 1;
    var_368 = 0;
    var_376 = 4641240890982006784;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH4_C 4656768194189459456, 4656440539724382208, 4607182418800017408, -587242334477354430
    var_400 = 72;
    pri = fun_03B8(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 1;
    var_416 = 0;
    var_424 = 4641240890982006784;
    var_432 = 0;
    var_440 = 0;
    OP_PUSH4_C 4656414151445315584, 4656295404189515776, 4607182418800017408, 1141313780110520273
    var_448 = 72;
    pri = fun_03B8(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 5;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 0;
    var_480 = 4631952216750555136;
    var_488 = 0;
    OP_PUSH5_C 4656457164340194181, 4636685218483944817, 4655773312088182620, 4656877133801539502, 4638416289590715351
    var_496 = 4654983774778509230;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    pri = fun_15B0()
    var_520 = -587242334477354430;
    var_528 = 8;
    pri = fun_0488(var_520)
    var_536 = 1141313780110520273;
    var_544 = 8;
    pri = fun_0488(var_536)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C -8213465582700981008, -587242334477354430
    var_592 = 56;
    pri = fun_1378(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_14C0(var_600)
    var_616 = 0;
    pri = fun_1580()
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C -8213462284166096375, -587242334477354430
    var_664 = 56;
    pri = fun_1378(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 1;
    var_680 = 8;
    pri = fun_14C0(var_672)
    var_688 = 0;
    pri = fun_1580()
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    OP_PUSH2_C 1141313780110520273, -587242334477354430
    var_728 = 48;
    pri = fun_0430(var_720, var_712, var_704, var_696, var_688, var_680)
    var_736 = -587242334477354430;
    var_744 = 8;
    pri = fun_0488(var_736)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C -8213463383677724586, -587242334477354430
    var_792 = 56;
    pri = fun_1378(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_14C0(var_800)
    var_816 = 0;
    pri = fun_1580()
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    OP_PUSH2_C -587242334477354430, 1141313780110520273
    var_856 = 48;
    pri = fun_0430(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 1141313780110520273;
    var_872 = 8;
    pri = fun_0488(var_864)
    var_880 = 0;
    var_888 = 3;
    var_896 = 0;
    var_904 = 100;
    var_912 = -1;
    OP_PUSH2_C -6534017441653414606, 1141313780110520273
    var_920 = 56;
    pri = fun_1378(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 1;
    var_936 = 8;
    pri = fun_14C0(var_928)
    var_944 = 0;
    pri = fun_1580()
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C -8213460085142839953, -587242334477354430
    var_992 = 56;
    pri = fun_1378(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_14C0(var_1000)
    var_1016 = 0;
    pri = fun_1580()
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    var_1048 = 0;
    OP_PUSH2_C 8802641224559852288, -587242334477354430
    var_1056 = 48;
    pri = fun_0430(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = 0;
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    OP_PUSH2_C 8802641224559852288, 1141313780110520273
    var_1096 = 48;
    pri = fun_0430(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1104 = -587242334477354430;
    var_1112 = 8;
    pri = fun_0488(var_1104)
    var_1120 = 1141313780110520273;
    var_1128 = 8;
    pri = fun_0488(var_1120)
    var_1136 = 0;
    var_1144 = 3;
    var_1152 = 0;
    var_1160 = 100;
    var_1168 = -1;
    OP_PUSH2_C -8213461184654468164, -587242334477354430
    var_1176 = 56;
    pri = fun_1378(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1184 = 1;
    var_1192 = 8;
    pri = fun_14C0(var_1184)
    var_1200 = 0;
    pri = fun_1580()
    var_1208 = 0;
    var_1216 = 3;
    var_1224 = 0;
    var_1232 = 100;
    var_1240 = -1;
    OP_PUSH2_C -6534016342141786395, 1141313780110520273
    var_1248 = 56;
    pri = fun_1378(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_14C0(var_1256)
    var_1272 = 0;
    pri = fun_1580()
    var_1280 = 1;
    var_1288 = 0;
    var_1296 = 1256;
    var_1304 = 8;
    var_1312 = 32;
    pri = fun_0198(var_1304, var_1296, var_1288, var_1280)
    var_1320 = 0;
    pri = fun_0208()
    var_1328 = 3;
    var_1336 = 1;
    pri = EvCameraEnd(var_1336, var_1328)
    var_1344 = 0;
    var_1352 = -587242334477354430;
    var_1360 = 16;
    pri = fun_0348(var_1352, var_1344)
    var_1368 = 0;
    var_1376 = 1141313780110520273;
    var_1384 = 16;
    pri = fun_0348(var_1376, var_1368)
    var_1392 = 30;
    var_1400 = 8;
    pri = fun_0060(var_1392)
    var_1408 = 8802641224559852288;
    var_1416 = 8;
    pri = fun_0488(var_1408)
    pri = 0;
    return pri;
}
// fun_2A28
fun_2A28() {
    pri = 0;
    return pri;
}
// fun_2A40
fun_2A40() {
    var_8 = 1141313780110520273;
    var_16 = 8;
    pri = fun_02C0(var_8)
    var_24 = -587242334477354430;
    var_32 = 8;
    pri = fun_02C0(var_24)
    var_40 = 1730;
    var_48 = 8;
    pri = fun_1B80(var_40)
    var_56 = -8446806533310799730;
    pri = VanishFlagReset(var_56)
    pri = 0;
    return pri;
}
// fun_2AF0
fun_2AF0() {
    var_8 = 1592;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0138(var_16, var_8)
    var_32 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_2B48
fun_2B48() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1D18()
    var_16 = 0;
    pri = fun_1D70()
    var_24 = 0;
    pri = fun_1D88()
    var_32 = 0;
    pri = fun_1DA0()
    var_40 = 0;
    pri = fun_2A28()
    var_48 = 0;
    pri = fun_2A40()
    var_56 = 0;
    pri = fun_2AF0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2C38
fun_2C38() {
    var_8 = 0;
    pri = fun_1D70()
    var_16 = 0;
    pri = fun_2A40()
    pri = 0;
    return pri;
}
