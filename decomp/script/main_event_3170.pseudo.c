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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_05B8()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
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
// fun_0760
fun_0760() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
    OP_JZER lab_08D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12D8(var_24)
    OP_JNZ lab_08D8
    pri = 0;
    return pri;
// lab_08D8
    OP_JUMP lab_08E8
// lab_08E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0948
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08E8
    pri = 0;
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
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
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AC0
// lab_0AC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
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
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CC0
    pri = 0;
    return pri;
// lab_0CC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12A8(var_8)
    OP_JZER lab_0DF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D18
    OP_ZERO_P_S 64
// lab_0DF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E28
    OP_CONST_S 64, 1
// lab_0E28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E60
    OP_CONST_S 72, 1
// lab_0E60
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
// lab_0D18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_ZERO_P_S 72
// lab_0D40
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
    OP_JUMP lab_0F00
// lab_0F00
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
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
// fun_1048
fun_1048() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1088
fun_1088() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1088(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1100(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1140(var_24)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 344;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1308
fun_1308() {
    OP_JUMP lab_1320
// lab_1320
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_13B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1440
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1430
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    pri = 0;
    return pri;
// lab_1440
    pri = 0;
    return pri;
// lab_1430
    OP_JUMP lab_1450
// lab_1450
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1320
    pri = 0;
    return pri;
// lab_13A0
    OP_JUMP lab_1450
}
// fun_1490
fun_1490() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1308(var_40)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1678
fun_1678() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
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
// switch_1CC8
        case default:
        {
// switch_1CC8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1D10
// lab_1D10
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
            OP_JNZ lab_1DB8
            var_88 = 0;
            pri = fun_2028()
// lab_1DB8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1CC8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_18B0
                case default:
                {
// switch_18B0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1928
// lab_1928
                    OP_JUMP lab_1D10
                }
                case 0x0:
                {
// switch_18B0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1928
                }
                case 0x1:
                {
// switch_18B0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1928
                }
                case 0x2:
                {
// switch_18B0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1928
                }
                case 0x3:
                {
// switch_18B0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1928
                }
                case 0x4:
                {
// switch_18B0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1928
                }
                case 0x5:
                {
// switch_18B0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1928
                }
            }
        }
        case 0x65:
        {
// switch_1CC8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A68
                case default:
                {
// switch_1A68_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AE0
// lab_1AE0
                    OP_JUMP lab_1D10
                }
                case 0x0:
                {
// switch_1A68_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1AE0
                }
                case 0x1:
                {
// switch_1A68_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1AE0
                }
                case 0x2:
                {
// switch_1A68_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1AE0
                }
                case 0x3:
                {
// switch_1A68_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AE0
                }
                case 0x4:
                {
// switch_1A68_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1AE0
                }
                case 0x5:
                {
// switch_1A68_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1AE0
                }
            }
        }
        case 0x66:
        {
// switch_1CC8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1C20
                case default:
                {
// switch_1C20_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C98
// lab_1C98
                    OP_JUMP lab_1D10
                }
                case 0x0:
                {
// switch_1C20_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C98
                }
                case 0x1:
                {
// switch_1C20_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C98
                }
                case 0x2:
                {
// switch_1C20_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C98
                }
                case 0x3:
                {
// switch_1C20_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C98
                }
                case 0x4:
                {
// switch_1C20_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C98
                }
                case 0x5:
                {
// switch_1C20_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C98
                }
            }
        }
    }
}
// fun_1DD0
fun_1DD0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_16B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E38
fun_1E38() {
    pri = 352;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 432;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A00(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1EE0
    pri = 1;
    return pri;
// lab_1EE0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F28
fun_1F28() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E38(var_8)
    arg_2 = pri;
// lab_1F78
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_16B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1DD0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2028
fun_2028() {
    OP_JUMP lab_2040
// lab_2040
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2080
    pri = 0;
    return pri;
// lab_2080
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2040
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    var_8 = 0;
    pri = fun_2028()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2170
    var_32 = 480;
    pri = SoundPostEvent(var_32)
// lab_2170
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_21B0
fun_21B0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_21E0
// lab_21E0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2220
    OP_JUMP lab_2250
// lab_2220
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21E0
// lab_2250
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2298
fun_2298() {
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
// fun_2308
fun_2308() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23A8
fun_23A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2468
fun_2468() {
    var_8 = 0;
    pri = fun_23F0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_24E8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_24E8
    pri = 1;
    return pri;
// lab_24E8
    var_8 = 0;
    pri = fun_23F0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2518
fun_2518() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2568
fun_2568() {
    OP_JUMP lab_2580
// lab_2580
    pri = EvCameraMoveWait_()
    OP_JZER lab_25B8
    pri = 0;
    return pri;
// lab_25B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2580
    pri = 0;
    return pri;
}
// fun_25F8
fun_25F8() {
    pri = arg_6;
    OP_JNZ lab_2630
    var_8 = 0;
    pri = fun_0F10()
// lab_2630
    pri = arg_1;
    switch (pri) {
// switch_3B98
        case default:
        {
// switch_3B98_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3EE8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3EE8
            pri = 1;
            OP_JUMP lab_3EF0
// lab_3EE8
            pri = 0;
// lab_3EF0
            OP_JZER lab_4048
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A00(var_24, var_16)
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_40A8
// lab_4048
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_40A8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4108
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4168
// lab_4108
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4168
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4168
            pri = arg_2;
            OP_JZER lab_41A8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_41A8
            var_8 = 0;
            pri = fun_0F50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B98_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1:
        {
// switch_3B98_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x2:
        {
// switch_3B98_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x3:
        {
// switch_3B98_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x4:
        {
// switch_3B98_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x5:
        {
// switch_3B98_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x6:
        {
// switch_3B98_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x7:
        {
// switch_3B98_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x8:
        {
// switch_3B98_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x9:
        {
// switch_3B98_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xa:
        {
// switch_3B98_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xb:
        {
// switch_3B98_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xc:
        {
// switch_3B98_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xd:
        {
// switch_3B98_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xe:
        {
// switch_3B98_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0xf:
        {
// switch_3B98_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x10:
        {
// switch_3B98_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x11:
        {
// switch_3B98_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x12:
        {
// switch_3B98_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x13:
        {
// switch_3B98_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x14:
        {
// switch_3B98_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x15:
        {
// switch_3B98_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x16:
        {
// switch_3B98_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x17:
        {
// switch_3B98_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x18:
        {
// switch_3B98_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x19:
        {
// switch_3B98_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1a:
        {
// switch_3B98_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0988(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1b:
        {
// switch_3B98_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0988(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1c:
        {
// switch_3B98_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0988(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C70(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1d:
        {
// switch_3B98_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1e:
        {
// switch_3B98_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x1f:
        {
// switch_3B98_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x20:
        {
// switch_3B98_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x21:
        {
// switch_3B98_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x22:
        {
// switch_3B98_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x23:
        {
// switch_3B98_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x24:
        {
// switch_3B98_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x25:
        {
// switch_3B98_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x26:
        {
// switch_3B98_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x27:
        {
// switch_3B98_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x28:
        {
// switch_3B98_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
        case 0x29:
        {
// switch_3B98_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B98_case_default
        }
    }
}
// fun_41D8
fun_41D8() {
    pri = arg_5;
    OP_JNZ lab_4210
    var_8 = 0;
    pri = fun_0F10()
// lab_4210
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4260
    OP_CONST_S -8, -1
// lab_4260
    pri = arg_1;
    switch (pri) {
// switch_5D18
        case default:
        {
// switch_5D18_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_61C0
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A00(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_61C0
            pri = 1;
            OP_JUMP lab_61C8
// lab_61C0
            pri = 0;
// lab_61C8
            OP_JZER lab_6218
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6470
// lab_6218
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6280
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6280
            pri = 1;
            OP_JUMP lab_6288
// lab_6280
            pri = 0;
// lab_6288
            OP_JZER lab_6410
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A00(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6470
// lab_6410
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6470
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_64E0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_64E0
            var_8 = 0;
            pri = fun_0F50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5D18_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1:
        {
// switch_5D18_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2:
        {
// switch_5D18_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3:
        {
// switch_5D18_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x4:
        {
// switch_5D18_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x5:
        {
// switch_5D18_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C38(var_40)
            OP_JUMP switch_5D18_case_default
        }
        case 0x6:
        {
// switch_5D18_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x7:
        {
// switch_5D18_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x8:
        {
// switch_5D18_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x9:
        {
// switch_5D18_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0xa:
        {
// switch_5D18_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0xb:
        {
// switch_5D18_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0xc:
        {
// switch_5D18_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0xd:
        {
// switch_5D18_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0xe:
        {
// switch_5D18_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0xf:
        {
// switch_5D18_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x10:
        {
// switch_5D18_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x11:
        {
// switch_5D18_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x12:
        {
// switch_5D18_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x13:
        {
// switch_5D18_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x14:
        {
// switch_5D18_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x15:
        {
// switch_5D18_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x16:
        {
// switch_5D18_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x17:
        {
// switch_5D18_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x18:
        {
// switch_5D18_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x19:
        {
// switch_5D18_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1a:
        {
// switch_5D18_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1b:
        {
// switch_5D18_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1c:
        {
// switch_5D18_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1d:
        {
// switch_5D18_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1e:
        {
// switch_5D18_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x1f:
        {
// switch_5D18_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x20:
        {
// switch_5D18_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x21:
        {
// switch_5D18_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x22:
        {
// switch_5D18_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x23:
        {
// switch_5D18_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x24:
        {
// switch_5D18_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x25:
        {
// switch_5D18_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x26:
        {
// switch_5D18_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x27:
        {
// switch_5D18_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x28:
        {
// switch_5D18_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x29:
        {
// switch_5D18_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2a:
        {
// switch_5D18_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2b:
        {
// switch_5D18_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2c:
        {
// switch_5D18_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2d:
        {
// switch_5D18_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2e:
        {
// switch_5D18_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x2f:
        {
// switch_5D18_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x30:
        {
// switch_5D18_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x31:
        {
// switch_5D18_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x32:
        {
// switch_5D18_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x33:
        {
// switch_5D18_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x34:
        {
// switch_5D18_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x35:
        {
// switch_5D18_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x36:
        {
// switch_5D18_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x37:
        {
// switch_5D18_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x38:
        {
// switch_5D18_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D18_case_default
        }
        case 0x39:
        {
// switch_5D18_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3a:
        {
// switch_5D18_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3b:
        {
// switch_5D18_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3c:
        {
// switch_5D18_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3d:
        {
// switch_5D18_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
        case 0x3e:
        {
// switch_5D18_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            OP_JUMP switch_5D18_case_default
        }
    }
}
// fun_6510
fun_6510() {
    pri = arg_4;
    OP_JNZ lab_6548
    var_8 = 0;
    pri = fun_0F10()
// lab_6548
    pri = arg_1;
    switch (pri) {
// switch_7920
        case default:
        {
// switch_7920_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12A8(var_264)
            OP_JZER lab_7EE8
            pri = arg_3;
            switch (pri) {
// switch_7E90
                case default:
                {
// switch_7E90_case_default
                    OP_JUMP lab_81A0
// lab_81A0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8210
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8210
                    var_8 = 0;
                    pri = fun_0F50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7E90_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E90_case_default
                }
                case 0x2:
                {
// switch_7E90_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E90_case_default
                }
                case 0x3:
                {
// switch_7E90_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E90_case_default
                }
            }
// lab_7EE8
            pri = arg_1;
            OP_JZER lab_7F38
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7F38
            pri = 0;
            OP_JUMP lab_7F40
// lab_7F38
            pri = 1;
// lab_7F40
            OP_JZER lab_7FA8
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A00(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7FA8
            pri = 1;
            OP_JUMP lab_7FB0
// lab_7FA8
            pri = 0;
// lab_7FB0
            OP_JZER lab_8000
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_81A0
// lab_8000
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8068
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_81A0
// lab_8068
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A00(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7920_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1:
        {
// switch_7920_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2:
        {
// switch_7920_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3:
        {
// switch_7920_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x4:
        {
// switch_7920_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x5:
        {
// switch_7920_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C38(var_40)
            OP_JUMP switch_7920_case_default
        }
        case 0x6:
        {
// switch_7920_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x7:
        {
// switch_7920_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x8:
        {
// switch_7920_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x9:
        {
// switch_7920_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xa:
        {
// switch_7920_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xb:
        {
// switch_7920_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xc:
        {
// switch_7920_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xd:
        {
// switch_7920_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xe:
        {
// switch_7920_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0xf:
        {
// switch_7920_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x10:
        {
// switch_7920_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x11:
        {
// switch_7920_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x12:
        {
// switch_7920_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x13:
        {
// switch_7920_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x14:
        {
// switch_7920_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x15:
        {
// switch_7920_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x16:
        {
// switch_7920_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x17:
        {
// switch_7920_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x18:
        {
// switch_7920_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x19:
        {
// switch_7920_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1a:
        {
// switch_7920_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1b:
        {
// switch_7920_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1c:
        {
// switch_7920_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1d:
        {
// switch_7920_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1e:
        {
// switch_7920_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x1f:
        {
// switch_7920_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x20:
        {
// switch_7920_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x21:
        {
// switch_7920_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x22:
        {
// switch_7920_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x23:
        {
// switch_7920_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x24:
        {
// switch_7920_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x25:
        {
// switch_7920_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x26:
        {
// switch_7920_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x27:
        {
// switch_7920_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x28:
        {
// switch_7920_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x29:
        {
// switch_7920_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2a:
        {
// switch_7920_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2b:
        {
// switch_7920_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2c:
        {
// switch_7920_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2d:
        {
// switch_7920_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2e:
        {
// switch_7920_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x2f:
        {
// switch_7920_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x30:
        {
// switch_7920_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x31:
        {
// switch_7920_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x32:
        {
// switch_7920_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x33:
        {
// switch_7920_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x34:
        {
// switch_7920_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x35:
        {
// switch_7920_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x36:
        {
// switch_7920_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x37:
        {
// switch_7920_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x38:
        {
// switch_7920_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x39:
        {
// switch_7920_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3a:
        {
// switch_7920_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3b:
        {
// switch_7920_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3c:
        {
// switch_7920_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3d:
        {
// switch_7920_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
        case 0x3e:
        {
// switch_7920_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09C0(var_24, var_16, var_8)
            OP_JUMP switch_7920_case_default
        }
    }
}
// fun_8240
fun_8240() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8340
        case default:
        {
// switch_8340_case_default
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
// switch_8340_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8340_case_default
        }
        case 0x1:
        {
// switch_8340_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8340_case_default
        }
        case 0x2:
        {
// switch_8340_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8340_case_default
        }
        case 0x3:
        {
// switch_8340_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8340_case_default
        }
    }
}
// fun_8400
fun_8400() {
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
    pri = fun_1F28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2028()
    pri = 0;
    return pri;
}
// fun_8498
fun_8498() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8240(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8400(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8540
fun_8540() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8590
// lab_8590
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30056;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8608
    OP_JUMP lab_8638
// lab_8608
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8590
// lab_8638
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_86C0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6510(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1578(var_56)
// lab_86C0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8728
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1048(var_24, var_16)
// lab_8728
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1048(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_87E8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A38(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_07B8(var_88, var_80, var_72, var_64, var_56)
// lab_87E8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8828
    pri = 0;
    return pri;
// lab_8828
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8970
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30176;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0988(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8938
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8970
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0860(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0860(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A38(var_40)
    pri = 0;
    return pri;
// lab_8938
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1048(var_16, var_8)
}
// fun_89F8
fun_89F8() {
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
    pri = fun_8498(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_20C0(var_112)
    var_128 = 0;
    pri = fun_2180()
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
    pri = fun_8540(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8B70
fun_8B70() {
    pri = 30312;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8BF8
// lab_8BF8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8D78
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8D68
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8CB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8CB8
    pri = 0;
    OP_JUMP lab_8CC0
// lab_8D78
    pri = 0;
    return pri;
// lab_8D68
    OP_JUMP lab_8BF0
// lab_8BF0
    OP_INC_P_S -936
// lab_8CB8
    pri = 1;
// lab_8CC0
    OP_JZER lab_8D38
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8D30
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8D38
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8D30
}
// fun_8D98
fun_8D98() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8DE0
    pri = arg_0;
    return pri;
// lab_8DE0
    pri = arg_1;
    return pri;
}
// fun_8DF0
fun_8DF0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8E88
    var_8 = 1;
    var_16 = 0;
    var_24 = 31232;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1550()
// lab_8E88
    pri = arg_4;
    OP_JZER lab_8EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1678(var_8)
// lab_8EC0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8F18
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8F18
    pri = 0;
    OP_JUMP lab_8F20
// lab_8F18
    pri = 1;
// lab_8F20
    OP_JZER lab_8FE8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8FE8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8FC0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1490(var_32, var_24)
    OP_JUMP lab_8FE8
// lab_8FE8
    pri = arg_2;
    OP_JZER lab_90C0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9090
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1048(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B0(var_40)
    OP_JUMP lab_90C0
// lab_90C0
    pri = arg_3;
    OP_JZER lab_90F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1518(var_8)
// lab_90F8
    pri = 0;
    return pri;
// lab_9090
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1048(var_16, var_8)
// lab_8FC0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1490(var_16, var_8)
}
// fun_9108
fun_9108() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8B70(var_24)
    pri = 0;
    return pri;
}
// fun_9170
fun_9170() {
    pri = g_mode;
    switch (pri) {
// switch_92F8
        case default:
        {
// switch_92F8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9390
// lab_9390
            pri = 0;
            return pri;
        }
        case 0xd077fb871e7dc4e0:
        {
// switch_92F8_case_0xd077fb871e7dc4e0
            var_8 = 0;
            pri = fun_12830()
            OP_JUMP lab_9390
        }
        case 0xe01a2ca3e0410cbb:
        {
// switch_92F8_case_0xe01a2ca3e0410cbb
            var_8 = 0;
            pri = fun_12758()
            OP_JUMP lab_9390
        }
        case 0xe4a0f4fb958e5dfc:
        {
// switch_92F8_case_0xe4a0f4fb958e5dfc
            var_8 = 0;
            pri = fun_12460()
            OP_JUMP lab_9390
        }
        case 0xe8ae6b5a733b86be:
        {
// switch_92F8_case_0xe8ae6b5a733b86be
            var_8 = 0;
            pri = fun_126D0()
            OP_JUMP lab_9390
        }
        case 0x0:
        {
// switch_92F8_case_0x0
            var_8 = 0;
            pri = fun_93A0()
            OP_JUMP lab_9390
        }
        case 0xd82cc17f7abdad9:
        {
// switch_92F8_case_0xd82cc17f7abdad9
            var_8 = 0;
            pri = fun_12418()
            OP_JUMP lab_9390
        }
        case 0x2cb0c61b832a044d:
        {
// switch_92F8_case_0x2cb0c61b832a044d
            var_8 = 0;
            pri = fun_12328()
            OP_JUMP lab_9390
        }
        case 0x6b7ffa319bc152da:
        {
// switch_92F8_case_0x6b7ffa319bc152da
            var_8 = 0;
            pri = fun_12598()
            OP_JUMP lab_9390
        }
    }
}
// fun_93A0
fun_93A0() {
    pri = 0;
    return pri;
}
// fun_93B8
fun_93B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8DF0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9410
fun_9410() {
    pri = 0;
    return pri;
}
// fun_9428
fun_9428() {
    pri = 0;
    return pri;
}
// fun_9440
fun_9440() {
    pri = EvCameraStart()
    OP_PUSH2_C 6513469414483989899, -8218456393840537451
    var_16 = 16;
    pri = fun_8D98(var_8, var_0)
    var_8 = pri;
    OP_PUSH2_C -8218456393840537451, 6513469414483989899
    var_32 = 16;
    pri = fun_8D98(var_24, var_16)
    var_16 = pri;
    OP_PUSH2_C 387838090113935797, 7694382768399930019
    var_48 = 16;
    pri = fun_8D98(var_40, var_32)
    var_24 = pri;
    OP_PUSH2_C 7694382768399930019, 387838090113935797
    var_64 = 16;
    pri = fun_8D98(var_56, var_48)
    var_32 = pri;
    var_72 = 1;
    var_80 = 8802641224559852288;
    var_88 = 16;
    pri = fun_0670(var_80, var_72)
    var_96 = 1;
    var_104 = -4893233655299320911;
    var_112 = 16;
    pri = fun_0670(var_104, var_96)
    var_120 = 1;
    var_128 = -1349778034395884683;
    var_136 = 16;
    pri = fun_0670(var_128, var_120)
    var_144 = 1;
    var_152 = 7473960101546429514;
    var_160 = 16;
    pri = fun_0670(var_152, var_144)
    var_168 = 1;
    var_176 = var_24;
    var_184 = 16;
    pri = fun_0670(var_176, var_168)
    var_192 = 1;
    var_200 = var_32;
    var_208 = 16;
    pri = fun_0670(var_200, var_192)
    var_216 = 1;
    var_224 = var_16;
    var_232 = 16;
    pri = fun_0670(var_224, var_216)
    var_240 = 0;
    var_248 = var_24;
    var_256 = 16;
    pri = fun_0638(var_248, var_240)
    var_264 = 0;
    var_272 = var_8;
    var_280 = 16;
    pri = fun_0638(var_272, var_264)
    var_288 = 1;
    var_296 = 1;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 9310;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 50;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 8140;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 31280;
    var_368 = 48;
    pri = fun_1238(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 8;
    var_384 = var_16;
    var_392 = 16;
    pri = fun_1088(var_384, var_376)
    var_400 = 1;
    var_408 = 1;
    OP_PUSH4_C 4640537203540230144, 4667668752467230720, 4665672039351189504, 8802641224559852288
    var_416 = 48;
    pri = fun_05E0(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 1;
    var_432 = 1;
    OP_PUSH4_C 4640537203540230144, 4667806191420702720, 4665210244467523584, -4893233655299320911
    var_440 = 48;
    pri = fun_05E0(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 1;
    OP_PUSH2_C 4640537203540230144, 4667655778230022963
    var_464 = 8060;
    pri = float(var_464)
    var_472 = pri;
    var_480 = -1349778034395884683;
    var_488 = 48;
    pri = fun_05E0(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = 1;
    var_504 = 1;
    OP_PUSH4_C 4636033603912859648, 4667751215839313920, 4665188254234968064, 7473960101546429514
    var_512 = 48;
    pri = fun_05E0(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = 1;
    var_528 = 1;
    OP_PUSH3_C 4640537203540230144, 4666723172467343360, 4665672039351189504
    var_536 = var_32;
    var_544 = 48;
    pri = fun_05E0(var_536, var_528, var_520, var_512, var_504, var_496)
    var_552 = 1;
    var_560 = 1;
    OP_PUSH3_C 4640537203540230144, 4667569796420730880, 4665345044593088922
    var_568 = var_24;
    var_576 = 48;
    pri = fun_05E0(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 1;
    var_592 = 1;
    OP_PUSH4_C 4640537203540230144, 4666789143165009920, 4665562088188411904, 1688300219790732716
    var_600 = 48;
    pri = fun_05E0(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 1;
    var_616 = 1;
    var_624 = 0;
    OP_PUSH2_C 4666343840955760640, 4665672039351189504
    var_632 = var_16;
    var_640 = 48;
    pri = fun_05E0(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 31464;
    pri = SoundPostEvent(var_648)
    var_656 = 15;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 1;
    var_680 = 0;
    var_688 = 50;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH4_C 4667118996653342720, 4665672039351189504, 4611686018427387904, 8802641224559852288
    var_720 = 72;
    pri = fun_06E8(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 15;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_752 = 31632;
    var_760 = 1;
    var_768 = 0;
    var_776 = 1;
    var_784 = -1;
    var_792 = 4667195962467287040;
    var_800 = 0;
    OP_PUSH5_C 4665750104676761600, 4667570071298637824, -4580378964142745190, 4665735261269786624, 4667724002926526464
    OP_PUSH5_C -4577627546245398528, 4665708323234906112, 4667802837910238003, -4577627546245398528, 4665504803632604774
    OP_PUSH3_C 4667806191420702720, -4577627546245398528, 4665210244467523584
    var_808 = 5;
    var_816 = 168;
    pri = fun_15A8(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_40 = pri;
    var_824 = 1;
    var_832 = 4596373779694328218;
    var_840 = -1;
    var_848 = 4611686018427387904;
    var_856 = var_40;
    var_864 = -4893233655299320911;
    var_872 = 48;
    pri = fun_0760(var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 31680;
    var_896 = 1;
    var_904 = 0;
    var_912 = 1;
    var_920 = -1;
    var_928 = 0;
    var_936 = 0;
    var_944 = 0;
    OP_PUSH5_C 4667228947816120320, -4577627546245398528, 4665584078420967424, 4667619274443980800, -4579240749705671475
    OP_PUSH5_C 4665529102839578624, 4667718230490480640, -4577627546245398528, 4665408156560523264, 4667724222828852019
    OP_PUSH2_C -4577627546245398528, 4665067637809401037
    var_952 = 4;
    var_960 = 168;
    pri = fun_15A8(var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_48 = pri;
    var_968 = 1;
    var_976 = 4596373779694328218;
    var_984 = -1;
    var_992 = 4609434218613702656;
    var_1000 = var_48;
    var_1008 = -1349778034395884683;
    var_1016 = 48;
    pri = fun_0760(var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 31728;
    var_1040 = 1;
    var_1048 = 0;
    var_1056 = 1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 4667300416071925760;
    var_1104 = 0;
    OP_PUSH5_C 4665799582700011520, 4667668202711416832, -4578218643696490906, 4665598482023291290, 4667761661199777792
    OP_PUSH5_C -4577627546245398528, 4665323604116347290, 4667751215839313920, -4577627546245398528, 4665001337258246144
    var_1112 = 4;
    var_1120 = 168;
    pri = fun_15A8(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_56 = pri;
    var_1128 = 1;
    var_1136 = 4596373779694328218;
    var_1144 = -1;
    var_1152 = 4607182418800017408;
    var_1160 = var_56;
    var_1168 = 7473960101546429514;
    var_1176 = 48;
    pri = fun_0760(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1184 = 0;
    var_1192 = 4631952216750555136;
    var_1200 = 0;
    OP_PUSH5_C 4667659549554906235, -4581039022963131679, 4665660879308167578, 4668123895305548595, 4640936546163438387
    var_1208 = 4665665288349794959;
    var_1216 = 1;
    pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 0;
    pri = fun_2568()
    var_1232 = 0;
    var_1240 = 4631093718071587635;
    var_1248 = 3;
    OP_PUSH5_C 4667403429316332093, 4640691662933700116, 4665670324113050173, 4667910304176736829, 4645540069407541166
    var_1256 = 4665663441170260296;
    var_1264 = 60;
    pri = EvCameraMove(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1272 = 31776;
    var_1280 = 8;
    var_1288 = 16;
    pri = fun_0280(var_1280, var_1272)
    var_1296 = 0;
    pri = fun_0350()
    var_1304 = 0;
    pri = fun_2568()
    var_1312 = 15;
    var_1320 = 8;
    pri = fun_0060(var_1312)
    var_1328 = 0;
    var_1336 = 4630108555653100339;
    var_1344 = 0;
    OP_PUSH5_C 4667075736368347873, 4636870288281132073, 4665455545511680410, 4666579279380616315, 4635996308478445486
    var_1352 = 4665744035372576276;
    var_1360 = 1;
    pri = EvCameraMove(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = 0;
    pri = fun_2568()
    var_1376 = 0;
    var_1384 = 4630108555653100339;
    var_1392 = 2;
    OP_PUSH5_C 4667053036950792438, 4636704921732314563, 4665469421348422943, 4666556585460619018, 4635830941929627976
    var_1400 = 4665750967793389404;
    var_1408 = 60;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 101;
    var_1448 = -1;
    OP_PUSH2_C -146825744510908305, -2295031432049355513
    var_1456 = 16;
    pri = fun_8D98(var_1448, var_1440)
    var_1464 = pri;
    var_1472 = var_32;
    var_1480 = 56;
    pri = fun_1F28(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_20C0(var_1488)
    var_1504 = 0;
    var_1512 = 4630108555653100339;
    var_1520 = 0;
    OP_PUSH5_C 4666405155221683569, 4635821793992884879, 4665482670463537644, 4666890501644416451, 4634329976616318403
    var_1528 = 4665789791548966175;
    var_1536 = 1;
    pri = EvCameraMove(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1544 = 0;
    pri = fun_2568()
    var_1552 = 0;
    var_1560 = 4630108555653100339;
    var_1568 = 2;
    OP_PUSH5_C 4666394660383196447, 4635821793992884879, 4665538107839810109, 4666880089269301412, 4634332791366085509
    var_1576 = 4665817268344544297;
    var_1584 = 240;
    pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1592 = 0;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 101;
    var_1624 = -1;
    OP_PUSH2_C -146824644999280094, -2295030332537727302
    var_1632 = 16;
    pri = fun_8D98(var_1624, var_1616)
    var_1640 = pri;
    var_1648 = var_32;
    var_1656 = 56;
    pri = fun_1F28(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_20C0(var_1664)
    var_1680 = 0;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 101;
    var_1712 = -1;
    OP_PUSH2_C -146823545487651883, -2295029233026099091
    var_1720 = 16;
    pri = fun_8D98(var_1712, var_1704)
    var_1728 = pri;
    var_1736 = var_32;
    var_1744 = 56;
    pri = fun_1F28(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1752 = 1;
    var_1760 = 8;
    pri = fun_20C0(var_1752)
    var_1768 = 0;
    pri = fun_2180()
    var_1776 = 0;
    var_1784 = 0;
    var_1792 = 0;
    var_1800 = 888;
    var_1808 = 889;
    var_1816 = 16;
    pri = fun_8D98(var_1808, var_1800)
    var_1824 = pri;
    pri = SoundPlayPokeVoice(var_1824, var_1816, var_1808, var_1800)
    var_1832 = 1;
    var_1840 = -1;
    var_1848 = -1;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 33;
    var_1880 = var_16;
    var_1888 = 56;
    pri = fun_25F8(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1896 = 0;
    var_1904 = 3;
    var_1912 = 0;
    var_1920 = 101;
    var_1928 = -1;
    OP_PUSH2_C 2878154565140252522, -3589873892451677323
    var_1936 = 16;
    pri = fun_8D98(var_1928, var_1920)
    var_1944 = pri;
    var_1952 = var_16;
    var_1960 = 56;
    pri = fun_1F28(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1968 = var_16;
    var_1976 = 8;
    pri = fun_0A38(var_1968)
    var_1984 = 1;
    var_1992 = 8;
    pri = fun_20C0(var_1984)
    var_2000 = 0;
    pri = fun_2180()
    var_2008 = 8802641224559852288;
    var_2016 = 8;
    pri = fun_0860(var_2008)
    var_2024 = -4893233655299320911;
    var_2032 = 8;
    pri = fun_0860(var_2024)
    var_2040 = -1349778034395884683;
    var_2048 = 8;
    pri = fun_0860(var_2040)
    var_2056 = 1;
    var_2064 = var_24;
    var_2072 = 16;
    pri = fun_0638(var_2064, var_2056)
    var_2080 = 1;
    var_2088 = var_16;
    var_2096 = 16;
    pri = fun_0670(var_2088, var_2080)
    var_2104 = 1;
    var_2112 = 1;
    OP_PUSH4_C 4639129828656676864, 4666789143165009920, 4665452137025634304, 1688300219790732716
    var_2120 = 48;
    pri = fun_05E0(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2128 = 1;
    var_2136 = 0;
    var_2144 = 100;
    pri = float(var_2144)
    var_2152 = pri;
    var_2160 = 160;
    pri = float(var_2160)
    var_2168 = pri;
    var_2176 = 1;
    OP_PUSH3_C 4667239942932398080, 4665345044593088922, 4611686018427387904
    var_2184 = var_24;
    var_2192 = 72;
    pri = fun_06E8(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2200 = 0;
    var_2208 = 4627814534592908493;
    var_2216 = 0;
    OP_PUSH5_C 4667315946673668096, 4632399761963525079, 4665166648831482266, 4667056395958815293, 4636957545523912376
    var_2224 = 4665896587113372058;
    var_2232 = 1;
    pri = EvCameraMove(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 7;
    var_2248 = 7;
    var_2256 = -1349778034395884683;
    var_2264 = 24;
    pri = fun_1178(var_2256, var_2248, var_2240)
    var_2272 = 6;
    var_2280 = 6;
    var_2288 = -4893233655299320911;
    var_2296 = 24;
    pri = fun_1178(var_2288, var_2280, var_2272)
    var_2304 = 1;
    var_2312 = -1;
    var_2320 = -1;
    var_2328 = 3;
    var_2336 = 0;
    var_2344 = 1;
    var_2352 = -1349778034395884683;
    var_2360 = 56;
    pri = fun_25F8(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2368 = 888;
    var_2376 = 889;
    var_2384 = 16;
    pri = fun_8D98(var_2376, var_2368)
    var_2392 = pri;
    var_2400 = 1;
    var_2408 = 16;
    pri = fun_2308(var_2400, var_2392)
    var_2416 = 0;
    var_2424 = 3;
    var_2432 = 0;
    var_2440 = 100;
    var_2448 = -1;
    OP_PUSH2_C 6098972660078486205, -1349778034395884683
    var_2456 = 56;
    pri = fun_1F28(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2464 = -1349778034395884683;
    var_2472 = 8;
    pri = fun_0A38(var_2464)
    var_2480 = 1;
    var_2488 = 8;
    pri = fun_20C0(var_2480)
    var_2496 = 0;
    pri = fun_2180()
    var_2504 = 1;
    var_2512 = 1;
    var_2520 = -1;
    var_2528 = -1;
    var_2536 = 0;
    var_2544 = 11;
    var_2552 = -4893233655299320911;
    var_2560 = 56;
    pri = fun_41D8(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2568 = 1;
    var_2576 = 1103;
    var_2584 = 1104;
    var_2592 = 16;
    pri = fun_8D98(var_2584, var_2576)
    var_2600 = pri;
    var_2608 = 1;
    var_2616 = 24;
    pri = fun_2358(var_2608, var_2600, var_2592)
    var_2624 = 0;
    var_2632 = 3;
    var_2640 = 0;
    var_2648 = 101;
    var_2656 = -1;
    OP_PUSH2_C -6455286993594700232, -4893233655299320911
    var_2664 = 56;
    pri = fun_1F28(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
    var_2672 = 1;
    var_2680 = 8;
    pri = fun_20C0(var_2672)
    var_2688 = 0;
    pri = fun_2180()
    var_2696 = 0;
    var_2704 = 4630122629401935872;
    var_2712 = 0;
    OP_PUSH5_C 4666569235341896581, 4633642473985702625, 4665371905662155489, 4666570131443873219, 4637580308909884703
    var_2720 = 4666068858595212001;
    var_2728 = 1;
    pri = EvCameraMove(var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656)
    var_2736 = 0;
    pri = fun_2568()
    var_2744 = 0;
    var_2752 = 4630122629401935872;
    var_2760 = 3;
    OP_PUSH5_C 4666525485774227374, 4633642473985702625, 4665372059593783378, 4666526376378645873, 4637580308909884703
    var_2768 = 4666068935561025946;
    var_2776 = 90;
    pri = EvCameraMove(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
    var_2784 = 1;
    var_2792 = 3;
    var_2800 = 0;
    var_2808 = 11;
    var_2816 = -4893233655299320911;
    var_2824 = 40;
    pri = fun_6510(var_2816, var_2808, var_2800, var_2792, var_2784)
    var_2832 = 1;
    var_2840 = 0;
    var_2848 = 4641240890982006784;
    var_2856 = 0;
    var_2864 = 0;
    OP_PUSH3_C 4666585733513871360, 4665672039351189504, 4607182418800017408
    var_2872 = var_32;
    var_2880 = 72;
    pri = fun_06E8(var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2888 = 0;
    var_2896 = 3;
    var_2904 = 0;
    var_2912 = 100;
    var_2920 = -1;
    OP_PUSH2_C -146831242069049360, -2295036929607496568
    var_2928 = 16;
    pri = fun_8D98(var_2920, var_2912)
    var_2936 = pri;
    var_2944 = var_32;
    var_2952 = 56;
    pri = fun_1F28(var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896)
    var_2960 = 1;
    var_2968 = 8;
    pri = fun_20C0(var_2960)
    var_2976 = 0;
    var_2984 = 3;
    var_2992 = 0;
    var_3000 = 100;
    var_3008 = -1;
    OP_PUSH2_C -146830142557421149, -2295035830095868357
    var_3016 = 16;
    pri = fun_8D98(var_3008, var_3000)
    var_3024 = pri;
    var_3032 = var_32;
    var_3040 = 56;
    pri = fun_1F28(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3048 = 1;
    var_3056 = 8;
    pri = fun_20C0(var_3048)
    var_3064 = 0;
    pri = fun_2180()
    var_3072 = var_32;
    var_3080 = 8;
    pri = fun_0860(var_3072)
    var_3088 = 0;
    var_3096 = 4630122629401935872;
    var_3104 = 0;
    OP_PUSH5_C 4666233460983448207, 4633308926138300498, 4665496425354001121, 4666726773367924326, 4636434705754672333
    var_3112 = 4665772980016177480;
    var_3120 = 1;
    pri = EvCameraMove(var_3120, var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
    var_3128 = 0;
    pri = fun_2568()
    var_3136 = 0;
    var_3144 = 4630122629401935872;
    var_3152 = 3;
    OP_PUSH5_C 4666258727760654500, 4633128782153205678, 4665512819072371261, 4666752034647572480, 4636344633762124923
    var_3160 = 4665781182372920689;
    var_3168 = 30;
    pri = EvCameraMove(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3176 = 1;
    var_3184 = -1;
    var_3192 = -1;
    var_3200 = 3;
    var_3208 = 0;
    var_3216 = 34;
    var_3224 = var_16;
    var_3232 = 56;
    pri = fun_25F8(var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176)
    var_3240 = 0;
    var_3248 = 0;
    var_3256 = 0;
    var_3264 = 888;
    var_3272 = 889;
    var_3280 = 16;
    pri = fun_8D98(var_3272, var_3264)
    var_3288 = pri;
    pri = SoundPlayPokeVoice(var_3288, var_3280, var_3272, var_3264)
    var_3296 = 0;
    var_3304 = 3;
    var_3312 = 2;
    var_3320 = 101;
    var_3328 = -1;
    OP_PUSH2_C 2878153465628624311, -3589877190986561956
    var_3336 = 16;
    pri = fun_8D98(var_3328, var_3320)
    var_3344 = pri;
    var_3352 = var_16;
    var_3360 = 56;
    pri = fun_1F28(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3368 = 20;
    var_3376 = 8;
    pri = fun_0060(var_3368)
    var_3384 = 3;
    var_3392 = 4;
    var_3400 = var_32;
    var_3408 = 24;
    pri = fun_1178(var_3400, var_3392, var_3384)
    var_3416 = 1;
    var_3424 = 1;
    var_3432 = -1;
    var_3440 = -1;
    var_3448 = 0;
    var_3456 = 8;
    var_3464 = var_32;
    var_3472 = 56;
    pri = fun_41D8(var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416)
    var_3480 = 7;
    var_3488 = 7;
    var_3496 = 1688300219790732716;
    var_3504 = 24;
    pri = fun_1178(var_3496, var_3488, var_3480)
    var_3512 = 0;
    pri = fun_2028()
    var_3520 = var_16;
    var_3528 = 8;
    pri = fun_0A38(var_3520)
    var_3536 = 1;
    var_3544 = 8;
    pri = fun_20C0(var_3536)
    var_3552 = 0;
    pri = fun_2180()
    var_3560 = 0;
    var_3568 = 4627561207113868902;
    var_3576 = 0;
    OP_PUSH5_C 4666897730933369078, -4582587487178761175, 4665462505420284232, 4666505936457485517, 4638716764128353976
    var_3584 = 4665742930363390362;
    var_3592 = 1;
    pri = EvCameraMove(var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520)
    var_3600 = 0;
    pri = fun_2568()
    var_3608 = 0;
    var_3616 = 4627561207113868902;
    var_3624 = 2;
    OP_PUSH5_C 4666898984376624742, -4582794723130364396, 4665461559840284344, 4666526085008064512, 4638070779056803021
    var_3632 = 4665735365723391263;
    var_3640 = 15;
    pri = EvCameraMove(var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568)
    var_3648 = 1;
    var_3656 = 1;
    var_3664 = -1;
    var_3672 = -1;
    var_3680 = 0;
    var_3688 = 12;
    var_3696 = 1688300219790732716;
    var_3704 = 56;
    pri = fun_41D8(var_3696, var_3688, var_3680, var_3672, var_3664, var_3656, var_3648)
    var_3712 = 0;
    var_3720 = 3;
    var_3728 = 0;
    var_3736 = 101;
    var_3744 = -1;
    OP_PUSH2_C -146829043045792938, -2295034730584240146
    var_3752 = 16;
    pri = fun_8D98(var_3744, var_3736)
    var_3760 = pri;
    var_3768 = var_32;
    var_3776 = 56;
    pri = fun_1F28(var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3784 = 1;
    var_3792 = 8;
    pri = fun_20C0(var_3784)
    var_3800 = 0;
    pri = fun_2180()
    var_3808 = 0;
    var_3816 = 4625084227318815130;
    var_3824 = 0;
    OP_PUSH5_C 4666923712393133425, 4630677135106055864, 4665408728306569708, 4667435710977723597, 4640936898007159276
    var_3832 = 4665375753952852705;
    var_3840 = 1;
    pri = EvCameraMove(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3848 = 0;
    pri = fun_2568()
    var_3856 = 0;
    var_3864 = 4625084227318815130;
    var_3872 = 2;
    OP_PUSH5_C 4666961678529640530, 4632267468724471071, 4665406287390756045, 4667473677114230702, 4641334481411763077
    var_3880 = 4665373313037039043;
    var_3888 = 30;
    pri = EvCameraMove(var_3888, var_3880, var_3872, var_3864, var_3856, var_3848, var_3840, var_3832, var_3824, var_3816)
    var_3896 = 0;
    var_3904 = 3;
    var_3912 = 0;
    var_3920 = 101;
    var_3928 = -1;
    OP_PUSH2_C -2295033631072611935, -146827943534164727
    var_3936 = 16;
    pri = fun_8D98(var_3928, var_3920)
    var_3944 = pri;
    var_3952 = var_24;
    var_3960 = 56;
    pri = fun_1F28(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3968 = 1;
    var_3976 = 8;
    pri = fun_20C0(var_3968)
    var_3984 = 0;
    pri = fun_2180()
    var_3992 = 0;
    var_4000 = 4630122629401935872;
    var_4008 = 0;
    OP_PUSH5_C 4666239145458563809, 4634635376966049464, 4665390916218199736, 4666711066844321546, 4631341416051093012
    var_4016 = 4665775800263502725;
    var_4024 = 1;
    pri = EvCameraMove(var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976, var_3968, var_3960, var_3952)
    var_4032 = 0;
    pri = fun_2568()
    var_4040 = 0;
    var_4048 = 4630122629401935872;
    var_4056 = 2;
    OP_PUSH5_C 4666246264796353659, 4634635376966049464, 4665359789044017398, 4666718246655250924, 4631354082425044992
    var_4064 = 4665760110232574362;
    var_4072 = 240;
    pri = EvCameraMove(var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4080 = 0;
    var_4088 = 3;
    var_4096 = 0;
    var_4104 = 100;
    var_4112 = -1;
    OP_PUSH2_C -146818047929510828, -2295041327654009412
    var_4120 = 16;
    pri = fun_8D98(var_4112, var_4104)
    var_4128 = pri;
    var_4136 = var_32;
    var_4144 = 56;
    pri = fun_1F28(var_4136, var_4128, var_4120, var_4112, var_4104, var_4096, var_4088)
    var_4152 = 1;
    var_4160 = 8;
    pri = fun_20C0(var_4152)
    var_4168 = 0;
    pri = fun_2180()
    var_4176 = 0;
    var_4184 = 3;
    var_4192 = 0;
    var_4200 = 100;
    var_4208 = -1;
    OP_PUSH2_C 2878152366116996100, -3589876091474933745
    var_4216 = 16;
    pri = fun_8D98(var_4208, var_4200)
    var_4224 = pri;
    var_4232 = var_16;
    var_4240 = 56;
    pri = fun_1F28(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4248 = 1;
    var_4256 = 8;
    pri = fun_20C0(var_4248)
    var_4264 = 0;
    pri = fun_2180()
    var_4272 = 7473960101546429514;
    var_4280 = 8;
    pri = fun_0860(var_4272)
    var_4288 = 1;
    var_4296 = 1;
    OP_PUSH4_C -4582834833314545664, 4667234445374259200, 4665788587583733760, 7473960101546429514
    var_4304 = 48;
    pri = fun_05E0(var_4296, var_4288, var_4280, var_4272, var_4264, var_4256)
    var_4312 = 0;
    var_4320 = 4628968581997422182;
    var_4328 = 0;
    OP_PUSH5_C 4666908484157088727, 4632299838346792796, 4665687498484676035, 4667449878185047491, 4632491241330956042
    var_4336 = 4665731467954670797;
    var_4344 = 1;
    pri = EvCameraMove(var_4344, var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4352 = 0;
    pri = fun_2568()
    var_4360 = 0;
    var_4368 = 4628968581997422182;
    var_4376 = 2;
    OP_PUSH5_C 4666907961889065533, 4632299838346792796, 4665711940628161495, 4667449355917024297, 4632491241330956042
    var_4384 = 4665743689026413527;
    var_4392 = 240;
    pri = EvCameraMove(var_4392, var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336, var_4328, var_4320)
    var_4400 = 0;
    var_4408 = 3;
    var_4416 = 0;
    var_4424 = 100;
    var_4432 = -1;
    OP_PUSH2_C 6098969361543601572, -1349778034395884683
    var_4440 = 56;
    pri = fun_1F28(var_4432, var_4424, var_4416, var_4408, var_4400, var_4392, var_4384)
    var_4448 = 1;
    var_4456 = 8;
    pri = fun_20C0(var_4448)
    var_4464 = 0;
    pri = fun_2180()
    var_4472 = 1;
    var_4480 = 1;
    var_4488 = -1;
    var_4496 = -1;
    var_4504 = 0;
    var_4512 = 2;
    var_4520 = -4893233655299320911;
    var_4528 = 56;
    pri = fun_41D8(var_4520, var_4512, var_4504, var_4496, var_4488, var_4480, var_4472)
    var_4536 = 15;
    var_4544 = 8;
    pri = fun_0060(var_4536)
    var_4552 = 888;
    var_4560 = 889;
    var_4568 = 16;
    pri = fun_8D98(var_4560, var_4552)
    var_4576 = pri;
    var_4584 = 1;
    var_4592 = 16;
    pri = fun_2308(var_4584, var_4576)
    var_4600 = 0;
    var_4608 = 3;
    var_4616 = 0;
    var_4624 = 101;
    var_4632 = -1;
    OP_PUSH2_C -6455283695059815599, -4893233655299320911
    var_4640 = 56;
    pri = fun_1F28(var_4632, var_4624, var_4616, var_4608, var_4600, var_4592, var_4584)
    var_4648 = 1;
    var_4656 = 8;
    pri = fun_20C0(var_4648)
    var_4664 = 0;
    pri = fun_2180()
    var_4672 = 1;
    var_4680 = 3;
    var_4688 = 0;
    var_4696 = 2;
    var_4704 = -4893233655299320911;
    var_4712 = 40;
    pri = fun_6510(var_4704, var_4696, var_4688, var_4680, var_4672)
    var_4720 = 1;
    var_4728 = -1;
    var_4736 = -1;
    var_4744 = 3;
    var_4752 = 0;
    var_4760 = 1;
    var_4768 = 7473960101546429514;
    var_4776 = 56;
    pri = fun_25F8(var_4768, var_4760, var_4752, var_4744, var_4736, var_4728, var_4720)
    var_4784 = 0;
    var_4792 = 3;
    var_4800 = 0;
    var_4808 = 100;
    var_4816 = -1;
    OP_PUSH2_C -2362363187136655647, 7473960101546429514
    var_4824 = 56;
    pri = fun_1F28(var_4816, var_4808, var_4800, var_4792, var_4784, var_4776, var_4768)
    var_4832 = 7473960101546429514;
    var_4840 = 8;
    pri = fun_0A38(var_4832)
    var_4848 = 1;
    var_4856 = 8;
    pri = fun_20C0(var_4848)
    var_4864 = 0;
    pri = fun_2180()
    var_4872 = 0;
    var_4880 = 4628968581997422182;
    var_4888 = 0;
    OP_PUSH5_C 4667171366392173691, 4634887297070205501, 4665683320340490486, 4666928401810225889, 4634964702688800932
    var_4896 = 4665713117105603215;
    var_4904 = 1;
    pri = EvCameraMove(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848, var_4840, var_4832)
    var_4912 = 0;
    pri = fun_2568()
    var_4920 = 0;
    var_4928 = 4628968581997422182;
    var_4936 = 2;
    OP_PUSH5_C 4667171795201708524, 4634887297070205501, 4665697240157698130, 4666928830619760722, 4634964702688800932
    var_4944 = 4665727036922810860;
    var_4952 = 120;
    pri = EvCameraMove(var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896, var_4888, var_4880)
    var_4960 = 1;
    var_4968 = 1;
    var_4976 = 15;
    OP_PUSH2_C 8802641224559852288, -4893233655299320911
    var_4984 = 40;
    pri = fun_0F90(var_4976, var_4968, var_4960, var_4952, var_4944)
    var_4992 = 0;
    var_5000 = 3;
    var_5008 = 0;
    var_5016 = 100;
    var_5024 = -1;
    OP_PUSH2_C -6455284794571443810, -4893233655299320911
    var_5032 = 56;
    pri = fun_1F28(var_5024, var_5016, var_5008, var_5000, var_4992, var_4984, var_4976)
    var_5040 = 1;
    var_5048 = 8;
    pri = fun_20C0(var_5040)
    var_5056 = 0;
    var_5064 = 3;
    var_5072 = 0;
    var_5080 = 100;
    var_5088 = -1;
    OP_PUSH2_C -6455281496036559177, -4893233655299320911
    var_5096 = 56;
    pri = fun_1F28(var_5088, var_5080, var_5072, var_5064, var_5056, var_5048, var_5040)
    var_5104 = 1;
    var_5112 = 8;
    pri = fun_20C0(var_5104)
    var_5120 = 0;
    pri = fun_2180()
    var_5128 = 1;
    var_5136 = 1;
    var_5144 = -1;
    var_5152 = -1;
    var_5160 = 0;
    var_5168 = 12;
    var_5176 = -1349778034395884683;
    var_5184 = 56;
    pri = fun_41D8(var_5176, var_5168, var_5160, var_5152, var_5144, var_5136, var_5128)
    var_5192 = 0;
    var_5200 = 3;
    var_5208 = 0;
    var_5216 = 101;
    var_5224 = -1;
    OP_PUSH2_C 6098970461055229783, -1349778034395884683
    var_5232 = 56;
    pri = fun_1F28(var_5224, var_5216, var_5208, var_5200, var_5192, var_5184, var_5176)
    var_5240 = 1;
    var_5248 = 8;
    pri = fun_20C0(var_5240)
    var_5256 = 0;
    pri = fun_2180()
    var_5264 = 0;
    var_5272 = var_32;
    var_5280 = 16;
    pri = fun_0638(var_5272, var_5264)
    OP_PUSH2_C 4625196817309499392, 4629911523169402880
    var_5288 = 0;
    OP_PUSH5_C 4666235797445657231, 4637550050349888307, 4665676690285374996, 4666754871387572142, 4637008211019720294
    var_5296 = 4665665816115376292;
    var_5304 = 1;
    pri = EvCameraMove(var_5304, var_5296, var_5288, var_5280, var_5272, var_5264, var_5256, var_5248, var_5240, var_5232)
    var_5312 = 0;
    pri = fun_2568()
    OP_PUSH2_C -4609659398595071181, 4629911523169402880
    var_5320 = 2;
    OP_PUSH5_C 4666122459787066081, 4637668973527548559, 4665679065230490993, 4666641533728980992, 4637126430509938770
    var_5328 = 4665668191060492288;
    var_5336 = 30;
    pri = EvCameraMove(var_5336, var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5344 = 1;
    var_5352 = -1;
    var_5360 = -1;
    var_5368 = 3;
    var_5376 = 0;
    var_5384 = 34;
    var_5392 = var_16;
    var_5400 = 56;
    pri = fun_25F8(var_5392, var_5384, var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5408 = 0;
    var_5416 = 0;
    var_5424 = 0;
    var_5432 = 888;
    var_5440 = 889;
    var_5448 = 16;
    pri = fun_8D98(var_5440, var_5432)
    var_5456 = pri;
    pri = SoundPlayPokeVoice(var_5456, var_5448, var_5440, var_5432)
    var_5464 = 0;
    var_5472 = 3;
    var_5480 = 2;
    var_5488 = 101;
    var_5496 = -1;
    OP_PUSH2_C 2878151266605367889, -3589879390009818378
    var_5504 = 16;
    pri = fun_8D98(var_5496, var_5488)
    var_5512 = pri;
    var_5520 = var_16;
    var_5528 = 56;
    pri = fun_1F28(var_5520, var_5512, var_5504, var_5496, var_5488, var_5480, var_5472)
    var_5536 = 0;
    pri = fun_2028()
    var_5544 = var_16;
    var_5552 = 8;
    pri = fun_0A38(var_5544)
    var_5560 = 0;
    pri = fun_2180()
    var_5568 = 15;
    var_5576 = 8;
    pri = fun_0060(var_5568)
    var_5584 = 31824;
    pri = SoundPostEvent(var_5584)
    var_5592 = 0;
    var_5600 = -1;
    OP_PUSH2_C 6566578068343895906, 6566563774692729163
    var_5608 = 16;
    pri = fun_8D98(var_5600, var_5592)
    var_5616 = pri;
    var_5624 = 24;
    pri = fun_23A8(var_5616, var_5608, var_5600)
    var_5632 = 0;
    pri = fun_2468()
    OP_JZER lab_C4F0
    var_5640 = 0;
    pri = fun_2518()
// lab_C4F0
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0670(var_16, var_8)
    var_32 = 1;
    var_40 = -4893233655299320911;
    var_48 = 16;
    pri = fun_0670(var_40, var_32)
    var_56 = 1;
    var_64 = -1349778034395884683;
    var_72 = 16;
    pri = fun_0670(var_64, var_56)
    var_80 = 1;
    var_88 = 7473960101546429514;
    var_96 = 16;
    pri = fun_0670(var_88, var_80)
    var_104 = 1;
    var_112 = var_32;
    var_120 = 16;
    pri = fun_0670(var_112, var_104)
    var_128 = 1;
    var_136 = var_16;
    var_144 = 16;
    pri = fun_0670(var_136, var_128)
    var_152 = 1;
    var_160 = var_24;
    var_168 = 16;
    pri = fun_0670(var_160, var_152)
    var_176 = 1;
    var_184 = var_8;
    var_192 = 16;
    pri = fun_0670(var_184, var_176)
    var_200 = 1;
    var_208 = var_32;
    var_216 = 16;
    pri = fun_0638(var_208, var_200)
    var_224 = 0;
    var_232 = var_8;
    var_240 = 16;
    pri = fun_0638(var_232, var_224)
    var_248 = 1;
    var_256 = 1;
    var_264 = 180;
    pri = float(var_264)
    var_272 = pri;
    OP_PUSH3_C 4666288865374371840, 4665672039351189504, 8802641224559852288
    var_280 = 48;
    pri = fun_05E0(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 1;
    var_296 = 1;
    OP_PUSH4_C -4583362598895878144, 4666684689560371200, 4665887543630233600, -4893233655299320911
    var_304 = 48;
    pri = fun_05E0(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 1;
    var_320 = 1;
    OP_PUSH4_C -4583362598895878144, 4666783645606871040, 4665865553397678080, -1349778034395884683
    var_328 = 48;
    pri = fun_05E0(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 1;
    var_344 = 1;
    OP_PUSH4_C -4583186677035433984, 4666844118746398720, 4665970007002316800, 7473960101546429514
    var_352 = 48;
    pri = fun_05E0(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = 1;
    var_368 = 1;
    OP_PUSH3_C 4639833516098453504, 4666453792118538240, 4665287210281467904
    var_376 = var_32;
    var_384 = 48;
    pri = fun_05E0(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 1;
    var_400 = 1;
    OP_PUSH3_C 4640185359819341824, 4666679192002232320, 4665345044593088922
    var_408 = var_24;
    var_416 = 48;
    pri = fun_05E0(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 1;
    var_432 = 1;
    OP_PUSH4_C 4639833516098453504, 4666558245723176960, 4665210244467523584, 1688300219790732716
    var_440 = 48;
    pri = fun_05E0(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 1;
    var_464 = 0;
    OP_PUSH2_C 4665766597351178240, 4665672039351189504
    var_472 = var_16;
    var_480 = 48;
    pri = fun_05E0(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 1;
    var_496 = 1;
    OP_PUSH3_C -4583186677035433984, 4666313274532508467, 4665804310600010957
    var_504 = var_8;
    var_512 = 48;
    pri = fun_05E0(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = -1;
    var_528 = -4893233655299320911;
    var_536 = 16;
    pri = fun_1048(var_528, var_520)
    var_544 = 1;
    var_552 = 3;
    var_560 = 0;
    var_568 = 12;
    var_576 = -1349778034395884683;
    var_584 = 40;
    pri = fun_6510(var_576, var_568, var_560, var_552, var_544)
    OP_PUSH2_C -8973315221164296937, -4706292389713189629
    var_592 = 16;
    pri = fun_8D98(var_584, var_576)
    var_600 = pri;
    var_608 = 8;
    pri = fun_0408(var_600)
    var_616 = 0;
    pri = fun_0438()
    var_624 = 7;
    var_632 = 7;
    var_640 = -1349778034395884683;
    var_648 = 24;
    pri = fun_1178(var_640, var_632, var_624)
    var_656 = 6;
    var_664 = 6;
    var_672 = -4893233655299320911;
    var_680 = 24;
    pri = fun_1178(var_672, var_664, var_656)
    var_688 = 3;
    var_696 = 4;
    var_704 = var_32;
    var_712 = 24;
    pri = fun_1178(var_704, var_696, var_688)
    var_720 = 1;
    var_728 = 1;
    var_736 = -1;
    var_744 = -1;
    var_752 = 0;
    var_760 = 8;
    var_768 = var_32;
    var_776 = 56;
    pri = fun_41D8(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 7;
    var_792 = 7;
    var_800 = 1688300219790732716;
    var_808 = 24;
    pri = fun_1178(var_800, var_792, var_784)
    var_816 = 1;
    var_824 = 1;
    var_832 = -1;
    var_840 = -1;
    var_848 = 0;
    var_856 = 12;
    var_864 = 1688300219790732716;
    var_872 = 56;
    pri = fun_41D8(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 15;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = 0;
    OP_PUSH2_C -8973315221164296937, -4706292389713189629
    var_904 = 16;
    pri = fun_8D98(var_896, var_888)
    var_912 = pri;
    var_920 = 16;
    pri = fun_0638(var_912, var_904)
    var_928 = 0;
    var_936 = 4629911523169402880;
    var_944 = 0;
    OP_PUSH5_C 4665895756982093087, 4636423446755603907, 4665691159858396529, 4666096159468929679, 4639445080630592799
    var_952 = 4665777542989432750;
    var_960 = 1;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    pri = fun_2568()
    var_976 = 0;
    var_984 = 4629911523169402880;
    var_992 = 3;
    OP_PUSH5_C 4665948566525575168, 4637413534986183639, 4665726663088857416, 4666148963514853622, 4639940476589603553
    var_1000 = 4665795289107105055;
    var_1008 = 240;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 31776;
    var_1024 = 8;
    var_1032 = 16;
    pri = fun_0280(var_1024, var_1016)
    var_1040 = 0;
    pri = fun_0350()
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    OP_PUSH2_C 2878150167093739678, -3589878290498190167
    var_1088 = 16;
    pri = fun_8D98(var_1080, var_1072)
    var_1096 = pri;
    var_1104 = var_16;
    var_1112 = 56;
    pri = fun_1F28(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_20C0(var_1120)
    var_1136 = 0;
    pri = fun_2180()
    var_1144 = 0;
    var_1152 = 4628574517030027264;
    var_1160 = 0;
    OP_PUSH5_C 4665859275186283479, 4637838562201016730, 4665763766108736717, 4665568971131201782, 4640005215834247004
    var_1168 = 4665789131841989509;
    var_1176 = 1;
    pri = EvCameraMove(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1184 = 0;
    pri = fun_2568()
    var_1192 = 0;
    var_1200 = 4628574517030027264;
    var_1208 = 3;
    OP_PUSH5_C 4665859280683841618, 4637838562201016730, 4665763001948155412, 4665565936479109120, 4640002752928200786
    var_1216 = 4665761281212457943;
    var_1224 = 240;
    pri = EvCameraMove(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1232 = 1;
    var_1240 = 0;
    var_1248 = 75;
    pri = float(var_1248)
    var_1256 = pri;
    var_1264 = 0;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 0;
    OP_PUSH4_C 4666459289676677120, 4665843563165122560, 4611686018427387904, -4893233655299320911
    var_1288 = 72;
    pri = fun_06E8(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1296 = 888;
    var_1304 = 889;
    var_1312 = 16;
    pri = fun_8D98(var_1304, var_1296)
    var_1320 = pri;
    var_1328 = 1;
    var_1336 = 16;
    pri = fun_2308(var_1328, var_1320)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C -6455282595548187388, -4893233655299320911
    var_1384 = 56;
    pri = fun_1F28(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_20C0(var_1392)
    var_1408 = 0;
    pri = fun_2180()
    var_1416 = -4893233655299320911;
    var_1424 = 8;
    pri = fun_0860(var_1416)
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = 11;
    pri = float(var_1456)
    var_1464 = pri;
    var_1472 = var_16;
    var_1480 = 40;
    pri = fun_07B8(var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1488 = var_16;
    var_1496 = 8;
    pri = fun_0860(var_1488)
    var_1504 = 0;
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 888;
    var_1536 = 889;
    var_1544 = 16;
    pri = fun_8D98(var_1536, var_1528)
    var_1552 = pri;
    pri = SoundPlayPokeVoice(var_1552, var_1544, var_1536, var_1528)
    var_1560 = 1;
    var_1568 = -1;
    var_1576 = -1;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 33;
    var_1608 = var_16;
    var_1616 = 56;
    pri = fun_25F8(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1624 = var_16;
    var_1632 = 8;
    pri = fun_0A38(var_1624)
    var_1640 = 1;
    var_1648 = 0;
    var_1656 = 4641240890982006784;
    var_1664 = 0;
    var_1672 = 0;
    OP_PUSH3_C 4666062311003468595, 4665761099793039360, 4607182418800017408
    var_1680 = var_16;
    var_1688 = 72;
    pri = fun_06E8(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1696 = 30;
    var_1704 = 8;
    pri = fun_0060(var_1696)
    var_1712 = 0;
    var_1720 = var_16;
    var_1728 = 16;
    pri = fun_0638(var_1720, var_1712)
    var_1736 = 1;
    var_1744 = 1;
    OP_PUSH4_C -4583186677035433984, 4666778148048732160, 4665931524095344640, 7473960101546429514
    var_1752 = 48;
    pri = fun_05E0(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1760 = 4;
    var_1768 = 4;
    var_1776 = -4893233655299320911;
    var_1784 = 24;
    pri = fun_1178(var_1776, var_1768, var_1760)
    var_1792 = 6;
    var_1800 = 6;
    var_1808 = 7473960101546429514;
    var_1816 = 24;
    pri = fun_1178(var_1808, var_1800, var_1792)
    var_1824 = 0;
    var_1832 = 4628855992006737920;
    var_1840 = 0;
    OP_PUSH5_C 4666843547000352276, 4635966049918449091, 4665830753854658970, 4666682276132348232, 4639157272466906153
    var_1848 = 4665966955857549722;
    var_1856 = 1;
    pri = EvCameraMove(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1864 = 0;
    pri = fun_2568()
    var_1872 = 0;
    var_1880 = 4628855992006737920;
    var_1888 = 2;
    OP_PUSH5_C 4666852964317444178, 4635966049918449091, 4665841908400122757, 4666691693449440133, 4639157272466906153
    var_1896 = 4665978110403013509;
    var_1904 = 15;
    pri = EvCameraMove(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1912 = 1;
    var_1920 = 1;
    var_1928 = -1;
    var_1936 = -1;
    var_1944 = 0;
    var_1952 = 10;
    var_1960 = -1349778034395884683;
    var_1968 = 56;
    pri = fun_41D8(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 0;
    var_1984 = 3;
    var_1992 = 2;
    var_2000 = 101;
    var_2008 = 2;
    OP_PUSH2_C 6098967162520345150, -1349778034395884683
    var_2016 = 56;
    pri = fun_1F28(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2024 = 60;
    var_2032 = 8;
    pri = fun_0060(var_2024)
    var_2040 = 0;
    pri = fun_2028()
    var_2048 = 0;
    pri = fun_2180()
    var_2056 = 0;
    var_2064 = 4626716782183736934;
    var_2072 = 0;
    OP_PUSH5_C 4666524727111204209, 4638266404165616927, 4665824261238496952, 4666320921635879649, 4636111009531455078
    var_2080 = 4665883783300466606;
    var_2088 = 1;
    pri = EvCameraMove(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2096 = 0;
    pri = fun_2568()
    OP_PUSH2_C -4601215149293751501, 4626716782183736934
    var_2104 = 2;
    OP_PUSH5_C 4666568372225268777, 4639136865531094630, 4665811341976870584, 4666364561252386079, 4637410720236416532
    var_2112 = 4665870864038840238;
    var_2120 = 15;
    pri = EvCameraMove(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2128 = 20;
    var_2136 = 8;
    pri = fun_0060(var_2128)
    var_2144 = 1;
    var_2152 = 0;
    var_2160 = 31992;
    var_2168 = 8;
    var_2176 = 32;
    pri = fun_02E0(var_2168, var_2160, var_2152, var_2144)
    var_2184 = 0;
    pri = fun_0350()
    var_2192 = 32040;
    pri = SoundPostEvent(var_2192)
    var_2200 = var_16;
    var_2208 = 8;
    pri = fun_0860(var_2200)
    var_2216 = 1;
    var_2224 = var_8;
    var_2232 = 16;
    pri = fun_0638(var_2224, var_2216)
    var_2240 = 1;
    var_2248 = var_16;
    var_2256 = 16;
    pri = fun_0638(var_2248, var_2240)
    var_2264 = 1;
    var_2272 = 1;
    OP_PUSH4_C 4632261839224936858, 4666286996204604621, 4665556260776784691, 8802641224559852288
    var_2280 = 48;
    pri = fun_05E0(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
    var_2288 = 1;
    var_2296 = 1;
    OP_PUSH4_C 4638144666238189568, 4666481279909232640, 4665034322607079424, 1688300219790732716
    var_2304 = 48;
    pri = fun_05E0(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2312 = 1;
    var_2320 = 1;
    OP_PUSH3_C 4638777984935788544, 4666453792118538240, 4665287210281467904
    var_2328 = var_32;
    var_2336 = 48;
    pri = fun_05E0(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2344 = 7473960101546429514;
    var_2352 = 8;
    pri = fun_11E0(var_2344)
    var_2360 = 10;
    var_2368 = 8;
    pri = fun_0060(var_2360)
    var_2376 = 0;
    var_2384 = 4629883375671731814;
    var_2392 = 0;
    OP_PUSH5_C 4666456722317026263, 4634291273807020687, 4665774739234781921, 4666407656610636759, 4639014423916225495
    var_2400 = 4665977846520222843;
    var_2408 = 1;
    pri = EvCameraMove(var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2416 = 0;
    pri = fun_2568()
    var_2424 = 0;
    var_2432 = 4629883375671731814;
    var_2440 = 2;
    OP_PUSH5_C 4666441263183539732, 4634291273807020687, 4665770995397689344, 4666392197477150228, 4639014423916225495
    var_2448 = 4665974108180688404;
    var_2456 = 90;
    pri = EvCameraMove(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2464 = 31776;
    var_2472 = 8;
    var_2480 = 16;
    pri = fun_0280(var_2472, var_2464)
    var_2488 = 0;
    pri = fun_0350()
    var_2496 = 4;
    var_2504 = 4;
    var_2512 = var_24;
    var_2520 = 24;
    pri = fun_1178(var_2512, var_2504, var_2496)
    var_2528 = 1;
    var_2536 = 1;
    var_2544 = -1;
    var_2552 = -1;
    var_2560 = 0;
    var_2568 = 12;
    var_2576 = var_24;
    var_2584 = 56;
    pri = fun_41D8(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2592 = 0;
    pri = fun_2568()
    var_2600 = 0;
    var_2608 = 4629883375671731814;
    var_2616 = 3;
    OP_PUSH5_C 4666392532828196700, 4635016775559492403, 4665851974429075046, 4666544523818062316, 4636144082841218580
    var_2624 = 4666000392006150390;
    var_2632 = 120;
    pri = EvCameraMove(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 60;
    var_2648 = 8;
    pri = fun_0060(var_2640)
    var_2656 = 8802641224559852288;
    var_2664 = 8;
    pri = fun_0860(var_2656)
    var_2672 = 0;
    var_2680 = 0;
    var_2688 = 0;
    var_2696 = 105;
    pri = float(var_2696)
    var_2704 = pri;
    var_2712 = 8802641224559852288;
    var_2720 = 40;
    pri = fun_07B8(var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2728 = 0;
    pri = fun_2568()
    var_2736 = 0;
    var_2744 = 4629883375671731814;
    var_2752 = 0;
    OP_PUSH5_C 4666304681849137398, 4638476103023266365, 4665826614193380393, 4666102795021603308, 4641636363324285256
    var_2760 = 4665873310452212040;
    var_2768 = 1;
    pri = EvCameraMove(var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2776 = 0;
    pri = fun_2568()
    var_2784 = 0;
    var_2792 = 4629883375671731814;
    var_2800 = 3;
    OP_PUSH5_C 4666300212334370488, 4638476103023266365, 4665807295774080369, 4666098309014161981, 4641633900418239037
    var_2808 = 4665853964545121321;
    var_2816 = 120;
    pri = EvCameraMove(var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2824 = 0;
    var_2832 = 0;
    var_2840 = 0;
    var_2848 = 889;
    var_2856 = 888;
    var_2864 = 16;
    pri = fun_8D98(var_2856, var_2848)
    var_2872 = pri;
    pri = SoundPlayPokeVoice(var_2872, var_2864, var_2856, var_2848)
    var_2880 = 1;
    var_2888 = -1;
    var_2896 = -1;
    var_2904 = 3;
    var_2912 = 0;
    var_2920 = 30;
    var_2928 = var_8;
    var_2936 = 56;
    pri = fun_25F8(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2944 = 0;
    var_2952 = 3;
    var_2960 = 0;
    var_2968 = 100;
    var_2976 = -1;
    OP_PUSH2_C -3589881589033074800, 2878149067582111467
    var_2984 = 16;
    pri = fun_8D98(var_2976, var_2968)
    var_2992 = pri;
    var_3000 = var_8;
    var_3008 = 56;
    pri = fun_1F28(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3016 = var_8;
    var_3024 = 8;
    pri = fun_0A38(var_3016)
    var_3032 = 1;
    var_3040 = 8;
    pri = fun_20C0(var_3032)
    var_3048 = 0;
    pri = fun_2180()
    var_3056 = -1349778034395884683;
    var_3064 = 8;
    pri = fun_11E0(var_3056)
    var_3072 = 1;
    var_3080 = 3;
    var_3088 = 0;
    var_3096 = 10;
    var_3104 = -1349778034395884683;
    var_3112 = 40;
    pri = fun_6510(var_3104, var_3096, var_3088, var_3080, var_3072)
    var_3120 = 889;
    var_3128 = 888;
    var_3136 = 16;
    pri = fun_8D98(var_3128, var_3120)
    var_3144 = pri;
    var_3152 = 1;
    var_3160 = 16;
    pri = fun_2308(var_3152, var_3144)
    var_3168 = 0;
    var_3176 = 3;
    var_3184 = 0;
    var_3192 = 100;
    var_3200 = -1;
    OP_PUSH2_C -6455279297013302755, -4893233655299320911
    var_3208 = 56;
    pri = fun_1F28(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3216 = 1;
    var_3224 = 8;
    pri = fun_20C0(var_3216)
    var_3232 = 0;
    pri = fun_2180()
    var_3240 = 0;
    var_3248 = 4629883375671731814;
    var_3256 = 0;
    OP_PUSH5_C 4666196396446475878, 4638742800563699712, 4665747267936761938, 4666305841833904701, 4640852455514146079
    var_3264 = 4665926411366275482;
    var_3272 = 1;
    pri = EvCameraMove(var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216, var_3208, var_3200)
    var_3280 = 0;
    pri = fun_2568()
    var_3288 = 0;
    var_3296 = 4629883375671731814;
    var_3304 = 2;
    OP_PUSH5_C 4666183493677523927, 4638742800563699712, 4665755156932691231, 4666292911577162056, 4640851751826704302
    var_3312 = 4665934327849995469;
    var_3320 = 240;
    pri = EvCameraMove(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3328 = 1;
    var_3336 = 1;
    OP_PUSH4_C -4583010755174989824, 4666404314095288320, 4665882046072094720, -4893233655299320911
    var_3344 = 48;
    pri = fun_05E0(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3352 = -4893233655299320911;
    var_3360 = 8;
    pri = fun_11E0(var_3352)
    var_3368 = 0;
    var_3376 = 0;
    var_3384 = 0;
    var_3392 = 889;
    var_3400 = 888;
    var_3408 = 16;
    pri = fun_8D98(var_3400, var_3392)
    var_3416 = pri;
    pri = SoundPlayPokeVoice(var_3416, var_3408, var_3400, var_3392)
    var_3424 = 1;
    var_3432 = -1;
    var_3440 = -1;
    var_3448 = 3;
    var_3456 = 0;
    var_3464 = 30;
    var_3472 = var_8;
    var_3480 = 56;
    pri = fun_25F8(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3488 = 0;
    var_3496 = 3;
    var_3504 = 0;
    var_3512 = 100;
    var_3520 = -1;
    OP_PUSH2_C -3589880489521446589, 2878147968070483256
    var_3528 = 16;
    pri = fun_8D98(var_3520, var_3512)
    var_3536 = pri;
    var_3544 = var_8;
    var_3552 = 56;
    pri = fun_1F28(var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496)
    var_3560 = var_8;
    var_3568 = 8;
    pri = fun_0A38(var_3560)
    var_3576 = 1;
    var_3584 = 8;
    pri = fun_20C0(var_3576)
    var_3592 = 0;
    pri = fun_2180()
    var_3600 = 0;
    var_3608 = 0;
    var_3616 = 0;
    var_3624 = 888;
    var_3632 = 889;
    var_3640 = 16;
    pri = fun_8D98(var_3632, var_3624)
    var_3648 = pri;
    pri = SoundPlayPokeVoice(var_3648, var_3640, var_3632, var_3624)
    var_3656 = 1;
    var_3664 = -1;
    var_3672 = -1;
    var_3680 = 3;
    var_3688 = 0;
    var_3696 = 29;
    var_3704 = var_16;
    var_3712 = 56;
    pri = fun_25F8(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3720 = 0;
    var_3728 = 3;
    var_3736 = 0;
    var_3744 = 100;
    var_3752 = -1;
    OP_PUSH2_C 2878146868558855045, -3589866195870279846
    var_3760 = 16;
    pri = fun_8D98(var_3752, var_3744)
    var_3768 = pri;
    var_3776 = var_16;
    var_3784 = 56;
    pri = fun_1F28(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728)
    var_3792 = 1;
    var_3800 = 8;
    pri = fun_20C0(var_3792)
    var_3808 = 0;
    pri = fun_2180()
    var_3816 = 1688300219790732716;
    var_3824 = 8;
    pri = fun_11E0(var_3816)
    var_3832 = 1;
    var_3840 = 3;
    var_3848 = 0;
    var_3856 = 12;
    var_3864 = 1688300219790732716;
    var_3872 = 40;
    pri = fun_6510(var_3864, var_3856, var_3848, var_3840, var_3832)
    var_3880 = var_24;
    var_3888 = 8;
    pri = fun_11E0(var_3880)
    var_3896 = 1;
    var_3904 = 3;
    var_3912 = 0;
    var_3920 = 12;
    var_3928 = var_24;
    var_3936 = 40;
    pri = fun_6510(var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3944 = 0;
    var_3952 = 4629742638183376486;
    var_3960 = 0;
    OP_PUSH5_C 4666247485254260490, 4637701343149870285, 4665875361041397842, 4666042739696494182, 4639857089627753021
    var_3968 = 4665925493274066289;
    var_3976 = 1;
    pri = EvCameraMove(var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3984 = 0;
    pri = fun_2568()
    var_3992 = 0;
    var_4000 = 4629742638183376486;
    var_4008 = 2;
    OP_PUSH5_C 4666246352757283881, 4637701343149870285, 4665861292790120448, 4666041838096959406, 4639849700909614367
    var_4016 = 4665912348612556227;
    var_4024 = 360;
    pri = EvCameraMove(var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976, var_3968, var_3960, var_3952)
    var_4032 = 1;
    var_4040 = 0;
    var_4048 = 4641240890982006784;
    var_4056 = 0;
    var_4064 = 0;
    OP_PUSH4_C 4666305358048788480, 4665876548513955840, 4607182418800017408, -4893233655299320911
    var_4072 = 72;
    pri = fun_06E8(var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4080 = 1;
    var_4088 = 0;
    var_4096 = 20;
    var_4104 = 0;
    pri = float(var_4104)
    var_4112 = pri;
    var_4120 = 40;
    pri = float(var_4120)
    var_4128 = pri;
    var_4136 = -4893233655299320911;
    var_4144 = 48;
    pri = fun_0FE8(var_4136, var_4128, var_4120, var_4112, var_4104, var_4096)
    var_4152 = 889;
    var_4160 = 888;
    var_4168 = 16;
    pri = fun_8D98(var_4160, var_4152)
    var_4176 = pri;
    var_4184 = 1;
    var_4192 = 16;
    pri = fun_2308(var_4184, var_4176)
    var_4200 = 0;
    var_4208 = 3;
    var_4216 = 0;
    var_4224 = 100;
    var_4232 = -1;
    OP_PUSH2_C -6455280396524930966, -4893233655299320911
    var_4240 = 56;
    pri = fun_1F28(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4248 = -4893233655299320911;
    var_4256 = 8;
    pri = fun_0860(var_4248)
    var_4264 = 1;
    var_4272 = 8;
    pri = fun_20C0(var_4264)
    var_4280 = 0;
    pri = fun_2180()
    var_4288 = 0;
    var_4296 = var_8;
    var_4304 = 16;
    pri = fun_0638(var_4296, var_4288)
    var_4312 = -1;
    var_4320 = -4893233655299320911;
    var_4328 = 16;
    pri = fun_1048(var_4320, var_4312)
    var_4336 = 1;
    var_4344 = 1;
    OP_PUSH4_C 4640192396693759590, 4666286996204604621, 4665721187520951091, 8802641224559852288
    var_4352 = 48;
    pri = fun_05E0(var_4344, var_4336, var_4328, var_4320, var_4312, var_4304)
    var_4360 = 1;
    var_4368 = 1;
    OP_PUSH4_C -4583334451398207078, 4666305358048788480, 4665876548513955840, -4893233655299320911
    var_4376 = 48;
    pri = fun_05E0(var_4368, var_4360, var_4352, var_4344, var_4336, var_4328)
    var_4384 = 0;
    var_4392 = 4629742638183376486;
    var_4400 = 0;
    OP_PUSH5_C 4666152894268922921, 4639539726591511757, 4665764084967108772, 4666357881719247340, 4640073121672378450
    var_4408 = 4665818543778032517;
    var_4416 = 1;
    pri = EvCameraMove(var_4416, var_4408, var_4400, var_4392, var_4384, var_4376, var_4368, var_4360, var_4352, var_4344)
    var_4424 = 0;
    pri = fun_2568()
    var_4432 = 15;
    var_4440 = 8;
    pri = fun_0060(var_4432)
    var_4448 = 0;
    var_4456 = 0;
    var_4464 = 0;
    var_4472 = -165;
    pri = float(var_4472)
    var_4480 = pri;
    var_4488 = var_16;
    var_4496 = 40;
    pri = fun_07B8(var_4488, var_4480, var_4472, var_4464, var_4456)
    var_4504 = 15;
    var_4512 = 8;
    pri = fun_0060(var_4504)
    var_4520 = 1;
    var_4528 = var_8;
    var_4536 = 16;
    pri = fun_0638(var_4528, var_4520)
    var_4544 = 0;
    var_4552 = 4629742638183376486;
    var_4560 = 0;
    OP_PUSH5_C 4665891106047907594, 4637101097762034811, 4665781391280129966, 4665630016016775905, 4638167184236326420
    var_4568 = 4665797510120593162;
    var_4576 = 1;
    pri = EvCameraMove(var_4576, var_4568, var_4560, var_4552, var_4544, var_4536, var_4528, var_4520, var_4512, var_4504)
    var_4584 = var_16;
    var_4592 = 8;
    pri = fun_0860(var_4584)
    var_4600 = 1;
    var_4608 = 0;
    var_4616 = 4641240890982006784;
    var_4624 = 0;
    var_4632 = 0;
    OP_PUSH3_C 4665012332374523904, 4665430146793078784, 4607182418800017408
    var_4640 = var_16;
    var_4648 = 72;
    pri = fun_06E8(var_4640, var_4632, var_4624, var_4616, var_4608, var_4600, var_4592, var_4584, var_4576)
    var_4656 = 60;
    var_4664 = 8;
    pri = fun_0060(var_4656)
    var_4672 = 8802641224559852288;
    var_4680 = 8;
    pri = fun_0860(var_4672)
    var_4688 = -4893233655299320911;
    var_4696 = 8;
    pri = fun_0860(var_4688)
    var_4704 = 1;
    var_4712 = 0;
    var_4720 = 4641240890982006784;
    var_4728 = 170;
    pri = float(var_4728)
    var_4736 = pri;
    var_4744 = 1;
    OP_PUSH4_C 4666034218481378918, 4665746586239552717, 4611686018427387904, 8802641224559852288
    var_4752 = 72;
    pri = fun_06E8(var_4744, var_4736, var_4728, var_4720, var_4712, var_4704, var_4696, var_4688, var_4680)
    var_4760 = 1;
    var_4768 = 0;
    var_4776 = 4641240890982006784;
    var_4784 = 0;
    var_4792 = 0;
    OP_PUSH4_C 4666030480141844480, 4665805080258150400, 4611686018427387904, -4893233655299320911
    var_4800 = 72;
    pri = fun_06E8(var_4792, var_4784, var_4776, var_4768, var_4760, var_4752, var_4744, var_4736, var_4728)
    var_4808 = 32208;
    pri = SoundPostEvent(var_4808)
    var_4816 = 60;
    var_4824 = 8;
    pri = fun_0060(var_4816)
    var_4832 = 0;
    var_4840 = var_8;
    var_4848 = 16;
    pri = fun_0638(var_4840, var_4832)
    var_4856 = 0;
    var_4864 = var_16;
    var_4872 = 16;
    pri = fun_0638(var_4864, var_4856)
    var_4880 = 0;
    var_4888 = 4632698125438838374;
    var_4896 = 0;
    OP_PUSH5_C 4665887037854884823, 4638331847097702154, 4665747311917227049, 4666077154410443571, 4637144726383424963
    var_4904 = 4665840885854308925;
    var_4912 = 1;
    pri = EvCameraMove(var_4912, var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848, var_4840)
    var_4920 = 0;
    pri = fun_2568()
    var_4928 = 0;
    var_4936 = 4632698125438838374;
    var_4944 = 3;
    OP_PUSH5_C 4665889924072907735, 4640925639008090849, 4665748735784785019, 4666073602987885855, 4636054010848671171
    var_4952 = 4665839137630820762;
    var_4960 = 60;
    pri = EvCameraMove(var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896, var_4888)
    var_4968 = 8802641224559852288;
    var_4976 = 8;
    pri = fun_0860(var_4968)
    var_4984 = -4893233655299320911;
    var_4992 = 8;
    pri = fun_0860(var_4984)
    var_5000 = 0;
    var_5008 = 3;
    var_5016 = 0;
    var_5024 = 100;
    var_5032 = -1;
    OP_PUSH2_C -6455294690176097709, -4893233655299320911
    var_5040 = 56;
    pri = fun_1F28(var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984)
    var_5048 = 1;
    var_5056 = 8;
    pri = fun_20C0(var_5048)
    var_5064 = 0;
    pri = fun_2180()
    var_5072 = 0;
    var_5080 = 4630333735634468864;
    var_5088 = 0;
    OP_PUSH5_C 4666038506576727245, 4634821150450678497, 4665778505062107054, 4666236055830889759, 4640899602572745114
    var_5096 = 4665818939602218516;
    var_5104 = 1;
    pri = EvCameraMove(var_5104, var_5096, var_5088, var_5080, var_5072, var_5064, var_5056, var_5048, var_5040, var_5032)
    var_5112 = 0;
    pri = fun_2568()
    var_5120 = 0;
    var_5128 = 4630333735634468864;
    var_5136 = 3;
    OP_PUSH5_C 4666041442272773407, 4634821150450678497, 4665764161932922716, 4666238991526935921, 4640899602572745114
    var_5144 = 4665804596473034179;
    var_5152 = 120;
    pri = EvCameraMove(var_5152, var_5144, var_5136, var_5128, var_5120, var_5112, var_5104, var_5096, var_5088, var_5080)
    var_5160 = 0;
    var_5168 = 0;
    var_5176 = 0;
    var_5184 = 0;
    OP_PUSH2_C 8802641224559852288, -4893233655299320911
    var_5192 = 48;
    pri = fun_0808(var_5184, var_5176, var_5168, var_5160, var_5152, var_5144)
    var_5200 = 0;
    var_5208 = 0;
    var_5216 = 0;
    var_5224 = 0;
    OP_PUSH2_C -4893233655299320911, 8802641224559852288
    var_5232 = 48;
    pri = fun_0808(var_5224, var_5216, var_5208, var_5200, var_5192, var_5184)
    var_5240 = 1;
    var_5248 = 0;
    var_5256 = 0;
    var_5264 = 40;
    pri = float(var_5264)
    var_5272 = pri;
    var_5280 = 0;
    pri = float(var_5280)
    var_5288 = pri;
    var_5296 = var_32;
    var_5304 = 48;
    pri = fun_0FE8(var_5296, var_5288, var_5280, var_5272, var_5264, var_5256)
    var_5312 = 0;
    var_5320 = 1688300219790732716;
    var_5328 = 16;
    pri = fun_0638(var_5320, var_5312)
    var_5336 = 1;
    OP_PUSH2_C -8973315221164296937, -4706292389713189629
    var_5344 = 16;
    pri = fun_8D98(var_5336, var_5328)
    var_5352 = pri;
    var_5360 = 16;
    pri = fun_0638(var_5352, var_5344)
    var_5368 = 888;
    var_5376 = 889;
    var_5384 = 16;
    pri = fun_8D98(var_5376, var_5368)
    var_5392 = pri;
    var_5400 = 1;
    var_5408 = 16;
    pri = fun_2308(var_5400, var_5392)
    var_5416 = 0;
    var_5424 = 3;
    var_5432 = 0;
    var_5440 = 100;
    var_5448 = -1;
    OP_PUSH2_C -6455295789687725920, -4893233655299320911
    var_5456 = 56;
    pri = fun_1F28(var_5448, var_5440, var_5432, var_5424, var_5416, var_5408, var_5400)
    var_5464 = 8802641224559852288;
    var_5472 = 8;
    pri = fun_0860(var_5464)
    var_5480 = -4893233655299320911;
    var_5488 = 8;
    pri = fun_0860(var_5480)
    var_5496 = 1;
    var_5504 = 8;
    pri = fun_20C0(var_5496)
    var_5512 = 0;
    pri = fun_2180()
    var_5520 = 4;
    var_5528 = 7;
    var_5536 = var_32;
    var_5544 = 24;
    pri = fun_1178(var_5536, var_5528, var_5520)
    var_5552 = 1;
    var_5560 = 1;
    OP_PUSH4_C -4597105614633775923, 4666357584851107840, 4665342185862856704, 8802641224559852288
    var_5568 = 48;
    pri = fun_05E0(var_5560, var_5552, var_5544, var_5536, var_5528, var_5520)
    var_5576 = 1;
    var_5584 = 1;
    OP_PUSH4_C -4591842032569286656, 4666409811653427200, 4665397161444245504, -4893233655299320911
    var_5592 = 48;
    pri = fun_05E0(var_5584, var_5576, var_5568, var_5560, var_5552, var_5544)
    var_5600 = 0;
    var_5608 = 4627645649606882099;
    var_5616 = 0;
    OP_PUSH5_C 4666458509023421399, 4627538689115732050, 4665239095652636426, 4666497525193533030, 4625419182541100810
    var_5624 = 4665568454360736727;
    var_5632 = 1;
    pri = EvCameraMove(var_5632, var_5624, var_5616, var_5608, var_5600, var_5592, var_5584, var_5576, var_5568, var_5560)
    var_5640 = 0;
    pri = fun_2568()
    var_5648 = 0;
    var_5656 = 4627645649606882099;
    var_5664 = 3;
    OP_PUSH5_C 4666462417787258143, 4627538689115732050, 4665237248473101763, 4666501384479346524, 4625419182541100810
    var_5672 = 4665566607181202063;
    var_5680 = 90;
    pri = EvCameraMove(var_5680, var_5672, var_5664, var_5656, var_5648, var_5640, var_5632, var_5624, var_5616, var_5608)
    var_5688 = 30;
    var_5696 = 8;
    pri = fun_0060(var_5688)
    var_5704 = 1;
    var_5712 = 0;
    var_5720 = 0;
    var_5728 = 20;
    pri = float(var_5728)
    var_5736 = pri;
    var_5744 = 0;
    pri = float(var_5744)
    var_5752 = pri;
    var_5760 = 8802641224559852288;
    var_5768 = 48;
    pri = fun_0FE8(var_5760, var_5752, var_5744, var_5736, var_5728, var_5720)
    var_5776 = 1;
    var_5784 = 0;
    var_5792 = 0;
    var_5800 = 30;
    pri = float(var_5800)
    var_5808 = pri;
    var_5816 = 0;
    pri = float(var_5816)
    var_5824 = pri;
    var_5832 = -4893233655299320911;
    var_5840 = 48;
    pri = fun_0FE8(var_5832, var_5824, var_5816, var_5808, var_5800, var_5792)
    var_5848 = 6;
    var_5856 = 6;
    var_5864 = -4893233655299320911;
    var_5872 = 24;
    pri = fun_1178(var_5864, var_5856, var_5848)
    var_5880 = 60;
    var_5888 = 8;
    pri = fun_0060(var_5880)
    var_5896 = 0;
    var_5904 = 4630798169346041446;
    var_5912 = 0;
    OP_PUSH5_C 4666349475952852992, 4634325050804225966, 4665340371668670874, 4666558300698758349, 4631240085059477176
    var_5920 = 4665275808345887867;
    var_5928 = 1;
    pri = EvCameraMove(var_5928, var_5920, var_5912, var_5904, var_5896, var_5888, var_5880, var_5872, var_5864, var_5856)
    var_5936 = 0;
    pri = fun_2568()
    var_5944 = 0;
    var_5952 = 4630798169346041446;
    var_5960 = 2;
    OP_PUSH5_C 4666347568300178801, 4634325050804225966, 4665315720617976136, 4666556393046084157, 4631240085059477176
    var_5968 = 4665251157295193129;
    var_5976 = 120;
    pri = EvCameraMove(var_5976, var_5968, var_5960, var_5952, var_5944, var_5936, var_5928, var_5920, var_5912, var_5904)
    var_5984 = 15;
    var_5992 = 8;
    pri = fun_0060(var_5984)
    var_6000 = 4;
    var_6008 = 2;
    var_6016 = var_32;
    var_6024 = 24;
    pri = fun_1178(var_6016, var_6008, var_6000)
    var_6032 = 1;
    var_6040 = 0;
    var_6048 = 20;
    var_6056 = -20;
    pri = float(var_6056)
    var_6064 = pri;
    var_6072 = 0;
    pri = float(var_6072)
    var_6080 = pri;
    var_6088 = var_32;
    var_6096 = 48;
    pri = fun_0FE8(var_6088, var_6080, var_6072, var_6064, var_6056, var_6048)
    var_6104 = 45;
    var_6112 = 8;
    pri = fun_0060(var_6104)
    var_6120 = 0;
    var_6128 = 4630798169346041446;
    var_6136 = 0;
    OP_PUSH5_C 4666256798117747753, 4637424793985252065, 4665347914318437417, 4666467909847838884, 4638088371242847437
    var_6144 = 4665377007396108370;
    var_6152 = 1;
    pri = EvCameraMove(var_6152, var_6144, var_6136, var_6128, var_6120, var_6112, var_6104, var_6096, var_6088, var_6080)
    var_6160 = 0;
    pri = fun_2568()
    var_6168 = 888;
    var_6176 = 889;
    var_6184 = 16;
    pri = fun_8D98(var_6176, var_6168)
    var_6192 = pri;
    var_6200 = 1;
    var_6208 = 16;
    pri = fun_2308(var_6200, var_6192)
    var_6216 = 0;
    var_6224 = 3;
    var_6232 = 0;
    var_6240 = 100;
    var_6248 = -1;
    OP_PUSH2_C -6456277653571529118, -4893233655299320911
    var_6256 = 56;
    pri = fun_1F28(var_6248, var_6240, var_6232, var_6224, var_6216, var_6208, var_6200)
    var_6264 = 1;
    var_6272 = 8;
    pri = fun_20C0(var_6264)
    var_6280 = 0;
    pri = fun_2180()
    var_6288 = 0;
    var_6296 = 4625421997290867917;
    var_6304 = 0;
    OP_PUSH5_C 4666471433782605906, 4626871593420927795, 4665210640291709583, 4666430938769354916, 4638926462986003415
    var_6312 = 4665607267121197220;
    var_6320 = 1;
    pri = EvCameraMove(var_6320, var_6312, var_6304, var_6296, var_6288, var_6280, var_6272, var_6264, var_6256, var_6248)
    var_6328 = 1;
    var_6336 = 0;
    var_6344 = 20;
    var_6352 = -40;
    pri = float(var_6352)
    var_6360 = pri;
    var_6368 = -20;
    pri = float(var_6368)
    var_6376 = pri;
    var_6384 = var_32;
    var_6392 = 48;
    pri = fun_0FE8(var_6384, var_6376, var_6368, var_6360, var_6352, var_6344)
    var_6400 = -1;
    var_6408 = -4893233655299320911;
    var_6416 = 16;
    pri = fun_1048(var_6408, var_6400)
    var_6424 = -4893233655299320911;
    var_6432 = 8;
    pri = fun_11E0(var_6424)
    var_6440 = 1;
    var_6448 = 0;
    var_6456 = 4641240890982006784;
    var_6464 = 0;
    var_6472 = 0;
    OP_PUSH4_C 4666448294560399360, 4665430146793078784, 4607182418800017408, -4893233655299320911
    var_6480 = 72;
    pri = fun_06E8(var_6472, var_6464, var_6456, var_6448, var_6440, var_6432, var_6424, var_6416, var_6408)
    var_6488 = 0;
    var_6496 = 3;
    var_6504 = 0;
    var_6512 = 100;
    var_6520 = -1;
    OP_PUSH2_C -146816948417882617, -2295040228142381201
    var_6528 = 16;
    pri = fun_8D98(var_6520, var_6512)
    var_6536 = pri;
    var_6544 = var_32;
    var_6552 = 56;
    pri = fun_1F28(var_6544, var_6536, var_6528, var_6520, var_6512, var_6504, var_6496)
    var_6560 = -4893233655299320911;
    var_6568 = 8;
    pri = fun_0860(var_6560)
    var_6576 = 1;
    var_6584 = 8;
    pri = fun_20C0(var_6576)
    var_6592 = 0;
    pri = fun_2180()
    OP_PUSH2_C -8973315221164296937, -4706292389713189629
    var_6600 = 16;
    pri = fun_8D98(var_6592, var_6584)
    var_6608 = pri;
    var_6616 = 8;
    pri = fun_0588(var_6608)
    var_6624 = 32376;
    pri = SoundPostEvent(var_6624)
    var_6632 = 1;
    var_6640 = 0;
    var_6648 = 4641240890982006784;
    var_6656 = 0;
    var_6664 = 0;
    OP_PUSH4_C 4666448294560399360, 4665628058886078464, 4607182418800017408, -4893233655299320911
    var_6672 = 72;
    pri = fun_06E8(var_6664, var_6656, var_6648, var_6640, var_6632, var_6624, var_6616, var_6608, var_6600)
    var_6680 = 1;
    var_6688 = 1103;
    var_6696 = 1104;
    var_6704 = 16;
    pri = fun_8D98(var_6696, var_6688)
    var_6712 = pri;
    var_6720 = 1;
    var_6728 = 24;
    pri = fun_2358(var_6720, var_6712, var_6704)
    var_6736 = 3;
    var_6744 = 0;
    var_6752 = 8109402079345276451;
    var_6760 = 24;
    pri = fun_1FD8(var_6752, var_6744, var_6736)
    var_6768 = 1;
    var_6776 = 8;
    pri = fun_20C0(var_6768)
    var_6784 = 0;
    pri = fun_2180()
    var_6792 = -4893233655299320911;
    var_6800 = 8;
    pri = fun_0860(var_6792)
    var_6808 = 1;
    var_6816 = 0;
    var_6824 = 32560;
    var_6832 = 1;
    var_6840 = 32;
    pri = fun_02E0(var_6832, var_6824, var_6816, var_6808)
    var_6848 = 0;
    pri = fun_0350()
    var_6856 = 1;
    var_6864 = var_8;
    var_6872 = 16;
    pri = fun_0638(var_6864, var_6856)
    var_6880 = 1;
    var_6888 = var_8;
    var_6896 = 16;
    pri = fun_0670(var_6888, var_6880)
    var_6904 = 1;
    var_6912 = 1688300219790732716;
    var_6920 = 16;
    pri = fun_0638(var_6912, var_6904)
    var_6928 = 0;
    var_6936 = 4630474473122824192;
    var_6944 = 0;
    OP_PUSH5_C 4667851056992674120, 4624104694399862047, 4665819165002102211, 4667950843170452931, 4639994308678899466
    var_6952 = 4665986422710919496;
    var_6960 = 1;
    pri = EvCameraMove(var_6960, var_6952, var_6944, var_6936, var_6928, var_6920, var_6912, var_6904, var_6896, var_6888)
    var_6968 = 1;
    var_6976 = 1;
    var_6984 = 0;
    OP_PUSH3_C 4667168474676592640, 4665628058886078464, -4893233655299320911
    var_6992 = 48;
    pri = fun_05E0(var_6984, var_6976, var_6968, var_6960, var_6952, var_6944)
    var_7000 = 1;
    var_7008 = 8;
    pri = fun_0060(var_7000)
    var_7024 = 32608;
    var_7032 = 1;
    var_7040 = 0;
    var_7048 = 1;
    var_7056 = -1;
    OP_PUSH5_C 4667685245141647360, -4577627546245398528, 4664693474002468864, 4667718780246294528, -4577627546245398528
    OP_PUSH5_C 4665002876574525030, 4667740770478850048, -4577627546245398528, 4665376710527968870, 4667636316874211328
    OP_PUSH3_C -4578885387547574272, 4665607607969801830, 4667168474676592640
    var_7064 = 0;
    var_7072 = 4665628058886078464;
    var_7080 = 5;
    var_7088 = 168;
    pri = fun_15A8(var_7080, var_7072, var_7064, var_7056, var_7048, var_7040, var_7032, var_7024, var_7016, var_7008, var_7000, var_6992, var_6984, var_6976, var_6968, var_6960, var_6952, var_6944, var_6936, var_6928, var_6920)
    var_64 = pri;
    var_7096 = 1;
    var_7104 = 4596373779694328218;
    var_7112 = -1;
    var_7120 = 4611686018427387904;
    var_7128 = var_64;
    var_7136 = -4893233655299320911;
    var_7144 = 48;
    pri = fun_0760(var_7136, var_7128, var_7120, var_7112, var_7104, var_7096)
    var_7152 = 32656;
    var_7160 = 15;
    var_7168 = 16;
    pri = fun_0280(var_7160, var_7152)
    var_7176 = 1;
    var_7184 = 1;
    OP_PUSH3_C -4591842032569286656, 4666181333137175347, 4665796064262802637
    var_7192 = var_8;
    var_7200 = 48;
    pri = fun_05E0(var_7192, var_7184, var_7176, var_7168, var_7160, var_7152)
    var_7208 = 90;
    var_7216 = 8;
    pri = fun_0060(var_7208)
    var_7224 = 1;
    var_7232 = 0;
    var_7240 = 32704;
    var_7248 = 1;
    var_7256 = 32;
    pri = fun_02E0(var_7248, var_7240, var_7232, var_7224)
    var_7264 = 0;
    pri = fun_0350()
    var_7272 = 1;
    var_7280 = 0;
    var_7288 = 4641240890982006784;
    var_7296 = 0;
    var_7304 = 0;
    OP_PUSH3_C 4666280289183675187, 4665648509802355098, 4602678819172646912
    var_7312 = var_8;
    var_7320 = 72;
    pri = fun_06E8(var_7312, var_7304, var_7296, var_7288, var_7280, var_7272, var_7264, var_7256, var_7248)
    var_7328 = 0;
    var_7336 = 4629644121941527757;
    var_7344 = 0;
    OP_PUSH5_C 4666575876392128348, 4633244186893657047, 4665233092319148769, 4666763194690594406, 4636047677661695181
    var_7352 = 4665039787179869471;
    var_7360 = 1;
    pri = EvCameraMove(var_7360, var_7352, var_7344, var_7336, var_7328, var_7320, var_7312, var_7304, var_7296, var_7288)
    var_7368 = 0;
    pri = fun_2568()
    var_7376 = 0;
    var_7384 = 4629644121941527757;
    var_7392 = 2;
    OP_PUSH5_C 4666564831797827338, 4633244186893657047, 4665190288331479450, 4666752150096293396, 4636047677661695181
    var_7400 = 4664996983192200151;
    var_7408 = 360;
    pri = EvCameraMove(var_7408, var_7400, var_7392, var_7384, var_7376, var_7368, var_7360, var_7352, var_7344, var_7336)
    var_7416 = 32752;
    var_7424 = 15;
    var_7432 = 16;
    pri = fun_0280(var_7424, var_7416)
    var_7440 = 15;
    var_7448 = 8;
    pri = fun_0060(var_7440)
    var_7456 = 8802641224559852288;
    var_7464 = 8;
    pri = fun_0860(var_7456)
    var_7472 = -1;
    var_7480 = 8802641224559852288;
    var_7488 = 16;
    pri = fun_1048(var_7480, var_7472)
    var_7496 = 0;
    var_7504 = 0;
    var_7512 = 0;
    var_7520 = 115;
    pri = float(var_7520)
    var_7528 = pri;
    var_7536 = 8802641224559852288;
    var_7544 = 40;
    pri = fun_07B8(var_7536, var_7528, var_7520, var_7512, var_7504)
    var_7552 = var_8;
    var_7560 = 8;
    pri = fun_0860(var_7552)
    var_7568 = 8802641224559852288;
    var_7576 = 8;
    pri = fun_0860(var_7568)
    var_7584 = 0;
    var_7592 = 0;
    var_7600 = 0;
    var_7608 = 889;
    var_7616 = 888;
    var_7624 = 16;
    pri = fun_8D98(var_7616, var_7608)
    var_7632 = pri;
    pri = SoundPlayPokeVoice(var_7632, var_7624, var_7616, var_7608)
    var_7640 = 1;
    var_7648 = -1;
    var_7656 = -1;
    var_7664 = 3;
    var_7672 = 0;
    var_7680 = 31;
    var_7688 = var_8;
    var_7696 = 56;
    pri = fun_25F8(var_7688, var_7680, var_7672, var_7664, var_7656, var_7648, var_7640)
    var_7704 = 0;
    var_7712 = 3;
    var_7720 = 0;
    var_7728 = 101;
    var_7736 = -1;
    OP_PUSH2_C -3589865096358651635, 2878145769047226834
    var_7744 = 16;
    pri = fun_8D98(var_7736, var_7728)
    var_7752 = pri;
    var_7760 = var_8;
    var_7768 = 56;
    pri = fun_1F28(var_7760, var_7752, var_7744, var_7736, var_7728, var_7720, var_7712)
    var_7776 = var_8;
    var_7784 = 8;
    pri = fun_0A38(var_7776)
    var_7792 = 1;
    var_7800 = 8;
    pri = fun_20C0(var_7792)
    var_7808 = 0;
    pri = fun_2180()
    var_7816 = 1;
    var_7824 = 1;
    OP_PUSH3_C 4640185359819341824, 4666577487176663040, 4665422010407033242
    var_7832 = var_24;
    var_7840 = 48;
    pri = fun_05E0(var_7832, var_7824, var_7816, var_7808, var_7800, var_7792)
    var_7848 = 3;
    var_7856 = 3;
    var_7864 = var_32;
    var_7872 = 24;
    pri = fun_1178(var_7864, var_7856, var_7848)
    var_7880 = 0;
    var_7888 = 4629644121941527757;
    var_7896 = 0;
    OP_PUSH5_C 4666508410358648013, 4621858524085711012, 4664989033723131331, 4666450290174003773, 4634761337018127483
    var_7904 = 4665390146560060293;
    var_7912 = 1;
    pri = EvCameraMove(var_7912, var_7904, var_7896, var_7888, var_7880, var_7872, var_7864, var_7856, var_7848, var_7840)
    var_7920 = 0;
    pri = fun_2568()
    var_7928 = 0;
    var_7936 = 4629644121941527757;
    var_7944 = 2;
    OP_PUSH5_C 4666505012867718185, 4623896402917096161, 4665012508296384348, 4666446892683073946, 4635016071872050627
    var_7952 = 4665413632128429588;
    var_7960 = 15;
    pri = EvCameraMove(var_7960, var_7952, var_7944, var_7936, var_7928, var_7920, var_7912, var_7904, var_7896, var_7888)
    var_7968 = 0;
    var_7976 = 3;
    var_7984 = 0;
    var_7992 = 101;
    var_8000 = -1;
    OP_PUSH2_C -145835084534079419, -2294040772072526627
    var_8008 = 16;
    pri = fun_8D98(var_8000, var_7992)
    var_8016 = pri;
    var_8024 = var_32;
    var_8032 = 56;
    pri = fun_1F28(var_8024, var_8016, var_8008, var_8000, var_7992, var_7984, var_7976)
    var_8040 = 1;
    var_8048 = 8;
    pri = fun_20C0(var_8040)
    var_8056 = 0;
    pri = fun_2180()
    var_8064 = 0;
    var_8072 = 4629644121941527757;
    var_8080 = 0;
    OP_PUSH5_C 4666354489725875651, 4637893449821475308, 4665566112400969564, 4666316924911112684, 4641026266312264909
    var_8088 = 4665851391687912325;
    var_8096 = 1;
    pri = EvCameraMove(var_8096, var_8088, var_8080, var_8072, var_8064, var_8056, var_8048, var_8040, var_8032, var_8024)
    var_8104 = 0;
    pri = fun_2568()
    var_8112 = var_24;
    var_8120 = 8;
    pri = fun_0860(var_8112)
    var_8136 = 32800;
    var_8144 = 1;
    var_8152 = 0;
    var_8160 = 1;
    var_8168 = -1;
    var_8176 = 0;
    var_8184 = 0;
    var_8192 = 0;
    var_8200 = 4666399971024358605;
    var_8208 = 0;
    OP_PUSH2_C 4665412334704708813, 4666416463698775245
    var_8216 = 0;
    OP_PUSH2_C 4665379349355875533, 4666449449047608525
    var_8224 = 0;
    OP_PUSH2_C 4665379349355875533, 4666577487176663040
    var_8232 = 0;
    var_8240 = 4665421350700056576;
    var_8248 = 4;
    var_8256 = 168;
    pri = fun_15A8(var_8248, var_8240, var_8232, var_8224, var_8216, var_8208, var_8200, var_8192, var_8184, var_8176, var_8168, var_8160, var_8152, var_8144, var_8136, var_8128, var_8120, var_8112, var_8104, var_8096, var_8088)
    var_72 = pri;
    var_8264 = 1;
    var_8272 = 4596373779694328218;
    var_8280 = -1;
    var_8288 = 4611686018427387904;
    var_8296 = var_72;
    var_8304 = var_24;
    var_8312 = 48;
    pri = fun_0760(var_8304, var_8296, var_8288, var_8280, var_8272, var_8264)
    var_8320 = var_24;
    var_8328 = 8;
    pri = fun_0860(var_8320)
    var_8336 = 0;
    var_8344 = 3;
    var_8352 = 0;
    var_8360 = 101;
    var_8368 = -1;
    OP_PUSH2_C -2294041871584154838, -145836184045707630
    var_8376 = 16;
    pri = fun_8D98(var_8368, var_8360)
    var_8384 = pri;
    var_8392 = var_24;
    var_8400 = 56;
    pri = fun_1F28(var_8392, var_8384, var_8376, var_8368, var_8360, var_8352, var_8344)
    var_8408 = 1;
    var_8416 = 8;
    pri = fun_20C0(var_8408)
    var_8424 = 0;
    var_8432 = var_24;
    var_8440 = 16;
    pri = fun_0638(var_8432, var_8424)
    var_8448 = 6;
    var_8456 = 2;
    var_8464 = 8802641224559852288;
    var_8472 = 24;
    pri = fun_1178(var_8464, var_8456, var_8448)
    var_8480 = 0;
    var_8488 = 4629644121941527757;
    var_8496 = 0;
    OP_PUSH5_C 4666289942895767060, 4638433881776759767, 4665556821527714857, 4666444765128074199, 4637067320764829532
    var_8504 = 4665269211276121211;
    var_8512 = 1;
    pri = EvCameraMove(var_8512, var_8504, var_8496, var_8488, var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8520 = 0;
    pri = fun_2568()
    var_8528 = 0;
    var_8536 = 4629644121941527757;
    var_8544 = 2;
    OP_PUSH5_C 4666278535462628884, 4638433881776759767, 4665528718010508902, 4666450927890747884, 4637070135514596639
    var_8552 = 4665284340556119409;
    var_8560 = 360;
    pri = EvCameraMove(var_8560, var_8552, var_8544, var_8536, var_8528, var_8520, var_8512, var_8504, var_8496, var_8488)
    var_8568 = 889;
    var_8576 = 888;
    var_8584 = 16;
    pri = fun_8D98(var_8576, var_8568)
    var_8592 = pri;
    var_8600 = 1;
    var_8608 = 16;
    pri = fun_2308(var_8600, var_8592)
    var_8616 = 0;
    var_8624 = 5544911611551742774;
    var_8632 = 0;
    var_8640 = 24;
    pri = fun_21B0(var_8632, var_8624, var_8616)
    var_8648 = 0;
    var_8656 = 5544914910086627407;
    var_8664 = 1;
    var_8672 = 24;
    pri = fun_21B0(var_8664, var_8656, var_8648)
    var_8680 = 0;
    var_8688 = 0;
    var_8696 = 0;
    var_8704 = 1;
    var_8712 = 32;
    pri = fun_2298(var_8704, var_8696, var_8688, var_8680)
    var_8720 = 0;
    pri = fun_2180()
    var_8728 = 0;
    var_8736 = 0;
    var_8744 = 0;
    var_8752 = -62;
    pri = float(var_8752)
    var_8760 = pri;
    var_8768 = var_8;
    var_8776 = 40;
    pri = fun_07B8(var_8768, var_8760, var_8752, var_8744, var_8736)
    var_8784 = var_8;
    var_8792 = 8;
    pri = fun_0860(var_8784)
    var_8800 = 1;
    var_8808 = 0;
    var_8816 = 32848;
    var_8824 = 1;
    var_8832 = 32;
    pri = fun_02E0(var_8824, var_8816, var_8808, var_8800)
    var_8840 = 0;
    pri = fun_0350()
    var_8848 = 0;
    var_8856 = var_8;
    var_8864 = 16;
    pri = fun_0638(var_8856, var_8848)
    var_8872 = 0;
    var_8880 = 1688300219790732716;
    var_8888 = 16;
    pri = fun_0638(var_8880, var_8872)
    var_8896 = 0;
    var_8904 = 4624690162351420211;
    var_8912 = 0;
    OP_PUSH5_C 4666379778493314499, 4635945642982637568, 4665244406293798584, 4666298425627975352, 4641336240630367519
    var_8920 = 4665614380961428931;
    var_8928 = 1;
    pri = EvCameraMove(var_8928, var_8920, var_8912, var_8904, var_8896, var_8888, var_8880, var_8872, var_8864, var_8856)
    var_8936 = 0;
    pri = fun_2568()
    var_8944 = 0;
    var_8952 = 4624690162351420211;
    var_8960 = 2;
    OP_PUSH5_C 4666386831860406682, 4635251103477604024, 4665212377520081469, 4666305478995067535, 4640988970877850747
    var_8968 = 4665582352187711816;
    var_8976 = 360;
    pri = EvCameraMove(var_8976, var_8968, var_8960, var_8952, var_8944, var_8936, var_8928, var_8920, var_8912, var_8904)
    var_8984 = 32896;
    var_8992 = 15;
    var_9000 = 16;
    pri = fun_0280(var_8992, var_8984)
    var_9008 = 0;
    pri = fun_0350()
    var_9016 = 0;
    var_9024 = 3;
    var_9032 = 0;
    var_9040 = 100;
    var_9048 = -1;
    OP_PUSH2_C -3589023969963259445, 2877163905163423636
    var_9056 = 16;
    pri = fun_8D98(var_9048, var_9040)
    var_9064 = pri;
    var_9072 = var_8;
    var_9080 = 56;
    pri = fun_1F28(var_9072, var_9064, var_9056, var_9048, var_9040, var_9032, var_9024)
    var_9088 = 1;
    var_9096 = 8;
    pri = fun_20C0(var_9088)
    var_9104 = 0;
    pri = fun_2180()
    var_9112 = 889;
    var_9120 = 888;
    var_9128 = 16;
    pri = fun_8D98(var_9120, var_9112)
    var_9136 = pri;
    var_9144 = 1;
    var_9152 = 16;
    pri = fun_2308(var_9144, var_9136)
    var_9160 = 3;
    var_9168 = 0;
    var_9176 = 8109403178856904662;
    var_9184 = 24;
    pri = fun_1FD8(var_9176, var_9168, var_9160)
    var_9192 = 1;
    var_9200 = 8;
    pri = fun_20C0(var_9192)
    var_9208 = 0;
    pri = fun_2180()
    var_9216 = 1;
    var_9224 = 0;
    var_9232 = 32944;
    var_9240 = 1;
    var_9248 = 32;
    pri = fun_02E0(var_9240, var_9232, var_9224, var_9216)
    var_9256 = 0;
    pri = fun_0350()
    var_9264 = 1;
    var_9272 = var_8;
    var_9280 = 16;
    pri = fun_0638(var_9272, var_9264)
    var_9288 = 1;
    var_9296 = 1688300219790732716;
    var_9304 = 16;
    pri = fun_0638(var_9296, var_9288)
    var_9312 = 8802641224559852288;
    var_9320 = 8;
    pri = fun_11E0(var_9312)
    var_9328 = 0;
    var_9336 = 4630347809383304397;
    var_9344 = 0;
    OP_PUSH5_C 4666251091652399596, 4639749425449161196, 4665647410290727322, 4666397420157382164, 4639340583045488968
    var_9352 = 4665342031931228815;
    var_9360 = 1;
    pri = EvCameraMove(var_9360, var_9352, var_9344, var_9336, var_9328, var_9320, var_9312, var_9304, var_9296, var_9288)
    var_9368 = 0;
    pri = fun_2568()
    var_9376 = 0;
    var_9384 = 4630347809383304397;
    var_9392 = 2;
    OP_PUSH5_C 4666244489085074801, 4639749425449161196, 4665630038007008461, 4666415518118775357, 4639340231201768079
    var_9400 = 4665381262506107863;
    var_9408 = 360;
    pri = EvCameraMove(var_9408, var_9400, var_9392, var_9384, var_9376, var_9368, var_9360, var_9352, var_9344, var_9336)
    var_9416 = 32992;
    var_9424 = 15;
    var_9432 = 16;
    pri = fun_0280(var_9424, var_9416)
    var_9440 = 0;
    pri = fun_0350()
    var_9448 = 60;
    var_9456 = 8;
    pri = fun_0060(var_9448)
    var_9464 = 0;
    var_9472 = 0;
    var_9480 = 0;
    var_9488 = 177;
    pri = float(var_9488)
    var_9496 = pri;
    var_9504 = var_8;
    var_9512 = 40;
    pri = fun_07B8(var_9504, var_9496, var_9488, var_9480, var_9472)
    var_9520 = var_8;
    var_9528 = 8;
    pri = fun_0860(var_9520)
    var_9536 = 1;
    var_9544 = 0;
    var_9552 = 4641240890982006784;
    var_9560 = 0;
    var_9568 = 0;
    OP_PUSH3_C 4665966708467433472, 4665672039351189504, 4602678819172646912
    var_9576 = var_8;
    var_9584 = 72;
    pri = fun_06E8(var_9576, var_9568, var_9560, var_9552, var_9544, var_9536, var_9528, var_9520, var_9512)
    var_9592 = 60;
    var_9600 = 8;
    pri = fun_0060(var_9592)
    var_9608 = 0;
    var_9616 = 4630418178127482061;
    var_9624 = 0;
    OP_PUSH5_C 4666234472534145761, 4636193340962142945, 4665561439476551516, 4666443231309353452, 4637115171510870344
    var_9632 = 4665497304963303342;
    var_9640 = 1;
    pri = EvCameraMove(var_9640, var_9632, var_9624, var_9616, var_9608, var_9600, var_9592, var_9584, var_9576, var_9568)
    var_9648 = 0;
    pri = fun_2568()
    var_9656 = 0;
    var_9664 = 4630418178127482061;
    var_9672 = 2;
    OP_PUSH5_C 4666239139961005670, 4636193340962142945, 4665652512024680202, 4666450180222840996, 4637125023135055217
    var_9680 = 4665669950279096730;
    var_9688 = 180;
    pri = EvCameraMove(var_9688, var_9680, var_9672, var_9664, var_9656, var_9648, var_9640, var_9632, var_9624, var_9616)
    var_9696 = 30;
    var_9704 = 8;
    pri = fun_0060(var_9696)
    var_9712 = 1;
    var_9720 = 0;
    var_9728 = 4641240890982006784;
    var_9736 = 170;
    pri = float(var_9736)
    var_9744 = pri;
    var_9752 = 1;
    OP_PUSH4_C 4666358684362735616, 4665614095088405709, 4607182418800017408, 8802641224559852288
    var_9760 = 72;
    pri = fun_06E8(var_9752, var_9744, var_9736, var_9728, var_9720, var_9712, var_9704, var_9696, var_9688)
    var_9768 = var_8;
    var_9776 = 8;
    pri = fun_0860(var_9768)
    var_9784 = 1;
    var_9792 = 1;
    OP_PUSH4_C -4583890364477210624, 4666490295904580403, 4665779571588385997, 7473960101546429514
    var_9800 = 48;
    pri = fun_05E0(var_9792, var_9784, var_9776, var_9768, var_9760, var_9752)
    var_9808 = 30;
    var_9816 = 8;
    pri = fun_0060(var_9808)
    var_9824 = 0;
    var_9832 = 4630418178127482061;
    var_9840 = 0;
    OP_PUSH5_C 4666093586611720684, 4637609160094997545, 4665633215595612733, 4665910820291393618, 4641047025091797320
    var_9848 = 4665441757635868099;
    var_9856 = 1;
    pri = EvCameraMove(var_9856, var_9848, var_9840, var_9832, var_9824, var_9816, var_9808, var_9800, var_9792, var_9784)
    var_9864 = 0;
    pri = fun_2568()
    var_9872 = 0;
    var_9880 = 4630418178127482061;
    var_9888 = 2;
    OP_PUSH5_C 4666098298019045704, 4637609160094997545, 4665615216590266040, 4665915531698718638, 4641047025091797320
    var_9896 = 4665423769625637683;
    var_9904 = 180;
    pri = EvCameraMove(var_9904, var_9896, var_9888, var_9880, var_9872, var_9864, var_9856, var_9848, var_9840, var_9832)
    var_9912 = var_8;
    var_9920 = 8;
    pri = fun_0860(var_9912)
    var_9928 = 0;
    var_9936 = 0;
    var_9944 = 0;
    var_9952 = 0;
    pri = float(var_9952)
    var_9960 = pri;
    var_9968 = var_8;
    var_9976 = 40;
    pri = fun_07B8(var_9968, var_9960, var_9952, var_9944, var_9936)
    var_9984 = 8802641224559852288;
    var_9992 = 8;
    pri = fun_0860(var_9984)
    var_10000 = 1;
    var_10008 = 0;
    var_10016 = 4641240890982006784;
    var_10024 = 180;
    pri = float(var_10024)
    var_10032 = pri;
    var_10040 = 1;
    OP_PUSH4_C 4666418827648774963, 4665735591123274957, 4607182418800017408, 7473960101546429514
    var_10048 = 72;
    pri = fun_06E8(var_10040, var_10032, var_10024, var_10016, var_10008, var_10000, var_9992, var_9984, var_9976)
    var_10056 = 7473960101546429514;
    var_10064 = 8;
    pri = fun_0860(var_10056)
    var_10072 = 0;
    var_10080 = 3;
    var_10088 = 0;
    var_10096 = 100;
    var_10104 = -1;
    OP_PUSH2_C -2362366485671540280, 7473960101546429514
    var_10112 = 56;
    pri = fun_1F28(var_10104, var_10096, var_10088, var_10080, var_10072, var_10064, var_10056)
    var_10120 = 1;
    var_10128 = 8;
    pri = fun_20C0(var_10120)
    var_10136 = 0;
    pri = fun_2180()
    var_10144 = 1;
    var_10152 = 0;
    var_10160 = 31232;
    var_10168 = 8;
    var_10176 = 32;
    pri = fun_02E0(var_10168, var_10160, var_10152, var_10144)
    var_10184 = 0;
    pri = fun_0350()
    var_10192 = 1;
    var_10200 = var_24;
    var_10208 = 16;
    pri = fun_0638(var_10200, var_10192)
    var_10216 = 0;
    var_10224 = 8802641224559852288;
    var_10232 = 16;
    pri = fun_0670(var_10224, var_10216)
    var_10240 = 0;
    var_10248 = -4893233655299320911;
    var_10256 = 16;
    pri = fun_0670(var_10248, var_10240)
    var_10264 = 0;
    var_10272 = -1349778034395884683;
    var_10280 = 16;
    pri = fun_0670(var_10272, var_10264)
    var_10288 = 0;
    var_10296 = 7473960101546429514;
    var_10304 = 16;
    pri = fun_0670(var_10296, var_10288)
    var_10312 = 0;
    var_10320 = var_32;
    var_10328 = 16;
    pri = fun_0670(var_10320, var_10312)
    var_10336 = 0;
    var_10344 = var_24;
    var_10352 = 16;
    pri = fun_0670(var_10344, var_10336)
    var_10360 = 0;
    var_10368 = var_16;
    var_10376 = 16;
    pri = fun_0670(var_10368, var_10360)
    var_10384 = 0;
    var_10392 = var_8;
    var_10400 = 16;
    pri = fun_0670(var_10392, var_10384)
    var_10408 = 1;
    var_10416 = 3;
    var_10424 = 0;
    var_10432 = 8;
    var_10440 = var_32;
    var_10448 = 40;
    pri = fun_6510(var_10440, var_10432, var_10424, var_10416, var_10408)
    var_10456 = var_32;
    var_10464 = 8;
    pri = fun_0A38(var_10456)
    var_10472 = -4893233655299320911;
    var_10480 = 8;
    pri = fun_11E0(var_10472)
    var_10488 = -1349778034395884683;
    var_10496 = 8;
    pri = fun_11E0(var_10488)
    var_10504 = var_32;
    var_10512 = 8;
    pri = fun_11E0(var_10504)
    var_10520 = 3;
    var_10528 = 1;
    pri = EvCameraEnd(var_10528, var_10520)
    pri = 0;
    return pri;
}
// fun_11F78
fun_11F78() {
    pri = 0;
    return pri;
}
// fun_11F90
fun_11F90() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_12000
    var_8 = 6513469414483989899;
    var_16 = 8;
    pri = fun_0588(var_8)
    OP_JUMP lab_12028
// lab_12000
    var_8 = -8218456393840537451;
    var_16 = 8;
    pri = fun_0588(var_8)
// lab_12028
    var_8 = -4893233655299320911;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 3180;
    var_32 = 8;
    pri = fun_9108(var_24)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_120D8
    var_40 = 7816440442768909182;
    pri = FlagSet(var_40)
    OP_JUMP lab_12100
// lab_120D8
    var_8 = 387792121742723038;
    pri = FlagSet(var_8)
// lab_12100
    pri = 0;
    return pri;
}
// fun_12110
fun_12110() {
    OP_PUSH2_C -1349778034395884683, -2058659448662804840
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 1688300219790732716, 5111258276777894681
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 7694382768399930019, -5133870503641174706
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 387838090113935797, -7465750213703145512
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 7473960101546429514, 5150477429692084351
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 9315;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8140;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_05E0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 15;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 31776;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_12328
fun_12328() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_93B8()
    var_16 = 0;
    pri = fun_9410()
    var_24 = 0;
    pri = fun_9428()
    var_32 = 0;
    pri = fun_9440()
    var_40 = 0;
    pri = fun_11F78()
    var_48 = 0;
    pri = fun_11F90()
    var_56 = 0;
    pri = fun_12110()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_12418
fun_12418() {
    var_8 = 0;
    pri = fun_9410()
    var_16 = 0;
    pri = fun_11F90()
    pri = 0;
    return pri;
}
// fun_12460
fun_12460() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_12518
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2294042971095783049;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_12588
// lab_12518
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2294044070607411260;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_12588
    pri = 0;
    return pri;
}
// fun_12598
fun_12598() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_12650
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -145838383068964052;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_126C0
// lab_12650
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -145837283557335841;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_126C0
    pri = 0;
    return pri;
}
// fun_126D0
fun_126D0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 5064447570533904169;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12758
fun_12758() {
    var_8 = 889;
    var_16 = 888;
    var_24 = 16;
    pri = fun_8D98(var_16, var_8)
    var_32 = pri;
    var_40 = 1;
    var_48 = 16;
    pri = fun_2308(var_40, var_32)
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    var_120 = 1;
    var_128 = 6098968262031973361;
    var_136 = 80;
    pri = fun_89F8(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_12830
fun_12830() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2362366485671540280;
    var_88 = 80;
    pri = fun_89F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
