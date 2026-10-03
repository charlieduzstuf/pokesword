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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_02F0
fun_02F0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0328
// lab_0328
    var_8 = 0;
    pri = fun_0470()
    OP_JNZ lab_0360
    OP_JUMP lab_0390
// lab_0360
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0328
// lab_0390
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_03C0
// lab_03C0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0400
    pri = 0;
    return pri;
// lab_0400
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0470
fun_0470() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0528
fun_0528() {
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
// fun_05A0
fun_05A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09D0(var_8)
    OP_JZER lab_0670
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A00(var_24)
    OP_JNZ lab_0670
    pri = 0;
    return pri;
// lab_0670
    OP_JUMP lab_0680
// lab_0680
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0680
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07A0
    pri = 0;
    return pri;
// lab_07A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07E0
// lab_07E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09D0(var_8)
    OP_JNZ lab_0868
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0858
    pri = 0;
    return pri;
// lab_0868
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08B0
    pri = 0;
    return pri;
// lab_08B0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0910
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0958(var_8)
    pri = 0;
    return pri;
// lab_0910
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07E0
    pri = 0;
    return pri;
// lab_0858
    OP_JUMP lab_08B0
}
// fun_0958
fun_0958() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    OP_JUMP lab_0A48
// lab_0A48
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0AD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0AC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0758(var_8)
    pri = 0;
    return pri;
// lab_0AD8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B68
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0B58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0758(var_8)
    pri = 0;
    return pri;
// lab_0B68
    pri = 0;
    return pri;
// lab_0B58
    OP_JUMP lab_0B78
// lab_0B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A48
    pri = 0;
    return pri;
// lab_0AC8
    OP_JUMP lab_0B78
}
// fun_0BB8
fun_0BB8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0758(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A30(var_40)
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
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
// switch_12F0
        case default:
        {
// switch_12F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1338
// lab_1338
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
            OP_JNZ lab_13E0
            var_88 = 0;
            pri = fun_1598()
// lab_13E0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_12F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0ED8
                case default:
                {
// switch_0ED8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F50
// lab_0F50
                    OP_JUMP lab_1338
                }
                case 0x0:
                {
// switch_0ED8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F50
                }
                case 0x1:
                {
// switch_0ED8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F50
                }
                case 0x2:
                {
// switch_0ED8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F50
                }
                case 0x3:
                {
// switch_0ED8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F50
                }
                case 0x4:
                {
// switch_0ED8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F50
                }
                case 0x5:
                {
// switch_0ED8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F50
                }
            }
        }
        case 0x65:
        {
// switch_12F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1090
                case default:
                {
// switch_1090_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1108
// lab_1108
                    OP_JUMP lab_1338
                }
                case 0x0:
                {
// switch_1090_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1108
                }
                case 0x1:
                {
// switch_1090_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1108
                }
                case 0x2:
                {
// switch_1090_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1108
                }
                case 0x3:
                {
// switch_1090_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1108
                }
                case 0x4:
                {
// switch_1090_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1108
                }
                case 0x5:
                {
// switch_1090_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1108
                }
            }
        }
        case 0x66:
        {
// switch_12F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1248
                case default:
                {
// switch_1248_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12C0
// lab_12C0
                    OP_JUMP lab_1338
                }
                case 0x0:
                {
// switch_1248_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_12C0
                }
                case 0x1:
                {
// switch_1248_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_12C0
                }
                case 0x2:
                {
// switch_1248_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_12C0
                }
                case 0x3:
                {
// switch_1248_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12C0
                }
                case 0x4:
                {
// switch_1248_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_12C0
                }
                case 0x5:
                {
// switch_1248_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_12C0
                }
            }
        }
    }
}
// fun_13F8
fun_13F8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0720(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_14A0
    pri = 1;
    return pri;
// lab_14A0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_14E8
fun_14E8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1538
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13F8(var_8)
    arg_2 = pri;
// lab_1538
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0CD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    OP_JUMP lab_15B0
// lab_15B0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15F0
    pri = 0;
    return pri;
// lab_15F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15B0
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = 0;
    pri = fun_1598()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_16E0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_16E0
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1720
fun_1720() {
    OP_JUMP lab_1738
// lab_1738
    pri = EvCameraMoveWait_()
    OP_JZER lab_1770
    pri = 0;
    return pri;
// lab_1770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1738
    pri = 0;
    return pri;
}
// fun_17B0
fun_17B0() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1838
// lab_1838
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_19B8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_19A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_18F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_18F8
    pri = 0;
    OP_JUMP lab_1900
// lab_19B8
    pri = 0;
    return pri;
// lab_19A8
    OP_JUMP lab_1830
// lab_1830
    OP_INC_P_S -936
// lab_18F8
    pri = 1;
// lab_1900
    OP_JZER lab_1978
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1970
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1978
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1970
}
// fun_19D8
fun_19D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1A70
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0C78()
// lab_1A70
    pri = arg_4;
    OP_JZER lab_1AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0CA0(var_8)
// lab_1AA8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1B00
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1B00
    pri = 0;
    OP_JUMP lab_1B08
// lab_1B00
    pri = 1;
// lab_1B08
    OP_JZER lab_1BD0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1BD0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1BA8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0BB8(var_32, var_24)
    OP_JUMP lab_1BD0
// lab_1BD0
    pri = arg_2;
    OP_JZER lab_1CA8
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1C78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0990(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04F0(var_40)
    OP_JUMP lab_1CA8
// lab_1CA8
    pri = arg_3;
    OP_JZER lab_1CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C40(var_8)
// lab_1CE0
    pri = 0;
    return pri;
// lab_1C78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0990(var_16, var_8)
// lab_1BA8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0BB8(var_16, var_8)
}
// fun_1CF0
fun_1CF0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_17B0(var_24)
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    pri = g_mode;
    switch (pri) {
// switch_1E18
        case default:
        {
// switch_1E18_case_default
            pri = CommandNOP()
            OP_JUMP lab_1E60
// lab_1E60
            pri = 0;
            return pri;
        }
        case 0xe6ea93274821de00:
        {
// switch_1E18_case_0xe6ea93274821de00
            var_8 = 0;
            pri = fun_2770()
            OP_JUMP lab_1E60
        }
        case 0x0:
        {
// switch_1E18_case_0x0
            var_8 = 0;
            pri = fun_1E70()
            OP_JUMP lab_1E60
        }
        case 0x4b6fd2ad273886c:
        {
// switch_1E18_case_0x4b6fd2ad273886c
            var_8 = 0;
            pri = fun_2680()
            OP_JUMP lab_1E60
        }
    }
}
// fun_1E70
fun_1E70() {
    pri = 0;
    return pri;
}
// fun_1E88
fun_1E88() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_19D8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EE0
fun_1EE0() {
    pri = 0;
    return pri;
}
// fun_1EF8
fun_1EF8() {
    pri = 0;
    return pri;
}
// fun_1F10
fun_1F10() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4589505790262588211, 4671766890689184399, 4669162004706471444, 8802641224559852288
    var_24 = 48;
    pri = fun_0498(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    OP_PUSH3_C 4671829579344642048, 4668911750362431488, -6784874504492061910
    var_56 = 48;
    pri = fun_0498(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 8;
    pri = fun_0060(var_64)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_80 = 0;
    OP_PUSH5_C 4671814106467260170, -4598546766514534482, 4668963185516378849, 4671920830563410248, 4638125666677261599
    var_88 = 4669109788899268362;
    var_96 = 1;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    pri = fun_1720()
    var_112 = 1;
    var_120 = 0;
    var_128 = 4641240890982006784;
    var_136 = 0;
    var_144 = 0;
    OP_PUSH4_C 4671794367484762522, 4669005318801955226, 4611686018427387904, 8802641224559852288
    var_152 = 72;
    pri = fun_0528(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 1304;
    var_168 = 8;
    var_176 = 16;
    pri = fun_0138(var_168, var_160)
    var_184 = 0;
    pri = fun_0208()
    var_192 = 30;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH2_C 8802641224559852288, -6784874504492061910
    var_240 = 48;
    pri = fun_05A0(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = -6784874504492061910;
    var_256 = 8;
    pri = fun_05F8(var_248)
    var_264 = 8802641224559852288;
    var_272 = 8;
    pri = fun_05F8(var_264)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C -7470620369366266787, -6784874504492061910
    var_320 = 56;
    pri = fun_14E8(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_1630(var_328)
    var_344 = 0;
    pri = fun_16F0()
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    OP_PUSH2_C -7470623667901151420, -6784874504492061910
    var_392 = 56;
    pri = fun_14E8(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 1;
    var_408 = 8;
    pri = fun_1630(var_400)
    var_416 = 0;
    pri = fun_16F0()
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C -7470622568389523209, -6784874504492061910
    var_464 = 56;
    pri = fun_14E8(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1630(var_472)
    var_488 = 0;
    pri = fun_16F0()
    var_496 = 0;
    var_504 = 3;
    var_512 = 0;
    var_520 = 100;
    var_528 = -1;
    OP_PUSH2_C -7470625866924407842, -6784874504492061910
    var_536 = 56;
    pri = fun_14E8(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = 1;
    var_552 = 8;
    pri = fun_1630(var_544)
    var_560 = 0;
    pri = fun_16F0()
    var_568 = 1;
    var_576 = 0;
    var_584 = 30;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 0;
    pri = float(var_600)
    var_608 = pri;
    var_616 = 0;
    OP_PUSH4_C 4671893351019053056, 4668739127036870656, 4611686018427387904, -6784874504492061910
    var_624 = 72;
    pri = fun_0528(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = -6784874504492061910;
    var_640 = 8;
    pri = fun_05F8(var_632)
    var_648 = 3;
    var_656 = 10;
    pri = EvCameraEnd(var_656, var_648)
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    pri = 0;
    return pri;
}
// fun_2558
fun_2558() {
    var_8 = -6784874504492061910;
    var_16 = 8;
    pri = fun_0440(var_8)
    var_24 = -5661906939330003973;
    var_32 = 8;
    pri = fun_02C0(var_24)
    var_40 = 1850;
    var_48 = 8;
    pri = fun_1CF0(var_40)
    var_56 = 0;
    var_64 = -6958835188024118277;
    pri = WorkSet(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_2610
fun_2610() {
    var_8 = 0;
    pri = fun_02F0()
    var_16 = 1304;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_40 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1E88()
    var_16 = 0;
    pri = fun_1EE0()
    var_24 = 0;
    pri = fun_1EF8()
    var_32 = 0;
    pri = fun_1F10()
    var_40 = 0;
    pri = fun_2540()
    var_48 = 0;
    pri = fun_2558()
    var_56 = 0;
    pri = fun_2610()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2770
fun_2770() {
    var_8 = 0;
    pri = fun_1EE0()
    var_16 = 0;
    pri = fun_2558()
    pri = 0;
    return pri;
}
