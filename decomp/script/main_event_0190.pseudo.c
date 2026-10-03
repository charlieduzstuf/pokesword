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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0328
fun_0328() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0380
fun_0380() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03D0
fun_03D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0428
fun_0428() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0840(var_8)
    OP_JZER lab_04A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0870(var_24)
    OP_JNZ lab_04A0
    pri = 0;
    return pri;
// lab_04A0
    OP_JUMP lab_04B0
// lab_04B0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0510
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0510
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B0
    pri = 0;
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0590
fun_0590() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0610
    pri = 0;
    return pri;
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0650
// lab_0650
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0840(var_8)
    OP_JNZ lab_06D8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06C8
    pri = 0;
    return pri;
// lab_06D8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0720
    pri = 0;
    return pri;
// lab_0720
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0780
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07C8(var_8)
    pri = 0;
    return pri;
// lab_0780
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0650
    pri = 0;
    return pri;
// lab_06C8
    OP_JUMP lab_0720
}
// fun_07C8
fun_07C8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    OP_JUMP lab_08B8
// lab_08B8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0948
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0938
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05C8(var_8)
    pri = 0;
    return pri;
// lab_0948
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_09C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05C8(var_8)
    pri = 0;
    return pri;
// lab_09D8
    pri = 0;
    return pri;
// lab_09C8
    OP_JUMP lab_09E8
// lab_09E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08B8
    pri = 0;
    return pri;
// lab_0938
    OP_JUMP lab_09E8
}
// fun_0A28
fun_0A28() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_08A0(var_40)
    pri = 0;
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0AE8
fun_0AE8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0B48
fun_0B48() {
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
// switch_1160
        case default:
        {
// switch_1160_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_11A8
// lab_11A8
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
            OP_JNZ lab_1250
            var_88 = 0;
            pri = fun_1408()
// lab_1250
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1160_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0D48
                case default:
                {
// switch_0D48_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0DC0
// lab_0DC0
                    OP_JUMP lab_11A8
                }
                case 0x0:
                {
// switch_0D48_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0DC0
                }
                case 0x1:
                {
// switch_0D48_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0DC0
                }
                case 0x2:
                {
// switch_0D48_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0DC0
                }
                case 0x3:
                {
// switch_0D48_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0DC0
                }
                case 0x4:
                {
// switch_0D48_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0DC0
                }
                case 0x5:
                {
// switch_0D48_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0DC0
                }
            }
        }
        case 0x65:
        {
// switch_1160_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0F00
                case default:
                {
// switch_0F00_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F78
// lab_0F78
                    OP_JUMP lab_11A8
                }
                case 0x0:
                {
// switch_0F00_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F78
                }
                case 0x1:
                {
// switch_0F00_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F78
                }
                case 0x2:
                {
// switch_0F00_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F78
                }
                case 0x3:
                {
// switch_0F00_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F78
                }
                case 0x4:
                {
// switch_0F00_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F78
                }
                case 0x5:
                {
// switch_0F00_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F78
                }
            }
        }
        case 0x66:
        {
// switch_1160_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_10B8
                case default:
                {
// switch_10B8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1130
// lab_1130
                    OP_JUMP lab_11A8
                }
                case 0x0:
                {
// switch_10B8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1130
                }
                case 0x1:
                {
// switch_10B8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1130
                }
                case 0x2:
                {
// switch_10B8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1130
                }
                case 0x3:
                {
// switch_10B8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1130
                }
                case 0x4:
                {
// switch_10B8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1130
                }
                case 0x5:
                {
// switch_10B8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1130
                }
            }
        }
    }
}
// fun_1268
fun_1268() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0590(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1310
    pri = 1;
    return pri;
// lab_1310
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1358
fun_1358() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1268(var_8)
    arg_2 = pri;
// lab_13A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1408
fun_1408() {
    OP_JUMP lab_1420
// lab_1420
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1460
    pri = 0;
    return pri;
// lab_1460
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1420
    pri = 0;
    return pri;
}
// fun_14A0
fun_14A0() {
    var_8 = 0;
    pri = fun_1408()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1550
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1550
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_17F0(var_16, var_8)
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
    OP_JZER lab_17D8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_17D8
    pri = 0;
    return pri;
}
// fun_17F0
fun_17F0() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0550(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_18C0
// lab_18C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1A40
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1A30
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1980
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1980
    pri = 0;
    OP_JUMP lab_1988
// lab_1A40
    pri = 0;
    return pri;
// lab_1A30
    OP_JUMP lab_18B8
// lab_18B8
    OP_INC_P_S -936
// lab_1980
    pri = 1;
// lab_1988
    OP_JZER lab_1A00
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_19F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1A00
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_19F8
}
// fun_1A60
fun_1A60() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_1A98
fun_1A98() {
    var_8 = 0;
    pri = fun_1A60()
    switch (pri) {
// switch_1B48
        case default:
        {
// switch_1B48_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_1B90
// lab_1B90
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_1B48_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_1B90
        }
        case 0x1:
        {
// switch_1B48_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_1B90
        }
        case 0x2:
        {
// switch_1B48_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_1B90
        }
    }
}
// fun_1BA0
fun_1BA0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1C38
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0AE8()
// lab_1C38
    pri = arg_4;
    OP_JZER lab_1C70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0B10(var_8)
// lab_1C70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1CC8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1CC8
    pri = 0;
    OP_JUMP lab_1CD0
// lab_1CC8
    pri = 1;
// lab_1CD0
    OP_JZER lab_1D98
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1D98
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1D70
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0A28(var_32, var_24)
    OP_JUMP lab_1D98
// lab_1D98
    pri = arg_2;
    OP_JZER lab_1E70
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1E40
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0800(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_02F0(var_40)
    OP_JUMP lab_1E70
// lab_1E70
    pri = arg_3;
    OP_JZER lab_1EA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0AB0(var_8)
// lab_1EA8
    pri = 0;
    return pri;
// lab_1E40
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0800(var_16, var_8)
// lab_1D70
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0A28(var_16, var_8)
}
// fun_1EB8
fun_1EB8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1838(var_24)
    pri = 0;
    return pri;
}
// fun_1F20
fun_1F20() {
    pri = g_mode;
    switch (pri) {
// switch_1FE0
        case default:
        {
// switch_1FE0_case_default
            pri = CommandNOP()
            OP_JUMP lab_2028
// lab_2028
            pri = 0;
            return pri;
        }
        case 0x9d3780220b2664f8:
        {
// switch_1FE0_case_0x9d3780220b2664f8
            var_8 = 0;
            pri = fun_2BF0()
            OP_JUMP lab_2028
        }
        case 0x0:
        {
// switch_1FE0_case_0x0
            var_8 = 0;
            pri = fun_2038()
            OP_JUMP lab_2028
        }
        case 0x7fd8161e81318c6c:
        {
// switch_1FE0_case_0x7fd8161e81318c6c
            var_8 = 0;
            pri = fun_2CE0()
            OP_JUMP lab_2028
        }
    }
}
// fun_2038
fun_2038() {
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1BA0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_32 = 813;
    var_40 = 810;
    var_48 = 816;
    var_56 = 24;
    pri = fun_1A98(var_48, var_40, var_32)
    var_8 = pri;
    var_64 = 100;
    var_72 = 3;
    OP_PUSH2_C 4608533498688228557, -970134989010580305
    var_80 = 60;
    pri = EvCameraMoveOffsetChr(var_80, var_72, var_64, var_56, var_48)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH2_C -970134989010580305, 8802641224559852288
    var_120 = 48;
    pri = fun_03D0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    OP_PUSH2_C 8802641224559852288, -970134989010580305
    var_160 = 48;
    pri = fun_03D0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 8802641224559852288;
    var_176 = 8;
    pri = fun_0428(var_168)
    var_184 = -970134989010580305;
    var_192 = 8;
    pri = fun_0428(var_184)
    var_200 = 0;
    var_208 = 3;
    var_216 = -970134989010580305;
    var_224 = 24;
    pri = fun_15E0(var_216, var_208, var_200)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -3904959986448664820, -970134989010580305
    var_272 = 56;
    pri = fun_1358(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_14A0(var_280)
    var_296 = 0;
    pri = fun_1560()
    var_304 = var_8;
    var_312 = 1;
    var_320 = 16;
    pri = fun_1590(var_312, var_304)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C -3904958886937036609, -970134989010580305
    var_368 = 56;
    pri = fun_1358(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_14A0(var_376)
    var_392 = 0;
    pri = fun_1560()
    var_400 = 0;
    var_408 = 0;
    var_416 = -970134989010580305;
    var_424 = 24;
    pri = fun_15E0(var_416, var_408, var_400)
    var_432 = 1;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = -970134989010580305;
    var_456 = 8;
    pri = fun_05C8(var_448)
    var_464 = 0;
    var_472 = 4626913814667434394;
    var_480 = 3;
    OP_PUSH5_C 4677065532056314839, 4650767675451569603, 4672006224133981471, 4677163649725198500, 4651826637090513224
    var_488 = 4671927595308700140;
    var_496 = 60;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    var_512 = 0;
    var_520 = 0;
    var_528 = 160;
    pri = float(var_528)
    var_536 = pri;
    var_544 = -970134989010580305;
    var_552 = 40;
    pri = fun_0380(var_544, var_536, var_528, var_520, var_512)
    var_560 = 0;
    var_568 = 3;
    var_576 = 0;
    var_584 = 100;
    var_592 = -1;
    OP_PUSH2_C -3904962185471921242, -970134989010580305
    var_600 = 56;
    pri = fun_1358(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = 1;
    var_616 = 8;
    pri = fun_14A0(var_608)
    var_624 = 0;
    pri = fun_1560()
    var_632 = 0;
    var_640 = 4631952216750555136;
    var_648 = 3;
    OP_PUSH5_C 4677068065056227328, 4649500422329860096, 4671984060728344576, 4677166997738105078, 4652101339075596780
    var_656 = 4671969486701718405;
    var_664 = 60;
    pri = EvCameraMove(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = -970134989010580305;
    var_680 = 8;
    pri = fun_0428(var_672)
    var_688 = 1;
    var_696 = 0;
    var_704 = 0;
    var_712 = 45;
    OP_PUSH2_C 4611686018427387904, -970134989010580305
    var_720 = 48;
    pri = fun_0328(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 30;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 1;
    var_752 = 0;
    var_760 = 1480;
    var_768 = 8;
    var_776 = 32;
    pri = fun_0198(var_768, var_760, var_752, var_744)
    var_784 = 0;
    pri = fun_0208()
    var_792 = -970134989010580305;
    var_800 = 8;
    pri = fun_0428(var_792)
    var_808 = 3;
    var_816 = 0;
    pri = EvCameraEnd(var_816, var_808)
    pri = 0;
    return pri;
}
// fun_27D8
fun_27D8() {
    pri = 0;
    return pri;
}
// fun_27F0
fun_27F0() {
    var_8 = -970134989010580305;
    var_16 = 8;
    pri = fun_02C0(var_8)
    var_24 = 200;
    var_32 = 8;
    pri = fun_1EB8(var_24)
    var_40 = 10;
    var_48 = -4564380327603473089;
    pri = WorkSet(var_48, var_40)
    var_56 = 1838443220896465507;
    pri = VanishFlagReset(var_56)
    var_64 = -8040610231773951744;
    pri = VanishFlagReset(var_64)
    var_72 = -3674018664616446908;
    pri = VanishFlagReset(var_72)
    var_80 = 119772388837235790;
    pri = VanishFlagReset(var_80)
    var_88 = 2312218129280921210;
    pri = VanishFlagReset(var_88)
    var_96 = -8654315183630985365;
    pri = VanishFlagReset(var_96)
    var_104 = 440998338954051805;
    pri = VanishFlagReset(var_104)
    var_112 = 2206624492151242658;
    pri = VanishFlagReset(var_112)
    var_120 = 440986244326141484;
    pri = VanishFlagReset(var_120)
    var_128 = -4504228236179943877;
    pri = VanishFlagReset(var_128)
    var_136 = -317160502977836181;
    pri = VanishFlagReset(var_136)
    var_144 = 6256141132606737718;
    pri = VanishFlagReset(var_144)
    var_152 = 2481285362137015056;
    pri = VanishFlagReset(var_152)
    var_160 = 2481297456764925377;
    pri = VanishFlagReset(var_160)
    var_168 = -8389920027382669047;
    pri = VanishFlagReset(var_168)
    var_176 = -4640419951713714794;
    pri = VanishFlagReset(var_176)
    var_184 = -4640418852202086583;
    pri = VanishFlagReset(var_184)
    var_192 = -4640422150736971216;
    pri = VanishFlagReset(var_192)
    var_200 = -4640421051225343005;
    pri = VanishFlagReset(var_200)
    pri = 0;
    return pri;
}
// fun_2B78
fun_2B78() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1528;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_2BF0
fun_2BF0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2050()
    var_16 = 0;
    pri = fun_20A8()
    var_24 = 0;
    pri = fun_20C0()
    var_32 = 0;
    pri = fun_20D8()
    var_40 = 0;
    pri = fun_27D8()
    var_48 = 0;
    pri = fun_27F0()
    var_56 = 0;
    pri = fun_2B78()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2CE0
fun_2CE0() {
    var_8 = 0;
    pri = fun_20A8()
    var_16 = 0;
    pri = fun_27F0()
    pri = 0;
    return pri;
}
