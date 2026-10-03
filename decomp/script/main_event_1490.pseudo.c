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
    alt = -9223372036854775808;
    OP_XOR 
    return pri;
}
// fun_0090
fun_0090() {
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00E8
fun_00E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_0128
    pri = 0;
    return pri;
// lab_0128
    OP_ZERO_P_S -8
    OP_JUMP lab_0150
// lab_0150
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_01A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0148
// lab_01A8
    pri = 0;
    return pri;
// lab_0148
    OP_INC_P_S -8
}
// fun_01C0
fun_01C0() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0220
fun_0220() {
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
// fun_0290
fun_0290() {
    OP_JUMP lab_02A8
// lab_02A8
    pri = FadeWait_()
    OP_JZER lab_02E0
    pri = 0;
    return pri;
// lab_02E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02A8
    pri = 0;
    return pri;
}
// fun_0320
fun_0320() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0348
fun_0348() {
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
// fun_0408
fun_0408() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0468
fun_0468() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_04A8
fun_04A8() {
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
// fun_05C8
fun_05C8() {
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
// fun_06E8
fun_06E8() {
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
// fun_0808
fun_0808() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1180(var_8)
    OP_JZER lab_0910
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11B0(var_24)
    OP_JNZ lab_0910
    pri = 0;
    return pri;
// lab_0910
    OP_JUMP lab_0920
// lab_0920
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0980
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0920
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A80
    pri = 0;
    return pri;
// lab_0A80
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AC0
// lab_0AC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1180(var_8)
    OP_JNZ lab_0B48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B38
    pri = 0;
    return pri;
// lab_0B48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0B90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C38(var_8)
    pri = 0;
    return pri;
// lab_0BF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AC0
    pri = 0;
    return pri;
// lab_0B38
    OP_JUMP lab_0B90
}
// fun_0C38
fun_0C38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1090
        case default:
        {
// switch_1090_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1090_case_0x0
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0C70(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1090_case_default
        }
        case 0x1:
        {
// switch_1090_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0C70(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1090_case_default
        }
        case 0x2:
        {
// switch_1090_case_0x2
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = 0;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0C70(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1090_case_default
        }
        case 0x3:
        {
// switch_1090_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0C70(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1090_case_default
        }
        case 0x4:
        {
// switch_1090_case_0x4
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = 8;
            pri = fun_0060(var_56)
            var_72 = pri;
            var_80 = arg_0;
            var_88 = 48;
            pri = fun_0C70(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1090_case_default
        }
        case 0x5:
        {
// switch_1090_case_0x5
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0C70(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1090_case_default
        }
        case 0x6:
        {
// switch_1090_case_0x6
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0C70(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1090_case_default
        }
        case 0x7:
        {
// switch_1090_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0C70(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1090_case_default
        }
    }
}
// fun_1140
fun_1140() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_11E0
fun_11E0() {
    OP_JUMP lab_11F8
// lab_11F8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1288
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1278
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_1288
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1318
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1308
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_1318
    pri = 0;
    return pri;
// lab_1308
    OP_JUMP lab_1328
// lab_1328
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11F8
    pri = 0;
    return pri;
// lab_1278
    OP_JUMP lab_1328
}
// fun_1368
fun_1368() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_11E0(var_40)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1450
fun_1450() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
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
// switch_1AA0
        case default:
        {
// switch_1AA0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AE8
// lab_1AE8
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
            OP_JNZ lab_1B90
            var_88 = 0;
            pri = fun_1E10()
// lab_1B90
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AA0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1688
                case default:
                {
// switch_1688_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1700
// lab_1700
                    OP_JUMP lab_1AE8
                }
                case 0x0:
                {
// switch_1688_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1700
                }
                case 0x1:
                {
// switch_1688_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1700
                }
                case 0x2:
                {
// switch_1688_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1700
                }
                case 0x3:
                {
// switch_1688_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1700
                }
                case 0x4:
                {
// switch_1688_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1700
                }
                case 0x5:
                {
// switch_1688_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1700
                }
            }
        }
        case 0x65:
        {
// switch_1AA0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1840
                case default:
                {
// switch_1840_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18B8
// lab_18B8
                    OP_JUMP lab_1AE8
                }
                case 0x0:
                {
// switch_1840_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_18B8
                }
                case 0x1:
                {
// switch_1840_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_18B8
                }
                case 0x2:
                {
// switch_1840_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_18B8
                }
                case 0x3:
                {
// switch_1840_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18B8
                }
                case 0x4:
                {
// switch_1840_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_18B8
                }
                case 0x5:
                {
// switch_1840_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_18B8
                }
            }
        }
        case 0x66:
        {
// switch_1AA0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19F8
                case default:
                {
// switch_19F8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A70
// lab_1A70
                    OP_JUMP lab_1AE8
                }
                case 0x0:
                {
// switch_19F8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A70
                }
                case 0x1:
                {
// switch_19F8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A70
                }
                case 0x2:
                {
// switch_19F8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A70
                }
                case 0x3:
                {
// switch_19F8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A70
                }
                case 0x4:
                {
// switch_19F8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A70
                }
                case 0x5:
                {
// switch_19F8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A70
                }
            }
        }
    }
}
// fun_1BA8
fun_1BA8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A00(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C50
    pri = 1;
    return pri;
// lab_1C50
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C98
fun_1C98() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BA8(var_8)
    arg_2 = pri;
// lab_1CE8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1488(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D48
fun_1D48() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BA8(var_8)
    arg_2 = pri;
// lab_1D98
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    OP_JUMP lab_1E28
// lab_1E28
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E68
    pri = 0;
    return pri;
// lab_1E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E28
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    var_8 = 0;
    pri = fun_1E10()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F58
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1F58
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    OP_JUMP lab_1FE8
// lab_1FE8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2030
    OP_JUMP lab_2060
    OP_JUMP lab_2050
// lab_2030
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2060
    pri = 0;
    return pri;
// lab_2050
    OP_JUMP lab_1FE8
}
// fun_2070
fun_2070() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    OP_JUMP lab_20B8
// lab_20B8
    pri = EvCameraMoveWait_()
    OP_JZER lab_20F0
    pri = 0;
    return pri;
// lab_20F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20B8
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_04A8(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_05C8(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0090(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_06E8(var_136, var_128, var_120)
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
// fun_2290
fun_2290() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_24A0(var_16, var_8)
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
    OP_JZER lab_2488
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_2488
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_09C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_2570
// lab_2570
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_26F0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_26E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_2630
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_2630
    pri = 0;
    OP_JUMP lab_2638
// lab_26F0
    pri = 0;
    return pri;
// lab_26E0
    OP_JUMP lab_2568
// lab_2568
    OP_INC_P_S -936
// lab_2630
    pri = 1;
// lab_2638
    OP_JZER lab_26B0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_26A8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_26B0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_26A8
}
// fun_2710
fun_2710() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_27A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0220(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0290()
    var_56 = 0;
    pri = fun_1428()
// lab_27A8
    pri = arg_4;
    OP_JZER lab_27E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1450(var_8)
// lab_27E0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2838
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2838
    pri = 0;
    OP_JUMP lab_2840
// lab_2838
    pri = 1;
// lab_2840
    OP_JZER lab_2908
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_2908
    var_16 = 0;
    pri = fun_0320()
    OP_JZER lab_28E0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1368(var_32, var_24)
    OP_JUMP lab_2908
// lab_2908
    pri = arg_2;
    OP_JZER lab_29E0
    var_8 = 0;
    pri = fun_0320()
    OP_JZER lab_29B0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1140(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0808(var_40)
    OP_JUMP lab_29E0
// lab_29E0
    pri = arg_3;
    OP_JZER lab_2A18
    var_8 = 1;
    var_16 = 8;
    pri = fun_13F0(var_8)
// lab_2A18
    pri = 0;
    return pri;
// lab_29B0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1140(var_16, var_8)
// lab_28E0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1368(var_16, var_8)
}
// fun_2A28
fun_2A28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_24E8(var_24)
    pri = 0;
    return pri;
}
// fun_2A90
fun_2A90() {
    pri = g_mode;
    switch (pri) {
// switch_2B78
        case default:
        {
// switch_2B78_case_default
            pri = CommandNOP()
            OP_JUMP lab_2BD0
// lab_2BD0
            pri = 0;
            return pri;
        }
        case 0x81af79c1ef9e1f0f:
        {
// switch_2B78_case_0x81af79c1ef9e1f0f
            var_8 = 0;
            pri = fun_3478()
            OP_JUMP lab_2BD0
        }
        case 0x0:
        {
// switch_2B78_case_0x0
            var_8 = 0;
            pri = fun_2BE0()
            OP_JUMP lab_2BD0
        }
        case 0x26dba52ae5a594a2:
        {
// switch_2B78_case_0x26dba52ae5a594a2
            var_8 = 0;
            pri = fun_3818()
            OP_JUMP lab_2BD0
        }
        case 0x4fd8132783d7e49e:
        {
// switch_2B78_case_0x4fd8132783d7e49e
            var_8 = 0;
            pri = fun_3908()
            OP_JUMP lab_2BD0
        }
    }
}
// fun_2BE0
fun_2BE0() {
    pri = 0;
    return pri;
}
// fun_2BF8
fun_2BF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_2710(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C50
fun_2C50() {
    pri = 0;
    return pri;
}
// fun_2C68
fun_2C68() {
    pri = 0;
    return pri;
}
// fun_2C80
fun_2C80() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00E8(var_8)
    var_24 = 100;
    var_32 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -1983266781276115916, 8802641224559852288
    var_40 = 15;
    var_48 = 56;
    pri = fun_2130(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C -1983266781276115916, 8802641224559852288
    var_88 = 48;
    pri = fun_0840(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C -1983266781276115916, 3641199730571183281
    var_128 = 48;
    pri = fun_0840(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 8802641224559852288, -1983266781276115916
    var_168 = 48;
    pri = fun_0840(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_0898(var_176)
    var_192 = 3641199730571183281;
    var_200 = 8;
    pri = fun_0898(var_192)
    var_208 = -1983266781276115916;
    var_216 = 8;
    pri = fun_0898(var_208)
    var_224 = 0;
    pri = fun_20A0()
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -4204570233871751919, -1983266781276115916
    var_272 = 56;
    pri = fun_1C98(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1EA8(var_280)
    var_296 = 0;
    pri = fun_1F68()
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    OP_PUSH2_C 3641199730571183281, 8802641224559852288
    var_336 = 48;
    pri = fun_0840(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C 8802641224559852288, 3641199730571183281
    var_376 = 48;
    pri = fun_0840(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0898(var_384)
    var_400 = 3641199730571183281;
    var_408 = 8;
    pri = fun_0898(var_400)
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    OP_PUSH2_C -8906351237944309087, 3641199730571183281
    var_456 = 56;
    pri = fun_1C98(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 1;
    var_472 = 8;
    pri = fun_1EA8(var_464)
    var_480 = 0;
    var_488 = 1;
    var_496 = 3641199730571183281;
    var_504 = 24;
    pri = fun_2290(var_496, var_488, var_480)
    var_512 = 1;
    var_520 = 8;
    pri = fun_00E8(var_512)
    var_528 = 3641199730571183281;
    var_536 = 8;
    pri = fun_0A38(var_528)
    var_544 = 1;
    var_552 = 1;
    var_560 = -1;
    var_568 = 4;
    var_576 = 3641199730571183281;
    var_584 = 40;
    pri = fun_0CD0(var_576, var_568, var_560, var_552, var_544)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C -482314920756568376, 3641199730571183281
    var_632 = 56;
    pri = fun_1C98(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_1EA8(var_640)
    var_656 = 0;
    pri = fun_1F68()
    var_664 = -1;
    var_672 = 3641199730571183281;
    var_680 = 16;
    pri = fun_1140(var_672, var_664)
    var_688 = 0;
    var_696 = 0;
    var_704 = 3641199730571183281;
    var_712 = 24;
    pri = fun_2290(var_704, var_696, var_688)
    var_720 = 1;
    var_728 = 8;
    pri = fun_00E8(var_720)
    var_736 = 3641199730571183281;
    var_744 = 8;
    pri = fun_0A38(var_736)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    OP_PUSH2_C 8802641224559852288, 3641199730571183281
    var_784 = 48;
    pri = fun_0840(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 3641199730571183281;
    var_800 = 8;
    pri = fun_0898(var_792)
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    OP_PUSH2_C -482311622221683743, 3641199730571183281
    var_848 = 56;
    pri = fun_1C98(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 1;
    var_864 = 8;
    pri = fun_1EA8(var_856)
    var_872 = 0;
    pri = fun_1F68()
    var_880 = 1;
    var_888 = 0;
    var_896 = 1480;
    var_904 = 8;
    var_912 = 32;
    pri = fun_0220(var_904, var_896, var_888, var_880)
    var_920 = 0;
    pri = fun_0290()
    var_928 = 3;
    var_936 = 1;
    pri = EvCameraEnd(var_936, var_928)
    pri = IsPlayerUniform()
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_3460
    var_952 = 1;
    pri = SetPlayerUniform(var_952)
// lab_3460
    pri = 0;
    return pri;
}
// fun_3478
fun_3478() {
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0468(var_32, var_24, var_16)
    var_48 = 1528;
    var_56 = 8;
    var_64 = 16;
    pri = fun_01C0(var_56, var_48)
    var_72 = 0;
    pri = fun_0290()
    var_80 = 1576;
    var_88 = 8;
    pri = fun_1F98(var_80)
    var_96 = 0;
    pri = fun_1FD0()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -5333536215050265176, -4889189955526537819
    var_144 = 56;
    pri = fun_1D48(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1EA8(var_152)
    var_168 = 0;
    pri = fun_1F68()
    var_176 = 0;
    pri = fun_2070()
    pri = 0;
    return pri;
}
// fun_3608
fun_3608() {
    pri = 0;
    return pri;
}
// fun_3620
fun_3620() {
    var_8 = 3641199730571183281;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = -8074183856950479541;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = -4889189955526537819;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 1520;
    var_64 = 8;
    pri = fun_2A28(var_56)
    var_72 = 8354367212204860235;
    pri = FlagSet(var_72)
    var_80 = -316047009090804736;
    pri = FlagSet(var_80)
    var_88 = 1;
    var_96 = -6958835188024118277;
    pri = WorkSet(var_96, var_88)
    pri = 0;
    return pri;
}
// fun_3750
fun_3750() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 2275;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 1719;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 9117463143071301695, -3308731028398755628, -9101922448036716785
    var_80 = 80;
    pri = fun_0348(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_3818
fun_3818() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2BF8()
    var_16 = 0;
    pri = fun_2C50()
    var_24 = 0;
    pri = fun_2C68()
    var_32 = 0;
    pri = fun_2C80()
    var_40 = 0;
    pri = fun_3608()
    var_48 = 0;
    pri = fun_3620()
    var_56 = 0;
    pri = fun_3750()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3908
fun_3908() {
    var_8 = 0;
    pri = fun_2C50()
    var_16 = 0;
    pri = fun_3620()
    pri = 0;
    return pri;
}
