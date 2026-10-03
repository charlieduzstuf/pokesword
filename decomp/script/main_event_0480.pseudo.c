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
    pri = arg_0;
    OP_JZER lab_02F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_02F0
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_0380
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0390(var_24, var_16)
    var_40 = 0;
    pri = fun_0460()
// lab_0380
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03F0
fun_03F0() {
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
// fun_0460
fun_0460() {
    OP_JUMP lab_0478
// lab_0478
    pri = FadeWait_()
    OP_JZER lab_04B0
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_06C8()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
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
// fun_07E0
fun_07E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FF8(var_8)
    OP_JZER lab_0900
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1028(var_24)
    OP_JNZ lab_0900
    pri = 0;
    return pri;
// lab_0900
    OP_JUMP lab_0910
// lab_0910
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0970
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0970
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0910
    pri = 0;
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AE8
// lab_0AE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FF8(var_8)
    OP_JNZ lab_0B70
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B60
    pri = 0;
    return pri;
// lab_0B70
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C60(var_8)
    pri = 0;
    return pri;
// lab_0C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AE8
    pri = 0;
    return pri;
// lab_0B60
    OP_JUMP lab_0BB8
}
// fun_0C60
fun_0C60() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CE8
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FF8(var_8)
    OP_JZER lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_ZERO_P_S 64
// lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E50
    OP_CONST_S 64, 1
// lab_0E50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E88
    OP_CONST_S 72, 1
// lab_0E88
    var_8 = 1;
    var_16 = 0;
    var_24 = 352;
    var_32 = -1;
    var_40 = -1;
    var_48 = 344;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 296;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 256;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0D40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_ZERO_P_S 72
// lab_0D68
    var_8 = 0;
    var_16 = 0;
    var_24 = 248;
    var_32 = -1;
    var_40 = -1;
    var_48 = 240;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 176;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 128;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0F28
// lab_0F28
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1028
fun_1028() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1058
fun_1058() {
    OP_JUMP lab_1070
// lab_1070
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1100
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_10F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1100
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1190
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1180
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1190
    pri = 0;
    return pri;
// lab_1180
    OP_JUMP lab_11A0
// lab_11A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1070
    pri = 0;
    return pri;
// lab_10F0
    OP_JUMP lab_11A0
}
// fun_11E0
fun_11E0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1058(var_40)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
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
// switch_1918
        case default:
        {
// switch_1918_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1960
// lab_1960
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
            OP_JNZ lab_1A08
            var_88 = 0;
            pri = fun_1BC0()
// lab_1A08
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1918_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1500
                case default:
                {
// switch_1500_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1578
// lab_1578
                    OP_JUMP lab_1960
                }
                case 0x0:
                {
// switch_1500_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1578
                }
                case 0x1:
                {
// switch_1500_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1578
                }
                case 0x2:
                {
// switch_1500_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1578
                }
                case 0x3:
                {
// switch_1500_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1578
                }
                case 0x4:
                {
// switch_1500_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1578
                }
                case 0x5:
                {
// switch_1500_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1578
                }
            }
        }
        case 0x65:
        {
// switch_1918_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_16B8
                case default:
                {
// switch_16B8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1730
// lab_1730
                    OP_JUMP lab_1960
                }
                case 0x0:
                {
// switch_16B8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1730
                }
                case 0x1:
                {
// switch_16B8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1730
                }
                case 0x2:
                {
// switch_16B8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1730
                }
                case 0x3:
                {
// switch_16B8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1730
                }
                case 0x4:
                {
// switch_16B8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1730
                }
                case 0x5:
                {
// switch_16B8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1730
                }
            }
        }
        case 0x66:
        {
// switch_1918_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1870
                case default:
                {
// switch_1870_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18E8
// lab_18E8
                    OP_JUMP lab_1960
                }
                case 0x0:
                {
// switch_1870_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_18E8
                }
                case 0x1:
                {
// switch_1870_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_18E8
                }
                case 0x2:
                {
// switch_1870_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_18E8
                }
                case 0x3:
                {
// switch_1870_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18E8
                }
                case 0x4:
                {
// switch_1870_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_18E8
                }
                case 0x5:
                {
// switch_1870_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_18E8
                }
            }
        }
    }
}
// fun_1A20
fun_1A20() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1AC8
    pri = 1;
    return pri;
// lab_1AC8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B10
fun_1B10() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A20(var_8)
    arg_2 = pri;
// lab_1B60
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1300(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    OP_JUMP lab_1BD8
// lab_1BD8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C18
    pri = 0;
    return pri;
// lab_1C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BD8
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    var_8 = 0;
    pri = fun_1BC0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D08
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_1D08
    pri = 0;
    return pri;
}
// fun_1D18
fun_1D18() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D48
fun_1D48() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D98
fun_1D98() {
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
// fun_1E00
fun_1E00() {
    OP_JUMP lab_1E18
// lab_1E18
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E50
    pri = 0;
    return pri;
// lab_1E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E18
    pri = 0;
    return pri;
}
// fun_1E90
fun_1E90() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_1EC8
fun_1EC8() {
    pri = arg_6;
    OP_JNZ lab_1F00
    var_8 = 0;
    pri = fun_0F38()
// lab_1F00
    pri = arg_1;
    switch (pri) {
// switch_3468
        case default:
        {
// switch_3468_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37B8
            pri = 1;
            OP_JUMP lab_37C0
// lab_37B8
            pri = 0;
// lab_37C0
            OP_JZER lab_3918
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            var_64 = 8520;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3978
// lab_3918
            var_8 = 64;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3978
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39D8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A38
// lab_39D8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A38
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A38
            pri = arg_2;
            OP_JZER lab_3A78
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A78
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3468_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1:
        {
// switch_3468_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x2:
        {
// switch_3468_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x3:
        {
// switch_3468_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x4:
        {
// switch_3468_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x5:
        {
// switch_3468_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x6:
        {
// switch_3468_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x7:
        {
// switch_3468_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x8:
        {
// switch_3468_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x9:
        {
// switch_3468_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xa:
        {
// switch_3468_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xb:
        {
// switch_3468_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xc:
        {
// switch_3468_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xd:
        {
// switch_3468_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xe:
        {
// switch_3468_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xf:
        {
// switch_3468_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x10:
        {
// switch_3468_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x11:
        {
// switch_3468_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x12:
        {
// switch_3468_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x13:
        {
// switch_3468_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x14:
        {
// switch_3468_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x15:
        {
// switch_3468_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x16:
        {
// switch_3468_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x17:
        {
// switch_3468_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x18:
        {
// switch_3468_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x19:
        {
// switch_3468_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x1a:
        {
// switch_3468_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6192;
            var_88 = 6184;
            var_96 = 6176;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1b:
        {
// switch_3468_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6416;
            var_88 = 6408;
            var_96 = 6400;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1c:
        {
// switch_3468_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6640;
            var_88 = 6632;
            var_96 = 6624;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1d:
        {
// switch_3468_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1e:
        {
// switch_3468_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1f:
        {
// switch_3468_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x20:
        {
// switch_3468_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x21:
        {
// switch_3468_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x22:
        {
// switch_3468_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x23:
        {
// switch_3468_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x24:
        {
// switch_3468_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x25:
        {
// switch_3468_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x26:
        {
// switch_3468_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x27:
        {
// switch_3468_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x28:
        {
// switch_3468_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x29:
        {
// switch_3468_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
    }
}
// fun_3AA8
fun_3AA8() {
    pri = arg_5;
    OP_JNZ lab_3AE0
    var_8 = 0;
    pri = fun_0F38()
// lab_3AE0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3B30
    OP_CONST_S -8, -1
// lab_3B30
    pri = arg_1;
    switch (pri) {
// switch_55E8
        case default:
        {
// switch_55E8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5A90
            var_520 = 28280;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A90
            pri = 1;
            OP_JUMP lab_5A98
// lab_5A90
            pri = 0;
// lab_5A98
            OP_JZER lab_5AE8
            var_8 = 64;
            var_16 = 28376;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D40
// lab_5AE8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5B50
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5B50
            pri = 1;
            OP_JUMP lab_5B58
// lab_5B50
            pri = 0;
// lab_5B58
            OP_JZER lab_5CE0
            var_16 = 28552;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            var_176 = 28656;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28672;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5D40
// lab_5CE0
            var_8 = 64;
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5D40
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5DB0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5DB0
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_55E8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1:
        {
// switch_55E8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2:
        {
// switch_55E8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3:
        {
// switch_55E8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x4:
        {
// switch_55E8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x5:
        {
// switch_55E8_case_0x5
            var_8 = 2;
            var_16 = 18536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_55E8_case_default
        }
        case 0x6:
        {
// switch_55E8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x7:
        {
// switch_55E8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x8:
        {
// switch_55E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x9:
        {
// switch_55E8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0xa:
        {
// switch_55E8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0xb:
        {
// switch_55E8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0xc:
        {
// switch_55E8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0xd:
        {
// switch_55E8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19184;
            var_72 = 19008;
            var_80 = 18824;
            var_88 = 18632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0xe:
        {
// switch_55E8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19840;
            var_72 = 19632;
            var_80 = 19416;
            var_88 = 19192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0xf:
        {
// switch_55E8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20232;
            var_72 = 20112;
            var_80 = 19984;
            var_88 = 19848;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x10:
        {
// switch_55E8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20576;
            var_72 = 20472;
            var_80 = 20360;
            var_88 = 20240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x11:
        {
// switch_55E8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20920;
            var_72 = 20816;
            var_80 = 20704;
            var_88 = 20584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x12:
        {
// switch_55E8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x13:
        {
// switch_55E8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x14:
        {
// switch_55E8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21480;
            var_72 = 21304;
            var_80 = 21120;
            var_88 = 20928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x15:
        {
// switch_55E8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x16:
        {
// switch_55E8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x17:
        {
// switch_55E8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x18:
        {
// switch_55E8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x19:
        {
// switch_55E8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1a:
        {
// switch_55E8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1b:
        {
// switch_55E8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1c:
        {
// switch_55E8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21872;
            var_72 = 21752;
            var_80 = 21624;
            var_88 = 21488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1d:
        {
// switch_55E8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1e:
        {
// switch_55E8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22336;
            var_72 = 22192;
            var_80 = 22040;
            var_88 = 21880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x1f:
        {
// switch_55E8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x20:
        {
// switch_55E8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x21:
        {
// switch_55E8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x22:
        {
// switch_55E8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x23:
        {
// switch_55E8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x24:
        {
// switch_55E8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22704;
            var_72 = 22592;
            var_80 = 22472;
            var_88 = 22344;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x25:
        {
// switch_55E8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23072;
            var_72 = 22960;
            var_80 = 22840;
            var_88 = 22712;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x26:
        {
// switch_55E8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x27:
        {
// switch_55E8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x28:
        {
// switch_55E8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x29:
        {
// switch_55E8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23512;
            var_72 = 23376;
            var_80 = 23232;
            var_88 = 23080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2a:
        {
// switch_55E8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23904;
            var_72 = 23784;
            var_80 = 23656;
            var_88 = 23520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2b:
        {
// switch_55E8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24320;
            var_72 = 24192;
            var_80 = 24056;
            var_88 = 23912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2c:
        {
// switch_55E8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24760;
            var_72 = 24624;
            var_80 = 24480;
            var_88 = 24328;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2d:
        {
// switch_55E8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2e:
        {
// switch_55E8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25080;
            var_72 = 24984;
            var_80 = 24880;
            var_88 = 24768;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x2f:
        {
// switch_55E8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25472;
            var_72 = 25352;
            var_80 = 25224;
            var_88 = 25088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x30:
        {
// switch_55E8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25864;
            var_72 = 25744;
            var_80 = 25616;
            var_88 = 25480;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x31:
        {
// switch_55E8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x32:
        {
// switch_55E8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x33:
        {
// switch_55E8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26256;
            var_72 = 26136;
            var_80 = 26008;
            var_88 = 25872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x34:
        {
// switch_55E8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26624;
            var_72 = 26512;
            var_80 = 26392;
            var_88 = 26264;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x35:
        {
// switch_55E8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27112;
            var_72 = 26960;
            var_80 = 26800;
            var_88 = 26632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x36:
        {
// switch_55E8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27480;
            var_72 = 27368;
            var_80 = 27248;
            var_88 = 27120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x37:
        {
// switch_55E8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x38:
        {
// switch_55E8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27848;
            var_72 = 27736;
            var_80 = 27616;
            var_88 = 27488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55E8_case_default
        }
        case 0x39:
        {
// switch_55E8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3a:
        {
// switch_55E8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3b:
        {
// switch_55E8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3c:
        {
// switch_55E8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3d:
        {
// switch_55E8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
        case 0x3e:
        {
// switch_55E8_case_0x3e
            var_8 = 4;
            var_16 = 28176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_55E8_case_default
        }
    }
}
// fun_5DE0
fun_5DE0() {
    pri = arg_4;
    OP_JNZ lab_5E18
    var_8 = 0;
    pri = fun_0F38()
// lab_5E18
    pri = arg_1;
    switch (pri) {
// switch_71F0
        case default:
        {
// switch_71F0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29248;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0FF8(var_264)
            OP_JZER lab_77B8
            pri = arg_3;
            switch (pri) {
// switch_7760
                case default:
                {
// switch_7760_case_default
                    OP_JUMP lab_7A70
// lab_7A70
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7AE0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7AE0
                    var_8 = 0;
                    pri = fun_0F78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7760_case_0x1
                    var_8 = 32;
                    var_16 = 29400;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7760_case_default
                }
                case 0x2:
                {
// switch_7760_case_0x2
                    var_8 = 32;
                    var_16 = 29504;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7760_case_default
                }
                case 0x3:
                {
// switch_7760_case_0x3
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7760_case_default
                }
            }
// lab_77B8
            pri = arg_1;
            OP_JZER lab_7808
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7808
            pri = 0;
            OP_JUMP lab_7810
// lab_7808
            pri = 1;
// lab_7810
            OP_JZER lab_7878
            var_8 = 29600;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7878
            pri = 1;
            OP_JUMP lab_7880
// lab_7878
            pri = 0;
// lab_7880
            OP_JZER lab_78D0
            var_8 = 32;
            var_16 = 29696;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A70
// lab_78D0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7938
            var_8 = 32;
            var_16 = 29856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A70
// lab_7938
            var_16 = 29976;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            var_176 = 30080;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30096;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_71F0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1:
        {
// switch_71F0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2:
        {
// switch_71F0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3:
        {
// switch_71F0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x4:
        {
// switch_71F0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x5:
        {
// switch_71F0_case_0x5
            var_8 = 1;
            var_16 = 28728;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_71F0_case_default
        }
        case 0x6:
        {
// switch_71F0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x7:
        {
// switch_71F0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x8:
        {
// switch_71F0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x9:
        {
// switch_71F0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xa:
        {
// switch_71F0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xb:
        {
// switch_71F0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xc:
        {
// switch_71F0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xd:
        {
// switch_71F0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xe:
        {
// switch_71F0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0xf:
        {
// switch_71F0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x10:
        {
// switch_71F0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x11:
        {
// switch_71F0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x12:
        {
// switch_71F0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x13:
        {
// switch_71F0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x14:
        {
// switch_71F0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x15:
        {
// switch_71F0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x16:
        {
// switch_71F0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x17:
        {
// switch_71F0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x18:
        {
// switch_71F0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x19:
        {
// switch_71F0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1a:
        {
// switch_71F0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1b:
        {
// switch_71F0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1c:
        {
// switch_71F0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1d:
        {
// switch_71F0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1e:
        {
// switch_71F0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x1f:
        {
// switch_71F0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x20:
        {
// switch_71F0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x21:
        {
// switch_71F0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x22:
        {
// switch_71F0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x23:
        {
// switch_71F0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x24:
        {
// switch_71F0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x25:
        {
// switch_71F0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x26:
        {
// switch_71F0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x27:
        {
// switch_71F0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x28:
        {
// switch_71F0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x29:
        {
// switch_71F0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2a:
        {
// switch_71F0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2b:
        {
// switch_71F0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2c:
        {
// switch_71F0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2d:
        {
// switch_71F0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2e:
        {
// switch_71F0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x2f:
        {
// switch_71F0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x30:
        {
// switch_71F0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x31:
        {
// switch_71F0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x32:
        {
// switch_71F0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x33:
        {
// switch_71F0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x34:
        {
// switch_71F0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x35:
        {
// switch_71F0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x36:
        {
// switch_71F0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x37:
        {
// switch_71F0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x38:
        {
// switch_71F0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x39:
        {
// switch_71F0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3a:
        {
// switch_71F0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3b:
        {
// switch_71F0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3c:
        {
// switch_71F0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3d:
        {
// switch_71F0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
        case 0x3e:
        {
// switch_71F0_case_0x3e
            var_8 = 3;
            var_16 = 29144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_71F0_case_default
        }
    }
}
// fun_7B10
fun_7B10() {
    pri = 30144;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7B98
// lab_7B98
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7D18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7D08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7C58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7C58
    pri = 0;
    OP_JUMP lab_7C60
// lab_7D18
    pri = 0;
    return pri;
// lab_7D08
    OP_JUMP lab_7B90
// lab_7B90
    OP_INC_P_S -936
// lab_7C58
    pri = 1;
// lab_7C60
    OP_JZER lab_7CD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7CD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7CD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7CD0
}
// fun_7D38
fun_7D38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7DD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_12A0()
// lab_7DD0
    pri = arg_4;
    OP_JZER lab_7E08
    var_8 = 1;
    var_16 = 8;
    pri = fun_12C8(var_8)
// lab_7E08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7E60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7E60
    pri = 0;
    OP_JUMP lab_7E68
// lab_7E60
    pri = 1;
// lab_7E68
    OP_JZER lab_7F30
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7F30
    var_16 = 0;
    pri = fun_04F0()
    OP_JZER lab_7F08
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_11E0(var_32, var_24)
    OP_JUMP lab_7F30
// lab_7F30
    pri = arg_2;
    OP_JZER lab_8008
    var_8 = 0;
    pri = fun_04F0()
    OP_JZER lab_7FD8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FB8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0730(var_40)
    OP_JUMP lab_8008
// lab_8008
    pri = arg_3;
    OP_JZER lab_8040
    var_8 = 1;
    var_16 = 8;
    pri = fun_1268(var_8)
// lab_8040
    pri = 0;
    return pri;
// lab_7FD8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
// lab_7F08
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_11E0(var_16, var_8)
}
// fun_8050
fun_8050() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7B10(var_24)
    pri = 0;
    return pri;
}
// fun_80B8
fun_80B8() {
    pri = g_mode;
    switch (pri) {
// switch_8178
        case default:
        {
// switch_8178_case_default
            pri = CommandNOP()
            OP_JUMP lab_81C0
// lab_81C0
            pri = 0;
            return pri;
        }
        case 0xb846f7221ac7d432:
        {
// switch_8178_case_0xb846f7221ac7d432
            var_8 = 0;
            pri = fun_97A8()
            OP_JUMP lab_81C0
        }
        case 0x0:
        {
// switch_8178_case_0x0
            var_8 = 0;
            pri = fun_81D0()
            OP_JUMP lab_81C0
        }
        case 0x548bd51e68ac097e:
        {
// switch_8178_case_0x548bd51e68ac097e
            var_8 = 0;
            pri = fun_9898()
            OP_JUMP lab_81C0
        }
    }
}
// fun_81D0
fun_81D0() {
    pri = 0;
    return pri;
}
// fun_81E8
fun_81E8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7D38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8240
fun_8240() {
    pri = 0;
    return pri;
}
// fun_8258
fun_8258() {
    pri = 0;
    return pri;
}
// fun_8270
fun_8270() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 8802641224559852288, 8847452862006642298
    var_56 = 48;
    pri = fun_0830(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C 8847452862006642298, 8802641224559852288
    var_96 = 48;
    pri = fun_0830(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -930924255970405542, 8847452862006642298
    var_144 = 56;
    pri = fun_1B10(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1C58(var_152)
    var_168 = 0;
    pri = fun_1D18()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_0888(var_176)
    var_192 = 8847452862006642298;
    var_200 = 8;
    pri = fun_0888(var_192)
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 1;
    var_256 = 8847452862006642298;
    var_264 = 56;
    pri = fun_3AA8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -930925355482033753, 8847452862006642298
    var_312 = 56;
    pri = fun_1B10(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1C58(var_320)
    var_336 = 0;
    pri = fun_1D18()
    var_344 = 1;
    var_352 = 3;
    var_360 = 0;
    var_368 = 1;
    var_376 = 8847452862006642298;
    var_384 = 40;
    pri = fun_5DE0(var_376, var_368, var_360, var_352, var_344)
    var_392 = 8847452862006642298;
    var_400 = 8;
    pri = fun_0A60(var_392)
    var_408 = 1;
    var_416 = -1;
    var_424 = -1;
    var_432 = 3;
    var_440 = 0;
    var_448 = 2;
    var_456 = 8847452862006642298;
    var_464 = 56;
    pri = fun_1EC8(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 5;
    var_480 = 8;
    pri = fun_0060(var_472)
    var_488 = 1;
    var_496 = -1;
    var_504 = -1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 22;
    var_536 = 8802641224559852288;
    var_544 = 56;
    pri = fun_1EC8(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 8847452862006642298;
    var_560 = 8;
    pri = fun_0A60(var_552)
    var_568 = 8802641224559852288;
    var_576 = 8;
    pri = fun_0A60(var_568)
    var_584 = 15;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = 1;
    var_608 = 0;
    var_616 = 4641240890982006784;
    var_624 = 0;
    var_632 = 0;
    var_640 = 1700;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 3300;
    pri = float(var_656)
    var_664 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_672 = 72;
    pri = fun_0768(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 50;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 1;
    var_704 = 0;
    var_712 = 32;
    var_720 = 8;
    var_728 = 32;
    pri = fun_03F0(var_720, var_712, var_704, var_696)
    var_736 = 0;
    pri = fun_0460()
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_0888(var_744)
    var_760 = 1;
    var_768 = 0;
    pri = float(var_768)
    var_776 = pri;
    var_784 = 8847452862006642298;
    var_792 = 24;
    pri = fun_06F0(var_784, var_776, var_768)
    var_800 = 31064;
    pri = SoundPostEvent(var_800)
    var_808 = 1;
    var_816 = 0;
    var_824 = 16;
    pri = fun_0280(var_816, var_808)
    pri = EvCameraStart()
    var_832 = 1;
    var_840 = 0;
    var_848 = 4641240890982006784;
    var_856 = 0;
    var_864 = 0;
    var_872 = 1700;
    pri = float(var_872)
    var_880 = pri;
    var_888 = 2415;
    pri = float(var_888)
    var_896 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_904 = 72;
    pri = fun_0768(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_912 = 40;
    var_920 = 8;
    pri = fun_0060(var_912)
    var_928 = 0;
    var_936 = 4628799697011395789;
    var_944 = 0;
    OP_PUSH5_C 4653963735851188879, -4599734590916253450, 4658160307851619205, 4655816149061200773, 4630204257145181962
    var_952 = 4657165601672202813;
    var_960 = 1;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    pri = fun_1E00()
    var_976 = 80;
    var_984 = 8;
    var_992 = 16;
    pri = fun_0390(var_984, var_976)
    var_1000 = 0;
    pri = fun_0460()
    var_1008 = 8802641224559852288;
    var_1016 = 8;
    pri = fun_0888(var_1008)
    var_1024 = 0;
    var_1032 = 4628799697011395789;
    var_1040 = 9;
    OP_PUSH5_C 4653942053481889137, 4635217326480398746, 4658171962674873631, 4655793411160738365, 4638647099071618089
    var_1048 = 4657176728729875907;
    var_1056 = 90;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 60;
    var_1072 = 8;
    pri = fun_0060(var_1064)
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 180;
    pri = float(var_1104)
    var_1112 = pri;
    var_1120 = 8802641224559852288;
    var_1128 = 40;
    pri = fun_07E0(var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1136 = 8802641224559852288;
    var_1144 = 8;
    pri = fun_0888(var_1136)
    var_1152 = 1;
    var_1160 = 0;
    var_1168 = 31296;
    var_1176 = 1;
    var_1184 = 32;
    pri = fun_03F0(var_1176, var_1168, var_1160, var_1152)
    var_1192 = 0;
    pri = fun_0460()
    var_1200 = 0;
    var_1208 = 4628855992006737920;
    var_1216 = 0;
    OP_PUSH5_C 4653347657495913431, 4634362346238640128, 4657992588347918254, 4655774675482601062, 4637784378267999928
    var_1224 = 4657380380273572577;
    var_1232 = 1;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 0;
    pri = fun_1E00()
    var_1248 = 0;
    var_1256 = 4628855992006737920;
    var_1264 = 3;
    OP_PUSH5_C 4653229657908020511, 4634189942815404851, 4658021153660007875, 4655656719875173253, 4637619011719182418
    var_1272 = 4657408945585662198;
    var_1280 = 90;
    pri = EvCameraMove(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1288 = 31344;
    var_1296 = 15;
    var_1304 = 16;
    pri = fun_0390(var_1296, var_1288)
    var_1312 = 0;
    pri = fun_1E00()
    var_1320 = 0;
    var_1328 = 4630432251876317594;
    var_1336 = 0;
    OP_PUSH5_C 4653002366864326656, 4640472112451865805, 4657777611834455491, 4655582085025879818, 4636488186000247357
    var_1344 = 4657374003106131476;
    var_1352 = 1;
    pri = EvCameraMove(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1360 = 0;
    pri = fun_1E00()
    var_1368 = 0;
    var_1376 = 4630432251876317594;
    var_1384 = 2;
    OP_PUSH5_C 4653027831553625948, 4640472112451865805, 4657818315754915758, 4655607549715179110, 4636488186000247357
    var_1392 = 4657414707026591744;
    var_1400 = 240;
    pri = EvCameraMove(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1408 = 1;
    var_1416 = 1;
    var_1424 = -1;
    var_1432 = -1;
    var_1440 = 0;
    var_1448 = 1;
    var_1456 = 8847452862006642298;
    var_1464 = 56;
    pri = fun_3AA8(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1472 = 1;
    var_1480 = 8;
    pri = fun_1D48(var_1472)
    var_1488 = 0;
    var_1496 = 3;
    var_1504 = 0;
    var_1512 = 100;
    var_1520 = -1;
    OP_PUSH2_C -930927554505290175, 8847452862006642298
    var_1528 = 56;
    pri = fun_1B10(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 1;
    var_1544 = 8;
    pri = fun_1C58(var_1536)
    var_1552 = 0;
    pri = fun_1D18()
    var_1560 = 1;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 1;
    var_1592 = 8847452862006642298;
    var_1600 = 40;
    pri = fun_5DE0(var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1608 = 0;
    var_1616 = 3;
    var_1624 = 0;
    var_1632 = 100;
    var_1640 = -1;
    OP_PUSH2_C -930926454993661964, 8847452862006642298
    var_1648 = 56;
    pri = fun_1B10(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1656 = 8847452862006642298;
    var_1664 = 8;
    pri = fun_0A60(var_1656)
    var_1672 = 1;
    var_1680 = 8;
    pri = fun_1C58(var_1672)
    var_1688 = 0;
    pri = fun_1D18()
    var_1696 = 1;
    var_1704 = 0;
    var_1712 = 32;
    var_1720 = 8;
    var_1728 = 32;
    pri = fun_03F0(var_1720, var_1712, var_1704, var_1696)
    var_1736 = 0;
    pri = fun_0460()
    var_1744 = 3;
    var_1752 = 1;
    pri = EvCameraEnd(var_1752, var_1744)
    var_1760 = 31392;
    pri = SoundPostEvent(var_1760)
    var_1768 = 31624;
    pri = SoundPostEvent(var_1768)
    var_1776 = 0;
    var_1784 = 1;
    var_1792 = 1;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = 31808;
    var_1832 = 56;
    pri = fun_1D98(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 0;
    var_1848 = 1;
    var_1856 = 1;
    var_1864 = 0;
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = 31848;
    var_1896 = 56;
    pri = fun_1D98(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1904 = 0;
    var_1912 = 1;
    var_1920 = 1;
    var_1928 = 0;
    var_1936 = 0;
    var_1944 = 0;
    var_1952 = 31888;
    var_1960 = 56;
    pri = fun_1D98(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1968 = 31928;
    pri = SoundPostEvent(var_1968)
    var_1976 = 32056;
    pri = SoundPostEvent(var_1976)
    pri = 0;
    return pri;
}
// fun_9270
fun_9270() {
    pri = 0;
    return pri;
}
// fun_9288
fun_9288() {
    var_8 = 490;
    var_16 = 8;
    pri = fun_8050(var_8)
    var_24 = 10;
    var_32 = 2308525758704345885;
    pri = WorkSet(var_32, var_24)
    var_40 = 4166911318193987639;
    pri = VanishFlagSet(var_40)
    var_48 = 5996991087849294980;
    pri = VanishFlagSet(var_48)
    var_56 = 231539292373669382;
    pri = VanishFlagSet(var_56)
    var_64 = 8248084679607072011;
    pri = VanishFlagReset(var_64)
    var_72 = 1341676596660868790;
    pri = VanishFlagReset(var_72)
    var_80 = 8661207189725172744;
    pri = VanishFlagReset(var_80)
    var_88 = 189517696436208142;
    pri = VanishFlagReset(var_88)
    var_96 = 7241287441575206891;
    pri = VanishFlagReset(var_96)
    var_104 = 8934092026399605527;
    pri = VanishFlagReset(var_104)
    var_112 = -3276543787315562266;
    pri = VanishFlagReset(var_112)
    var_120 = 6876896308051621773;
    pri = VanishFlagReset(var_120)
    var_128 = -2952232645155182278;
    pri = VanishFlagReset(var_128)
    var_136 = 8661210488260057377;
    pri = VanishFlagReset(var_136)
    var_144 = -3276542687803934055;
    pri = VanishFlagReset(var_144)
    var_152 = -6389907082618827969;
    pri = VanishFlagReset(var_152)
    var_160 = 8934088727864720894;
    pri = VanishFlagReset(var_160)
    var_168 = -2176457642552959458;
    pri = VanishFlagReset(var_168)
    var_176 = 1983516971041023246;
    pri = VanishFlagSet(var_176)
    var_184 = 713219082408657684;
    pri = VanishFlagSet(var_184)
    var_192 = -7024236298326424865;
    pri = VanishFlagSet(var_192)
    var_200 = 1243398226496293493;
    pri = VanishFlagSet(var_200)
    var_208 = 5238487797000439776;
    var_216 = 8;
    pri = fun_0698(var_208)
    var_224 = -1110336741612234150;
    var_232 = 8;
    pri = fun_0518(var_224)
    var_240 = -2468653985012663263;
    var_248 = 8;
    pri = fun_0518(var_240)
    var_256 = 7506713967005848083;
    pri = FlagReset(var_256)
    var_264 = 5501743159805903958;
    pri = FlagSet(var_264)
    var_272 = 32288;
    var_280 = 8;
    pri = fun_1E90(var_272)
    pri = 0;
    return pri;
}
// fun_9720
fun_9720() {
    var_8 = 0;
    pri = fun_0548()
    OP_PUSH2_C -2664763386676178833, -6818830576078986567
    pri = SetBamiriInfoToChara(var_8, var_0)
    var_16 = -5167180037022356037;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_97A8
fun_97A8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_81E8()
    var_16 = 0;
    pri = fun_8240()
    var_24 = 0;
    pri = fun_8258()
    var_32 = 0;
    pri = fun_8270()
    var_40 = 0;
    pri = fun_9270()
    var_48 = 0;
    pri = fun_9288()
    var_56 = 0;
    pri = fun_9720()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9898
fun_9898() {
    var_8 = 0;
    pri = fun_8240()
    var_16 = 0;
    pri = fun_9288()
    pri = 0;
    return pri;
}
