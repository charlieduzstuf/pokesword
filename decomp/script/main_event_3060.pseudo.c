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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_05E0
    OP_JUMP lab_0610
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0640
// lab_0640
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
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
// fun_0898
fun_0898() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1748(var_8)
    OP_JZER lab_0A78
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1778(var_24)
    OP_JNZ lab_0A78
    pri = 0;
    return pri;
// lab_0A78
    OP_JUMP lab_0A88
// lab_0A88
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AE8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A88
    pri = 0;
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C20
    pri = 0;
    return pri;
// lab_0C20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C60
// lab_0C60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1748(var_8)
    OP_JNZ lab_0CE8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CD8
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D30
    pri = 0;
    return pri;
// lab_0D30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F00(var_8)
    pri = 0;
    return pri;
// lab_0D90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C60
    pri = 0;
    return pri;
// lab_0CD8
    OP_JUMP lab_0D30
}
// fun_0DD8
fun_0DD8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E20
// lab_0E20
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E78
    pri = 0;
    return pri;
// lab_0E78
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EB8
    pri = 0;
    return pri;
// lab_0EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E20
    pri = 0;
    return pri;
}
// fun_0F00
fun_0F00() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F88
    pri = 0;
    return pri;
// lab_0F88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1748(var_8)
    OP_JZER lab_10B8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE0
    OP_ZERO_P_S 64
// lab_10B8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10F0
    OP_CONST_S 64, 1
// lab_10F0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1128
    OP_CONST_S 72, 1
// lab_1128
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
// lab_0FE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1008
    OP_ZERO_P_S 72
// lab_1008
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
    OP_JUMP lab_11C8
// lab_11C8
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1258
fun_1258() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_13E0
fun_13E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12F0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1368(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1330(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13A8(var_24)
    pri = 0;
    return pri;
}
// fun_14A0
fun_14A0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1748(var_8)
    OP_JZER lab_1540
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1540
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_15A8
fun_15A8() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
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
    pri = fun_14A0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1748
fun_1748() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_17A8
fun_17A8() {
    OP_JUMP lab_17C0
// lab_17C0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1850
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1840
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    pri = 0;
    return pri;
// lab_1850
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_18D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    pri = 0;
    return pri;
// lab_18E0
    pri = 0;
    return pri;
// lab_18D0
    OP_JUMP lab_18F0
// lab_18F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17C0
    pri = 0;
    return pri;
// lab_1840
    OP_JUMP lab_18F0
}
// fun_1930
fun_1930() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_17A8(var_40)
    pri = 0;
    return pri;
}
// fun_19B8
fun_19B8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1A18
fun_1A18() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1A48
fun_1A48() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1A80
fun_1A80() {
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
// switch_2098
        case default:
        {
// switch_2098_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_20E0
// lab_20E0
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
            OP_JNZ lab_2188
            var_88 = 0;
            pri = fun_2458()
// lab_2188
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2098_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1C80
                case default:
                {
// switch_1C80_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CF8
// lab_1CF8
                    OP_JUMP lab_20E0
                }
                case 0x0:
                {
// switch_1C80_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1CF8
                }
                case 0x1:
                {
// switch_1C80_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1CF8
                }
                case 0x2:
                {
// switch_1C80_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1CF8
                }
                case 0x3:
                {
// switch_1C80_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CF8
                }
                case 0x4:
                {
// switch_1C80_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1CF8
                }
                case 0x5:
                {
// switch_1C80_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1CF8
                }
            }
        }
        case 0x65:
        {
// switch_2098_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1E38
                case default:
                {
// switch_1E38_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EB0
// lab_1EB0
                    OP_JUMP lab_20E0
                }
                case 0x0:
                {
// switch_1E38_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1EB0
                }
                case 0x1:
                {
// switch_1E38_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1EB0
                }
                case 0x2:
                {
// switch_1E38_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1EB0
                }
                case 0x3:
                {
// switch_1E38_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EB0
                }
                case 0x4:
                {
// switch_1E38_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1EB0
                }
                case 0x5:
                {
// switch_1E38_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1EB0
                }
            }
        }
        case 0x66:
        {
// switch_2098_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1FF0
                case default:
                {
// switch_1FF0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2068
// lab_2068
                    OP_JUMP lab_20E0
                }
                case 0x0:
                {
// switch_1FF0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2068
                }
                case 0x1:
                {
// switch_1FF0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2068
                }
                case 0x2:
                {
// switch_1FF0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2068
                }
                case 0x3:
                {
// switch_1FF0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2068
                }
                case 0x4:
                {
// switch_1FF0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2068
                }
                case 0x5:
                {
// switch_1FF0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2068
                }
            }
        }
    }
}
// fun_21A0
fun_21A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1A80(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BA0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_22B0
    pri = 1;
    return pri;
// lab_22B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_22F8
fun_22F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2348
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2208(var_8)
    arg_2 = pri;
// lab_2348
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A80(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23A8
fun_23A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_21A0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F8
fun_23F8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_23A8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2458
fun_2458() {
    OP_JUMP lab_2470
// lab_2470
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_24B0
    pri = 0;
    return pri;
// lab_24B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2470
    pri = 0;
    return pri;
}
// fun_24F0
fun_24F0() {
    var_8 = 0;
    pri = fun_2458()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_25A0
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_25A0
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_25E0
fun_25E0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2610
// lab_2610
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2650
    OP_JUMP lab_2680
// lab_2650
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2610
// lab_2680
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26C8
fun_26C8() {
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
// fun_2738
fun_2738() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2770
fun_2770() {
    OP_JUMP lab_2788
// lab_2788
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_27D0
    OP_JUMP lab_2800
    OP_JUMP lab_27F0
// lab_27D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2800
    pri = 0;
    return pri;
// lab_27F0
    OP_JUMP lab_2788
}
// fun_2810
fun_2810() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2840
fun_2840() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_28A0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2A30(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_28A0
fun_28A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28F0
fun_28F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2940
fun_2940() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2990
fun_2990() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29E0
fun_29E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A30
fun_2A30() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A80
fun_2A80() {
    OP_JUMP lab_2A98
// lab_2A98
    pri = EvCameraMoveWait_()
    OP_JZER lab_2AD0
    pri = 0;
    return pri;
// lab_2AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A98
    pri = 0;
    return pri;
}
// fun_2B10
fun_2B10() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2B48
fun_2B48() {
    pri = arg_6;
    OP_JNZ lab_2B80
    var_8 = 0;
    pri = fun_11D8()
// lab_2B80
    pri = arg_1;
    switch (pri) {
// switch_40E8
        case default:
        {
// switch_40E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4438
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4438
            pri = 1;
            OP_JUMP lab_4440
// lab_4438
            pri = 0;
// lab_4440
            OP_JZER lab_4598
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA0(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_45F8
// lab_4598
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_45F8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4658
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_46B8
// lab_4658
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_46B8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_46B8
            pri = arg_2;
            OP_JZER lab_46F8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_46F8
            var_8 = 0;
            pri = fun_1218()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_40E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1:
        {
// switch_40E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x2:
        {
// switch_40E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x3:
        {
// switch_40E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x4:
        {
// switch_40E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x5:
        {
// switch_40E8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x6:
        {
// switch_40E8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x7:
        {
// switch_40E8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x8:
        {
// switch_40E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x9:
        {
// switch_40E8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xa:
        {
// switch_40E8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xb:
        {
// switch_40E8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xc:
        {
// switch_40E8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xd:
        {
// switch_40E8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xe:
        {
// switch_40E8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0xf:
        {
// switch_40E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x10:
        {
// switch_40E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x11:
        {
// switch_40E8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x12:
        {
// switch_40E8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x13:
        {
// switch_40E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x14:
        {
// switch_40E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x15:
        {
// switch_40E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x16:
        {
// switch_40E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x17:
        {
// switch_40E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x18:
        {
// switch_40E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x19:
        {
// switch_40E8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1a:
        {
// switch_40E8_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B28(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1b:
        {
// switch_40E8_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B28(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1c:
        {
// switch_40E8_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B28(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1d:
        {
// switch_40E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1e:
        {
// switch_40E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x1f:
        {
// switch_40E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x20:
        {
// switch_40E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x21:
        {
// switch_40E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x22:
        {
// switch_40E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x23:
        {
// switch_40E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x24:
        {
// switch_40E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x25:
        {
// switch_40E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x26:
        {
// switch_40E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x27:
        {
// switch_40E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x28:
        {
// switch_40E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
        case 0x29:
        {
// switch_40E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40E8_case_default
        }
    }
}
// fun_4728
fun_4728() {
    pri = arg_5;
    OP_JNZ lab_4760
    var_8 = 0;
    pri = fun_11D8()
// lab_4760
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_47B0
    OP_CONST_S -8, -1
// lab_47B0
    pri = arg_1;
    switch (pri) {
// switch_6268
        case default:
        {
// switch_6268_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6710
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BA0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6710
            pri = 1;
            OP_JUMP lab_6718
// lab_6710
            pri = 0;
// lab_6718
            OP_JZER lab_6768
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_69C0
// lab_6768
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_67D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_67D0
            pri = 1;
            OP_JUMP lab_67D8
// lab_67D0
            pri = 0;
// lab_67D8
            OP_JZER lab_6960
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA0(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_69C0
// lab_6960
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_69C0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6A30
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6A30
            var_8 = 0;
            pri = fun_1218()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6268_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x1:
        {
// switch_6268_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x2:
        {
// switch_6268_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3:
        {
// switch_6268_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x4:
        {
// switch_6268_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x5:
        {
// switch_6268_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F00(var_40)
            OP_JUMP switch_6268_case_default
        }
        case 0x6:
        {
// switch_6268_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x7:
        {
// switch_6268_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x8:
        {
// switch_6268_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x9:
        {
// switch_6268_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0xa:
        {
// switch_6268_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0xb:
        {
// switch_6268_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0xc:
        {
// switch_6268_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0xd:
        {
// switch_6268_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0xe:
        {
// switch_6268_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0xf:
        {
// switch_6268_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x10:
        {
// switch_6268_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x11:
        {
// switch_6268_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x12:
        {
// switch_6268_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x13:
        {
// switch_6268_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x14:
        {
// switch_6268_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x15:
        {
// switch_6268_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x16:
        {
// switch_6268_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x17:
        {
// switch_6268_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x18:
        {
// switch_6268_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x19:
        {
// switch_6268_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x1a:
        {
// switch_6268_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x1b:
        {
// switch_6268_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x1c:
        {
// switch_6268_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x1d:
        {
// switch_6268_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x1e:
        {
// switch_6268_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x1f:
        {
// switch_6268_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x20:
        {
// switch_6268_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x21:
        {
// switch_6268_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x22:
        {
// switch_6268_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x23:
        {
// switch_6268_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x24:
        {
// switch_6268_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x25:
        {
// switch_6268_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x26:
        {
// switch_6268_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x27:
        {
// switch_6268_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x28:
        {
// switch_6268_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x29:
        {
// switch_6268_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x2a:
        {
// switch_6268_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x2b:
        {
// switch_6268_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x2c:
        {
// switch_6268_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x2d:
        {
// switch_6268_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x2e:
        {
// switch_6268_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x2f:
        {
// switch_6268_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x30:
        {
// switch_6268_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x31:
        {
// switch_6268_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x32:
        {
// switch_6268_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x33:
        {
// switch_6268_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x34:
        {
// switch_6268_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x35:
        {
// switch_6268_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x36:
        {
// switch_6268_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x37:
        {
// switch_6268_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x38:
        {
// switch_6268_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6268_case_default
        }
        case 0x39:
        {
// switch_6268_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3a:
        {
// switch_6268_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3b:
        {
// switch_6268_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3c:
        {
// switch_6268_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3d:
        {
// switch_6268_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
        case 0x3e:
        {
// switch_6268_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            OP_JUMP switch_6268_case_default
        }
    }
}
// fun_6A60
fun_6A60() {
    pri = arg_4;
    OP_JNZ lab_6A98
    var_8 = 0;
    pri = fun_11D8()
// lab_6A98
    pri = arg_1;
    switch (pri) {
// switch_7E70
        case default:
        {
// switch_7E70_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1748(var_264)
            OP_JZER lab_8438
            pri = arg_3;
            switch (pri) {
// switch_83E0
                case default:
                {
// switch_83E0_case_default
                    OP_JUMP lab_86F0
// lab_86F0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8760
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8760
                    var_8 = 0;
                    pri = fun_1218()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_83E0_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_83E0_case_default
                }
                case 0x2:
                {
// switch_83E0_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_83E0_case_default
                }
                case 0x3:
                {
// switch_83E0_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_83E0_case_default
                }
            }
// lab_8438
            pri = arg_1;
            OP_JZER lab_8488
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8488
            pri = 0;
            OP_JUMP lab_8490
// lab_8488
            pri = 1;
// lab_8490
            OP_JZER lab_84F8
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BA0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_84F8
            pri = 1;
            OP_JUMP lab_8500
// lab_84F8
            pri = 0;
// lab_8500
            OP_JZER lab_8550
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_86F0
// lab_8550
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_85B8
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_86F0
// lab_85B8
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA0(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7E70_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1:
        {
// switch_7E70_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2:
        {
// switch_7E70_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3:
        {
// switch_7E70_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x4:
        {
// switch_7E70_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x5:
        {
// switch_7E70_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F00(var_40)
            OP_JUMP switch_7E70_case_default
        }
        case 0x6:
        {
// switch_7E70_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x7:
        {
// switch_7E70_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x8:
        {
// switch_7E70_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x9:
        {
// switch_7E70_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xa:
        {
// switch_7E70_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xb:
        {
// switch_7E70_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xc:
        {
// switch_7E70_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xd:
        {
// switch_7E70_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xe:
        {
// switch_7E70_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0xf:
        {
// switch_7E70_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x10:
        {
// switch_7E70_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x11:
        {
// switch_7E70_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x12:
        {
// switch_7E70_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x13:
        {
// switch_7E70_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x14:
        {
// switch_7E70_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x15:
        {
// switch_7E70_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x16:
        {
// switch_7E70_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x17:
        {
// switch_7E70_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x18:
        {
// switch_7E70_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x19:
        {
// switch_7E70_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1a:
        {
// switch_7E70_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1b:
        {
// switch_7E70_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1c:
        {
// switch_7E70_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1d:
        {
// switch_7E70_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1e:
        {
// switch_7E70_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x1f:
        {
// switch_7E70_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x20:
        {
// switch_7E70_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x21:
        {
// switch_7E70_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x22:
        {
// switch_7E70_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x23:
        {
// switch_7E70_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x24:
        {
// switch_7E70_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x25:
        {
// switch_7E70_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x26:
        {
// switch_7E70_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x27:
        {
// switch_7E70_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x28:
        {
// switch_7E70_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x29:
        {
// switch_7E70_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2a:
        {
// switch_7E70_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2b:
        {
// switch_7E70_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2c:
        {
// switch_7E70_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2d:
        {
// switch_7E70_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2e:
        {
// switch_7E70_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x2f:
        {
// switch_7E70_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x30:
        {
// switch_7E70_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x31:
        {
// switch_7E70_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x32:
        {
// switch_7E70_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x33:
        {
// switch_7E70_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x34:
        {
// switch_7E70_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x35:
        {
// switch_7E70_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x36:
        {
// switch_7E70_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x37:
        {
// switch_7E70_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x38:
        {
// switch_7E70_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x39:
        {
// switch_7E70_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3a:
        {
// switch_7E70_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3b:
        {
// switch_7E70_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3c:
        {
// switch_7E70_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3d:
        {
// switch_7E70_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
        case 0x3e:
        {
// switch_7E70_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            OP_JUMP switch_7E70_case_default
        }
    }
}
// fun_8790
fun_8790() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8890
        case default:
        {
// switch_8890_case_default
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
// switch_8890_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8890_case_default
        }
        case 0x1:
        {
// switch_8890_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8890_case_default
        }
        case 0x2:
        {
// switch_8890_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8890_case_default
        }
        case 0x3:
        {
// switch_8890_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8890_case_default
        }
    }
}
// fun_8950
fun_8950() {
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
    pri = fun_22F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2458()
    pri = 0;
    return pri;
}
// fun_89E8
fun_89E8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8790(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8950(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8A90
fun_8A90() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8AE0
// lab_8AE0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8B58
    OP_JUMP lab_8B88
// lab_8B58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8AE0
// lab_8B88
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C10
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6A60(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1A18(var_56)
// lab_8C10
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8C78
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12B0(var_24, var_16)
// lab_8C78
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8D38
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BD8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0958(var_88, var_80, var_72, var_64, var_56)
// lab_8D38
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8D78
    pri = 0;
    return pri;
// lab_8D78
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8EC0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B28(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8E88
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8EC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A00(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A00(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BD8(var_40)
    pri = 0;
    return pri;
// lab_8E88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12B0(var_16, var_8)
}
// fun_8F48
fun_8F48() {
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
    pri = fun_89E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_24F0(var_112)
    var_128 = 0;
    pri = fun_25B0()
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
    pri = fun_8A90(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_90C0
fun_90C0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9158
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2B48(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9158
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_92B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9218
    var_24 = 33064;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9218
    pri = 1;
    OP_JUMP lab_9220
// lab_92B0
    pri = 0;
    return pri;
// lab_9218
    pri = 0;
// lab_9220
    OP_JZER lab_92B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2B48(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_92C0
fun_92C0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9640(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9328
fun_9328() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9398
    OP_CONST_S -8, 1
// lab_9398
    pri = arg_0;
    OP_JNZ lab_93B8
    OP_ZERO_P_S -8
// lab_93B8
    pri = var_8;
    OP_JZER lab_9440
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9440
    pri = 0;
    return pri;
}
// fun_9458
fun_9458() {
    var_8 = 33168;
    var_16 = 8;
    pri = fun_2738(var_8)
    var_24 = 0;
    pri = fun_2770()
    var_32 = 0;
    var_40 = 8;
    pri = fun_28A0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_29E0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_9570
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_9570
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_90C0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_92C0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2810()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2B10(var_112)
    pri = 0;
    return pri;
}
// fun_9640
fun_9640() {
    var_8 = 33328;
    var_16 = 8;
    pri = fun_2738(var_8)
    var_24 = 0;
    pri = fun_2770()
    pri = arg_3;
    OP_JNZ lab_9760
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9728
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_97D0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9750
// lab_9760
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9970(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9728
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9898(var_16, var_8)
// lab_9750
    OP_JUMP lab_97A8
// lab_97A8
    var_8 = 0;
    pri = fun_2810()
    pri = 0;
    return pri;
}
// fun_97D0
fun_97D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9970(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9880
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9880
    pri = 0;
    return pri;
}
// fun_9898
fun_9898() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_28F0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_23F8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_24F0(var_72)
    var_88 = 0;
    pri = fun_25B0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_28A0(var_96)
    pri = 0;
    return pri;
}
// fun_9970
fun_9970() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_99B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9C78(var_8)
// lab_99B8
    pri = arg_4;
    OP_JNZ lab_9A20
    var_8 = 0;
    var_16 = 8;
    pri = fun_28A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28F0(var_40, var_32, var_24)
// lab_9A20
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9AC0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2940(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_23F8(var_56, var_48, var_40)
    OP_JUMP lab_9BB0
// lab_9AC0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9B78
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9B78
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9B78
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_23F8(var_24, var_16, var_8)
// lab_9BB0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9BF0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_9BF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_24F0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9E80(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9328(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9C78
fun_9C78() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9CD8
    var_16 = 33488;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9CD8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9E18
        case default:
        {
// switch_9E18_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9E08
            var_16 = 34032;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9E08
            OP_JUMP lab_9E50
// lab_9E50
            var_8 = 34248;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9E18_case_0x1
            var_8 = 33704;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9E50
        }
        case 0x2:
        {
// switch_9E18_case_0x2
            var_8 = 33832;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9E50
        }
    }
}
// fun_9E80
fun_9E80() {
    pri = arg_2;
    OP_JNZ lab_9F68
    var_8 = 0;
    var_16 = 8;
    pri = fun_28A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28F0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2990(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9F68
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_23F8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_24F0(var_40)
    var_56 = 0;
    pri = fun_25B0()
    pri = 0;
    return pri;
}
// fun_9FE0
fun_9FE0() {
    pri = 34432;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A068
// lab_A068
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A1E8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A1D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A128
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A128
    pri = 0;
    OP_JUMP lab_A130
// lab_A1E8
    pri = 0;
    return pri;
// lab_A1D8
    OP_JUMP lab_A060
// lab_A060
    OP_INC_P_S -936
// lab_A128
    pri = 1;
// lab_A130
    OP_JZER lab_A1A8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A1A0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A1A8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A1A0
}
// fun_A208
fun_A208() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A250
    pri = arg_0;
    return pri;
// lab_A250
    pri = arg_1;
    return pri;
}
// fun_A260
fun_A260() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A2F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 35352;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_19F0()
// lab_A2F8
    pri = arg_4;
    OP_JZER lab_A330
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A48(var_8)
// lab_A330
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_A388
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_A388
    pri = 0;
    OP_JUMP lab_A390
// lab_A388
    pri = 1;
// lab_A390
    OP_JZER lab_A458
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_A458
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_A430
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1930(var_32, var_24)
    OP_JUMP lab_A458
// lab_A458
    pri = arg_2;
    OP_JZER lab_A530
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_A500
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E8(var_40)
    OP_JUMP lab_A530
// lab_A530
    pri = arg_3;
    OP_JZER lab_A568
    var_8 = 1;
    var_16 = 8;
    pri = fun_19B8(var_8)
// lab_A568
    pri = 0;
    return pri;
// lab_A500
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12B0(var_16, var_8)
// lab_A430
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1930(var_16, var_8)
}
// fun_A578
fun_A578() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9FE0(var_24)
    pri = 0;
    return pri;
}
// fun_A5E0
fun_A5E0() {
    pri = g_mode;
    switch (pri) {
// switch_A6F0
        case default:
        {
// switch_A6F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_A758
// lab_A758
            pri = 0;
            return pri;
        }
        case 0x8002961ece1c8117:
        {
// switch_A6F0_case_0x8002961ece1c8117
            var_8 = 0;
            pri = fun_118B0()
            OP_JUMP lab_A758
        }
        case 0x0:
        {
// switch_A6F0_case_0x0
            var_8 = 0;
            pri = fun_A768()
            OP_JUMP lab_A758
        }
        case 0x16be8917fd1037c7:
        {
// switch_A6F0_case_0x16be8917fd1037c7
            var_8 = 0;
            pri = fun_117C0()
            OP_JUMP lab_A758
        }
        case 0x3402e31b86ee2d6b:
        {
// switch_A6F0_case_0x3402e31b86ee2d6b
            var_8 = 0;
            pri = fun_116D0()
            OP_JUMP lab_A758
        }
        case 0x45db320b171c6a58:
        {
// switch_A6F0_case_0x45db320b171c6a58
            var_8 = 0;
            pri = fun_11828()
            OP_JUMP lab_A758
        }
    }
}
// fun_A768
fun_A768() {
    pri = 0;
    return pri;
}
// fun_A780
fun_A780() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A260(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A7D8
fun_A7D8() {
    var_8 = -7023822302788336185;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = -2226112049068809935;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = -8896755840842652872;
    var_48 = 8;
    pri = fun_0540(var_40)
    var_56 = -853404815738154776;
    var_64 = 8;
    pri = fun_0540(var_56)
    pri = 0;
    return pri;
}
// fun_A890
fun_A890() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_A8C0
fun_A8C0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = 8389417158930239541;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = -6397670319191688058;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = 8541340050249644631;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = -7023822302788336185;
    var_120 = 16;
    pri = fun_07A8(var_112, var_104)
    var_128 = 1;
    var_136 = -2226112049068809935;
    var_144 = 16;
    pri = fun_07A8(var_136, var_128)
    var_152 = 1;
    var_160 = 8389417158930239541;
    var_168 = 16;
    pri = fun_0770(var_160, var_152)
    var_176 = 1;
    var_184 = -6397670319191688058;
    var_192 = 16;
    pri = fun_0770(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C -4582834833314545664, 4657330044631252992, 4657559182854481510, 8802641224559852288
    var_216 = 48;
    pri = fun_0718(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C 4638872982740428390, 4656987876612689101, 4657369187245201818, 8541340050249644631
    var_240 = 48;
    pri = fun_0718(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C 4638813169307877376, 4657457807882400563, 4657383700798688461, -6397670319191688058
    var_264 = 48;
    pri = fun_0718(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4583397783267966976, 4657489473817280512, 4657730266863763456, 8389417158930239541
    var_288 = 48;
    pri = fun_0718(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    var_312 = 0;
    OP_PUSH3_C 4656843840589450445, 4657554125100993741, -8896755840842652872
    var_320 = 48;
    pri = fun_0718(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = -1;
    var_336 = -6397670319191688058;
    var_344 = 16;
    pri = fun_12B0(var_336, var_328)
    var_352 = 1;
    var_360 = 8;
    pri = fun_0060(var_352)
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_368 = 0;
    OP_PUSH5_C 4656779123335039549, 4635027330871119053, 4657486593096815739, 4657149218948948951, 4639327212984095212
    var_376 = 4657737193787018445;
    var_384 = 1;
    pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 0;
    pri = fun_2A80()
    var_400 = 8;
    var_408 = -8896755840842652872;
    var_416 = 16;
    pri = fun_12F0(var_408, var_400)
    var_424 = 35400;
    var_432 = 8;
    var_440 = 16;
    pri = fun_02A8(var_432, var_424)
    var_448 = 0;
    pri = fun_0378()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_456 = 3;
    OP_PUSH5_C 4656839222640613786, 4635148365111104635, 4657527319007508562, 4657209296264290632, 4639387730104088003
    var_464 = 4657777963678176379;
    var_472 = 60;
    pri = EvCameraMove(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 0;
    pri = fun_2840()
    var_488 = 1;
    var_496 = 1103;
    var_504 = 1104;
    var_512 = 16;
    pri = fun_A208(var_504, var_496)
    var_520 = pri;
    var_528 = 1;
    var_536 = 24;
    pri = fun_28F0(var_528, var_520, var_512)
    var_544 = 10;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 0;
    var_568 = 2;
    var_576 = 0;
    var_584 = 763;
    pri = SoundPlayPokeVoice(var_584, var_576, var_568, var_560)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C -402938307369080827, -7023822302788336185
    var_632 = 56;
    pri = fun_22F8(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_24F0(var_640)
    var_656 = 0;
    pri = fun_25B0()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_664 = 0;
    OP_PUSH5_C 4656801223518757847, 4630529360743282770, 4657352100834506179, 4657726352602368573, 4642413937947448443
    var_672 = 4658191885825568932;
    var_680 = 1;
    pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 0;
    pri = fun_2A80()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_696 = 3;
    OP_PUSH5_C 4656804456082943508, 4629720120185239634, 4657355003545203507, 4657931917296297574, 4643463487766858301
    var_704 = 4658378472948802519;
    var_712 = 180;
    pri = EvCameraMove(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 1;
    var_728 = -1;
    var_736 = -1;
    var_744 = 3;
    var_752 = 0;
    var_760 = 2;
    var_768 = 8541340050249644631;
    var_776 = 56;
    pri = fun_2B48(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 10;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 35448;
    pri = SoundPostEvent(var_800)
    var_808 = 3;
    var_816 = 0;
    var_824 = -3320379397383937191;
    var_832 = 24;
    pri = fun_23A8(var_824, var_816, var_808)
    var_840 = 1;
    var_848 = 8;
    pri = fun_24F0(var_840)
    var_856 = 0;
    pri = fun_25B0()
    var_864 = 0;
    var_872 = 1;
    var_880 = 0;
    var_888 = 763;
    pri = SoundPlayPokeVoice(var_888, var_880, var_872, var_864)
    var_896 = 5;
    var_904 = -8896755840842652872;
    var_912 = 16;
    pri = fun_12F0(var_904, var_896)
    var_920 = 1;
    var_928 = -1;
    var_936 = -1;
    var_944 = 3;
    var_952 = 0;
    var_960 = 30;
    var_968 = -8896755840842652872;
    var_976 = 56;
    pri = fun_2B48(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 0;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 100;
    var_1016 = -1;
    OP_PUSH2_C -402941605903965460, -7023822302788336185
    var_1024 = 56;
    pri = fun_22F8(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = -8896755840842652872;
    var_1040 = 8;
    pri = fun_0BD8(var_1032)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_24F0(var_1048)
    var_1064 = 0;
    pri = fun_25B0()
    var_1072 = -8896755840842652872;
    var_1080 = 8;
    pri = fun_1330(var_1072)
    var_1088 = 5;
    var_1096 = 5;
    var_1104 = 8541340050249644631;
    var_1112 = 24;
    pri = fun_13E0(var_1104, var_1096, var_1088)
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_1120 = 3;
    OP_PUSH5_C 4656334326901139046, -4606912202822375178, 4657275684776375747, 4657877227587931996, 4640499204418374205
    var_1128 = 4657709749976789156;
    var_1136 = 1;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 0;
    pri = fun_2A80()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_1152 = 3;
    OP_PUSH5_C 4656523135037860741, 4621019728655113257, 4657306053287534920, 4657971653646525399, 4640949916224832143
    var_1160 = 4657740140478180884;
    var_1168 = 55;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_1208 = 48;
    pri = fun_09A8(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 0;
    OP_PUSH2_C 8802641224559852288, -8896755840842652872
    var_1248 = 48;
    pri = fun_09A8(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1256 = 0;
    var_1264 = 0;
    var_1272 = 0;
    var_1280 = 0;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_1288 = 48;
    pri = fun_09A8(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    OP_PUSH2_C 8798984532142051010, 8541340050249644631
    var_1336 = 56;
    pri = fun_22F8(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 8541340050249644631;
    var_1352 = 8;
    pri = fun_0A00(var_1344)
    var_1360 = -8896755840842652872;
    var_1368 = 8;
    pri = fun_0A00(var_1360)
    var_1376 = 8802641224559852288;
    var_1384 = 8;
    pri = fun_0A00(var_1376)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_24F0(var_1392)
    var_1408 = 0;
    pri = fun_25B0()
    var_1416 = 1;
    var_1424 = -1;
    var_1432 = -1;
    var_1440 = 3;
    var_1448 = 0;
    var_1456 = 1;
    var_1464 = -6397670319191688058;
    var_1472 = 56;
    pri = fun_2B48(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C -6213354347132641569, -6397670319191688058
    var_1520 = 56;
    pri = fun_22F8(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = -6397670319191688058;
    var_1536 = 8;
    pri = fun_0BD8(var_1528)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_24F0(var_1544)
    var_1560 = 0;
    pri = fun_25B0()
    var_1568 = 1;
    var_1576 = 1;
    var_1584 = 70;
    OP_PUSH2_C -6397670319191688058, 8541340050249644631
    var_1592 = 40;
    pri = fun_1258(var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1600 = 7;
    var_1608 = 8541340050249644631;
    var_1616 = 16;
    pri = fun_12F0(var_1608, var_1600)
    var_1624 = 8541340050249644631;
    var_1632 = 8;
    pri = fun_13A8(var_1624)
    var_1640 = 1;
    var_1648 = 1;
    var_1656 = -1;
    var_1664 = -1;
    var_1672 = 0;
    var_1680 = 4;
    var_1688 = 8541340050249644631;
    var_1696 = 56;
    pri = fun_4728(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 0;
    var_1712 = 3;
    var_1720 = 0;
    var_1728 = 100;
    var_1736 = -1;
    OP_PUSH2_C 8798983432630422799, 8541340050249644631
    var_1744 = 56;
    pri = fun_22F8(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1752 = 1;
    var_1760 = 8;
    pri = fun_24F0(var_1752)
    var_1768 = 0;
    pri = fun_25B0()
    var_1776 = 6;
    var_1784 = 8541340050249644631;
    var_1792 = 16;
    pri = fun_12F0(var_1784, var_1776)
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_1800 = 0;
    OP_PUSH5_C 4655160664209185833, 4627797646094305853, 4657026755343847260, 4657313815839627018, 4639964753806344847
    var_1808 = 4657467373633562214;
    var_1816 = 1;
    pri = EvCameraMove(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1824 = 0;
    pri = fun_2A80()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_1832 = 3;
    OP_PUSH5_C 4655124996051980780, 4627290991136226673, 4657021037883382825, 4657295981761024492, 4639901421936584950
    var_1840 = 4657461634182865224;
    var_1848 = 55;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 1;
    var_1864 = 3;
    var_1872 = 0;
    var_1880 = 4;
    var_1888 = 8541340050249644631;
    var_1896 = 40;
    pri = fun_6A60(var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    OP_PUSH2_C 8798982333118794588, 8541340050249644631
    var_1944 = 56;
    pri = fun_22F8(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = 8541340050249644631;
    var_1960 = 8;
    pri = fun_0BD8(var_1952)
    var_1968 = 1;
    var_1976 = 8;
    pri = fun_24F0(var_1968)
    var_1984 = 0;
    pri = fun_25B0()
    var_1992 = 2;
    var_2000 = 6;
    var_2008 = 8389417158930239541;
    var_2016 = 24;
    pri = fun_13E0(var_2008, var_2000, var_1992)
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_2024 = 0;
    OP_PUSH5_C 4657092835992676598, 4630722171102329569, 4657284238976839844, 4657726088719577907, 4640341578431416238
    var_2032 = 4658580893039476081;
    var_2040 = 1;
    pri = EvCameraMove(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2048 = 0;
    pri = fun_2A80()
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_2056 = 3;
    OP_PUSH5_C 4657073198715004518, 4630722171102329569, 4657295629917303603, 4657871114303281562, 4640356004023972659
    var_2064 = 4658497747970183660;
    var_2072 = 250;
    pri = EvCameraMove(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2080 = 1;
    var_2088 = 1;
    var_2096 = -1;
    var_2104 = -1;
    var_2112 = 0;
    var_2120 = 1;
    var_2128 = 8389417158930239541;
    var_2136 = 56;
    pri = fun_4728(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 0;
    var_2152 = 3;
    var_2160 = 0;
    var_2168 = 100;
    var_2176 = -1;
    OP_PUSH2_C 4570141267047599410, 8389417158930239541
    var_2184 = 56;
    pri = fun_22F8(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128)
    var_2192 = 1;
    var_2200 = 8;
    pri = fun_24F0(var_2192)
    var_2208 = 0;
    pri = fun_25B0()
    var_2216 = 8;
    var_2224 = 8541340050249644631;
    var_2232 = 16;
    pri = fun_12F0(var_2224, var_2216)
    var_2240 = 1;
    var_2248 = 3;
    var_2256 = 0;
    var_2264 = 1;
    var_2272 = 8389417158930239541;
    var_2280 = 40;
    pri = fun_6A60(var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2288 = 1;
    var_2296 = 1;
    var_2304 = 70;
    OP_PUSH2_C 8389417158930239541, 8541340050249644631
    var_2312 = 40;
    pri = fun_1258(var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2320 = 1;
    var_2328 = 1;
    var_2336 = -1;
    var_2344 = -1;
    var_2352 = 0;
    var_2360 = 6;
    var_2368 = 8541340050249644631;
    var_2376 = 56;
    pri = fun_4728(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2384 = 0;
    var_2392 = 3;
    var_2400 = 0;
    var_2408 = 100;
    var_2416 = -1;
    OP_PUSH2_C 8798981233607166377, 8541340050249644631
    var_2424 = 56;
    pri = fun_22F8(var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2432 = 8389417158930239541;
    var_2440 = 8;
    pri = fun_0BD8(var_2432)
    var_2448 = 1;
    var_2456 = 8;
    pri = fun_24F0(var_2448)
    var_2464 = 0;
    pri = fun_25B0()
    var_2472 = 6;
    var_2480 = -6397670319191688058;
    var_2488 = 16;
    pri = fun_12F0(var_2480, var_2472)
    var_2496 = 1;
    var_2504 = 1;
    var_2512 = -1;
    var_2520 = -1;
    var_2528 = 0;
    var_2536 = 6;
    var_2544 = -6397670319191688058;
    var_2552 = 56;
    pri = fun_4728(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2560 = 0;
    var_2568 = 3;
    var_2576 = 0;
    var_2584 = 100;
    var_2592 = -1;
    OP_PUSH2_C -6213353247621013358, -6397670319191688058
    var_2600 = 56;
    pri = fun_22F8(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2608 = 1;
    var_2616 = 8;
    pri = fun_24F0(var_2608)
    var_2624 = 0;
    pri = fun_25B0()
    var_2632 = 1;
    var_2640 = 3;
    var_2648 = 0;
    var_2656 = 6;
    var_2664 = 8541340050249644631;
    var_2672 = 40;
    pri = fun_6A60(var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2680 = 8541340050249644631;
    var_2688 = 8;
    pri = fun_0BD8(var_2680)
    var_2696 = 8541340050249644631;
    var_2704 = 8;
    pri = fun_1330(var_2696)
    var_2712 = -6397670319191688058;
    var_2720 = 8;
    pri = fun_1330(var_2712)
    OP_PUSH2_C -4616189618054758400, 4628405632044000870
    var_2728 = 0;
    OP_PUSH5_C 4656590908934596854, 4634470010417231954, 4656540903145765601, 4657460446710307226, 4639052774881802322
    var_2736 = 4657856490798632141;
    var_2744 = 1;
    pri = EvCameraMove(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2752 = 0;
    pri = fun_2A80()
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_2792 = 48;
    pri = fun_09A8(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2800 = 1;
    var_2808 = 3;
    var_2816 = 0;
    var_2824 = 6;
    var_2832 = -6397670319191688058;
    var_2840 = 40;
    pri = fun_6A60(var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2848 = 0;
    var_2856 = 3;
    var_2864 = 0;
    var_2872 = 100;
    var_2880 = -1;
    OP_PUSH2_C 8798980134095538166, 8541340050249644631
    var_2888 = 56;
    pri = fun_22F8(var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832)
    var_2896 = 8541340050249644631;
    var_2904 = 8;
    pri = fun_0A00(var_2896)
    var_2912 = 1;
    var_2920 = 8;
    pri = fun_24F0(var_2912)
    var_2928 = 0;
    var_2936 = 5178284515736492126;
    var_2944 = 0;
    var_2952 = 24;
    pri = fun_25E0(var_2944, var_2936, var_2928)
    var_2960 = 0;
    var_2968 = 5178283416224863915;
    var_2976 = 1;
    var_2984 = 24;
    pri = fun_25E0(var_2976, var_2968, var_2960)
    var_3000 = 0;
    var_3008 = 0;
    var_3016 = 0;
    var_3024 = 1;
    var_3032 = 32;
    pri = fun_26C8(var_3024, var_3016, var_3008, var_3000)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_C728
        case default:
        {
// switch_C728_case_default
            var_8 = 8541340050249644631;
            var_16 = 8;
            pri = fun_1330(var_8)
            var_24 = 1;
            var_32 = 1;
            OP_PUSH4_C -4582834833314545664, 4657457807882400563, 4657383700798688461, -6397670319191688058
            var_40 = 48;
            pri = fun_0718(var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_48 = 0;
            OP_PUSH5_C 4657017541436406497, 4640169526851901850, 4656268576105798042, 4656912560066186445, 4633061228158795121
            var_56 = 4657943462168389222;
            var_64 = 1;
            pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_72 = 0;
            pri = fun_2A80()
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_80 = 3;
            OP_PUSH5_C 4656976639603853230, 4640169526851901850, 4656262638743008051, 4656871746194563400, 4633064042908562227
            var_88 = 4657940515477226783;
            var_96 = 100;
            pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_104 = 1;
            var_112 = 1;
            var_120 = 70;
            OP_PUSH2_C -8896755840842652872, 8541340050249644631
            var_128 = 40;
            pri = fun_1258(var_120, var_112, var_104, var_96, var_88)
            var_136 = 0;
            var_144 = 3;
            var_152 = 0;
            var_160 = 100;
            var_168 = -1;
            OP_PUSH2_C 8798994427746704909, 8541340050249644631
            var_176 = 56;
            pri = fun_22F8(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_184 = 1;
            var_192 = 8;
            pri = fun_24F0(var_184)
            var_200 = 0;
            pri = fun_25B0()
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_208 = 0;
            OP_PUSH5_C 4656833615131312128, -4595397061525142241, 4657023082975010488, 4657648375237726700, 4642096574911207178
            var_216 = 4658120373589298381;
            var_224 = 1;
            pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_232 = 0;
            pri = fun_2A80()
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_240 = 3;
            OP_PUSH5_C 4656963577405715251, 4607497670773933343, 4657110186286162903, 4657749992102365757, 4643032831052490998
            var_248 = 4658228345631145984;
            var_256 = 100;
            pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            var_264 = -1;
            var_272 = 8541340050249644631;
            var_280 = 16;
            pri = fun_12B0(var_272, var_264)
            var_288 = 0;
            var_296 = 3;
            var_304 = 0;
            var_312 = 100;
            var_320 = -1;
            OP_PUSH2_C 8798993328235076698, 8541340050249644631
            var_328 = 56;
            pri = fun_22F8(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
            var_336 = 8541340050249644631;
            var_344 = 8;
            pri = fun_0BD8(var_336)
            var_352 = 1;
            var_360 = 8;
            pri = fun_24F0(var_352)
            var_368 = 0;
            pri = fun_25B0()
            var_376 = 5;
            var_384 = 5;
            var_392 = 8541340050249644631;
            var_400 = 24;
            pri = fun_13E0(var_392, var_384, var_376)
            var_408 = 1;
            var_416 = -1;
            var_424 = -1;
            var_432 = 3;
            var_440 = 0;
            var_448 = 0;
            var_456 = 8541340050249644631;
            var_464 = 56;
            pri = fun_2B48(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
            var_472 = 0;
            var_480 = 3;
            var_488 = 0;
            var_496 = 100;
            var_504 = -1;
            OP_PUSH2_C 8797994971676850335, 8541340050249644631
            var_512 = 56;
            pri = fun_22F8(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_520 = 8541340050249644631;
            var_528 = 8;
            pri = fun_0BD8(var_520)
            var_536 = 1;
            var_544 = 8;
            pri = fun_24F0(var_536)
            var_552 = 0;
            pri = fun_25B0()
            var_560 = 2;
            var_568 = 2;
            var_576 = 8541340050249644631;
            var_584 = 24;
            pri = fun_13E0(var_576, var_568, var_560)
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_592 = 0;
            OP_PUSH5_C 4656517901362512527, 4634733893207898194, 4656562541534600233, 4657463151508911555, 4639052774881802322
            var_600 = 4657841603411192054;
            var_608 = 1;
            pri = EvCameraMove(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536)
            var_616 = 0;
            pri = fun_2A80()
            var_624 = 0;
            var_632 = 3;
            var_640 = 0;
            var_648 = 100;
            var_656 = -1;
            OP_PUSH2_C 8797996071188478546, 8541340050249644631
            var_664 = 56;
            pri = fun_22F8(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
            var_672 = 1;
            var_680 = 8;
            pri = fun_24F0(var_672)
            var_688 = 0;
            pri = fun_25B0()
            var_696 = 8541340050249644631;
            var_704 = 8;
            pri = fun_13A8(var_696)
            var_712 = 1;
            var_720 = 5;
            OP_PUSH2_C 2554447132918045699, 8541340050249644631
            var_728 = 32;
            pri = fun_9458(var_720, var_712, var_704, var_696)
            var_736 = 8541340050249644631;
            var_744 = 8;
            pri = fun_1330(var_736)
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_752 = 0;
            OP_PUSH5_C 4656658990694588744, -4597662935087663022, 4657326790076834775, 4657960680520480195, 4643532273214291968
            var_760 = 4657707133139115049;
            var_768 = 1;
            pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
            var_776 = 0;
            pri = fun_2A80()
            var_784 = 0;
            var_792 = 0;
            var_800 = 0;
            var_808 = 0;
            OP_PUSH2_C -8896755840842652872, 8541340050249644631
            var_816 = 48;
            pri = fun_09A8(var_808, var_800, var_792, var_784, var_776, var_768)
            var_824 = 0;
            var_832 = 0;
            var_840 = 0;
            var_848 = 0;
            OP_PUSH2_C 8541340050249644631, -8896755840842652872
            var_856 = 48;
            pri = fun_09A8(var_848, var_840, var_832, var_824, var_816, var_808)
            var_864 = 0;
            var_872 = 3;
            var_880 = 0;
            var_888 = 100;
            var_896 = -1;
            OP_PUSH2_C 8797997170700106757, 8541340050249644631
            var_904 = 56;
            pri = fun_22F8(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
            var_912 = 8541340050249644631;
            var_920 = 8;
            pri = fun_0A00(var_912)
            var_928 = -8896755840842652872;
            var_936 = 8;
            pri = fun_0A00(var_928)
            var_944 = 1;
            var_952 = 8;
            pri = fun_24F0(var_944)
            var_960 = 0;
            pri = fun_25B0()
            var_968 = 0;
            var_976 = 0;
            var_984 = 0;
            var_992 = 763;
            pri = SoundPlayPokeVoice(var_992, var_984, var_976, var_968)
            var_1000 = 0;
            var_1008 = 3;
            var_1016 = 0;
            var_1024 = 100;
            var_1032 = -1;
            OP_PUSH2_C -402943804927221882, -7023822302788336185
            var_1040 = 56;
            pri = fun_22F8(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
            var_1048 = 1;
            var_1056 = 8;
            pri = fun_24F0(var_1048)
            var_1064 = 0;
            pri = fun_25B0()
            var_1072 = 1;
            var_1080 = 0;
            var_1088 = 4641240890982006784;
            var_1096 = 0;
            var_1104 = 0;
            OP_PUSH4_C 4657262754519633101, 4656560606394135347, 4607182418800017408, 8541340050249644631
            var_1112 = 72;
            pri = fun_0820(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
            var_1120 = 30;
            var_1128 = 8;
            pri = fun_0060(var_1120)
            var_1136 = 1;
            var_1144 = 0;
            var_1152 = 4641240890982006784;
            var_1160 = 0;
            var_1168 = 0;
            OP_PUSH4_C 4657107723380116685, 4656239988803475866, 4607182418800017408, -8896755840842652872
            var_1176 = 72;
            pri = fun_0820(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
            var_1184 = 8541340050249644631;
            var_1192 = 8;
            pri = fun_0A00(var_1184)
            var_1200 = -8896755840842652872;
            var_1208 = 8;
            pri = fun_0A00(var_1200)
            var_1216 = 0;
            var_1224 = 8541340050249644631;
            var_1232 = 16;
            pri = fun_0770(var_1224, var_1216)
            var_1240 = 0;
            var_1248 = -8896755840842652872;
            var_1256 = 16;
            pri = fun_0770(var_1248, var_1240)
            var_1264 = 35712;
            pri = SoundPostEvent(var_1264)
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_1272 = 0;
            OP_PUSH5_C 4653366085310794957, 4634816224638586061, 4658973440680824668, 4656172698691855974, 4639691371235214623
            var_1280 = 4658563960560408330;
            var_1288 = 1;
            pri = EvCameraMove(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
            var_1296 = 0;
            pri = fun_2A80()
            var_1304 = 0;
            var_1312 = 3;
            var_1320 = 0;
            var_1328 = 100;
            var_1336 = -1;
            OP_PUSH2_C -1527643097032430007, -7023822302788336185
            var_1344 = 56;
            pri = fun_22F8(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
            var_1352 = 1;
            var_1360 = 8;
            pri = fun_24F0(var_1352)
            var_1368 = 0;
            pri = fun_25B0()
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_1376 = 3;
            OP_PUSH5_C 4653487427414036316, 4634816224638586061, 4659181424300334776, 4656294084775562445, 4639691371235214623
            var_1384 = 4658771944179918438;
            var_1392 = 10;
            pri = EvCameraMove(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
            var_1400 = 0;
            pri = fun_2A80()
            var_1408 = 0;
            var_1416 = 3;
            var_1424 = 0;
            var_1432 = 100;
            var_1440 = -1;
            OP_PUSH2_C 3008767077681885953, -2226112049068809935
            var_1448 = 56;
            pri = fun_22F8(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
            var_1456 = 1;
            var_1464 = 8;
            pri = fun_24F0(var_1456)
            var_1472 = 0;
            pri = fun_25B0()
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_1480 = 0;
            OP_PUSH5_C 4657093385748490486, 4636552925244890808, 4657770399038177280, 4658506104258554757, 4638861020053918188
            var_1488 = 4657359467562412278;
            var_1496 = 1;
            pri = EvCameraMove(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
            var_1504 = 0;
            pri = fun_2A80()
            var_1512 = 1;
            var_1520 = 0;
            var_1528 = 4;
            OP_PUSH2_C 4607182418800017408, 8389417158930239541
            var_1536 = 0;
            var_1544 = 48;
            pri = fun_15A8(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
            var_1552 = 1;
            var_1560 = 1;
            var_1568 = 70;
            OP_PUSH2_C -2226112049068809935, 8389417158930239541
            var_1576 = 40;
            pri = fun_1258(var_1568, var_1560, var_1552, var_1544, var_1536)
            var_1584 = 10;
            var_1592 = 8;
            pri = fun_0060(var_1584)
            var_1600 = 1;
            var_1608 = 0;
            var_1616 = 1;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_1624 = 0;
            var_1632 = 48;
            pri = fun_15A8(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
            var_1640 = 1;
            var_1648 = 1;
            var_1656 = 70;
            OP_PUSH2_C 8802641224559852288, 8389417158930239541
            var_1664 = 40;
            pri = fun_1258(var_1656, var_1648, var_1640, var_1632, var_1624)
            var_1672 = 6;
            var_1680 = 8;
            pri = fun_0060(var_1672)
            var_1688 = 1;
            var_1696 = 0;
            var_1704 = 2;
            OP_PUSH2_C 4607182418800017408, -6397670319191688058
            var_1712 = 0;
            var_1720 = 48;
            pri = fun_15A8(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
            var_1728 = 1;
            var_1736 = 1;
            var_1744 = 70;
            OP_PUSH2_C -6397670319191688058, 8389417158930239541
            var_1752 = 40;
            pri = fun_1258(var_1744, var_1736, var_1728, var_1720, var_1712)
            var_1760 = 20;
            var_1768 = 8;
            pri = fun_0060(var_1760)
            var_1776 = -1;
            var_1784 = 8802641224559852288;
            var_1792 = 16;
            pri = fun_12B0(var_1784, var_1776)
            var_1800 = -1;
            var_1808 = -6397670319191688058;
            var_1816 = 16;
            pri = fun_12B0(var_1808, var_1800)
            var_1824 = -1;
            var_1832 = 8389417158930239541;
            var_1840 = 16;
            pri = fun_12B0(var_1832, var_1824)
            var_1848 = 6;
            var_1856 = 6;
            var_1864 = 8389417158930239541;
            var_1872 = 24;
            pri = fun_13E0(var_1864, var_1856, var_1848)
            OP_PUSH2_C -4616189618054758400, 4628405632044000870
            var_1880 = 3;
            OP_PUSH5_C 4656268004359751598, 4635101921739947377, 4658435669543679427, 4657922087662345257, 4642635599491608084
            var_1888 = 4658510986090182083;
            var_1896 = 60;
            pri = EvCameraMove(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
            var_1904 = 1;
            var_1912 = 0;
            var_1920 = 50;
            pri = float(var_1920)
            var_1928 = pri;
            OP_PUSH5_C -2226112049068809935, 4656931141812695859, 4658318285682298061, 4611686018427387904, 8802641224559852288
            var_1936 = 64;
            pri = fun_0898(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
            var_1944 = 1;
            var_1952 = 0;
            var_1960 = 50;
            pri = float(var_1960)
            var_1968 = pri;
            OP_PUSH5_C -2226112049068809935, 4657011626063849062, 4658493108031114445, 4611686018427387904, 8389417158930239541
            var_1976 = 64;
            pri = fun_0898(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
            var_1984 = 1;
            var_1992 = 0;
            OP_PUSH5_C 4641240890982006784, -7023822302788336185, 4656783147547597210, 4658117075054415053, 4607182418800017408
            var_2000 = -6397670319191688058;
            var_2008 = 64;
            pri = fun_0898(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
            var_2016 = 0;
            var_2024 = 3;
            var_2032 = 0;
            var_2040 = 100;
            var_2048 = -1;
            OP_PUSH2_C 4570140167535971199, 8389417158930239541
            var_2056 = 56;
            pri = fun_22F8(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
            var_2064 = 1;
            var_2072 = 8;
            pri = fun_24F0(var_2064)
            var_2080 = 0;
            pri = fun_25B0()
            var_2088 = 5;
            var_2096 = 5;
            var_2104 = -7023822302788336185;
            var_2112 = 24;
            pri = fun_13E0(var_2104, var_2096, var_2088)
            var_2120 = 1;
            var_2128 = 1;
            var_2136 = -1;
            var_2144 = -1;
            var_2152 = 0;
            var_2160 = 4;
            var_2168 = -7023822302788336185;
            var_2176 = 56;
            pri = fun_4728(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
            var_2184 = 0;
            var_2192 = 3;
            var_2200 = 0;
            var_2208 = 100;
            var_2216 = -1;
            OP_PUSH2_C -1527646395567314640, -7023822302788336185
            var_2224 = 56;
            pri = fun_22F8(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
            var_2232 = 1;
            var_2240 = 8;
            pri = fun_24F0(var_2232)
            var_2248 = 0;
            pri = fun_25B0()
            var_2256 = 5;
            var_2264 = 5;
            var_2272 = -2226112049068809935;
            var_2280 = 24;
            pri = fun_13E0(var_2272, var_2264, var_2256)
            var_2288 = 1;
            var_2296 = 1;
            var_2304 = -1;
            var_2312 = -1;
            var_2320 = 0;
            var_2328 = 4;
            var_2336 = -2226112049068809935;
            var_2344 = 56;
            pri = fun_4728(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
            var_2352 = 0;
            var_2360 = 3;
            var_2368 = 0;
            var_2376 = 100;
            var_2384 = -1;
            OP_PUSH2_C 3008763779147001320, -2226112049068809935
            var_2392 = 56;
            pri = fun_22F8(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
            var_2400 = 8389417158930239541;
            var_2408 = 8;
            pri = fun_0A00(var_2400)
            var_2416 = -6397670319191688058;
            var_2424 = 8;
            pri = fun_0A00(var_2416)
            var_2432 = 8802641224559852288;
            var_2440 = 8;
            pri = fun_0A00(var_2432)
            var_2448 = 1;
            var_2456 = 8;
            pri = fun_24F0(var_2448)
            var_2464 = 0;
            pri = fun_25B0()
            var_2472 = 1;
            var_2480 = 1;
            var_2488 = -1;
            var_2496 = -1;
            var_2504 = 0;
            var_2512 = 22;
            var_2520 = 8389417158930239541;
            var_2528 = 56;
            pri = fun_4728(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
            var_2536 = 0;
            var_2544 = 3;
            var_2552 = 0;
            var_2560 = 100;
            var_2568 = -1;
            OP_PUSH2_C 4570139068024342988, 8389417158930239541
            var_2576 = 56;
            pri = fun_22F8(var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
            var_2584 = 1;
            var_2592 = 8;
            pri = fun_24F0(var_2584)
            var_2600 = 0;
            pri = fun_25B0()
            var_2608 = 7;
            var_2616 = 6;
            var_2624 = -6397670319191688058;
            var_2632 = 24;
            pri = fun_13E0(var_2624, var_2616, var_2608)
            var_2640 = 1;
            var_2648 = 3;
            var_2656 = 0;
            var_2664 = 4;
            var_2672 = -7023822302788336185;
            var_2680 = 40;
            pri = fun_6A60(var_2672, var_2664, var_2656, var_2648, var_2640)
            var_2688 = 1;
            var_2696 = 3;
            var_2704 = 0;
            var_2712 = 4;
            var_2720 = -2226112049068809935;
            var_2728 = 40;
            pri = fun_6A60(var_2720, var_2712, var_2704, var_2696, var_2688)
            var_2736 = 35872;
            var_2744 = 8389417158930239541;
            var_2752 = 16;
            pri = fun_0DD8(var_2744, var_2736)
            var_2760 = 1;
            var_2768 = 3;
            var_2776 = 0;
            var_2784 = 22;
            var_2792 = 8389417158930239541;
            var_2800 = 40;
            pri = fun_6A60(var_2792, var_2784, var_2776, var_2768, var_2760)
            OP_PUSH2_C -4616189618054758400, 4625816062258262835
            var_2808 = 0;
            OP_PUSH5_C 4656514250983908311, 4634994961248797327, 4658206597291148575, 4654983994680834785, 4642933259279479603
            var_2816 = 4659406846174261412;
            var_2824 = 1;
            pri = EvCameraMove(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752)
            var_2832 = 0;
            pri = fun_2A80()
            OP_PUSH2_C -4616189618054758400, 4625816062258262835
            var_2840 = 3;
            OP_PUSH5_C 4656483948443446804, 4634994961248797327, 4658198834739056476, 4655259488314290340, 4642946277497152471
            var_2848 = 4659483592085880177;
            var_2856 = 280;
            pri = EvCameraMove(var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784)
            var_2864 = 0;
            var_2872 = 3;
            var_2880 = 0;
            var_2888 = 100;
            var_2896 = -1;
            OP_PUSH2_C -6213352148109385147, -6397670319191688058
            var_2904 = 56;
            pri = fun_22F8(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
            var_2912 = -7023822302788336185;
            var_2920 = 8;
            pri = fun_0BD8(var_2912)
            var_2928 = -2226112049068809935;
            var_2936 = 8;
            pri = fun_0BD8(var_2928)
            var_2944 = 8389417158930239541;
            var_2952 = 8;
            pri = fun_0BD8(var_2944)
            var_2960 = 1;
            var_2968 = 8;
            pri = fun_24F0(var_2960)
            var_2976 = 0;
            pri = fun_25B0()
            var_2984 = 0;
            var_2992 = 3;
            var_3000 = 0;
            var_3008 = 100;
            var_3016 = -1;
            OP_PUSH2_C -6213359844690782624, -6397670319191688058
            var_3024 = 56;
            pri = fun_22F8(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
            var_3032 = 1;
            var_3040 = 8;
            pri = fun_24F0(var_3032)
            var_3048 = 0;
            pri = fun_25B0()
            var_3056 = -7023822302788336185;
            var_3064 = 8;
            pri = fun_1448(var_3056)
            var_3072 = -2226112049068809935;
            var_3080 = 8;
            pri = fun_1448(var_3072)
            var_3088 = 1;
            var_3096 = 1;
            OP_PUSH4_C -4596598959675696742, 4655767638608183296, 4658859465305489408, -2226112049068809935
            var_3104 = 48;
            pri = fun_0718(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056)
            var_3112 = 1;
            var_3120 = 1;
            OP_PUSH4_C -4617991057905706598, 4655596114794250240, 4658652757119467520, -7023822302788336185
            var_3128 = 48;
            pri = fun_0718(var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
            OP_PUSH2_C 4617991057905706598, 4628405632044000870
            var_3136 = 0;
            OP_PUSH5_C 4656018195317920891, 4637430423484786278, 4658697793115741225, 4656748117107136266, 4638047557371224392
            var_3144 = 4658717716266436526;
            var_3152 = 1;
            pri = EvCameraMove(var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
            var_3160 = 0;
            pri = fun_2A80()
            OP_PUSH2_C 4617991057905706598, 4628405632044000870
            var_3168 = 3;
            OP_PUSH5_C 4656013181544898232, 4637430423484786278, 4658744962164572815, 4656745632210857492, 4638047557371224392
            var_3176 = 4658764885315268116;
            var_3184 = 120;
            pri = EvCameraMove(var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
            var_3192 = 1;
            var_3200 = 1;
            var_3208 = -1;
            var_3216 = -1;
            var_3224 = 0;
            var_3232 = 9;
            var_3240 = -7023822302788336185;
            var_3248 = 56;
            pri = fun_4728(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192)
            var_3256 = 0;
            var_3264 = 3;
            var_3272 = 0;
            var_3280 = 100;
            var_3288 = -1;
            OP_PUSH2_C -1527645296055686429, -7023822302788336185
            var_3296 = 56;
            pri = fun_22F8(var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240)
            var_3304 = 1;
            var_3312 = 8;
            pri = fun_24F0(var_3304)
            var_3320 = 0;
            pri = fun_25B0()
            var_3328 = 1;
            var_3336 = 1;
            var_3344 = -1;
            var_3352 = -1;
            var_3360 = 0;
            var_3368 = 9;
            var_3376 = -2226112049068809935;
            var_3384 = 56;
            pri = fun_4728(var_3376, var_3368, var_3360, var_3352, var_3344, var_3336, var_3328)
            var_3392 = 0;
            var_3400 = 3;
            var_3408 = 0;
            var_3416 = 100;
            var_3424 = -1;
            OP_PUSH2_C 3008764878658629531, -2226112049068809935
            var_3432 = 56;
            pri = fun_22F8(var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376)
            var_3440 = 1;
            var_3448 = 8;
            pri = fun_24F0(var_3440)
            var_3456 = 0;
            pri = fun_25B0()
            var_3464 = 4;
            var_3472 = 4;
            var_3480 = -6397670319191688058;
            var_3488 = 24;
            pri = fun_13E0(var_3480, var_3472, var_3464)
            OP_PUSH2_C -4631501856787818086, 4628405632044000870
            var_3496 = 0;
            OP_PUSH5_C 4656025056270478213, 4638262885728408044, 4658770075010151219, 4655877369868635341, 4639332490639908536
            var_3504 = 4659138015581270180;
            var_3512 = 1;
            pri = EvCameraMove(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
            var_3520 = 0;
            pri = fun_2A80()
            var_3528 = 0;
            var_3536 = 3;
            var_3544 = 0;
            var_3552 = 100;
            var_3560 = -1;
            OP_PUSH2_C -6213358745179154413, -6397670319191688058
            var_3568 = 56;
            pri = fun_22F8(var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512)
            var_3576 = 1;
            var_3584 = 8;
            pri = fun_24F0(var_3576)
            var_3592 = 0;
            pri = fun_25B0()
            var_3600 = 5;
            var_3608 = 5;
            var_3616 = -7023822302788336185;
            var_3624 = 24;
            pri = fun_13E0(var_3616, var_3608, var_3600)
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_3632 = 0;
            OP_PUSH5_C 4657227130342893158, 4639806072288224215, 4658374140872989082, 4657596434308430561, 4641103671930860339
            var_3640 = 4658350589333922120;
            var_3648 = 1;
            pri = EvCameraMove(var_3648, var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576)
            var_3656 = 0;
            pri = fun_2A80()
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_3664 = 3;
            OP_PUSH5_C 4657224689427079496, 4639806072288224215, 4658335921848807588, 4657594015382849454, 4641103671930860339
            var_3672 = 4658312370309740626;
            var_3680 = 150;
            pri = EvCameraMove(var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608)
            var_3688 = 1;
            var_3696 = 3;
            var_3704 = 0;
            var_3712 = 9;
            var_3720 = -7023822302788336185;
            var_3728 = 40;
            pri = fun_6A60(var_3720, var_3712, var_3704, var_3696, var_3688)
            var_3736 = 1;
            var_3744 = 3;
            var_3752 = 0;
            var_3760 = 9;
            var_3768 = -2226112049068809935;
            var_3776 = 40;
            pri = fun_6A60(var_3768, var_3760, var_3752, var_3744, var_3736)
            var_3784 = -2226112049068809935;
            var_3792 = 8;
            pri = fun_0BD8(var_3784)
            var_3800 = -7023822302788336185;
            var_3808 = 8;
            pri = fun_0BD8(var_3800)
            var_3816 = 0;
            var_3824 = 0;
            var_3832 = 0;
            var_3840 = 0;
            OP_PUSH2_C -6397670319191688058, -2226112049068809935
            var_3848 = 48;
            pri = fun_09A8(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800)
            var_3856 = 0;
            var_3864 = 0;
            var_3872 = 0;
            var_3880 = 0;
            OP_PUSH2_C -6397670319191688058, -7023822302788336185
            var_3888 = 48;
            pri = fun_09A8(var_3880, var_3872, var_3864, var_3856, var_3848, var_3840)
            var_3896 = 0;
            var_3904 = 3;
            var_3912 = 0;
            var_3920 = 100;
            var_3928 = -1;
            OP_PUSH2_C -1527639798497545374, -7023822302788336185
            var_3936 = 56;
            pri = fun_22F8(var_3928, var_3920, var_3912, var_3904, var_3896, var_3888, var_3880)
            var_3944 = -7023822302788336185;
            var_3952 = 8;
            pri = fun_0A00(var_3944)
            var_3960 = -2226112049068809935;
            var_3968 = 8;
            pri = fun_0A00(var_3960)
            var_3976 = 1;
            var_3984 = 8;
            pri = fun_24F0(var_3976)
            var_3992 = 0;
            pri = fun_25B0()
            var_4000 = 5;
            var_4008 = 5;
            var_4016 = -2226112049068809935;
            var_4024 = 24;
            pri = fun_13E0(var_4016, var_4008, var_4000)
            var_4032 = 1;
            var_4040 = -1;
            var_4048 = -1;
            var_4056 = 3;
            var_4064 = 0;
            var_4072 = 0;
            var_4080 = -2226112049068809935;
            var_4088 = 56;
            pri = fun_2B48(var_4080, var_4072, var_4064, var_4056, var_4048, var_4040, var_4032)
            var_4096 = 0;
            var_4104 = 3;
            var_4112 = 0;
            var_4120 = 100;
            var_4128 = -1;
            OP_PUSH2_C 3008770376216770586, -2226112049068809935
            var_4136 = 56;
            pri = fun_22F8(var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080)
            var_4144 = -2226112049068809935;
            var_4152 = 8;
            pri = fun_0BD8(var_4144)
            var_4160 = 1;
            var_4168 = 8;
            pri = fun_24F0(var_4160)
            var_4176 = 0;
            pri = fun_25B0()
            var_4184 = -6397670319191688058;
            var_4192 = 8;
            pri = fun_1448(var_4184)
            var_4200 = 1;
            var_4208 = 1;
            var_4216 = -1;
            var_4224 = -1;
            var_4232 = 0;
            var_4240 = 2;
            var_4248 = -6397670319191688058;
            var_4256 = 56;
            pri = fun_4728(var_4248, var_4240, var_4232, var_4224, var_4216, var_4208, var_4200)
            var_4264 = 0;
            var_4272 = 3;
            var_4280 = 0;
            var_4288 = 100;
            var_4296 = -1;
            OP_PUSH2_C -6213357645667526202, -6397670319191688058
            var_4304 = 56;
            pri = fun_22F8(var_4296, var_4288, var_4280, var_4272, var_4264, var_4256, var_4248)
            var_4312 = 1;
            var_4320 = 8;
            pri = fun_24F0(var_4312)
            var_4328 = 0;
            pri = fun_25B0()
            var_4336 = 1;
            var_4344 = 3;
            var_4352 = 0;
            var_4360 = 2;
            var_4368 = -6397670319191688058;
            var_4376 = 40;
            pri = fun_6A60(var_4368, var_4360, var_4352, var_4344, var_4336)
            var_4384 = -7023822302788336185;
            var_4392 = 8;
            pri = fun_1448(var_4384)
            var_4400 = -2226112049068809935;
            var_4408 = 8;
            pri = fun_1448(var_4400)
            var_4416 = 0;
            var_4424 = 0;
            var_4432 = 0;
            var_4440 = 0;
            OP_PUSH2_C -2226112049068809935, -7023822302788336185
            var_4448 = 48;
            pri = fun_09A8(var_4440, var_4432, var_4424, var_4416, var_4408, var_4400)
            var_4456 = 0;
            var_4464 = 0;
            var_4472 = 0;
            var_4480 = 0;
            OP_PUSH2_C -7023822302788336185, -2226112049068809935
            var_4488 = 48;
            pri = fun_09A8(var_4480, var_4472, var_4464, var_4456, var_4448, var_4440)
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_4496 = 0;
            OP_PUSH5_C 4655925704399792374, 4638950388359023821, 4658705313775275213, 4656632690376452342, 4638887056489263923
            var_4504 = 4658569128265058877;
            var_4512 = 1;
            pri = EvCameraMove(var_4512, var_4504, var_4496, var_4488, var_4480, var_4472, var_4464, var_4456, var_4448, var_4440)
            var_4520 = 0;
            pri = fun_2A80()
            var_4528 = 0;
            var_4536 = 3;
            var_4544 = 0;
            var_4552 = 100;
            var_4560 = -1;
            OP_PUSH2_C -1527638698985917163, -7023822302788336185
            var_4568 = 56;
            pri = fun_22F8(var_4560, var_4552, var_4544, var_4536, var_4528, var_4520, var_4512)
            var_4576 = -6397670319191688058;
            var_4584 = 8;
            pri = fun_0BD8(var_4576)
            var_4592 = -7023822302788336185;
            var_4600 = 8;
            pri = fun_0A00(var_4592)
            var_4608 = -2226112049068809935;
            var_4616 = 8;
            pri = fun_0A00(var_4608)
            var_4624 = 1;
            var_4632 = 8;
            pri = fun_24F0(var_4624)
            var_4640 = 0;
            pri = fun_25B0()
            var_4648 = 1;
            var_4656 = -1;
            var_4664 = -1;
            var_4672 = 3;
            var_4680 = 0;
            var_4688 = 0;
            var_4696 = -2226112049068809935;
            var_4704 = 56;
            pri = fun_2B48(var_4696, var_4688, var_4680, var_4672, var_4664, var_4656, var_4648)
            var_4712 = 0;
            var_4720 = 3;
            var_4728 = 0;
            var_4736 = 100;
            var_4744 = -1;
            OP_PUSH2_C 3008771475728398797, -2226112049068809935
            var_4752 = 56;
            pri = fun_22F8(var_4744, var_4736, var_4728, var_4720, var_4712, var_4704, var_4696)
            var_4760 = -2226112049068809935;
            var_4768 = 8;
            pri = fun_0BD8(var_4760)
            var_4776 = 1;
            var_4784 = 8;
            pri = fun_24F0(var_4776)
            var_4792 = 0;
            pri = fun_25B0()
            var_4800 = 1;
            var_4808 = -1;
            var_4816 = -1;
            var_4824 = 3;
            var_4832 = 0;
            var_4840 = 0;
            var_4848 = -7023822302788336185;
            var_4856 = 56;
            pri = fun_2B48(var_4848, var_4840, var_4832, var_4824, var_4816, var_4808, var_4800)
            var_4864 = 0;
            var_4872 = 3;
            var_4880 = 0;
            var_4888 = 100;
            var_4896 = -1;
            OP_PUSH2_C -1527641997520801796, -7023822302788336185
            var_4904 = 56;
            pri = fun_22F8(var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848)
            var_4912 = -7023822302788336185;
            var_4920 = 8;
            pri = fun_0BD8(var_4912)
            var_4928 = 1;
            var_4936 = 8;
            pri = fun_24F0(var_4928)
            var_4944 = 0;
            pri = fun_25B0()
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_4952 = 0;
            OP_PUSH5_C 4657272760075445862, 4640128361136557916, 4658349665744154788, 4657643119572145930, 4641362277065713254
            var_4960 = 4658330248368808264;
            var_4968 = 1;
            pri = EvCameraMove(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896)
            var_4976 = 0;
            pri = fun_2A80()
            var_4984 = 1;
            var_4992 = -1;
            var_5000 = -1;
            var_5008 = 3;
            var_5016 = 0;
            var_5024 = 1;
            var_5032 = 8389417158930239541;
            var_5040 = 56;
            pri = fun_2B48(var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984)
            var_5048 = 0;
            var_5056 = 3;
            var_5064 = 0;
            var_5072 = 100;
            var_5080 = -1;
            OP_PUSH2_C 4570137968512714777, 8389417158930239541
            var_5088 = 56;
            pri = fun_22F8(var_5080, var_5072, var_5064, var_5056, var_5048, var_5040, var_5032)
            var_5096 = 8389417158930239541;
            var_5104 = 8;
            pri = fun_0BD8(var_5096)
            var_5112 = 1;
            var_5120 = 8;
            pri = fun_24F0(var_5112)
            var_5128 = 0;
            pri = fun_25B0()
            var_5136 = 0;
            var_5144 = 0;
            var_5152 = 0;
            var_5160 = 0;
            OP_PUSH2_C 8802641224559852288, -7023822302788336185
            var_5168 = 48;
            pri = fun_09A8(var_5160, var_5152, var_5144, var_5136, var_5128, var_5120)
            var_5176 = 0;
            var_5184 = 0;
            var_5192 = 0;
            var_5200 = 0;
            OP_PUSH2_C 8802641224559852288, -2226112049068809935
            var_5208 = 48;
            pri = fun_09A8(var_5200, var_5192, var_5184, var_5176, var_5168, var_5160)
            var_5216 = -7023822302788336185;
            var_5224 = 8;
            pri = fun_0A00(var_5216)
            var_5232 = -2226112049068809935;
            var_5240 = 8;
            pri = fun_0A00(var_5232)
            var_5248 = 1;
            var_5256 = 1;
            var_5264 = -1;
            var_5272 = -1;
            var_5280 = 0;
            var_5288 = 7;
            var_5296 = -2226112049068809935;
            var_5304 = 56;
            pri = fun_4728(var_5296, var_5288, var_5280, var_5272, var_5264, var_5256, var_5248)
            var_5312 = 0;
            var_5320 = 3;
            var_5328 = 0;
            var_5336 = 100;
            var_5344 = -1;
            OP_PUSH2_C 3008768177193514164, -2226112049068809935
            var_5352 = 56;
            pri = fun_22F8(var_5344, var_5336, var_5328, var_5320, var_5312, var_5304, var_5296)
            var_5360 = 1;
            var_5368 = 8;
            pri = fun_24F0(var_5360)
            var_5376 = 0;
            pri = fun_25B0()
            var_5384 = 1;
            var_5392 = 1;
            var_5400 = -1;
            var_5408 = -1;
            var_5416 = 0;
            var_5424 = 7;
            var_5432 = -7023822302788336185;
            var_5440 = 56;
            pri = fun_4728(var_5432, var_5424, var_5416, var_5408, var_5400, var_5392, var_5384)
            var_5448 = 0;
            var_5456 = 3;
            var_5464 = 0;
            var_5472 = 100;
            var_5480 = -1;
            OP_PUSH2_C -1527640898009173585, -7023822302788336185
            var_5488 = 56;
            pri = fun_22F8(var_5480, var_5472, var_5464, var_5456, var_5448, var_5440, var_5432)
            var_5496 = 1;
            var_5504 = 8;
            pri = fun_24F0(var_5496)
            var_5512 = 0;
            pri = fun_25B0()
            var_5520 = 1;
            var_5528 = 3;
            var_5536 = 0;
            var_5544 = 7;
            var_5552 = -2226112049068809935;
            var_5560 = 40;
            pri = fun_6A60(var_5552, var_5544, var_5536, var_5528, var_5520)
            var_5568 = 1;
            var_5576 = 3;
            var_5584 = 0;
            var_5592 = 7;
            var_5600 = -7023822302788336185;
            var_5608 = 40;
            pri = fun_6A60(var_5600, var_5592, var_5584, var_5576, var_5568)
            var_5616 = 0;
            var_5624 = 3;
            var_5632 = 0;
            var_5640 = 100;
            var_5648 = -1;
            OP_PUSH2_C -7049905988602197689, -7023822302788336185
            var_5656 = 56;
            pri = fun_22F8(var_5648, var_5640, var_5632, var_5624, var_5616, var_5608, var_5600)
            var_5664 = -7023822302788336185;
            var_5672 = 8;
            pri = fun_0BD8(var_5664)
            var_5680 = -2226112049068809935;
            var_5688 = 8;
            pri = fun_0BD8(var_5680)
            var_5696 = 1;
            var_5704 = 8;
            pri = fun_24F0(var_5696)
            var_5712 = 0;
            pri = fun_25B0()
            var_5720 = 1;
            var_5728 = 0;
            var_5736 = 4641240890982006784;
            var_5744 = 0;
            var_5752 = 0;
            OP_PUSH4_C 4655596114794250240, 4659145118426385613, 4611686018427387904, -7023822302788336185
            var_5760 = 72;
            pri = fun_0820(var_5752, var_5744, var_5736, var_5728, var_5720, var_5712, var_5704, var_5696, var_5688)
            var_5768 = 1;
            var_5776 = 0;
            var_5784 = 4641240890982006784;
            var_5792 = 0;
            var_5800 = 0;
            OP_PUSH4_C 4655767638608183296, 4659171286803126682, 4611686018427387904, -2226112049068809935
            var_5808 = 72;
            pri = fun_0820(var_5800, var_5792, var_5784, var_5776, var_5768, var_5760, var_5752, var_5744, var_5736)
            var_5816 = 0;
            var_5824 = 3;
            var_5832 = 0;
            var_5840 = 100;
            var_5848 = -1;
            OP_PUSH2_C -3343099731876577179, -7023822302788336185
            var_5856 = 56;
            pri = fun_22F8(var_5848, var_5840, var_5832, var_5824, var_5816, var_5808, var_5800)
            var_5864 = -7023822302788336185;
            var_5872 = 8;
            pri = fun_0A00(var_5864)
            var_5880 = -2226112049068809935;
            var_5888 = 8;
            pri = fun_0A00(var_5880)
            var_5896 = 1;
            var_5904 = 8;
            pri = fun_24F0(var_5896)
            var_5912 = 0;
            pri = fun_25B0()
            var_5920 = 36048;
            pri = SoundPostEvent(var_5920)
            var_5928 = 0;
            var_5936 = -7023822302788336185;
            var_5944 = 16;
            pri = fun_0770(var_5936, var_5928)
            var_5952 = 0;
            var_5960 = -2226112049068809935;
            var_5968 = 16;
            pri = fun_0770(var_5960, var_5952)
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_5976 = 3;
            OP_PUSH5_C 4656930416135021527, 4638248108292130734, 4658666215141791498, 4657304096156837478, 4639388785635250668
            var_5984 = 4658685544556207800;
            var_5992 = 45;
            pri = EvCameraMove(var_5992, var_5984, var_5976, var_5968, var_5960, var_5952, var_5944, var_5936, var_5928, var_5920)
            var_6000 = 1;
            var_6008 = 0;
            var_6016 = 50;
            pri = float(var_6016)
            var_6024 = pri;
            OP_PUSH5_C -7023822302788336185, 4656756319463879475, 4658659134286908621, 4611686018427387904, 8389417158930239541
            var_6032 = 64;
            pri = fun_0898(var_6024, var_6016, var_6008, var_6000, var_5992, var_5984, var_5976, var_5968)
            var_6040 = 0;
            var_6048 = 3;
            var_6056 = 0;
            var_6064 = 100;
            var_6072 = -1;
            OP_PUSH2_C 4570136869001086566, 8389417158930239541
            var_6080 = 56;
            pri = fun_22F8(var_6072, var_6064, var_6056, var_6048, var_6040, var_6032, var_6024)
            var_6088 = 8389417158930239541;
            var_6096 = 8;
            pri = fun_0A00(var_6088)
            var_6104 = 1;
            var_6112 = 8;
            pri = fun_24F0(var_6104)
            var_6120 = 0;
            pri = fun_25B0()
            var_6128 = 1;
            var_6136 = 1;
            OP_PUSH4_C 4636420632005836800, 4656931141812695859, 4658318285682298061, 8802641224559852288
            var_6144 = 48;
            pri = fun_0718(var_6136, var_6128, var_6120, var_6112, var_6104, var_6096)
            var_6152 = 1;
            var_6160 = 1;
            OP_PUSH4_C 4635470653959438336, 4656783147547597210, 4658117075054415053, -6397670319191688058
            var_6168 = 48;
            pri = fun_0718(var_6160, var_6152, var_6144, var_6136, var_6128, var_6120)
            OP_PUSH2_C 4596373779694328218, 4628405632044000870
            var_6176 = 0;
            OP_PUSH5_C 4656858310162471977, 4638644988009292759, 4658685346644114801, 4656965226673156915, 4639793054070551347
            var_6184 = 4659041610401746780;
            var_6192 = 1;
            pri = EvCameraMove(var_6192, var_6184, var_6176, var_6168, var_6160, var_6152, var_6144, var_6136, var_6128, var_6120)
            var_6200 = 0;
            pri = fun_2A80()
            var_6208 = 0;
            var_6216 = 0;
            var_6224 = 0;
            var_6232 = 0;
            OP_PUSH2_C 8389417158930239541, -6397670319191688058
            var_6240 = 48;
            pri = fun_09A8(var_6232, var_6224, var_6216, var_6208, var_6200, var_6192)
            var_6248 = 0;
            var_6256 = 3;
            var_6264 = 0;
            var_6272 = 100;
            var_6280 = -1;
            OP_PUSH2_C -6213356546155897991, -6397670319191688058
            var_6288 = 56;
            pri = fun_22F8(var_6280, var_6272, var_6264, var_6256, var_6248, var_6240, var_6232)
            var_6296 = -6397670319191688058;
            var_6304 = 8;
            pri = fun_0A00(var_6296)
            var_6312 = 1;
            var_6320 = 8;
            pri = fun_24F0(var_6312)
            var_6328 = 0;
            pri = fun_25B0()
            var_6336 = 3;
            var_6344 = 3;
            var_6352 = 8389417158930239541;
            var_6360 = 24;
            pri = fun_13E0(var_6352, var_6344, var_6336)
            var_6368 = 0;
            var_6376 = 0;
            var_6384 = 0;
            var_6392 = 0;
            OP_PUSH2_C -6397670319191688058, 8389417158930239541
            var_6400 = 48;
            pri = fun_09A8(var_6392, var_6384, var_6376, var_6368, var_6360, var_6352)
            var_6408 = 0;
            var_6416 = 3;
            var_6424 = 0;
            var_6432 = 100;
            var_6440 = -1;
            OP_PUSH2_C 4570135769489458355, 8389417158930239541
            var_6448 = 56;
            pri = fun_22F8(var_6440, var_6432, var_6424, var_6416, var_6408, var_6400, var_6392)
            var_6456 = 8389417158930239541;
            var_6464 = 8;
            pri = fun_0A00(var_6456)
            var_6472 = 1;
            var_6480 = 8;
            pri = fun_24F0(var_6472)
            var_6488 = 0;
            pri = fun_25B0()
            var_6496 = 8;
            var_6504 = -6397670319191688058;
            var_6512 = 16;
            pri = fun_12F0(var_6504, var_6496)
            var_6520 = 1;
            var_6528 = -1;
            var_6536 = -1;
            var_6544 = 3;
            var_6552 = 0;
            var_6560 = 1;
            var_6568 = -6397670319191688058;
            var_6576 = 56;
            pri = fun_2B48(var_6568, var_6560, var_6552, var_6544, var_6536, var_6528, var_6520)
            var_6584 = 0;
            var_6592 = 3;
            var_6600 = 0;
            var_6608 = 100;
            var_6616 = -1;
            OP_PUSH2_C -6213346650551244092, -6397670319191688058
            var_6624 = 56;
            pri = fun_22F8(var_6616, var_6608, var_6600, var_6592, var_6584, var_6576, var_6568)
            var_6632 = -6397670319191688058;
            var_6640 = 8;
            pri = fun_0BD8(var_6632)
            var_6648 = 1;
            var_6656 = 8;
            pri = fun_24F0(var_6648)
            var_6664 = 0;
            pri = fun_25B0()
            var_6672 = 6;
            var_6680 = 6;
            var_6688 = 8389417158930239541;
            var_6696 = 24;
            pri = fun_13E0(var_6688, var_6680, var_6672)
            OP_PUSH2_C 4615514078110652826, 4628405632044000870
            var_6704 = 0;
            OP_PUSH5_C 4656674955603424051, 4637206650878301307, 4658635912601329992, 4656961488333622477, 4640830641203451003
            var_6712 = 4658431557370191544;
            var_6720 = 1;
            pri = EvCameraMove(var_6720, var_6712, var_6704, var_6696, var_6688, var_6680, var_6672, var_6664, var_6656, var_6648)
            var_6728 = 0;
            pri = fun_2A80()
            var_6736 = 1;
            var_6744 = 1;
            var_6752 = -1;
            var_6760 = -1;
            var_6768 = 0;
            var_6776 = 1;
            var_6784 = 8389417158930239541;
            var_6792 = 56;
            pri = fun_4728(var_6784, var_6776, var_6768, var_6760, var_6752, var_6744, var_6736)
            var_6800 = 0;
            var_6808 = 3;
            var_6816 = 0;
            var_6824 = 100;
            var_6832 = -1;
            OP_PUSH2_C 4570134669977830144, 8389417158930239541
            var_6840 = 56;
            pri = fun_22F8(var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784)
            var_6848 = 1;
            var_6856 = 8;
            pri = fun_24F0(var_6848)
            var_6864 = 0;
            pri = fun_25B0()
            var_6872 = 8;
            var_6880 = 8389417158930239541;
            var_6888 = 16;
            pri = fun_12F0(var_6880, var_6872)
            OP_PUSH2_C 4615514078110652826, 4628405632044000870
            var_6896 = 0;
            OP_PUSH5_C 4657076695161980846, 4640683218684398797, 4658088883576278876, 4657339698343344865, 4643383795164077097
            var_6904 = 4657884528345140429;
            var_6912 = 1;
            pri = EvCameraMove(var_6912, var_6904, var_6896, var_6888, var_6880, var_6872, var_6864, var_6856, var_6848, var_6840)
            var_6920 = 0;
            pri = fun_2A80()
            var_6928 = 1;
            var_6936 = 3;
            var_6944 = 0;
            var_6952 = 1;
            var_6960 = 8389417158930239541;
            var_6968 = 40;
            pri = fun_6A60(var_6960, var_6952, var_6944, var_6936, var_6928)
            var_6976 = 0;
            var_6984 = 3;
            var_6992 = 0;
            var_7000 = 100;
            var_7008 = -1;
            OP_PUSH2_C 4570151162652253309, 8389417158930239541
            var_7016 = 56;
            pri = fun_22F8(var_7008, var_7000, var_6992, var_6984, var_6976, var_6968, var_6960)
            var_7024 = 8389417158930239541;
            var_7032 = 8;
            pri = fun_0BD8(var_7024)
            var_7040 = 1;
            var_7048 = 8;
            pri = fun_24F0(var_7040)
            var_7056 = 0;
            pri = fun_25B0()
            var_7064 = 5;
            var_7072 = -6397670319191688058;
            var_7080 = 16;
            pri = fun_12F0(var_7072, var_7064)
            var_7088 = 8389417158930239541;
            var_7096 = 8;
            pri = fun_1448(var_7088)
            var_7104 = 0;
            var_7112 = 8802641224559852288;
            var_7120 = 16;
            pri = fun_0770(var_7112, var_7104)
            OP_PUSH2_C -4626998257160447590, 4628405632044000870
            var_7128 = 0;
            OP_PUSH5_C 4656758826350390804, 4638991554074367754, 4658119559950693827, 4656859739527588086, 4637761860269863076
            var_7136 = 4658481145344604242;
            var_7144 = 1;
            pri = EvCameraMove(var_7144, var_7136, var_7128, var_7120, var_7112, var_7104, var_7096, var_7088, var_7080, var_7072)
            var_7152 = 0;
            pri = fun_2A80()
            OP_PUSH2_C -4626998257160447590, 4628405632044000870
            var_7160 = 3;
            OP_PUSH5_C 4656775472956435333, 4638991554074367754, 4658114920011624612, 4656876276182469837, 4637762563957304852
            var_7168 = 4658476549386000138;
            var_7176 = 60;
            pri = EvCameraMove(var_7176, var_7168, var_7160, var_7152, var_7144, var_7136, var_7128, var_7120, var_7112, var_7104)
            var_7184 = 1;
            var_7192 = -1;
            var_7200 = -1;
            var_7208 = 3;
            var_7216 = 0;
            var_7224 = 0;
            var_7232 = -6397670319191688058;
            var_7240 = 56;
            pri = fun_2B48(var_7232, var_7224, var_7216, var_7208, var_7200, var_7192, var_7184)
            var_7248 = 0;
            var_7256 = 3;
            var_7264 = 0;
            var_7272 = 100;
            var_7280 = -1;
            OP_PUSH2_C -6213345551039615881, -6397670319191688058
            var_7288 = 56;
            pri = fun_22F8(var_7280, var_7272, var_7264, var_7256, var_7248, var_7240, var_7232)
            var_7296 = -6397670319191688058;
            var_7304 = 8;
            pri = fun_0BD8(var_7296)
            var_7312 = 1;
            var_7320 = 8;
            pri = fun_24F0(var_7312)
            var_7328 = 0;
            pri = fun_25B0()
            var_7336 = -6397670319191688058;
            var_7344 = 8;
            pri = fun_1330(var_7336)
            var_7352 = 1;
            var_7360 = 8802641224559852288;
            var_7368 = 16;
            pri = fun_0770(var_7360, var_7352)
            OP_PUSH2_C -4626998257160447590, 4628405632044000870
            var_7376 = 0;
            OP_PUSH5_C 4657360457122877276, 4641823896027518730, 4658527368813435945, 4657683757521908531, 4643953957913776620
            var_7384 = 4658607369279472927;
            var_7392 = 1;
            pri = EvCameraMove(var_7392, var_7384, var_7376, var_7368, var_7360, var_7352, var_7344, var_7336, var_7328, var_7320)
            var_7400 = 0;
            pri = fun_2A80()
            OP_PUSH2_C -4626998257160447590, 4628405632044000870
            var_7408 = 3;
            OP_PUSH5_C 4657125579448951767, 4639878903938448097, 4658340737709737247, 4657470980031701320, 4642092352786556518
            var_7416 = 4658409325245077914;
            var_7424 = 100;
            pri = EvCameraMove(var_7424, var_7416, var_7408, var_7400, var_7392, var_7384, var_7376, var_7368, var_7360, var_7352)
            var_7432 = 1;
            var_7440 = 0;
            OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4656434382459266662, 4658445829031120077, 4607182418800017408
            var_7448 = 8389417158930239541;
            var_7456 = 64;
            pri = fun_0898(var_7448, var_7440, var_7432, var_7424, var_7416, var_7408, var_7400, var_7392)
            var_7464 = 0;
            var_7472 = 0;
            var_7480 = 0;
            var_7488 = 0;
            OP_PUSH2_C -6397670319191688058, 8802641224559852288
            var_7496 = 48;
            pri = fun_09A8(var_7488, var_7480, var_7472, var_7464, var_7456, var_7448)
            var_7504 = 0;
            var_7512 = 0;
            var_7520 = 0;
            var_7528 = 0;
            OP_PUSH2_C 8802641224559852288, -6397670319191688058
            var_7536 = 48;
            pri = fun_09A8(var_7528, var_7520, var_7512, var_7504, var_7496, var_7488)
            var_7544 = 0;
            var_7552 = 3;
            var_7560 = 0;
            var_7568 = 100;
            var_7576 = -1;
            OP_PUSH2_C -6212363687155812683, -6397670319191688058
            var_7584 = 56;
            pri = fun_22F8(var_7576, var_7568, var_7560, var_7552, var_7544, var_7536, var_7528)
            var_7592 = -6397670319191688058;
            var_7600 = 8;
            pri = fun_0A00(var_7592)
            var_7608 = 8389417158930239541;
            var_7616 = 8;
            pri = fun_0A00(var_7608)
            var_7624 = 8802641224559852288;
            var_7632 = 8;
            pri = fun_0A00(var_7624)
            var_7640 = 1;
            var_7648 = 8;
            pri = fun_24F0(var_7640)
            var_7656 = 0;
            pri = fun_25B0()
            var_7664 = 6;
            var_7672 = 6;
            var_7680 = 8389417158930239541;
            var_7688 = 24;
            pri = fun_13E0(var_7680, var_7672, var_7664)
            var_7696 = 0;
            var_7704 = 0;
            var_7712 = 0;
            var_7720 = 0;
            OP_PUSH2_C 8389417158930239541, 8802641224559852288
            var_7728 = 48;
            pri = fun_09A8(var_7720, var_7712, var_7704, var_7696, var_7688, var_7680)
            var_7736 = 0;
            var_7744 = 3;
            var_7752 = 0;
            var_7760 = 100;
            var_7768 = -1;
            OP_PUSH2_C 4570150063140625098, 8389417158930239541
            var_7776 = 56;
            pri = fun_22F8(var_7768, var_7760, var_7752, var_7744, var_7736, var_7728, var_7720)
            var_7784 = 8802641224559852288;
            var_7792 = 8;
            pri = fun_0A00(var_7784)
            var_7800 = 1;
            var_7808 = 8;
            pri = fun_24F0(var_7800)
            var_7816 = 0;
            var_7824 = 5178282316713235704;
            var_7832 = 0;
            var_7840 = 24;
            pri = fun_25E0(var_7832, var_7824, var_7816)
            var_7848 = 0;
            var_7856 = 5178290013294633181;
            var_7864 = 1;
            var_7872 = 24;
            pri = fun_25E0(var_7864, var_7856, var_7848)
            var_7888 = 0;
            var_7896 = 0;
            var_7904 = 0;
            var_7912 = 1;
            var_7920 = 32;
            pri = fun_26C8(var_7912, var_7904, var_7896, var_7888)
            var_16 = pri;
            pri = var_16;
            switch (pri) {
// switch_10F20
                case default:
                {
// switch_10F20_case_default
                    var_8 = 2;
                    var_16 = 8389417158930239541;
                    var_24 = 16;
                    pri = fun_1368(var_16, var_8)
                    var_32 = 1;
                    var_40 = 1;
                    var_48 = -1;
                    var_56 = -1;
                    var_64 = 0;
                    var_72 = 23;
                    var_80 = 8389417158930239541;
                    var_88 = 56;
                    pri = fun_4728(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
                    var_96 = 0;
                    var_104 = 3;
                    var_112 = 0;
                    var_120 = 100;
                    var_128 = -1;
                    OP_PUSH2_C 4569291344559181532, 8389417158930239541
                    var_136 = 56;
                    pri = fun_22F8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
                    var_144 = 1;
                    var_152 = 8;
                    pri = fun_24F0(var_144)
                    var_160 = 0;
                    pri = fun_25B0()
                    var_168 = 0;
                    var_176 = 8;
                    pri = fun_28A0(var_168)
                    var_184 = 0;
                    var_192 = 3;
                    var_200 = 0;
                    var_208 = 100;
                    var_216 = -1;
                    OP_PUSH2_C 4569292444070809743, 8389417158930239541
                    var_224 = 56;
                    pri = fun_22F8(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
                    var_232 = 1;
                    var_240 = 8;
                    pri = fun_24F0(var_232)
                    var_248 = 0;
                    pri = fun_25B0()
                    var_256 = 36208;
                    var_264 = 8389417158930239541;
                    var_272 = 16;
                    pri = fun_0DD8(var_264, var_256)
                    var_280 = 8389417158930239541;
                    var_288 = 8;
                    pri = fun_1448(var_280)
                    var_296 = 1;
                    var_304 = 3;
                    var_312 = 0;
                    var_320 = 23;
                    var_328 = 8389417158930239541;
                    var_336 = 40;
                    pri = fun_6A60(var_328, var_320, var_312, var_304, var_296)
                    var_344 = 8389417158930239541;
                    var_352 = 8;
                    pri = fun_0BD8(var_344)
                    var_360 = 1;
                    var_368 = -1;
                    var_376 = -1;
                    var_384 = 3;
                    var_392 = 0;
                    var_400 = 19;
                    var_408 = 8802641224559852288;
                    var_416 = 56;
                    pri = fun_2B48(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
                    var_424 = 1;
                    var_432 = -1;
                    var_440 = -1;
                    var_448 = 3;
                    var_456 = 0;
                    var_464 = 0;
                    var_472 = -6397670319191688058;
                    var_480 = 56;
                    pri = fun_2B48(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
                    var_488 = 8802641224559852288;
                    var_496 = 8;
                    pri = fun_0BD8(var_488)
                    var_504 = -6397670319191688058;
                    var_512 = 8;
                    pri = fun_0BD8(var_504)
                    var_520 = 10;
                    var_528 = 8;
                    pri = fun_0060(var_520)
                    var_536 = 0;
                    var_544 = 8802641224559852288;
                    var_552 = 16;
                    pri = fun_07A8(var_544, var_536)
                    var_560 = 0;
                    var_568 = 8389417158930239541;
                    var_576 = 16;
                    pri = fun_07A8(var_568, var_560)
                    var_584 = 0;
                    var_592 = -6397670319191688058;
                    var_600 = 16;
                    pri = fun_07A8(var_592, var_584)
                    var_608 = 0;
                    var_616 = 8541340050249644631;
                    var_624 = 16;
                    pri = fun_07A8(var_616, var_608)
                    var_632 = 0;
                    var_640 = -7023822302788336185;
                    var_648 = 16;
                    pri = fun_07A8(var_640, var_632)
                    var_656 = 0;
                    var_664 = -2226112049068809935;
                    var_672 = 16;
                    pri = fun_07A8(var_664, var_656)
                    var_680 = 1;
                    var_688 = 0;
                    var_696 = 35352;
                    var_704 = 8;
                    var_712 = 32;
                    pri = fun_0308(var_704, var_696, var_688, var_680)
                    var_720 = 0;
                    pri = fun_0378()
                    var_728 = 3;
                    var_736 = 0;
                    pri = EvCameraEnd(var_736, var_728)
                    pri = 0;
                    return pri;
                }
                case 0x0:
                {
// switch_10F20_case_0x0
                    var_8 = 1;
                    var_16 = -1;
                    var_24 = -1;
                    var_32 = 3;
                    var_40 = 0;
                    var_48 = 19;
                    var_56 = 8802641224559852288;
                    var_64 = 56;
                    pri = fun_2B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    var_72 = 8802641224559852288;
                    var_80 = 8;
                    pri = fun_0BD8(var_72)
                    OP_JUMP switch_10F20_case_default
                }
                case 0x1:
                {
// switch_10F20_case_0x1
                    var_8 = 1;
                    var_16 = -1;
                    var_24 = -1;
                    var_32 = 3;
                    var_40 = 0;
                    var_48 = 20;
                    var_56 = 8802641224559852288;
                    var_64 = 56;
                    pri = fun_2B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    var_72 = 8802641224559852288;
                    var_80 = 8;
                    pri = fun_0BD8(var_72)
                    OP_JUMP switch_10F20_case_default
                }
            }
        }
        case 0x0:
        {
// switch_C728_case_0x0
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 19;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8802641224559852288;
            var_80 = 8;
            pri = fun_0BD8(var_72)
            var_88 = 7;
            var_96 = 8541340050249644631;
            var_104 = 16;
            pri = fun_12F0(var_96, var_88)
            var_112 = 1;
            var_120 = -1;
            var_128 = -1;
            var_136 = 3;
            var_144 = 0;
            var_152 = 0;
            var_160 = 8541340050249644631;
            var_168 = 56;
            pri = fun_2B48(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 0;
            var_184 = 3;
            var_192 = 0;
            var_200 = 100;
            var_208 = -1;
            OP_PUSH2_C 8798979034583909955, 8541340050249644631
            var_216 = 56;
            pri = fun_22F8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 8541340050249644631;
            var_232 = 8;
            pri = fun_0BD8(var_224)
            var_240 = 1;
            var_248 = 8;
            pri = fun_24F0(var_240)
            var_256 = 0;
            pri = fun_25B0()
            OP_JUMP switch_C728_case_default
        }
        case 0x1:
        {
// switch_C728_case_0x1
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 20;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2B48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8802641224559852288;
            var_80 = 8;
            pri = fun_0BD8(var_72)
            var_88 = 7;
            var_96 = 8541340050249644631;
            var_104 = 16;
            pri = fun_12F0(var_96, var_88)
            var_112 = 1;
            var_120 = -1;
            var_128 = -1;
            var_136 = 3;
            var_144 = 0;
            var_152 = 0;
            var_160 = 8541340050249644631;
            var_168 = 56;
            pri = fun_2B48(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 0;
            var_184 = 3;
            var_192 = 0;
            var_200 = 100;
            var_208 = -1;
            OP_PUSH2_C 8798977935072281744, 8541340050249644631
            var_216 = 56;
            pri = fun_22F8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 8541340050249644631;
            var_232 = 8;
            pri = fun_0BD8(var_224)
            var_240 = 1;
            var_248 = 8;
            pri = fun_24F0(var_240)
            var_256 = 0;
            pri = fun_25B0()
            OP_JUMP switch_C728_case_default
        }
    }
}
// fun_114B8
fun_114B8() {
    pri = 0;
    return pri;
}
// fun_114D0
fun_114D0() {
    var_8 = 8541340050249644631;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = -8896755840842652872;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = -7023822302788336185;
    var_48 = 8;
    pri = fun_06C0(var_40)
    var_56 = -2226112049068809935;
    var_64 = 8;
    pri = fun_06C0(var_56)
    var_72 = 3070;
    var_80 = 8;
    pri = fun_A578(var_72)
    var_88 = -6555519403937290100;
    pri = FlagReset(var_88)
    var_96 = 4859271981824992752;
    pri = FlagSet(var_96)
    pri = 0;
    return pri;
}
// fun_115F8
fun_115F8() {
    OP_PUSH2_C 8389417158930239541, 4283310664951702714
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -6397670319191688058, -5354187780009005767
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 35400;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_116D0
fun_116D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A780()
    var_16 = 0;
    pri = fun_A7D8()
    var_24 = 0;
    pri = fun_A890()
    var_32 = 0;
    pri = fun_A8C0()
    var_40 = 0;
    pri = fun_114B8()
    var_48 = 0;
    pri = fun_114D0()
    var_56 = 0;
    pri = fun_115F8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_117C0
fun_117C0() {
    var_8 = 0;
    pri = fun_A7D8()
    var_16 = 0;
    pri = fun_114D0()
    var_24 = 5;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_11828
fun_11828() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6212364786667440894;
    var_88 = 80;
    pri = fun_8F48(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_118B0
fun_118B0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4569293543582437954;
    var_88 = 80;
    pri = fun_8F48(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
