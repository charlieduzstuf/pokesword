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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0528
fun_0528() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0560
fun_0560() {
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
// fun_05D8
fun_05D8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A58(var_8)
    OP_JZER lab_06F8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A88(var_24)
    OP_JNZ lab_06F8
    pri = 0;
    return pri;
// lab_06F8
    OP_JUMP lab_0708
// lab_0708
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0768
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0768
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0708
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0828
    pri = 0;
    return pri;
// lab_0828
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0868
// lab_0868
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A58(var_8)
    OP_JNZ lab_08F0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08E0
    pri = 0;
    return pri;
// lab_08F0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0938
    pri = 0;
    return pri;
// lab_0938
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0998
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09E0(var_8)
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0868
    pri = 0;
    return pri;
// lab_08E0
    OP_JUMP lab_0938
}
// fun_09E0
fun_09E0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    OP_JUMP lab_0AD0
// lab_0AD0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0B60
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0B50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E0(var_8)
    pri = 0;
    return pri;
// lab_0B60
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0BE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E0(var_8)
    pri = 0;
    return pri;
// lab_0BF0
    pri = 0;
    return pri;
// lab_0BE0
    OP_JUMP lab_0C00
// lab_0C00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AD0
    pri = 0;
    return pri;
// lab_0B50
    OP_JUMP lab_0C00
}
// fun_0C40
fun_0C40() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AB8(var_40)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0D60
fun_0D60() {
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
// switch_1378
        case default:
        {
// switch_1378_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13C0
// lab_13C0
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
            OP_JNZ lab_1468
            var_88 = 0;
            pri = fun_1620()
// lab_1468
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1378_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F60
                case default:
                {
// switch_0F60_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FD8
// lab_0FD8
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_0F60_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0FD8
                }
                case 0x1:
                {
// switch_0F60_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0FD8
                }
                case 0x2:
                {
// switch_0F60_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0FD8
                }
                case 0x3:
                {
// switch_0F60_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FD8
                }
                case 0x4:
                {
// switch_0F60_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0FD8
                }
                case 0x5:
                {
// switch_0F60_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0FD8
                }
            }
        }
        case 0x65:
        {
// switch_1378_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1118
                case default:
                {
// switch_1118_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1190
// lab_1190
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_1118_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1190
                }
                case 0x1:
                {
// switch_1118_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1190
                }
                case 0x2:
                {
// switch_1118_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1190
                }
                case 0x3:
                {
// switch_1118_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1190
                }
                case 0x4:
                {
// switch_1118_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1190
                }
                case 0x5:
                {
// switch_1118_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1190
                }
            }
        }
        case 0x66:
        {
// switch_1378_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_12D0
                case default:
                {
// switch_12D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1348
// lab_1348
                    OP_JUMP lab_13C0
                }
                case 0x0:
                {
// switch_12D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1348
                }
                case 0x1:
                {
// switch_12D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1348
                }
                case 0x2:
                {
// switch_12D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1348
                }
                case 0x3:
                {
// switch_12D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1348
                }
                case 0x4:
                {
// switch_12D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1348
                }
                case 0x5:
                {
// switch_12D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1348
                }
            }
        }
    }
}
// fun_1480
fun_1480() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07A8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1528
    pri = 1;
    return pri;
// lab_1528
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1570
fun_1570() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1480(var_8)
    arg_2 = pri;
// lab_15C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    OP_JUMP lab_1638
// lab_1638
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1678
    pri = 0;
    return pri;
// lab_1678
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1638
    pri = 0;
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = 0;
    pri = fun_1620()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1768
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1768
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    OP_JUMP lab_17C0
// lab_17C0
    pri = EvCameraMoveWait_()
    OP_JZER lab_17F8
    pri = 0;
    return pri;
// lab_17F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17C0
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_18C0
// lab_18C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1A40
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1A30
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1980
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1980
    pri = 0;
    OP_JUMP lab_1988
// lab_1A40
    pri = 0;
    return pri;
// lab_1A30
    OP_JUMP lab_18B8
// lab_18B8
    OP_INC_P_S -936
// lab_1980
    pri = 1;
// lab_1988
    OP_JZER lab_1A00
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_19F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1A00
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_19F8
}
// fun_1A60
fun_1A60() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1AF8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0D00()
// lab_1AF8
    pri = arg_4;
    OP_JZER lab_1B30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0D28(var_8)
// lab_1B30
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1B88
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1B88
    pri = 0;
    OP_JUMP lab_1B90
// lab_1B88
    pri = 1;
// lab_1B90
    OP_JZER lab_1C58
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1C58
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1C30
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0C40(var_32, var_24)
    OP_JUMP lab_1C58
// lab_1C58
    pri = arg_2;
    OP_JZER lab_1D30
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1D00
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A18(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0528(var_40)
    OP_JUMP lab_1D30
// lab_1D30
    pri = arg_3;
    OP_JZER lab_1D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0CC8(var_8)
// lab_1D68
    pri = 0;
    return pri;
// lab_1D00
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A18(var_16, var_8)
// lab_1C30
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0C40(var_16, var_8)
}
// fun_1D78
fun_1D78() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1838(var_24)
    pri = 0;
    return pri;
}
// fun_1DE0
fun_1DE0() {
    pri = g_mode;
    switch (pri) {
// switch_1EA0
        case default:
        {
// switch_1EA0_case_default
            pri = CommandNOP()
            OP_JUMP lab_1EE8
// lab_1EE8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1EA0_case_0x0
            var_8 = 0;
            pri = fun_1EF8()
            OP_JUMP lab_1EE8
        }
        case 0x1fa1722ae1f5d803:
        {
// switch_1EA0_case_0x1fa1722ae1f5d803
            var_8 = 0;
            pri = fun_3018()
            OP_JUMP lab_1EE8
        }
        case 0x46b460277e882a8f:
        {
// switch_1EA0_case_0x46b460277e882a8f
            var_8 = 0;
            pri = fun_3108()
            OP_JUMP lab_1EE8
        }
    }
}
// fun_1EF8
fun_1EF8() {
    pri = 0;
    return pri;
}
// fun_1F10
fun_1F10() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1A60(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    pri = 0;
    return pri;
}
// fun_1F80
fun_1F80() {
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4654320681306030080, 4655301445678006272, 8802641224559852288
    var_32 = 48;
    pri = fun_0498(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 1;
    var_48 = 1;
    OP_PUSH4_C 4639826479224035738, 4656952912142925824, 4653366305213120512, -8399045066815602958
    var_56 = 48;
    pri = fun_0498(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = -4889189955526537819;
    var_80 = 16;
    pri = fun_04F0(var_72, var_64)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C 4657149482831739617, 4635465024459904123, 4655687066396099871, 4657189175201502331, 4635471357646880113
    var_128 = 4655724933576560476;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_17A8()
    var_152 = 1;
    var_160 = 0;
    var_168 = 30;
    pri = float(var_168)
    var_176 = pri;
    var_184 = -50;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 1;
    OP_PUSH4_C 4656115084282560512, 4655301445678006272, 4607182418800017408, 8802641224559852288
    var_208 = 72;
    pri = fun_0560(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 5;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 1304;
    pri = SoundPostEvent(var_232)
    var_240 = 1576;
    var_248 = 8;
    var_256 = 16;
    pri = fun_0138(var_248, var_240)
    var_264 = 0;
    pri = fun_0208()
    var_272 = 30;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 1;
    var_296 = 0;
    var_304 = 50;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 0;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 0;
    OP_PUSH4_C 4656471326049959936, 4654804466422251520, 4611686018427387904, -8399045066815602958
    var_344 = 72;
    pri = fun_0560(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    OP_PUSH2_C 5183863907548402596, -8399045066815602958
    var_392 = 56;
    pri = fun_1570(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 1;
    var_408 = 8;
    pri = fun_16B8(var_400)
    var_416 = 0;
    pri = fun_1778()
    var_424 = 8802641224559852288;
    var_432 = 8;
    pri = fun_0680(var_424)
    var_440 = -8399045066815602958;
    var_448 = 8;
    pri = fun_0680(var_440)
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH2_C 8802641224559852288, -8399045066815602958
    var_488 = 48;
    pri = fun_0628(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = -8399045066815602958;
    var_504 = 8;
    pri = fun_0680(var_496)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C 5183867206083287229, -8399045066815602958
    var_552 = 56;
    pri = fun_1570(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_16B8(var_560)
    var_576 = 0;
    pri = fun_1778()
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C 5183866106571659018, -8399045066815602958
    var_624 = 56;
    pri = fun_1570(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_16B8(var_632)
    var_648 = 0;
    pri = fun_1778()
    var_656 = 1;
    var_664 = 0;
    var_672 = 50;
    pri = float(var_672)
    var_680 = pri;
    var_688 = 0;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 0;
    OP_PUSH4_C 4654078788747919360, 4655314639817539584, 4611686018427387904, -8399045066815602958
    var_712 = 72;
    pri = fun_0560(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 15;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    var_760 = 180;
    pri = float(var_760)
    var_768 = pri;
    var_776 = 8802641224559852288;
    var_784 = 40;
    pri = fun_05D8(var_776, var_768, var_760, var_752, var_744)
    var_792 = 25;
    var_800 = 8;
    pri = fun_0060(var_792)
    var_808 = 1;
    var_816 = 0;
    var_824 = 1256;
    var_832 = 8;
    var_840 = 32;
    pri = fun_0198(var_832, var_824, var_816, var_808)
    var_848 = 0;
    pri = fun_0208()
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_0680(var_856)
    var_872 = -8399045066815602958;
    var_880 = 8;
    pri = fun_0680(var_872)
    var_888 = 0;
    var_896 = -8399045066815602958;
    var_904 = 16;
    pri = fun_04F0(var_896, var_888)
    var_912 = 1;
    var_920 = -4889189955526537819;
    var_928 = 16;
    pri = fun_04F0(var_920, var_912)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    var_952 = -4889189955526537819;
    pri = GetFieldObjectPositionX_(var_952)
    var_8 = pri;
    var_960 = -4889189955526537819;
    pri = GetFieldObjectPositionZ_(var_960)
    var_16 = pri;
    var_968 = 1;
    var_976 = 1;
    OP_PUSH4_C 4640537203540230144, 4656656044003426304, 4657117179180115558, 8802641224559852288
    var_984 = 48;
    pri = fun_0498(var_976, var_968, var_960, var_952, var_944, var_936)
    var_992 = 1;
    var_1000 = 1;
    OP_PUSH4_C 4631980364248226202, 4655615466198899098, 4655675279631450112, -4889189955526537819
    var_1008 = 48;
    pri = fun_0498(var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1016 = 120;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = 1;
    var_1040 = 0;
    var_1048 = 4641240890982006784;
    var_1056 = 0;
    var_1064 = 0;
    OP_PUSH4_C 4656020086477920666, 4656612063538315264, 4607182418800017408, -4889189955526537819
    var_1072 = 72;
    pri = fun_0560(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 0;
    var_1088 = 4631952216750555136;
    var_1096 = 0;
    OP_PUSH5_C 4656954649371297710, 4637779452455907492, 4657242699427542467, 4657639161330285937, 4638457807149780173
    var_1104 = 4656873175559679508;
    var_1112 = 1;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    pri = fun_17A8()
    var_1128 = 0;
    var_1136 = 4631952216750555136;
    var_1144 = 3;
    OP_PUSH5_C 4656709304346675773, 4637779452455907492, 4656799970075502182, 4657400149492639990, 4638457807149780173
    var_1152 = 4656138877714185585;
    var_1160 = 150;
    pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1168 = 20;
    var_1176 = 8;
    pri = fun_0060(var_1168)
    var_1184 = 1592;
    var_1192 = 30;
    var_1200 = 16;
    pri = fun_0138(var_1192, var_1184)
    var_1208 = 0;
    pri = fun_0208()
    var_1216 = 0;
    var_1224 = 3;
    var_1232 = 0;
    var_1240 = 100;
    var_1248 = -1;
    OP_PUSH2_C -4842607607704272694, -4889189955526537819
    var_1256 = 56;
    pri = fun_1570(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = 1;
    var_1272 = 8;
    pri = fun_16B8(var_1264)
    var_1280 = 0;
    pri = fun_1778()
    var_1288 = -4889189955526537819;
    var_1296 = 8;
    pri = fun_0680(var_1288)
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 0;
    var_1328 = 0;
    OP_PUSH2_C -4889189955526537819, 8802641224559852288
    var_1336 = 48;
    pri = fun_0628(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 0;
    OP_PUSH2_C 8802641224559852288, -4889189955526537819
    var_1376 = 48;
    pri = fun_0628(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1384 = 8802641224559852288;
    var_1392 = 8;
    pri = fun_0680(var_1384)
    var_1400 = -4889189955526537819;
    var_1408 = 8;
    pri = fun_0680(var_1400)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH2_C -4842608707215900905, -4889189955526537819
    var_1456 = 56;
    pri = fun_1570(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_16B8(var_1464)
    var_1480 = 0;
    pri = fun_1778()
    var_1488 = 0;
    var_1496 = 3;
    var_1504 = 0;
    var_1512 = 100;
    var_1520 = -1;
    OP_PUSH2_C -4842609806727529116, -4889189955526537819
    var_1528 = 56;
    pri = fun_1570(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 1;
    var_1544 = 8;
    pri = fun_16B8(var_1536)
    var_1552 = 0;
    pri = fun_1778()
    var_1560 = 1;
    var_1568 = 0;
    var_1576 = 1256;
    var_1584 = 8;
    var_1592 = 32;
    pri = fun_0198(var_1584, var_1576, var_1568, var_1560)
    var_1600 = 0;
    pri = fun_0208()
    var_1608 = 1;
    var_1616 = 1;
    var_1624 = 0;
    pri = float(var_1624)
    var_1632 = pri;
    var_1640 = var_16;
    var_1648 = var_8;
    var_1656 = -4889189955526537819;
    var_1664 = 48;
    pri = fun_0498(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1672 = 3;
    var_1680 = 1;
    pri = EvCameraEnd(var_1680, var_1672)
    var_1688 = 30;
    var_1696 = 8;
    pri = fun_0060(var_1688)
    pri = 0;
    return pri;
}
// fun_2F08
fun_2F08() {
    pri = 0;
    return pri;
}
// fun_2F20
fun_2F20() {
    var_8 = -8399045066815602958;
    var_16 = 8;
    pri = fun_0440(var_8)
    var_24 = -5663627750221996031;
    var_32 = 8;
    pri = fun_02C0(var_24)
    var_40 = 1540;
    var_48 = 8;
    pri = fun_1D78(var_40)
    pri = 0;
    return pri;
}
// fun_2FA8
fun_2FA8() {
    var_8 = 0;
    pri = fun_02F0()
    var_16 = 1592;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_40 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_3018
fun_3018() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1F10()
    var_16 = 0;
    pri = fun_1F68()
    var_24 = 0;
    pri = fun_1F80()
    var_32 = 0;
    pri = fun_1F98()
    var_40 = 0;
    pri = fun_2F08()
    var_48 = 0;
    pri = fun_2F20()
    var_56 = 0;
    pri = fun_2FA8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3108
fun_3108() {
    var_8 = 0;
    pri = fun_1F68()
    var_16 = 0;
    pri = fun_2F20()
    pri = 0;
    return pri;
}
