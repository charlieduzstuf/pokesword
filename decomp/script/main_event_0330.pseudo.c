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
    pri = arg_0;
    OP_JZER lab_0318
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0468()
// lab_0318
    pri = CallReloadPlayer()
    pri = arg_1;
    OP_JZER lab_0388
    var_8 = 80;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0398(var_16, var_8)
    var_32 = 0;
    pri = fun_0468()
// lab_0388
    pri = 0;
    return pri;
}
// fun_0398
fun_0398() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03F8
fun_03F8() {
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
// fun_0468
fun_0468() {
    OP_JUMP lab_0480
// lab_0480
    pri = FadeWait_()
    OP_JZER lab_04B8
    pri = 0;
    return pri;
// lab_04B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
    pri = 0;
    return pri;
}
// fun_04F8
fun_04F8() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0520
fun_0520() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0568
// lab_0568
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05A8
    OP_JUMP lab_0618
// lab_05A8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05E8
    OP_JUMP lab_0618
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
// lab_0618
    pri = 0;
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0698
// lab_0698
    var_8 = 0;
    pri = fun_07E0()
    OP_JNZ lab_06D0
    OP_JUMP lab_0700
// lab_06D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0698
// lab_0700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0730
// lab_0730
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0770
    pri = 0;
    return pri;
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0730
    pri = 0;
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07E0
fun_07E0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
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
// fun_09D8
fun_09D8() {
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
// fun_0A98
fun_0A98() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JZER lab_0BB8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1338(var_24)
    OP_JNZ lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    OP_JUMP lab_0BC8
// lab_0BC8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C28
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BC8
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DA0
// lab_0DA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JNZ lab_0E28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E18
    pri = 0;
    return pri;
// lab_0E28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E70
    pri = 0;
    return pri;
// lab_0E70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0ED0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F18(var_8)
    pri = 0;
    return pri;
// lab_0ED0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DA0
    pri = 0;
    return pri;
// lab_0E18
    OP_JUMP lab_0E70
}
// fun_0F18
fun_0F18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FA0
    pri = 0;
    return pri;
// lab_0FA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JZER lab_10D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_ZERO_P_S 64
// lab_10D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1108
    OP_CONST_S 64, 1
// lab_1108
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1140
    OP_CONST_S 72, 1
// lab_1140
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
// lab_0FF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1020
    OP_ZERO_P_S 72
// lab_1020
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
    OP_JUMP lab_11E0
// lab_11E0
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1368
fun_1368() {
    OP_JUMP lab_1380
// lab_1380
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1410
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1400
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    pri = 0;
    return pri;
// lab_1410
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1490
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    pri = 0;
    return pri;
// lab_14A0
    pri = 0;
    return pri;
// lab_1490
    OP_JUMP lab_14B0
// lab_14B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1380
    pri = 0;
    return pri;
// lab_1400
    OP_JUMP lab_14B0
}
// fun_14F0
fun_14F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1368(var_40)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15D8
fun_15D8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
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
// switch_1C58
        case default:
        {
// switch_1C58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CA0
// lab_1CA0
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
            OP_JNZ lab_1D48
            var_88 = 0;
            pri = fun_1FB8()
// lab_1D48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1840
                case default:
                {
// switch_1840_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18B8
// lab_18B8
                    OP_JUMP lab_1CA0
                }
                case 0x0:
                {
// switch_1840_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_18B8
                }
                case 0x1:
                {
// switch_1840_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_18B8
                }
                case 0x2:
                {
// switch_1840_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_18B8
                }
                case 0x3:
                {
// switch_1840_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18B8
                }
                case 0x4:
                {
// switch_1840_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_18B8
                }
                case 0x5:
                {
// switch_1840_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_18B8
                }
            }
        }
        case 0x65:
        {
// switch_1C58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_19F8
                case default:
                {
// switch_19F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A70
// lab_1A70
                    OP_JUMP lab_1CA0
                }
                case 0x0:
                {
// switch_19F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A70
                }
                case 0x1:
                {
// switch_19F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A70
                }
                case 0x2:
                {
// switch_19F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A70
                }
                case 0x3:
                {
// switch_19F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A70
                }
                case 0x4:
                {
// switch_19F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A70
                }
                case 0x5:
                {
// switch_19F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A70
                }
            }
        }
        case 0x66:
        {
// switch_1C58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1BB0
                case default:
                {
// switch_1BB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C28
// lab_1C28
                    OP_JUMP lab_1CA0
                }
                case 0x0:
                {
// switch_1BB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C28
                }
                case 0x1:
                {
// switch_1BB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C28
                }
                case 0x2:
                {
// switch_1BB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C28
                }
                case 0x3:
                {
// switch_1BB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C28
                }
                case 0x4:
                {
// switch_1BB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C28
                }
                case 0x5:
                {
// switch_1BB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C28
                }
            }
        }
    }
}
// fun_1D60
fun_1D60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1640(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CE0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E70
    pri = 1;
    return pri;
// lab_1E70
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1EB8
fun_1EB8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DC8(var_8)
    arg_2 = pri;
// lab_1F08
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1640(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F68
fun_1F68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1D60(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FB8
fun_1FB8() {
    OP_JUMP lab_1FD0
// lab_1FD0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2010
    pri = 0;
    return pri;
// lab_2010
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FD0
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    var_8 = 0;
    pri = fun_1FB8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2100
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_2100
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2140
fun_2140() {
    OP_JUMP lab_2158
// lab_2158
    pri = EvCameraMoveWait_()
    OP_JZER lab_2190
    pri = 0;
    return pri;
// lab_2190
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2158
    pri = 0;
    return pri;
}
// fun_21D0
fun_21D0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2238(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2310()
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2290
fun_2290() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2238(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2310()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2310
fun_2310() {
    OP_JUMP lab_2328
// lab_2328
    pri = IsEasingRunningDof_()
    OP_JZER lab_2380
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2390
// lab_2380
    pri = 0;
    return pri;
// lab_2390
    OP_JUMP lab_2328
    pri = 0;
    return pri;
}
// fun_23B0
fun_23B0() {
    pri = arg_6;
    OP_JNZ lab_23E8
    var_8 = 0;
    pri = fun_11F0()
// lab_23E8
    pri = arg_1;
    switch (pri) {
// switch_3950
        case default:
        {
// switch_3950_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3CA0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3CA0
            pri = 1;
            OP_JUMP lab_3CA8
// lab_3CA0
            pri = 0;
// lab_3CA8
            OP_JZER lab_3E00
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
            OP_JUMP lab_3E60
// lab_3E00
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_3E60
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3EC0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F20
// lab_3EC0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F20
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F20
            pri = arg_2;
            OP_JZER lab_3F60
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F60
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3950_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x1:
        {
// switch_3950_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x2:
        {
// switch_3950_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x3:
        {
// switch_3950_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x4:
        {
// switch_3950_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x5:
        {
// switch_3950_case_0x5
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x6:
        {
// switch_3950_case_0x6
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x7:
        {
// switch_3950_case_0x7
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x8:
        {
// switch_3950_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x9:
        {
// switch_3950_case_0x9
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xa:
        {
// switch_3950_case_0xa
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xb:
        {
// switch_3950_case_0xb
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xc:
        {
// switch_3950_case_0xc
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xd:
        {
// switch_3950_case_0xd
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xe:
        {
// switch_3950_case_0xe
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0xf:
        {
// switch_3950_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x10:
        {
// switch_3950_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x11:
        {
// switch_3950_case_0x11
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x12:
        {
// switch_3950_case_0x12
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x13:
        {
// switch_3950_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x14:
        {
// switch_3950_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x15:
        {
// switch_3950_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x16:
        {
// switch_3950_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x17:
        {
// switch_3950_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x18:
        {
// switch_3950_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x19:
        {
// switch_3950_case_0x19
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3950_case_default
        }
        case 0x1a:
        {
// switch_3950_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3950_case_default
        }
        case 0x1b:
        {
// switch_3950_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3950_case_default
        }
        case 0x1c:
        {
// switch_3950_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3950_case_default
        }
        case 0x1d:
        {
// switch_3950_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x1e:
        {
// switch_3950_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x1f:
        {
// switch_3950_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x20:
        {
// switch_3950_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x21:
        {
// switch_3950_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x22:
        {
// switch_3950_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x23:
        {
// switch_3950_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x24:
        {
// switch_3950_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x25:
        {
// switch_3950_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x26:
        {
// switch_3950_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x27:
        {
// switch_3950_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x28:
        {
// switch_3950_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
        case 0x29:
        {
// switch_3950_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3950_case_default
        }
    }
}
// fun_3F90
fun_3F90() {
    pri = arg_5;
    OP_JNZ lab_3FC8
    var_8 = 0;
    pri = fun_11F0()
// lab_3FC8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4018
    OP_CONST_S -8, -1
// lab_4018
    pri = arg_1;
    switch (pri) {
// switch_5AD0
        case default:
        {
// switch_5AD0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F78
            var_520 = 28280;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CE0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F78
            pri = 1;
            OP_JUMP lab_5F80
// lab_5F78
            pri = 0;
// lab_5F80
            OP_JZER lab_5FD0
            var_8 = 64;
            var_16 = 28376;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6228
// lab_5FD0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6038
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6038
            pri = 1;
            OP_JUMP lab_6040
// lab_6038
            pri = 0;
// lab_6040
            OP_JZER lab_61C8
            var_16 = 28552;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
            OP_JUMP lab_6228
// lab_61C8
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_6228
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6298
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6298
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AD0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1:
        {
// switch_5AD0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2:
        {
// switch_5AD0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3:
        {
// switch_5AD0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x4:
        {
// switch_5AD0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x5:
        {
// switch_5AD0_case_0x5
            var_8 = 2;
            var_16 = 18536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x6:
        {
// switch_5AD0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x7:
        {
// switch_5AD0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x8:
        {
// switch_5AD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x9:
        {
// switch_5AD0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xa:
        {
// switch_5AD0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xb:
        {
// switch_5AD0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xc:
        {
// switch_5AD0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xd:
        {
// switch_5AD0_case_0xd
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xe:
        {
// switch_5AD0_case_0xe
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0xf:
        {
// switch_5AD0_case_0xf
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x10:
        {
// switch_5AD0_case_0x10
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x11:
        {
// switch_5AD0_case_0x11
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x12:
        {
// switch_5AD0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x13:
        {
// switch_5AD0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x14:
        {
// switch_5AD0_case_0x14
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x15:
        {
// switch_5AD0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x16:
        {
// switch_5AD0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x17:
        {
// switch_5AD0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x18:
        {
// switch_5AD0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x19:
        {
// switch_5AD0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1a:
        {
// switch_5AD0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1b:
        {
// switch_5AD0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1c:
        {
// switch_5AD0_case_0x1c
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1d:
        {
// switch_5AD0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1e:
        {
// switch_5AD0_case_0x1e
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x1f:
        {
// switch_5AD0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x20:
        {
// switch_5AD0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x21:
        {
// switch_5AD0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x22:
        {
// switch_5AD0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x23:
        {
// switch_5AD0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x24:
        {
// switch_5AD0_case_0x24
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x25:
        {
// switch_5AD0_case_0x25
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x26:
        {
// switch_5AD0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x27:
        {
// switch_5AD0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x28:
        {
// switch_5AD0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x29:
        {
// switch_5AD0_case_0x29
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2a:
        {
// switch_5AD0_case_0x2a
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2b:
        {
// switch_5AD0_case_0x2b
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2c:
        {
// switch_5AD0_case_0x2c
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2d:
        {
// switch_5AD0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2e:
        {
// switch_5AD0_case_0x2e
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x2f:
        {
// switch_5AD0_case_0x2f
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x30:
        {
// switch_5AD0_case_0x30
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x31:
        {
// switch_5AD0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x32:
        {
// switch_5AD0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x33:
        {
// switch_5AD0_case_0x33
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x34:
        {
// switch_5AD0_case_0x34
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x35:
        {
// switch_5AD0_case_0x35
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x36:
        {
// switch_5AD0_case_0x36
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x37:
        {
// switch_5AD0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x38:
        {
// switch_5AD0_case_0x38
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x39:
        {
// switch_5AD0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3a:
        {
// switch_5AD0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3b:
        {
// switch_5AD0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3c:
        {
// switch_5AD0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3d:
        {
// switch_5AD0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
        case 0x3e:
        {
// switch_5AD0_case_0x3e
            var_8 = 4;
            var_16 = 28176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            OP_JUMP switch_5AD0_case_default
        }
    }
}
// fun_62C8
fun_62C8() {
    pri = arg_4;
    OP_JNZ lab_6300
    var_8 = 0;
    pri = fun_11F0()
// lab_6300
    pri = arg_1;
    switch (pri) {
// switch_76D8
        case default:
        {
// switch_76D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29248;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1308(var_264)
            OP_JZER lab_7CA0
            pri = arg_3;
            switch (pri) {
// switch_7C48
                case default:
                {
// switch_7C48_case_default
                    OP_JUMP lab_7F58
// lab_7F58
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FC8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FC8
                    var_8 = 0;
                    pri = fun_1230()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C48_case_0x1
                    var_8 = 32;
                    var_16 = 29400;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C48_case_default
                }
                case 0x2:
                {
// switch_7C48_case_0x2
                    var_8 = 32;
                    var_16 = 29504;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C48_case_default
                }
                case 0x3:
                {
// switch_7C48_case_0x3
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7C48_case_default
                }
            }
// lab_7CA0
            pri = arg_1;
            OP_JZER lab_7CF0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7CF0
            pri = 0;
            OP_JUMP lab_7CF8
// lab_7CF0
            pri = 1;
// lab_7CF8
            OP_JZER lab_7D60
            var_8 = 29600;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CE0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D60
            pri = 1;
            OP_JUMP lab_7D68
// lab_7D60
            pri = 0;
// lab_7D68
            OP_JZER lab_7DB8
            var_8 = 32;
            var_16 = 29696;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F58
// lab_7DB8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7E20
            var_8 = 32;
            var_16 = 29856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F58
// lab_7E20
            var_16 = 29976;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
// switch_76D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1:
        {
// switch_76D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2:
        {
// switch_76D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3:
        {
// switch_76D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x4:
        {
// switch_76D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x5:
        {
// switch_76D8_case_0x5
            var_8 = 1;
            var_16 = 28728;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_76D8_case_default
        }
        case 0x6:
        {
// switch_76D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x7:
        {
// switch_76D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x8:
        {
// switch_76D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x9:
        {
// switch_76D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xa:
        {
// switch_76D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xb:
        {
// switch_76D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xc:
        {
// switch_76D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xd:
        {
// switch_76D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xe:
        {
// switch_76D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0xf:
        {
// switch_76D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x10:
        {
// switch_76D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x11:
        {
// switch_76D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x12:
        {
// switch_76D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x13:
        {
// switch_76D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x14:
        {
// switch_76D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x15:
        {
// switch_76D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x16:
        {
// switch_76D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x17:
        {
// switch_76D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x18:
        {
// switch_76D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x19:
        {
// switch_76D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1a:
        {
// switch_76D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1b:
        {
// switch_76D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1c:
        {
// switch_76D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1d:
        {
// switch_76D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1e:
        {
// switch_76D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x1f:
        {
// switch_76D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x20:
        {
// switch_76D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x21:
        {
// switch_76D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x22:
        {
// switch_76D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x23:
        {
// switch_76D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x24:
        {
// switch_76D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x25:
        {
// switch_76D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x26:
        {
// switch_76D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x27:
        {
// switch_76D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x28:
        {
// switch_76D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x29:
        {
// switch_76D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2a:
        {
// switch_76D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2b:
        {
// switch_76D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2c:
        {
// switch_76D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2d:
        {
// switch_76D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2e:
        {
// switch_76D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x2f:
        {
// switch_76D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x30:
        {
// switch_76D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x31:
        {
// switch_76D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x32:
        {
// switch_76D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x33:
        {
// switch_76D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x34:
        {
// switch_76D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x35:
        {
// switch_76D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x36:
        {
// switch_76D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x37:
        {
// switch_76D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x38:
        {
// switch_76D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x39:
        {
// switch_76D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3a:
        {
// switch_76D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3b:
        {
// switch_76D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3c:
        {
// switch_76D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3d:
        {
// switch_76D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
        case 0x3e:
        {
// switch_76D8_case_0x3e
            var_8 = 3;
            var_16 = 29144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            OP_JUMP switch_76D8_case_default
        }
    }
}
// fun_7FF8
fun_7FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8768(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30144;
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
    var_424 = 30200;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30216;
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
    OP_JZER lab_81F0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_81F0
    pri = 0;
    return pri;
}
// fun_8208
fun_8208() {
    pri = arg_4;
    OP_JNZ lab_8240
    var_8 = 0;
    pri = fun_11F0()
// lab_8240
    pri = arg_1;
    OP_JNZ lab_82E8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30568;
    var_72 = 30560;
    var_80 = 30416;
    var_88 = 30264;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_82E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8348
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8348
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_83F8
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31024;
    var_72 = 30880;
    var_80 = 30728;
    var_88 = 30576;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_83F8
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_84A8
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31656;
    var_72 = 31504;
    var_80 = 31336;
    var_88 = 31160;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_84A8
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8558
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31856;
    var_72 = 31848;
    var_80 = 31840;
    var_88 = 31664;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8558
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_8608
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32272;
    var_72 = 32144;
    var_80 = 32008;
    var_88 = 31864;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8608
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8668
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8668
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_86C8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_86C8
    var_8 = 0;
    pri = fun_1230()
    pri = 0;
    return pri;
}
// fun_86F0
fun_86F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8728(var_8)
    pri = 0;
    return pri;
}
// fun_8728
fun_8728() {
    var_8 = 32440;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C68(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8768
fun_8768() {
    var_8 = arg_1;
    var_16 = 32624;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0CA0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87B0
fun_87B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_88B0
        case default:
        {
// switch_88B0_case_default
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
// switch_88B0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_88B0_case_default
        }
        case 0x1:
        {
// switch_88B0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_88B0_case_default
        }
        case 0x2:
        {
// switch_88B0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_88B0_case_default
        }
        case 0x3:
        {
// switch_88B0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_88B0_case_default
        }
    }
}
// fun_8970
fun_8970() {
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
    pri = fun_1EB8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FB8()
    pri = 0;
    return pri;
}
// fun_8A08
fun_8A08() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_87B0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8970(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8AB0
fun_8AB0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8B00
// lab_8B00
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32728;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8B78
    OP_JUMP lab_8BA8
// lab_8B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8B00
// lab_8BA8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C30
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_62C8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_15D8(var_56)
// lab_8C30
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8C98
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12C8(var_24, var_16)
// lab_8C98
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12C8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8D58
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D18(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0A98(var_88, var_80, var_72, var_64, var_56)
// lab_8D58
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8D98
    pri = 0;
    return pri;
// lab_8D98
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8EE0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32848;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C68(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8EA8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8EE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B40(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B40(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D18(var_40)
    pri = 0;
    return pri;
// lab_8EA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12C8(var_16, var_8)
}
// fun_8F68
fun_8F68() {
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
    pri = fun_8A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2050(var_112)
    var_128 = 0;
    pri = fun_2110()
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
    pri = fun_8AB0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_90E0
fun_90E0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9150
    OP_CONST_S -8, 1
// lab_9150
    pri = arg_0;
    OP_JNZ lab_9170
    OP_ZERO_P_S -8
// lab_9170
    pri = var_8;
    OP_JZER lab_91F8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_91F8
    pri = 0;
    return pri;
}
// fun_9210
fun_9210() {
    pri = 32984;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9298
// lab_9298
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9418
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9408
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9358
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9358
    pri = 0;
    OP_JUMP lab_9360
// lab_9418
    pri = 0;
    return pri;
// lab_9408
    OP_JUMP lab_9290
// lab_9290
    OP_INC_P_S -936
// lab_9358
    pri = 1;
// lab_9360
    OP_JZER lab_93D8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_93D0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_93D8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_93D0
}
// fun_9438
fun_9438() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_94D0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0468()
    var_56 = 0;
    pri = fun_15B0()
// lab_94D0
    pri = arg_4;
    OP_JZER lab_9508
    var_8 = 1;
    var_16 = 8;
    pri = fun_1608(var_8)
// lab_9508
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9560
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9560
    pri = 0;
    OP_JUMP lab_9568
// lab_9560
    pri = 1;
// lab_9568
    OP_JZER lab_9630
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9630
    var_16 = 0;
    pri = fun_04F8()
    OP_JZER lab_9608
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14F0(var_32, var_24)
    OP_JUMP lab_9630
// lab_9630
    pri = arg_2;
    OP_JZER lab_9708
    var_8 = 0;
    pri = fun_04F8()
    OP_JZER lab_96D8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12C8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0928(var_40)
    OP_JUMP lab_9708
// lab_9708
    pri = arg_3;
    OP_JZER lab_9740
    var_8 = 1;
    var_16 = 8;
    pri = fun_1578(var_8)
// lab_9740
    pri = 0;
    return pri;
// lab_96D8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12C8(var_16, var_8)
// lab_9608
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14F0(var_16, var_8)
}
// fun_9750
fun_9750() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9210(var_24)
    pri = 0;
    return pri;
}
// fun_97B8
fun_97B8() {
    pri = g_mode;
    switch (pri) {
// switch_98C8
        case default:
        {
// switch_98C8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9930
// lab_9930
            pri = 0;
            return pri;
        }
        case 0x8d08ae22024e8108:
        {
// switch_98C8_case_0x8d08ae22024e8108
            var_8 = 0;
            pri = fun_BA08()
            OP_JUMP lab_9930
        }
        case 0x8f106f132d31fbf3:
        {
// switch_98C8_case_0x8f106f132d31fbf3
            var_8 = 0;
            pri = fun_BBE8()
            OP_JUMP lab_9930
        }
        case 0x9628dd1a9aa2d88e:
        {
// switch_98C8_case_0x9628dd1a9aa2d88e
            var_8 = 0;
            pri = fun_BB60()
            OP_JUMP lab_9930
        }
        case 0x0:
        {
// switch_98C8_case_0x0
            var_8 = 0;
            pri = fun_9940()
            OP_JUMP lab_9930
        }
        case 0x6df6441e76e813fc:
        {
// switch_98C8_case_0x6df6441e76e813fc
            var_8 = 0;
            pri = fun_BAF8()
            OP_JUMP lab_9930
        }
    }
}
// fun_9940
fun_9940() {
    pri = 0;
    return pri;
}
// fun_9958
fun_9958() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9438(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_99B0
fun_99B0() {
    var_8 = 5275293038303505846;
    var_16 = 8;
    pri = fun_0630(var_8)
    pri = 0;
    return pri;
}
// fun_99F0
fun_99F0() {
    var_8 = 0;
    pri = fun_0660()
    var_16 = 0;
    var_24 = 5275293038303505846;
    var_32 = 16;
    pri = fun_08F0(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_9A50
fun_9A50() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4586240680532744602, 4649891848469348352, 4657115639863836672, 8802641224559852288
    var_24 = 48;
    pri = fun_0858(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640537203540230144, 4650327255073947648, 4656510908468559872, -7688158225218808343
    var_48 = 48;
    pri = fun_0858(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4600989969312382976, 4647380563911507968, 4654597758236229632, 972678789484826509
    var_72 = 48;
    pri = fun_0858(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4639527412061280666, 4649122190329905152, 4654426234422296576, 5804806806352038632
    var_96 = 48;
    pri = fun_0858(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 33904;
    pri = SoundPostEvent(var_120)
    var_128 = 60;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 34016;
    pri = SoundPostEvent(var_144)
    var_152 = 0;
    var_160 = 8;
    pri = fun_0520(var_152)
    var_168 = 0;
    var_176 = 2;
    var_184 = 972678789484826509;
    var_192 = 24;
    pri = fun_7FF8(var_184, var_176, var_168)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 972678789484826509;
    var_224 = 8;
    pri = fun_0D18(var_216)
    var_232 = 0;
    var_240 = 4631952216750555136;
    var_248 = 0;
    OP_PUSH5_C 4649009160534569779, 4635535393204081787, 4654748611231560499, 4651985230647703634, 4637369202677351711
    var_256 = 4654339592906027827;
    var_264 = 1;
    pri = EvCameraMove(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    pri = fun_2140()
    var_280 = 0;
    var_288 = 4631952216750555136;
    var_296 = 0;
    OP_PUSH5_C 4649283158832211558, 4635535393204081787, 4655246206213826806, 4652238822009533891, 4637368498989909934
    var_304 = 4654837187888294134;
    var_312 = 150;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 10;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 34192;
    pri = SoundPostEvent(var_336)
    var_344 = 80;
    var_352 = 30;
    var_360 = 16;
    pri = fun_0398(var_352, var_344)
    var_368 = 0;
    pri = fun_0468()
    var_376 = 50;
    var_384 = 8;
    pri = fun_0060(var_376)
    var_392 = 0;
    var_400 = 0;
    var_408 = 972678789484826509;
    var_416 = 24;
    pri = fun_7FF8(var_408, var_400, var_392)
    var_424 = 1;
    var_432 = 8;
    pri = fun_0060(var_424)
    var_440 = 972678789484826509;
    var_448 = 8;
    pri = fun_0D18(var_440)
    var_456 = 1;
    var_464 = 0;
    OP_PUSH5_C 4641240890982006784, 5804806806352038632, 4649768703167037440, 4655726296970978918, 4607182418800017408
    var_472 = 8802641224559852288;
    var_480 = 64;
    pri = fun_09D8(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_488 = 1;
    var_496 = 0;
    OP_PUSH5_C 4641240890982006784, 5804806806352038632, 4650538361306480640, 4655714862050050048, 4611686018427387904
    var_504 = -7688158225218808343;
    var_512 = 64;
    pri = fun_09D8(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_520 = 10;
    var_528 = 8;
    pri = fun_0060(var_520)
    var_536 = 0;
    var_544 = 3;
    var_552 = 0;
    var_560 = 100;
    var_568 = -1;
    OP_PUSH2_C -3869192381434854011, -7688158225218808343
    var_576 = 56;
    pri = fun_1EB8(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 1;
    var_592 = 8;
    pri = fun_2050(var_584)
    var_600 = 0;
    pri = fun_2110()
    var_608 = -7688158225218808343;
    var_616 = 8;
    pri = fun_0B40(var_608)
    var_624 = 8802641224559852288;
    var_632 = 8;
    pri = fun_0B40(var_624)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH2_C -7688158225218808343, 5804806806352038632
    var_672 = 48;
    pri = fun_0AE8(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 3;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    OP_PUSH2_C -7688158225218808343, 972678789484826509
    var_728 = 48;
    pri = fun_0AE8(var_720, var_712, var_704, var_696, var_688, var_680)
    var_736 = 5804806806352038632;
    var_744 = 8;
    pri = fun_0B40(var_736)
    var_752 = 972678789484826509;
    var_760 = 8;
    pri = fun_0B40(var_752)
    var_768 = 0;
    pri = fun_2140()
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C 1584094109530837422, 5804806806352038632
    var_816 = 56;
    pri = fun_1EB8(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_2050(var_824)
    var_840 = 0;
    pri = fun_2110()
    var_848 = 1;
    var_856 = 1;
    var_864 = -1;
    OP_PUSH2_C 972678789484826509, 8802641224559852288
    var_872 = 40;
    pri = fun_1270(var_864, var_856, var_848, var_840, var_832)
    var_880 = 1;
    var_888 = 1;
    var_896 = -1;
    OP_PUSH2_C 972678789484826509, -7688158225218808343
    var_904 = 40;
    pri = fun_1270(var_896, var_888, var_880, var_872, var_864)
    var_912 = 0;
    var_920 = 3;
    var_928 = 0;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C -7616838299585352615, 972678789484826509
    var_952 = 56;
    pri = fun_1EB8(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 1;
    var_968 = 8;
    pri = fun_2050(var_960)
    var_976 = 0;
    pri = fun_2110()
    var_984 = 0;
    var_992 = 3;
    var_1000 = -7688158225218808343;
    var_1008 = 24;
    pri = fun_7FF8(var_1000, var_992, var_984)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = -7688158225218808343;
    var_1040 = 8;
    pri = fun_0D18(var_1032)
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    OP_PUSH2_C -3869195679969738644, -7688158225218808343
    var_1088 = 56;
    pri = fun_1EB8(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 1;
    var_1104 = 8;
    pri = fun_2050(var_1096)
    var_1112 = 0;
    pri = fun_2110()
    var_1120 = 0;
    var_1128 = 2;
    var_1136 = 972678789484826509;
    var_1144 = 24;
    pri = fun_7FF8(var_1136, var_1128, var_1120)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_0060(var_1152)
    var_1168 = 972678789484826509;
    var_1176 = 8;
    pri = fun_0D18(var_1168)
    var_1184 = 0;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 100;
    var_1216 = -1;
    OP_PUSH2_C -7616841598120237248, 972678789484826509
    var_1224 = 56;
    pri = fun_1EB8(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_2050(var_1232)
    var_1248 = 0;
    pri = fun_2110()
    var_1256 = 30;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = -1;
    var_1280 = 8802641224559852288;
    var_1288 = 16;
    pri = fun_12C8(var_1280, var_1272)
    var_1296 = -1;
    var_1304 = -7688158225218808343;
    var_1312 = 16;
    pri = fun_12C8(var_1304, var_1296)
    var_1320 = 0;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 100;
    var_1352 = -1;
    OP_PUSH2_C 1584093010019209211, 5804806806352038632
    var_1360 = 56;
    pri = fun_1EB8(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1368 = 1;
    var_1376 = 8;
    pri = fun_2050(var_1368)
    var_1384 = 0;
    pri = fun_2110()
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = -7688158225218808343;
    var_1416 = 24;
    pri = fun_7FF8(var_1408, var_1400, var_1392)
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 972678789484826509;
    var_1448 = 24;
    pri = fun_7FF8(var_1440, var_1432, var_1424)
    var_1456 = 1;
    var_1464 = 8;
    pri = fun_0060(var_1456)
    var_1472 = -7688158225218808343;
    var_1480 = 8;
    pri = fun_0D18(var_1472)
    var_1488 = 972678789484826509;
    var_1496 = 8;
    pri = fun_0D18(var_1488)
    var_1504 = 1;
    var_1512 = 0;
    var_1520 = 4641240890982006784;
    var_1528 = 0;
    var_1536 = 0;
    OP_PUSH4_C 4649808285585637376, 4654954000003629056, 4607182418800017408, 5804806806352038632
    var_1544 = 72;
    pri = fun_0960(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    var_1560 = 4631952216750555136;
    var_1568 = 0;
    OP_PUSH5_C 4649406304134522470, 4635535393204081787, 4655470418624962888, 4652300658543480013, 4637359351053166838
    var_1576 = 4655062367869662659;
    var_1584 = 50;
    pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1592 = 5804806806352038632;
    var_1600 = 8;
    pri = fun_0B40(var_1592)
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    OP_PUSH2_C 8802641224559852288, 5804806806352038632
    var_1640 = 48;
    pri = fun_0AE8(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1648 = 5804806806352038632;
    var_1656 = 8;
    pri = fun_0B40(var_1648)
    var_1664 = 0;
    pri = fun_2140()
    var_1672 = 10;
    var_1680 = 8;
    pri = fun_0060(var_1672)
    var_1688 = 1;
    var_1696 = -1;
    var_1704 = -1;
    var_1712 = 3;
    var_1720 = 0;
    var_1728 = 2;
    var_1736 = 5804806806352038632;
    var_1744 = 56;
    pri = fun_23B0(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1752 = 30;
    var_1760 = 8;
    pri = fun_0060(var_1752)
    var_1768 = 1;
    var_1776 = 0;
    var_1784 = 32;
    var_1792 = 8;
    var_1800 = 32;
    pri = fun_03F8(var_1792, var_1784, var_1776, var_1768)
    var_1808 = 0;
    pri = fun_0468()
    var_1816 = 0;
    var_1824 = 4632022585494732800;
    var_1832 = 0;
    OP_PUSH5_C 4649157462662924206, 4635626872571512750, 4656040141570011300, 4650320218199529882, 4638397290029787382
    var_1840 = 4655362974348696617;
    var_1848 = 1;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 0;
    pri = fun_2140()
    var_1864 = 0;
    var_1872 = 4632022585494732800;
    var_1880 = 0;
    OP_PUSH5_C 4649165203224783749, 4635140624549245092, 4656035655562569974, 4650122745911181312, 4637421979235484959
    var_1888 = 4655477983264961987;
    var_1896 = 300;
    pri = EvCameraMove(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1904 = 16;
    pri = fun_21D0(var_1896, var_1888)
    var_1912 = 3;
    var_1920 = 1;
    OP_PUSH2_C 4633203091547057291, 4612744364339819971
    var_1928 = 32;
    pri = fun_2238(var_1920, var_1912, var_1904, var_1896)
    var_1936 = 1;
    pri = SetPlayerGBand(var_1936)
    var_1944 = 0;
    var_1952 = 0;
    var_1960 = 16;
    pri = fun_02A8(var_1952, var_1944)
    var_1968 = 1;
    var_1976 = -1;
    var_1984 = -1;
    var_1992 = 4;
    var_2000 = 8802641224559852288;
    var_2008 = 40;
    pri = fun_8208(var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2016 = 30;
    var_2024 = 8;
    pri = fun_0060(var_2016)
    var_2032 = 80;
    var_2040 = 8;
    var_2048 = 16;
    pri = fun_0398(var_2040, var_2032)
    var_2056 = 0;
    pri = fun_0468()
    var_2064 = 30;
    var_2072 = 8;
    pri = fun_0060(var_2064)
    var_2080 = 34352;
    pri = SoundPostEvent(var_2080)
    var_2088 = 3;
    var_2096 = 0;
    var_2104 = 3447358626020570520;
    var_2112 = 24;
    pri = fun_1F68(var_2104, var_2096, var_2088)
    var_2120 = 0;
    var_2128 = 8;
    pri = fun_0520(var_2120)
    var_2136 = 1;
    var_2144 = 8;
    pri = fun_2050(var_2136)
    var_2152 = 0;
    pri = fun_2110()
    var_2160 = 8;
    var_2168 = 1077;
    var_2176 = 16;
    pri = fun_90E0(var_2168, var_2160)
    var_2184 = 60;
    var_2192 = 8;
    pri = fun_0060(var_2184)
    var_2200 = 1;
    var_2208 = 5275293038303505846;
    var_2216 = 16;
    pri = fun_08F0(var_2208, var_2200)
    var_2224 = 0;
    var_2232 = -7688158225218808343;
    var_2240 = 16;
    pri = fun_08F0(var_2232, var_2224)
    var_2248 = 1;
    var_2256 = 1;
    OP_PUSH3_C 4650538361306480640, 4655714862050050048, 5275293038303505846
    var_2264 = 40;
    pri = fun_0808(var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2272 = 1;
    OP_PUSH2_C 5804806806352038632, 5275293038303505846
    var_2280 = 24;
    pri = fun_08B0(var_2272, var_2264, var_2256)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2288 = 3;
    var_2296 = 1;
    var_2304 = 32;
    pri = fun_2290(var_2296, var_2288, var_2280, var_2272)
    var_2312 = 0;
    var_2320 = 4631952216750555136;
    var_2328 = 0;
    OP_PUSH5_C 4649406304134522470, 4635535393204081787, 4655470418624962888, 4652300658543480013, 4637359351053166838
    var_2336 = 4655062367869662659;
    var_2344 = 1;
    pri = EvCameraMove(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2352 = 8802641224559852288;
    var_2360 = 8;
    pri = fun_86F0(var_2352)
    var_2368 = 15;
    var_2376 = 8;
    pri = fun_0060(var_2368)
    var_2384 = 8802641224559852288;
    var_2392 = 8;
    pri = fun_0D18(var_2384)
    var_2400 = 0;
    var_2408 = 3;
    var_2416 = 0;
    var_2424 = 100;
    var_2432 = -1;
    OP_PUSH2_C 1584098507577350266, 5804806806352038632
    var_2440 = 56;
    pri = fun_1EB8(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2448 = 1;
    var_2456 = 8;
    pri = fun_2050(var_2448)
    var_2464 = 0;
    pri = fun_2110()
    var_2472 = 1;
    var_2480 = 1;
    var_2488 = -1;
    var_2496 = -1;
    var_2504 = 0;
    var_2512 = 8;
    var_2520 = 5275293038303505846;
    var_2528 = 56;
    pri = fun_3F90(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2536 = 0;
    var_2544 = 3;
    var_2552 = 0;
    var_2560 = 100;
    var_2568 = -1;
    OP_PUSH2_C -3869194580458110433, 5275293038303505846
    var_2576 = 56;
    pri = fun_1EB8(var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2584 = 1;
    var_2592 = 8;
    pri = fun_2050(var_2584)
    var_2600 = 0;
    pri = fun_2110()
    var_2608 = 1;
    var_2616 = 1;
    var_2624 = -1;
    OP_PUSH2_C 5275293038303505846, 5804806806352038632
    var_2632 = 40;
    pri = fun_1270(var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2640 = 0;
    var_2648 = 3;
    var_2656 = 0;
    var_2664 = 100;
    var_2672 = -1;
    OP_PUSH2_C 1584097408065722055, 5804806806352038632
    var_2680 = 56;
    pri = fun_1EB8(var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2688 = 1;
    var_2696 = 8;
    pri = fun_2050(var_2688)
    var_2704 = 0;
    pri = fun_2110()
    var_2712 = 1;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 8;
    var_2744 = 5275293038303505846;
    var_2752 = 40;
    pri = fun_62C8(var_2744, var_2736, var_2728, var_2720, var_2712)
    var_2760 = 1;
    var_2768 = 1;
    var_2776 = -1;
    OP_PUSH2_C 8802641224559852288, 5804806806352038632
    var_2784 = 40;
    pri = fun_1270(var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2792 = 0;
    var_2800 = 3;
    var_2808 = 0;
    var_2816 = 100;
    var_2824 = -1;
    OP_PUSH2_C 1584091910507581000, 5804806806352038632
    var_2832 = 56;
    pri = fun_1EB8(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2840 = 1;
    var_2848 = 8;
    pri = fun_2050(var_2840)
    var_2856 = 0;
    pri = fun_2110()
    var_2864 = 5275293038303505846;
    var_2872 = 8;
    pri = fun_0D18(var_2864)
    var_2880 = 1;
    var_2888 = 1;
    var_2896 = -1;
    var_2904 = -1;
    var_2912 = 0;
    var_2920 = 23;
    var_2928 = 5275293038303505846;
    var_2936 = 56;
    pri = fun_3F90(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2944 = 0;
    var_2952 = 3;
    var_2960 = 0;
    var_2968 = 100;
    var_2976 = -1;
    OP_PUSH2_C -3869197878992995066, 5275293038303505846
    var_2984 = 56;
    pri = fun_1EB8(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928)
    var_2992 = 1;
    var_3000 = 8;
    pri = fun_2050(var_2992)
    var_3008 = 0;
    pri = fun_2110()
    var_3016 = 10;
    var_3024 = 8;
    pri = fun_0060(var_3016)
    var_3032 = 1;
    var_3040 = 3;
    var_3048 = 0;
    var_3056 = 23;
    var_3064 = 5275293038303505846;
    var_3072 = 40;
    pri = fun_62C8(var_3064, var_3056, var_3048, var_3040, var_3032)
    var_3080 = 5275293038303505846;
    var_3088 = 8;
    pri = fun_0D18(var_3080)
    var_3096 = 0;
    var_3104 = 0;
    var_3112 = 0;
    var_3120 = 0;
    OP_PUSH2_C 5275293038303505846, 8802641224559852288
    var_3128 = 48;
    pri = fun_0AE8(var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
    var_3136 = 0;
    var_3144 = 0;
    var_3152 = 0;
    var_3160 = 0;
    OP_PUSH2_C 8802641224559852288, 5275293038303505846
    var_3168 = 48;
    pri = fun_0AE8(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3176 = 8802641224559852288;
    var_3184 = 8;
    pri = fun_0B40(var_3176)
    var_3192 = 5275293038303505846;
    var_3200 = 8;
    pri = fun_0B40(var_3192)
    var_3208 = 0;
    var_3216 = 3;
    var_3224 = 0;
    var_3232 = 100;
    var_3240 = -1;
    OP_PUSH2_C -3869196779481366855, 5275293038303505846
    var_3248 = 56;
    pri = fun_1EB8(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192)
    var_3256 = 1;
    var_3264 = 8;
    pri = fun_2050(var_3256)
    var_3272 = 0;
    pri = fun_2110()
    var_3280 = 1;
    var_3288 = 0;
    var_3296 = 32;
    var_3304 = 8;
    var_3312 = 32;
    pri = fun_03F8(var_3304, var_3296, var_3288, var_3280)
    var_3320 = 0;
    pri = fun_0468()
    var_3328 = 3;
    var_3336 = 1;
    pri = EvCameraEnd(var_3336, var_3328)
    var_3344 = 0;
    var_3352 = 5275293038303505846;
    var_3360 = 16;
    pri = fun_08F0(var_3352, var_3344)
    var_3368 = 30;
    var_3376 = 8;
    pri = fun_0060(var_3368)
    pri = 0;
    return pri;
}
// fun_B758
fun_B758() {
    pri = 0;
    return pri;
}
// fun_B770
fun_B770() {
    var_8 = -7688158225218808343;
    var_16 = 8;
    pri = fun_07B0(var_8)
    var_24 = 5275293038303505846;
    var_32 = 8;
    pri = fun_07B0(var_24)
    var_40 = 340;
    var_48 = 8;
    pri = fun_9750(var_40)
    var_56 = -542323289986350154;
    pri = VanishFlagReset(var_56)
    var_64 = 9204041731284319614;
    pri = VanishFlagReset(var_64)
    var_72 = -2539670835808990616;
    pri = VanishFlagReset(var_72)
    var_80 = -3674018664616446908;
    pri = VanishFlagSet(var_80)
    var_88 = -2946393096541456471;
    pri = FlagReset(var_88)
    var_96 = 3945789460015947337;
    pri = FlagReset(var_96)
    var_104 = -5291113835877623842;
    pri = FlagReset(var_104)
    var_112 = 1;
    var_120 = 1077;
    pri = ItemAdd(var_120, var_112)
    var_128 = 1293907258682306415;
    pri = FlagSet(var_128)
    var_136 = 6520226307844289844;
    pri = FlagSet(var_136)
    var_144 = 3447853788456145154;
    pri = FlagReset(var_144)
    pri = 0;
    return pri;
}
// fun_B9B0
fun_B9B0() {
    var_8 = 80;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0398(var_16, var_8)
    var_32 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_BA08
fun_BA08() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9958()
    var_16 = 0;
    pri = fun_99B0()
    var_24 = 0;
    pri = fun_99F0()
    var_32 = 0;
    pri = fun_9A50()
    var_40 = 0;
    pri = fun_B758()
    var_48 = 0;
    pri = fun_B770()
    var_56 = 0;
    pri = fun_B9B0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BAF8
fun_BAF8() {
    var_8 = 0;
    pri = fun_99B0()
    var_16 = 1;
    pri = SetPlayerGBand(var_16)
    var_24 = 0;
    pri = fun_B770()
    pri = 0;
    return pri;
}
// fun_BB60
fun_BB60() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -7616840498608609037;
    var_88 = 80;
    pri = fun_8F68(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BBE8
fun_BBE8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 1584099607088978477;
    var_88 = 80;
    pri = fun_8F68(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
