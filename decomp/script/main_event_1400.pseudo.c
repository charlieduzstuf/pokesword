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
    pri = fun_0E28(var_8)
    OP_JZER lab_0660
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E58(var_24)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0808
    pri = 0;
    return pri;
// lab_0808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0848
// lab_0848
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    OP_JNZ lab_08D0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08C0
    pri = 0;
    return pri;
// lab_08D0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0918
    pri = 0;
    return pri;
// lab_0918
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0978
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09C0(var_8)
    pri = 0;
    return pri;
// lab_0978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0848
    pri = 0;
    return pri;
// lab_08C0
    OP_JUMP lab_0918
}
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A48
    pri = 0;
    return pri;
// lab_0A48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    OP_JZER lab_0B78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AA0
    OP_ZERO_P_S 64
// lab_0B78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB0
    OP_CONST_S 64, 1
// lab_0BB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BE8
    OP_CONST_S 72, 1
// lab_0BE8
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
// lab_0AA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AC8
    OP_ZERO_P_S 72
// lab_0AC8
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
    OP_JUMP lab_0C88
// lab_0C88
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    OP_JUMP lab_0EA0
// lab_0EA0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F30
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    pri = 0;
    return pri;
// lab_0F30
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FC0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    pri = 0;
    return pri;
// lab_0FC0
    pri = 0;
    return pri;
// lab_0FB0
    OP_JUMP lab_0FD0
// lab_0FD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EA0
    pri = 0;
    return pri;
// lab_0F20
    OP_JUMP lab_0FD0
}
// fun_1010
fun_1010() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E88(var_40)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
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
// switch_1748
        case default:
        {
// switch_1748_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1790
// lab_1790
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
            OP_JNZ lab_1838
            var_88 = 0;
            pri = fun_19F0()
// lab_1838
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1748_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1330
                case default:
                {
// switch_1330_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13A8
// lab_13A8
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_1330_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13A8
                }
                case 0x1:
                {
// switch_1330_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13A8
                }
                case 0x2:
                {
// switch_1330_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13A8
                }
                case 0x3:
                {
// switch_1330_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13A8
                }
                case 0x4:
                {
// switch_1330_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13A8
                }
                case 0x5:
                {
// switch_1330_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13A8
                }
            }
        }
        case 0x65:
        {
// switch_1748_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_14E8
                case default:
                {
// switch_14E8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1560
// lab_1560
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_14E8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1560
                }
                case 0x1:
                {
// switch_14E8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1560
                }
                case 0x2:
                {
// switch_14E8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1560
                }
                case 0x3:
                {
// switch_14E8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1560
                }
                case 0x4:
                {
// switch_14E8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1560
                }
                case 0x5:
                {
// switch_14E8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1560
                }
            }
        }
        case 0x66:
        {
// switch_1748_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16A0
                case default:
                {
// switch_16A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1718
// lab_1718
                    OP_JUMP lab_1790
                }
                case 0x0:
                {
// switch_16A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1718
                }
                case 0x1:
                {
// switch_16A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1718
                }
                case 0x2:
                {
// switch_16A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1718
                }
                case 0x3:
                {
// switch_16A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1718
                }
                case 0x4:
                {
// switch_16A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1718
                }
                case 0x5:
                {
// switch_16A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1718
                }
            }
        }
    }
}
// fun_1850
fun_1850() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0788(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_18F8
    pri = 1;
    return pri;
// lab_18F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1940
fun_1940() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1990
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1850(var_8)
    arg_2 = pri;
// lab_1990
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1130(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    OP_JUMP lab_1A08
// lab_1A08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A48
    pri = 0;
    return pri;
// lab_1A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A08
    pri = 0;
    return pri;
}
// fun_1A88
fun_1A88() {
    var_8 = 0;
    pri = fun_19F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B38
    pri = 0;
    return pri;
}
// fun_1B48
fun_1B48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1BA8
// lab_1BA8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1BE8
    OP_JUMP lab_1C18
// lab_1BE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BA8
// lab_1C18
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
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
// fun_1CD0
fun_1CD0() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
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
    pri = arg_6;
    OP_JNZ lab_1E00
    var_8 = 0;
    pri = fun_0C98()
// lab_1E00
    pri = arg_1;
    switch (pri) {
// switch_3368
        case default:
        {
// switch_3368_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_36B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_36B8
            pri = 1;
            OP_JUMP lab_36C0
// lab_36B8
            pri = 0;
// lab_36C0
            OP_JZER lab_3818
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0788(var_24, var_16)
            var_520 = pri;
            pri = 0;
            OP_ADDR_ALT -536
            OP_FILL 16
            OP_PUSH_P_ADR -536
            pri = var_520;
            OP_ADD_P_C 1
            var_56 = pri;
            pri = NumericToString(var_56, var_48)
            OP_PUSH_P_ADR -536
            OP_PUSH_P_ADR -536
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3878
// lab_3818
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3878
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_38D8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3938
// lab_38D8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3938
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3938
            pri = arg_2;
            OP_JZER lab_3978
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3978
            var_8 = 0;
            pri = fun_0CD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3368_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x1:
        {
// switch_3368_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x2:
        {
// switch_3368_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x3:
        {
// switch_3368_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x4:
        {
// switch_3368_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x5:
        {
// switch_3368_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x6:
        {
// switch_3368_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x7:
        {
// switch_3368_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x8:
        {
// switch_3368_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x9:
        {
// switch_3368_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xa:
        {
// switch_3368_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xb:
        {
// switch_3368_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xc:
        {
// switch_3368_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xd:
        {
// switch_3368_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xe:
        {
// switch_3368_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0xf:
        {
// switch_3368_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x10:
        {
// switch_3368_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x11:
        {
// switch_3368_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x12:
        {
// switch_3368_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x13:
        {
// switch_3368_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x14:
        {
// switch_3368_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x15:
        {
// switch_3368_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x16:
        {
// switch_3368_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x17:
        {
// switch_3368_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x18:
        {
// switch_3368_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x19:
        {
// switch_3368_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3368_case_default
        }
        case 0x1a:
        {
// switch_3368_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0710(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09F8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3368_case_default
        }
        case 0x1b:
        {
// switch_3368_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0710(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09F8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3368_case_default
        }
        case 0x1c:
        {
// switch_3368_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0710(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_09F8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3368_case_default
        }
        case 0x1d:
        {
// switch_3368_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x1e:
        {
// switch_3368_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x1f:
        {
// switch_3368_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x20:
        {
// switch_3368_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x21:
        {
// switch_3368_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x22:
        {
// switch_3368_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x23:
        {
// switch_3368_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x24:
        {
// switch_3368_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x25:
        {
// switch_3368_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x26:
        {
// switch_3368_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x27:
        {
// switch_3368_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x28:
        {
// switch_3368_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
        case 0x29:
        {
// switch_3368_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3368_case_default
        }
    }
}
// fun_39A8
fun_39A8() {
    pri = arg_5;
    OP_JNZ lab_39E0
    var_8 = 0;
    pri = fun_0C98()
// lab_39E0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3A30
    OP_CONST_S -8, -1
// lab_3A30
    pri = arg_1;
    switch (pri) {
// switch_54E8
        case default:
        {
// switch_54E8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5990
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0788(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5990
            pri = 1;
            OP_JUMP lab_5998
// lab_5990
            pri = 0;
// lab_5998
            OP_JZER lab_59E8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C40
// lab_59E8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5A50
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5A50
            pri = 1;
            OP_JUMP lab_5A58
// lab_5A50
            pri = 0;
// lab_5A58
            OP_JZER lab_5BE0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0788(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5C40
// lab_5BE0
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5C40
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5CB0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5CB0
            var_8 = 0;
            pri = fun_0CD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_54E8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1:
        {
// switch_54E8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2:
        {
// switch_54E8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3:
        {
// switch_54E8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x4:
        {
// switch_54E8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x5:
        {
// switch_54E8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09C0(var_40)
            OP_JUMP switch_54E8_case_default
        }
        case 0x6:
        {
// switch_54E8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x7:
        {
// switch_54E8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x8:
        {
// switch_54E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x9:
        {
// switch_54E8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0xa:
        {
// switch_54E8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0xb:
        {
// switch_54E8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0xc:
        {
// switch_54E8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0xd:
        {
// switch_54E8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0xe:
        {
// switch_54E8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0xf:
        {
// switch_54E8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x10:
        {
// switch_54E8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x11:
        {
// switch_54E8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x12:
        {
// switch_54E8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x13:
        {
// switch_54E8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x14:
        {
// switch_54E8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x15:
        {
// switch_54E8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x16:
        {
// switch_54E8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x17:
        {
// switch_54E8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x18:
        {
// switch_54E8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x19:
        {
// switch_54E8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1a:
        {
// switch_54E8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1b:
        {
// switch_54E8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1c:
        {
// switch_54E8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1d:
        {
// switch_54E8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1e:
        {
// switch_54E8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x1f:
        {
// switch_54E8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x20:
        {
// switch_54E8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x21:
        {
// switch_54E8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x22:
        {
// switch_54E8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x23:
        {
// switch_54E8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x24:
        {
// switch_54E8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x25:
        {
// switch_54E8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x26:
        {
// switch_54E8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x27:
        {
// switch_54E8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x28:
        {
// switch_54E8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x29:
        {
// switch_54E8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2a:
        {
// switch_54E8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2b:
        {
// switch_54E8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2c:
        {
// switch_54E8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2d:
        {
// switch_54E8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2e:
        {
// switch_54E8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x2f:
        {
// switch_54E8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x30:
        {
// switch_54E8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x31:
        {
// switch_54E8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x32:
        {
// switch_54E8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x33:
        {
// switch_54E8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x34:
        {
// switch_54E8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x35:
        {
// switch_54E8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x36:
        {
// switch_54E8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x37:
        {
// switch_54E8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x38:
        {
// switch_54E8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E8_case_default
        }
        case 0x39:
        {
// switch_54E8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3a:
        {
// switch_54E8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3b:
        {
// switch_54E8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3c:
        {
// switch_54E8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3d:
        {
// switch_54E8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
        case 0x3e:
        {
// switch_54E8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            OP_JUMP switch_54E8_case_default
        }
    }
}
// fun_5CE0
fun_5CE0() {
    pri = arg_4;
    OP_JNZ lab_5D18
    var_8 = 0;
    pri = fun_0C98()
// lab_5D18
    pri = arg_1;
    switch (pri) {
// switch_70F0
        case default:
        {
// switch_70F0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E28(var_264)
            OP_JZER lab_76B8
            pri = arg_3;
            switch (pri) {
// switch_7660
                case default:
                {
// switch_7660_case_default
                    OP_JUMP lab_7970
// lab_7970
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_79E0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_79E0
                    var_8 = 0;
                    pri = fun_0CD8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7660_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7660_case_default
                }
                case 0x2:
                {
// switch_7660_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7660_case_default
                }
                case 0x3:
                {
// switch_7660_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7660_case_default
                }
            }
// lab_76B8
            pri = arg_1;
            OP_JZER lab_7708
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7708
            pri = 0;
            OP_JUMP lab_7710
// lab_7708
            pri = 1;
// lab_7710
            OP_JZER lab_7778
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0788(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7778
            pri = 1;
            OP_JUMP lab_7780
// lab_7778
            pri = 0;
// lab_7780
            OP_JZER lab_77D0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7970
// lab_77D0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7838
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7970
// lab_7838
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0788(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_70F0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1:
        {
// switch_70F0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2:
        {
// switch_70F0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3:
        {
// switch_70F0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x4:
        {
// switch_70F0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x5:
        {
// switch_70F0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09C0(var_40)
            OP_JUMP switch_70F0_case_default
        }
        case 0x6:
        {
// switch_70F0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x7:
        {
// switch_70F0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x8:
        {
// switch_70F0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x9:
        {
// switch_70F0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xa:
        {
// switch_70F0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xb:
        {
// switch_70F0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xc:
        {
// switch_70F0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xd:
        {
// switch_70F0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xe:
        {
// switch_70F0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0xf:
        {
// switch_70F0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x10:
        {
// switch_70F0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x11:
        {
// switch_70F0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x12:
        {
// switch_70F0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x13:
        {
// switch_70F0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x14:
        {
// switch_70F0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x15:
        {
// switch_70F0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x16:
        {
// switch_70F0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x17:
        {
// switch_70F0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x18:
        {
// switch_70F0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x19:
        {
// switch_70F0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1a:
        {
// switch_70F0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1b:
        {
// switch_70F0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1c:
        {
// switch_70F0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1d:
        {
// switch_70F0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1e:
        {
// switch_70F0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x1f:
        {
// switch_70F0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x20:
        {
// switch_70F0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x21:
        {
// switch_70F0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x22:
        {
// switch_70F0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x23:
        {
// switch_70F0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x24:
        {
// switch_70F0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x25:
        {
// switch_70F0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x26:
        {
// switch_70F0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x27:
        {
// switch_70F0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x28:
        {
// switch_70F0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x29:
        {
// switch_70F0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2a:
        {
// switch_70F0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2b:
        {
// switch_70F0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2c:
        {
// switch_70F0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2d:
        {
// switch_70F0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2e:
        {
// switch_70F0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x2f:
        {
// switch_70F0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x30:
        {
// switch_70F0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x31:
        {
// switch_70F0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x32:
        {
// switch_70F0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x33:
        {
// switch_70F0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x34:
        {
// switch_70F0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x35:
        {
// switch_70F0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x36:
        {
// switch_70F0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x37:
        {
// switch_70F0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x38:
        {
// switch_70F0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x39:
        {
// switch_70F0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3a:
        {
// switch_70F0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3b:
        {
// switch_70F0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3c:
        {
// switch_70F0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3d:
        {
// switch_70F0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
        case 0x3e:
        {
// switch_70F0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0748(var_24, var_16, var_8)
            OP_JUMP switch_70F0_case_default
        }
    }
}
// fun_7A10
fun_7A10() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7A98
// lab_7A98
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7C18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7C08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7B58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7B58
    pri = 0;
    OP_JUMP lab_7B60
// lab_7C18
    pri = 0;
    return pri;
// lab_7C08
    OP_JUMP lab_7A90
// lab_7A90
    OP_INC_P_S -936
// lab_7B58
    pri = 1;
// lab_7B60
    OP_JZER lab_7BD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7BD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7BD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7BD0
}
// fun_7C38
fun_7C38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7CD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_10D0()
// lab_7CD0
    pri = arg_4;
    OP_JZER lab_7D08
    var_8 = 1;
    var_16 = 8;
    pri = fun_10F8(var_8)
// lab_7D08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7D60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7D60
    pri = 0;
    OP_JUMP lab_7D68
// lab_7D60
    pri = 1;
// lab_7D68
    OP_JZER lab_7E30
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7E30
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7E08
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1010(var_32, var_24)
    OP_JUMP lab_7E30
// lab_7E30
    pri = arg_2;
    OP_JZER lab_7F08
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7ED8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0490(var_40)
    OP_JUMP lab_7F08
// lab_7F08
    pri = arg_3;
    OP_JZER lab_7F40
    var_8 = 1;
    var_16 = 8;
    pri = fun_1098(var_8)
// lab_7F40
    pri = 0;
    return pri;
// lab_7ED8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D70(var_16, var_8)
// lab_7E08
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1010(var_16, var_8)
}
// fun_7F50
fun_7F50() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7A10(var_24)
    pri = 0;
    return pri;
}
// fun_7FB8
fun_7FB8() {
    pri = g_mode;
    switch (pri) {
// switch_8078
        case default:
        {
// switch_8078_case_default
            pri = CommandNOP()
            OP_JUMP lab_80C0
// lab_80C0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8078_case_0x0
            var_8 = 0;
            pri = fun_80D0()
            OP_JUMP lab_80C0
        }
        case 0x26fa1b2ae5bf5ab3:
        {
// switch_8078_case_0x26fa1b2ae5bf5ab3
            var_8 = 0;
            pri = fun_9628()
            OP_JUMP lab_80C0
        }
        case 0x4fc0092783c341bf:
        {
// switch_8078_case_0x4fc0092783c341bf
            var_8 = 0;
            pri = fun_9718()
            OP_JUMP lab_80C0
        }
    }
}
// fun_80D0
fun_80D0() {
    pri = 0;
    return pri;
}
// fun_80E8
fun_80E8() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7C38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8140
fun_8140() {
    pri = 0;
    return pri;
}
// fun_8158
fun_8158() {
    pri = 0;
    return pri;
}
// fun_8170
fun_8170() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 2;
    OP_PUSH5_C 4661297269501245522, 4634542490223734948, 4668033779332536074, 4662317055540891484, 4640388021802573496
    var_48 = 4668016203639166075;
    var_56 = 30;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1D38()
    var_72 = 1;
    var_80 = 8;
    pri = fun_10F8(var_72)
    var_88 = 0;
    var_96 = 4631952216750555136;
    var_104 = 2;
    OP_PUSH5_C 4661290056704967311, 4637609863782439322, 4668009447140213391, 4661481129835642225, 4638863834803685294
    var_112 = 4668006159600446341;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_1D38()
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 8802641224559852288, 7927692416553760981
    var_168 = 48;
    pri = fun_0590(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 7927692416553760981;
    var_184 = 8;
    pri = fun_05E8(var_176)
    var_192 = 0;
    var_200 = 3;
    var_208 = 0;
    var_216 = 100;
    var_224 = -1;
    OP_PUSH2_C -8817513146996403056, 7927692416553760981
    var_232 = 56;
    pri = fun_1940(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 1;
    var_248 = 8;
    pri = fun_1A88(var_240)
    var_256 = 0;
    pri = fun_1B48()
    var_264 = 10;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 1;
    var_288 = 1;
    var_296 = 180;
    pri = float(var_296)
    var_304 = pri;
    OP_PUSH3_C 4661814952560951296, 4668009601071841280, 8802641224559852288
    var_312 = 48;
    pri = fun_0438(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 0;
    var_328 = 4631952216750555136;
    var_336 = 2;
    OP_PUSH5_C 4661404054070535127, 4634456640355838198, 4667978319966031053, 4661688915543059333, 4639395470665947546
    var_344 = 4668059337480323727;
    var_352 = 40;
    pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 0;
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 7927692416553760981;
    var_408 = 40;
    pri = fun_0540(var_400, var_392, var_384, var_376, var_368)
    var_416 = 1;
    var_424 = 0;
    var_432 = 100;
    pri = float(var_432)
    var_440 = pri;
    var_448 = 0;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 0;
    OP_PUSH4_C 4661584055119118336, 4668009051316027392, 4611686018427387904, 8802641224559852288
    var_472 = 72;
    pri = fun_04C8(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 8802641224559852288;
    var_488 = 8;
    pri = fun_05E8(var_480)
    var_496 = 7927692416553760981;
    var_504 = 8;
    pri = fun_05E8(var_496)
    var_512 = 0;
    pri = fun_1D38()
    var_520 = 1;
    var_528 = 1;
    var_536 = -1;
    var_544 = -1;
    var_552 = 0;
    var_560 = 2;
    var_568 = 7927692416553760981;
    var_576 = 56;
    pri = fun_39A8(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C -8817509848461518423, 7927692416553760981
    var_624 = 56;
    pri = fun_1940(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1A88(var_632)
    var_648 = 0;
    var_656 = -3812273819325356376;
    var_664 = 0;
    var_672 = 24;
    pri = fun_1B78(var_664, var_656, var_648)
    var_680 = 0;
    var_688 = -3812270520790471743;
    var_696 = 1;
    var_704 = 24;
    pri = fun_1B78(var_696, var_688, var_680)
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    var_736 = 1;
    var_744 = 32;
    pri = fun_1C60(var_736, var_728, var_720, var_712)
    var_752 = 1;
    var_760 = -1;
    var_768 = -1;
    var_776 = 3;
    var_784 = 0;
    var_792 = 19;
    var_800 = 8802641224559852288;
    var_808 = 56;
    pri = fun_1DC8(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 3;
    var_832 = 0;
    var_840 = 2;
    var_848 = 7927692416553760981;
    var_856 = 40;
    pri = fun_5CE0(var_848, var_840, var_832, var_824, var_816)
    var_864 = 7927692416553760981;
    var_872 = 8;
    pri = fun_07C0(var_864)
    var_880 = 8802641224559852288;
    var_888 = 8;
    pri = fun_07C0(var_880)
    var_896 = 6;
    var_904 = 7927692416553760981;
    var_912 = 16;
    pri = fun_0DB0(var_904, var_896)
    var_920 = 1;
    var_928 = 1;
    var_936 = -1;
    var_944 = -1;
    var_952 = 0;
    var_960 = 3;
    var_968 = 7927692416553760981;
    var_976 = 56;
    pri = fun_39A8(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 0;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 100;
    var_1016 = -1;
    OP_PUSH2_C -8817510947973146634, 7927692416553760981
    var_1024 = 56;
    pri = fun_1940(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 1;
    var_1040 = 8;
    pri = fun_1A88(var_1032)
    var_1048 = 0;
    pri = fun_1B48()
    var_1056 = 1;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 3;
    var_1088 = 7927692416553760981;
    var_1096 = 40;
    pri = fun_5CE0(var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1104 = 7927692416553760981;
    var_1112 = 8;
    pri = fun_07C0(var_1104)
    var_1120 = 7927692416553760981;
    var_1128 = 8;
    pri = fun_0DF0(var_1120)
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 2;
    var_1184 = 7927692416553760981;
    var_1192 = 56;
    pri = fun_1DC8(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 5;
    var_1208 = 8;
    pri = fun_0060(var_1200)
    var_1216 = 1;
    var_1224 = 0;
    var_1232 = 30968;
    var_1240 = 8;
    var_1248 = 32;
    pri = fun_02E0(var_1240, var_1232, var_1224, var_1216)
    var_1256 = 0;
    pri = fun_0350()
    var_1264 = 7927692416553760981;
    var_1272 = 8;
    pri = fun_07C0(var_1264)
    var_1280 = 0;
    var_1288 = 1;
    var_1296 = 1;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 0;
    var_1328 = 31016;
    var_1336 = 56;
    pri = fun_1CD0(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 1;
    var_1352 = 1;
    var_1360 = -90;
    pri = float(var_1360)
    var_1368 = pri;
    OP_PUSH3_C 4661808355491184640, 4667795196304424960, 8802641224559852288
    var_1376 = 48;
    pri = fun_0438(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1384 = 1;
    var_1392 = 1;
    var_1400 = 90;
    pri = float(var_1400)
    var_1408 = pri;
    OP_PUSH3_C 4661808355491184640, 4667698989036994560, 7927692416553760981
    var_1416 = 48;
    pri = fun_0438(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1424 = 1;
    var_1432 = 1;
    var_1440 = -1;
    OP_PUSH2_C 8802641224559852288, 7927692416553760981
    var_1448 = 40;
    pri = fun_0D18(var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1456 = 0;
    var_1464 = 4631952216750555136;
    var_1472 = 0;
    OP_PUSH5_C 4661678360231432684, 4605380978949069210, 4667748021758035231, 4662243718115318825, 4643646622423580672
    var_1480 = 4667908495480109138;
    var_1488 = 1;
    pri = EvCameraMove(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1496 = 0;
    pri = fun_1D38()
    var_1504 = 1;
    var_1512 = -1;
    var_1520 = -1;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 7927692416553760981;
    var_1560 = 56;
    pri = fun_1DC8(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1568 = 31056;
    var_1576 = 8;
    var_1584 = 16;
    pri = fun_0280(var_1576, var_1568)
    var_1592 = 0;
    pri = fun_0350()
    var_1600 = 0;
    var_1608 = 4631952216750555136;
    var_1616 = 2;
    OP_PUSH5_C 4661712961862358794, 4605380978949069210, 4667717548793271419, 4662278308751128658, 4643646622423580672
    var_1624 = 4667878028012903465;
    var_1632 = 20;
    pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1640 = 0;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 100;
    var_1672 = -1;
    OP_PUSH2_C -8817508748949890212, 7927692416553760981
    var_1680 = 56;
    pri = fun_1940(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_1A88(var_1688)
    var_1704 = 0;
    pri = fun_1B48()
    var_1712 = 7927692416553760981;
    var_1720 = 8;
    pri = fun_07C0(var_1712)
    var_1728 = 0;
    pri = fun_1D38()
    var_1736 = 1;
    var_1744 = -1;
    var_1752 = -1;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 0;
    var_1784 = 7927692416553760981;
    var_1792 = 56;
    pri = fun_1DC8(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1800 = 0;
    var_1808 = 3;
    var_1816 = 0;
    var_1824 = 100;
    var_1832 = -1;
    OP_PUSH2_C -8817505450415005579, 7927692416553760981
    var_1840 = 56;
    pri = fun_1940(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 1;
    var_1856 = 8;
    pri = fun_1A88(var_1848)
    var_1864 = 0;
    pri = fun_1B48()
    var_1872 = 7927692416553760981;
    var_1880 = 8;
    pri = fun_07C0(var_1872)
    var_1888 = 1;
    var_1896 = 0;
    var_1904 = 100;
    pri = float(var_1904)
    var_1912 = pri;
    var_1920 = 0;
    pri = float(var_1920)
    var_1928 = pri;
    var_1936 = 0;
    OP_PUSH4_C 4661860032537690112, 4667054675223117824, 4611686018427387904, 7927692416553760981
    var_1944 = 72;
    pri = fun_04C8(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = -1;
    var_1960 = 7927692416553760981;
    var_1968 = 16;
    pri = fun_0D70(var_1960, var_1952)
    var_1976 = 8802641224559852288;
    var_1984 = 8;
    pri = fun_05E8(var_1976)
    var_1992 = 7927692416553760981;
    var_2000 = 8;
    pri = fun_05E8(var_1992)
    var_2008 = 3;
    var_2016 = 15;
    pri = EvCameraEnd(var_2016, var_2008)
    pri = 0;
    return pri;
}
// fun_9200
fun_9200() {
    pri = 0;
    return pri;
}
// fun_9218
fun_9218() {
    var_8 = 12376771534612344;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 7927692416553760981;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 1410;
    var_48 = 8;
    pri = fun_7F50(var_40)
    var_56 = 7099240262869383700;
    pri = VanishFlagReset(var_56)
    var_64 = -1292278190967397311;
    pri = VanishFlagReset(var_64)
    var_72 = -8208209633826348795;
    pri = VanishFlagReset(var_72)
    var_80 = 7432975670781276955;
    pri = VanishFlagReset(var_80)
    var_88 = 7432977869804533377;
    pri = VanishFlagReset(var_88)
    var_96 = -4302906878504062438;
    pri = VanishFlagSet(var_96)
    var_104 = -4689337920581802424;
    pri = VanishFlagSet(var_104)
    var_112 = 3902381536102020823;
    pri = VanishFlagSet(var_112)
    var_120 = 7432978969316161588;
    pri = VanishFlagSet(var_120)
    var_128 = -7103632191647310716;
    pri = VanishFlagSet(var_128)
    var_136 = -4302913475573831704;
    pri = VanishFlagSet(var_136)
    var_144 = 3902383735125277245;
    pri = VanishFlagSet(var_144)
    var_152 = 3728213071223358512;
    pri = VanishFlagSet(var_152)
    var_160 = 7116314638901664256;
    pri = VanishFlagSet(var_160)
    var_168 = 279354136510782265;
    pri = VanishFlagSet(var_168)
    var_176 = 577590369271743373;
    pri = VanishFlagSet(var_176)
    var_184 = 7469020547458231139;
    pri = VanishFlagSet(var_184)
    var_192 = -2125369913008984214;
    pri = VanishFlagSet(var_192)
    var_200 = 6172501094173624636;
    pri = VanishFlagSet(var_200)
    var_208 = 3007037875693876706;
    pri = VanishFlagSet(var_208)
    var_216 = 7506713967005848083;
    pri = FlagReset(var_216)
    var_224 = 5501743159805903958;
    pri = FlagSet(var_224)
    pri = 0;
    return pri;
}
// fun_9610
fun_9610() {
    pri = 0;
    return pri;
}
// fun_9628
fun_9628() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_80E8()
    var_16 = 0;
    pri = fun_8140()
    var_24 = 0;
    pri = fun_8158()
    var_32 = 0;
    pri = fun_8170()
    var_40 = 0;
    pri = fun_9200()
    var_48 = 0;
    pri = fun_9218()
    var_56 = 0;
    pri = fun_9610()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9718
fun_9718() {
    var_8 = 0;
    pri = fun_8140()
    var_16 = 0;
    pri = fun_9218()
    pri = 0;
    return pri;
}
