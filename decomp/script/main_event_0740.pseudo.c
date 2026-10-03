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
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
    pri = arg_0;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    var_16 = pri;
    pri = arg_1;
    var_24 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04E8
fun_04E8() {
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
// fun_0608
fun_0608() {
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
// fun_0728
fun_0728() {
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
// fun_0848
fun_0848() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
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
// fun_08F8
fun_08F8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E70(var_8)
    OP_JZER lab_0A18
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EA0(var_24)
    OP_JNZ lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_0A28
// lab_0A28
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A88
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A28
    pri = 0;
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C00
// lab_0C00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E70(var_8)
    OP_JNZ lab_0C88
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CD0
    pri = 0;
    return pri;
// lab_0CD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D78(var_8)
    pri = 0;
    return pri;
// lab_0D30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C00
    pri = 0;
    return pri;
// lab_0C78
    OP_JUMP lab_0CD0
}
// fun_0D78
fun_0D78() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0ED0
fun_0ED0() {
    OP_JUMP lab_0EE8
// lab_0EE8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F78
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_0F78
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1008
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FF8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_1008
    pri = 0;
    return pri;
// lab_0FF8
    OP_JUMP lab_1018
// lab_1018
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EE8
    pri = 0;
    return pri;
// lab_0F68
    OP_JUMP lab_1018
}
// fun_1058
fun_1058() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0ED0(var_40)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1170
fun_1170() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
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
// switch_17C0
        case default:
        {
// switch_17C0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1808
// lab_1808
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
            OP_JNZ lab_18B0
            var_88 = 0;
            pri = fun_1A68()
// lab_18B0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17C0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_13A8
                case default:
                {
// switch_13A8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1420
// lab_1420
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_13A8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1420
                }
                case 0x1:
                {
// switch_13A8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1420
                }
                case 0x2:
                {
// switch_13A8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1420
                }
                case 0x3:
                {
// switch_13A8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1420
                }
                case 0x4:
                {
// switch_13A8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1420
                }
                case 0x5:
                {
// switch_13A8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1420
                }
            }
        }
        case 0x65:
        {
// switch_17C0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1560
                case default:
                {
// switch_1560_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15D8
// lab_15D8
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_1560_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15D8
                }
                case 0x1:
                {
// switch_1560_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15D8
                }
                case 0x2:
                {
// switch_1560_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15D8
                }
                case 0x3:
                {
// switch_1560_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15D8
                }
                case 0x4:
                {
// switch_1560_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15D8
                }
                case 0x5:
                {
// switch_1560_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15D8
                }
            }
        }
        case 0x66:
        {
// switch_17C0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1718
                case default:
                {
// switch_1718_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1790
// lab_1790
                    OP_JUMP lab_1808
                }
                case 0x0:
                {
// switch_1718_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1790
                }
                case 0x1:
                {
// switch_1718_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1790
                }
                case 0x2:
                {
// switch_1718_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1790
                }
                case 0x3:
                {
// switch_1718_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1790
                }
                case 0x4:
                {
// switch_1718_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1790
                }
                case 0x5:
                {
// switch_1718_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1790
                }
            }
        }
    }
}
// fun_18C8
fun_18C8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B40(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1970
    pri = 1;
    return pri;
// lab_1970
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19B8
fun_19B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18C8(var_8)
    arg_2 = pri;
// lab_1A08
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    OP_JUMP lab_1A80
// lab_1A80
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AC0
    pri = 0;
    return pri;
// lab_1AC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A80
    pri = 0;
    return pri;
}
// fun_1B00
fun_1B00() {
    var_8 = 0;
    pri = fun_1A68()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1BB0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1BB0
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BF0
fun_1BF0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1C20
// lab_1C20
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C60
    OP_JUMP lab_1C90
// lab_1C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C20
// lab_1C90
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CD8
fun_1CD8() {
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
// fun_1D48
fun_1D48() {
    OP_JUMP lab_1D60
// lab_1D60
    pri = EvCameraMoveWait_()
    OP_JZER lab_1D98
    pri = 0;
    return pri;
// lab_1D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D60
    pri = 0;
    return pri;
}
// fun_1DD8
fun_1DD8() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_04E8(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0608(var_72, var_64, var_56)
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
    pri = fun_0728(var_136, var_128, var_120)
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
// fun_1F38
fun_1F38() {
    pri = arg_4;
    OP_JNZ lab_1F70
    var_8 = 0;
    pri = fun_0DB0()
// lab_1F70
    pri = arg_1;
    switch (pri) {
// switch_3348
        case default:
        {
// switch_3348_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E70(var_264)
            OP_JZER lab_3910
            pri = arg_3;
            switch (pri) {
// switch_38B8
                case default:
                {
// switch_38B8_case_default
                    OP_JUMP lab_3BC8
// lab_3BC8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3C38
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3C38
                    var_8 = 0;
                    pri = fun_0DF0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_38B8_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_38B8_case_default
                }
                case 0x2:
                {
// switch_38B8_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_38B8_case_default
                }
                case 0x3:
                {
// switch_38B8_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_38B8_case_default
                }
            }
// lab_3910
            pri = arg_1;
            OP_JZER lab_3960
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3960
            pri = 0;
            OP_JUMP lab_3968
// lab_3960
            pri = 1;
// lab_3968
            OP_JZER lab_39D0
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B40(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_39D0
            pri = 1;
            OP_JUMP lab_39D8
// lab_39D0
            pri = 0;
// lab_39D8
            OP_JZER lab_3A28
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_3BC8
// lab_3A28
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3A90
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_3BC8
// lab_3A90
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
            var_264 = pri;
            pri = 0;
            OP_ADDR_ALT -392
            OP_FILL 128
            OP_PUSH_P_ADR -392
            pri = var_264;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -392
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_3348_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1:
        {
// switch_3348_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2:
        {
// switch_3348_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3:
        {
// switch_3348_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x4:
        {
// switch_3348_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x5:
        {
// switch_3348_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D78(var_40)
            OP_JUMP switch_3348_case_default
        }
        case 0x6:
        {
// switch_3348_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x7:
        {
// switch_3348_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x8:
        {
// switch_3348_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x9:
        {
// switch_3348_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xa:
        {
// switch_3348_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xb:
        {
// switch_3348_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xc:
        {
// switch_3348_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xd:
        {
// switch_3348_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xe:
        {
// switch_3348_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0xf:
        {
// switch_3348_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x10:
        {
// switch_3348_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x11:
        {
// switch_3348_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x12:
        {
// switch_3348_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x13:
        {
// switch_3348_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x14:
        {
// switch_3348_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x15:
        {
// switch_3348_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x16:
        {
// switch_3348_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x17:
        {
// switch_3348_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x18:
        {
// switch_3348_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x19:
        {
// switch_3348_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1a:
        {
// switch_3348_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1b:
        {
// switch_3348_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1c:
        {
// switch_3348_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1d:
        {
// switch_3348_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1e:
        {
// switch_3348_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x1f:
        {
// switch_3348_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x20:
        {
// switch_3348_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x21:
        {
// switch_3348_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x22:
        {
// switch_3348_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x23:
        {
// switch_3348_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x24:
        {
// switch_3348_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x25:
        {
// switch_3348_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x26:
        {
// switch_3348_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x27:
        {
// switch_3348_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x28:
        {
// switch_3348_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x29:
        {
// switch_3348_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2a:
        {
// switch_3348_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2b:
        {
// switch_3348_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2c:
        {
// switch_3348_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2d:
        {
// switch_3348_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2e:
        {
// switch_3348_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x2f:
        {
// switch_3348_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x30:
        {
// switch_3348_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x31:
        {
// switch_3348_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x32:
        {
// switch_3348_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x33:
        {
// switch_3348_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x34:
        {
// switch_3348_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x35:
        {
// switch_3348_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x36:
        {
// switch_3348_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x37:
        {
// switch_3348_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x38:
        {
// switch_3348_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x39:
        {
// switch_3348_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3a:
        {
// switch_3348_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3b:
        {
// switch_3348_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3c:
        {
// switch_3348_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3d:
        {
// switch_3348_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
        case 0x3e:
        {
// switch_3348_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            OP_JUMP switch_3348_case_default
        }
    }
}
// fun_3C68
fun_3C68() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3E78(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 1752;
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
    var_424 = 1808;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 1824;
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
    OP_JZER lab_3E60
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3E60
    pri = 0;
    return pri;
}
// fun_3E78
fun_3E78() {
    var_8 = arg_1;
    var_16 = 1872;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B00(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3EC0
fun_3EC0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3FC0
        case default:
        {
// switch_3FC0_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3FC0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3FC0_case_default
        }
        case 0x1:
        {
// switch_3FC0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3FC0_case_default
        }
        case 0x2:
        {
// switch_3FC0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3FC0_case_default
        }
        case 0x3:
        {
// switch_3FC0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3FC0_case_default
        }
    }
}
// fun_4080
fun_4080() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_19B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1A68()
    pri = 0;
    return pri;
}
// fun_4118
fun_4118() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3EC0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_4080(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_41C0
fun_41C0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_4210
// lab_4210
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1976;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_4288
    OP_JUMP lab_42B8
// lab_4288
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_4210
// lab_42B8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_4340
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1F38(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1140(var_56)
// lab_4340
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_43A8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E30(var_24, var_16)
// lab_43A8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_4468
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0B78(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_08F8(var_88, var_80, var_72, var_64, var_56)
// lab_4468
    pri = IsPlayerRideBicycle()
    OP_JZER lab_44A8
    pri = 0;
    return pri;
// lab_44A8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_45F0
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 2096;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0AC8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_45B8
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_45F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09A0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0B78(var_40)
    pri = 0;
    return pri;
// lab_45B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
}
// fun_4678
fun_4678() {
    pri = 2232;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4700
// lab_4700
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4880
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4870
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_47C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_47C0
    pri = 0;
    OP_JUMP lab_47C8
// lab_4880
    pri = 0;
    return pri;
// lab_4870
    OP_JUMP lab_46F8
// lab_46F8
    OP_INC_P_S -936
// lab_47C0
    pri = 1;
// lab_47C8
    OP_JZER lab_4840
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4838
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4840
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4838
}
// fun_48A0
fun_48A0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4938
    var_8 = 1;
    var_16 = 0;
    var_24 = 3152;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1118()
// lab_4938
    pri = arg_4;
    OP_JZER lab_4970
    var_8 = 1;
    var_16 = 8;
    pri = fun_1170(var_8)
// lab_4970
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_49C8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_49C8
    pri = 0;
    OP_JUMP lab_49D0
// lab_49C8
    pri = 1;
// lab_49D0
    OP_JZER lab_4A98
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4A98
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_4A70
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1058(var_32, var_24)
    OP_JUMP lab_4A98
// lab_4A98
    pri = arg_2;
    OP_JZER lab_4B70
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_4B40
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E30(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0848(var_40)
    OP_JUMP lab_4B70
// lab_4B70
    pri = arg_3;
    OP_JZER lab_4BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10E0(var_8)
// lab_4BA8
    pri = 0;
    return pri;
// lab_4B40
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E30(var_16, var_8)
// lab_4A70
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1058(var_16, var_8)
}
// fun_4BB8
fun_4BB8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4678(var_24)
    pri = 0;
    return pri;
}
// fun_4C20
fun_4C20() {
    pri = g_mode;
    switch (pri) {
// switch_4D08
        case default:
        {
// switch_4D08_case_default
            pri = CommandNOP()
            OP_JUMP lab_4D60
// lab_4D60
            pri = 0;
            return pri;
        }
        case 0x8db44f89aea4d525:
        {
// switch_4D08_case_0x8db44f89aea4d525
            var_8 = 0;
            pri = fun_5C70()
            OP_JUMP lab_4D60
        }
        case 0xaf3e5422158efd0b:
        {
// switch_4D08_case_0xaf3e5422158efd0b
            var_8 = 0;
            pri = fun_5B38()
            OP_JUMP lab_4D60
        }
        case 0x0:
        {
// switch_4D08_case_0x0
            var_8 = 0;
            pri = fun_4D70()
            OP_JUMP lab_4D60
        }
        case 0x4b68221e635c4f6f:
        {
// switch_4D08_case_0x4b68221e635c4f6f
            var_8 = 0;
            pri = fun_5C28()
            OP_JUMP lab_4D60
        }
    }
}
// fun_4D70
fun_4D70() {
    pri = 0;
    return pri;
}
// fun_4D88
fun_4D88() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_48A0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4DE0
fun_4DE0() {
    pri = 0;
    return pri;
}
// fun_4DF8
fun_4DF8() {
    pri = 0;
    return pri;
}
// fun_4E10
fun_4E10() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587338432941916160, 4664524149211791360, 4676803495070793728, 8802641224559852288
    var_24 = 48;
    pri = fun_0490(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4664380113188552704, 4676816139454513152, -7283748629432624885
    var_48 = 48;
    pri = fun_0490(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    var_72 = 1;
    var_80 = 0;
    var_88 = 60;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 0;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 0;
    OP_PUSH4_C 4664380113188552704, 4676708249876037632, 4611686018427387904, -7283748629432624885
    var_128 = 72;
    pri = fun_0880(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH4_C 4664524149211791360, 4676731614498127872, 4611686018427387904, 8802641224559852288
    var_176 = 72;
    pri = fun_0880(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    var_192 = 4631952216750555136;
    var_200 = 0;
    OP_PUSH5_C 4664449305455288648, 4657100246701047808, 4676759638300740813, 4665202965700547707, 4658007299813497897
    var_208 = 4676759730384839639;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 0;
    pri = fun_1D48()
    var_232 = 0;
    var_240 = 4631952216750555136;
    var_248 = 3;
    OP_PUSH5_C 4664449558342963036, 4657100246701047808, 4676727367634465587, 4665203218588222095, 4658007299813497897
    var_256 = 4676727459718564413;
    var_264 = 50;
    pri = EvCameraMove(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 3200;
    var_280 = 8;
    var_288 = 16;
    pri = fun_02D8(var_280, var_272)
    var_296 = 0;
    pri = fun_03A8()
    var_304 = -7283748629432624885;
    var_312 = 8;
    pri = fun_09A0(var_304)
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 52;
    pri = float(var_344)
    var_352 = pri;
    var_360 = -7283748629432624885;
    var_368 = 40;
    pri = fun_08F8(var_360, var_352, var_344, var_336, var_328)
    var_376 = 8802641224559852288;
    var_384 = 8;
    pri = fun_09A0(var_376)
    var_392 = 0;
    pri = fun_1D48()
    var_400 = 0;
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    OP_PUSH2_C -7283748629432624885, 8802641224559852288
    var_432 = 48;
    pri = fun_0948(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 0;
    var_448 = 4631952216750555136;
    var_456 = 3;
    OP_PUSH5_C 4664323950134605906, 4656801399440618291, 4676724133695890391, 4664851517803845386, 4657436345415426376
    var_464 = 4676724198292198523;
    var_472 = 20;
    pri = EvCameraMove(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 7187162390017107812, -7283748629432624885
    var_520 = 56;
    pri = fun_19B8(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1B00(var_528)
    var_544 = 8802641224559852288;
    var_552 = 8;
    pri = fun_09A0(var_544)
    var_560 = -7283748629432624885;
    var_568 = 8;
    pri = fun_09A0(var_560)
    var_576 = 0;
    pri = fun_1D48()
    var_584 = 0;
    var_592 = 8105413404775213492;
    var_600 = 0;
    var_608 = 24;
    pri = fun_1BF0(var_600, var_592, var_584)
    var_616 = 0;
    var_624 = 8105416703310098125;
    var_632 = 1;
    var_640 = 24;
    pri = fun_1BF0(var_632, var_624, var_616)
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    var_680 = 1;
    var_688 = 32;
    pri = fun_1CD8(var_680, var_672, var_664, var_656)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_56F0
        case default:
        {
// switch_56F0_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 7187159091482223179, -7283748629432624885
            var_48 = 56;
            pri = fun_19B8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1B00(var_56)
            var_72 = 0;
            pri = fun_1BC0()
            var_80 = 0;
            var_88 = 0;
            var_96 = -7283748629432624885;
            var_104 = 24;
            pri = fun_3C68(var_96, var_88, var_80)
            var_112 = 1;
            var_120 = 8;
            pri = fun_00B8(var_112)
            var_128 = -7283748629432624885;
            var_136 = 8;
            pri = fun_0B78(var_128)
            var_144 = 1;
            var_152 = 0;
            var_160 = 60;
            pri = float(var_160)
            var_168 = pri;
            var_176 = 0;
            pri = float(var_176)
            var_184 = pri;
            var_192 = 0;
            OP_PUSH4_C 4664784733467574272, 4676647501858603008, 4611686018427387904, -7283748629432624885
            var_200 = 72;
            pri = fun_0880(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_208 = 30;
            var_216 = 8;
            pri = fun_00B8(var_208)
            var_224 = 0;
            var_232 = 0;
            var_240 = 0;
            var_248 = -70;
            pri = float(var_248)
            var_256 = pri;
            var_264 = 8802641224559852288;
            var_272 = 40;
            pri = fun_08F8(var_264, var_256, var_248, var_240, var_232)
            var_280 = -7283748629432624885;
            var_288 = 8;
            pri = fun_09A0(var_280)
            var_296 = 3;
            var_304 = 20;
            pri = EvCameraEnd(var_304, var_296)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_56F0_case_0x0
            var_8 = 0;
            var_16 = 1;
            var_24 = -7283748629432624885;
            var_32 = 24;
            pri = fun_3C68(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_00B8(var_40)
            var_56 = -7283748629432624885;
            var_64 = 8;
            pri = fun_0B78(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 7187165688551992445, -7283748629432624885
            var_112 = 56;
            pri = fun_19B8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1B00(var_120)
            var_136 = 0;
            pri = fun_1BC0()
            OP_JUMP switch_56F0_case_default
        }
        case 0x1:
        {
// switch_56F0_case_0x1
            var_8 = 0;
            var_16 = 2;
            var_24 = -7283748629432624885;
            var_32 = 24;
            pri = fun_3C68(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_00B8(var_40)
            var_56 = -7283748629432624885;
            var_64 = 8;
            pri = fun_0B78(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 7187164589040364234, -7283748629432624885
            var_112 = 56;
            pri = fun_19B8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1B00(var_120)
            var_136 = 0;
            pri = fun_1BC0()
            OP_JUMP switch_56F0_case_default
        }
    }
}
// fun_59D0
fun_59D0() {
    pri = 0;
    return pri;
}
// fun_59E8
fun_59E8() {
    var_8 = -7283748629432624885;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 748;
    var_32 = 8;
    pri = fun_4BB8(var_24)
    var_40 = 10;
    var_48 = 5237398558577480708;
    pri = WorkSet(var_48, var_40)
    var_56 = 4166911318193987639;
    pri = VanishFlagReset(var_56)
    var_64 = 5996991087849294980;
    pri = VanishFlagReset(var_64)
    var_72 = -1141647952331606142;
    pri = VanishFlagSet(var_72)
    var_80 = 20;
    var_88 = 1209431212022142778;
    pri = WorkSet(var_88, var_80)
    pri = 0;
    return pri;
}
// fun_5B20
fun_5B20() {
    pri = 0;
    return pri;
}
// fun_5B38
fun_5B38() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4D88()
    var_16 = 0;
    pri = fun_4DE0()
    var_24 = 0;
    pri = fun_4DF8()
    var_32 = 0;
    pri = fun_4E10()
    var_40 = 0;
    pri = fun_59D0()
    var_48 = 0;
    pri = fun_59E8()
    var_56 = 0;
    pri = fun_5B20()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5C28
fun_5C28() {
    var_8 = 0;
    pri = fun_4DE0()
    var_16 = 0;
    pri = fun_59E8()
    pri = 0;
    return pri;
}
// fun_5C70
fun_5C70() {
    pri = EvCameraStart()
    var_8 = 100;
    var_16 = 3;
    OP_PUSH4_C 4602678819172646912, 4607182418800017408, -6742208472181701070, 8802641224559852288
    var_24 = 30;
    var_32 = 56;
    pri = fun_1DD8(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_40 = 1;
    var_48 = 1;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 1;
    var_96 = 1;
    var_104 = 1;
    OP_PUSH2_C -2340742964336457314, -6742208472181701070
    var_112 = 88;
    pri = fun_4118(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1B00(var_120)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -2340744063848085525, -6742208472181701070
    var_176 = 56;
    pri = fun_19B8(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1B00(var_184)
    var_200 = 0;
    pri = fun_1BC0()
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = -6742208472181701070;
    var_240 = 32;
    pri = fun_41C0(var_232, var_224, var_216, var_208)
    var_248 = 0;
    pri = fun_1D48()
    var_256 = 3;
    var_264 = 30;
    pri = EvCameraEnd(var_264, var_256)
    var_272 = 20;
    var_280 = 5237398558577480708;
    pri = WorkSet(var_280, var_272)
    pri = 0;
    return pri;
}
