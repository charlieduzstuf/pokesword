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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = IsLoadedLogoFade_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0480
fun_0480() {
    pri = arg_8;
    OP_JZER lab_04F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
// lab_04F0
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_03E0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0620(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_05E0
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0190(var_128, var_120)
    var_144 = 0;
    pri = fun_0260()
// lab_05E0
    pri = 0;
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0620
fun_0620() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
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
// fun_0780
fun_0780() {
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
// fun_08A0
fun_08A0() {
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
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
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
// fun_0A70
fun_0A70() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0A70(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = arg_2;
    var_96 = arg_0;
    var_104 = arg_1;
    var_112 = 48;
    pri = fun_0A70(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F48(var_8)
    OP_JZER lab_0BE8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F78(var_24)
    OP_JNZ lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    OP_JUMP lab_0BF8
// lab_0BF8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C58
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BF8
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D18
    pri = 0;
    return pri;
// lab_0D18
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D58
// lab_0D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F48(var_8)
    OP_JNZ lab_0DE0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DD0
    pri = 0;
    return pri;
// lab_0DE0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E28
    pri = 0;
    return pri;
// lab_0E28
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    pri = 0;
    return pri;
// lab_0E88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D58
    pri = 0;
    return pri;
// lab_0DD0
    OP_JUMP lab_0E28
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F48
fun_0F48() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FA8
fun_0FA8() {
    OP_JUMP lab_0FC0
// lab_0FC0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1050
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1040
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    pri = 0;
    return pri;
// lab_1050
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_10D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    pri = 0;
    return pri;
// lab_10E0
    pri = 0;
    return pri;
// lab_10D0
    OP_JUMP lab_10F0
// lab_10F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0FC0
    pri = 0;
    return pri;
// lab_1040
    OP_JUMP lab_10F0
}
// fun_1130
fun_1130() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FA8(var_40)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
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
// switch_1868
        case default:
        {
// switch_1868_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_18B0
// lab_18B0
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
            OP_JNZ lab_1958
            var_88 = 0;
            pri = fun_1B10()
// lab_1958
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1868_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1450
                case default:
                {
// switch_1450_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14C8
// lab_14C8
                    OP_JUMP lab_18B0
                }
                case 0x0:
                {
// switch_1450_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_14C8
                }
                case 0x1:
                {
// switch_1450_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_14C8
                }
                case 0x2:
                {
// switch_1450_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_14C8
                }
                case 0x3:
                {
// switch_1450_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14C8
                }
                case 0x4:
                {
// switch_1450_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_14C8
                }
                case 0x5:
                {
// switch_1450_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_14C8
                }
            }
        }
        case 0x65:
        {
// switch_1868_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1608
                case default:
                {
// switch_1608_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1680
// lab_1680
                    OP_JUMP lab_18B0
                }
                case 0x0:
                {
// switch_1608_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1680
                }
                case 0x1:
                {
// switch_1608_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1680
                }
                case 0x2:
                {
// switch_1608_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1680
                }
                case 0x3:
                {
// switch_1608_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1680
                }
                case 0x4:
                {
// switch_1608_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1680
                }
                case 0x5:
                {
// switch_1608_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1680
                }
            }
        }
        case 0x66:
        {
// switch_1868_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_17C0
                case default:
                {
// switch_17C0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1838
// lab_1838
                    OP_JUMP lab_18B0
                }
                case 0x0:
                {
// switch_17C0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1838
                }
                case 0x1:
                {
// switch_17C0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1838
                }
                case 0x2:
                {
// switch_17C0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1838
                }
                case 0x3:
                {
// switch_17C0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1838
                }
                case 0x4:
                {
// switch_17C0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1838
                }
                case 0x5:
                {
// switch_17C0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1838
                }
            }
        }
    }
}
// fun_1970
fun_1970() {
    pri = 128;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 208;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C98(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A18
    pri = 1;
    return pri;
// lab_1A18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A60
fun_1A60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1970(var_8)
    arg_2 = pri;
// lab_1AB0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1250(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B10
fun_1B10() {
    OP_JUMP lab_1B28
// lab_1B28
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B68
    pri = 0;
    return pri;
// lab_1B68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B28
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    var_8 = 0;
    pri = fun_1B10()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C58
    var_32 = 256;
    pri = SoundPostEvent(var_32)
// lab_1C58
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C98
fun_1C98() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1CC8
// lab_1CC8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D08
    OP_JUMP lab_1D38
// lab_1D08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CC8
// lab_1D38
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D80
fun_1D80() {
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
// fun_1DF0
fun_1DF0() {
    OP_JUMP lab_1E08
// lab_1E08
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E40
    pri = 0;
    return pri;
// lab_1E40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E08
    pri = 0;
    return pri;
}
// fun_1E80
fun_1E80() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0660(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0780(var_72, var_64, var_56)
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
    pri = fun_08A0(var_136, var_128, var_120)
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
// fun_1FE0
fun_1FE0() {
    pri = 432;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_2068
// lab_2068
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_21E8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_21D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_2128
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_2128
    pri = 0;
    OP_JUMP lab_2130
// lab_21E8
    pri = 0;
    return pri;
// lab_21D8
    OP_JUMP lab_2060
// lab_2060
    OP_INC_P_S -936
// lab_2128
    pri = 1;
// lab_2130
    OP_JZER lab_21A8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_21A0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_21A8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_21A0
}
// fun_2208
fun_2208() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_09F8(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_2340
fun_2340() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_23D8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_11F0()
// lab_23D8
    pri = arg_4;
    OP_JZER lab_2410
    var_8 = 1;
    var_16 = 8;
    pri = fun_1218(var_8)
// lab_2410
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2468
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2468
    pri = 0;
    OP_JUMP lab_2470
// lab_2468
    pri = 1;
// lab_2470
    OP_JZER lab_2538
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_2538
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_2510
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1130(var_32, var_24)
    OP_JUMP lab_2538
// lab_2538
    pri = arg_2;
    OP_JZER lab_2610
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_25E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F08(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09C0(var_40)
    OP_JUMP lab_2610
// lab_2610
    pri = arg_3;
    OP_JZER lab_2648
    var_8 = 1;
    var_16 = 8;
    pri = fun_11B8(var_8)
// lab_2648
    pri = 0;
    return pri;
// lab_25E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F08(var_16, var_8)
// lab_2510
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1130(var_16, var_8)
}
// fun_2658
fun_2658() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1FE0(var_24)
    pri = 0;
    return pri;
}
// fun_26C0
fun_26C0() {
    pri = g_mode;
    switch (pri) {
// switch_2780
        case default:
        {
// switch_2780_case_default
            pri = CommandNOP()
            OP_JUMP lab_27C8
// lab_27C8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2780_case_0x0
            var_8 = 0;
            pri = fun_27D8()
            OP_JUMP lab_27C8
        }
        case 0x38d5012af002d671:
        {
// switch_2780_case_0x38d5012af002d671
            var_8 = 0;
            pri = fun_33F8()
            OP_JUMP lab_27C8
        }
        case 0x601e6f278cc391ed:
        {
// switch_2780_case_0x601e6f278cc391ed
            var_8 = 0;
            pri = fun_3528()
            OP_JUMP lab_27C8
        }
    }
}
// fun_27D8
fun_27D8() {
    pri = 0;
    return pri;
}
// fun_27F0
fun_27F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_2340(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2848
fun_2848() {
    pri = 0;
    return pri;
}
// fun_2860
fun_2860() {
    pri = 0;
    return pri;
}
// fun_2878
fun_2878() {
    OP_ZERO_P_S -8
    pri = GetTargetFieldObjectID()
    alt = -4889189955526537819;
    OP_JEQ lab_28E0
    OP_CONST_S -8, 1
// lab_28E0
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4605380978949069210, -4889189955526537819, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_1E80(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 4;
    OP_PUSH2_C -4889189955526537819, 8802641224559852288
    var_64 = 24;
    pri = fun_0AC8(var_56, var_48, var_40)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0B70(var_72)
    var_88 = -4889189955526537819;
    var_96 = 8;
    pri = fun_0B70(var_88)
    var_104 = 0;
    pri = fun_1DF0()
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    OP_PUSH2_C 2863598884876512124, -4889189955526537819
    var_152 = 56;
    pri = fun_1A60(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1BA8(var_160)
    var_176 = 0;
    var_184 = 8771676045187421402;
    var_192 = 0;
    var_200 = 24;
    pri = fun_1C98(var_192, var_184, var_176)
    var_208 = 0;
    var_216 = 8771674945675793191;
    var_224 = 1;
    var_232 = 24;
    pri = fun_1C98(var_224, var_216, var_208)
    var_248 = 0;
    var_256 = 1;
    var_264 = 0;
    var_272 = 1;
    var_280 = 32;
    pri = fun_1D80(var_272, var_264, var_256, var_248)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_2F90
        case default:
        {
// switch_2F90_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2F90_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 2863602183411396757, -4889189955526537819
            var_48 = 56;
            pri = fun_1A60(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1BA8(var_56)
            var_72 = 0;
            pri = fun_1C68()
            var_80 = 1;
            var_88 = 0;
            var_96 = 4641240890982006784;
            var_104 = 0;
            var_112 = 0;
            OP_PUSH4_C 4652992471259676672, 4655374893054741709, 4607182418800017408, 8802641224559852288
            var_120 = 72;
            pri = fun_09F8(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_128 = 50;
            var_136 = 8;
            pri = fun_00B8(var_128)
            var_144 = 12;
            var_152 = 8;
            pri = fun_0318(var_144)
            var_160 = 0;
            pri = fun_0350()
            var_168 = 1352;
            pri = SoundPostEvent(var_168)
            var_176 = 1;
            var_184 = 0;
            var_192 = 1624;
            var_200 = 8;
            var_208 = 32;
            pri = fun_01F0(var_200, var_192, var_184, var_176)
            var_216 = 0;
            pri = fun_0260()
            var_224 = 8802641224559852288;
            var_232 = 8;
            pri = fun_0B70(var_224)
            var_240 = 3;
            var_248 = 0;
            pri = EvCameraEnd(var_248, var_240)
            pri = 1;
            return pri;
            OP_JUMP switch_2F90_case_default
        }
        case 0x1:
        {
// switch_2F90_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 2863601083899768546, -4889189955526537819
            var_48 = 56;
            pri = fun_1A60(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1BA8(var_56)
            var_72 = 0;
            pri = fun_1C68()
            var_80 = 1;
            var_88 = 0;
            var_96 = 4641240890982006784;
            var_104 = 0;
            var_112 = 0;
            var_120 = 8802641224559852288;
            pri = GetFieldObjectPositionZ_(var_120)
            alt = 75;
            var_128 = alt;
            var_136 = pri;
            var_144 = 16;
            pri = fun_0060(var_136, var_128)
            var_152 = pri;
            var_160 = 8802641224559852288;
            pri = GetFieldObjectPositionX_(var_160)
            var_168 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_176 = 72;
            pri = fun_09F8(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_184 = 3;
            var_192 = 15;
            pri = EvCameraEnd(var_192, var_184)
            var_200 = 8802641224559852288;
            var_208 = 8;
            pri = fun_0B70(var_200)
            pri = 0;
            return pri;
            OP_JUMP switch_2F90_case_default
        }
    }
}
// fun_2FE0
fun_2FE0() {
    pri = 0;
    return pri;
}
// fun_2FF8
fun_2FF8() {
    var_8 = -4601338112117134426;
    var_16 = 8;
    pri = fun_05F0(var_8)
    var_24 = 1714533968603238541;
    var_32 = 8;
    pri = fun_05F0(var_24)
    var_40 = -3080511186278356512;
    var_48 = 8;
    pri = fun_05F0(var_40)
    var_56 = 456344909220120189;
    var_64 = 8;
    pri = fun_05F0(var_56)
    var_72 = 1141313780110520273;
    var_80 = 8;
    pri = fun_05F0(var_72)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_3158
    var_88 = -1985652461983578070;
    var_96 = 8;
    pri = fun_05F0(var_88)
    var_104 = -3963089787682859935;
    var_112 = 8;
    pri = fun_05F0(var_104)
    OP_JUMP lab_31A8
// lab_3158
    var_8 = -3598189572607956399;
    var_16 = 8;
    pri = fun_05F0(var_8)
    var_24 = 7606634048257225585;
    var_32 = 8;
    pri = fun_05F0(var_24)
// lab_31A8
    var_8 = 1705;
    var_16 = 8;
    pri = fun_2658(var_8)
    pri = 0;
    return pri;
}
// fun_31D8
fun_31D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 4640537203540230144;
    var_56 = 27250;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 20000;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 9116614320094512028, -3307772254259144861
    var_88 = 80;
    pri = fun_0480(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_96 = 1680;
    pri = SoundPostEvent(var_96)
    var_104 = 1;
    var_112 = 0;
    var_120 = 4641240890982006784;
    var_128 = 0;
    var_136 = 0;
    var_144 = -150;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 0;
    pri = float(var_160)
    var_168 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_2208(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 1952;
    var_192 = 8;
    var_200 = 16;
    pri = fun_0190(var_192, var_184)
    var_208 = 0;
    pri = fun_0260()
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_0B70(var_216)
    pri = 0;
    return pri;
}
// fun_33E0
fun_33E0() {
    pri = 0;
    return pri;
}
// fun_33F8
fun_33F8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_27F0()
    var_16 = 0;
    pri = fun_2848()
    var_24 = 0;
    pri = fun_2860()
    var_32 = 0;
    pri = fun_2878()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_34E8
    var_40 = 0;
    pri = fun_2FE0()
    var_48 = 0;
    pri = fun_2FF8()
    var_56 = 0;
    pri = fun_31D8()
    OP_JUMP lab_3500
// lab_34E8
    var_8 = 0;
    pri = fun_33E0()
// lab_3500
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3528
fun_3528() {
    var_8 = 0;
    pri = fun_2848()
    var_16 = 0;
    pri = fun_2FF8()
    pri = 0;
    return pri;
}
