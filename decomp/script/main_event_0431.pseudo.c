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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08E0
fun_08E0() {
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
// fun_0958
fun_0958() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DD8(var_8)
    OP_JZER lab_0A78
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E08(var_24)
    OP_JNZ lab_0A78
    pri = 0;
    return pri;
// lab_0A78
    OP_JUMP lab_0A88
// lab_0A88
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AE8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A88
    pri = 0;
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BA8
    pri = 0;
    return pri;
// lab_0BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BE8
// lab_0BE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DD8(var_8)
    OP_JNZ lab_0C70
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C60
    pri = 0;
    return pri;
// lab_0C70
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CB8
    pri = 0;
    return pri;
// lab_0CB8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D60(var_8)
    pri = 0;
    return pri;
// lab_0D18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BE8
    pri = 0;
    return pri;
// lab_0C60
    OP_JUMP lab_0CB8
}
// fun_0D60
fun_0D60() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E38
fun_0E38() {
    OP_JUMP lab_0E50
// lab_0E50
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0EE0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0ED0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B60(var_8)
    pri = 0;
    return pri;
// lab_0EE0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F70
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F60
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B60(var_8)
    pri = 0;
    return pri;
// lab_0F70
    pri = 0;
    return pri;
// lab_0F60
    OP_JUMP lab_0F80
// lab_0F80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E50
    pri = 0;
    return pri;
// lab_0ED0
    OP_JUMP lab_0F80
}
// fun_0FC0
fun_0FC0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E38(var_40)
    pri = 0;
    return pri;
}
// fun_1048
fun_1048() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
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
// switch_16F8
        case default:
        {
// switch_16F8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1740
// lab_1740
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
            OP_JNZ lab_17E8
            var_88 = 0;
            pri = fun_19A0()
// lab_17E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_16F8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12E0
                case default:
                {
// switch_12E0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1358
// lab_1358
                    OP_JUMP lab_1740
                }
                case 0x0:
                {
// switch_12E0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1358
                }
                case 0x1:
                {
// switch_12E0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1358
                }
                case 0x2:
                {
// switch_12E0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1358
                }
                case 0x3:
                {
// switch_12E0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1358
                }
                case 0x4:
                {
// switch_12E0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1358
                }
                case 0x5:
                {
// switch_12E0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1358
                }
            }
        }
        case 0x65:
        {
// switch_16F8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1498
                case default:
                {
// switch_1498_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1510
// lab_1510
                    OP_JUMP lab_1740
                }
                case 0x0:
                {
// switch_1498_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1510
                }
                case 0x1:
                {
// switch_1498_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1510
                }
                case 0x2:
                {
// switch_1498_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1510
                }
                case 0x3:
                {
// switch_1498_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1510
                }
                case 0x4:
                {
// switch_1498_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1510
                }
                case 0x5:
                {
// switch_1498_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1510
                }
            }
        }
        case 0x66:
        {
// switch_16F8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1650
                case default:
                {
// switch_1650_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16C8
// lab_16C8
                    OP_JUMP lab_1740
                }
                case 0x0:
                {
// switch_1650_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_16C8
                }
                case 0x1:
                {
// switch_1650_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_16C8
                }
                case 0x2:
                {
// switch_1650_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_16C8
                }
                case 0x3:
                {
// switch_1650_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16C8
                }
                case 0x4:
                {
// switch_1650_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_16C8
                }
                case 0x5:
                {
// switch_1650_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_16C8
                }
            }
        }
    }
}
// fun_1800
fun_1800() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_18A8
    pri = 1;
    return pri;
// lab_18A8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_18F0
fun_18F0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1940
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1800(var_8)
    arg_2 = pri;
// lab_1940
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19A0
fun_19A0() {
    OP_JUMP lab_19B8
// lab_19B8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19F8
    pri = 0;
    return pri;
// lab_19F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19B8
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    var_8 = 0;
    pri = fun_19A0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1AE8
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1AE8
    pri = 0;
    return pri;
}
// fun_1AF8
fun_1AF8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    OP_JUMP lab_1B40
// lab_1B40
    pri = EvCameraMoveWait_()
    OP_JZER lab_1B78
    pri = 0;
    return pri;
// lab_1B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B40
    pri = 0;
    return pri;
}
// fun_1BB8
fun_1BB8() {
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
// fun_1D18
fun_1D18() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1DA0
// lab_1DA0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1F20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1F10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1E60
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1E60
    pri = 0;
    OP_JUMP lab_1E68
// lab_1F20
    pri = 0;
    return pri;
// lab_1F10
    OP_JUMP lab_1D98
// lab_1D98
    OP_INC_P_S -936
// lab_1E60
    pri = 1;
// lab_1E68
    OP_JZER lab_1EE0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1ED8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1EE0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1ED8
}
// fun_1F40
fun_1F40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1FD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_1080()
// lab_1FD8
    pri = arg_4;
    OP_JZER lab_2010
    var_8 = 1;
    var_16 = 8;
    pri = fun_10A8(var_8)
// lab_2010
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2068
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2068
    pri = 0;
    OP_JUMP lab_2070
// lab_2068
    pri = 1;
// lab_2070
    OP_JZER lab_2138
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_2138
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_2110
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0FC0(var_32, var_24)
    OP_JUMP lab_2138
// lab_2138
    pri = arg_2;
    OP_JZER lab_2210
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_21E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D98(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08A8(var_40)
    OP_JUMP lab_2210
// lab_2210
    pri = arg_3;
    OP_JZER lab_2248
    var_8 = 1;
    var_16 = 8;
    pri = fun_1048(var_8)
// lab_2248
    pri = 0;
    return pri;
// lab_21E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D98(var_16, var_8)
// lab_2110
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0FC0(var_16, var_8)
}
// fun_2258
fun_2258() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1D18(var_24)
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    pri = g_mode;
    switch (pri) {
// switch_23A8
        case default:
        {
// switch_23A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_2400
// lab_2400
            pri = 0;
            return pri;
        }
        case 0xb85f00221adc755e:
        {
// switch_23A8_case_0xb85f00221adc755e
            var_8 = 0;
            pri = fun_2E78()
            OP_JUMP lab_2400
        }
        case 0xfa3b1e00b3110b36:
        {
// switch_23A8_case_0xfa3b1e00b3110b36
            var_8 = 0;
            pri = fun_2FB0()
            OP_JUMP lab_2400
        }
        case 0x0:
        {
// switch_23A8_case_0x0
            var_8 = 0;
            pri = fun_2410()
            OP_JUMP lab_2400
        }
        case 0x546d5e1e689241ba:
        {
// switch_23A8_case_0x546d5e1e689241ba
            var_8 = 0;
            pri = fun_2F68()
            OP_JUMP lab_2400
        }
    }
}
// fun_2410
fun_2410() {
    pri = 0;
    return pri;
}
// fun_2428
fun_2428() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1F40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
    var_8 = 20;
    var_16 = -506847387856332444;
    pri = WorkSet(var_16, var_8)
    var_24 = 6318683489645882416;
    var_32 = 8;
    pri = fun_0498(var_24)
    var_40 = 1341683193730638056;
    var_48 = 8;
    pri = fun_0498(var_40)
    var_56 = 1341683193730638056;
    var_64 = 8;
    pri = fun_0318(var_56)
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    var_8 = 0;
    pri = fun_0348()
    pri = 0;
    return pri;
}
// fun_2570
fun_2570() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C -6742208472181701070, 8802641224559852288
    var_40 = 48;
    pri = fun_09A8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C 8802641224559852288, -6742208472181701070
    var_80 = 48;
    pri = fun_09A8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 150;
    var_96 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -6742208472181701070, 8802641224559852288
    var_104 = 15;
    var_112 = 56;
    pri = fun_1BB8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 0;
    pri = fun_1B28()
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C -785756120148753698, -6742208472181701070
    var_168 = 56;
    pri = fun_18F0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1A38(var_176)
    var_192 = 0;
    pri = fun_1AF8()
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0A00(var_200)
    var_216 = -6742208472181701070;
    var_224 = 8;
    pri = fun_0A00(var_216)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = -170;
    pri = float(var_256)
    var_264 = pri;
    var_272 = -6742208472181701070;
    var_280 = 40;
    pri = fun_0958(var_272, var_264, var_256, var_248, var_240)
    var_288 = -6742208472181701070;
    var_296 = 8;
    pri = fun_0A00(var_288)
    var_304 = 0;
    var_312 = 4631952216750555136;
    var_320 = 0;
    OP_PUSH5_C 4665706893869790003, 4657237069928008253, 4673166995052099011, 4666059177395329434, 4656908140029442785
    var_328 = 4673228279081452175;
    var_336 = 1;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 0;
    pri = fun_1B28()
    var_352 = 0;
    var_360 = 4631952216750555136;
    var_368 = 0;
    OP_PUSH5_C 4665706893869790003, 4657237069928008253, 4673166995052099011, 4665986862515570606, 4656977871056876339
    var_376 = 4673215293849128141;
    var_384 = 500;
    pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 1;
    var_400 = 1;
    OP_PUSH4_C -4587338432941916160, 4665865883251166413, 4673273870331097907, 8802641224559852288
    var_408 = 48;
    pri = fun_04F0(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 1;
    var_424 = 0;
    var_432 = 30;
    pri = float(var_432)
    var_440 = pri;
    var_448 = -145;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 1;
    OP_PUSH4_C 4665865883251166413, 4673223017918313267, 4607182418800017408, 8802641224559852288
    var_472 = 72;
    pri = fun_08E0(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 8802641224559852288;
    var_488 = 8;
    pri = fun_0A00(var_480)
    var_496 = 30;
    var_504 = 8;
    pri = fun_00B8(var_496)
    var_512 = 0;
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    OP_PUSH2_C 8802641224559852288, -6742208472181701070
    var_544 = 48;
    pri = fun_09A8(var_536, var_528, var_520, var_512, var_504, var_496)
    var_552 = -6742208472181701070;
    var_560 = 8;
    pri = fun_0A00(var_552)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    OP_PUSH2_C -785755020637125487, -6742208472181701070
    var_608 = 56;
    pri = fun_18F0(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_616 = 1;
    var_624 = 8;
    pri = fun_1A38(var_616)
    var_632 = 0;
    pri = fun_1AF8()
    var_640 = 1;
    var_648 = 0;
    var_656 = 4641240890982006784;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH4_C 4665869731541863629, 4673013670904384717, 4607182418800017408, -6742208472181701070
    var_680 = 72;
    pri = fun_08E0(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = -6742208472181701070;
    var_696 = 8;
    pri = fun_0A00(var_688)
    var_704 = 1;
    var_712 = 0;
    var_720 = 1256;
    var_728 = 8;
    var_736 = 32;
    pri = fun_01F0(var_728, var_720, var_712, var_704)
    var_744 = 0;
    pri = fun_0260()
    var_752 = 3;
    var_760 = 1;
    pri = EvCameraEnd(var_760, var_752)
    OP_PUSH2_C -6742208472181701070, 2171845302174236571
    pri = SetBamiriInfoToChara(var_760, var_752)
    var_768 = 1;
    var_776 = 1;
    OP_PUSH4_C 4640537203540230144, 4665398656780059279, 4673054767900251914, 8802641224559852288
    var_784 = 48;
    pri = fun_04F0(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 30;
    var_800 = 8;
    pri = fun_00B8(var_792)
    pri = 0;
    return pri;
}
// fun_2D30
fun_2D30() {
    pri = 0;
    return pri;
}
// fun_2D48
fun_2D48() {
    var_8 = -988436650023575209;
    pri = VanishFlagSet(var_8)
    var_16 = 6919059718305426603;
    pri = VanishFlagSet(var_16)
    var_24 = 2767131236868729412;
    pri = VanishFlagSet(var_24)
    var_32 = 440;
    var_40 = 8;
    pri = fun_2258(var_32)
    var_48 = 1274387555907997758;
    pri = FlagSet(var_48)
    pri = 0;
    return pri;
}
// fun_2E20
fun_2E20() {
    var_8 = 1304;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0190(var_16, var_8)
    var_32 = 0;
    pri = fun_0260()
    pri = 0;
    return pri;
}
// fun_2E78
fun_2E78() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2428()
    var_16 = 0;
    pri = fun_2480()
    var_24 = 0;
    pri = fun_2540()
    var_32 = 0;
    pri = fun_2570()
    var_40 = 0;
    pri = fun_2D30()
    var_48 = 0;
    pri = fun_2D48()
    var_56 = 0;
    pri = fun_2E20()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2F68
fun_2F68() {
    var_8 = 0;
    pri = fun_2480()
    var_16 = 0;
    pri = fun_2D48()
    pri = 0;
    return pri;
}
// fun_2FB0
fun_2FB0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1F40(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C -6742208472181701070, 8802641224559852288
    var_88 = 48;
    pri = fun_09A8(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, -6742208472181701070
    var_128 = 48;
    pri = fun_09A8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 150;
    var_144 = 3;
    OP_PUSH4_C 4605380978949069210, 4604480259023595111, -6742208472181701070, 8802641224559852288
    var_152 = 30;
    var_160 = 56;
    pri = fun_1BB8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 0;
    pri = fun_1B28()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C -785750622590612643, -6742208472181701070
    var_216 = 56;
    pri = fun_18F0(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1A38(var_224)
    var_240 = 0;
    pri = fun_1AF8()
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    OP_PUSH2_C -785753921125497276, -6742208472181701070
    var_288 = 56;
    pri = fun_18F0(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1A38(var_296)
    var_312 = 0;
    pri = fun_1AF8()
    var_320 = 8802641224559852288;
    var_328 = 8;
    pri = fun_0A00(var_320)
    var_336 = -6742208472181701070;
    var_344 = 8;
    pri = fun_0A00(var_336)
    var_352 = 1;
    var_360 = 0;
    var_368 = 4641240890982006784;
    var_376 = 0;
    var_384 = 0;
    OP_PUSH4_C 4665895185236046643, 4674071868382747034, 4607182418800017408, -6742208472181701070
    var_392 = 72;
    pri = fun_08E0(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 60;
    var_408 = 8;
    pri = fun_00B8(var_400)
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    OP_PUSH2_C -6742208472181701070, 8802641224559852288
    var_448 = 48;
    pri = fun_09A8(var_440, var_432, var_424, var_416, var_408, var_400)
    var_456 = 8802641224559852288;
    var_464 = 8;
    pri = fun_0A00(var_456)
    var_472 = -6742208472181701070;
    var_480 = 8;
    pri = fun_0A00(var_472)
    OP_PUSH2_C -6742208472181701070, 2171850799732377626
    pri = SetBamiriInfoToChara(var_480, var_472)
    var_488 = 433;
    var_496 = 8;
    pri = fun_2258(var_488)
    var_504 = 3;
    var_512 = 30;
    pri = EvCameraEnd(var_512, var_504)
    pri = 0;
    return pri;
}
