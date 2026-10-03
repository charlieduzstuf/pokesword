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
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_04C8
fun_04C8() {
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
// fun_0540
fun_0540() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0590
fun_0590() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D20(var_8)
    OP_JZER lab_0660
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D50(var_24)
    OP_JNZ lab_0660
    pri = 0;
    return pri;
// lab_0660
    OP_JUMP lab_0670
// lab_0670
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07D0
    pri = 0;
    return pri;
// lab_07D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0810
// lab_0810
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D20(var_8)
    OP_JNZ lab_0898
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0888
    pri = 0;
    return pri;
// lab_0898
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08E0
    pri = 0;
    return pri;
// lab_08E0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0940
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_0940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0810
    pri = 0;
    return pri;
// lab_0888
    OP_JUMP lab_08E0
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D20(var_8)
    OP_JZER lab_0B40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A68
    OP_ZERO_P_S 64
// lab_0B40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B78
    OP_CONST_S 64, 1
// lab_0B78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB0
    OP_CONST_S 72, 1
// lab_0BB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 256;
    var_32 = -1;
    var_40 = -1;
    var_48 = 248;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 200;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 160;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0A68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A90
    OP_ZERO_P_S 72
// lab_0A90
    var_8 = 0;
    var_16 = 0;
    var_24 = 152;
    var_32 = -1;
    var_40 = -1;
    var_48 = 144;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 80;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 32;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0C50
// lab_0C50
    pri = 0;
    return pri;
}
// fun_0C60
fun_0C60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D20
fun_0D20() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D80
fun_0D80() {
    OP_JUMP lab_0D98
// lab_0D98
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0E28
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0E18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0788(var_8)
    pri = 0;
    return pri;
// lab_0E28
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EB8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0EA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0788(var_8)
    pri = 0;
    return pri;
// lab_0EB8
    pri = 0;
    return pri;
// lab_0EA8
    OP_JUMP lab_0EC8
// lab_0EC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D98
    pri = 0;
    return pri;
// lab_0E18
    OP_JUMP lab_0EC8
}
// fun_0F08
fun_0F08() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0788(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D80(var_40)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
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
// switch_1640
        case default:
        {
// switch_1640_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1688
// lab_1688
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
            OP_JNZ lab_1730
            var_88 = 0;
            pri = fun_18E8()
// lab_1730
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1640_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1228
                case default:
                {
// switch_1228_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A0
// lab_12A0
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_1228_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_12A0
                }
                case 0x1:
                {
// switch_1228_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_12A0
                }
                case 0x2:
                {
// switch_1228_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_12A0
                }
                case 0x3:
                {
// switch_1228_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A0
                }
                case 0x4:
                {
// switch_1228_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_12A0
                }
                case 0x5:
                {
// switch_1228_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_12A0
                }
            }
        }
        case 0x65:
        {
// switch_1640_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_13E0
                case default:
                {
// switch_13E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1458
// lab_1458
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_13E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1458
                }
                case 0x1:
                {
// switch_13E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1458
                }
                case 0x2:
                {
// switch_13E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1458
                }
                case 0x3:
                {
// switch_13E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1458
                }
                case 0x4:
                {
// switch_13E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1458
                }
                case 0x5:
                {
// switch_13E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1458
                }
            }
        }
        case 0x66:
        {
// switch_1640_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1598
                case default:
                {
// switch_1598_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1610
// lab_1610
                    OP_JUMP lab_1688
                }
                case 0x0:
                {
// switch_1598_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1610
                }
                case 0x1:
                {
// switch_1598_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1610
                }
                case 0x2:
                {
// switch_1598_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1610
                }
                case 0x3:
                {
// switch_1598_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1610
                }
                case 0x4:
                {
// switch_1598_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1610
                }
                case 0x5:
                {
// switch_1598_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1610
                }
            }
        }
    }
}
// fun_1748
fun_1748() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0750(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17F0
    pri = 1;
    return pri;
// lab_17F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1838
fun_1838() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1888
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1748(var_8)
    arg_2 = pri;
// lab_1888
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1028(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18E8
fun_18E8() {
    OP_JUMP lab_1900
// lab_1900
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1940
    pri = 0;
    return pri;
// lab_1940
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1900
    pri = 0;
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = 0;
    pri = fun_18E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A30
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A30
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1AA0
// lab_1AA0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AE0
    OP_JUMP lab_1B10
// lab_1AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AA0
// lab_1B10
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B58
fun_1B58() {
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
// fun_1BC8
fun_1BC8() {
    OP_JUMP lab_1BE0
// lab_1BE0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C18
    pri = 0;
    return pri;
// lab_1C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BE0
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    pri = arg_5;
    OP_JNZ lab_1C90
    var_8 = 0;
    pri = fun_0C60()
// lab_1C90
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1CE0
    OP_CONST_S -8, -1
// lab_1CE0
    pri = arg_1;
    switch (pri) {
// switch_3798
        case default:
        {
// switch_3798_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3C40
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0750(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3C40
            pri = 1;
            OP_JUMP lab_3C48
// lab_3C40
            pri = 0;
// lab_3C48
            OP_JZER lab_3C98
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3EF0
// lab_3C98
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D00
            pri = 1;
            OP_JUMP lab_3D08
// lab_3D00
            pri = 0;
// lab_3D08
            OP_JZER lab_3E90
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0750(var_24, var_16)
            var_528 = pri;
            pri = 0;
            OP_ADDR_ALT -656
            OP_FILL 128
            OP_PUSH_P_ADR -656
            pri = var_528;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -656
            OP_PUSH_P_ADR -656
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_3EF0
// lab_3E90
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3EF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3F60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3F60
            var_8 = 0;
            pri = fun_0CA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3798_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1:
        {
// switch_3798_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x2:
        {
// switch_3798_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3:
        {
// switch_3798_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x4:
        {
// switch_3798_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x5:
        {
// switch_3798_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0988(var_40)
            OP_JUMP switch_3798_case_default
        }
        case 0x6:
        {
// switch_3798_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x7:
        {
// switch_3798_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x8:
        {
// switch_3798_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x9:
        {
// switch_3798_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0xa:
        {
// switch_3798_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0xb:
        {
// switch_3798_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0xc:
        {
// switch_3798_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0xd:
        {
// switch_3798_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xe:
        {
// switch_3798_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xf:
        {
// switch_3798_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x10:
        {
// switch_3798_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x11:
        {
// switch_3798_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x12:
        {
// switch_3798_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x13:
        {
// switch_3798_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x14:
        {
// switch_3798_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x15:
        {
// switch_3798_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x16:
        {
// switch_3798_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x17:
        {
// switch_3798_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x18:
        {
// switch_3798_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x19:
        {
// switch_3798_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1a:
        {
// switch_3798_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1b:
        {
// switch_3798_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1c:
        {
// switch_3798_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x1d:
        {
// switch_3798_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1e:
        {
// switch_3798_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x1f:
        {
// switch_3798_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x20:
        {
// switch_3798_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x21:
        {
// switch_3798_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x22:
        {
// switch_3798_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x23:
        {
// switch_3798_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x24:
        {
// switch_3798_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x25:
        {
// switch_3798_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x26:
        {
// switch_3798_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x27:
        {
// switch_3798_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x28:
        {
// switch_3798_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x29:
        {
// switch_3798_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x2a:
        {
// switch_3798_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x2b:
        {
// switch_3798_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x2c:
        {
// switch_3798_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x2d:
        {
// switch_3798_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x2e:
        {
// switch_3798_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x2f:
        {
// switch_3798_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x30:
        {
// switch_3798_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x31:
        {
// switch_3798_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x32:
        {
// switch_3798_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x33:
        {
// switch_3798_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x34:
        {
// switch_3798_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x35:
        {
// switch_3798_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x36:
        {
// switch_3798_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x37:
        {
// switch_3798_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x38:
        {
// switch_3798_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x39:
        {
// switch_3798_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3a:
        {
// switch_3798_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3b:
        {
// switch_3798_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3c:
        {
// switch_3798_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3d:
        {
// switch_3798_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3e:
        {
// switch_3798_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
    }
}
// fun_3F90
fun_3F90() {
    pri = arg_4;
    OP_JNZ lab_3FC8
    var_8 = 0;
    pri = fun_0C60()
// lab_3FC8
    pri = arg_1;
    switch (pri) {
// switch_53A0
        case default:
        {
// switch_53A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D20(var_264)
            OP_JZER lab_5968
            pri = arg_3;
            switch (pri) {
// switch_5910
                case default:
                {
// switch_5910_case_default
                    OP_JUMP lab_5C20
// lab_5C20
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5C90
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5C90
                    var_8 = 0;
                    pri = fun_0CA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5910_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5910_case_default
                }
                case 0x2:
                {
// switch_5910_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5910_case_default
                }
                case 0x3:
                {
// switch_5910_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5910_case_default
                }
            }
// lab_5968
            pri = arg_1;
            OP_JZER lab_59B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_59B8
            pri = 0;
            OP_JUMP lab_59C0
// lab_59B8
            pri = 1;
// lab_59C0
            OP_JZER lab_5A28
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0750(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A28
            pri = 1;
            OP_JUMP lab_5A30
// lab_5A28
            pri = 0;
// lab_5A30
            OP_JZER lab_5A80
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C20
// lab_5A80
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5AE8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C20
// lab_5AE8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0750(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_53A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1:
        {
// switch_53A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2:
        {
// switch_53A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3:
        {
// switch_53A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x4:
        {
// switch_53A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x5:
        {
// switch_53A0_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0988(var_40)
            OP_JUMP switch_53A0_case_default
        }
        case 0x6:
        {
// switch_53A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x7:
        {
// switch_53A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x8:
        {
// switch_53A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x9:
        {
// switch_53A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xa:
        {
// switch_53A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xb:
        {
// switch_53A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xc:
        {
// switch_53A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xd:
        {
// switch_53A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xe:
        {
// switch_53A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xf:
        {
// switch_53A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x10:
        {
// switch_53A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x11:
        {
// switch_53A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x12:
        {
// switch_53A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x13:
        {
// switch_53A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x14:
        {
// switch_53A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x15:
        {
// switch_53A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x16:
        {
// switch_53A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x17:
        {
// switch_53A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x18:
        {
// switch_53A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x19:
        {
// switch_53A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1a:
        {
// switch_53A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1b:
        {
// switch_53A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1c:
        {
// switch_53A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1d:
        {
// switch_53A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1e:
        {
// switch_53A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1f:
        {
// switch_53A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x20:
        {
// switch_53A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x21:
        {
// switch_53A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x22:
        {
// switch_53A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x23:
        {
// switch_53A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x24:
        {
// switch_53A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x25:
        {
// switch_53A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x26:
        {
// switch_53A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x27:
        {
// switch_53A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x28:
        {
// switch_53A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x29:
        {
// switch_53A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2a:
        {
// switch_53A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2b:
        {
// switch_53A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2c:
        {
// switch_53A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2d:
        {
// switch_53A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2e:
        {
// switch_53A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2f:
        {
// switch_53A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x30:
        {
// switch_53A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x31:
        {
// switch_53A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x32:
        {
// switch_53A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x33:
        {
// switch_53A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x34:
        {
// switch_53A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x35:
        {
// switch_53A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x36:
        {
// switch_53A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x37:
        {
// switch_53A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x38:
        {
// switch_53A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x39:
        {
// switch_53A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3a:
        {
// switch_53A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3b:
        {
// switch_53A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3c:
        {
// switch_53A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3d:
        {
// switch_53A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3e:
        {
// switch_53A0_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0710(var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
    }
}
// fun_5CC0
fun_5CC0() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5D48
// lab_5D48
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5EC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5EB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5E08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5E08
    pri = 0;
    OP_JUMP lab_5E10
// lab_5EC8
    pri = 0;
    return pri;
// lab_5EB8
    OP_JUMP lab_5D40
// lab_5D40
    OP_INC_P_S -936
// lab_5E08
    pri = 1;
// lab_5E10
    OP_JZER lab_5E88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5E80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5E88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5E80
}
// fun_5EE8
fun_5EE8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5F80
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_0FC8()
// lab_5F80
    pri = arg_4;
    OP_JZER lab_5FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FF0(var_8)
// lab_5FB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6010
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6010
    pri = 0;
    OP_JUMP lab_6018
// lab_6010
    pri = 1;
// lab_6018
    OP_JZER lab_60E0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_60E0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_60B8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0F08(var_32, var_24)
    OP_JUMP lab_60E0
// lab_60E0
    pri = arg_2;
    OP_JZER lab_61B8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6188
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0490(var_40)
    OP_JUMP lab_61B8
// lab_61B8
    pri = arg_3;
    OP_JZER lab_61F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F90(var_8)
// lab_61F0
    pri = 0;
    return pri;
// lab_6188
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CE0(var_16, var_8)
// lab_60B8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F08(var_16, var_8)
}
// fun_6200
fun_6200() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5CC0(var_24)
    pri = 0;
    return pri;
}
// fun_6268
fun_6268() {
    pri = g_mode;
    switch (pri) {
// switch_6328
        case default:
        {
// switch_6328_case_default
            pri = CommandNOP()
            OP_JUMP lab_6370
// lab_6370
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6328_case_0x0
            var_8 = 0;
            pri = fun_6380()
            OP_JUMP lab_6370
        }
        case 0x1fab842ae1fe4b1e:
        {
// switch_6328_case_0x1fab842ae1fe4b1e
            var_8 = 0;
            pri = fun_7E58()
            OP_JUMP lab_6370
        }
        case 0x46a362277e79bac2:
        {
// switch_6328_case_0x46a362277e79bac2
            var_8 = 0;
            pri = fun_7F48()
            OP_JUMP lab_6370
        }
    }
}
// fun_6380
fun_6380() {
    pri = 0;
    return pri;
}
// fun_6398
fun_6398() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5EE8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_63F0
fun_63F0() {
    pri = 0;
    return pri;
}
// fun_6408
fun_6408() {
    pri = 0;
    return pri;
}
// fun_6420
fun_6420() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4658424058700890112, 4656691228375515136, 8802641224559852288
    var_24 = 48;
    pri = fun_0438(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4582834833314545664, 4658516417677623296, 4656299802236026880, -1554014642428341586
    var_48 = 48;
    pri = fun_0438(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4591138345127510016, 4657067261352214528, 4655763240561672192, -1995419997847866053
    var_72 = 48;
    pri = fun_0438(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4638777984935788544, 4657166217398714368, 4655323435910561792, -7718714376658834905
    var_96 = 48;
    pri = fun_0438(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 15;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 0;
    var_128 = 4631952216750555136;
    var_136 = 0;
    OP_PUSH5_C 4658424058700890112, 4639314546610143232, 4656497318504840561, 4659731268075152998, 4642255608273048699
    var_144 = 4656497318504840561;
    var_152 = 1;
    pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 0;
    pri = fun_1BC8()
    var_168 = 0;
    var_176 = 4631952216750555136;
    var_184 = 0;
    OP_PUSH5_C 4657962263817224192, 4638777984935788544, 4656472161678797046, 4659268835474742968, 4641715880005206016
    var_192 = 4656472161678797046;
    var_200 = 60;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 1;
    var_216 = 0;
    var_224 = 4641240890982006784;
    var_232 = 0;
    var_240 = 0;
    OP_PUSH4_C 4657962263817224192, 4656691228375515136, 4607182418800017408, 8802641224559852288
    var_248 = 72;
    pri = fun_04C8(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 0;
    var_272 = 4641240890982006784;
    var_280 = 0;
    var_288 = 0;
    OP_PUSH4_C 4658076613026512896, 4656299802236026880, 4607182418800017408, -1554014642428341586
    var_296 = 72;
    pri = fun_04C8(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 23224;
    var_312 = 8;
    var_320 = 16;
    pri = fun_0280(var_312, var_304)
    var_328 = 0;
    pri = fun_0350()
    var_336 = 15;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    var_376 = 27;
    pri = float(var_376)
    var_384 = pri;
    var_392 = -1995419997847866053;
    var_400 = 40;
    pri = fun_0540(var_392, var_384, var_376, var_368, var_360)
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_05E8(var_408)
    var_424 = -1554014642428341586;
    var_432 = 8;
    pri = fun_05E8(var_424)
    var_440 = -1995419997847866053;
    var_448 = 8;
    pri = fun_05E8(var_440)
    var_456 = 1;
    var_464 = 0;
    var_472 = 50;
    pri = float(var_472)
    var_480 = pri;
    var_488 = 0;
    pri = float(var_488)
    var_496 = pri;
    var_504 = 0;
    OP_PUSH4_C 4657660997631213568, 4656378967073226752, 4611686018427387904, -1995419997847866053
    var_512 = 72;
    pri = fun_04C8(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 1;
    var_528 = 0;
    var_536 = 50;
    pri = float(var_536)
    var_544 = pri;
    var_552 = 0;
    pri = float(var_552)
    var_560 = pri;
    var_568 = 0;
    OP_PUSH4_C 4657584031817269248, 4655895181957005312, 4611686018427387904, -7718714376658834905
    var_576 = 72;
    pri = fun_04C8(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C -6187581348801296013, -1995419997847866053
    var_624 = 56;
    pri = fun_1838(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1980(var_632)
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH2_C -1995419997847866053, 8802641224559852288
    var_680 = 48;
    pri = fun_0590(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = -1995419997847866053;
    var_696 = 8;
    pri = fun_05E8(var_688)
    var_704 = 1;
    var_712 = 1;
    var_720 = -1;
    var_728 = -1;
    var_736 = 0;
    var_744 = 0;
    var_752 = -1995419997847866053;
    var_760 = 56;
    pri = fun_1C58(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C 9197286772819003068, -1995419997847866053
    var_808 = 56;
    pri = fun_1838(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 8;
    pri = fun_1980(var_816)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C -6187580249289667802, -1995419997847866053
    var_872 = 56;
    pri = fun_1838(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_1980(var_880)
    var_896 = 0;
    var_904 = 1;
    var_912 = -1;
    var_920 = -1;
    var_928 = 0;
    var_936 = 1;
    var_944 = -1995419997847866053;
    var_952 = 56;
    pri = fun_1C58(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 15;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = -7718714376658834905;
    var_984 = 8;
    pri = fun_05E8(var_976)
    var_992 = 8802641224559852288;
    var_1000 = 8;
    pri = fun_05E8(var_992)
    var_1008 = 0;
    var_1016 = 4795906288974607530;
    var_1024 = 0;
    var_1032 = 24;
    pri = fun_1A70(var_1024, var_1016, var_1008)
    var_1040 = 0;
    var_1048 = 4795905189462979319;
    var_1056 = 1;
    var_1064 = 24;
    pri = fun_1A70(var_1056, var_1048, var_1040)
    var_1072 = 0;
    var_1080 = 4795904089951351108;
    var_1088 = 2;
    var_1096 = 24;
    pri = fun_1A70(var_1088, var_1080, var_1072)
    var_1104 = 0;
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = 1;
    var_1136 = 32;
    pri = fun_1B58(var_1128, var_1120, var_1112, var_1104)
    var_1144 = 1;
    var_1152 = 3;
    var_1160 = 0;
    var_1168 = 1;
    var_1176 = -1995419997847866053;
    var_1184 = 40;
    pri = fun_3F90(var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1192 = -1995419997847866053;
    var_1200 = 8;
    pri = fun_0788(var_1192)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = -1995419997847866053;
    var_1264 = 56;
    pri = fun_1C58(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 15;
    var_1280 = 8;
    pri = fun_0060(var_1272)
    var_1288 = 0;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 100;
    var_1320 = -1;
    OP_PUSH2_C 9197290071353887701, -1995419997847866053
    var_1328 = 56;
    pri = fun_1838(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_1980(var_1336)
    var_1352 = 0;
    var_1360 = 1;
    var_1368 = -1;
    var_1376 = -1;
    var_1384 = 0;
    var_1392 = 1;
    var_1400 = -1995419997847866053;
    var_1408 = 56;
    pri = fun_1C58(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 15;
    var_1424 = 8;
    pri = fun_0060(var_1416)
    var_1432 = 0;
    var_1440 = -7222864001767187683;
    var_1448 = 0;
    var_1456 = 24;
    pri = fun_1A70(var_1448, var_1440, var_1432)
    var_1464 = 0;
    var_1472 = -7222867300302072316;
    var_1480 = 1;
    var_1488 = 24;
    pri = fun_1A70(var_1480, var_1472, var_1464)
    var_1496 = 0;
    var_1504 = -7222866200790444105;
    var_1512 = 2;
    var_1520 = 24;
    pri = fun_1A70(var_1512, var_1504, var_1496)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 1;
    var_1560 = 32;
    pri = fun_1B58(var_1552, var_1544, var_1536, var_1528)
    var_1568 = 1;
    var_1576 = 3;
    var_1584 = 0;
    var_1592 = 1;
    var_1600 = -1995419997847866053;
    var_1608 = 40;
    pri = fun_3F90(var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1616 = -1995419997847866053;
    var_1624 = 8;
    pri = fun_0788(var_1616)
    var_1632 = 1;
    var_1640 = 1;
    var_1648 = -1;
    var_1656 = -1;
    var_1664 = 0;
    var_1672 = 0;
    var_1680 = -1995419997847866053;
    var_1688 = 56;
    pri = fun_1C58(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 15;
    var_1704 = 8;
    pri = fun_0060(var_1696)
    var_1712 = 0;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 100;
    var_1744 = -1;
    OP_PUSH2_C 9197288971842259490, -1995419997847866053
    var_1752 = 56;
    pri = fun_1838(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = 1;
    var_1768 = 8;
    pri = fun_1980(var_1760)
    var_1776 = 0;
    var_1784 = 1;
    var_1792 = -1;
    var_1800 = -1;
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = -1995419997847866053;
    var_1832 = 56;
    pri = fun_1C58(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 15;
    var_1848 = 8;
    pri = fun_0060(var_1840)
    var_1856 = 0;
    var_1864 = -4160992447724447992;
    var_1872 = 0;
    var_1880 = 24;
    pri = fun_1A70(var_1872, var_1864, var_1856)
    var_1888 = 0;
    var_1896 = -4160989149189563359;
    var_1904 = 1;
    var_1912 = 24;
    pri = fun_1A70(var_1904, var_1896, var_1888)
    var_1920 = 0;
    var_1928 = -4160990248701191570;
    var_1936 = 2;
    var_1944 = 24;
    pri = fun_1A70(var_1936, var_1928, var_1920)
    var_1952 = 0;
    var_1960 = 0;
    var_1968 = 0;
    var_1976 = 1;
    var_1984 = 32;
    pri = fun_1B58(var_1976, var_1968, var_1960, var_1952)
    var_1992 = 0;
    pri = fun_1A40()
    var_2000 = 1;
    var_2008 = 3;
    var_2016 = 0;
    var_2024 = 1;
    var_2032 = -1995419997847866053;
    var_2040 = 40;
    pri = fun_3F90(var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2048 = 1;
    var_2056 = 0;
    var_2064 = 4641240890982006784;
    var_2072 = 0;
    var_2080 = 0;
    OP_PUSH4_C 4657878700933513216, 4656299802236026880, 4607182418800017408, -1554014642428341586
    var_2088 = 72;
    pri = fun_04C8(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2096 = 0;
    var_2104 = 3;
    var_2112 = 2;
    var_2120 = 101;
    var_2128 = -1;
    OP_PUSH2_C -6309055466487153901, -1554014642428341586
    var_2136 = 56;
    pri = fun_1838(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 15;
    var_2152 = 8;
    pri = fun_0060(var_2144)
    var_2160 = -1995419997847866053;
    var_2168 = 8;
    pri = fun_0788(var_2160)
    var_2176 = 0;
    var_2184 = 0;
    var_2192 = 0;
    var_2200 = 0;
    OP_PUSH2_C -1554014642428341586, -1995419997847866053
    var_2208 = 48;
    pri = fun_0590(var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2216 = 0;
    pri = fun_18E8()
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_1980(var_2224)
    var_2240 = -1554014642428341586;
    var_2248 = 8;
    pri = fun_05E8(var_2240)
    var_2256 = -1995419997847866053;
    var_2264 = 8;
    pri = fun_05E8(var_2256)
    var_2272 = 1;
    var_2280 = 1;
    var_2288 = -1;
    var_2296 = -1;
    var_2304 = 0;
    var_2312 = 2;
    var_2320 = -1554014642428341586;
    var_2328 = 56;
    pri = fun_1C58(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2336 = 0;
    var_2344 = 3;
    var_2352 = 0;
    var_2360 = 101;
    var_2368 = -1;
    OP_PUSH2_C -6309054366975525690, -1554014642428341586
    var_2376 = 56;
    pri = fun_1838(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2384 = 1;
    var_2392 = 8;
    pri = fun_1980(var_2384)
    var_2400 = 0;
    pri = fun_1A40()
    var_2408 = 1;
    var_2416 = 3;
    var_2424 = 0;
    var_2432 = 2;
    var_2440 = -1554014642428341586;
    var_2448 = 40;
    pri = fun_3F90(var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2456 = 0;
    var_2464 = 3;
    var_2472 = 0;
    var_2480 = 100;
    var_2488 = -1;
    OP_PUSH2_C -6187579149778039591, -1995419997847866053
    var_2496 = 56;
    pri = fun_1838(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2504 = 1;
    var_2512 = 8;
    pri = fun_1980(var_2504)
    var_2520 = 0;
    pri = fun_1A40()
    var_2528 = 1;
    var_2536 = 0;
    var_2544 = 4641240890982006784;
    var_2552 = 0;
    var_2560 = 0;
    OP_PUSH4_C 4657584031817269248, 4653212373585231872, 4607182418800017408, -7718714376658834905
    var_2568 = 72;
    pri = fun_04C8(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2576 = 1;
    var_2584 = 0;
    var_2592 = 4641240890982006784;
    var_2600 = 0;
    var_2608 = 0;
    OP_PUSH4_C 4657660997631213568, 4653652178236342272, 4607182418800017408, -1995419997847866053
    var_2616 = 72;
    pri = fun_04C8(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2624 = 45;
    var_2632 = 8;
    pri = fun_0060(var_2624)
    var_2640 = 0;
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = -90;
    pri = float(var_2664)
    var_2672 = pri;
    var_2680 = 8802641224559852288;
    var_2688 = 40;
    pri = fun_0540(var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2696 = 10;
    var_2704 = 8;
    pri = fun_0060(var_2696)
    var_2712 = 0;
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = -90;
    pri = float(var_2736)
    var_2744 = pri;
    var_2752 = -1554014642428341586;
    var_2760 = 40;
    pri = fun_0540(var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2768 = 30;
    var_2776 = 8;
    pri = fun_0060(var_2768)
    var_2784 = 8802641224559852288;
    var_2792 = 8;
    pri = fun_05E8(var_2784)
    var_2800 = -1554014642428341586;
    var_2808 = 8;
    pri = fun_05E8(var_2800)
    var_2816 = 0;
    var_2824 = 0;
    var_2832 = 0;
    var_2840 = 0;
    OP_PUSH2_C 8802641224559852288, -1554014642428341586
    var_2848 = 48;
    pri = fun_0590(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2856 = -1554014642428341586;
    var_2864 = 8;
    pri = fun_05E8(var_2856)
    var_2872 = 0;
    var_2880 = 0;
    var_2888 = 0;
    var_2896 = 0;
    OP_PUSH2_C -1554014642428341586, 8802641224559852288
    var_2904 = 48;
    pri = fun_0590(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2912 = 0;
    var_2920 = 3;
    var_2928 = 0;
    var_2936 = 100;
    var_2944 = -1;
    OP_PUSH2_C -6309053267463897479, -1554014642428341586
    var_2952 = 56;
    pri = fun_1838(var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896)
    var_2960 = 1;
    var_2968 = 8;
    pri = fun_1980(var_2960)
    var_2976 = 1;
    var_2984 = 1;
    var_2992 = -1;
    var_3000 = -1;
    var_3008 = 0;
    var_3016 = 9;
    var_3024 = -1554014642428341586;
    var_3032 = 56;
    pri = fun_1C58(var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976)
    var_3040 = 0;
    var_3048 = 3;
    var_3056 = 0;
    var_3064 = 100;
    var_3072 = -1;
    OP_PUSH2_C -6309052167952269268, -1554014642428341586
    var_3080 = 56;
    pri = fun_1838(var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024)
    var_3088 = 1;
    var_3096 = 8;
    pri = fun_1980(var_3088)
    var_3104 = 0;
    pri = fun_1A40()
    var_3112 = 1;
    var_3120 = 0;
    var_3128 = 23176;
    var_3136 = 8;
    var_3144 = 32;
    pri = fun_02E0(var_3136, var_3128, var_3120, var_3112)
    var_3152 = 0;
    pri = fun_0350()
    var_3160 = 1;
    var_3168 = 3;
    var_3176 = 0;
    var_3184 = 9;
    var_3192 = -1554014642428341586;
    var_3200 = 40;
    pri = fun_3F90(var_3192, var_3184, var_3176, var_3168, var_3160)
    var_3208 = 15;
    var_3216 = 8;
    pri = fun_0060(var_3208)
    var_3224 = 8802641224559852288;
    var_3232 = 8;
    pri = fun_05E8(var_3224)
    var_3240 = -7718714376658834905;
    var_3248 = 8;
    pri = fun_05E8(var_3240)
    var_3256 = -1995419997847866053;
    var_3264 = 8;
    pri = fun_05E8(var_3256)
    pri = 0;
    return pri;
}
// fun_7D48
fun_7D48() {
    pri = 0;
    return pri;
}
// fun_7D60
fun_7D60() {
    var_8 = -1995419997847866053;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = -7718714376658834905;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 1570;
    var_48 = 8;
    pri = fun_6200(var_40)
    pri = 0;
    return pri;
}
// fun_7DE8
fun_7DE8() {
    OP_PUSH2_C -1554014642428341586, -7351424554777745992
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 2283054715396777127;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_7E58
fun_7E58() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6398()
    var_16 = 0;
    pri = fun_63F0()
    var_24 = 0;
    pri = fun_6408()
    var_32 = 0;
    pri = fun_6420()
    var_40 = 0;
    pri = fun_7D48()
    var_48 = 0;
    pri = fun_7D60()
    var_56 = 0;
    pri = fun_7DE8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7F48
fun_7F48() {
    var_8 = 0;
    pri = fun_63F0()
    var_16 = 0;
    pri = fun_7D60()
    pri = 0;
    return pri;
}
