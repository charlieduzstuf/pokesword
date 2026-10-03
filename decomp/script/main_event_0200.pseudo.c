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
// fun_01A8
fun_01A8() {
    OP_JUMP lab_01C0
// lab_01C0
    pri = FadeWait_()
    OP_JZER lab_01F8
    pri = 0;
    return pri;
// lab_01F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_01C0
    pri = 0;
    return pri;
}
// fun_0238
fun_0238() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0260
fun_0260() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0320
fun_0320() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0350
fun_0350() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveStaticCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_03E8
fun_03E8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0420
fun_0420() {
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
    pri = fun_0958(var_8)
    OP_JZER lab_05B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0988(var_24)
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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0728
    pri = 0;
    return pri;
// lab_0728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0768
// lab_0768
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0958(var_8)
    OP_JNZ lab_07F0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07E0
    pri = 0;
    return pri;
// lab_07F0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0838
    pri = 0;
    return pri;
// lab_0838
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0898
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08E0(var_8)
    pri = 0;
    return pri;
// lab_0898
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0768
    pri = 0;
    return pri;
// lab_07E0
    OP_JUMP lab_0838
}
// fun_08E0
fun_08E0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09B8
fun_09B8() {
    OP_JUMP lab_09D0
// lab_09D0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A60
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0A50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06E0(var_8)
    pri = 0;
    return pri;
// lab_0A60
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0AE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06E0(var_8)
    pri = 0;
    return pri;
// lab_0AF0
    pri = 0;
    return pri;
// lab_0AE0
    OP_JUMP lab_0B00
// lab_0B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D0
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0B00
}
// fun_0B40
fun_0B40() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06E0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09B8(var_40)
    pri = 0;
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0C00
fun_0C00() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0C60
fun_0C60() {
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
// switch_1278
        case default:
        {
// switch_1278_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_12C0
// lab_12C0
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
            OP_JNZ lab_1368
            var_88 = 0;
            pri = fun_1520()
// lab_1368
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1278_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E60
                case default:
                {
// switch_0E60_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0ED8
// lab_0ED8
                    OP_JUMP lab_12C0
                }
                case 0x0:
                {
// switch_0E60_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0ED8
                }
                case 0x1:
                {
// switch_0E60_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0ED8
                }
                case 0x2:
                {
// switch_0E60_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0ED8
                }
                case 0x3:
                {
// switch_0E60_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0ED8
                }
                case 0x4:
                {
// switch_0E60_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0ED8
                }
                case 0x5:
                {
// switch_0E60_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0ED8
                }
            }
        }
        case 0x65:
        {
// switch_1278_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1018
                case default:
                {
// switch_1018_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1090
// lab_1090
                    OP_JUMP lab_12C0
                }
                case 0x0:
                {
// switch_1018_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1090
                }
                case 0x1:
                {
// switch_1018_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1090
                }
                case 0x2:
                {
// switch_1018_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1090
                }
                case 0x3:
                {
// switch_1018_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1090
                }
                case 0x4:
                {
// switch_1018_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1090
                }
                case 0x5:
                {
// switch_1018_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1090
                }
            }
        }
        case 0x66:
        {
// switch_1278_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11D0
                case default:
                {
// switch_11D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1248
// lab_1248
                    OP_JUMP lab_12C0
                }
                case 0x0:
                {
// switch_11D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1248
                }
                case 0x1:
                {
// switch_11D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1248
                }
                case 0x2:
                {
// switch_11D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1248
                }
                case 0x3:
                {
// switch_11D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1248
                }
                case 0x4:
                {
// switch_11D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1248
                }
                case 0x5:
                {
// switch_11D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1248
                }
            }
        }
    }
}
// fun_1380
fun_1380() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06A8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1428
    pri = 1;
    return pri;
// lab_1428
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1470
fun_1470() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_14C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1380(var_8)
    arg_2 = pri;
// lab_14C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    OP_JUMP lab_1538
// lab_1538
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1578
    pri = 0;
    return pri;
// lab_1578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1538
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = 0;
    pri = fun_1520()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1668
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1668
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    OP_JUMP lab_16C0
// lab_16C0
    pri = EvCameraMoveWait_()
    OP_JZER lab_16F8
    pri = 0;
    return pri;
// lab_16F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16C0
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_17C0
// lab_17C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1940
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1930
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1880
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1880
    pri = 0;
    OP_JUMP lab_1888
// lab_1940
    pri = 0;
    return pri;
// lab_1930
    OP_JUMP lab_17B8
// lab_17B8
    OP_INC_P_S -936
// lab_1880
    pri = 1;
// lab_1888
    OP_JZER lab_1900
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_18F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1900
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_18F8
}
// fun_1960
fun_1960() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_19F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0138(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_01A8()
    var_56 = 0;
    pri = fun_0C00()
// lab_19F8
    pri = arg_4;
    OP_JZER lab_1A30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C28(var_8)
// lab_1A30
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1A88
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1A88
    pri = 0;
    OP_JUMP lab_1A90
// lab_1A88
    pri = 1;
// lab_1A90
    OP_JZER lab_1B58
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1B58
    var_16 = 0;
    pri = fun_0238()
    OP_JZER lab_1B30
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0B40(var_32, var_24)
    OP_JUMP lab_1B58
// lab_1B58
    pri = arg_2;
    OP_JZER lab_1C30
    var_8 = 0;
    pri = fun_0238()
    OP_JZER lab_1C00
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0918(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_03E8(var_40)
    OP_JUMP lab_1C30
// lab_1C30
    pri = arg_3;
    OP_JZER lab_1C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0BC8(var_8)
// lab_1C68
    pri = 0;
    return pri;
// lab_1C00
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0918(var_16, var_8)
// lab_1B30
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0B40(var_16, var_8)
}
// fun_1C78
fun_1C78() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1738(var_24)
    pri = 0;
    return pri;
}
// fun_1CE0
fun_1CE0() {
    pri = g_mode;
    switch (pri) {
// switch_1DC8
        case default:
        {
// switch_1DC8_case_default
            pri = CommandNOP()
            OP_JUMP lab_1E20
// lab_1E20
            pri = 0;
            return pri;
        }
        case 0x83fc8521fd129058:
        {
// switch_1DC8_case_0x83fc8521fd129058
            var_8 = 0;
            pri = fun_2828()
            OP_JUMP lab_1E20
        }
        case 0xcda59ea1d4e053d1:
        {
// switch_1DC8_case_0xcda59ea1d4e053d1
            var_8 = 0;
            pri = fun_2960()
            OP_JUMP lab_1E20
        }
        case 0x0:
        {
// switch_1DC8_case_0x0
            var_8 = 0;
            pri = fun_1E30()
            OP_JUMP lab_1E20
        }
        case 0x669d1b1e731db7cc:
        {
// switch_1DC8_case_0x669d1b1e731db7cc
            var_8 = 0;
            pri = fun_2918()
            OP_JUMP lab_1E20
        }
    }
}
// fun_1E30
fun_1E30() {
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1960(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA0
fun_1EA0() {
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 3;
    var_32 = 1304;
    var_40 = -8040610231773951744;
    var_48 = 24;
    pri = fun_0668(var_40, var_32, var_24)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 1838443220896465507, 8802641224559852288
    var_88 = 48;
    pri = fun_04E8(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, 1838443220896465507
    var_128 = 48;
    pri = fun_04E8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 150;
    var_144 = 3;
    OP_PUSH2_C 4602678819172646912, 1838443220896465507
    var_152 = 60;
    pri = EvCameraMoveOffsetChr(var_152, var_144, var_136, var_128, var_120)
    var_160 = 0;
    pri = fun_16A8()
    var_168 = 0;
    var_176 = -8040610231773951744;
    var_184 = 16;
    pri = fun_03A8(var_176, var_168)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH4_C 4636033603912859648, 4676014183161004032, 4672779832268947456, -8040610231773951744
    var_208 = 48;
    pri = fun_0350(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    var_256 = 42065;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 25950;
    pri = float(var_272)
    var_280 = pri;
    OP_PUSH2_C 4602678819172646912, -8040610231773951744
    var_288 = 72;
    pri = fun_0420(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_0540(var_296)
    var_312 = 1838443220896465507;
    var_320 = 8;
    pri = fun_0540(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C 4151266089994692892, 1838443220896465507
    var_368 = 56;
    pri = fun_1470(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_15B8(var_376)
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    var_416 = 100;
    var_424 = -1;
    OP_PUSH2_C 4151264990483064681, 1838443220896465507
    var_432 = 56;
    pri = fun_1470(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 1;
    var_448 = 8;
    pri = fun_15B8(var_440)
    var_456 = 0;
    pri = fun_1678()
    var_464 = -8040610231773951744;
    var_472 = 8;
    pri = fun_0540(var_464)
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = 6;
    pri = SoundPlayPokeVoice(var_504, var_496, var_488, var_480)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -6308829985649526756, -8040610231773951744
    var_552 = 56;
    pri = fun_1470(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_15B8(var_560)
    var_576 = 0;
    pri = fun_1678()
    var_584 = 0;
    var_592 = 4631065570573916570;
    var_600 = 3;
    OP_PUSH5_C 4675974158188973916, -4586584080004331602, 4672945050383695217, 4676031866056757740, -4586184385537402470
    var_608 = 4672946595197532242;
    var_616 = 60;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 45;
    var_632 = 8;
    pri = fun_0060(var_624)
    var_640 = 1384;
    pri = SoundPostEvent(var_640)
    var_648 = 1;
    var_656 = 0;
    var_664 = 1712;
    var_672 = 8;
    var_680 = 32;
    pri = fun_0138(var_672, var_664, var_656, var_648)
    var_688 = 0;
    pri = fun_01A8()
    var_696 = 1;
    var_704 = -8040610231773951744;
    var_712 = 16;
    pri = fun_03A8(var_704, var_696)
    var_720 = 3;
    var_728 = 0;
    pri = EvCameraEnd(var_728, var_720)
    pri = 0;
    return pri;
}
// fun_2538
fun_2538() {
    pri = 0;
    return pri;
}
// fun_2550
fun_2550() {
    var_8 = 1838443220896465507;
    var_16 = 8;
    pri = fun_0320(var_8)
    var_24 = -8040610231773951744;
    var_32 = 8;
    pri = fun_0320(var_24)
    var_40 = 2206624492151242658;
    var_48 = 8;
    pri = fun_0320(var_40)
    var_56 = -8389920027382669047;
    var_64 = 8;
    pri = fun_0320(var_56)
    var_72 = -8654315183630985365;
    var_80 = 8;
    pri = fun_0320(var_72)
    var_88 = 210;
    var_96 = 8;
    pri = fun_1C78(var_88)
    var_104 = 20;
    var_112 = 285943187824898012;
    pri = WorkSet(var_112, var_104)
    var_120 = 20;
    var_128 = -4564380327603473089;
    pri = WorkSet(var_128, var_120)
    var_136 = -7045052338775704800;
    pri = VanishFlagReset(var_136)
    var_144 = 8112749681754728295;
    pri = VanishFlagReset(var_144)
    var_152 = 3761483749247810063;
    pri = VanishFlagSet(var_152)
    var_160 = -8303296711058148032;
    pri = VanishFlagSet(var_160)
    var_168 = -8303295611546519821;
    pri = VanishFlagSet(var_168)
    var_176 = -8303294512034891610;
    pri = VanishFlagSet(var_176)
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH5_C 4656291006143004672, 4652517482236477440, -5757319120885682241, 3131990204750253178, -8935129420095182367
    var_48 = 80;
    pri = fun_0260(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    pri = 0;
    return pri;
}
// fun_2828
fun_2828() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1E48()
    var_16 = 0;
    pri = fun_1EA0()
    var_24 = 0;
    pri = fun_1EB8()
    var_32 = 0;
    pri = fun_1ED0()
    var_40 = 0;
    pri = fun_2538()
    var_48 = 0;
    pri = fun_2550()
    var_56 = 0;
    pri = fun_27A0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2918
fun_2918() {
    var_8 = 0;
    pri = fun_1EA0()
    var_16 = 0;
    pri = fun_2550()
    pri = 0;
    return pri;
}
// fun_2960
fun_2960() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 90;
    pri = float(var_32)
    var_40 = pri;
    var_48 = -8040610231773951744;
    var_56 = 40;
    pri = fun_0498(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -6308826687114642123, -8040610231773951744
    var_104 = 56;
    pri = fun_1470(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_15B8(var_112)
    var_128 = 0;
    pri = fun_1678()
    var_136 = -8040610231773951744;
    var_144 = 8;
    pri = fun_0540(var_136)
    pri = 0;
    return pri;
}
