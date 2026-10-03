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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0380
// lab_0380
    var_8 = 0;
    pri = fun_04C8()
    OP_JNZ lab_03B8
    OP_JUMP lab_03E8
// lab_03B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0380
// lab_03E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0418
// lab_0418
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0458
    pri = 0;
    return pri;
// lab_0458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0418
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0548
fun_0548() {
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
// fun_0668
fun_0668() {
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
// fun_0788
fun_0788() {
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
// fun_08A8
fun_08A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0958
fun_0958() {
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
// fun_09D0
fun_09D0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E90(var_8)
    OP_JZER lab_0AF0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EC0(var_24)
    OP_JNZ lab_0AF0
    pri = 0;
    return pri;
// lab_0AF0
    OP_JUMP lab_0B00
// lab_0B00
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B60
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B00
    pri = 0;
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C60
    pri = 0;
    return pri;
// lab_0C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CA0
// lab_0CA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E90(var_8)
    OP_JNZ lab_0D28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D18
    pri = 0;
    return pri;
// lab_0D28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D70
    pri = 0;
    return pri;
// lab_0D70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E18(var_8)
    pri = 0;
    return pri;
// lab_0DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CA0
    pri = 0;
    return pri;
// lab_0D18
    OP_JUMP lab_0D70
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EC0
fun_0EC0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EF0
fun_0EF0() {
    OP_JUMP lab_0F08
// lab_0F08
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F98
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C18(var_8)
    pri = 0;
    return pri;
// lab_0F98
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1028
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1018
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C18(var_8)
    pri = 0;
    return pri;
// lab_1028
    pri = 0;
    return pri;
// lab_1018
    OP_JUMP lab_1038
// lab_1038
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F08
    pri = 0;
    return pri;
// lab_0F88
    OP_JUMP lab_1038
}
// fun_1078
fun_1078() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EF0(var_40)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
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
// switch_17B0
        case default:
        {
// switch_17B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17F8
// lab_17F8
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
            OP_JNZ lab_18A0
            var_88 = 0;
            pri = fun_1A58()
// lab_18A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1398
                case default:
                {
// switch_1398_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1410
// lab_1410
                    OP_JUMP lab_17F8
                }
                case 0x0:
                {
// switch_1398_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1410
                }
                case 0x1:
                {
// switch_1398_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1410
                }
                case 0x2:
                {
// switch_1398_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1410
                }
                case 0x3:
                {
// switch_1398_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1410
                }
                case 0x4:
                {
// switch_1398_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1410
                }
                case 0x5:
                {
// switch_1398_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1410
                }
            }
        }
        case 0x65:
        {
// switch_17B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1550
                case default:
                {
// switch_1550_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C8
// lab_15C8
                    OP_JUMP lab_17F8
                }
                case 0x0:
                {
// switch_1550_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15C8
                }
                case 0x1:
                {
// switch_1550_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15C8
                }
                case 0x2:
                {
// switch_1550_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15C8
                }
                case 0x3:
                {
// switch_1550_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15C8
                }
                case 0x4:
                {
// switch_1550_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15C8
                }
                case 0x5:
                {
// switch_1550_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15C8
                }
            }
        }
        case 0x66:
        {
// switch_17B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1708
                case default:
                {
// switch_1708_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1780
// lab_1780
                    OP_JUMP lab_17F8
                }
                case 0x0:
                {
// switch_1708_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1780
                }
                case 0x1:
                {
// switch_1708_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1780
                }
                case 0x2:
                {
// switch_1708_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1780
                }
                case 0x3:
                {
// switch_1708_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1780
                }
                case 0x4:
                {
// switch_1708_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1780
                }
                case 0x5:
                {
// switch_1708_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1780
                }
            }
        }
    }
}
// fun_18B8
fun_18B8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BE0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1960
    pri = 1;
    return pri;
// lab_1960
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19A8
fun_19A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18B8(var_8)
    arg_2 = pri;
// lab_19F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1198(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A58
fun_1A58() {
    OP_JUMP lab_1A70
// lab_1A70
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AB0
    pri = 0;
    return pri;
// lab_1AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A70
    pri = 0;
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = 0;
    pri = fun_1A58()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1BA0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1BA0
    pri = 0;
    return pri;
}
// fun_1BB0
fun_1BB0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1C10
// lab_1C10
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C50
    OP_JUMP lab_1C80
// lab_1C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C10
// lab_1C80
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CC8
fun_1CC8() {
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
// fun_1D38
fun_1D38() {
    OP_JUMP lab_1D50
// lab_1D50
    pri = EvCameraMoveWait_()
    OP_JZER lab_1D88
    pri = 0;
    return pri;
// lab_1D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D50
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0548(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0668(var_72, var_64, var_56)
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
    pri = fun_0788(var_136, var_128, var_120)
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
// fun_1F28
fun_1F28() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_2138(var_16, var_8)
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
    OP_JZER lab_2120
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_2120
    pri = 0;
    return pri;
}
// fun_2138
fun_2138() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0BA0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_2208
// lab_2208
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_2388
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_2378
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_22C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_22C8
    pri = 0;
    OP_JUMP lab_22D0
// lab_2388
    pri = 0;
    return pri;
// lab_2378
    OP_JUMP lab_2200
// lab_2200
    OP_INC_P_S -936
// lab_22C8
    pri = 1;
// lab_22D0
    OP_JZER lab_2348
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_2340
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_2348
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_2340
}
// fun_23A8
fun_23A8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_2440
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_1138()
// lab_2440
    pri = arg_4;
    OP_JZER lab_2478
    var_8 = 1;
    var_16 = 8;
    pri = fun_1160(var_8)
// lab_2478
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_24D0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_24D0
    pri = 0;
    OP_JUMP lab_24D8
// lab_24D0
    pri = 1;
// lab_24D8
    OP_JZER lab_25A0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_25A0
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_2578
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1078(var_32, var_24)
    OP_JUMP lab_25A0
// lab_25A0
    pri = arg_2;
    OP_JZER lab_2678
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_2648
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E50(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0920(var_40)
    OP_JUMP lab_2678
// lab_2678
    pri = arg_3;
    OP_JZER lab_26B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1100(var_8)
// lab_26B0
    pri = 0;
    return pri;
// lab_2648
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E50(var_16, var_8)
// lab_2578
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1078(var_16, var_8)
}
// fun_26C0
fun_26C0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_2180(var_24)
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    pri = g_mode;
    switch (pri) {
// switch_27E8
        case default:
        {
// switch_27E8_case_default
            pri = CommandNOP()
            OP_JUMP lab_2830
// lab_2830
            pri = 0;
            return pri;
        }
        case 0xb865ec221ae27210:
        {
// switch_27E8_case_0xb865ec221ae27210
            var_8 = 0;
            pri = fun_3C00()
            OP_JUMP lab_2830
        }
        case 0x0:
        {
// switch_27E8_case_0x0
            var_8 = 0;
            pri = fun_2840()
            OP_JUMP lab_2830
        }
        case 0x54744a1e68983e6c:
        {
// switch_27E8_case_0x54744a1e68983e6c
            var_8 = 0;
            pri = fun_3CF0()
            OP_JUMP lab_2830
        }
    }
}
// fun_2840
fun_2840() {
    pri = 0;
    return pri;
}
// fun_2858
fun_2858() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_23A8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28B0
fun_28B0() {
    pri = 0;
    return pri;
}
// fun_28C8
fun_28C8() {
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -6270886897370188264, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_1DC8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C -6270886897370188264, 8802641224559852288
    var_88 = 48;
    pri = fun_0A20(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, -6270886897370188264
    var_128 = 48;
    pri = fun_0A20(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0A78(var_136)
    var_152 = -6270886897370188264;
    var_160 = 8;
    pri = fun_0A78(var_152)
    var_168 = 0;
    pri = fun_1D38()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C -8993240711724855071, -6270886897370188264
    var_216 = 56;
    pri = fun_19A8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1AF0(var_224)
    var_240 = 0;
    var_248 = -3273532609429479925;
    var_256 = 0;
    var_264 = 24;
    pri = fun_1BE0(var_256, var_248, var_240)
    var_272 = 0;
    var_280 = -3273531509917851714;
    var_288 = 1;
    var_296 = 24;
    pri = fun_1BE0(var_288, var_280, var_272)
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 1;
    var_344 = 32;
    pri = fun_1CC8(var_336, var_328, var_320, var_312)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_2D08
        case default:
        {
// switch_2D08_case_default
            var_8 = 1;
            var_16 = 0;
            var_24 = 4641240890982006784;
            var_32 = 0;
            var_40 = 0;
            OP_PUSH4_C 4670568109654094643, 4674349797434458112, 4607182418800017408, -6270886897370188264
            var_48 = 72;
            pri = fun_0958(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
            var_56 = 40;
            var_64 = 8;
            pri = fun_00B8(var_56)
            var_72 = 1;
            var_80 = 0;
            var_88 = 4641240890982006784;
            var_96 = 0;
            var_104 = 0;
            OP_PUSH4_C 4670568109654094643, 4674293722341441536, 4607182418800017408, 8802641224559852288
            var_112 = 72;
            pri = fun_0958(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_120 = 0;
            var_128 = 4631952216750555136;
            var_136 = 3;
            OP_PUSH5_C 4670579453865314222, 4648488871632306176, 4674320817056729006, 4670732541618028544, 4649003706956896010
            var_144 = 4674320817056729006;
            var_152 = 160;
            pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_160 = -6270886897370188264;
            var_168 = 8;
            pri = fun_0A78(var_160)
            var_176 = 0;
            var_184 = 0;
            var_192 = 0;
            var_200 = 180;
            pri = float(var_200)
            var_208 = pri;
            var_216 = -6270886897370188264;
            var_224 = 40;
            pri = fun_09D0(var_216, var_208, var_200, var_192, var_184)
            var_232 = 0;
            pri = fun_1D38()
            var_240 = 8802641224559852288;
            var_248 = 8;
            pri = fun_0A78(var_240)
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            var_280 = 180;
            pri = float(var_280)
            var_288 = pri;
            var_296 = 8802641224559852288;
            var_304 = 40;
            pri = fun_09D0(var_296, var_288, var_280, var_272, var_264)
            var_312 = -6270886897370188264;
            var_320 = 8;
            pri = fun_0A78(var_312)
            var_328 = 8802641224559852288;
            var_336 = 8;
            pri = fun_0A78(var_328)
            var_344 = 0;
            var_352 = 4631952216750555136;
            var_360 = 3;
            OP_PUSH5_C 4670488953063231980, 4649027632329916416, 4674320817056729006, 4670640350316818596, 4648141074114208072
            var_368 = 4674320817056729006;
            var_376 = 20;
            pri = EvCameraMove(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
            var_384 = 0;
            pri = fun_1D38()
            var_392 = 0;
            var_400 = 1;
            var_408 = -6270886897370188264;
            var_416 = 24;
            pri = fun_1F28(var_408, var_400, var_392)
            var_424 = 1;
            var_432 = 8;
            pri = fun_00B8(var_424)
            var_440 = -6270886897370188264;
            var_448 = 8;
            pri = fun_0C18(var_440)
            var_456 = 0;
            var_464 = 3;
            var_472 = 0;
            var_480 = 100;
            var_488 = -1;
            OP_PUSH2_C -8993237413189970438, -6270886897370188264
            var_496 = 56;
            pri = fun_19A8(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
            var_504 = 1;
            var_512 = 8;
            pri = fun_1AF0(var_504)
            var_520 = 0;
            pri = fun_1BB0()
            var_528 = 15;
            var_536 = 8;
            pri = fun_00B8(var_528)
            var_544 = 1;
            var_552 = -6270886897370188264;
            var_560 = 16;
            pri = fun_08E0(var_552, var_544)
            var_568 = 0;
            var_576 = 4631952216750555136;
            var_584 = 0;
            OP_PUSH5_C 4669802552693023048, 4649962744979107348, 4674340512058761544, 4670110311495195689, 4649831947075867116
            var_592 = 4674341463136319570;
            var_600 = 1;
            pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
            var_608 = 1;
            var_616 = 9135368449772758881;
            var_624 = 16;
            pri = fun_08E0(var_616, var_608)
            var_632 = 0;
            pri = fun_1D38()
            var_640 = 0;
            var_648 = 4631952216750555136;
            var_656 = 3;
            OP_PUSH5_C 4669448746343879148, 4650113070208856883, 4674339426291029115, 4669459735962598769, 4650108408279555113
            var_664 = 4674339462025157018;
            var_672 = 200;
            pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
            var_680 = 15;
            var_688 = 8;
            pri = fun_00B8(var_680)
            var_696 = 0;
            var_704 = 0;
            var_712 = 0;
            var_720 = 0;
            OP_PUSH2_C -6270886897370188264, 8802641224559852288
            var_728 = 48;
            pri = fun_0A20(var_720, var_712, var_704, var_696, var_688, var_680)
            var_736 = 0;
            var_744 = 0;
            var_752 = 0;
            var_760 = 0;
            OP_PUSH2_C 8802641224559852288, -6270886897370188264
            var_768 = 48;
            pri = fun_0A20(var_760, var_752, var_744, var_736, var_728, var_720)
            var_776 = 0;
            var_784 = 2;
            var_792 = -6270886897370188264;
            var_800 = 24;
            pri = fun_1F28(var_792, var_784, var_776)
            var_808 = 1;
            var_816 = 8;
            pri = fun_00B8(var_808)
            var_824 = -6270886897370188264;
            var_832 = 8;
            pri = fun_0C18(var_824)
            var_840 = 30;
            var_848 = 8;
            pri = fun_00B8(var_840)
            var_856 = 0;
            var_864 = 3;
            var_872 = 0;
            var_880 = 100;
            var_888 = -1;
            OP_PUSH2_C -8993236313678342227, -6270886897370188264
            var_896 = 56;
            pri = fun_19A8(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
            var_904 = 1;
            var_912 = 8;
            pri = fun_1AF0(var_904)
            var_920 = 0;
            pri = fun_1BB0()
            var_928 = 50;
            var_936 = 8;
            pri = fun_00B8(var_928)
            var_944 = 0;
            pri = fun_1D38()
            var_952 = 0;
            var_960 = 4631952216750555136;
            var_968 = 3;
            OP_PUSH5_C 4670488953063231980, 4649027632329916416, 4674320817056729006, 4670640350316818596, 4648141074114208072
            var_976 = 4674320817056729006;
            var_984 = 1;
            pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
            var_992 = 0;
            var_1000 = 9135368449772758881;
            var_1008 = 16;
            pri = fun_08E0(var_1000, var_992)
            var_1016 = 8802641224559852288;
            var_1024 = 8;
            pri = fun_0A78(var_1016)
            var_1032 = -6270886897370188264;
            var_1040 = 8;
            pri = fun_0A78(var_1032)
            var_1048 = 10;
            var_1056 = 8;
            pri = fun_00B8(var_1048)
            var_1064 = 0;
            var_1072 = 3;
            var_1080 = 0;
            var_1088 = 100;
            var_1096 = -1;
            OP_PUSH2_C -8993239612213226860, -6270886897370188264
            var_1104 = 56;
            pri = fun_19A8(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
            var_1112 = 1;
            var_1120 = 8;
            pri = fun_1AF0(var_1112)
            var_1128 = 0;
            pri = fun_1BB0()
            var_1136 = 0;
            var_1144 = 0;
            var_1152 = -6270886897370188264;
            var_1160 = 24;
            pri = fun_1F28(var_1152, var_1144, var_1136)
            var_1168 = 1;
            var_1176 = 8;
            pri = fun_00B8(var_1168)
            var_1184 = -6270886897370188264;
            var_1192 = 8;
            pri = fun_0C18(var_1184)
            var_1200 = 1;
            var_1208 = 0;
            var_1216 = 4641240890982006784;
            var_1224 = 0;
            var_1232 = 0;
            OP_PUSH4_C 4670347382694818611, 4674409720818171904, 4607182418800017408, -6270886897370188264
            var_1240 = 72;
            pri = fun_0958(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
            var_1248 = 30;
            var_1256 = 8;
            pri = fun_00B8(var_1248)
            var_1264 = 0;
            var_1272 = 0;
            var_1280 = 0;
            var_1288 = 180;
            pri = float(var_1288)
            var_1296 = pri;
            var_1304 = 8802641224559852288;
            var_1312 = 40;
            pri = fun_09D0(var_1304, var_1296, var_1288, var_1280, var_1272)
            var_1320 = 8802641224559852288;
            var_1328 = 8;
            pri = fun_0A78(var_1320)
            var_1336 = 70;
            var_1344 = 8;
            pri = fun_00B8(var_1336)
            var_1352 = 1;
            var_1360 = 0;
            var_1368 = 1480;
            var_1376 = 8;
            var_1384 = 32;
            pri = fun_01F0(var_1376, var_1368, var_1360, var_1352)
            var_1392 = 0;
            pri = fun_0260()
            var_1400 = 0;
            var_1408 = -6270886897370188264;
            var_1416 = 16;
            pri = fun_08E0(var_1408, var_1400)
            var_1424 = -6270886897370188264;
            var_1432 = 8;
            pri = fun_0A78(var_1424)
            var_1440 = 3;
            var_1448 = 1;
            pri = EvCameraEnd(var_1448, var_1440)
            var_1456 = 0;
            var_1464 = -6270886897370188264;
            var_1472 = 16;
            pri = fun_08A8(var_1464, var_1456)
            var_1480 = 1;
            var_1488 = 1;
            var_1496 = 180;
            pri = float(var_1496)
            var_1504 = pri;
            OP_PUSH3_C 4670475684706663793, 4674329516942483784, 8802641224559852288
            var_1512 = 48;
            pri = fun_04F0(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
            var_1520 = 15;
            var_1528 = 8;
            pri = fun_00B8(var_1520)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2D08_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8993244010259739704, -6270886897370188264
            var_48 = 56;
            pri = fun_19A8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1AF0(var_56)
            var_72 = 0;
            pri = fun_1BB0()
            OP_JUMP switch_2D08_case_default
        }
        case 0x1:
        {
// switch_2D08_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8993242910748111493, -6270886897370188264
            var_48 = 56;
            pri = fun_19A8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1AF0(var_56)
            var_72 = 0;
            pri = fun_1BB0()
            OP_JUMP switch_2D08_case_default
        }
    }
}
// fun_3AC8
fun_3AC8() {
    pri = 0;
    return pri;
}
// fun_3AE0
fun_3AE0() {
    var_8 = -821092416317714652;
    var_16 = 8;
    pri = fun_0318(var_8)
    var_24 = 6467987368656318883;
    var_32 = 8;
    pri = fun_0318(var_24)
    var_40 = -6270886897370188264;
    var_48 = 8;
    pri = fun_0498(var_40)
    var_56 = 412;
    var_64 = 8;
    pri = fun_26C0(var_56)
    pri = 0;
    return pri;
}
// fun_3B90
fun_3B90() {
    var_8 = 0;
    pri = fun_0348()
    var_16 = 1528;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0190(var_24, var_16)
    var_40 = 0;
    pri = fun_0260()
    pri = 0;
    return pri;
}
// fun_3C00
fun_3C00() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2858()
    var_16 = 0;
    pri = fun_28B0()
    var_24 = 0;
    pri = fun_28C8()
    var_32 = 0;
    pri = fun_28E0()
    var_40 = 0;
    pri = fun_3AC8()
    var_48 = 0;
    pri = fun_3AE0()
    var_56 = 0;
    pri = fun_3B90()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3CF0
fun_3CF0() {
    var_8 = 0;
    pri = fun_28B0()
    var_16 = 0;
    pri = fun_3AE0()
    pri = 0;
    return pri;
}
