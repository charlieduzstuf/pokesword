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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0318
fun_0318() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0350
fun_0350() {
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
// fun_03C8
fun_03C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E0(var_8)
    OP_JZER lab_0440
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0810(var_24)
    OP_JNZ lab_0440
    pri = 0;
    return pri;
// lab_0440
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0530
fun_0530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_05B0
    pri = 0;
    return pri;
// lab_05B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_05F0
// lab_05F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E0(var_8)
    OP_JNZ lab_0678
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0668
    pri = 0;
    return pri;
// lab_0678
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_06C0
    pri = 0;
    return pri;
// lab_06C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0720
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = 0;
    return pri;
// lab_0720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05F0
    pri = 0;
    return pri;
// lab_0668
    OP_JUMP lab_06C0
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0840
fun_0840() {
    OP_JUMP lab_0858
// lab_0858
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_08E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_08D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0568(var_8)
    pri = 0;
    return pri;
// lab_08E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0978
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0968
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0568(var_8)
    pri = 0;
    return pri;
// lab_0978
    pri = 0;
    return pri;
// lab_0968
    OP_JUMP lab_0988
// lab_0988
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
// lab_08D8
    OP_JUMP lab_0988
}
// fun_09C8
fun_09C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0568(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0840(var_40)
    pri = 0;
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0A88
fun_0A88() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0AE8
fun_0AE8() {
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
// switch_1100
        case default:
        {
// switch_1100_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1148
// lab_1148
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
            OP_JNZ lab_11F0
            var_88 = 0;
            pri = fun_13A8()
// lab_11F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1100_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0CE8
                case default:
                {
// switch_0CE8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D60
// lab_0D60
                    OP_JUMP lab_1148
                }
                case 0x0:
                {
// switch_0CE8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0D60
                }
                case 0x1:
                {
// switch_0CE8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0D60
                }
                case 0x2:
                {
// switch_0CE8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0D60
                }
                case 0x3:
                {
// switch_0CE8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D60
                }
                case 0x4:
                {
// switch_0CE8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0D60
                }
                case 0x5:
                {
// switch_0CE8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0D60
                }
            }
        }
        case 0x65:
        {
// switch_1100_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0EA0
                case default:
                {
// switch_0EA0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F18
// lab_0F18
                    OP_JUMP lab_1148
                }
                case 0x0:
                {
// switch_0EA0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F18
                }
                case 0x1:
                {
// switch_0EA0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F18
                }
                case 0x2:
                {
// switch_0EA0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F18
                }
                case 0x3:
                {
// switch_0EA0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F18
                }
                case 0x4:
                {
// switch_0EA0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F18
                }
                case 0x5:
                {
// switch_0EA0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F18
                }
            }
        }
        case 0x66:
        {
// switch_1100_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1058
                case default:
                {
// switch_1058_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10D0
// lab_10D0
                    OP_JUMP lab_1148
                }
                case 0x0:
                {
// switch_1058_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_10D0
                }
                case 0x1:
                {
// switch_1058_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_10D0
                }
                case 0x2:
                {
// switch_1058_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_10D0
                }
                case 0x3:
                {
// switch_1058_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_10D0
                }
                case 0x4:
                {
// switch_1058_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_10D0
                }
                case 0x5:
                {
// switch_1058_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_10D0
                }
            }
        }
    }
}
// fun_1208
fun_1208() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0530(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_12B0
    pri = 1;
    return pri;
// lab_12B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_12F8
fun_12F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1348
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1208(var_8)
    arg_2 = pri;
// lab_1348
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0AE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    OP_JUMP lab_13C0
// lab_13C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1400
    pri = 0;
    return pri;
// lab_1400
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13C0
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    var_8 = 0;
    pri = fun_13A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_14F0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_14F0
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    OP_JUMP lab_1548
// lab_1548
    pri = EvCameraMoveWait_()
    OP_JZER lab_1580
    pri = 0;
    return pri;
// lab_1580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1548
    pri = 0;
    return pri;
}
// fun_15C0
fun_15C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_17D0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 336;
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
    var_424 = 392;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 408;
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
    OP_JZER lab_17B8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_17B8
    pri = 0;
    return pri;
}
// fun_17D0
fun_17D0() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_04F0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_18A0
// lab_18A0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1A20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1A10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1960
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1960
    pri = 0;
    OP_JUMP lab_1968
// lab_1A20
    pri = 0;
    return pri;
// lab_1A10
    OP_JUMP lab_1898
// lab_1898
    OP_INC_P_S -936
// lab_1960
    pri = 1;
// lab_1968
    OP_JZER lab_19E0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_19D8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_19E0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_19D8
}
// fun_1A40
fun_1A40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1AD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0A88()
// lab_1AD8
    pri = arg_4;
    OP_JZER lab_1B10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0AB0(var_8)
// lab_1B10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1B68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1B68
    pri = 0;
    OP_JUMP lab_1B70
// lab_1B68
    pri = 1;
// lab_1B70
    OP_JZER lab_1C38
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1C38
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1C10
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_09C8(var_32, var_24)
    OP_JUMP lab_1C38
// lab_1C38
    pri = arg_2;
    OP_JZER lab_1D10
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1CE0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_07A0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0318(var_40)
    OP_JUMP lab_1D10
// lab_1D10
    pri = arg_3;
    OP_JZER lab_1D48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A50(var_8)
// lab_1D48
    pri = 0;
    return pri;
// lab_1CE0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A0(var_16, var_8)
// lab_1C10
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_09C8(var_16, var_8)
}
// fun_1D58
fun_1D58() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1818(var_24)
    pri = 0;
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = g_mode;
    switch (pri) {
// switch_1E80
        case default:
        {
// switch_1E80_case_default
            pri = CommandNOP()
            OP_JUMP lab_1EC8
// lab_1EC8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1E80_case_0x0
            var_8 = 0;
            pri = fun_1ED8()
            OP_JUMP lab_1EC8
        }
        case 0x2bde6f276f17644e:
        {
// switch_1E80_case_0x2bde6f276f17644e
            var_8 = 0;
            pri = fun_2CD0()
            OP_JUMP lab_1EC8
        }
        case 0x4ad5492afa6614f2:
        {
// switch_1E80_case_0x4ad5492afa6614f2
            var_8 = 0;
            pri = fun_2BE0()
            OP_JUMP lab_1EC8
        }
    }
}
// fun_1ED8
fun_1ED8() {
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_1A40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    pri = 0;
    return pri;
}
// fun_1F60
fun_1F60() {
    pri = 0;
    return pri;
}
// fun_1F78
fun_1F78() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4640537203540230144, 4670166293129723904, 4670373001315745792, -4374024216485124166
    var_24 = 48;
    pri = fun_02C0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640537203540230144, 4670102521455312896, 4670437872501784576, -2634777529138130236
    var_48 = 48;
    pri = fun_02C0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4640537203540230144, 4670453073250038579, 4670290043163430093, 8802641224559852288
    var_72 = 48;
    pri = fun_02C0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4640537203540230144, 4670473689093059379, 4670301038279707853, -7800673974562670051
    var_96 = 48;
    pri = fun_02C0(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 1528;
    pri = SoundPostEvent(var_120)
    var_128 = 0;
    var_136 = 4632219617978430259;
    var_144 = 0;
    OP_PUSH5_C 4670464516417304658, 4660466159656925921, 4670278704449768653, 4670469513697652900, 4660458243173205934
    var_152 = 4670276645614245642;
    var_160 = 1;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_1530()
    var_176 = 1688;
    var_184 = 8;
    var_192 = 16;
    pri = fun_0138(var_184, var_176)
    var_200 = 0;
    pri = fun_0208()
    var_208 = 0;
    var_216 = 4632219617978430259;
    var_224 = 0;
    OP_PUSH5_C 4670475904608989348, 4660466159656925921, 4670306343423311872, 4670480901889337590, 4660458243173205934
    var_232 = 4670304284587788861;
    var_240 = 400;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 1;
    var_256 = 0;
    var_264 = 30;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 180;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 1;
    OP_PUSH4_C 4670347107816911667, 4670371681901792461, 4611686018427387904, 8802641224559852288
    var_304 = 72;
    pri = fun_0350(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 35;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 1;
    var_336 = 0;
    var_344 = 30;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 180;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 1;
    OP_PUSH4_C 4670365662075630387, 4670391747988999373, 4611686018427387904, -7800673974562670051
    var_384 = 72;
    pri = fun_0350(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 0;
    var_400 = 1;
    var_408 = -4374024216485124166;
    var_416 = 24;
    pri = fun_15C0(var_408, var_400, var_392)
    var_424 = 1;
    var_432 = 8;
    pri = fun_0060(var_424)
    var_440 = -4374024216485124166;
    var_448 = 8;
    pri = fun_0568(var_440)
    var_456 = 30;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 8802641224559852288;
    var_480 = 8;
    pri = fun_03C8(var_472)
    var_488 = -7800673974562670051;
    var_496 = 8;
    pri = fun_03C8(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C 4201065695642433883, -4374024216485124166
    var_544 = 56;
    pri = fun_12F8(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 1;
    var_560 = 8;
    pri = fun_1440(var_552)
    var_568 = 0;
    pri = fun_1500()
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 879;
    pri = SoundPlayPokeVoice(var_600, var_592, var_584, var_576)
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 100;
    var_640 = -1;
    OP_PUSH2_C -7640396119413874393, -2634777529138130236
    var_648 = 56;
    pri = fun_12F8(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_1440(var_656)
    var_672 = 0;
    pri = fun_1500()
    var_680 = 0;
    var_688 = 4631361119299462758;
    var_696 = 0;
    OP_PUSH5_C 4670122702991240724, 4660657584631321723, 4670370772055920476, 4670112422557521019, 4660645028208532521
    var_704 = 4670369592829699686;
    var_712 = 1;
    pri = EvCameraMove(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 0;
    pri = fun_1530()
    var_728 = 0;
    var_736 = 4631361119299462758;
    var_744 = 0;
    OP_PUSH5_C 4670136798730308813, 4660674802983412695, 4670372388338013307, 4670126523794147246, 4660662246560623493
    var_752 = 4670371209111792517;
    var_760 = 200;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 30;
    var_776 = 8;
    pri = fun_0060(var_768)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C 4201066795154062094, -4374024216485124166
    var_824 = 56;
    pri = fun_12F8(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 8;
    pri = fun_1440(var_832)
    var_848 = 0;
    pri = fun_1500()
    OP_PUSH2_C 4624633867356078080, 4631445561792475955
    var_856 = 0;
    OP_PUSH5_C 4669900073876848640, 4660589964666213499, 4670408053746439291, 4669889375628710380, 4660581344495051735
    var_864 = 4670407388541904486;
    var_872 = 1;
    pri = EvCameraMove(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 0;
    pri = fun_1530()
    OP_PUSH2_C 4624633867356078080, 4631445561792475955
    var_888 = 3;
    OP_PUSH5_C 4669803767653371740, 4660512361135525069, 4670402055910509773, 4669793069405233480, 4660503740964363305
    var_896 = 4670401390705974968;
    var_904 = 5;
    pri = EvCameraMove(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_912 = 10;
    var_920 = 8;
    pri = fun_0060(var_912)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    OP_PUSH2_C 4201067894665690305, -4374024216485124166
    var_968 = 56;
    pri = fun_12F8(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_1440(var_976)
    var_992 = 0;
    pri = fun_1500()
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 879;
    pri = SoundPlayPokeVoice(var_1024, var_1016, var_1008, var_1000)
    var_1032 = 30;
    var_1040 = 8;
    pri = fun_0060(var_1032)
    var_1048 = 1736;
    pri = SoundPostEvent(var_1048)
    var_1056 = 1;
    var_1064 = 0;
    var_1072 = 1480;
    var_1080 = 8;
    var_1088 = 32;
    pri = fun_0198(var_1080, var_1072, var_1064, var_1056)
    var_1096 = 0;
    pri = fun_0208()
    var_1104 = 3;
    var_1112 = 1;
    pri = EvCameraEnd(var_1112, var_1104)
    pri = 0;
    return pri;
}
// fun_2AB8
fun_2AB8() {
    pri = 0;
    return pri;
}
// fun_2AD0
fun_2AD0() {
    var_8 = 1070;
    var_16 = 8;
    pri = fun_1D58(var_8)
    pri = 0;
    return pri;
}
// fun_2B08
fun_2B08() {
    OP_PUSH2_C -7800673974562670051, 5743255901352726738
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -4374024216485124166, -5982672765610609012
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1688;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_2BE0
fun_2BE0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1EF0()
    var_16 = 0;
    pri = fun_1F48()
    var_24 = 0;
    pri = fun_1F60()
    var_32 = 0;
    pri = fun_1F78()
    var_40 = 0;
    pri = fun_2AB8()
    var_48 = 0;
    pri = fun_2AD0()
    var_56 = 0;
    pri = fun_2B08()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2CD0
fun_2CD0() {
    var_8 = 0;
    pri = fun_1F48()
    var_16 = 0;
    pri = fun_2AD0()
    pri = 0;
    return pri;
}
