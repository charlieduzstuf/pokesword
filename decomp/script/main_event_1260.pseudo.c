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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03A0
fun_03A0() {
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
// fun_04C0
fun_04C0() {
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
// fun_05E0
fun_05E0() {
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
// fun_0700
fun_0700() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0738
fun_0738() {
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
// fun_07B0
fun_07B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C20(var_8)
    OP_JZER lab_0880
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C50(var_24)
    OP_JNZ lab_0880
    pri = 0;
    return pri;
// lab_0880
    OP_JUMP lab_0890
// lab_0890
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08F0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0890
    pri = 0;
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09F0
    pri = 0;
    return pri;
// lab_09F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A30
// lab_0A30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C20(var_8)
    OP_JNZ lab_0AB8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AA8
    pri = 0;
    return pri;
// lab_0AB8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B00
    pri = 0;
    return pri;
// lab_0B00
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA8(var_8)
    pri = 0;
    return pri;
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A30
    pri = 0;
    return pri;
// lab_0AA8
    OP_JUMP lab_0B00
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C20
fun_0C20() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    OP_JUMP lab_0C98
// lab_0C98
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D28
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0D18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_0D28
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DB8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0DA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_0DB8
    pri = 0;
    return pri;
// lab_0DA8
    OP_JUMP lab_0DC8
// lab_0DC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C98
    pri = 0;
    return pri;
// lab_0D18
    OP_JUMP lab_0DC8
}
// fun_0E08
fun_0E08() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0C80(var_40)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0EF0
fun_0EF0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0F28
fun_0F28() {
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
// switch_1540
        case default:
        {
// switch_1540_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1588
// lab_1588
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
            OP_JNZ lab_1630
            var_88 = 0;
            pri = fun_17E8()
// lab_1630
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1540_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1128
                case default:
                {
// switch_1128_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11A0
// lab_11A0
                    OP_JUMP lab_1588
                }
                case 0x0:
                {
// switch_1128_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_11A0
                }
                case 0x1:
                {
// switch_1128_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_11A0
                }
                case 0x2:
                {
// switch_1128_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_11A0
                }
                case 0x3:
                {
// switch_1128_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11A0
                }
                case 0x4:
                {
// switch_1128_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_11A0
                }
                case 0x5:
                {
// switch_1128_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_11A0
                }
            }
        }
        case 0x65:
        {
// switch_1540_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_12E0
                case default:
                {
// switch_12E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1358
// lab_1358
                    OP_JUMP lab_1588
                }
                case 0x0:
                {
// switch_12E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1358
                }
                case 0x1:
                {
// switch_12E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1358
                }
                case 0x2:
                {
// switch_12E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1358
                }
                case 0x3:
                {
// switch_12E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1358
                }
                case 0x4:
                {
// switch_12E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1358
                }
                case 0x5:
                {
// switch_12E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1358
                }
            }
        }
        case 0x66:
        {
// switch_1540_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1498
                case default:
                {
// switch_1498_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1510
// lab_1510
                    OP_JUMP lab_1588
                }
                case 0x0:
                {
// switch_1498_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1510
                }
                case 0x1:
                {
// switch_1498_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1510
                }
                case 0x2:
                {
// switch_1498_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1510
                }
                case 0x3:
                {
// switch_1498_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1510
                }
                case 0x4:
                {
// switch_1498_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1510
                }
                case 0x5:
                {
// switch_1498_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1510
                }
            }
        }
    }
}
// fun_1648
fun_1648() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0970(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_16F0
    pri = 1;
    return pri;
// lab_16F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1738
fun_1738() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1788
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1648(var_8)
    arg_2 = pri;
// lab_1788
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17E8
fun_17E8() {
    OP_JUMP lab_1800
// lab_1800
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1840
    pri = 0;
    return pri;
// lab_1840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1800
    pri = 0;
    return pri;
}
// fun_1880
fun_1880() {
    var_8 = 0;
    pri = fun_17E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1930
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1930
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1970
fun_1970() {
    OP_JUMP lab_1988
// lab_1988
    pri = EvCameraMoveWait_()
    OP_JZER lab_19C0
    pri = 0;
    return pri;
// lab_19C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1988
    pri = 0;
    return pri;
}
// fun_1A00
fun_1A00() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_03A0(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_04C0(var_72, var_64, var_56)
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
    pri = fun_05E0(var_136, var_128, var_120)
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
// fun_1B60
fun_1B60() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1D70(var_16, var_8)
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
    OP_JZER lab_1D58
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_1D58
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0930(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DB8
fun_1DB8() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1E40
// lab_1E40
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1FC0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1FB0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1F00
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1F00
    pri = 0;
    OP_JUMP lab_1F08
// lab_1FC0
    pri = 0;
    return pri;
// lab_1FB0
    OP_JUMP lab_1E38
// lab_1E38
    OP_INC_P_S -936
// lab_1F00
    pri = 1;
// lab_1F08
    OP_JZER lab_1F80
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1F78
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1F80
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1F78
}
// fun_1FE0
fun_1FE0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_2078
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_0EC8()
// lab_2078
    pri = arg_4;
    OP_JZER lab_20B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0EF0(var_8)
// lab_20B0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2108
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2108
    pri = 0;
    OP_JUMP lab_2110
// lab_2108
    pri = 1;
// lab_2110
    OP_JZER lab_21D8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_21D8
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_21B0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0E08(var_32, var_24)
    OP_JUMP lab_21D8
// lab_21D8
    pri = arg_2;
    OP_JZER lab_22B0
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_2280
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0BE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0700(var_40)
    OP_JUMP lab_22B0
// lab_22B0
    pri = arg_3;
    OP_JZER lab_22E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0E90(var_8)
// lab_22E8
    pri = 0;
    return pri;
// lab_2280
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0BE0(var_16, var_8)
// lab_21B0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0E08(var_16, var_8)
}
// fun_22F8
fun_22F8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1DB8(var_24)
    pri = 0;
    return pri;
}
// fun_2360
fun_2360() {
    pri = g_mode;
    switch (pri) {
// switch_2420
        case default:
        {
// switch_2420_case_default
            pri = CommandNOP()
            OP_JUMP lab_2468
// lab_2468
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2420_case_0x0
            var_8 = 0;
            pri = fun_2478()
            OP_JUMP lab_2468
        }
        case 0x3da83727794c39df:
        {
// switch_2420_case_0x3da83727794c39df
            var_8 = 0;
            pri = fun_2EC8()
            OP_JUMP lab_2468
        }
        case 0x5b59112b038627e3:
        {
// switch_2420_case_0x5b59112b038627e3
            var_8 = 0;
            pri = fun_2DD8()
            OP_JUMP lab_2468
        }
    }
}
// fun_2478
fun_2478() {
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1FE0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
    pri = 0;
    return pri;
}
// fun_2500
fun_2500() {
    pri = 0;
    return pri;
}
// fun_2518
fun_2518() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 160;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 6781;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 5874;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 2162984971204676483;
    var_80 = 48;
    pri = fun_0348(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_00B8(var_88)
    var_104 = 1528;
    pri = SoundPostEvent(var_104)
    var_112 = 110;
    var_120 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, 2162984971204676483, 8802641224559852288
    var_128 = 1;
    var_136 = 56;
    pri = fun_1A00(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    pri = fun_1970()
    var_152 = 1688;
    var_160 = 8;
    var_168 = 16;
    pri = fun_0190(var_160, var_152)
    var_176 = 0;
    pri = fun_0260()
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH2_C 2162984971204676483, 8802641224559852288
    var_216 = 48;
    pri = fun_07B0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH2_C 8802641224559852288, 2162984971204676483
    var_256 = 48;
    pri = fun_07B0(var_248, var_240, var_232, var_224, var_216, var_208)
    var_264 = 8802641224559852288;
    var_272 = 8;
    pri = fun_0808(var_264)
    var_280 = 2162984971204676483;
    var_288 = 8;
    pri = fun_0808(var_280)
    var_296 = 0;
    pri = fun_1970()
    var_304 = 0;
    var_312 = 1;
    var_320 = 2162984971204676483;
    var_328 = 24;
    pri = fun_1B60(var_320, var_312, var_304)
    var_336 = 1;
    var_344 = 8;
    pri = fun_00B8(var_336)
    var_352 = 2162984971204676483;
    var_360 = 8;
    pri = fun_09A8(var_352)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -3637907403503457092, 2162984971204676483
    var_408 = 56;
    pri = fun_1738(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1880(var_416)
    var_432 = 0;
    pri = fun_1940()
    var_440 = 0;
    var_448 = 2;
    var_456 = 2162984971204676483;
    var_464 = 24;
    pri = fun_1B60(var_456, var_448, var_440)
    var_472 = 1;
    var_480 = 8;
    pri = fun_00B8(var_472)
    var_488 = 2162984971204676483;
    var_496 = 8;
    pri = fun_09A8(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C -3637904104968572459, 2162984971204676483
    var_544 = 56;
    pri = fun_1738(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 1;
    var_560 = 8;
    pri = fun_1880(var_552)
    var_568 = 0;
    pri = fun_1940()
    var_576 = 0;
    var_584 = 0;
    var_592 = 2162984971204676483;
    var_600 = 24;
    pri = fun_1B60(var_592, var_584, var_576)
    var_608 = 1;
    var_616 = 8;
    pri = fun_00B8(var_608)
    var_624 = 2162984971204676483;
    var_632 = 8;
    pri = fun_09A8(var_624)
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C -3637905204480200670, 2162984971204676483
    var_680 = 56;
    pri = fun_1738(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1880(var_688)
    var_704 = 0;
    pri = fun_1940()
    var_712 = 1;
    var_720 = 0;
    var_728 = 30;
    pri = float(var_728)
    var_736 = pri;
    var_744 = 0;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 0;
    OP_PUSH4_C 4664553836025741312, 4662983733421277184, 4607182418800017408, 2162984971204676483
    var_768 = 72;
    pri = fun_0738(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 10;
    var_784 = 8;
    pri = fun_00B8(var_776)
    var_792 = 0;
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH2_C 2162984971204676483, 8802641224559852288
    var_824 = 48;
    pri = fun_07B0(var_816, var_808, var_800, var_792, var_784, var_776)
    var_832 = 2162984971204676483;
    var_840 = 8;
    pri = fun_0808(var_832)
    var_848 = 8802641224559852288;
    var_856 = 8;
    pri = fun_0808(var_848)
    var_864 = 1736;
    pri = SoundPostEvent(var_864)
    var_872 = 3;
    var_880 = 30;
    pri = EvCameraEnd(var_880, var_872)
    pri = 0;
    return pri;
}
// fun_2CD0
fun_2CD0() {
    pri = 0;
    return pri;
}
// fun_2CE8
fun_2CE8() {
    var_8 = 2162984971204676483;
    var_16 = 8;
    pri = fun_0318(var_8)
    var_24 = 1270;
    var_32 = 8;
    pri = fun_22F8(var_24)
    var_40 = -1517632578076027777;
    pri = VanishFlagReset(var_40)
    var_48 = 8567564428947440771;
    pri = VanishFlagReset(var_48)
    var_56 = -1406219775710395451;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_2DC0
fun_2DC0() {
    pri = 0;
    return pri;
}
// fun_2DD8
fun_2DD8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2490()
    var_16 = 0;
    pri = fun_24E8()
    var_24 = 0;
    pri = fun_2500()
    var_32 = 0;
    pri = fun_2518()
    var_40 = 0;
    pri = fun_2CD0()
    var_48 = 0;
    pri = fun_2CE8()
    var_56 = 0;
    pri = fun_2DC0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2EC8
fun_2EC8() {
    var_8 = 0;
    pri = fun_24E8()
    var_16 = 0;
    pri = fun_2CE8()
    pri = 0;
    return pri;
}
