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
// fun_04C8
fun_04C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0558
fun_0558() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E98(var_8)
    OP_JZER lab_0620
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EC8(var_24)
    OP_JNZ lab_0620
    pri = 0;
    return pri;
// lab_0620
    OP_JUMP lab_0630
// lab_0630
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0690
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0690
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0630
    pri = 0;
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07C8
    pri = 0;
    return pri;
// lab_07C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0808
// lab_0808
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E98(var_8)
    OP_JNZ lab_0890
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0880
    pri = 0;
    return pri;
// lab_0890
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08D8
    pri = 0;
    return pri;
// lab_08D8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0938
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    pri = 0;
    return pri;
// lab_0938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0808
    pri = 0;
    return pri;
// lab_0880
    OP_JUMP lab_08D8
}
// fun_0980
fun_0980() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09C8
// lab_09C8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A20
    pri = 0;
    return pri;
// lab_0A20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A60
    pri = 0;
    return pri;
// lab_0A60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C8
    pri = 0;
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E98(var_8)
    OP_JZER lab_0C60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B88
    OP_ZERO_P_S 64
// lab_0C60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C98
    OP_CONST_S 64, 1
// lab_0C98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD0
    OP_CONST_S 72, 1
// lab_0CD0
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
// lab_0B88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB0
    OP_ZERO_P_S 72
// lab_0BB0
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
    OP_JUMP lab_0D70
// lab_0D70
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E98
fun_0E98() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EF8
fun_0EF8() {
    OP_JUMP lab_0F10
// lab_0F10
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FA0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F90
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    pri = 0;
    return pri;
// lab_0FA0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1030
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1020
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    pri = 0;
    return pri;
// lab_1030
    pri = 0;
    return pri;
// lab_1020
    OP_JUMP lab_1040
// lab_1040
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F10
    pri = 0;
    return pri;
// lab_0F90
    OP_JUMP lab_1040
}
// fun_1080
fun_1080() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EF8(var_40)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
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
// switch_17E8
        case default:
        {
// switch_17E8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1830
// lab_1830
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
            OP_JNZ lab_18D8
            var_88 = 0;
            pri = fun_1B60()
// lab_18D8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17E8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_13D0
                case default:
                {
// switch_13D0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1448
// lab_1448
                    OP_JUMP lab_1830
                }
                case 0x0:
                {
// switch_13D0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1448
                }
                case 0x1:
                {
// switch_13D0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1448
                }
                case 0x2:
                {
// switch_13D0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1448
                }
                case 0x3:
                {
// switch_13D0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1448
                }
                case 0x4:
                {
// switch_13D0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1448
                }
                case 0x5:
                {
// switch_13D0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1448
                }
            }
        }
        case 0x65:
        {
// switch_17E8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1588
                case default:
                {
// switch_1588_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1600
// lab_1600
                    OP_JUMP lab_1830
                }
                case 0x0:
                {
// switch_1588_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1600
                }
                case 0x1:
                {
// switch_1588_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1600
                }
                case 0x2:
                {
// switch_1588_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1600
                }
                case 0x3:
                {
// switch_1588_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1600
                }
                case 0x4:
                {
// switch_1588_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1600
                }
                case 0x5:
                {
// switch_1588_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1600
                }
            }
        }
        case 0x66:
        {
// switch_17E8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1740
                case default:
                {
// switch_1740_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17B8
// lab_17B8
                    OP_JUMP lab_1830
                }
                case 0x0:
                {
// switch_1740_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17B8
                }
                case 0x1:
                {
// switch_1740_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17B8
                }
                case 0x2:
                {
// switch_1740_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17B8
                }
                case 0x3:
                {
// switch_1740_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17B8
                }
                case 0x4:
                {
// switch_1740_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17B8
                }
                case 0x5:
                {
// switch_1740_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17B8
                }
            }
        }
    }
}
// fun_18F0
fun_18F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_11D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1958
fun_1958() {
    var_8 = arg_3;
    pri = arg_2;
    alt = 16;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_18F0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19C0
fun_19C0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0748(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A68
    pri = 1;
    return pri;
// lab_1A68
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1AB0
fun_1AB0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_19C0(var_8)
    arg_2 = pri;
// lab_1B00
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    OP_JUMP lab_1B78
// lab_1B78
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1BB8
    pri = 0;
    return pri;
// lab_1BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B78
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    var_8 = 0;
    pri = fun_1B60()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1CA8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1CA8
    pri = 0;
    return pri;
}
// fun_1CB8
fun_1CB8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1CE8
fun_1CE8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1D18
// lab_1D18
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D58
    OP_JUMP lab_1D88
// lab_1D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D18
// lab_1D88
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DD0
fun_1DD0() {
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
// fun_1E40
fun_1E40() {
    OP_JUMP lab_1E58
// lab_1E58
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E90
    pri = 0;
    return pri;
// lab_1E90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E58
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    pri = arg_5;
    OP_JNZ lab_1F08
    var_8 = 0;
    pri = fun_0D80()
// lab_1F08
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1F58
    OP_CONST_S -8, -1
// lab_1F58
    pri = arg_1;
    switch (pri) {
// switch_3A10
        case default:
        {
// switch_3A10_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3EB8
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0748(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3EB8
            pri = 1;
            OP_JUMP lab_3EC0
// lab_3EB8
            pri = 0;
// lab_3EC0
            OP_JZER lab_3F10
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4168
// lab_3F10
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3F78
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3F78
            pri = 1;
            OP_JUMP lab_3F80
// lab_3F78
            pri = 0;
// lab_3F80
            OP_JZER lab_4108
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0748(var_24, var_16)
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
            OP_JUMP lab_4168
// lab_4108
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
// lab_4168
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_41D8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_41D8
            var_8 = 0;
            pri = fun_0DC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A10_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1:
        {
// switch_3A10_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2:
        {
// switch_3A10_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3:
        {
// switch_3A10_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x4:
        {
// switch_3A10_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x5:
        {
// switch_3A10_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA8(var_40)
            OP_JUMP switch_3A10_case_default
        }
        case 0x6:
        {
// switch_3A10_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x7:
        {
// switch_3A10_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x8:
        {
// switch_3A10_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x9:
        {
// switch_3A10_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0xa:
        {
// switch_3A10_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0xb:
        {
// switch_3A10_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0xc:
        {
// switch_3A10_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0xd:
        {
// switch_3A10_case_0xd
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0xe:
        {
// switch_3A10_case_0xe
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0xf:
        {
// switch_3A10_case_0xf
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x10:
        {
// switch_3A10_case_0x10
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x11:
        {
// switch_3A10_case_0x11
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x12:
        {
// switch_3A10_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x13:
        {
// switch_3A10_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x14:
        {
// switch_3A10_case_0x14
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x15:
        {
// switch_3A10_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x16:
        {
// switch_3A10_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x17:
        {
// switch_3A10_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x18:
        {
// switch_3A10_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x19:
        {
// switch_3A10_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1a:
        {
// switch_3A10_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1b:
        {
// switch_3A10_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1c:
        {
// switch_3A10_case_0x1c
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1d:
        {
// switch_3A10_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1e:
        {
// switch_3A10_case_0x1e
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x1f:
        {
// switch_3A10_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x20:
        {
// switch_3A10_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x21:
        {
// switch_3A10_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x22:
        {
// switch_3A10_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x23:
        {
// switch_3A10_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x24:
        {
// switch_3A10_case_0x24
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x25:
        {
// switch_3A10_case_0x25
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x26:
        {
// switch_3A10_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x27:
        {
// switch_3A10_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x28:
        {
// switch_3A10_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x29:
        {
// switch_3A10_case_0x29
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2a:
        {
// switch_3A10_case_0x2a
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2b:
        {
// switch_3A10_case_0x2b
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2c:
        {
// switch_3A10_case_0x2c
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2d:
        {
// switch_3A10_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2e:
        {
// switch_3A10_case_0x2e
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x2f:
        {
// switch_3A10_case_0x2f
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x30:
        {
// switch_3A10_case_0x30
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x31:
        {
// switch_3A10_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x32:
        {
// switch_3A10_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x33:
        {
// switch_3A10_case_0x33
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x34:
        {
// switch_3A10_case_0x34
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x35:
        {
// switch_3A10_case_0x35
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x36:
        {
// switch_3A10_case_0x36
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x37:
        {
// switch_3A10_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x38:
        {
// switch_3A10_case_0x38
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
            pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A10_case_default
        }
        case 0x39:
        {
// switch_3A10_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3a:
        {
// switch_3A10_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3b:
        {
// switch_3A10_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3c:
        {
// switch_3A10_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3d:
        {
// switch_3A10_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
        case 0x3e:
        {
// switch_3A10_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            OP_JUMP switch_3A10_case_default
        }
    }
}
// fun_4208
fun_4208() {
    pri = arg_4;
    OP_JNZ lab_4240
    var_8 = 0;
    pri = fun_0D80()
// lab_4240
    pri = arg_1;
    switch (pri) {
// switch_5618
        case default:
        {
// switch_5618_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E98(var_264)
            OP_JZER lab_5BE0
            pri = arg_3;
            switch (pri) {
// switch_5B88
                case default:
                {
// switch_5B88_case_default
                    OP_JUMP lab_5E98
// lab_5E98
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5F08
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5F08
                    var_8 = 0;
                    pri = fun_0DC0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5B88_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5B88_case_default
                }
                case 0x2:
                {
// switch_5B88_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5B88_case_default
                }
                case 0x3:
                {
// switch_5B88_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5B88_case_default
                }
            }
// lab_5BE0
            pri = arg_1;
            OP_JZER lab_5C30
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5C30
            pri = 0;
            OP_JUMP lab_5C38
// lab_5C30
            pri = 1;
// lab_5C38
            OP_JZER lab_5CA0
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0748(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5CA0
            pri = 1;
            OP_JUMP lab_5CA8
// lab_5CA0
            pri = 0;
// lab_5CA8
            OP_JZER lab_5CF8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E98
// lab_5CF8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5D60
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5E98
// lab_5D60
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0748(var_24, var_16)
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
// switch_5618_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1:
        {
// switch_5618_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2:
        {
// switch_5618_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3:
        {
// switch_5618_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x4:
        {
// switch_5618_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x5:
        {
// switch_5618_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA8(var_40)
            OP_JUMP switch_5618_case_default
        }
        case 0x6:
        {
// switch_5618_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x7:
        {
// switch_5618_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x8:
        {
// switch_5618_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x9:
        {
// switch_5618_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xa:
        {
// switch_5618_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xb:
        {
// switch_5618_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xc:
        {
// switch_5618_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xd:
        {
// switch_5618_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xe:
        {
// switch_5618_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0xf:
        {
// switch_5618_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x10:
        {
// switch_5618_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x11:
        {
// switch_5618_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x12:
        {
// switch_5618_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x13:
        {
// switch_5618_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x14:
        {
// switch_5618_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x15:
        {
// switch_5618_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x16:
        {
// switch_5618_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x17:
        {
// switch_5618_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x18:
        {
// switch_5618_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x19:
        {
// switch_5618_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1a:
        {
// switch_5618_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1b:
        {
// switch_5618_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1c:
        {
// switch_5618_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1d:
        {
// switch_5618_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1e:
        {
// switch_5618_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x1f:
        {
// switch_5618_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x20:
        {
// switch_5618_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x21:
        {
// switch_5618_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x22:
        {
// switch_5618_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x23:
        {
// switch_5618_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x24:
        {
// switch_5618_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x25:
        {
// switch_5618_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x26:
        {
// switch_5618_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x27:
        {
// switch_5618_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x28:
        {
// switch_5618_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x29:
        {
// switch_5618_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2a:
        {
// switch_5618_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2b:
        {
// switch_5618_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2c:
        {
// switch_5618_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2d:
        {
// switch_5618_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2e:
        {
// switch_5618_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x2f:
        {
// switch_5618_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x30:
        {
// switch_5618_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x31:
        {
// switch_5618_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x32:
        {
// switch_5618_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x33:
        {
// switch_5618_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x34:
        {
// switch_5618_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x35:
        {
// switch_5618_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x36:
        {
// switch_5618_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x37:
        {
// switch_5618_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x38:
        {
// switch_5618_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x39:
        {
// switch_5618_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3a:
        {
// switch_5618_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3b:
        {
// switch_5618_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3c:
        {
// switch_5618_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3d:
        {
// switch_5618_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
        case 0x3e:
        {
// switch_5618_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            OP_JUMP switch_5618_case_default
        }
    }
}
// fun_5F38
fun_5F38() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_66A8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_6130
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6130
    pri = 0;
    return pri;
}
// fun_6148
fun_6148() {
    pri = arg_4;
    OP_JNZ lab_6180
    var_8 = 0;
    pri = fun_0D80()
// lab_6180
    pri = arg_1;
    OP_JNZ lab_6228
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 22680;
    var_72 = 22672;
    var_80 = 22528;
    var_88 = 22376;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6228
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6288
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6288
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6338
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 23136;
    var_72 = 22992;
    var_80 = 22840;
    var_88 = 22688;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6338
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_63E8
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 23768;
    var_72 = 23616;
    var_80 = 23448;
    var_88 = 23272;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_63E8
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_6498
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 23968;
    var_72 = 23960;
    var_80 = 23952;
    var_88 = 23776;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6498
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_6548
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 24384;
    var_72 = 24256;
    var_80 = 24120;
    var_88 = 23976;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0AE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6548
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_65A8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_65A8
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_6608
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6608
    var_8 = 0;
    pri = fun_0DC0()
    pri = 0;
    return pri;
}
// fun_6630
fun_6630() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_6668(var_8)
    pri = 0;
    return pri;
}
// fun_6668
fun_6668() {
    var_8 = 24552;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_06D0(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_66A8
fun_66A8() {
    var_8 = arg_1;
    var_16 = 24736;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0708(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_66F0
fun_66F0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_67F0
        case default:
        {
// switch_67F0_case_default
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
// switch_67F0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_67F0_case_default
        }
        case 0x1:
        {
// switch_67F0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_67F0_case_default
        }
        case 0x2:
        {
// switch_67F0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_67F0_case_default
        }
        case 0x3:
        {
// switch_67F0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_67F0_case_default
        }
    }
}
// fun_68B0
fun_68B0() {
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
    pri = fun_1AB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1B60()
    pri = 0;
    return pri;
}
// fun_6948
fun_6948() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_66F0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_68B0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_69F0
fun_69F0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6A40
// lab_6A40
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 24840;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6AB8
    OP_JUMP lab_6AE8
// lab_6AB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_6A40
// lab_6AE8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6B70
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4208(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1168(var_56)
// lab_6B70
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6BD8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E58(var_24, var_16)
// lab_6BD8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E58(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6C98
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0780(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0558(var_88, var_80, var_72, var_64, var_56)
// lab_6C98
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6CD8
    pri = 0;
    return pri;
// lab_6CD8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6E20
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 24960;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_06D0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6DE8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6E20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05A8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05A8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0780(var_40)
    pri = 0;
    return pri;
// lab_6DE8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E58(var_16, var_8)
}
// fun_6EA8
fun_6EA8() {
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
    pri = fun_6948(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1BF8(var_112)
    var_128 = 0;
    pri = fun_1CB8()
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
    pri = fun_69F0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_7020
fun_7020() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_70B8
    var_8 = 1;
    var_16 = 0;
    var_24 = 25096;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1140()
// lab_70B8
    pri = arg_4;
    OP_JZER lab_70F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1198(var_8)
// lab_70F0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7148
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7148
    pri = 0;
    OP_JUMP lab_7150
// lab_7148
    pri = 1;
// lab_7150
    OP_JZER lab_7218
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7218
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_71F0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1080(var_32, var_24)
    OP_JUMP lab_7218
// lab_7218
    pri = arg_2;
    OP_JZER lab_72F0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_72C0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E58(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0520(var_40)
    OP_JUMP lab_72F0
// lab_72F0
    pri = arg_3;
    OP_JZER lab_7328
    var_8 = 1;
    var_16 = 8;
    pri = fun_1108(var_8)
// lab_7328
    pri = 0;
    return pri;
// lab_72C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E58(var_16, var_8)
// lab_71F0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1080(var_16, var_8)
}
// fun_7338
fun_7338() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_LOAD_P_S_ALT 24
    OP_JSLESS lab_7390
    pri = arg_2;
    return pri;
// lab_7390
    pri = arg_1;
    return pri;
}
// fun_73A0
fun_73A0() {
    pri = g_mode;
    switch (pri) {
// switch_7578
        case default:
        {
// switch_7578_case_default
            pri = CommandNOP()
            OP_JUMP lab_7630
// lab_7630
            pri = 0;
            return pri;
        }
        case 0xb9f52e564e007750:
        {
// switch_7578_case_0xb9f52e564e007750
            var_8 = 0;
            pri = fun_91C8()
            OP_JUMP lab_7630
        }
        case 0xeacd41240fa367c7:
        {
// switch_7578_case_0xeacd41240fa367c7
            var_8 = 0;
            pri = fun_7698()
            OP_JUMP lab_7630
        }
        case 0xeb61ef690c2bde42:
        {
// switch_7578_case_0xeb61ef690c2bde42
            var_8 = 0;
            pri = fun_7A18()
            OP_JUMP lab_7630
        }
        case 0xec49cf5ac0acea0c:
        {
// switch_7578_case_0xec49cf5ac0acea0c
            var_8 = 0;
            pri = fun_7820()
            OP_JUMP lab_7630
        }
        case 0xf4ca6b0accae00c0:
        {
// switch_7578_case_0xf4ca6b0accae00c0
            var_8 = 0;
            pri = fun_90F0()
            OP_JUMP lab_7630
        }
        case 0xfc3002a68ae173aa:
        {
// switch_7578_case_0xfc3002a68ae173aa
            var_8 = 0;
            pri = fun_9208()
            OP_JUMP lab_7630
        }
        case 0x0:
        {
// switch_7578_case_0x0
            var_8 = 0;
            pri = fun_7640()
            OP_JUMP lab_7630
        }
        case 0x5fc99333ae6dd7d0:
        {
// switch_7578_case_0x5fc99333ae6dd7d0
            var_8 = 0;
            pri = fun_7680()
            OP_JUMP lab_7630
        }
        case 0x78ff457196867b57:
        {
// switch_7578_case_0x78ff457196867b57
            var_8 = 0;
            pri = fun_79A8()
            OP_JUMP lab_7630
        }
        case 0x78ff467196867d0a:
        {
// switch_7578_case_0x78ff467196867d0a
            var_8 = 0;
            pri = fun_79E0()
            OP_JUMP lab_7630
        }
    }
}
// fun_7640
fun_7640() {
    pri = 0;
    return pri;
}
// public GetSceneChangeData
public GetSceneChangeData() {
    alt = 25144;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_7680
fun_7680() {
    pri = 0;
    return pri;
}
// fun_7698
fun_7698() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_7758
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 9167061157802629748;
    var_96 = 80;
    pri = fun_6EA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_7810
// lab_7758
    OP_PUSH2_C 9167062257314257959, 9167063356825886170
    var_16 = 2020;
    var_24 = 24;
    pri = fun_7338(var_16, var_8, var_0)
    var_8 = pri;
    var_32 = 1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = var_8;
    var_112 = 80;
    pri = fun_6EA8(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
// lab_7810
    pri = 0;
    return pri;
}
// fun_7820
fun_7820() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_78E0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -6107196018183027723;
    var_96 = 80;
    pri = fun_6EA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_7998
// lab_78E0
    OP_PUSH2_C -6107197117694655934, -6107198217206284145
    var_16 = 2020;
    var_24 = 24;
    pri = fun_7338(var_16, var_8, var_0)
    var_8 = pri;
    var_32 = 1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = var_8;
    var_112 = 80;
    pri = fun_6EA8(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
// lab_7998
    pri = 0;
    return pri;
}
// fun_79A8
fun_79A8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_88C8(var_8)
    pri = 0;
    return pri;
}
// fun_79E0
fun_79E0() {
    var_8 = 2;
    var_16 = 8;
    pri = fun_88C8(var_8)
    pri = 0;
    return pri;
}
// fun_7A18
fun_7A18() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 100;
    var_32 = 5479908312860935759;
    var_40 = 32;
    pri = fun_1958(var_32, var_24, var_16, var_8)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1BF8(var_48)
    var_64 = 0;
    pri = fun_1CB8()
    var_72 = 25184;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0280(var_80, var_72)
    var_96 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7AE8
fun_7AE8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7020(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_64 = 1;
    var_72 = 0;
    var_80 = 25096;
    var_88 = 8;
    var_96 = 32;
    pri = fun_02E0(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_0350()
    var_112 = -1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0E58(var_120, var_112)
    var_136 = -1;
    var_144 = var_8;
    var_152 = 16;
    pri = fun_0E58(var_144, var_136)
    var_160 = 1;
    var_168 = -1;
    var_176 = -1;
    var_184 = 3;
    var_192 = 8802641224559852288;
    var_200 = 40;
    pri = fun_6148(var_192, var_184, var_176, var_168, var_160)
    var_208 = 0;
    var_216 = 3;
    var_224 = var_8;
    var_232 = 24;
    pri = fun_5F38(var_224, var_216, var_208)
    var_240 = 25232;
    var_248 = 8802641224559852288;
    var_256 = 16;
    pri = fun_0980(var_248, var_240)
    var_264 = var_8;
    var_272 = 8;
    pri = fun_0780(var_264)
    pri = arg_5;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8130
    var_280 = 0;
    var_288 = 4631952216750555136;
    var_296 = 0;
    OP_PUSH5_C 4663061699790802780, 4640808123205314150, 4662901588907566039, 4663172046777766380, 4643322398434782085
    var_304 = 4663718987841887273;
    var_312 = 1;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 0;
    pri = fun_1E40()
    var_328 = 1;
    var_336 = 1;
    OP_PUSH3_C 4638228405043760988, 4663069011543127491, 4662972639348952924
    var_344 = var_8;
    var_352 = 48;
    pri = fun_04C8(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = 1;
    var_368 = 1;
    OP_PUSH4_C 4638228405043760988, 4663069011543127491, 4662972639348952924, 8802641224559852288
    var_376 = 48;
    pri = fun_04C8(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = 823;
    pri = SoundPlayPokeVoice(var_408, var_400, var_392, var_384)
    var_416 = 25184;
    var_424 = 8;
    var_432 = 16;
    pri = fun_0280(var_424, var_416)
    var_440 = 0;
    pri = fun_0350()
    var_448 = 0;
    var_456 = 3;
    var_464 = 0;
    var_472 = 100;
    var_480 = -1;
    var_488 = 5479914909930705025;
    var_496 = var_8;
    var_504 = 56;
    pri = fun_1AB0(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_1BF8(var_512)
    var_528 = 0;
    pri = fun_1CB8()
    var_536 = 25384;
    pri = SoundPostEvent(var_536)
    var_544 = 8802641224559852288;
    var_552 = 8;
    pri = fun_6630(var_544)
    var_560 = 1;
    var_568 = 1;
    var_576 = -1;
    var_584 = -1;
    var_592 = 0;
    var_600 = 62;
    var_608 = -282768498497462690;
    var_616 = 56;
    pri = fun_1ED0(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 0;
    var_632 = 4;
    var_640 = var_8;
    var_648 = 24;
    pri = fun_5F38(var_640, var_632, var_624)
    var_656 = 15;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 0;
    var_680 = 4631952216750555136;
    var_688 = 1;
    OP_PUSH5_C 4663059258874989117, 4644946157206681682, 4662883501941289124, 4663169396954743439, 4646256247301409341
    var_696 = 4663700933860959191;
    var_704 = 30;
    pri = EvCameraMove(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 25608;
    var_720 = 8802641224559852288;
    var_728 = 16;
    pri = fun_0980(var_720, var_712)
    var_736 = 25760;
    var_744 = -282768498497462690;
    var_752 = 16;
    pri = fun_0980(var_744, var_736)
    var_760 = var_8;
    var_768 = 8;
    pri = fun_0780(var_760)
// lab_8130
    pri = arg_5;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8580
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4661197400860094628, 4640521722416511058, 4672491793207818977, 4661986146521396019, 4643617947160328274
    var_32 = 4672593511777283604;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_1E40()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH3_C 4634409493297239163, 4661295092468222525, 4672508096216479826
    var_72 = var_8;
    var_80 = 48;
    pri = fun_04C8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4634409493297239163, 4661295092468222525, 4672508096216479826, 8802641224559852288
    var_104 = 48;
    pri = fun_04C8(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 823;
    pri = SoundPlayPokeVoice(var_136, var_128, var_120, var_112)
    var_144 = 25184;
    var_152 = 8;
    var_160 = 16;
    pri = fun_0280(var_152, var_144)
    var_168 = 0;
    pri = fun_0350()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    var_216 = 5479914909930705025;
    var_224 = var_8;
    var_232 = 56;
    pri = fun_1AB0(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 1;
    var_248 = 8;
    pri = fun_1BF8(var_240)
    var_256 = 0;
    pri = fun_1CB8()
    var_264 = 25880;
    pri = SoundPostEvent(var_264)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_6630(var_272)
    var_288 = 1;
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 0;
    var_328 = 62;
    var_336 = 1476433516362636774;
    var_344 = 56;
    pri = fun_1ED0(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 0;
    var_360 = 4;
    var_368 = var_8;
    var_376 = 24;
    pri = fun_5F38(var_368, var_360, var_352)
    var_384 = 15;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 0;
    var_408 = 4631952216750555136;
    var_416 = 1;
    OP_PUSH5_C 4661158676060564357, 4644663978542529249, 4672489247838400676, 4661966938053258772, 4646415456585111306
    var_424 = 4672590903185946706;
    var_432 = 30;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 26104;
    var_448 = 8802641224559852288;
    var_456 = 16;
    pri = fun_0980(var_448, var_440)
    var_464 = 26256;
    var_472 = 1476433516362636774;
    var_480 = 16;
    pri = fun_0980(var_472, var_464)
    var_488 = var_8;
    var_496 = 8;
    pri = fun_0780(var_488)
// lab_8580
    var_8 = 1;
    var_16 = 0;
    var_24 = 25096;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 3;
    var_64 = 1;
    pri = EvCameraEnd(var_64, var_56)
    pri = arg_4;
    OP_JZER lab_86D0
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = arg_3;
    pri = float(var_112)
    var_120 = pri;
    var_128 = arg_2;
    pri = float(var_128)
    var_136 = pri;
    var_144 = arg_1;
    var_152 = arg_0;
    var_160 = -1485643167600746942;
    var_168 = 80;
    pri = fun_0408(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JUMP lab_88B0
// lab_86D0
    var_8 = 1;
    var_16 = 26376;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0708(var_24, var_16, var_8)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AA8(var_40)
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    var_80 = arg_3;
    pri = float(var_80)
    var_88 = pri;
    var_96 = arg_2;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_04C8(var_112, var_104, var_96, var_88, var_80, var_72)
    pri = FieldCameraClearDelay()
    var_128 = 15;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 0;
    var_152 = 0;
    var_160 = 100;
    var_168 = 5479908312860935759;
    var_176 = 32;
    pri = fun_1958(var_168, var_160, var_152, var_144)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1BF8(var_184)
    var_200 = 0;
    pri = fun_1CB8()
    var_208 = 25184;
    var_216 = 8;
    var_224 = 16;
    pri = fun_0280(var_216, var_208)
    var_232 = 0;
    pri = fun_0350()
// lab_88B0
    pri = 0;
    return pri;
}
// fun_88C8
fun_88C8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0E00(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    var_88 = 8802641224559852288;
    var_96 = var_8;
    var_104 = 40;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    var_152 = 5479917108953961447;
    var_160 = var_8;
    var_168 = 56;
    pri = fun_1AB0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1BF8(var_176)
    pri = arg_0;
    alt = 1;
    OP_JEQ lab_8A58
    var_192 = 0;
    var_200 = 5479918208465589658;
    var_208 = 1;
    var_216 = 24;
    pri = fun_1CE8(var_208, var_200, var_192)
// lab_8A58
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_8AB0
    var_8 = 0;
    var_16 = 5479919307977217869;
    var_24 = 2;
    var_32 = 24;
    pri = fun_1CE8(var_24, var_16, var_8)
// lab_8AB0
    pri = arg_0;
    alt = 3;
    OP_JEQ lab_8B08
    var_8 = 0;
    var_16 = 5479911611395820392;
    var_24 = 3;
    var_32 = 24;
    pri = fun_1CE8(var_24, var_16, var_8)
// lab_8B08
    pri = arg_0;
    alt = 4;
    OP_JEQ lab_8B80
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1590;
    OP_JSLESS lab_8B80
    pri = 1;
    OP_JUMP lab_8B88
// lab_8B80
    pri = 0;
// lab_8B88
    OP_JZER lab_8C50
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_8C18
    var_16 = 0;
    var_24 = 5480767031442379325;
    var_32 = 4;
    var_40 = 24;
    pri = fun_1CE8(var_32, var_24, var_16)
    OP_JUMP lab_8C50
// lab_8C50
    var_8 = 0;
    var_16 = 5479913810419076814;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1CE8(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_1DD0(var_72, var_64, var_56, var_48)
    var_16 = pri;
    var_88 = 0;
    pri = fun_1CB8()
    pri = var_16;
    switch (pri) {
// switch_9070
        case default:
        {
// switch_9070_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 5479907213349307548;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1AB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1BF8(var_72)
            var_88 = 0;
            pri = fun_1CB8()
            var_96 = -1;
            var_104 = 8802641224559852288;
            var_112 = 16;
            pri = fun_0E58(var_104, var_96)
            var_120 = -1;
            var_128 = var_8;
            var_136 = 16;
            pri = fun_0E58(var_128, var_120)
            OP_JUMP lab_90D8
// lab_90D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9070_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 5479907213349307548;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1AB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1BF8(var_72)
            var_88 = 0;
            pri = fun_1CB8()
            var_96 = -1;
            var_104 = 8802641224559852288;
            var_112 = 16;
            pri = fun_0E58(var_104, var_96)
            var_120 = -1;
            var_128 = var_8;
            var_136 = 16;
            pri = fun_0E58(var_128, var_120)
            OP_JUMP lab_90D8
        }
        case 0x1:
        {
// switch_9070_case_0x1
            var_8 = arg_0;
            var_16 = 0;
            var_24 = 5590;
            var_32 = 6100;
            OP_PUSH2_C -935838431704349219, 5475743609293200544
            var_40 = 48;
            pri = fun_7AE8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_90D8
        }
        case 0x2:
        {
// switch_9070_case_0x2
            var_8 = arg_0;
            var_16 = 0;
            var_24 = 4268;
            var_32 = 24893;
            OP_PUSH2_C -935838431704349219, 5475743609293200544
            var_40 = 48;
            pri = fun_7AE8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_90D8
        }
        case 0x3:
        {
// switch_9070_case_0x3
            var_8 = arg_0;
            var_16 = 0;
            var_24 = 16449;
            var_32 = 16711;
            OP_PUSH2_C -935838431704349219, 5475743609293200544
            var_40 = 48;
            pri = fun_7AE8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_90D8
        }
        case 0x4:
        {
// switch_9070_case_0x4
            var_8 = arg_0;
            var_16 = 1;
            var_24 = 9036;
            var_32 = 3920;
            OP_PUSH2_C -935846128285746696, 5475751305874598021
            var_40 = 48;
            pri = fun_7AE8(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_90D8
        }
    }
// lab_8C18
    var_8 = 0;
    var_16 = 5479912710907448603;
    var_24 = 4;
    var_32 = 24;
    pri = fun_1CE8(var_24, var_16, var_8)
}
// fun_90F0
fun_90F0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 3240339110894051445;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_1AB0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1BF8(var_80)
    var_96 = 0;
    pri = fun_1CB8()
    pri = 0;
    return pri;
}
// fun_91C8
fun_91C8() {
    var_8 = -2058750108395589089;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_9208
fun_9208() {
    var_8 = -2058750108395589089;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
