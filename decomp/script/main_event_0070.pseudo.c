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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_03C8
fun_03C8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0410
    pri = 0;
    return pri;
// lab_0410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0640(var_8)
    OP_JNZ lab_04D8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_04C8
    pri = 0;
    return pri;
// lab_04D8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0520
    pri = 0;
    return pri;
// lab_0520
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0580
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05C8(var_8)
    pri = 0;
    return pri;
// lab_0580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
    pri = 0;
    return pri;
// lab_04C8
    OP_JUMP lab_0520
}
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0670
fun_0670() {
    OP_JUMP lab_0688
// lab_0688
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0718
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0708
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_03C8(var_8)
    pri = 0;
    return pri;
// lab_0718
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0798
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_03C8(var_8)
    pri = 0;
    return pri;
// lab_07A8
    pri = 0;
    return pri;
// lab_0798
    OP_JUMP lab_07B8
// lab_07B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0688
    pri = 0;
    return pri;
// lab_0708
    OP_JUMP lab_07B8
}
// fun_07F8
fun_07F8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_03C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0670(var_40)
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_08B8
fun_08B8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0918
fun_0918() {
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
// switch_0F30
        case default:
        {
// switch_0F30_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0F78
// lab_0F78
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
            OP_JNZ lab_1020
            var_88 = 0;
            pri = fun_11D8()
// lab_1020
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0F30_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0B18
                case default:
                {
// switch_0B18_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B90
// lab_0B90
                    OP_JUMP lab_0F78
                }
                case 0x0:
                {
// switch_0B18_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0B90
                }
                case 0x1:
                {
// switch_0B18_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0B90
                }
                case 0x2:
                {
// switch_0B18_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0B90
                }
                case 0x3:
                {
// switch_0B18_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B90
                }
                case 0x4:
                {
// switch_0B18_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0B90
                }
                case 0x5:
                {
// switch_0B18_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0B90
                }
            }
        }
        case 0x65:
        {
// switch_0F30_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0CD0
                case default:
                {
// switch_0CD0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D48
// lab_0D48
                    OP_JUMP lab_0F78
                }
                case 0x0:
                {
// switch_0CD0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0D48
                }
                case 0x1:
                {
// switch_0CD0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0D48
                }
                case 0x2:
                {
// switch_0CD0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0D48
                }
                case 0x3:
                {
// switch_0CD0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D48
                }
                case 0x4:
                {
// switch_0CD0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0D48
                }
                case 0x5:
                {
// switch_0CD0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0D48
                }
            }
        }
        case 0x66:
        {
// switch_0F30_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0E88
                case default:
                {
// switch_0E88_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0F00
// lab_0F00
                    OP_JUMP lab_0F78
                }
                case 0x0:
                {
// switch_0E88_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0F00
                }
                case 0x1:
                {
// switch_0E88_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0F00
                }
                case 0x2:
                {
// switch_0E88_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0F00
                }
                case 0x3:
                {
// switch_0E88_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0F00
                }
                case 0x4:
                {
// switch_0E88_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0F00
                }
                case 0x5:
                {
// switch_0E88_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0F00
                }
            }
        }
    }
}
// fun_1038
fun_1038() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0390(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_10E0
    pri = 1;
    return pri;
// lab_10E0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1128
fun_1128() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1178
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1038(var_8)
    arg_2 = pri;
// lab_1178
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0918(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    OP_JUMP lab_11F0
// lab_11F0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1230
    pri = 0;
    return pri;
// lab_1230
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11F0
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = 0;
    pri = fun_11D8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1320
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1320
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1360
fun_1360() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    OP_JUMP lab_13E0
// lab_13E0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1418
    pri = 0;
    return pri;
// lab_1418
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13E0
    pri = 0;
    return pri;
}
// fun_1458
fun_1458() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_14C0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1598()
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_14C0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1598()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    OP_JUMP lab_15B0
// lab_15B0
    pri = IsEasingRunningDof_()
    OP_JZER lab_1608
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1618
// lab_1608
    pri = 0;
    return pri;
// lab_1618
    OP_JUMP lab_15B0
    pri = 0;
    return pri;
}
// fun_1638
fun_1638() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1848(var_16, var_8)
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
    OP_JZER lab_1830
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_1830
    pri = 0;
    return pri;
}
// fun_1848
fun_1848() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0350(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1918
// lab_1918
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1A98
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1A88
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_19D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_19D8
    pri = 0;
    OP_JUMP lab_19E0
// lab_1A98
    pri = 0;
    return pri;
// lab_1A88
    OP_JUMP lab_1910
// lab_1910
    OP_INC_P_S -936
// lab_19D8
    pri = 1;
// lab_19E0
    OP_JZER lab_1A58
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1A50
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1A58
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1A50
}
// fun_1AB8
fun_1AB8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1B50
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_08B8()
// lab_1B50
    pri = arg_4;
    OP_JZER lab_1B88
    var_8 = 1;
    var_16 = 8;
    pri = fun_08E0(var_8)
// lab_1B88
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1BE0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1BE0
    pri = 0;
    OP_JUMP lab_1BE8
// lab_1BE0
    pri = 1;
// lab_1BE8
    OP_JZER lab_1CB0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1CB0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1C88
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_07F8(var_32, var_24)
    OP_JUMP lab_1CB0
// lab_1CB0
    pri = arg_2;
    OP_JZER lab_1D88
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1D58
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0600(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0318(var_40)
    OP_JUMP lab_1D88
// lab_1D88
    pri = arg_3;
    OP_JZER lab_1DC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0880(var_8)
// lab_1DC0
    pri = 0;
    return pri;
// lab_1D58
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0600(var_16, var_8)
// lab_1C88
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_07F8(var_16, var_8)
}
// fun_1DD0
fun_1DD0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1890(var_24)
    pri = 0;
    return pri;
}
// fun_1E38
fun_1E38() {
    pri = g_mode;
    switch (pri) {
// switch_1EF8
        case default:
        {
// switch_1EF8_case_default
            pri = CommandNOP()
            OP_JUMP lab_1F40
// lab_1F40
            pri = 0;
            return pri;
        }
        case 0x94655d22061bf6c1:
        {
// switch_1EF8_case_0x94655d22061bf6c1
            var_8 = 0;
            pri = fun_26D8()
            OP_JUMP lab_1F40
        }
        case 0x0:
        {
// switch_1EF8_case_0x0
            var_8 = 0;
            pri = fun_1F50()
            OP_JUMP lab_1F40
        }
        case 0x76b4031e7be12f3d:
        {
// switch_1EF8_case_0x76b4031e7be12f3d
            var_8 = 0;
            pri = fun_27C8()
            OP_JUMP lab_1F40
        }
    }
}
// fun_1F50
fun_1F50() {
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1AB8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
    pri = 0;
    return pri;
}
// fun_1FF0
fun_1FF0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4677459628634669056, 4672282578135285760, 8802641224559852288
    var_24 = 48;
    pri = fun_02C0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4583362598895878144, 4677460728146296832, 4672314738850398208, -1655053127185566619
    var_48 = 48;
    pri = fun_02C0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -9223372036854775808, 4677440662059089920, 4672297421542260736, -2409953949732425464
    var_72 = 48;
    pri = fun_02C0(var_64, var_56, var_48, var_40, var_32, var_24)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_80 = 16;
    pri = fun_1458(var_72, var_64)
    var_88 = 0;
    var_96 = 1;
    var_104 = 500;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 4609434218613702656;
    var_128 = 32;
    pri = fun_14C0(var_120, var_112, var_104, var_96)
    var_136 = 0;
    var_144 = 4630826316843712512;
    var_152 = -1;
    OP_PUSH5_C 4677439847046095831, 4655942372996069458, 4672253806664765932, 4677505698171872870, 4655770849182136402
    var_160 = 4672108497956818125;
    var_168 = 1;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_13C8()
    var_184 = 1528;
    var_192 = 8;
    var_200 = 16;
    pri = fun_0138(var_192, var_184)
    var_208 = 0;
    pri = fun_0208()
    var_216 = 0;
    var_224 = 4630502620620495258;
    var_232 = 3;
    OP_PUSH5_C 4677445979572199752, 4651472770268229796, 4672298155466272276, 4677510868625302487, 4652307431535107113
    var_240 = 4672212368820294124;
    var_248 = 150;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 90;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C 7369686504477266406, -1655053127185566619
    var_312 = 56;
    pri = fun_1128(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    pri = fun_13C8()
    var_328 = 1;
    var_336 = 8;
    pri = fun_1270(var_328)
    var_344 = 0;
    pri = fun_1330()
    var_352 = 0;
    var_360 = 4628630812025369395;
    var_368 = 3;
    OP_PUSH5_C 4677445700571124204, 4651586151907286057, 4672298518305109443, 4677510590998616474, 4652364078374170132
    var_376 = 4672212731659131290;
    var_384 = 180;
    pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 0;
    var_400 = 2;
    var_408 = -2409953949732425464;
    var_416 = 24;
    pri = fun_1638(var_408, var_400, var_392)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C -5154059673207150338, -2409953949732425464
    var_464 = 56;
    pri = fun_1128(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1270(var_472)
    var_488 = 0;
    pri = fun_1330()
    var_496 = 1;
    var_504 = 0;
    var_512 = 1480;
    var_520 = 8;
    var_528 = 32;
    pri = fun_0198(var_520, var_512, var_504, var_496)
    var_536 = 0;
    pri = fun_0208()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_544 = 3;
    var_552 = 1;
    var_560 = 32;
    pri = fun_1518(var_552, var_544, var_536, var_528)
    var_568 = 3;
    var_576 = 0;
    pri = EvCameraEnd(var_576, var_568)
    var_584 = 0;
    var_592 = 0;
    var_600 = -2409953949732425464;
    var_608 = 24;
    pri = fun_1638(var_600, var_592, var_584)
    var_616 = 0;
    var_624 = 1;
    var_632 = 1;
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 1576;
    var_672 = 56;
    pri = fun_1360(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    pri = 0;
    return pri;
}
// fun_2660
fun_2660() {
    var_8 = 80;
    var_16 = 8;
    pri = fun_1DD0(var_8)
    pri = 0;
    return pri;
}
// fun_2698
fun_2698() {
    var_8 = 5351741984222020462;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_26D8
fun_26D8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1F68()
    var_16 = 0;
    pri = fun_1FC0()
    var_24 = 0;
    pri = fun_1FD8()
    var_32 = 0;
    pri = fun_1FF0()
    var_40 = 0;
    pri = fun_2648()
    var_48 = 0;
    pri = fun_2660()
    var_56 = 0;
    pri = fun_2698()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_27C8
fun_27C8() {
    var_8 = 0;
    pri = fun_1FC0()
    var_16 = 0;
    pri = fun_2660()
    pri = 0;
    return pri;
}
