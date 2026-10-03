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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A08(var_8)
    OP_JZER lab_0668
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A38(var_24)
    OP_JNZ lab_0668
    pri = 0;
    return pri;
// lab_0668
    OP_JUMP lab_0678
// lab_0678
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06D8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
    pri = 0;
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07D8
    pri = 0;
    return pri;
// lab_07D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0818
// lab_0818
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A08(var_8)
    OP_JNZ lab_08A0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0890
    pri = 0;
    return pri;
// lab_08A0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0948
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0990(var_8)
    pri = 0;
    return pri;
// lab_0948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0818
    pri = 0;
    return pri;
// lab_0890
    OP_JUMP lab_08E8
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    OP_JUMP lab_0A80
// lab_0A80
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0B10
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0B00
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    pri = 0;
    return pri;
// lab_0B10
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BA0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0B90
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    pri = 0;
    return pri;
// lab_0BA0
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BB0
// lab_0BB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
// lab_0B00
    OP_JUMP lab_0BB0
}
// fun_0BF0
fun_0BF0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A68(var_40)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
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
// switch_1328
        case default:
        {
// switch_1328_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1370
// lab_1370
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
            OP_JNZ lab_1418
            var_88 = 0;
            pri = fun_15D0()
// lab_1418
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1328_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F10
                case default:
                {
// switch_0F10_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F88
// lab_0F88
                    OP_JUMP lab_1370
                }
                case 0x0:
                {
// switch_0F10_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F88
                }
                case 0x1:
                {
// switch_0F10_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F88
                }
                case 0x2:
                {
// switch_0F10_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F88
                }
                case 0x3:
                {
// switch_0F10_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F88
                }
                case 0x4:
                {
// switch_0F10_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F88
                }
                case 0x5:
                {
// switch_0F10_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F88
                }
            }
        }
        case 0x65:
        {
// switch_1328_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_10C8
                case default:
                {
// switch_10C8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1140
// lab_1140
                    OP_JUMP lab_1370
                }
                case 0x0:
                {
// switch_10C8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1140
                }
                case 0x1:
                {
// switch_10C8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1140
                }
                case 0x2:
                {
// switch_10C8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1140
                }
                case 0x3:
                {
// switch_10C8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1140
                }
                case 0x4:
                {
// switch_10C8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1140
                }
                case 0x5:
                {
// switch_10C8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1140
                }
            }
        }
        case 0x66:
        {
// switch_1328_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1280
                case default:
                {
// switch_1280_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12F8
// lab_12F8
                    OP_JUMP lab_1370
                }
                case 0x0:
                {
// switch_1280_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_12F8
                }
                case 0x1:
                {
// switch_1280_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_12F8
                }
                case 0x2:
                {
// switch_1280_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_12F8
                }
                case 0x3:
                {
// switch_1280_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12F8
                }
                case 0x4:
                {
// switch_1280_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_12F8
                }
                case 0x5:
                {
// switch_1280_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_12F8
                }
            }
        }
    }
}
// fun_1430
fun_1430() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0758(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_14D8
    pri = 1;
    return pri;
// lab_14D8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1520
fun_1520() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1570
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1430(var_8)
    arg_2 = pri;
// lab_1570
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15D0
fun_15D0() {
    OP_JUMP lab_15E8
// lab_15E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1628
    pri = 0;
    return pri;
// lab_1628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15E8
    pri = 0;
    return pri;
}
// fun_1668
fun_1668() {
    var_8 = 0;
    pri = fun_15D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1718
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1718
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1758
fun_1758() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1788
// lab_1788
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17C8
    OP_JUMP lab_17F8
// lab_17C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1788
// lab_17F8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
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
// fun_18B0
fun_18B0() {
    OP_JUMP lab_18C8
// lab_18C8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1900
    pri = 0;
    return pri;
// lab_1900
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18C8
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1B50(var_16, var_8)
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
    OP_JZER lab_1B38
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_1B38
    pri = 0;
    return pri;
}
// fun_1B50
fun_1B50() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0718(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B98
fun_1B98() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1C20
// lab_1C20
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1DA0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1D90
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1CE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1CE0
    pri = 0;
    OP_JUMP lab_1CE8
// lab_1DA0
    pri = 0;
    return pri;
// lab_1D90
    OP_JUMP lab_1C18
// lab_1C18
    OP_INC_P_S -936
// lab_1CE0
    pri = 1;
// lab_1CE8
    OP_JZER lab_1D60
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1D58
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1D60
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1D58
}
// fun_1DC0
fun_1DC0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1E58
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0CB0()
// lab_1E58
    pri = arg_4;
    OP_JZER lab_1E90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0CD8(var_8)
// lab_1E90
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1EE8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1EE8
    pri = 0;
    OP_JUMP lab_1EF0
// lab_1EE8
    pri = 1;
// lab_1EF0
    OP_JZER lab_1FB8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1FB8
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1F90
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0BF0(var_32, var_24)
    OP_JUMP lab_1FB8
// lab_1FB8
    pri = arg_2;
    OP_JZER lab_2090
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_2060
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_09C8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04F0(var_40)
    OP_JUMP lab_2090
// lab_2090
    pri = arg_3;
    OP_JZER lab_20C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C78(var_8)
// lab_20C8
    pri = 0;
    return pri;
// lab_2060
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_09C8(var_16, var_8)
// lab_1F90
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0BF0(var_16, var_8)
}
// fun_20D8
fun_20D8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1B98(var_24)
    pri = 0;
    return pri;
}
// fun_2140
fun_2140() {
    pri = g_mode;
    switch (pri) {
// switch_2200
        case default:
        {
// switch_2200_case_default
            pri = CommandNOP()
            OP_JUMP lab_2248
// lab_2248
            pri = 0;
            return pri;
        }
        case 0xbd20b91ea4169132:
        {
// switch_2200_case_0xbd20b91ea4169132
            var_8 = 0;
            pri = fun_31C0()
            OP_JUMP lab_2248
        }
        case 0x0:
        {
// switch_2200_case_0x0
            var_8 = 0;
            pri = fun_2258()
            OP_JUMP lab_2248
        }
        case 0x4fb21321df5d4c7e:
        {
// switch_2200_case_0x4fb21321df5d4c7e
            var_8 = 0;
            pri = fun_30D0()
            OP_JUMP lab_2248
        }
    }
}
// fun_2258
fun_2258() {
    pri = 0;
    return pri;
}
// fun_2270
fun_2270() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1DC0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    pri = 0;
    return pri;
}
// fun_22E0
fun_22E0() {
    pri = 0;
    return pri;
}
// fun_22F8
fun_22F8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 0;
    OP_PUSH5_C 4667996231010447524, 4628498518786315387, 4670524189662123131, 4668367255711682396, 4638770596217649889
    var_48 = 4670619096757053686;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_18B0()
    var_72 = 1528;
    pri = SoundPostEvent(var_72)
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 4635949161419846451, 7099240262869383700
    var_104 = 40;
    pri = fun_05A0(var_96, var_88, var_80, var_72, var_64)
    var_112 = 7099240262869383700;
    var_120 = 8;
    pri = fun_05F0(var_112)
    var_128 = 0;
    var_136 = 4631952216750555136;
    var_144 = 3;
    OP_PUSH5_C 4667970826794287759, -4600933674317040845, 4670552141996480266, 4668387761603540419, 4636997655708093645
    var_152 = 4670658888082862899;
    var_160 = 20;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 1;
    var_176 = 1;
    OP_PUSH4_C -4587528428551195853, 4668278651567158067, 4670718110527913984, 8802641224559852288
    var_184 = 48;
    pri = fun_0498(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH4_C 4668278651567158067, 4670653789097689088, 4607182418800017408, 8802641224559852288
    var_232 = 72;
    pri = fun_0528(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_05F0(var_240)
    var_256 = 0;
    pri = fun_18B0()
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C -3297010611142006472, 7099240262869383700
    var_304 = 56;
    pri = fun_1520(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1668(var_312)
    var_328 = 0;
    pri = fun_1728()
    var_336 = 0;
    var_344 = 3;
    var_352 = 7099240262869383700;
    var_360 = 24;
    pri = fun_1940(var_352, var_344, var_336)
    var_368 = 1;
    var_376 = 8;
    pri = fun_0060(var_368)
    var_384 = 7099240262869383700;
    var_392 = 8;
    pri = fun_0790(var_384)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    OP_PUSH2_C -3297007312607121839, 7099240262869383700
    var_456 = 56;
    pri = fun_1520(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 1;
    var_472 = 8;
    pri = fun_1668(var_464)
    var_480 = 0;
    pri = fun_1728()
    var_488 = -1;
    var_496 = 7099240262869383700;
    var_504 = 16;
    pri = fun_09C8(var_496, var_488)
    var_512 = 40;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C -3297008412118750050, 7099240262869383700
    var_568 = 56;
    pri = fun_1520(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_1668(var_576)
    var_592 = 0;
    var_600 = 7960847813736629905;
    var_608 = 0;
    var_616 = 24;
    pri = fun_1758(var_608, var_600, var_592)
    var_624 = 0;
    var_632 = 7960844515201745272;
    var_640 = 1;
    var_648 = 24;
    pri = fun_1758(var_640, var_632, var_624)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 1;
    var_696 = 32;
    pri = fun_1840(var_688, var_680, var_672, var_664)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_2BA8
        case default:
        {
// switch_2BA8_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 7099240262869383700;
            var_32 = 24;
            pri = fun_1940(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = 7099240262869383700;
            var_64 = 8;
            pri = fun_0790(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C -3297002914560608995, 7099240262869383700
            var_112 = 56;
            pri = fun_1520(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1668(var_120)
            var_136 = 0;
            pri = fun_1728()
            var_144 = 0;
            var_152 = 0;
            var_160 = 7099240262869383700;
            var_168 = 24;
            pri = fun_1940(var_160, var_152, var_144)
            var_176 = 20;
            var_184 = 8;
            pri = fun_0060(var_176)
            var_192 = 0;
            var_200 = 3;
            var_208 = 0;
            var_216 = 100;
            var_224 = -1;
            OP_PUSH2_C -3297004014072237206, 7099240262869383700
            var_232 = 56;
            pri = fun_1520(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
            var_240 = 1;
            var_248 = 8;
            pri = fun_1668(var_240)
            var_256 = 0;
            pri = fun_1728()
            var_264 = 1;
            var_272 = 0;
            var_280 = 50;
            pri = float(var_280)
            var_288 = pri;
            var_296 = 0;
            var_304 = 0;
            var_312 = 12859;
            pri = float(var_312)
            var_320 = pri;
            var_328 = 16400;
            pri = float(var_328)
            var_336 = pri;
            OP_PUSH2_C 4611686018427387904, 7099240262869383700
            var_344 = 72;
            pri = fun_0528(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
            var_352 = 60;
            var_360 = 8;
            pri = fun_0060(var_352)
            var_368 = 1;
            var_376 = 0;
            var_384 = 1480;
            var_392 = 8;
            var_400 = 32;
            pri = fun_0198(var_392, var_384, var_376, var_368)
            var_408 = 0;
            pri = fun_0208()
            var_416 = 1688;
            pri = SoundPostEvent(var_416)
            var_424 = 3;
            var_432 = 1;
            pri = EvCameraEnd(var_432, var_424)
            var_440 = 7099240262869383700;
            var_448 = 8;
            pri = fun_05F0(var_440)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2BA8_case_0x0
            var_8 = 0;
            pri = fun_1728()
            var_16 = 0;
            var_24 = 1;
            var_32 = 7099240262869383700;
            var_40 = 24;
            pri = fun_1940(var_32, var_24, var_16)
            var_48 = 1;
            var_56 = 8;
            pri = fun_0060(var_48)
            var_64 = 7099240262869383700;
            var_72 = 8;
            pri = fun_0790(var_64)
            var_80 = 0;
            var_88 = 3;
            var_96 = 0;
            var_104 = 100;
            var_112 = -1;
            OP_PUSH2_C -3297005113583865417, 7099240262869383700
            var_120 = 56;
            pri = fun_1520(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = 1;
            var_136 = 8;
            pri = fun_1668(var_128)
            var_144 = 0;
            pri = fun_1728()
            OP_JUMP switch_2BA8_case_default
        }
        case 0x1:
        {
// switch_2BA8_case_0x1
            var_8 = 0;
            pri = fun_1728()
            var_16 = 0;
            var_24 = 1;
            var_32 = 7099240262869383700;
            var_40 = 24;
            pri = fun_1940(var_32, var_24, var_16)
            var_48 = 1;
            var_56 = 8;
            pri = fun_0060(var_48)
            var_64 = 7099240262869383700;
            var_72 = 8;
            pri = fun_0790(var_64)
            var_80 = 0;
            var_88 = 3;
            var_96 = 0;
            var_104 = 100;
            var_112 = -1;
            OP_PUSH2_C -3297006213095493628, 7099240262869383700
            var_120 = 56;
            pri = fun_1520(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = 1;
            var_136 = 8;
            pri = fun_1668(var_128)
            var_144 = 0;
            pri = fun_1728()
            OP_JUMP switch_2BA8_case_default
        }
    }
}
// fun_2F98
fun_2F98() {
    pri = 0;
    return pri;
}
// fun_2FB0
fun_2FB0() {
    var_8 = 7099240262869383700;
    var_16 = 8;
    pri = fun_0440(var_8)
    var_24 = 2298869767325498192;
    var_32 = 8;
    pri = fun_02C0(var_24)
    var_40 = 890;
    var_48 = 8;
    pri = fun_20D8(var_40)
    var_56 = -352066330549648574;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_3060
fun_3060() {
    var_8 = 0;
    pri = fun_02F0()
    var_16 = 1848;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_40 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_30D0
fun_30D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2270()
    var_16 = 0;
    pri = fun_22C8()
    var_24 = 0;
    pri = fun_22E0()
    var_32 = 0;
    pri = fun_22F8()
    var_40 = 0;
    pri = fun_2F98()
    var_48 = 0;
    pri = fun_2FB0()
    var_56 = 0;
    pri = fun_3060()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_31C0
fun_31C0() {
    var_8 = 0;
    pri = fun_22C8()
    var_16 = 0;
    pri = fun_2FB0()
    pri = 0;
    return pri;
}
