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
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0440
// lab_0440
    var_8 = 0;
    pri = fun_0558()
    OP_JNZ lab_0478
    OP_JUMP lab_04A8
// lab_0478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0440
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_04D8
// lab_04D8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0518
    pri = 0;
    return pri;
// lab_0518
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04D8
    pri = 0;
    return pri;
}
// fun_0558
fun_0558() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0580
fun_0580() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
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
// fun_06F8
fun_06F8() {
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
// fun_0818
fun_0818() {
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
// fun_0938
fun_0938() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DA0(var_8)
    OP_JZER lab_0A40
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DD0(var_24)
    OP_JNZ lab_0A40
    pri = 0;
    return pri;
// lab_0A40
    OP_JUMP lab_0A50
// lab_0A50
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AB0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A50
    pri = 0;
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B70
    pri = 0;
    return pri;
// lab_0B70
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BB0
// lab_0BB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DA0(var_8)
    OP_JNZ lab_0C38
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C28
    pri = 0;
    return pri;
// lab_0C38
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C80
    pri = 0;
    return pri;
// lab_0C80
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D28(var_8)
    pri = 0;
    return pri;
// lab_0CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BB0
    pri = 0;
    return pri;
// lab_0C28
    OP_JUMP lab_0C80
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E00
fun_0E00() {
    OP_JUMP lab_0E18
// lab_0E18
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0EA8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0E98
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B28(var_8)
    pri = 0;
    return pri;
// lab_0EA8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F38
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F28
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B28(var_8)
    pri = 0;
    return pri;
// lab_0F38
    pri = 0;
    return pri;
// lab_0F28
    OP_JUMP lab_0F48
// lab_0F48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E18
    pri = 0;
    return pri;
// lab_0E98
    OP_JUMP lab_0F48
}
// fun_0F88
fun_0F88() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E00(var_40)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1048
fun_1048() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_10A8
fun_10A8() {
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
// switch_16C0
        case default:
        {
// switch_16C0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1708
// lab_1708
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
            OP_JNZ lab_17B0
            var_88 = 0;
            pri = fun_1968()
// lab_17B0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_16C0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12A8
                case default:
                {
// switch_12A8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1320
// lab_1320
                    OP_JUMP lab_1708
                }
                case 0x0:
                {
// switch_12A8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1320
                }
                case 0x1:
                {
// switch_12A8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1320
                }
                case 0x2:
                {
// switch_12A8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1320
                }
                case 0x3:
                {
// switch_12A8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1320
                }
                case 0x4:
                {
// switch_12A8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1320
                }
                case 0x5:
                {
// switch_12A8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1320
                }
            }
        }
        case 0x65:
        {
// switch_16C0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1460
                case default:
                {
// switch_1460_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14D8
// lab_14D8
                    OP_JUMP lab_1708
                }
                case 0x0:
                {
// switch_1460_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_14D8
                }
                case 0x1:
                {
// switch_1460_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_14D8
                }
                case 0x2:
                {
// switch_1460_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_14D8
                }
                case 0x3:
                {
// switch_1460_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14D8
                }
                case 0x4:
                {
// switch_1460_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_14D8
                }
                case 0x5:
                {
// switch_1460_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_14D8
                }
            }
        }
        case 0x66:
        {
// switch_16C0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1618
                case default:
                {
// switch_1618_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1690
// lab_1690
                    OP_JUMP lab_1708
                }
                case 0x0:
                {
// switch_1618_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1690
                }
                case 0x1:
                {
// switch_1618_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1690
                }
                case 0x2:
                {
// switch_1618_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1690
                }
                case 0x3:
                {
// switch_1618_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1690
                }
                case 0x4:
                {
// switch_1618_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1690
                }
                case 0x5:
                {
// switch_1618_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1690
                }
            }
        }
    }
}
// fun_17C8
fun_17C8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AF0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1870
    pri = 1;
    return pri;
// lab_1870
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_18B8
fun_18B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1908
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17C8(var_8)
    arg_2 = pri;
// lab_1908
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1968
fun_1968() {
    OP_JUMP lab_1980
// lab_1980
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19C0
    pri = 0;
    return pri;
// lab_19C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1980
    pri = 0;
    return pri;
}
// fun_1A00
fun_1A00() {
    var_8 = 0;
    pri = fun_1968()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1AB0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1AB0
    pri = 0;
    return pri;
}
// fun_1AC0
fun_1AC0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1AF0
fun_1AF0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1B20
// lab_1B20
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B60
    OP_JUMP lab_1B90
// lab_1B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B20
// lab_1B90
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
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
// fun_1C48
fun_1C48() {
    OP_JUMP lab_1C60
// lab_1C60
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C98
    pri = 0;
    return pri;
// lab_1C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C60
    pri = 0;
    return pri;
}
// fun_1CD8
fun_1CD8() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_05D8(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_06F8(var_72, var_64, var_56)
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
    pri = fun_0818(var_136, var_128, var_120)
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
// fun_1E38
fun_1E38() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1EC0
// lab_1EC0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_2040
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_2030
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1F80
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1F80
    pri = 0;
    OP_JUMP lab_1F88
// lab_2040
    pri = 0;
    return pri;
// lab_2030
    OP_JUMP lab_1EB8
// lab_1EB8
    OP_INC_P_S -936
// lab_1F80
    pri = 1;
// lab_1F88
    OP_JZER lab_2000
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1FF8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_2000
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1FF8
}
// fun_2060
fun_2060() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_20F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_01F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0260()
    var_56 = 0;
    pri = fun_1048()
// lab_20F8
    pri = arg_4;
    OP_JZER lab_2130
    var_8 = 1;
    var_16 = 8;
    pri = fun_1070(var_8)
// lab_2130
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2188
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2188
    pri = 0;
    OP_JUMP lab_2190
// lab_2188
    pri = 1;
// lab_2190
    OP_JZER lab_2258
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_2258
    var_16 = 0;
    pri = fun_02F0()
    OP_JZER lab_2230
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0F88(var_32, var_24)
    OP_JUMP lab_2258
// lab_2258
    pri = arg_2;
    OP_JZER lab_2330
    var_8 = 0;
    pri = fun_02F0()
    OP_JZER lab_2300
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D60(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0938(var_40)
    OP_JUMP lab_2330
// lab_2330
    pri = arg_3;
    OP_JZER lab_2368
    var_8 = 1;
    var_16 = 8;
    pri = fun_1010(var_8)
// lab_2368
    pri = 0;
    return pri;
// lab_2300
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D60(var_16, var_8)
// lab_2230
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F88(var_16, var_8)
}
// fun_2378
fun_2378() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1E38(var_24)
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    pri = g_mode;
    switch (pri) {
// switch_24C8
        case default:
        {
// switch_24C8_case_default
            pri = CommandNOP()
            OP_JUMP lab_2520
// lab_2520
            pri = 0;
            return pri;
        }
        case 0x92d84afbb1aada34:
        {
// switch_24C8_case_0x92d84afbb1aada34
            var_8 = 0;
            pri = fun_3010()
            OP_JUMP lab_2520
        }
        case 0x0:
        {
// switch_24C8_case_0x0
            var_8 = 0;
            pri = fun_2530()
            OP_JUMP lab_2520
        }
        case 0x38caf42aeffa6bd5:
        {
// switch_24C8_case_0x38caf42aeffa6bd5
            var_8 = 0;
            pri = fun_2EB8()
            OP_JUMP lab_2520
        }
        case 0x602f6a278cd1fca1:
        {
// switch_24C8_case_0x602f6a278cd1fca1
            var_8 = 0;
            pri = fun_3268()
            OP_JUMP lab_2520
        }
    }
}
// fun_2530
fun_2530() {
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_2060(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25A0
fun_25A0() {
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    pri = 0;
    return pri;
}
// fun_25D0
fun_25D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -1983266781276115916, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_1CD8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C -1983266781276115916, 8802641224559852288
    var_88 = 48;
    pri = fun_0970(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, -1983266781276115916
    var_128 = 48;
    pri = fun_0970(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_09C8(var_136)
    var_152 = -1983266781276115916;
    var_160 = 8;
    pri = fun_09C8(var_152)
    var_168 = 0;
    pri = fun_1C48()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C 6799388443947863092, -1983266781276115916
    var_216 = 56;
    pri = fun_18B8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_1A00(var_224)
    var_240 = 0;
    var_248 = -3706576230307511950;
    var_256 = 0;
    var_264 = 24;
    pri = fun_1AF0(var_256, var_248, var_240)
    var_272 = 0;
    var_280 = -3706577329819140161;
    var_288 = 1;
    var_296 = 24;
    pri = fun_1AF0(var_288, var_280, var_272)
    var_312 = 0;
    var_320 = 1;
    var_328 = 0;
    var_336 = 1;
    var_344 = 32;
    pri = fun_1BD8(var_336, var_328, var_320, var_312)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_2AD0
        case default:
        {
// switch_2AD0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2AD0_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 6799391742482747725, -1983266781276115916
            var_48 = 56;
            pri = fun_18B8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1A00(var_56)
            var_72 = 0;
            pri = fun_1AC0()
            var_80 = 1;
            var_88 = 0;
            var_96 = 1256;
            var_104 = 8;
            var_112 = 32;
            pri = fun_01F0(var_104, var_96, var_88, var_80)
            var_120 = 0;
            pri = fun_0260()
            var_128 = 3;
            var_136 = 0;
            pri = EvCameraEnd(var_136, var_128)
            var_144 = 1;
            pri = SetPlayerUniform(var_144)
            pri = 1;
            return pri;
            OP_JUMP switch_2AD0_case_default
        }
        case 0x1:
        {
// switch_2AD0_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 6799390642971119514, -1983266781276115916
            var_48 = 56;
            pri = fun_18B8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1A00(var_56)
            var_72 = 0;
            pri = fun_1AC0()
            var_80 = 3;
            var_88 = 15;
            pri = EvCameraEnd(var_88, var_80)
            pri = 0;
            return pri;
            OP_JUMP switch_2AD0_case_default
        }
    }
}
// fun_2B20
fun_2B20() {
    pri = 0;
    return pri;
}
// fun_2B38
fun_2B38() {
    pri = 0;
    return pri;
}
// fun_2B50
fun_2B50() {
    var_8 = 1680;
    var_16 = 8;
    pri = fun_2378(var_8)
    var_24 = -4601338112117134426;
    var_32 = 8;
    pri = fun_03D8(var_24)
    var_40 = 1714533968603238541;
    var_48 = 8;
    pri = fun_03D8(var_40)
    var_56 = -3080511186278356512;
    var_64 = 8;
    pri = fun_03D8(var_56)
    var_72 = 456344909220120189;
    var_80 = 8;
    pri = fun_03D8(var_72)
    var_88 = -4889189955526537819;
    var_96 = 8;
    pri = fun_03D8(var_88)
    var_104 = 1141313780110520273;
    var_112 = 8;
    pri = fun_03D8(var_104)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_2CF8
    var_120 = -3963089787682859935;
    var_128 = 8;
    pri = fun_03D8(var_120)
    var_136 = -1985652461983578070;
    var_144 = 8;
    pri = fun_03D8(var_136)
    OP_JUMP lab_2D48
// lab_2CF8
    var_8 = -3598189572607956399;
    var_16 = 8;
    pri = fun_03D8(var_8)
    var_24 = 7606634048257225585;
    var_32 = 8;
    pri = fun_03D8(var_24)
// lab_2D48
    var_8 = -8861403721397965071;
    pri = VanishFlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_2D80
fun_2D80() {
    pri = 0;
    return pri;
}
// fun_2D98
fun_2D98() {
    var_8 = 0;
    pri = fun_0408()
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    var_48 = 0;
    var_56 = 2275;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 1719;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 9117463143071301695, -3308731028398755628, -7865454304324560332
    var_88 = 80;
    pri = fun_0318(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2E78
fun_2E78() {
    var_8 = 3;
    var_16 = 15;
    pri = EvCameraEnd(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2EB8
fun_2EB8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2548()
    var_16 = 0;
    pri = fun_25A0()
    var_24 = 0;
    pri = fun_25B8()
    var_32 = 0;
    pri = fun_25D0()
    OP_JZER lab_2FA0
    var_40 = 0;
    pri = fun_2B20()
    var_48 = 0;
    pri = fun_2B50()
    var_56 = 0;
    pri = fun_2D98()
    OP_JUMP lab_2FE8
// lab_2FA0
    var_8 = 0;
    pri = fun_2B38()
    var_16 = 0;
    pri = fun_2D80()
    var_24 = 0;
    pri = fun_2E78()
// lab_2FE8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3010
fun_3010() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4588021009760439501, 4657189527045223219, 4658454845026467840, 8802641224559852288
    var_24 = 48;
    pri = fun_0580(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1304;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0190(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 4629418941960159232;
    var_72 = 0;
    OP_PUSH5_C 4653846879755388846, 4612609256350998856, 4654895813848287150, 4657700294176790282, 4638478917773033472
    var_80 = 4650924245907364905;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_1C48()
    var_104 = 30;
    var_112 = 8;
    pri = fun_00B8(var_104)
    var_120 = 0;
    pri = fun_0260()
    var_128 = 0;
    var_136 = 4629418941960159232;
    var_144 = 3;
    OP_PUSH5_C 4657014770667104502, 4635718351938943713, 4658353272142293893, 4658152149475341107, 4639239603897594020
    var_152 = 4657570683746108047;
    var_160 = 200;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_1C48()
    var_176 = 30;
    var_184 = 8;
    pri = fun_00B8(var_176)
    var_192 = 3;
    var_200 = 1;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_3268
fun_3268() {
    var_8 = 0;
    pri = fun_25A0()
    var_16 = 0;
    pri = fun_2B50()
    pri = 0;
    return pri;
}
