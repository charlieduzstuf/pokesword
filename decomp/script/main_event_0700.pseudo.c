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
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B8(var_8)
    OP_JZER lab_0618
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09E8(var_24)
    OP_JNZ lab_0618
    pri = 0;
    return pri;
// lab_0618
    OP_JUMP lab_0628
// lab_0628
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0688
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0628
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07C8
// lab_07C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B8(var_8)
    OP_JNZ lab_0850
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0840
    pri = 0;
    return pri;
// lab_0850
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    pri = 0;
    return pri;
// lab_08F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C8
    pri = 0;
    return pri;
// lab_0840
    OP_JUMP lab_0898
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    OP_JUMP lab_0A30
// lab_0A30
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0AC0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0AB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0740(var_8)
    pri = 0;
    return pri;
// lab_0AC0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B50
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0B40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0740(var_8)
    pri = 0;
    return pri;
// lab_0B50
    pri = 0;
    return pri;
// lab_0B40
    OP_JUMP lab_0B60
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A30
    pri = 0;
    return pri;
// lab_0AB0
    OP_JUMP lab_0B60
}
// fun_0BA0
fun_0BA0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0740(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A18(var_40)
    pri = 0;
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0C60
fun_0C60() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
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
// switch_12D8
        case default:
        {
// switch_12D8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1320
// lab_1320
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
            OP_JNZ lab_13C8
            var_88 = 0;
            pri = fun_1580()
// lab_13C8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_12D8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0EC0
                case default:
                {
// switch_0EC0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F38
// lab_0F38
                    OP_JUMP lab_1320
                }
                case 0x0:
                {
// switch_0EC0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F38
                }
                case 0x1:
                {
// switch_0EC0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F38
                }
                case 0x2:
                {
// switch_0EC0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F38
                }
                case 0x3:
                {
// switch_0EC0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F38
                }
                case 0x4:
                {
// switch_0EC0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F38
                }
                case 0x5:
                {
// switch_0EC0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F38
                }
            }
        }
        case 0x65:
        {
// switch_12D8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1078
                case default:
                {
// switch_1078_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_10F0
// lab_10F0
                    OP_JUMP lab_1320
                }
                case 0x0:
                {
// switch_1078_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_10F0
                }
                case 0x1:
                {
// switch_1078_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_10F0
                }
                case 0x2:
                {
// switch_1078_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_10F0
                }
                case 0x3:
                {
// switch_1078_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_10F0
                }
                case 0x4:
                {
// switch_1078_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_10F0
                }
                case 0x5:
                {
// switch_1078_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_10F0
                }
            }
        }
        case 0x66:
        {
// switch_12D8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1230
                case default:
                {
// switch_1230_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12A8
// lab_12A8
                    OP_JUMP lab_1320
                }
                case 0x0:
                {
// switch_1230_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_12A8
                }
                case 0x1:
                {
// switch_1230_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_12A8
                }
                case 0x2:
                {
// switch_1230_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_12A8
                }
                case 0x3:
                {
// switch_1230_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12A8
                }
                case 0x4:
                {
// switch_1230_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_12A8
                }
                case 0x5:
                {
// switch_1230_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_12A8
                }
            }
        }
    }
}
// fun_13E0
fun_13E0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0708(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1488
    pri = 1;
    return pri;
// lab_1488
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_14D0
fun_14D0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1520
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E0(var_8)
    arg_2 = pri;
// lab_1520
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0CC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    OP_JUMP lab_1598
// lab_1598
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15D8
    pri = 0;
    return pri;
// lab_15D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1598
    pri = 0;
    return pri;
}
// fun_1618
fun_1618() {
    var_8 = 0;
    pri = fun_1580()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_16C8
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_16C8
    pri = 0;
    return pri;
}
// fun_16D8
fun_16D8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
    OP_JUMP lab_1720
// lab_1720
    pri = EvCameraMoveWait_()
    OP_JZER lab_1758
    pri = 0;
    return pri;
// lab_1758
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1720
    pri = 0;
    return pri;
}
// fun_1798
fun_1798() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_19A8(var_16, var_8)
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
    OP_JZER lab_1990
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_1990
    pri = 0;
    return pri;
}
// fun_19A8
fun_19A8() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_06C8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1A78
// lab_1A78
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1BF8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1BE8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1B38
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1B38
    pri = 0;
    OP_JUMP lab_1B40
// lab_1BF8
    pri = 0;
    return pri;
// lab_1BE8
    OP_JUMP lab_1A70
// lab_1A70
    OP_INC_P_S -936
// lab_1B38
    pri = 1;
// lab_1B40
    OP_JZER lab_1BB8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1BB0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1BB8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1BB0
}
// fun_1C18
fun_1C18() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1CB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0C60()
// lab_1CB0
    pri = arg_4;
    OP_JZER lab_1CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C88(var_8)
// lab_1CE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1D40
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1D40
    pri = 0;
    OP_JUMP lab_1D48
// lab_1D40
    pri = 1;
// lab_1D48
    OP_JZER lab_1E10
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1E10
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1DE8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0BA0(var_32, var_24)
    OP_JUMP lab_1E10
// lab_1E10
    pri = arg_2;
    OP_JZER lab_1EE8
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1EB8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0978(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04F0(var_40)
    OP_JUMP lab_1EE8
// lab_1EE8
    pri = arg_3;
    OP_JZER lab_1F20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C28(var_8)
// lab_1F20
    pri = 0;
    return pri;
// lab_1EB8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0978(var_16, var_8)
// lab_1DE8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0BA0(var_16, var_8)
}
// fun_1F30
fun_1F30() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19F0(var_24)
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    pri = g_mode;
    switch (pri) {
// switch_2058
        case default:
        {
// switch_2058_case_default
            pri = CommandNOP()
            OP_JUMP lab_20A0
// lab_20A0
            pri = 0;
            return pri;
        }
        case 0xaf4c4c22159b2ccf:
        {
// switch_2058_case_0xaf4c4c22159b2ccf
            var_8 = 0;
            pri = fun_2880()
            OP_JUMP lab_20A0
        }
        case 0x0:
        {
// switch_2058_case_0x0
            var_8 = 0;
            pri = fun_20B0()
            OP_JUMP lab_20A0
        }
        case 0x4b5aaa1e6350f92b:
        {
// switch_2058_case_0x4b5aaa1e6350f92b
            var_8 = 0;
            pri = fun_2970()
            OP_JUMP lab_20A0
        }
    }
}
// fun_20B0
fun_20B0() {
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1C18(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
    pri = 0;
    return pri;
}
// fun_2138
fun_2138() {
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4597049319638433792, 4666786999117335757, 4664780555323388723, 8802641224559852288
    var_24 = 48;
    pri = fun_0498(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 2;
    pri = SetCascadeShadowMapLevel(var_48)
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4666819247793378427, 4636383336571422638, 4664896718726863258, 4667009914104751063, 4643050423238535414
    var_80 = 4664393813103434793;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_1708()
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 2;
    OP_PUSH5_C 4666834437546516152, 4636336893200265380, 4664919500607790776, 4667025103857888788, 4643021572053422572
    var_128 = 4664416496028315812;
    var_136 = 240;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 1528;
    var_152 = 8;
    var_160 = 16;
    pri = fun_0138(var_152, var_144)
    var_168 = 0;
    pri = fun_0208()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C -958928451408443712, -1823449519866571522
    var_216 = 56;
    pri = fun_14D0(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1618(var_224)
    var_240 = 0;
    var_248 = 3;
    var_256 = -1823449519866571522;
    var_264 = 24;
    pri = fun_1798(var_256, var_248, var_240)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -958925152873559079, -1823449519866571522
    var_312 = 56;
    pri = fun_14D0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1618(var_320)
    var_336 = 0;
    var_344 = 0;
    var_352 = -1823449519866571522;
    var_360 = 24;
    pri = fun_1798(var_352, var_344, var_336)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -958926252385187290, -1823449519866571522
    var_408 = 56;
    pri = fun_14D0(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1618(var_416)
    var_432 = 0;
    pri = fun_16D8()
    var_440 = 1;
    pri = SetCascadeShadowMapLevel(var_440)
    var_448 = 1;
    var_456 = 0;
    var_464 = 100;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 0;
    OP_PUSH4_C 4667141536641712128, 4664881490490818560, 4611686018427387904, -1823449519866571522
    var_504 = 72;
    pri = fun_0528(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = -1823449519866571522;
    var_520 = 8;
    pri = fun_05A0(var_512)
    var_528 = 3;
    var_536 = 30;
    pri = EvCameraEnd(var_536, var_528)
    pri = 0;
    return pri;
}
// fun_2670
fun_2670() {
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    var_8 = -1823449519866571522;
    var_16 = 8;
    pri = fun_0440(var_8)
    var_24 = 710;
    var_32 = 8;
    pri = fun_1F30(var_24)
    var_40 = 4337981634622023336;
    var_48 = 8;
    pri = fun_02C0(var_40)
    var_56 = 4337976137063882281;
    var_64 = 8;
    pri = fun_02C0(var_56)
    var_72 = 20;
    var_80 = -8018767981987652408;
    pri = WorkSet(var_80, var_72)
    var_88 = -5750634935458327434;
    var_96 = 8;
    pri = fun_0440(var_88)
    var_104 = -5750633835946699223;
    var_112 = 8;
    pri = fun_0440(var_104)
    var_120 = 3307058085393826287;
    pri = VanishFlagReset(var_120)
    var_128 = 3307059184905454498;
    pri = VanishFlagReset(var_128)
    var_136 = -5073213501761350575;
    pri = FlagSet(var_136)
    pri = 0;
    return pri;
}
// fun_2830
fun_2830() {
    var_8 = 0;
    pri = fun_02F0()
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    pri = 0;
    return pri;
}
// fun_2880
fun_2880() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_20C8()
    var_16 = 0;
    pri = fun_2120()
    var_24 = 0;
    pri = fun_2138()
    var_32 = 0;
    pri = fun_2150()
    var_40 = 0;
    pri = fun_2670()
    var_48 = 0;
    pri = fun_2688()
    var_56 = 0;
    pri = fun_2830()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2970
fun_2970() {
    var_8 = 0;
    pri = fun_2120()
    var_16 = 0;
    pri = fun_2688()
    pri = 0;
    return pri;
}
