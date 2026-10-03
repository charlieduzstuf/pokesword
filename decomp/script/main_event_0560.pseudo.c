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
// fun_0348
fun_0348() {
    OP_JUMP lab_0360
// lab_0360
    pri = FadeWait_()
    OP_JZER lab_0398
    pri = 0;
    return pri;
// lab_0398
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0360
    pri = 0;
    return pri;
}
// fun_03D8
fun_03D8() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0400
fun_0400() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0468
// lab_0468
    var_8 = 0;
    pri = fun_0580()
    OP_JNZ lab_04A0
    OP_JUMP lab_04D0
// lab_04A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0468
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0500
// lab_0500
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0540
    pri = 0;
    return pri;
// lab_0540
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0500
    pri = 0;
    return pri;
}
// fun_0580
fun_0580() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
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
// fun_0718
fun_0718() {
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
// fun_0838
fun_0838() {
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
// fun_0958
fun_0958() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09C8
fun_09C8() {
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
// fun_0A40
fun_0A40() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1260(var_8)
    OP_JZER lab_0B60
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1290(var_24)
    OP_JNZ lab_0B60
    pri = 0;
    return pri;
// lab_0B60
    OP_JUMP lab_0B70
// lab_0B70
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0BD0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0BD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B70
    pri = 0;
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D08
    pri = 0;
    return pri;
// lab_0D08
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D48
// lab_0D48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1260(var_8)
    OP_JNZ lab_0DD0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DC0
    pri = 0;
    return pri;
// lab_0DD0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E18
    pri = 0;
    return pri;
// lab_0E18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EC0(var_8)
    pri = 0;
    return pri;
// lab_0E78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D48
    pri = 0;
    return pri;
// lab_0DC0
    OP_JUMP lab_0E18
}
// fun_0EC0
fun_0EC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1260(var_8)
    OP_JZER lab_1058
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 32;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1058
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 144;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_10C0
fun_10C0() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 248;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1616;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_0FB8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12C0
fun_12C0() {
    OP_JUMP lab_12D8
// lab_12D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1368
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1358
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CC0(var_8)
    pri = 0;
    return pri;
// lab_1368
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CC0(var_8)
    pri = 0;
    return pri;
// lab_13F8
    pri = 0;
    return pri;
// lab_13E8
    OP_JUMP lab_1408
// lab_1408
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12D8
    pri = 0;
    return pri;
// lab_1358
    OP_JUMP lab_1408
}
// fun_1448
fun_1448() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CC0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12C0(var_40)
    pri = 0;
    return pri;
}
// fun_14D0
fun_14D0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1508
fun_1508() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
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
// switch_1BB0
        case default:
        {
// switch_1BB0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BF8
// lab_1BF8
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
            OP_JNZ lab_1CA0
            var_88 = 0;
            pri = fun_1E58()
// lab_1CA0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BB0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1798
                case default:
                {
// switch_1798_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1810
// lab_1810
                    OP_JUMP lab_1BF8
                }
                case 0x0:
                {
// switch_1798_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1810
                }
                case 0x1:
                {
// switch_1798_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1810
                }
                case 0x2:
                {
// switch_1798_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1810
                }
                case 0x3:
                {
// switch_1798_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1810
                }
                case 0x4:
                {
// switch_1798_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1810
                }
                case 0x5:
                {
// switch_1798_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1810
                }
            }
        }
        case 0x65:
        {
// switch_1BB0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1950
                case default:
                {
// switch_1950_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19C8
// lab_19C8
                    OP_JUMP lab_1BF8
                }
                case 0x0:
                {
// switch_1950_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19C8
                }
                case 0x1:
                {
// switch_1950_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19C8
                }
                case 0x2:
                {
// switch_1950_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19C8
                }
                case 0x3:
                {
// switch_1950_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19C8
                }
                case 0x4:
                {
// switch_1950_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19C8
                }
                case 0x5:
                {
// switch_1950_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19C8
                }
            }
        }
        case 0x66:
        {
// switch_1BB0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B08
                case default:
                {
// switch_1B08_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B80
// lab_1B80
                    OP_JUMP lab_1BF8
                }
                case 0x0:
                {
// switch_1B08_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B80
                }
                case 0x1:
                {
// switch_1B08_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B80
                }
                case 0x2:
                {
// switch_1B08_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B80
                }
                case 0x3:
                {
// switch_1B08_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B80
                }
                case 0x4:
                {
// switch_1B08_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B80
                }
                case 0x5:
                {
// switch_1B08_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B80
                }
            }
        }
    }
}
// fun_1CB8
fun_1CB8() {
    pri = 2792;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 2872;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C88(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D60
    pri = 1;
    return pri;
// lab_1D60
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DA8
fun_1DA8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CB8(var_8)
    arg_2 = pri;
// lab_1DF8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1598(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    OP_JUMP lab_1E70
// lab_1E70
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EB0
    pri = 0;
    return pri;
// lab_1EB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E70
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    var_8 = 0;
    pri = fun_1E58()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FA0
    var_32 = 2920;
    pri = SoundPostEvent(var_32)
// lab_1FA0
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FE0
fun_1FE0() {
    OP_JUMP lab_1FF8
// lab_1FF8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2030
    pri = 0;
    return pri;
// lab_2030
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FF8
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_05F8(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0718(var_72, var_64, var_56)
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
    pri = fun_0838(var_136, var_128, var_120)
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
// fun_21D0
fun_21D0() {
    pri = arg_4;
    OP_JNZ lab_2208
    var_8 = 0;
    pri = fun_0EF8()
// lab_2208
    pri = arg_1;
    switch (pri) {
// switch_35E0
        case default:
        {
// switch_35E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 3616;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1260(var_264)
            OP_JZER lab_3BA8
            pri = arg_3;
            switch (pri) {
// switch_3B50
                case default:
                {
// switch_3B50_case_default
                    OP_JUMP lab_3E60
// lab_3E60
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3ED0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3ED0
                    var_8 = 0;
                    pri = fun_0F38()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3B50_case_0x1
                    var_8 = 32;
                    var_16 = 3768;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_3B50_case_default
                }
                case 0x2:
                {
// switch_3B50_case_0x2
                    var_8 = 32;
                    var_16 = 3872;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_3B50_case_default
                }
                case 0x3:
                {
// switch_3B50_case_0x3
                    var_8 = 32;
                    var_16 = 3672;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_3B50_case_default
                }
            }
// lab_3BA8
            pri = arg_1;
            OP_JZER lab_3BF8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3BF8
            pri = 0;
            OP_JUMP lab_3C00
// lab_3BF8
            pri = 1;
// lab_3C00
            OP_JZER lab_3C68
            var_8 = 3968;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C88(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3C68
            pri = 1;
            OP_JUMP lab_3C70
// lab_3C68
            pri = 0;
// lab_3C70
            OP_JZER lab_3CC0
            var_8 = 32;
            var_16 = 4064;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_3E60
// lab_3CC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3D28
            var_8 = 32;
            var_16 = 4224;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_3E60
// lab_3D28
            var_16 = 4344;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C88(var_24, var_16)
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
            var_176 = 4448;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 4464;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_35E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1:
        {
// switch_35E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2:
        {
// switch_35E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3:
        {
// switch_35E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x4:
        {
// switch_35E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x5:
        {
// switch_35E0_case_0x5
            var_8 = 1;
            var_16 = 3096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C48(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EC0(var_40)
            OP_JUMP switch_35E0_case_default
        }
        case 0x6:
        {
// switch_35E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x7:
        {
// switch_35E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x8:
        {
// switch_35E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x9:
        {
// switch_35E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xa:
        {
// switch_35E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xb:
        {
// switch_35E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xc:
        {
// switch_35E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xd:
        {
// switch_35E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xe:
        {
// switch_35E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0xf:
        {
// switch_35E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x10:
        {
// switch_35E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x11:
        {
// switch_35E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x12:
        {
// switch_35E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x13:
        {
// switch_35E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x14:
        {
// switch_35E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x15:
        {
// switch_35E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x16:
        {
// switch_35E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x17:
        {
// switch_35E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x18:
        {
// switch_35E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x19:
        {
// switch_35E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1a:
        {
// switch_35E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1b:
        {
// switch_35E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1c:
        {
// switch_35E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1d:
        {
// switch_35E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1e:
        {
// switch_35E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x1f:
        {
// switch_35E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x20:
        {
// switch_35E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x21:
        {
// switch_35E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x22:
        {
// switch_35E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x23:
        {
// switch_35E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x24:
        {
// switch_35E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x25:
        {
// switch_35E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x26:
        {
// switch_35E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x27:
        {
// switch_35E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x28:
        {
// switch_35E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x29:
        {
// switch_35E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2a:
        {
// switch_35E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2b:
        {
// switch_35E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2c:
        {
// switch_35E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2d:
        {
// switch_35E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2e:
        {
// switch_35E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x2f:
        {
// switch_35E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x30:
        {
// switch_35E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x31:
        {
// switch_35E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x32:
        {
// switch_35E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x33:
        {
// switch_35E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x34:
        {
// switch_35E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x35:
        {
// switch_35E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x36:
        {
// switch_35E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x37:
        {
// switch_35E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x38:
        {
// switch_35E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x39:
        {
// switch_35E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3a:
        {
// switch_35E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3b:
        {
// switch_35E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3c:
        {
// switch_35E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 3192;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3d:
        {
// switch_35E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 3368;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
        case 0x3e:
        {
// switch_35E0_case_0x3e
            var_8 = 3;
            var_16 = 3512;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C48(var_24, var_16, var_8)
            OP_JUMP switch_35E0_case_default
        }
    }
}
// fun_3F00
fun_3F00() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4110(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 4512;
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
    var_424 = 4568;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 4584;
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
    OP_JZER lab_40F8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_40F8
    pri = 0;
    return pri;
}
// fun_4110
fun_4110() {
    var_8 = arg_1;
    var_16 = 4632;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4158
fun_4158() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_4258
        case default:
        {
// switch_4258_case_default
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
// switch_4258_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_4258_case_default
        }
        case 0x1:
        {
// switch_4258_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_4258_case_default
        }
        case 0x2:
        {
// switch_4258_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_4258_case_default
        }
        case 0x3:
        {
// switch_4258_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_4258_case_default
        }
    }
}
// fun_4318
fun_4318() {
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
    pri = fun_1DA8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1E58()
    pri = 0;
    return pri;
}
// fun_43B0
fun_43B0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4158(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_4318(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_4458
fun_4458() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_44A8
// lab_44A8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 4736;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_4520
    OP_JUMP lab_4550
// lab_4520
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_44A8
// lab_4550
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_45D8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_21D0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1530(var_56)
// lab_45D8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_4640
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F78(var_24, var_16)
// lab_4640
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F78(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_4700
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0CC0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0A40(var_88, var_80, var_72, var_64, var_56)
// lab_4700
    pri = IsPlayerRideBicycle()
    OP_JZER lab_4740
    pri = 0;
    return pri;
// lab_4740
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4888
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 4856;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C10(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_4850
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_4888
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AE8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0AE8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0CC0(var_40)
    pri = 0;
    return pri;
// lab_4850
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F78(var_16, var_8)
}
// fun_4910
fun_4910() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_43B0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1EF0(var_112)
    var_128 = 0;
    pri = fun_1FB0()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_4458(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_4A88
fun_4A88() {
    pri = 4992;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4B10
// lab_4B10
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4C90
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4C80
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4BD0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4BD0
    pri = 0;
    OP_JUMP lab_4BD8
// lab_4C90
    pri = 0;
    return pri;
// lab_4C80
    OP_JUMP lab_4B08
// lab_4B08
    OP_INC_P_S -936
// lab_4BD0
    pri = 1;
// lab_4BD8
    OP_JZER lab_4C50
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4C48
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4C50
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4C48
}
// fun_4CB0
fun_4CB0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4D48
    var_8 = 1;
    var_16 = 0;
    var_24 = 5912;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02D8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0348()
    var_56 = 0;
    pri = fun_1508()
// lab_4D48
    pri = arg_4;
    OP_JZER lab_4D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_1560(var_8)
// lab_4D80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4DD8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4DD8
    pri = 0;
    OP_JUMP lab_4DE0
// lab_4DD8
    pri = 1;
// lab_4DE0
    OP_JZER lab_4EA8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4EA8
    var_16 = 0;
    pri = fun_03D8()
    OP_JZER lab_4E80
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1448(var_32, var_24)
    OP_JUMP lab_4EA8
// lab_4EA8
    pri = arg_2;
    OP_JZER lab_4F80
    var_8 = 0;
    pri = fun_03D8()
    OP_JZER lab_4F50
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F78(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0990(var_40)
    OP_JUMP lab_4F80
// lab_4F80
    pri = arg_3;
    OP_JZER lab_4FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14D0(var_8)
// lab_4FB8
    pri = 0;
    return pri;
// lab_4F50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F78(var_16, var_8)
// lab_4E80
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1448(var_16, var_8)
}
// fun_4FC8
fun_4FC8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4A88(var_24)
    pri = 0;
    return pri;
}
// fun_5030
fun_5030() {
    pri = g_mode;
    switch (pri) {
// switch_5168
        case default:
        {
// switch_5168_case_default
            pri = CommandNOP()
            OP_JUMP lab_51E0
// lab_51E0
            pri = 0;
            return pri;
        }
        case 0xbfbe96221eabf673:
        {
// switch_5168_case_0xbfbe96221eabf673
            var_8 = 0;
            pri = fun_6548()
            OP_JUMP lab_51E0
        }
        case 0x0:
        {
// switch_5168_case_0x0
            var_8 = 0;
            pri = fun_51F0()
            OP_JUMP lab_51E0
        }
        case 0x273fef41f5f13a28:
        {
// switch_5168_case_0x273fef41f5f13a28
            var_8 = 0;
            pri = fun_66C8()
            OP_JUMP lab_51E0
        }
        case 0x273ff241f5f13f41:
        {
// switch_5168_case_0x273ff241f5f13f41
            var_8 = 0;
            pri = fun_69F0()
            OP_JUMP lab_51E0
        }
        case 0x5d9b841e6deb13b7:
        {
// switch_5168_case_0x5d9b841e6deb13b7
            var_8 = 0;
            pri = fun_6650()
            OP_JUMP lab_51E0
        }
        case 0x6be721474ff054e0:
        {
// switch_5168_case_0x6be721474ff054e0
            var_8 = 0;
            pri = fun_6DD0()
            OP_JUMP lab_51E0
        }
    }
}
// fun_51F0
fun_51F0() {
    pri = 0;
    return pri;
}
// fun_5208
fun_5208() {
    pri = 0;
    return pri;
}
// fun_5220
fun_5220() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4CB0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5278
fun_5278() {
    var_8 = 4090159915399653913;
    var_16 = 8;
    pri = fun_0400(var_8)
    pri = 0;
    return pri;
}
// fun_52B8
fun_52B8() {
    var_8 = 0;
    pri = fun_0430()
    pri = 0;
    return pri;
}
// fun_52E8
fun_52E8() {
    var_8 = 50;
    var_16 = 3;
    OP_PUSH4_C 4602678819172646912, 4605380978949069210, 7983844220748856187, 8802641224559852288
    var_24 = 45;
    var_32 = 56;
    pri = fun_2070(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_40 = 1;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH2_C 4607182418800017408, 7983844220748856187
    var_64 = 0;
    var_72 = 48;
    pri = fun_10C0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 15;
    var_88 = 8;
    pri = fun_00B8(var_80)
    var_96 = 1;
    var_104 = 90;
    OP_PUSH3_C 4665871050955816960, 4666323499990646784, 4090159915399653913
    var_112 = 40;
    pri = fun_05A8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 0;
    var_128 = 4090159915399653913;
    var_136 = 16;
    pri = fun_0958(var_128, var_120)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH2_C 7983844220748856187, 8802641224559852288
    var_176 = 48;
    pri = fun_0A90(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH2_C 8802641224559852288, 7983844220748856187
    var_216 = 48;
    pri = fun_0A90(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 3;
    var_240 = 0;
    var_248 = 100;
    var_256 = -1;
    OP_PUSH2_C 6257084964089667413, 7983844220748856187
    var_264 = 56;
    pri = fun_1DA8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1EF0(var_272)
    var_288 = 0;
    pri = fun_1FB0()
    var_296 = 0;
    pri = fun_1FE0()
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_0AE8(var_304)
    var_320 = 7983844220748856187;
    var_328 = 8;
    pri = fun_0AE8(var_320)
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = -161;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 7983844220748856187;
    var_384 = 40;
    pri = fun_0A40(var_376, var_368, var_360, var_352, var_344)
    var_392 = 1;
    var_400 = 0;
    var_408 = 30;
    pri = float(var_408)
    var_416 = pri;
    var_424 = 180;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 1;
    OP_PUSH4_C 4665922178246508544, 4666565172646431949, 4607182418800017408, 8802641224559852288
    var_448 = 72;
    pri = fun_09C8(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 8802641224559852288;
    var_464 = 8;
    pri = fun_0AE8(var_456)
    var_472 = 7983844220748856187;
    var_480 = 8;
    pri = fun_0AE8(var_472)
    var_488 = 0;
    var_496 = 4631952216750555136;
    var_504 = 0;
    OP_PUSH5_C 4665762842518969385, 4635403803652469555, 4666602050266427556, 4665886570562443018, 4638079223306104340
    var_512 = 4666608114073054740;
    var_520 = 1;
    pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_528 = 0;
    pri = fun_1FE0()
    var_536 = 0;
    var_544 = 4631952216750555136;
    var_552 = 3;
    OP_PUSH5_C 4665885910855466353, 4635019590309259510, 4666602473578404250, 4666009638898939986, 4637692898900568965
    var_560 = 4666608531887473295;
    var_568 = 95;
    pri = EvCameraMove(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_576 = 35;
    var_584 = 8;
    pri = fun_00B8(var_576)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C 6257081665554782780, 7983844220748856187
    var_632 = 56;
    pri = fun_1DA8(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_1EF0(var_640)
    var_656 = 0;
    pri = fun_1FB0()
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C 7983844220748856187, 8802641224559852288
    var_696 = 48;
    pri = fun_0A90(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 8802641224559852288, 7983844220748856187
    var_736 = 48;
    pri = fun_0A90(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_0AE8(var_744)
    var_760 = 7983844220748856187;
    var_768 = 8;
    pri = fun_0AE8(var_760)
    var_776 = 0;
    var_784 = 3;
    var_792 = 7983844220748856187;
    var_800 = 24;
    pri = fun_3F00(var_792, var_784, var_776)
    var_808 = 1;
    var_816 = 8;
    pri = fun_00B8(var_808)
    var_824 = 7983844220748856187;
    var_832 = 8;
    pri = fun_0CC0(var_824)
    var_840 = 0;
    var_848 = 3;
    var_856 = 0;
    var_864 = 100;
    var_872 = -1;
    OP_PUSH2_C 6257082765066410991, 7983844220748856187
    var_880 = 56;
    pri = fun_1DA8(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 1;
    var_896 = 8;
    pri = fun_1EF0(var_888)
    var_904 = 0;
    pri = fun_1FB0()
    var_912 = 0;
    var_920 = 3;
    var_928 = 0;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C 6257079466531526358, 7983844220748856187
    var_952 = 56;
    pri = fun_1DA8(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 1;
    var_968 = 8;
    pri = fun_1EF0(var_960)
    var_976 = 0;
    pri = fun_1FB0()
    var_984 = 0;
    var_992 = 0;
    var_1000 = 7983844220748856187;
    var_1008 = 24;
    pri = fun_3F00(var_1000, var_992, var_984)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_00B8(var_1016)
    var_1032 = 7983844220748856187;
    var_1040 = 8;
    pri = fun_0CC0(var_1032)
    var_1048 = 1;
    var_1056 = 4090159915399653913;
    var_1064 = 16;
    pri = fun_0958(var_1056, var_1048)
    var_1072 = 1;
    var_1080 = 0;
    var_1088 = 4641240890982006784;
    var_1096 = 0;
    var_1104 = 0;
    OP_PUSH4_C 4665871050955816960, 4666471384304582656, 4607182418800017408, 4090159915399653913
    var_1112 = 72;
    pri = fun_09C8(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    var_1128 = 4631952216750555136;
    var_1136 = 3;
    OP_PUSH5_C 4665929028203949588, 4634793706640449208, 4666556327075386491, 4666052910179051110, 4637460682044782674
    var_1144 = 4666556371055851602;
    var_1152 = 70;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 835;
    pri = SoundPlayPokeVoice(var_1184, var_1176, var_1168, var_1160)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C -4754231907180751733, 4090159915399653913
    var_1232 = 56;
    pri = fun_1DA8(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 4090159915399653913;
    var_1248 = 8;
    pri = fun_0AE8(var_1240)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_1EF0(var_1256)
    var_1272 = 0;
    pri = fun_1FB0()
    var_1280 = 0;
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    OP_PUSH2_C 4090159915399653913, 8802641224559852288
    var_1312 = 48;
    pri = fun_0A90(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 0;
    OP_PUSH2_C 4090159915399653913, 7983844220748856187
    var_1352 = 48;
    pri = fun_0A90(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1360 = 0;
    var_1368 = 3;
    var_1376 = 0;
    var_1384 = 100;
    var_1392 = -1;
    OP_PUSH2_C 6257080566043154569, 7983844220748856187
    var_1400 = 56;
    pri = fun_1DA8(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1408 = 1;
    var_1416 = 8;
    pri = fun_1EF0(var_1408)
    var_1424 = 0;
    pri = fun_1FB0()
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 7983844220748856187;
    var_1456 = 24;
    pri = fun_3F00(var_1448, var_1440, var_1432)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_00B8(var_1464)
    var_1480 = 7983844220748856187;
    var_1488 = 8;
    pri = fun_0CC0(var_1480)
    var_1496 = 4090159915399653913;
    var_1504 = 8;
    pri = fun_0AE8(var_1496)
    var_1512 = 8802641224559852288;
    var_1520 = 8;
    pri = fun_0AE8(var_1512)
    var_1528 = 7983844220748856187;
    var_1536 = 8;
    pri = fun_0AE8(var_1528)
    var_1544 = 1;
    var_1552 = 0;
    var_1560 = 4641240890982006784;
    var_1568 = 0;
    var_1576 = 0;
    OP_PUSH4_C 4665871050955816960, 4666323499990646784, 4607182418800017408, 4090159915399653913
    var_1584 = 72;
    pri = fun_09C8(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1592 = 4090159915399653913;
    var_1600 = 8;
    pri = fun_0AE8(var_1592)
    OP_PUSH2_C 4090159915399653913, -6473692393992369501
    pri = SetBamiriInfoToChara(var_1600, var_1592)
    var_1608 = 0;
    pri = fun_1FE0()
    var_1616 = 3;
    var_1624 = 30;
    pri = EvCameraEnd(var_1624, var_1616)
    pri = 0;
    return pri;
}
// fun_6150
fun_6150() {
    pri = 0;
    return pri;
}
// fun_6168
fun_6168() {
    var_8 = 570;
    var_16 = 8;
    pri = fun_4FC8(var_8)
    var_24 = 10;
    var_32 = 703962368986424291;
    pri = WorkSet(var_32, var_24)
    var_40 = -7459836055509795977;
    var_48 = 8;
    pri = fun_0400(var_40)
    var_56 = 1341676596660868790;
    pri = VanishFlagSet(var_56)
    var_64 = 8661207189725172744;
    pri = VanishFlagSet(var_64)
    var_72 = 189517696436208142;
    pri = VanishFlagSet(var_72)
    var_80 = 7241287441575206891;
    pri = VanishFlagSet(var_80)
    var_88 = 8934092026399605527;
    pri = VanishFlagSet(var_88)
    var_96 = -3276543787315562266;
    pri = VanishFlagSet(var_96)
    var_104 = 6876896308051621773;
    pri = VanishFlagSet(var_104)
    var_112 = -2952232645155182278;
    pri = VanishFlagSet(var_112)
    var_120 = 8661210488260057377;
    pri = VanishFlagSet(var_120)
    var_128 = -3276542687803934055;
    pri = VanishFlagSet(var_128)
    var_136 = -6389907082618827969;
    pri = VanishFlagSet(var_136)
    var_144 = 8934088727864720894;
    pri = VanishFlagSet(var_144)
    var_152 = -2176457642552959458;
    pri = VanishFlagSet(var_152)
    var_160 = 1983516971041023246;
    pri = VanishFlagReset(var_160)
    var_168 = 713219082408657684;
    pri = VanishFlagReset(var_168)
    var_176 = -7024236298326424865;
    pri = VanishFlagReset(var_176)
    var_184 = 1243398226496293493;
    pri = VanishFlagReset(var_184)
    var_192 = 3728295895286019813;
    pri = FlagSet(var_192)
    var_200 = -8196952725690005508;
    pri = FlagReset(var_200)
    var_208 = -2217935711652527108;
    pri = FlagReset(var_208)
    pri = 0;
    return pri;
}
// fun_6518
fun_6518() {
    var_8 = 0;
    pri = fun_0430()
    pri = 0;
    return pri;
}
// fun_6548
fun_6548() {
    var_8 = 0;
    pri = fun_5208()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_5220()
    var_24 = 0;
    pri = fun_5278()
    var_32 = 0;
    pri = fun_52B8()
    var_40 = 0;
    pri = fun_52E8()
    var_48 = 0;
    pri = fun_6150()
    var_56 = 0;
    pri = fun_6168()
    var_64 = 0;
    pri = fun_6518()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6650
fun_6650() {
    var_8 = 0;
    pri = fun_5278()
    var_16 = 0;
    pri = fun_6168()
    var_24 = 30;
    var_32 = 703962368986424291;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_66C8
fun_66C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4CB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 4090159915399653913, 8802641224559852288
    var_88 = 48;
    pri = fun_0A90(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 100;
    var_104 = 3;
    OP_PUSH4_C 4602678819172646912, 4603579539098121012, 4090159915399653913, 8802641224559852288
    var_112 = 15;
    var_120 = 56;
    pri = fun_2070(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 0;
    pri = fun_1FE0()
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_0AE8(var_136)
    var_152 = 1;
    var_160 = 0;
    var_168 = 4641240890982006784;
    var_176 = 0;
    var_184 = 0;
    OP_PUSH4_C 4665822672444194816, 4664749549095485440, 4607182418800017408, 4090159915399653913
    var_192 = 72;
    pri = fun_09C8(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 835;
    pri = SoundPlayPokeVoice(var_224, var_216, var_208, var_200)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -4754229708157495311, 4090159915399653913
    var_272 = 56;
    pri = fun_1DA8(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1EF0(var_280)
    var_296 = 0;
    pri = fun_1FB0()
    var_304 = 4090159915399653913;
    var_312 = 8;
    pri = fun_0AE8(var_304)
    OP_PUSH2_C 4090159915399653913, -6473691294480741290
    pri = SetBamiriInfoToChara(var_312, var_304)
    var_320 = 20;
    var_328 = 703962368986424291;
    pri = WorkSet(var_328, var_320)
    var_336 = 3;
    var_344 = 15;
    pri = EvCameraEnd(var_344, var_336)
    pri = 0;
    return pri;
}
// fun_69F0
fun_69F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4CB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 4090159915399653913, 8802641224559852288
    var_88 = 48;
    pri = fun_0A90(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 3;
    OP_PUSH5_C 4665312125214953308, 4637616196969415311, 4663215147633575199, 4665705695402115727, 4642913556031109857
    var_120 = 4663419656796341535;
    var_128 = 15;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_1FE0()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0AE8(var_144)
    var_160 = 1;
    var_168 = 0;
    var_176 = 4641240890982006784;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH4_C 4664748449583857664, 4662242662584156160, 4611686018427387904, 4090159915399653913
    var_200 = 72;
    pri = fun_09C8(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 835;
    pri = SoundPlayPokeVoice(var_232, var_224, var_216, var_208)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C -4754233006692379944, 4090159915399653913
    var_280 = 56;
    pri = fun_1DA8(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1EF0(var_288)
    var_304 = 0;
    pri = fun_1FB0()
    var_312 = 4090159915399653913;
    var_320 = 8;
    pri = fun_0AE8(var_312)
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = 65;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 4090159915399653913;
    var_376 = 40;
    pri = fun_0A40(var_368, var_360, var_352, var_344, var_336)
    var_384 = 4090159915399653913;
    var_392 = 8;
    pri = fun_0AE8(var_384)
    OP_PUSH2_C 4090159915399653913, -6473690194969113079
    pri = SetBamiriInfoToChara(var_392, var_384)
    var_400 = 30;
    var_408 = 703962368986424291;
    pri = WorkSet(var_408, var_400)
    var_416 = 3;
    var_424 = 15;
    pri = EvCameraEnd(var_424, var_416)
    pri = 0;
    return pri;
}
// fun_6DD0
fun_6DD0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6257079466531526358;
    var_88 = 80;
    pri = fun_4910(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
