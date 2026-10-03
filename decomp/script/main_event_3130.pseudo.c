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
    pri = fun_1620(var_8)
    OP_JZER lab_0A78
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1650(var_24)
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
    pri = fun_1620(var_8)
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
    pri = fun_0DD8(var_8)
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
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E60
    pri = 0;
    return pri;
// lab_0E60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1620(var_8)
    OP_JZER lab_0F90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_ZERO_P_S 64
// lab_0F90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC8
    OP_CONST_S 64, 1
// lab_0FC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1000
    OP_CONST_S 72, 1
// lab_1000
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
// lab_0EB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EE0
    OP_ZERO_P_S 72
// lab_0EE0
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
    OP_JUMP lab_10A0
// lab_10A0
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1280
fun_1280() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_12B8
fun_12B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11C8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1240(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1208(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1280(var_24)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1620(var_8)
    OP_JZER lab_1418
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
// lab_1418
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
// fun_1480
fun_1480() {
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
    pri = fun_1378(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1620
fun_1620() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1680
fun_1680() {
    OP_JUMP lab_1698
// lab_1698
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1728
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1718
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    pri = 0;
    return pri;
// lab_1728
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_17A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    pri = 0;
    return pri;
// lab_17B8
    pri = 0;
    return pri;
// lab_17A8
    OP_JUMP lab_17C8
// lab_17C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1698
    pri = 0;
    return pri;
// lab_1718
    OP_JUMP lab_17C8
}
// fun_1808
fun_1808() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1680(var_40)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_18F0
fun_18F0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1928
fun_1928() {
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
// switch_1F40
        case default:
        {
// switch_1F40_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F88
// lab_1F88
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
            OP_JNZ lab_2030
            var_88 = 0;
            pri = fun_2300()
// lab_2030
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1F40_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1B28
                case default:
                {
// switch_1B28_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1BA0
// lab_1BA0
                    OP_JUMP lab_1F88
                }
                case 0x0:
                {
// switch_1B28_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1BA0
                }
                case 0x1:
                {
// switch_1B28_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1BA0
                }
                case 0x2:
                {
// switch_1B28_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1BA0
                }
                case 0x3:
                {
// switch_1B28_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1BA0
                }
                case 0x4:
                {
// switch_1B28_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1BA0
                }
                case 0x5:
                {
// switch_1B28_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1BA0
                }
            }
        }
        case 0x65:
        {
// switch_1F40_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1CE0
                case default:
                {
// switch_1CE0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D58
// lab_1D58
                    OP_JUMP lab_1F88
                }
                case 0x0:
                {
// switch_1CE0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1D58
                }
                case 0x1:
                {
// switch_1CE0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1D58
                }
                case 0x2:
                {
// switch_1CE0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1D58
                }
                case 0x3:
                {
// switch_1CE0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D58
                }
                case 0x4:
                {
// switch_1CE0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1D58
                }
                case 0x5:
                {
// switch_1CE0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1D58
                }
            }
        }
        case 0x66:
        {
// switch_1F40_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E98
                case default:
                {
// switch_1E98_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F10
// lab_1F10
                    OP_JUMP lab_1F88
                }
                case 0x0:
                {
// switch_1E98_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1F10
                }
                case 0x1:
                {
// switch_1E98_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1F10
                }
                case 0x2:
                {
// switch_1E98_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1F10
                }
                case 0x3:
                {
// switch_1E98_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F10
                }
                case 0x4:
                {
// switch_1E98_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1F10
                }
                case 0x5:
                {
// switch_1E98_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1F10
                }
            }
        }
    }
}
// fun_2048
fun_2048() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1928(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20B0
fun_20B0() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BA0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2158
    pri = 1;
    return pri;
// lab_2158
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_21A0
fun_21A0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_21F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_20B0(var_8)
    arg_2 = pri;
// lab_21F0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1928(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2048(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22A0
fun_22A0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2250(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    OP_JUMP lab_2318
// lab_2318
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2358
    pri = 0;
    return pri;
// lab_2358
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2318
    pri = 0;
    return pri;
}
// fun_2398
fun_2398() {
    var_8 = 0;
    pri = fun_2300()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2448
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2448
    pri = 0;
    return pri;
}
// fun_2458
fun_2458() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2488
fun_2488() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_24C0
fun_24C0() {
    OP_JUMP lab_24D8
// lab_24D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2520
    OP_JUMP lab_2550
    OP_JUMP lab_2540
// lab_2520
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2550
    pri = 0;
    return pri;
// lab_2540
    OP_JUMP lab_24D8
}
// fun_2560
fun_2560() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2590
fun_2590() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_25F0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2780(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_25F0
fun_25F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2640
fun_2640() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2780
fun_2780() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27D0
fun_27D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2818
fun_2818() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2890
fun_2890() {
    var_8 = 0;
    pri = fun_2818()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2910
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2910
    pri = 1;
    return pri;
// lab_2910
    var_8 = 0;
    pri = fun_2818()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2940
fun_2940() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2990
fun_2990() {
    OP_JUMP lab_29A8
// lab_29A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_29E0
    pri = 0;
    return pri;
// lab_29E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_29A8
    pri = 0;
    return pri;
}
// fun_2A20
fun_2A20() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2A58
fun_2A58() {
    pri = arg_6;
    OP_JNZ lab_2A90
    var_8 = 0;
    pri = fun_10B0()
// lab_2A90
    pri = arg_1;
    switch (pri) {
// switch_3FF8
        case default:
        {
// switch_3FF8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4348
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4348
            pri = 1;
            OP_JUMP lab_4350
// lab_4348
            pri = 0;
// lab_4350
            OP_JZER lab_44A8
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
            OP_JUMP lab_4508
// lab_44A8
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
// lab_4508
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4568
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_45C8
// lab_4568
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_45C8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_45C8
            pri = arg_2;
            OP_JZER lab_4608
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4608
            var_8 = 0;
            pri = fun_10F0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3FF8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1:
        {
// switch_3FF8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x2:
        {
// switch_3FF8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x3:
        {
// switch_3FF8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x4:
        {
// switch_3FF8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x5:
        {
// switch_3FF8_case_0x5
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x6:
        {
// switch_3FF8_case_0x6
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x7:
        {
// switch_3FF8_case_0x7
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x8:
        {
// switch_3FF8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x9:
        {
// switch_3FF8_case_0x9
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xa:
        {
// switch_3FF8_case_0xa
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xb:
        {
// switch_3FF8_case_0xb
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xc:
        {
// switch_3FF8_case_0xc
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xd:
        {
// switch_3FF8_case_0xd
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xe:
        {
// switch_3FF8_case_0xe
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0xf:
        {
// switch_3FF8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x10:
        {
// switch_3FF8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x11:
        {
// switch_3FF8_case_0x11
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x12:
        {
// switch_3FF8_case_0x12
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x13:
        {
// switch_3FF8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x14:
        {
// switch_3FF8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x15:
        {
// switch_3FF8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x16:
        {
// switch_3FF8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x17:
        {
// switch_3FF8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x18:
        {
// switch_3FF8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x19:
        {
// switch_3FF8_case_0x19
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1a:
        {
// switch_3FF8_case_0x1a
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
            pri = fun_0E10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1b:
        {
// switch_3FF8_case_0x1b
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
            pri = fun_0E10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1c:
        {
// switch_3FF8_case_0x1c
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
            pri = fun_0E10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1d:
        {
// switch_3FF8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1e:
        {
// switch_3FF8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x1f:
        {
// switch_3FF8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x20:
        {
// switch_3FF8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x21:
        {
// switch_3FF8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x22:
        {
// switch_3FF8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x23:
        {
// switch_3FF8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x24:
        {
// switch_3FF8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x25:
        {
// switch_3FF8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x26:
        {
// switch_3FF8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x27:
        {
// switch_3FF8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x28:
        {
// switch_3FF8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
        case 0x29:
        {
// switch_3FF8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FF8_case_default
        }
    }
}
// fun_4638
fun_4638() {
    pri = arg_5;
    OP_JNZ lab_4670
    var_8 = 0;
    pri = fun_10B0()
// lab_4670
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_46C0
    OP_CONST_S -8, -1
// lab_46C0
    pri = arg_1;
    switch (pri) {
// switch_6178
        case default:
        {
// switch_6178_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6620
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BA0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6620
            pri = 1;
            OP_JUMP lab_6628
// lab_6620
            pri = 0;
// lab_6628
            OP_JZER lab_6678
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_68D0
// lab_6678
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_66E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_66E0
            pri = 1;
            OP_JUMP lab_66E8
// lab_66E0
            pri = 0;
// lab_66E8
            OP_JZER lab_6870
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
            OP_JUMP lab_68D0
// lab_6870
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
// lab_68D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6940
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6940
            var_8 = 0;
            pri = fun_10F0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6178_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x1:
        {
// switch_6178_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x2:
        {
// switch_6178_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3:
        {
// switch_6178_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x4:
        {
// switch_6178_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x5:
        {
// switch_6178_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD8(var_40)
            OP_JUMP switch_6178_case_default
        }
        case 0x6:
        {
// switch_6178_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x7:
        {
// switch_6178_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x8:
        {
// switch_6178_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x9:
        {
// switch_6178_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0xa:
        {
// switch_6178_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0xb:
        {
// switch_6178_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0xc:
        {
// switch_6178_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0xd:
        {
// switch_6178_case_0xd
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0xe:
        {
// switch_6178_case_0xe
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0xf:
        {
// switch_6178_case_0xf
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x10:
        {
// switch_6178_case_0x10
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x11:
        {
// switch_6178_case_0x11
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x12:
        {
// switch_6178_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x13:
        {
// switch_6178_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x14:
        {
// switch_6178_case_0x14
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x15:
        {
// switch_6178_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x16:
        {
// switch_6178_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x17:
        {
// switch_6178_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x18:
        {
// switch_6178_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x19:
        {
// switch_6178_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x1a:
        {
// switch_6178_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x1b:
        {
// switch_6178_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x1c:
        {
// switch_6178_case_0x1c
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x1d:
        {
// switch_6178_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x1e:
        {
// switch_6178_case_0x1e
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x1f:
        {
// switch_6178_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x20:
        {
// switch_6178_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x21:
        {
// switch_6178_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x22:
        {
// switch_6178_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x23:
        {
// switch_6178_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x24:
        {
// switch_6178_case_0x24
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x25:
        {
// switch_6178_case_0x25
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x26:
        {
// switch_6178_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x27:
        {
// switch_6178_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x28:
        {
// switch_6178_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x29:
        {
// switch_6178_case_0x29
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x2a:
        {
// switch_6178_case_0x2a
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x2b:
        {
// switch_6178_case_0x2b
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x2c:
        {
// switch_6178_case_0x2c
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x2d:
        {
// switch_6178_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x2e:
        {
// switch_6178_case_0x2e
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x2f:
        {
// switch_6178_case_0x2f
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x30:
        {
// switch_6178_case_0x30
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x31:
        {
// switch_6178_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x32:
        {
// switch_6178_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x33:
        {
// switch_6178_case_0x33
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x34:
        {
// switch_6178_case_0x34
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x35:
        {
// switch_6178_case_0x35
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x36:
        {
// switch_6178_case_0x36
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x37:
        {
// switch_6178_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x38:
        {
// switch_6178_case_0x38
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
            pri = fun_0E10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6178_case_default
        }
        case 0x39:
        {
// switch_6178_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3a:
        {
// switch_6178_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3b:
        {
// switch_6178_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3c:
        {
// switch_6178_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3d:
        {
// switch_6178_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
        case 0x3e:
        {
// switch_6178_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            OP_JUMP switch_6178_case_default
        }
    }
}
// fun_6970
fun_6970() {
    pri = arg_4;
    OP_JNZ lab_69A8
    var_8 = 0;
    pri = fun_10B0()
// lab_69A8
    pri = arg_1;
    switch (pri) {
// switch_7D80
        case default:
        {
// switch_7D80_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1620(var_264)
            OP_JZER lab_8348
            pri = arg_3;
            switch (pri) {
// switch_82F0
                case default:
                {
// switch_82F0_case_default
                    OP_JUMP lab_8600
// lab_8600
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8670
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8670
                    var_8 = 0;
                    pri = fun_10F0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_82F0_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82F0_case_default
                }
                case 0x2:
                {
// switch_82F0_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82F0_case_default
                }
                case 0x3:
                {
// switch_82F0_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82F0_case_default
                }
            }
// lab_8348
            pri = arg_1;
            OP_JZER lab_8398
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8398
            pri = 0;
            OP_JUMP lab_83A0
// lab_8398
            pri = 1;
// lab_83A0
            OP_JZER lab_8408
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BA0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8408
            pri = 1;
            OP_JUMP lab_8410
// lab_8408
            pri = 0;
// lab_8410
            OP_JZER lab_8460
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8600
// lab_8460
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_84C8
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8600
// lab_84C8
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
// switch_7D80_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1:
        {
// switch_7D80_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2:
        {
// switch_7D80_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3:
        {
// switch_7D80_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x4:
        {
// switch_7D80_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x5:
        {
// switch_7D80_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD8(var_40)
            OP_JUMP switch_7D80_case_default
        }
        case 0x6:
        {
// switch_7D80_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x7:
        {
// switch_7D80_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x8:
        {
// switch_7D80_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x9:
        {
// switch_7D80_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xa:
        {
// switch_7D80_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xb:
        {
// switch_7D80_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xc:
        {
// switch_7D80_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xd:
        {
// switch_7D80_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xe:
        {
// switch_7D80_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0xf:
        {
// switch_7D80_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x10:
        {
// switch_7D80_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x11:
        {
// switch_7D80_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x12:
        {
// switch_7D80_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x13:
        {
// switch_7D80_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x14:
        {
// switch_7D80_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x15:
        {
// switch_7D80_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x16:
        {
// switch_7D80_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x17:
        {
// switch_7D80_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x18:
        {
// switch_7D80_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x19:
        {
// switch_7D80_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1a:
        {
// switch_7D80_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1b:
        {
// switch_7D80_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1c:
        {
// switch_7D80_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1d:
        {
// switch_7D80_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1e:
        {
// switch_7D80_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x1f:
        {
// switch_7D80_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x20:
        {
// switch_7D80_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x21:
        {
// switch_7D80_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x22:
        {
// switch_7D80_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x23:
        {
// switch_7D80_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x24:
        {
// switch_7D80_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x25:
        {
// switch_7D80_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x26:
        {
// switch_7D80_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x27:
        {
// switch_7D80_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x28:
        {
// switch_7D80_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x29:
        {
// switch_7D80_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2a:
        {
// switch_7D80_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2b:
        {
// switch_7D80_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2c:
        {
// switch_7D80_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2d:
        {
// switch_7D80_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2e:
        {
// switch_7D80_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x2f:
        {
// switch_7D80_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x30:
        {
// switch_7D80_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x31:
        {
// switch_7D80_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x32:
        {
// switch_7D80_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x33:
        {
// switch_7D80_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x34:
        {
// switch_7D80_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x35:
        {
// switch_7D80_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x36:
        {
// switch_7D80_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x37:
        {
// switch_7D80_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x38:
        {
// switch_7D80_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x39:
        {
// switch_7D80_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3a:
        {
// switch_7D80_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3b:
        {
// switch_7D80_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3c:
        {
// switch_7D80_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3d:
        {
// switch_7D80_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
        case 0x3e:
        {
// switch_7D80_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B60(var_24, var_16, var_8)
            OP_JUMP switch_7D80_case_default
        }
    }
}
// fun_86A0
fun_86A0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8738
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
    pri = fun_2A58(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8738
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8890
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_87F8
    var_24 = 32808;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_87F8
    pri = 1;
    OP_JUMP lab_8800
// lab_8890
    pri = 0;
    return pri;
// lab_87F8
    pri = 0;
// lab_8800
    OP_JZER lab_8890
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
    pri = fun_2A58(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_88A0
fun_88A0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8C20(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8908
fun_8908() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8978
    OP_CONST_S -8, 1
// lab_8978
    pri = arg_0;
    OP_JNZ lab_8998
    OP_ZERO_P_S -8
// lab_8998
    pri = var_8;
    OP_JZER lab_8A20
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8A20
    pri = 0;
    return pri;
}
// fun_8A38
fun_8A38() {
    var_8 = 32912;
    var_16 = 8;
    pri = fun_2488(var_8)
    var_24 = 0;
    pri = fun_24C0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_25F0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2730(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8B50
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8B50
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_86A0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_88A0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2560()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2A20(var_112)
    pri = 0;
    return pri;
}
// fun_8C20
fun_8C20() {
    var_8 = 33072;
    var_16 = 8;
    pri = fun_2488(var_8)
    var_24 = 0;
    pri = fun_24C0()
    pri = arg_3;
    OP_JNZ lab_8D40
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8D08
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8DB0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8D30
// lab_8D40
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8F50(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8D08
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8E78(var_16, var_8)
// lab_8D30
    OP_JUMP lab_8D88
// lab_8D88
    var_8 = 0;
    pri = fun_2560()
    pri = 0;
    return pri;
}
// fun_8DB0
fun_8DB0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8F50(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8E60
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8E60
    pri = 0;
    return pri;
}
// fun_8E78
fun_8E78() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2640(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_22A0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2398(var_72)
    var_88 = 0;
    pri = fun_2458()
    var_96 = 0;
    var_104 = 8;
    pri = fun_25F0(var_96)
    pri = 0;
    return pri;
}
// fun_8F50
fun_8F50() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9258(var_8)
// lab_8F98
    pri = arg_4;
    OP_JNZ lab_9000
    var_8 = 0;
    var_16 = 8;
    pri = fun_25F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2640(var_40, var_32, var_24)
// lab_9000
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_90A0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2690(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_22A0(var_56, var_48, var_40)
    OP_JUMP lab_9190
// lab_90A0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9158
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9158
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9158
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_22A0(var_24, var_16, var_8)
// lab_9190
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_91D0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_91D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_2398(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9460(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8908(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9258
fun_9258() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_92B8
    var_16 = 33232;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_92B8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_93F8
        case default:
        {
// switch_93F8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_93E8
            var_16 = 33776;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_93E8
            OP_JUMP lab_9430
// lab_9430
            var_8 = 33992;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_93F8_case_0x1
            var_8 = 33448;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9430
        }
        case 0x2:
        {
// switch_93F8_case_0x2
            var_8 = 33576;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9430
        }
    }
}
// fun_9460
fun_9460() {
    pri = arg_2;
    OP_JNZ lab_9548
    var_8 = 0;
    var_16 = 8;
    pri = fun_25F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2640(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_26E0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9548
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_22A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2398(var_40)
    var_56 = 0;
    pri = fun_2458()
    pri = 0;
    return pri;
}
// fun_95C0
fun_95C0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9608
    pri = arg_0;
    return pri;
// lab_9608
    pri = arg_1;
    return pri;
}
// fun_9618
fun_9618() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_96B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 34176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_18C8()
// lab_96B0
    pri = arg_4;
    OP_JZER lab_96E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_18F0(var_8)
// lab_96E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9740
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9740
    pri = 0;
    OP_JUMP lab_9748
// lab_9740
    pri = 1;
// lab_9748
    OP_JZER lab_9810
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9810
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_97E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1808(var_32, var_24)
    OP_JUMP lab_9810
// lab_9810
    pri = arg_2;
    OP_JZER lab_98E8
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_98B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1188(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E8(var_40)
    OP_JUMP lab_98E8
// lab_98E8
    pri = arg_3;
    OP_JZER lab_9920
    var_8 = 1;
    var_16 = 8;
    pri = fun_1890(var_8)
// lab_9920
    pri = 0;
    return pri;
// lab_98B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1188(var_16, var_8)
// lab_97E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1808(var_16, var_8)
}
// fun_9930
fun_9930() {
    pri = g_mode;
    switch (pri) {
// switch_99F0
        case default:
        {
// switch_99F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9A38
// lab_9A38
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_99F0_case_0x0
            var_8 = 0;
            pri = fun_9A48()
            OP_JUMP lab_9A38
        }
        case 0xd906417f7b7677d:
        {
// switch_99F0_case_0xd906417f7b7677d
            var_8 = 0;
            pri = fun_DEA8()
            OP_JUMP lab_9A38
        }
        case 0x2ca32e1b831e77a9:
        {
// switch_99F0_case_0x2ca32e1b831e77a9
            var_8 = 0;
            pri = fun_DDB8()
            OP_JUMP lab_9A38
        }
    }
}
// fun_9A48
fun_9A48() {
    pri = 0;
    return pri;
}
// fun_9A60
fun_9A60() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9618(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9AB8
fun_9AB8() {
    OP_PUSH2_C -5365638758836490511, 1773351177496499754
    var_8 = 16;
    pri = fun_95C0(var_0, var_-8)
    var_16 = pri;
    var_24 = 8;
    pri = fun_0540(var_16)
    OP_PUSH2_C -2965822370794371503, 6740051908999982722
    var_32 = 16;
    pri = fun_95C0(var_24, var_16)
    var_40 = pri;
    var_48 = 8;
    pri = fun_0540(var_40)
    OP_PUSH2_C 8855976090230375108, -1388330654265746967
    var_56 = 16;
    pri = fun_95C0(var_48, var_40)
    var_64 = pri;
    var_72 = 8;
    pri = fun_0540(var_64)
    pri = 0;
    return pri;
}
// fun_9BC0
fun_9BC0() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_9BF0
fun_9BF0() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_ZERO_P_S -72
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_ZERO_P_S -96
    OP_ZERO_P_S -104
    OP_ZERO_P_S -112
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9E68
    OP_CONST_S -8, 1773351177496499754
    OP_CONST_S -16, -1388330654265746967
    OP_CONST_S -24, 6740051908999982722
    OP_CONST_S -32, 5243056946018215887
    OP_CONST_S -40, 5243058045529844098
    OP_CONST_S -48, 5243051448460074832
    OP_CONST_S -56, 5243052547971703043
    OP_CONST_S -64, 5243053647483331254
    OP_CONST_S -72, 5243054746994959465
    OP_CONST_S -80, 5243064642599613364
    OP_CONST_S -88, 5243065742111241575
    OP_CONST_S -96, 5243906868506633765
    OP_CONST_S -104, 5243905768995005554
    OP_CONST_S -112, 5243904669483377343
    OP_JUMP lab_9FB8
// lab_9E68
    OP_CONST_S -8, -5365638758836490511
    OP_CONST_S -16, 8855976090230375108
    OP_CONST_S -24, -2965822370794371503
    OP_CONST_S -32, 5516532605095176029
    OP_CONST_S -40, 5516529306560291396
    OP_CONST_S -48, 5516527107537034974
    OP_CONST_S -56, 5516528207048663185
    OP_CONST_S -64, 5516524908513778552
    OP_CONST_S -72, 5516526008025406763
    OP_CONST_S -80, 5516522709490522130
    OP_CONST_S -88, 5516523809002150341
    OP_CONST_S -96, 5517488080699902163
    OP_CONST_S -104, 5517486981188273952
    OP_CONST_S -112, 5517490279723158585
// lab_9FB8
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = var_24;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = var_16;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = var_8;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4658025375784658534, 4657556104221923738, 8802641224559852288
    var_120 = 48;
    pri = fun_0718(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH3_C 4640537203540230144, 4658199758328823808, 4657350935352180736
    var_144 = var_24;
    var_152 = 48;
    pri = fun_0718(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 1;
    OP_PUSH3_C 4640537203540230144, 4658217350514868224, 4657740162468413440
    var_176 = var_16;
    var_184 = 48;
    pri = fun_0718(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH3_C 4640537203540230144, 4656805357682478285, 4657555444514947072
    var_208 = var_8;
    var_216 = 48;
    pri = fun_0718(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 0;
    OP_PUSH5_C 4656861124912239084, 4646750587729257431, 4657523580667974124, 4658354437624619336, 4644800493906233917
    var_264 = 4657637468082379162;
    var_272 = 1;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_2990()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A448
    var_288 = 0;
    var_296 = 5493287531211635644;
    var_304 = 16;
    pri = fun_0770(var_296, var_288)
    var_312 = 0;
    var_320 = -893343748767281461;
    var_328 = 16;
    pri = fun_0770(var_320, var_312)
    var_336 = 0;
    var_344 = 5455010281999190224;
    var_352 = 16;
    pri = fun_0770(var_344, var_336)
    var_360 = 0;
    var_368 = 2850554033950557475;
    var_376 = 16;
    pri = fun_0770(var_368, var_360)
    var_384 = 0;
    var_392 = 2850563929555211374;
    var_400 = 16;
    pri = fun_0770(var_392, var_384)
    var_408 = 0;
    var_416 = -487707491440309508;
    var_424 = 16;
    pri = fun_0770(var_416, var_408)
    var_432 = 0;
    var_440 = -8677821539258268528;
    var_448 = 16;
    pri = fun_0770(var_440, var_432)
    var_456 = 0;
    var_464 = -4191801412911293792;
    var_472 = 16;
    pri = fun_0770(var_464, var_456)
    var_480 = 0;
    var_488 = 8411299318447548111;
    var_496 = 16;
    pri = fun_0770(var_488, var_480)
    OP_JUMP lab_A5F8
// lab_A448
    var_8 = 0;
    var_16 = 3546109700352050225;
    var_24 = 16;
    pri = fun_0770(var_16, var_8)
    var_32 = 0;
    var_40 = -1754988226644335506;
    var_48 = 16;
    pri = fun_0770(var_40, var_32)
    var_56 = 0;
    var_64 = 8326493201452880395;
    var_72 = 16;
    pri = fun_0770(var_64, var_56)
    var_80 = 0;
    var_88 = -2227642066109516424;
    var_96 = 16;
    pri = fun_0770(var_88, var_80)
    var_104 = 0;
    var_112 = -2227647563667657479;
    var_120 = 16;
    pri = fun_0770(var_112, var_104)
    var_128 = 0;
    var_136 = 2255772483305668615;
    var_144 = 16;
    pri = fun_0770(var_136, var_128)
    var_152 = 0;
    var_160 = 3847859864748581241;
    var_168 = 16;
    pri = fun_0770(var_160, var_152)
    var_176 = 0;
    var_184 = 1931914041403912585;
    var_192 = 16;
    pri = fun_0770(var_184, var_176)
    var_200 = 0;
    var_208 = 5792047398291374470;
    var_216 = 16;
    pri = fun_0770(var_208, var_200)
// lab_A5F8
    var_8 = 34224;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    var_40 = 0;
    pri = fun_2590()
    var_48 = 0;
    var_56 = 4631121865569258701;
    var_64 = 3;
    OP_PUSH5_C 4655974170872344740, -4588647995271062487, 4657304250088465367, 4657684966984699085, 4641572679610804470
    var_72 = 4657669969646096220;
    var_80 = 180;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 85;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 4607182418800017408;
    var_136 = var_8;
    var_144 = 0;
    var_152 = 48;
    pri = fun_1480(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 4624296097384025293;
    var_192 = var_8;
    var_200 = 40;
    pri = fun_0958(var_192, var_184, var_176, var_168, var_160)
    var_208 = var_8;
    var_216 = 8;
    pri = fun_0A00(var_208)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = var_8;
    OP_PUSH4_C 4657189746947548774, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_256 = 64;
    pri = fun_0898(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = var_8;
    OP_PUSH3_C 4657302556840558592, 4657740162468413440, 4611686018427387904
    var_296 = var_16;
    var_304 = 64;
    pri = fun_0898(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_312 = 1;
    var_320 = 0;
    var_328 = 4641240890982006784;
    var_336 = var_8;
    OP_PUSH3_C 4657284964654514176, 4657350935352180736, 4611686018427387904
    var_344 = var_24;
    var_352 = 64;
    pri = fun_0898(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_360 = 4;
    var_368 = 4;
    var_376 = var_8;
    var_384 = 24;
    pri = fun_12B8(var_376, var_368, var_360)
    var_392 = 1;
    var_400 = 1;
    var_408 = -1;
    var_416 = -1;
    var_424 = 0;
    var_432 = 1;
    var_440 = var_8;
    var_448 = 56;
    pri = fun_4638(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 0;
    var_464 = 3;
    var_472 = 0;
    var_480 = 100;
    var_488 = -1;
    var_496 = var_32;
    var_504 = var_8;
    var_512 = 56;
    pri = fun_21A0(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 8802641224559852288;
    var_528 = 8;
    pri = fun_0A00(var_520)
    var_536 = var_16;
    var_544 = 8;
    pri = fun_0A00(var_536)
    var_552 = var_24;
    var_560 = 8;
    pri = fun_0A00(var_552)
    var_568 = 1;
    var_576 = 8;
    pri = fun_2398(var_568)
    var_584 = 0;
    pri = fun_2458()
    var_592 = 1;
    var_600 = 3;
    var_608 = 0;
    var_616 = 1;
    var_624 = var_8;
    var_632 = 40;
    pri = fun_6970(var_624, var_616, var_608, var_600, var_592)
    var_640 = 2;
    var_648 = 2;
    var_656 = var_24;
    var_664 = 24;
    pri = fun_12B8(var_656, var_648, var_640)
    OP_PUSH2_C 4621199872640208077, 4631121865569258701
    var_672 = 0;
    OP_PUSH5_C 4657826781994449633, -4586261791155997901, 4656733515592719401, 4656876540065260503, 4641471348619188634
    var_680 = 4657697391466092954;
    var_688 = 1;
    pri = EvCameraMove(var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 0;
    pri = fun_2990()
    var_704 = 1;
    var_712 = -1;
    var_720 = -1;
    var_728 = 3;
    var_736 = 0;
    var_744 = 0;
    var_752 = var_24;
    var_760 = 56;
    pri = fun_2A58(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    var_808 = 105563772826329165;
    var_816 = var_24;
    var_824 = 56;
    pri = fun_21A0(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = var_24;
    var_840 = 8;
    pri = fun_0BD8(var_832)
    var_848 = 1;
    var_856 = 8;
    pri = fun_2398(var_848)
    var_864 = 0;
    pri = fun_2458()
    var_872 = var_24;
    var_880 = 8;
    pri = fun_1320(var_872)
    var_888 = 4;
    var_896 = 4;
    var_904 = var_8;
    var_912 = 24;
    pri = fun_12B8(var_904, var_896, var_888)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_AD80
    var_920 = 0;
    var_928 = 4631952216750555136;
    var_936 = 0;
    OP_PUSH5_C 4656005572924434022, 4626035612740097147, 4656914187343395553, 4656964457015017472, 4639801498319852667
    var_944 = 4657689452992140411;
    var_952 = 1;
    pri = EvCameraMove(var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_960 = 0;
    pri = fun_2990()
    OP_JUMP lab_AE18
// lab_AD80
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4656009399224898683, 4624341133380298998, 4656916650249441772, 4656966370165249802, 4639643168645452923
    var_32 = 4657691915898186629;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2990()
// lab_AE18
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_2A58(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = var_40;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_21A0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = var_8;
    var_144 = 8;
    pri = fun_0BD8(var_136)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2398(var_152)
    var_168 = 0;
    pri = fun_2458()
    var_176 = 2;
    var_184 = 2;
    var_192 = var_16;
    var_200 = 24;
    pri = fun_12B8(var_192, var_184, var_176)
    var_208 = 0;
    var_216 = 4625619029774565376;
    var_224 = 0;
    OP_PUSH5_C 4658118394468368384, -4604255079042226586, 4657542008482855649, 4656687797899236475, 4641391831938267873
    var_232 = 4657840811762820055;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_2990()
    var_256 = 1;
    var_264 = -1;
    var_272 = -1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 0;
    var_304 = var_16;
    var_312 = 56;
    pri = fun_2A58(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    var_360 = 2569030630660097116;
    var_368 = var_16;
    var_376 = 56;
    pri = fun_21A0(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = var_16;
    var_392 = 8;
    pri = fun_0BD8(var_384)
    var_400 = 1;
    var_408 = 8;
    pri = fun_2398(var_400)
    var_416 = 0;
    pri = fun_2458()
    var_424 = 7;
    var_432 = var_8;
    var_440 = 16;
    pri = fun_11C8(var_432, var_424)
    var_448 = 0;
    var_456 = 4631952216750555136;
    var_464 = 0;
    OP_PUSH5_C 4656725643089464525, -4588006232324162191, 4656802476962013512, 4657372089955899146, 4640961175223900570
    var_472 = 4658037470412564070;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    pri = fun_2990()
    var_496 = 1;
    var_504 = 1;
    var_512 = -1;
    var_520 = -1;
    var_528 = 0;
    var_536 = 1;
    var_544 = var_8;
    var_552 = 56;
    pri = fun_4638(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 0;
    var_568 = 3;
    var_576 = 0;
    var_584 = 100;
    var_592 = -1;
    var_600 = var_48;
    var_608 = var_8;
    var_616 = 56;
    pri = fun_21A0(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_2398(var_624)
    var_640 = 0;
    pri = fun_2458()
    var_648 = 5;
    var_656 = 5;
    var_664 = var_8;
    var_672 = 24;
    pri = fun_12B8(var_664, var_656, var_648)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    var_720 = var_56;
    var_728 = var_8;
    var_736 = 56;
    pri = fun_21A0(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_2398(var_744)
    var_760 = 0;
    pri = fun_2458()
    var_768 = 1;
    var_776 = 1;
    OP_PUSH3_C 4618441417868443648, 4656805357682478285, 4657555444514947072
    var_784 = var_8;
    var_792 = 48;
    pri = fun_0718(var_784, var_776, var_768, var_760, var_752, var_744)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B4D0
    var_800 = 0;
    var_808 = 4631727036769186611;
    var_816 = 0;
    OP_PUSH5_C 4654297107776730563, 4637990558688440484, 4657416202362405519, 4657019696479196938, 4639221659867828716
    var_824 = 4657553157530761298;
    var_832 = 1;
    pri = EvCameraMove(var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 0;
    pri = fun_2990()
    var_848 = 0;
    var_856 = 4631727036769186611;
    var_864 = 3;
    OP_PUSH5_C 4654218030900460913, 4638274848414918246, 4657412595964266414, 4656980158041062113, 4639363804731067597
    var_872 = 4657549573122854748;
    var_880 = 60;
    pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    OP_JUMP lab_B5E8
// lab_B4D0
    var_8 = 0;
    var_16 = 4631727036769186611;
    var_24 = 0;
    OP_PUSH5_C 4654296448069753897, 4636889287842060042, 4657482392962397635, 4657023126955475599, 4638635136385107886
    var_32 = 4657568132879131607;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2990()
    var_56 = 0;
    var_64 = 4631727036769186611;
    var_72 = 3;
    OP_PUSH5_C 4654210246358136259, 4637447311983388918, 4657479952046583972, 4656980026099666780, 4638950388359023821
    var_80 = 4657565691963317944;
    var_88 = 60;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_B5E8
    var_8 = var_8;
    var_16 = 8;
    pri = fun_1320(var_8)
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 40;
    pri = fun_6970(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = var_64;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_21A0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = var_8;
    var_144 = 8;
    pri = fun_0BD8(var_136)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2398(var_152)
    var_168 = 0;
    pri = fun_2458()
    var_176 = 0;
    var_184 = 4629053024490435379;
    var_192 = 0;
    OP_PUSH5_C 4656111785747677184, -4594228940371793019, 4657474916283328758, 4657788409038640251, 4643292139874785690
    var_200 = 4657587924088431575;
    var_208 = 1;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    pri = fun_2990()
    var_224 = 0;
    var_232 = 4629053024490435379;
    var_240 = 3;
    OP_PUSH5_C 4656263606313240494, 4647975619604460339, 4657513355209835807, 4657827573642821632, 4641850636150306243
    var_248 = 4657622998509357629;
    var_256 = 85;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH3_C 4654916616608284672, 4657562041584713728, 4611686018427387904
    var_304 = var_8;
    var_312 = 72;
    pri = fun_0820(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 15;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 1;
    var_344 = 0;
    var_352 = 4641240890982006784;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH4_C 4656572041315064218, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_376 = 72;
    pri = fun_0820(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH3_C 4656678034235981824, 4657740162468413440, 4611686018427387904
    var_424 = var_16;
    var_432 = 72;
    pri = fun_0820(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 1;
    var_448 = 0;
    var_456 = 4641240890982006784;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH3_C 4656660442049937408, 4657350935352180736, 4607182418800017408
    var_480 = var_24;
    var_488 = 72;
    pri = fun_0820(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 50;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 8802641224559852288;
    var_520 = 8;
    pri = fun_0A00(var_512)
    var_528 = var_16;
    var_536 = 8;
    pri = fun_0A00(var_528)
    var_544 = var_24;
    var_552 = 8;
    pri = fun_0A00(var_544)
    var_560 = var_8;
    var_568 = 8;
    pri = fun_0A00(var_560)
    var_576 = 1;
    var_584 = 0;
    var_592 = 34176;
    var_600 = 8;
    var_608 = 32;
    pri = fun_0308(var_600, var_592, var_584, var_576)
    var_616 = 0;
    pri = fun_0378()
    var_624 = 0;
    var_632 = -1;
    OP_PUSH2_C 4473225685899672651, -3854051687223436086
    var_640 = 16;
    pri = fun_95C0(var_632, var_624)
    var_648 = pri;
    var_656 = 24;
    pri = fun_27D0(var_648, var_640, var_632)
    var_664 = 0;
    pri = fun_2890()
    OP_JZER lab_BB80
    var_672 = 0;
    pri = fun_2940()
// lab_BB80
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = var_24;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = var_16;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = var_8;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH3_C 4618441417868443648, 4656805357682478285, 4657562041584713728
    var_120 = var_8;
    var_128 = 48;
    pri = fun_0718(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    OP_PUSH4_C 4640537203540230144, 4657189746947548774, 4657556104221923738, 8802641224559852288
    var_152 = 48;
    pri = fun_0718(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 1;
    var_176 = 4640537203540230144;
    var_184 = 2312;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 4657740162468413440;
    var_208 = var_16;
    var_216 = 48;
    pri = fun_0718(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH3_C 4640537203540230144, 4657284964654514176, 4657350935352180736
    var_240 = var_24;
    var_248 = 48;
    pri = fun_0718(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = var_8;
    var_296 = 8802641224559852288;
    var_304 = 48;
    pri = fun_09A8(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = var_8;
    var_352 = var_16;
    var_360 = 48;
    pri = fun_09A8(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = var_8;
    var_408 = var_24;
    var_416 = 48;
    pri = fun_09A8(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 8802641224559852288;
    var_432 = 8;
    pri = fun_0A00(var_424)
    var_440 = var_16;
    var_448 = 8;
    pri = fun_0A00(var_440)
    var_456 = var_24;
    var_464 = 8;
    pri = fun_0A00(var_456)
    var_472 = 0;
    var_480 = 4631727036769186611;
    var_488 = 0;
    OP_PUSH5_C 4656387279381132739, 4637196799254116434, 4656992846405246648, 4657673642014932992, 4642789003353915392
    var_496 = 4657971983500013732;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    pri = fun_2990()
    var_520 = 0;
    var_528 = 4631727036769186611;
    var_536 = 3;
    OP_PUSH5_C 4656311764922537083, -4589926595352770642, 4656913791519209554, 4657517599324719022, 4640826419078800343
    var_544 = 4657916853986997043;
    var_552 = 140;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 5;
    var_568 = var_8;
    var_576 = 16;
    pri = fun_11C8(var_568, var_560)
    var_584 = 34224;
    var_592 = 8;
    var_600 = 16;
    pri = fun_02A8(var_592, var_584)
    var_608 = 0;
    pri = fun_0378()
    var_616 = 35;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 1;
    var_640 = 1;
    var_648 = -1;
    var_656 = -1;
    var_664 = 0;
    var_672 = 8;
    var_680 = var_8;
    var_688 = 56;
    pri = fun_4638(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 0;
    var_704 = 3;
    var_712 = 0;
    var_720 = 100;
    var_728 = -1;
    var_736 = var_72;
    var_744 = var_8;
    var_752 = 56;
    pri = fun_21A0(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_760 = 1;
    var_768 = 8;
    pri = fun_2398(var_760)
    var_776 = 0;
    pri = fun_2458()
    var_784 = 1;
    var_792 = -1;
    var_800 = -1;
    var_808 = 3;
    var_816 = 0;
    var_824 = 1;
    var_832 = var_16;
    var_840 = 56;
    pri = fun_2A58(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 3;
    var_856 = 3;
    var_864 = var_16;
    var_872 = 24;
    pri = fun_12B8(var_864, var_856, var_848)
    var_880 = 0;
    var_888 = 3;
    var_896 = 0;
    var_904 = 100;
    var_912 = -1;
    var_920 = 2569033929194981749;
    var_928 = var_16;
    var_936 = 56;
    pri = fun_21A0(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = var_16;
    var_952 = 8;
    pri = fun_0BD8(var_944)
    var_960 = 1;
    var_968 = 8;
    pri = fun_2398(var_960)
    var_976 = 0;
    pri = fun_2458()
    OP_PUSH2_C 4612136378390124954, 4626632339690723738
    var_984 = 0;
    OP_PUSH5_C 4657557137762853847, 4628408446793767977, 4657430430042868941, 4655668902464009011, 4643322046591061197
    var_992 = 4657856094974446141;
    var_1000 = 1;
    pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 0;
    pri = fun_2990()
    OP_PUSH2_C 4612136378390124954, 4626632339690723738
    var_1016 = 3;
    OP_PUSH5_C 4657563668861922836, 4628408446793767977, 4657451276783331574, 4655681920681681879, 4643322046591061197
    var_1024 = 4657876941714908774;
    var_1032 = 140;
    pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 1;
    var_1088 = var_16;
    var_1096 = 56;
    pri = fun_4638(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 8;
    var_1136 = var_8;
    var_1144 = 40;
    pri = fun_6970(var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1152 = 0;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 100;
    var_1184 = -1;
    var_1192 = 2569032829683353538;
    var_1200 = var_16;
    var_1208 = 56;
    pri = fun_21A0(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = var_8;
    var_1224 = 8;
    pri = fun_0BD8(var_1216)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_2398(var_1232)
    var_1248 = 0;
    pri = fun_2458()
    var_1256 = 3;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 1;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 1;
    var_1304 = var_16;
    var_1312 = 40;
    pri = fun_6970(var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = var_16;
    var_1360 = var_8;
    var_1368 = 48;
    pri = fun_09A8(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1376 = var_8;
    var_1384 = 8;
    pri = fun_0A00(var_1376)
    var_1392 = 5;
    var_1400 = 5;
    var_1408 = var_8;
    var_1416 = 24;
    pri = fun_12B8(var_1408, var_1400, var_1392)
    var_1424 = 0;
    var_1432 = 4628884139504408986;
    var_1440 = 0;
    OP_PUSH5_C 4656228289999756329, 4631427265918989763, 4656957749994088038, 4657507219934952817, 4639292732299448156
    var_1448 = 4658047849802330276;
    var_1456 = 1;
    pri = EvCameraMove(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = 0;
    pri = fun_2990()
    var_1472 = 1;
    var_1480 = 1;
    var_1488 = -1;
    var_1496 = -1;
    var_1504 = 0;
    var_1512 = 4;
    var_1520 = var_8;
    var_1528 = 56;
    pri = fun_4638(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    var_1560 = 0;
    var_1568 = var_16;
    var_1576 = var_8;
    var_1584 = 48;
    pri = fun_09A8(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1592 = 0;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 100;
    var_1624 = -1;
    var_1632 = var_112;
    var_1640 = var_8;
    var_1648 = 56;
    pri = fun_21A0(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1656 = var_16;
    var_1664 = 8;
    pri = fun_0BD8(var_1656)
    var_1672 = var_8;
    var_1680 = 8;
    pri = fun_0A00(var_1672)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_2398(var_1688)
    var_1704 = 0;
    pri = fun_2458()
    var_1712 = 1;
    var_1720 = 1;
    var_1728 = -1;
    var_1736 = -1;
    var_1744 = 0;
    var_1752 = 12;
    var_1760 = var_16;
    var_1768 = 56;
    pri = fun_4638(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 0;
    var_1784 = 4628518222034685133;
    var_1792 = 0;
    OP_PUSH5_C 4657982736723733381, -4588152599312051732, 4657016375954081055, 4656922521641534095, 4640532629571858596
    var_1800 = 4657941285135366226;
    var_1808 = 1;
    pri = EvCameraMove(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1816 = 0;
    pri = fun_2990()
    var_1824 = 0;
    var_1832 = 4628518222034685133;
    var_1840 = 3;
    OP_PUSH5_C 4658015040375357440, -4588152599312051732, 4657053385515471995, 4656954803302925599, 4640532629571858596
    var_1848 = 4657978294696757166;
    var_1856 = 30;
    pri = EvCameraMove(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1864 = 1;
    var_1872 = 3;
    var_1880 = 0;
    var_1888 = 4;
    var_1896 = var_8;
    var_1904 = 40;
    pri = fun_6970(var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1912 = 4;
    var_1920 = var_16;
    var_1928 = 16;
    pri = fun_11C8(var_1920, var_1912)
    var_1936 = var_16;
    var_1944 = 8;
    pri = fun_1280(var_1936)
    var_1952 = 1;
    var_1960 = 1;
    var_1968 = 30;
    var_1976 = var_16;
    var_1984 = 8802641224559852288;
    var_1992 = 40;
    pri = fun_1130(var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2000 = 0;
    var_2008 = 3;
    var_2016 = 0;
    var_2024 = 100;
    var_2032 = -1;
    var_2040 = 2569027332125212483;
    var_2048 = var_16;
    var_2056 = 56;
    pri = fun_21A0(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2064 = 0;
    pri = fun_2990()
    var_2072 = var_8;
    var_2080 = 8;
    pri = fun_0BD8(var_2072)
    var_2088 = 1;
    var_2096 = 8;
    pri = fun_2398(var_2088)
    var_2104 = 0;
    pri = fun_2458()
    var_2112 = 0;
    var_2120 = 0;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = var_16;
    var_2152 = var_24;
    var_2160 = 48;
    pri = fun_09A8(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2168 = 2;
    var_2176 = 2;
    var_2184 = var_24;
    var_2192 = 24;
    pri = fun_12B8(var_2184, var_2176, var_2168)
    var_2200 = 0;
    var_2208 = 4628518222034685133;
    var_2216 = 3;
    OP_PUSH5_C 4657784956572129034, -4591916623438114980, 4656957991886646149, 4656902840383396905, 4642528639000458035
    var_2224 = 4658026651218146755;
    var_2232 = 50;
    pri = EvCameraMove(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 0;
    var_2248 = 3;
    var_2256 = 0;
    var_2264 = 100;
    var_2272 = -1;
    var_2280 = 105560474291444532;
    var_2288 = var_24;
    var_2296 = 56;
    pri = fun_21A0(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = var_24;
    var_2312 = 8;
    pri = fun_0A00(var_2304)
    var_2320 = 1;
    var_2328 = 8;
    pri = fun_2398(var_2320)
    var_2336 = 0;
    pri = fun_2458()
    var_2344 = 1;
    var_2352 = 3;
    var_2360 = 0;
    var_2368 = 12;
    var_2376 = var_16;
    var_2384 = 40;
    pri = fun_6970(var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2392 = var_16;
    var_2400 = 8;
    pri = fun_0BD8(var_2392)
    var_2408 = 6;
    var_2416 = 6;
    var_2424 = var_16;
    var_2432 = 24;
    pri = fun_12B8(var_2424, var_2416, var_2408)
    var_2440 = 5;
    var_2448 = 5;
    var_2456 = var_24;
    var_2464 = 24;
    pri = fun_12B8(var_2456, var_2448, var_2440)
    var_2472 = 0;
    var_2480 = 0;
    var_2488 = 0;
    var_2496 = 0;
    var_2504 = var_24;
    var_2512 = var_16;
    var_2520 = 48;
    pri = fun_09A8(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2528 = var_16;
    var_2536 = 8;
    pri = fun_0A00(var_2528)
    var_2544 = 1;
    var_2552 = -1;
    var_2560 = -1;
    var_2568 = 3;
    var_2576 = 0;
    var_2584 = 1;
    var_2592 = var_16;
    var_2600 = 56;
    pri = fun_2A58(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2608 = 0;
    var_2616 = 3;
    var_2624 = 0;
    var_2632 = 100;
    var_2640 = -1;
    var_2648 = 2569026232613584272;
    var_2656 = var_16;
    var_2664 = 56;
    pri = fun_21A0(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
    var_2672 = var_16;
    var_2680 = 8;
    pri = fun_0BD8(var_2672)
    var_2688 = 1;
    var_2696 = 8;
    pri = fun_2398(var_2688)
    var_2704 = 0;
    pri = fun_2458()
    var_2712 = var_16;
    var_2720 = 8;
    pri = fun_1320(var_2712)
    var_2728 = var_24;
    var_2736 = 8;
    pri = fun_1320(var_2728)
    var_2744 = 2;
    var_2752 = 2;
    var_2760 = var_8;
    var_2768 = 24;
    pri = fun_12B8(var_2760, var_2752, var_2744)
    var_2776 = -1;
    var_2784 = 8802641224559852288;
    var_2792 = 16;
    pri = fun_1188(var_2784, var_2776)
    var_2800 = 0;
    var_2808 = 0;
    var_2816 = 0;
    var_2824 = 0;
    var_2832 = var_8;
    var_2840 = var_16;
    var_2848 = 48;
    pri = fun_09A8(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 0;
    var_2880 = 0;
    var_2888 = var_8;
    var_2896 = var_24;
    var_2904 = 48;
    pri = fun_09A8(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2912 = 1;
    var_2920 = 1;
    OP_PUSH3_C 4618441417868443648, 4656805357682478285, 4657562041584713728
    var_2928 = var_8;
    var_2936 = 48;
    pri = fun_0718(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2944 = 0;
    var_2952 = 4628518222034685133;
    var_2960 = 0;
    OP_PUSH5_C 4656865962763401298, 4631776294890110976, 4657022049434080379, 4657538336114018877, 4639727611138466120
    var_2968 = 4658360462948339548;
    var_2976 = 1;
    pri = EvCameraMove(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2984 = 0;
    pri = fun_2990()
    var_2992 = 0;
    var_3000 = 4628518222034685133;
    var_3008 = 3;
    OP_PUSH5_C 4656847446987589550, 4631776294890110976, 4657031351302451364, 4657519820338207130, 4639727611138466120
    var_3016 = 4658369764816710533;
    var_3024 = 50;
    pri = EvCameraMove(var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3032 = 1;
    var_3040 = -1;
    var_3048 = -1;
    var_3056 = 3;
    var_3064 = 0;
    var_3072 = 1;
    var_3080 = var_8;
    var_3088 = 56;
    pri = fun_2A58(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032)
    var_3096 = 0;
    var_3104 = 3;
    var_3112 = 0;
    var_3120 = 100;
    var_3128 = -1;
    var_3136 = var_80;
    var_3144 = var_8;
    var_3152 = 56;
    pri = fun_21A0(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3160 = var_8;
    var_3168 = 8;
    pri = fun_0BD8(var_3160)
    var_3176 = var_16;
    var_3184 = 8;
    pri = fun_0A00(var_3176)
    var_3192 = var_24;
    var_3200 = 8;
    pri = fun_0A00(var_3192)
    var_3208 = 1;
    var_3216 = 8;
    pri = fun_2398(var_3208)
    var_3224 = 0;
    pri = fun_2458()
    var_3232 = 5;
    var_3240 = var_8;
    var_3248 = 16;
    pri = fun_11C8(var_3240, var_3232)
    var_3256 = var_8;
    var_3264 = 8;
    pri = fun_1280(var_3256)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_D408
    var_3272 = 0;
    var_3280 = 4631727036769186611;
    var_3288 = 0;
    OP_PUSH5_C 4655192506065926226, -4589539567259793490, 4656549743219252920, 4656968679139668132, 4639887348187749417
    var_3296 = 4657655192209818911;
    var_3304 = 1;
    pri = EvCameraMove(var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232)
    var_3312 = 0;
    pri = fun_2990()
    var_3320 = 0;
    var_3328 = 4631727036769186611;
    var_3336 = 3;
    OP_PUSH5_C 4655170779716161372, -4589539567259793490, 4656571293647157330, 4656957728003855483, 4639894385062167183
    var_3344 = 4657665835482375782;
    var_3352 = 50;
    pri = EvCameraMove(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280)
    OP_JUMP lab_D520
// lab_D408
    var_8 = 0;
    var_16 = 4628574517030027264;
    var_24 = 0;
    OP_PUSH5_C 4654724421975749427, 4619702425764107387, 4657028998347567923, 4657079026126631731, 4639790591164505129
    var_32 = 4657622954528892518;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2990()
    var_56 = 0;
    var_64 = 4628574517030027264;
    var_72 = 3;
    OP_PUSH5_C 4654700408641798799, 4619702425764107387, 4657056442157797212, 4657067019459656417, 4639790591164505129
    var_80 = 4657650376348889252;
    var_88 = 80;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_D520
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = var_8;
    var_56 = 48;
    pri = fun_09A8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = var_88;
    var_112 = var_8;
    var_120 = 56;
    pri = fun_21A0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = var_8;
    var_136 = 8;
    pri = fun_0A00(var_128)
    var_144 = 1;
    var_152 = 8;
    pri = fun_2398(var_144)
    var_160 = 0;
    pri = fun_2458()
    var_168 = var_8;
    var_176 = 8;
    pri = fun_1208(var_168)
    var_184 = 0;
    var_192 = 4631727036769186611;
    var_200 = 0;
    OP_PUSH5_C 4655545801142163210, -4593398589190496584, 4656865369027122299, 4657326900027997553, 4639283936206425948
    var_208 = 4657716962773067366;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 0;
    pri = fun_2990()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_D750
    var_232 = 1;
    var_240 = 17;
    var_248 = 5527469329213382437;
    var_256 = var_8;
    var_264 = 32;
    pri = fun_8A38(var_256, var_248, var_240, var_232)
    OP_JUMP lab_D790
// lab_D750
    var_8 = 1;
    var_16 = 19;
    var_24 = -2825168353378055098;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_8A38(var_32, var_24, var_16, var_8)
// lab_D790
    var_8 = 5;
    var_16 = var_8;
    var_24 = 16;
    pri = fun_11C8(var_16, var_8)
    var_32 = 0;
    var_40 = 4631727036769186611;
    var_48 = 0;
    OP_PUSH5_C 4656471501971820380, -4588288410988314624, 4656863301945262080, 4657510694391696589, 4640844363108565647
    var_56 = 4657924726490251919;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_2990()
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 0;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_2A58(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = var_96;
    var_192 = var_8;
    var_200 = 56;
    pri = fun_21A0(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = var_8;
    var_216 = 8;
    pri = fun_0BD8(var_208)
    var_224 = 1;
    var_232 = 8;
    pri = fun_2398(var_224)
    var_240 = 0;
    pri = fun_2458()
    var_248 = 2;
    var_256 = 2;
    var_264 = var_8;
    var_272 = 24;
    pri = fun_12B8(var_264, var_256, var_248)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    var_320 = var_104;
    var_328 = var_8;
    var_336 = 56;
    pri = fun_21A0(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_2398(var_344)
    var_360 = 0;
    pri = fun_2458()
    var_368 = var_8;
    var_376 = 8;
    pri = fun_1320(var_368)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH3_C 4656367971956948992, 4658276724142768128, 4607182418800017408
    var_424 = var_8;
    var_432 = 72;
    pri = fun_0820(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 70;
    var_448 = 8;
    pri = fun_0060(var_440)
    var_456 = 0;
    var_464 = 8802641224559852288;
    var_472 = 16;
    pri = fun_07A8(var_464, var_456)
    var_480 = 0;
    var_488 = var_24;
    var_496 = 16;
    pri = fun_07A8(var_488, var_480)
    var_504 = 0;
    var_512 = var_16;
    var_520 = 16;
    pri = fun_07A8(var_512, var_504)
    var_528 = 0;
    var_536 = var_8;
    var_544 = 16;
    pri = fun_07A8(var_536, var_528)
    var_552 = 0;
    var_560 = var_8;
    var_568 = 16;
    pri = fun_0770(var_560, var_552)
    var_576 = 5;
    var_584 = 8;
    pri = fun_0060(var_576)
    var_592 = 3;
    var_600 = 0;
    pri = EvCameraEnd(var_600, var_592)
    var_608 = var_8;
    var_616 = 8;
    pri = fun_0A00(var_608)
    pri = 0;
    return pri;
}
// fun_DC00
fun_DC00() {
    pri = 0;
    return pri;
}
// fun_DC18
fun_DC18() {
    OP_PUSH2_C -5365638758836490511, 1773351177496499754
    var_8 = 16;
    pri = fun_95C0(var_0, var_-8)
    var_16 = pri;
    var_24 = 8;
    pri = fun_06C0(var_16)
    var_32 = 100;
    var_40 = -5940158885650611662;
    pri = WorkSet(var_40, var_32)
    var_48 = -6555523801983802944;
    pri = FlagReset(var_48)
    var_64 = -4109595392289114602;
    pri = WorkGet(var_64)
    OP_ADD_P_C 1
    var_8 = pri;
    var_72 = var_8;
    var_80 = -4109595392289114602;
    pri = WorkSet(var_80, var_72)
    var_88 = -8116684633365034714;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_DD78
fun_DD78() {
    var_8 = 3221248130153244534;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_DDB8
fun_DDB8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9A60()
    var_16 = 0;
    pri = fun_9AB8()
    var_24 = 0;
    pri = fun_9BC0()
    var_32 = 0;
    pri = fun_9BF0()
    var_40 = 0;
    pri = fun_DC00()
    var_48 = 0;
    pri = fun_DC18()
    var_56 = 0;
    pri = fun_DD78()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_DEA8
fun_DEA8() {
    var_8 = 0;
    pri = fun_9AB8()
    var_16 = 0;
    pri = fun_DC18()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_DF40
    var_24 = 17;
    pri = SetNpcLicenseCardFlag(var_24)
    OP_JUMP lab_DF60
// lab_DF40
    var_8 = 19;
    pri = SetNpcLicenseCardFlag(var_8)
// lab_DF60
    pri = 0;
    return pri;
}
