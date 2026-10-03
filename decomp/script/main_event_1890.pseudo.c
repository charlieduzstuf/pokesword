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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0410
// lab_0410
    var_8 = 0;
    pri = fun_0528()
    OP_JNZ lab_0448
    OP_JUMP lab_0478
// lab_0448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0410
// lab_0478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_04A8
// lab_04A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_04E8
    pri = 0;
    return pri;
// lab_04E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
    pri = 0;
    return pri;
}
// fun_0528
fun_0528() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D18(var_8)
    OP_JZER lab_0658
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D48(var_24)
    OP_JNZ lab_0658
    pri = 0;
    return pri;
// lab_0658
    OP_JUMP lab_0668
// lab_0668
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0668
    pri = 0;
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
    pri = fun_0D18(var_8)
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
    pri = fun_0980(var_8)
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
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A08
    pri = 0;
    return pri;
// lab_0A08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D18(var_8)
    OP_JZER lab_0B38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A60
    OP_ZERO_P_S 64
// lab_0B38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B70
    OP_CONST_S 64, 1
// lab_0B70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA8
    OP_CONST_S 72, 1
// lab_0BA8
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
// lab_0A60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A88
    OP_ZERO_P_S 72
// lab_0A88
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
    OP_JUMP lab_0C48
// lab_0C48
    pri = 0;
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D48
fun_0D48() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D78
fun_0D78() {
    OP_JUMP lab_0D90
// lab_0D90
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0E20
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0E10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    pri = 0;
    return pri;
// lab_0E20
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EB0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0EA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    pri = 0;
    return pri;
// lab_0EB0
    pri = 0;
    return pri;
// lab_0EA0
    OP_JUMP lab_0EC0
// lab_0EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D90
    pri = 0;
    return pri;
// lab_0E10
    OP_JUMP lab_0EC0
}
// fun_0F00
fun_0F00() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0780(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D78(var_40)
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0FC0
fun_0FC0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
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
// switch_1638
        case default:
        {
// switch_1638_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1680
// lab_1680
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
            OP_JNZ lab_1728
            var_88 = 0;
            pri = fun_18E0()
// lab_1728
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1638_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1220
                case default:
                {
// switch_1220_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1298
// lab_1298
                    OP_JUMP lab_1680
                }
                case 0x0:
                {
// switch_1220_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1298
                }
                case 0x1:
                {
// switch_1220_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1298
                }
                case 0x2:
                {
// switch_1220_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1298
                }
                case 0x3:
                {
// switch_1220_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1298
                }
                case 0x4:
                {
// switch_1220_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1298
                }
                case 0x5:
                {
// switch_1220_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1298
                }
            }
        }
        case 0x65:
        {
// switch_1638_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_13D8
                case default:
                {
// switch_13D8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1450
// lab_1450
                    OP_JUMP lab_1680
                }
                case 0x0:
                {
// switch_13D8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1450
                }
                case 0x1:
                {
// switch_13D8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1450
                }
                case 0x2:
                {
// switch_13D8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1450
                }
                case 0x3:
                {
// switch_13D8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1450
                }
                case 0x4:
                {
// switch_13D8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1450
                }
                case 0x5:
                {
// switch_13D8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1450
                }
            }
        }
        case 0x66:
        {
// switch_1638_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1590
                case default:
                {
// switch_1590_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1608
// lab_1608
                    OP_JUMP lab_1680
                }
                case 0x0:
                {
// switch_1590_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1608
                }
                case 0x1:
                {
// switch_1590_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1608
                }
                case 0x2:
                {
// switch_1590_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1608
                }
                case 0x3:
                {
// switch_1590_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1608
                }
                case 0x4:
                {
// switch_1590_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1608
                }
                case 0x5:
                {
// switch_1590_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1608
                }
            }
        }
    }
}
// fun_1740
fun_1740() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0748(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17E8
    pri = 1;
    return pri;
// lab_17E8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1830
fun_1830() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1880
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1740(var_8)
    arg_2 = pri;
// lab_1880
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1020(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18E0
fun_18E0() {
    OP_JUMP lab_18F8
// lab_18F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1938
    pri = 0;
    return pri;
// lab_1938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18F8
    pri = 0;
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = 0;
    pri = fun_18E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A28
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A28
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_1AA0
fun_1AA0() {
    pri = arg_1;
    OP_JNZ lab_1AE8
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1AE8
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1B40
fun_1B40() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1BB8
fun_1BB8() {
    var_8 = 0;
    pri = fun_1B40()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1C38
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1C38
    pri = 1;
    return pri;
// lab_1C38
    var_8 = 0;
    pri = fun_1B40()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1C78
    pri = 1;
    return pri;
// lab_1C78
    var_8 = 0;
    pri = fun_1B40()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1CA8
fun_1CA8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1CF8
fun_1CF8() {
    pri = arg_5;
    OP_JNZ lab_1D30
    var_8 = 0;
    pri = fun_0C58()
// lab_1D30
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1D80
    OP_CONST_S -8, -1
// lab_1D80
    pri = arg_1;
    switch (pri) {
// switch_3838
        case default:
        {
// switch_3838_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3CE0
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0748(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3CE0
            pri = 1;
            OP_JUMP lab_3CE8
// lab_3CE0
            pri = 0;
// lab_3CE8
            OP_JZER lab_3D38
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3F90
// lab_3D38
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3DA0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3DA0
            pri = 1;
            OP_JUMP lab_3DA8
// lab_3DA0
            pri = 0;
// lab_3DA8
            OP_JZER lab_3F30
            var_16 = 20672;
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_3F90
// lab_3F30
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3F90
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4000
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4000
            var_8 = 0;
            pri = fun_0C98()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3838_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1:
        {
// switch_3838_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x2:
        {
// switch_3838_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3:
        {
// switch_3838_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x4:
        {
// switch_3838_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x5:
        {
// switch_3838_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0980(var_40)
            OP_JUMP switch_3838_case_default
        }
        case 0x6:
        {
// switch_3838_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x7:
        {
// switch_3838_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x8:
        {
// switch_3838_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x9:
        {
// switch_3838_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0xa:
        {
// switch_3838_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0xb:
        {
// switch_3838_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0xc:
        {
// switch_3838_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0xd:
        {
// switch_3838_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xe:
        {
// switch_3838_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xf:
        {
// switch_3838_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x10:
        {
// switch_3838_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x11:
        {
// switch_3838_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x12:
        {
// switch_3838_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x13:
        {
// switch_3838_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x14:
        {
// switch_3838_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x15:
        {
// switch_3838_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x16:
        {
// switch_3838_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x17:
        {
// switch_3838_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x18:
        {
// switch_3838_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x19:
        {
// switch_3838_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1a:
        {
// switch_3838_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1b:
        {
// switch_3838_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1c:
        {
// switch_3838_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x1d:
        {
// switch_3838_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1e:
        {
// switch_3838_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x1f:
        {
// switch_3838_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x20:
        {
// switch_3838_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x21:
        {
// switch_3838_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x22:
        {
// switch_3838_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x23:
        {
// switch_3838_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x24:
        {
// switch_3838_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x25:
        {
// switch_3838_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x26:
        {
// switch_3838_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x27:
        {
// switch_3838_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x28:
        {
// switch_3838_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x29:
        {
// switch_3838_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x2a:
        {
// switch_3838_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x2b:
        {
// switch_3838_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x2c:
        {
// switch_3838_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x2d:
        {
// switch_3838_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x2e:
        {
// switch_3838_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x2f:
        {
// switch_3838_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x30:
        {
// switch_3838_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x31:
        {
// switch_3838_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x32:
        {
// switch_3838_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x33:
        {
// switch_3838_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x34:
        {
// switch_3838_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x35:
        {
// switch_3838_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x36:
        {
// switch_3838_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x37:
        {
// switch_3838_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x38:
        {
// switch_3838_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x39:
        {
// switch_3838_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3a:
        {
// switch_3838_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3b:
        {
// switch_3838_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3c:
        {
// switch_3838_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3d:
        {
// switch_3838_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3e:
        {
// switch_3838_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
    }
}
// fun_4030
fun_4030() {
    pri = arg_4;
    OP_JNZ lab_4068
    var_8 = 0;
    pri = fun_0C58()
// lab_4068
    pri = arg_1;
    switch (pri) {
// switch_5440
        case default:
        {
// switch_5440_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D18(var_264)
            OP_JZER lab_5A08
            pri = arg_3;
            switch (pri) {
// switch_59B0
                case default:
                {
// switch_59B0_case_default
                    OP_JUMP lab_5CC0
// lab_5CC0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5D30
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5D30
                    var_8 = 0;
                    pri = fun_0C98()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_59B0_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59B0_case_default
                }
                case 0x2:
                {
// switch_59B0_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59B0_case_default
                }
                case 0x3:
                {
// switch_59B0_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59B0_case_default
                }
            }
// lab_5A08
            pri = arg_1;
            OP_JZER lab_5A58
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5A58
            pri = 0;
            OP_JUMP lab_5A60
// lab_5A58
            pri = 1;
// lab_5A60
            OP_JZER lab_5AC8
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0748(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5AC8
            pri = 1;
            OP_JUMP lab_5AD0
// lab_5AC8
            pri = 0;
// lab_5AD0
            OP_JZER lab_5B20
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CC0
// lab_5B20
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5B88
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CC0
// lab_5B88
            var_16 = 22096;
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5440_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1:
        {
// switch_5440_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2:
        {
// switch_5440_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3:
        {
// switch_5440_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x4:
        {
// switch_5440_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x5:
        {
// switch_5440_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0980(var_40)
            OP_JUMP switch_5440_case_default
        }
        case 0x6:
        {
// switch_5440_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x7:
        {
// switch_5440_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x8:
        {
// switch_5440_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x9:
        {
// switch_5440_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xa:
        {
// switch_5440_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xb:
        {
// switch_5440_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xc:
        {
// switch_5440_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xd:
        {
// switch_5440_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xe:
        {
// switch_5440_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xf:
        {
// switch_5440_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x10:
        {
// switch_5440_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x11:
        {
// switch_5440_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x12:
        {
// switch_5440_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x13:
        {
// switch_5440_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x14:
        {
// switch_5440_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x15:
        {
// switch_5440_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x16:
        {
// switch_5440_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x17:
        {
// switch_5440_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x18:
        {
// switch_5440_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x19:
        {
// switch_5440_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1a:
        {
// switch_5440_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1b:
        {
// switch_5440_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1c:
        {
// switch_5440_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1d:
        {
// switch_5440_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1e:
        {
// switch_5440_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1f:
        {
// switch_5440_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x20:
        {
// switch_5440_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x21:
        {
// switch_5440_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x22:
        {
// switch_5440_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x23:
        {
// switch_5440_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x24:
        {
// switch_5440_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x25:
        {
// switch_5440_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x26:
        {
// switch_5440_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x27:
        {
// switch_5440_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x28:
        {
// switch_5440_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x29:
        {
// switch_5440_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2a:
        {
// switch_5440_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2b:
        {
// switch_5440_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2c:
        {
// switch_5440_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2d:
        {
// switch_5440_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2e:
        {
// switch_5440_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2f:
        {
// switch_5440_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x30:
        {
// switch_5440_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x31:
        {
// switch_5440_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x32:
        {
// switch_5440_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x33:
        {
// switch_5440_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x34:
        {
// switch_5440_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x35:
        {
// switch_5440_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x36:
        {
// switch_5440_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x37:
        {
// switch_5440_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x38:
        {
// switch_5440_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x39:
        {
// switch_5440_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3a:
        {
// switch_5440_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3b:
        {
// switch_5440_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3c:
        {
// switch_5440_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3d:
        {
// switch_5440_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3e:
        {
// switch_5440_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0708(var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
    }
}
// fun_5D60
fun_5D60() {
    pri = 22264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5DE8
// lab_5DE8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5F68
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5F58
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5EA8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5EA8
    pri = 0;
    OP_JUMP lab_5EB0
// lab_5F68
    pri = 0;
    return pri;
// lab_5F58
    OP_JUMP lab_5DE0
// lab_5DE0
    OP_INC_P_S -936
// lab_5EA8
    pri = 1;
// lab_5EB0
    OP_JZER lab_5F28
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5F20
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5F28
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5F20
}
// fun_5F88
fun_5F88() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6020
    var_8 = 1;
    var_16 = 0;
    var_24 = 23184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_0FC0()
// lab_6020
    pri = arg_4;
    OP_JZER lab_6058
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FE8(var_8)
// lab_6058
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_60B0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_60B0
    pri = 0;
    OP_JUMP lab_60B8
// lab_60B0
    pri = 1;
// lab_60B8
    OP_JZER lab_6180
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6180
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_6158
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0F00(var_32, var_24)
    OP_JUMP lab_6180
// lab_6180
    pri = arg_2;
    OP_JZER lab_6258
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_6228
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CD8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0550(var_40)
    OP_JUMP lab_6258
// lab_6258
    pri = arg_3;
    OP_JZER lab_6290
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F88(var_8)
// lab_6290
    pri = 0;
    return pri;
// lab_6228
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CD8(var_16, var_8)
// lab_6158
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F00(var_16, var_8)
}
// fun_62A0
fun_62A0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5D60(var_24)
    pri = 0;
    return pri;
}
// fun_6308
fun_6308() {
    pri = g_mode;
    switch (pri) {
// switch_63F0
        case default:
        {
// switch_63F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_6448
// lab_6448
            pri = 0;
            return pri;
        }
        case 0xc06a4dd80e8657ad:
        {
// switch_63F0_case_0xc06a4dd80e8657ad
            var_8 = 0;
            pri = fun_68B0()
            OP_JUMP lab_6448
        }
        case 0xe70caf27483ef3fa:
        {
// switch_63F0_case_0xe70caf27483ef3fa
            var_8 = 0;
            pri = fun_6868()
            OP_JUMP lab_6448
        }
        case 0x0:
        {
// switch_63F0_case_0x0
            var_8 = 0;
            pri = fun_6458()
            OP_JUMP lab_6448
        }
        case 0x4a2792ad261ff16:
        {
// switch_63F0_case_0x4a2792ad261ff16
            var_8 = 0;
            pri = fun_6760()
            OP_JUMP lab_6448
        }
    }
}
// fun_6458
fun_6458() {
    pri = 0;
    return pri;
}
// fun_6470
fun_6470() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23184;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    pri = 0;
    return pri;
}
// fun_64D8
fun_64D8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5F88(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6530
fun_6530() {
    pri = 0;
    return pri;
}
// fun_6548
fun_6548() {
    pri = 0;
    return pri;
}
// fun_6560
fun_6560() {
    var_8 = 23232;
    var_16 = 8;
    pri = fun_1A68(var_8)
    var_24 = 30;
    var_32 = 0;
    var_40 = 2;
    var_48 = 0;
    var_56 = 175;
    var_64 = 40;
    pri = fun_1AA0(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    pri = fun_1BB8()
    OP_JZER lab_6608
    var_80 = 0;
    pri = fun_1CA8()
// lab_6608
    var_8 = 3;
    var_16 = 0;
    pri = EvCameraEnd(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6640
fun_6640() {
    pri = 0;
    return pri;
}
// fun_6658
fun_6658() {
    var_8 = 1514373463937579588;
    var_16 = 8;
    pri = fun_03A8(var_8)
    var_24 = 1910;
    var_32 = 8;
    pri = fun_62A0(var_24)
    var_40 = 2298869767325498192;
    pri = VanishFlagSet(var_40)
    var_48 = -6558253429794680955;
    pri = FlagSet(var_48)
    pri = 0;
    return pri;
}
// fun_6708
fun_6708() {
    var_8 = 0;
    pri = fun_03D8()
    var_16 = -311212184363683515;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_6760
fun_6760() {
    var_8 = 0;
    pri = fun_6470()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_64D8()
    var_24 = 0;
    pri = fun_6530()
    var_32 = 0;
    pri = fun_6548()
    var_40 = 0;
    pri = fun_6560()
    var_48 = 0;
    pri = fun_6640()
    var_56 = 0;
    pri = fun_6658()
    var_64 = 0;
    pri = fun_6708()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6868
fun_6868() {
    var_8 = 0;
    pri = fun_6530()
    var_16 = 0;
    pri = fun_6658()
    pri = 0;
    return pri;
}
// fun_68B0
fun_68B0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 11;
    var_56 = 1514373463937579588;
    var_64 = 56;
    pri = fun_1CF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 1514373463937579588, 8802641224559852288
    var_104 = 48;
    pri = fun_0588(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 8802641224559852288;
    var_120 = 8;
    pri = fun_05E0(var_112)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 101;
    var_160 = -1;
    OP_PUSH2_C 5839935636007075599, 1514373463937579588
    var_168 = 56;
    pri = fun_1830(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1978(var_176)
    var_192 = 0;
    pri = fun_1A38()
    var_200 = 1;
    var_208 = 3;
    var_216 = 0;
    var_224 = 11;
    var_232 = 1514373463937579588;
    var_240 = 40;
    pri = fun_4030(var_232, var_224, var_216, var_208, var_200)
    var_248 = 1514373463937579588;
    var_256 = 8;
    pri = fun_0780(var_248)
    pri = 0;
    return pri;
}
