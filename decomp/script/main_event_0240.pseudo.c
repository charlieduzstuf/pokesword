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
// fun_03A0
fun_03A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03F8
fun_03F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0810(var_8)
    OP_JZER lab_0470
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0840(var_24)
    OP_JNZ lab_0470
    pri = 0;
    return pri;
// lab_0470
    OP_JUMP lab_0480
// lab_0480
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
    pri = 0;
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_05E0
    pri = 0;
    return pri;
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0620
// lab_0620
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0810(var_8)
    OP_JNZ lab_06A8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0698
    pri = 0;
    return pri;
// lab_06A8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_06F0
    pri = 0;
    return pri;
// lab_06F0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0750
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0798(var_8)
    pri = 0;
    return pri;
// lab_0750
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0620
    pri = 0;
    return pri;
// lab_0698
    OP_JUMP lab_06F0
}
// fun_0798
fun_0798() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0870
fun_0870() {
    OP_JUMP lab_0888
// lab_0888
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0918
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0908
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0598(var_8)
    pri = 0;
    return pri;
// lab_0918
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0998
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0598(var_8)
    pri = 0;
    return pri;
// lab_09A8
    pri = 0;
    return pri;
// lab_0998
    OP_JUMP lab_09B8
// lab_09B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0888
    pri = 0;
    return pri;
// lab_0908
    OP_JUMP lab_09B8
}
// fun_09F8
fun_09F8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0598(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0870(var_40)
    pri = 0;
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0AB8
fun_0AB8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
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
// switch_1130
        case default:
        {
// switch_1130_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1178
// lab_1178
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
            OP_JNZ lab_1220
            var_88 = 0;
            pri = fun_13D8()
// lab_1220
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1130_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0D18
                case default:
                {
// switch_0D18_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D90
// lab_0D90
                    OP_JUMP lab_1178
                }
                case 0x0:
                {
// switch_0D18_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0D90
                }
                case 0x1:
                {
// switch_0D18_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0D90
                }
                case 0x2:
                {
// switch_0D18_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0D90
                }
                case 0x3:
                {
// switch_0D18_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0D90
                }
                case 0x4:
                {
// switch_0D18_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0D90
                }
                case 0x5:
                {
// switch_0D18_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0D90
                }
            }
        }
        case 0x65:
        {
// switch_1130_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0ED0
                case default:
                {
// switch_0ED0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F48
// lab_0F48
                    OP_JUMP lab_1178
                }
                case 0x0:
                {
// switch_0ED0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0F48
                }
                case 0x1:
                {
// switch_0ED0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0F48
                }
                case 0x2:
                {
// switch_0ED0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0F48
                }
                case 0x3:
                {
// switch_0ED0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0F48
                }
                case 0x4:
                {
// switch_0ED0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0F48
                }
                case 0x5:
                {
// switch_0ED0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0F48
                }
            }
        }
        case 0x66:
        {
// switch_1130_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1088
                case default:
                {
// switch_1088_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1100
// lab_1100
                    OP_JUMP lab_1178
                }
                case 0x0:
                {
// switch_1088_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1100
                }
                case 0x1:
                {
// switch_1088_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1100
                }
                case 0x2:
                {
// switch_1088_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1100
                }
                case 0x3:
                {
// switch_1088_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1100
                }
                case 0x4:
                {
// switch_1088_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1100
                }
                case 0x5:
                {
// switch_1088_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1100
                }
            }
        }
    }
}
// fun_1238
fun_1238() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0560(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_12E0
    pri = 1;
    return pri;
// lab_12E0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1328
fun_1328() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1378
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1238(var_8)
    arg_2 = pri;
// lab_1378
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0B18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    OP_JUMP lab_13F0
// lab_13F0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1430
    pri = 0;
    return pri;
// lab_1430
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13F0
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = 0;
    pri = fun_13D8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1520
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1520
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1590
// lab_1590
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15D0
    OP_JUMP lab_1600
// lab_15D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1590
// lab_1600
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
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
// fun_16B8
fun_16B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_18C8(var_16, var_8)
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
    OP_JZER lab_18B0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_18B0
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0520(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1910
fun_1910() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1998
// lab_1998
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1B18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1B08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1A58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1A58
    pri = 0;
    OP_JUMP lab_1A60
// lab_1B18
    pri = 0;
    return pri;
// lab_1B08
    OP_JUMP lab_1990
// lab_1990
    OP_INC_P_S -936
// lab_1A58
    pri = 1;
// lab_1A60
    OP_JZER lab_1AD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1AD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1AD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1AD0
}
// fun_1B38
fun_1B38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1BD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0AB8()
// lab_1BD0
    pri = arg_4;
    OP_JZER lab_1C08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0AE0(var_8)
// lab_1C08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1C60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1C60
    pri = 0;
    OP_JUMP lab_1C68
// lab_1C60
    pri = 1;
// lab_1C68
    OP_JZER lab_1D30
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1D30
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1D08
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_09F8(var_32, var_24)
    OP_JUMP lab_1D30
// lab_1D30
    pri = arg_2;
    OP_JZER lab_1E08
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1DD8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_07D0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_02F0(var_40)
    OP_JUMP lab_1E08
// lab_1E08
    pri = arg_3;
    OP_JZER lab_1E40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A80(var_8)
// lab_1E40
    pri = 0;
    return pri;
// lab_1DD8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07D0(var_16, var_8)
// lab_1D08
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_09F8(var_16, var_8)
}
// fun_1E50
fun_1E50() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1910(var_24)
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    pri = g_mode;
    switch (pri) {
// switch_1F78
        case default:
        {
// switch_1F78_case_default
            pri = CommandNOP()
            OP_JUMP lab_1FC0
// lab_1FC0
            pri = 0;
            return pri;
        }
        case 0x840a7d21fd1ec01c:
        {
// switch_1F78_case_0x840a7d21fd1ec01c
            var_8 = 0;
            pri = fun_28C0()
            OP_JUMP lab_1FC0
        }
        case 0x0:
        {
// switch_1F78_case_0x0
            var_8 = 0;
            pri = fun_1FD0()
            OP_JUMP lab_1FC0
        }
        case 0x668fa31e73126188:
        {
// switch_1F78_case_0x668fa31e73126188
            var_8 = 0;
            pri = fun_29B0()
            OP_JUMP lab_1FC0
        }
    }
}
// fun_1FD0
fun_1FD0() {
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1B38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2040
fun_2040() {
    pri = 0;
    return pri;
}
// fun_2058
fun_2058() {
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 60;
    var_32 = 3;
    OP_PUSH2_C 4607182418800017408, -34089364971008208
    var_40 = 60;
    pri = EvCameraMoveOffsetChr(var_40, var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C -34089364971008208, 8802641224559852288
    var_80 = 48;
    pri = fun_03A0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH2_C 8802641224559852288, -34089364971008208
    var_120 = 48;
    pri = fun_03A0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1528;
    pri = SoundPostEvent(var_128)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C 7075519903512994077, -34089364971008208
    var_176 = 56;
    pri = fun_1328(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1470(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_03F8(var_200)
    var_216 = -34089364971008208;
    var_224 = 8;
    pri = fun_03F8(var_216)
    var_232 = 0;
    var_240 = 3927592019943556411;
    var_248 = 0;
    var_256 = 24;
    pri = fun_1560(var_248, var_240, var_232)
    var_264 = 0;
    var_272 = 3927593119455184622;
    var_280 = 1;
    var_288 = 24;
    pri = fun_1560(var_280, var_272, var_264)
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 1;
    var_328 = 32;
    pri = fun_1648(var_320, var_312, var_304, var_296)
    var_336 = 0;
    var_344 = 2;
    var_352 = -34089364971008208;
    var_360 = 24;
    pri = fun_16B8(var_352, var_344, var_336)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C 7075516604978109444, -34089364971008208
    var_408 = 56;
    pri = fun_1328(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1470(var_416)
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    OP_PUSH2_C 7075517704489737655, -34089364971008208
    var_472 = 56;
    pri = fun_1328(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1470(var_480)
    var_496 = -34089364971008208;
    var_504 = 8;
    pri = fun_0598(var_496)
    var_512 = 0;
    var_520 = 0;
    var_528 = -34089364971008208;
    var_536 = 24;
    pri = fun_16B8(var_528, var_520, var_512)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C 7075514405954853022, -34089364971008208
    var_584 = 56;
    pri = fun_1328(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_1470(var_592)
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 100;
    var_640 = -1;
    OP_PUSH2_C 7075515505466481233, -34089364971008208
    var_648 = 56;
    pri = fun_1328(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_1470(var_656)
    var_672 = 0;
    pri = fun_1530()
    var_680 = 8802641224559852288;
    var_688 = 8;
    pri = fun_03F8(var_680)
    var_696 = -34089364971008208;
    var_704 = 8;
    pri = fun_03F8(var_696)
    var_712 = 1;
    var_720 = 0;
    var_728 = 4636737291354636288;
    var_736 = 0;
    var_744 = 0;
    var_752 = 37855;
    pri = float(var_752)
    var_760 = pri;
    var_768 = 24774;
    pri = float(var_768)
    var_776 = pri;
    OP_PUSH2_C 4611686018427387904, -34089364971008208
    var_784 = 72;
    pri = fun_0328(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_792 = 40;
    var_800 = 8;
    pri = fun_0060(var_792)
    var_808 = 1;
    var_816 = 0;
    var_824 = 1480;
    var_832 = 8;
    var_840 = 32;
    pri = fun_0198(var_832, var_824, var_816, var_808)
    var_848 = 0;
    pri = fun_0208()
    var_856 = 1688;
    pri = SoundPostEvent(var_856)
    var_864 = -34089364971008208;
    var_872 = 8;
    pri = fun_03F8(var_864)
    var_880 = 3;
    var_888 = 0;
    pri = EvCameraEnd(var_888, var_880)
    pri = 0;
    return pri;
}
// fun_27A8
fun_27A8() {
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    var_8 = -34089364971008208;
    var_16 = 8;
    pri = fun_02C0(var_8)
    var_24 = 250;
    var_32 = 8;
    pri = fun_1E50(var_24)
    var_40 = -542322190474721943;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_2848
fun_2848() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1848;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_28C0
fun_28C0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1FE8()
    var_16 = 0;
    pri = fun_2040()
    var_24 = 0;
    pri = fun_2058()
    var_32 = 0;
    pri = fun_2070()
    var_40 = 0;
    pri = fun_27A8()
    var_48 = 0;
    pri = fun_27C0()
    var_56 = 0;
    pri = fun_2848()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_29B0
fun_29B0() {
    var_8 = 0;
    pri = fun_2040()
    var_16 = 0;
    pri = fun_27C0()
    pri = 0;
    return pri;
}
