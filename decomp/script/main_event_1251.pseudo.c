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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
}
// fun_0190
fun_0190() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    OP_JUMP lab_04B0
// lab_04B0
    pri = IsLoadedLogoFade_()
    OP_JZER lab_04E8
    pri = 0;
    return pri;
// lab_04E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B0
    pri = 0;
    return pri;
}
// fun_0528
fun_0528() {
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_05C8
fun_05C8() {
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
// fun_0688
fun_0688() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0890
fun_0890() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_09B0
fun_09B0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0B08
fun_0B08() {
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
// fun_0B80
fun_0B80() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A8(var_8)
    OP_JZER lab_0CF8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_16D8(var_24)
    OP_JNZ lab_0CF8
    pri = 0;
    return pri;
// lab_0CF8
    OP_JUMP lab_0D08
// lab_0D08
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D68
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D08
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0EA0
    pri = 0;
    return pri;
// lab_0EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0EE0
// lab_0EE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A8(var_8)
    OP_JNZ lab_0F68
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F58
    pri = 0;
    return pri;
// lab_0F68
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0FB0
    pri = 0;
    return pri;
// lab_0FB0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1010
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1058(var_8)
    pri = 0;
    return pri;
// lab_1010
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EE0
    pri = 0;
    return pri;
// lab_0F58
    OP_JUMP lab_0FB0
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10E0
    pri = 0;
    return pri;
// lab_10E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A8(var_8)
    OP_JZER lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1138
    OP_ZERO_P_S 64
// lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1248
    OP_CONST_S 64, 1
// lab_1248
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1280
    OP_CONST_S 72, 1
// lab_1280
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
// lab_1138
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1160
    OP_ZERO_P_S 72
// lab_1160
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
    OP_JUMP lab_1320
// lab_1320
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1488(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1500(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1540(var_24)
    pri = 0;
    return pri;
}
// fun_1638
fun_1638() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 392;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_16D8
fun_16D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1708
fun_1708() {
    OP_JUMP lab_1720
// lab_1720
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_17B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_17A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_17B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1840
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1830
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_1840
    pri = 0;
    return pri;
// lab_1830
    OP_JUMP lab_1850
// lab_1850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1720
    pri = 0;
    return pri;
// lab_17A0
    OP_JUMP lab_1850
}
// fun_1890
fun_1890() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1708(var_40)
    pri = 0;
    return pri;
}
// fun_1918
fun_1918() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_19A8
fun_19A8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_19E0
fun_19E0() {
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
// switch_1FF8
        case default:
        {
// switch_1FF8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2040
// lab_2040
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
            OP_JNZ lab_20E8
            var_88 = 0;
            pri = fun_2308()
// lab_20E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1FF8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1BE0
                case default:
                {
// switch_1BE0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C58
// lab_1C58
                    OP_JUMP lab_2040
                }
                case 0x0:
                {
// switch_1BE0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1C58
                }
                case 0x1:
                {
// switch_1BE0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1C58
                }
                case 0x2:
                {
// switch_1BE0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1C58
                }
                case 0x3:
                {
// switch_1BE0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C58
                }
                case 0x4:
                {
// switch_1BE0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1C58
                }
                case 0x5:
                {
// switch_1BE0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1C58
                }
            }
        }
        case 0x65:
        {
// switch_1FF8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1D98
                case default:
                {
// switch_1D98_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E10
// lab_1E10
                    OP_JUMP lab_2040
                }
                case 0x0:
                {
// switch_1D98_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1E10
                }
                case 0x1:
                {
// switch_1D98_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1E10
                }
                case 0x2:
                {
// switch_1D98_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1E10
                }
                case 0x3:
                {
// switch_1D98_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E10
                }
                case 0x4:
                {
// switch_1D98_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1E10
                }
                case 0x5:
                {
// switch_1D98_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1E10
                }
            }
        }
        case 0x66:
        {
// switch_1FF8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1F50
                case default:
                {
// switch_1F50_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1FC8
// lab_1FC8
                    OP_JUMP lab_2040
                }
                case 0x0:
                {
// switch_1F50_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1FC8
                }
                case 0x1:
                {
// switch_1F50_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1FC8
                }
                case 0x2:
                {
// switch_1F50_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1FC8
                }
                case 0x3:
                {
// switch_1F50_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1FC8
                }
                case 0x4:
                {
// switch_1F50_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1FC8
                }
                case 0x5:
                {
// switch_1F50_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1FC8
                }
            }
        }
    }
}
// fun_2100
fun_2100() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_19E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    pri = 400;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 480;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0E20(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2210
    pri = 1;
    return pri;
// lab_2210
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2258
fun_2258() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_22A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2168(var_8)
    arg_2 = pri;
// lab_22A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_19E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    OP_JUMP lab_2320
// lab_2320
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2360
    pri = 0;
    return pri;
// lab_2360
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2320
    pri = 0;
    return pri;
}
// fun_23A0
fun_23A0() {
    var_8 = 0;
    pri = fun_2308()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2450
    var_32 = 528;
    pri = SoundPostEvent(var_32)
// lab_2450
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_24C0
// lab_24C0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2500
    OP_JUMP lab_2530
// lab_2500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24C0
// lab_2530
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
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
// fun_25E8
fun_25E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2660()
    return pri;
}
// fun_2660
fun_2660() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_26A0
fun_26A0() {
    OP_JUMP lab_26B8
// lab_26B8
    pri = EvCameraMoveWait_()
    OP_JZER lab_26F0
    pri = 0;
    return pri;
// lab_26F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_26B8
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0770(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0890(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_09B0(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_2890
fun_2890() {
    pri = arg_6;
    OP_JNZ lab_28C8
    var_8 = 0;
    pri = fun_1330()
// lab_28C8
    pri = arg_1;
    switch (pri) {
// switch_3E30
        case default:
        {
// switch_3E30_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4180
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4180
            pri = 1;
            OP_JUMP lab_4188
// lab_4180
            pri = 0;
// lab_4188
            OP_JZER lab_42E0
            var_16 = 8376;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E20(var_24, var_16)
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
            var_64 = 8480;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4340
// lab_42E0
            var_8 = 64;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4340
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_43A0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4400
// lab_43A0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4400
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4400
            pri = arg_2;
            OP_JZER lab_4440
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4440
            var_8 = 0;
            pri = fun_1370()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3E30_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1:
        {
// switch_3E30_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x2:
        {
// switch_3E30_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x3:
        {
// switch_3E30_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x4:
        {
// switch_3E30_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x5:
        {
// switch_3E30_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x6:
        {
// switch_3E30_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x7:
        {
// switch_3E30_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x8:
        {
// switch_3E30_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x9:
        {
// switch_3E30_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xa:
        {
// switch_3E30_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xb:
        {
// switch_3E30_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xc:
        {
// switch_3E30_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xd:
        {
// switch_3E30_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xe:
        {
// switch_3E30_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0xf:
        {
// switch_3E30_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x10:
        {
// switch_3E30_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x11:
        {
// switch_3E30_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x12:
        {
// switch_3E30_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5904;
            var_72 = 5896;
            var_80 = 5888;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x13:
        {
// switch_3E30_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x14:
        {
// switch_3E30_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x15:
        {
// switch_3E30_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x16:
        {
// switch_3E30_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x17:
        {
// switch_3E30_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x18:
        {
// switch_3E30_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x19:
        {
// switch_3E30_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5928;
            var_72 = 5920;
            var_80 = 5912;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1a:
        {
// switch_3E30_case_0x1a
            var_8 = 1;
            var_16 = 5936;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6072;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DA8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6152;
            var_88 = 6144;
            var_96 = 6136;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1b:
        {
// switch_3E30_case_0x1b
            var_8 = 3;
            var_16 = 6160;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6296;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DA8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6376;
            var_88 = 6368;
            var_96 = 6360;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1c:
        {
// switch_3E30_case_0x1c
            var_8 = 2;
            var_16 = 6384;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6520;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DA8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6600;
            var_88 = 6592;
            var_96 = 6584;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1d:
        {
// switch_3E30_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6608;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1e:
        {
// switch_3E30_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6744;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x1f:
        {
// switch_3E30_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6880;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x20:
        {
// switch_3E30_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7016;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x21:
        {
// switch_3E30_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7136;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x22:
        {
// switch_3E30_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7256;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x23:
        {
// switch_3E30_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7392;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x24:
        {
// switch_3E30_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7528;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x25:
        {
// switch_3E30_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7664;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x26:
        {
// switch_3E30_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x27:
        {
// switch_3E30_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7944;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x28:
        {
// switch_3E30_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
        case 0x29:
        {
// switch_3E30_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8232;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E30_case_default
        }
    }
}
// fun_4470
fun_4470() {
    pri = arg_4;
    OP_JNZ lab_44A8
    var_8 = 0;
    pri = fun_1330()
// lab_44A8
    pri = arg_1;
    switch (pri) {
// switch_5880
        case default:
        {
// switch_5880_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 9016;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_16A8(var_264)
            OP_JZER lab_5E48
            pri = arg_3;
            switch (pri) {
// switch_5DF0
                case default:
                {
// switch_5DF0_case_default
                    OP_JUMP lab_6100
// lab_6100
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6170
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6170
                    var_8 = 0;
                    pri = fun_1370()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5DF0_case_0x1
                    var_8 = 32;
                    var_16 = 9168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
                case 0x2:
                {
// switch_5DF0_case_0x2
                    var_8 = 32;
                    var_16 = 9272;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
                case 0x3:
                {
// switch_5DF0_case_0x3
                    var_8 = 32;
                    var_16 = 9072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
            }
// lab_5E48
            pri = arg_1;
            OP_JZER lab_5E98
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5E98
            pri = 0;
            OP_JUMP lab_5EA0
// lab_5E98
            pri = 1;
// lab_5EA0
            OP_JZER lab_5F08
            var_8 = 9368;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0E20(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F08
            pri = 1;
            OP_JUMP lab_5F10
// lab_5F08
            pri = 0;
// lab_5F10
            OP_JZER lab_5F60
            var_8 = 32;
            var_16 = 9464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6100
// lab_5F60
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5FC8
            var_8 = 32;
            var_16 = 9624;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6100
// lab_5FC8
            var_16 = 9744;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E20(var_24, var_16)
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
            var_176 = 9848;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9864;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5880_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1:
        {
// switch_5880_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2:
        {
// switch_5880_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3:
        {
// switch_5880_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x4:
        {
// switch_5880_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x5:
        {
// switch_5880_case_0x5
            var_8 = 1;
            var_16 = 8496;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1058(var_40)
            OP_JUMP switch_5880_case_default
        }
        case 0x6:
        {
// switch_5880_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x7:
        {
// switch_5880_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x8:
        {
// switch_5880_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x9:
        {
// switch_5880_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xa:
        {
// switch_5880_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xb:
        {
// switch_5880_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xc:
        {
// switch_5880_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xd:
        {
// switch_5880_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xe:
        {
// switch_5880_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xf:
        {
// switch_5880_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x10:
        {
// switch_5880_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x11:
        {
// switch_5880_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x12:
        {
// switch_5880_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x13:
        {
// switch_5880_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x14:
        {
// switch_5880_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x15:
        {
// switch_5880_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x16:
        {
// switch_5880_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x17:
        {
// switch_5880_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x18:
        {
// switch_5880_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x19:
        {
// switch_5880_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1a:
        {
// switch_5880_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1b:
        {
// switch_5880_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1c:
        {
// switch_5880_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1d:
        {
// switch_5880_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1e:
        {
// switch_5880_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1f:
        {
// switch_5880_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x20:
        {
// switch_5880_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x21:
        {
// switch_5880_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x22:
        {
// switch_5880_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x23:
        {
// switch_5880_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x24:
        {
// switch_5880_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x25:
        {
// switch_5880_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x26:
        {
// switch_5880_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x27:
        {
// switch_5880_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x28:
        {
// switch_5880_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x29:
        {
// switch_5880_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2a:
        {
// switch_5880_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2b:
        {
// switch_5880_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2c:
        {
// switch_5880_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2d:
        {
// switch_5880_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2e:
        {
// switch_5880_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2f:
        {
// switch_5880_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x30:
        {
// switch_5880_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x31:
        {
// switch_5880_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x32:
        {
// switch_5880_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x33:
        {
// switch_5880_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x34:
        {
// switch_5880_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x35:
        {
// switch_5880_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x36:
        {
// switch_5880_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x37:
        {
// switch_5880_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x38:
        {
// switch_5880_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x39:
        {
// switch_5880_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3a:
        {
// switch_5880_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3b:
        {
// switch_5880_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3c:
        {
// switch_5880_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8592;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3d:
        {
// switch_5880_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8768;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3e:
        {
// switch_5880_case_0x3e
            var_8 = 3;
            var_16 = 8912;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
    }
}
// fun_61A0
fun_61A0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_62A0
        case default:
        {
// switch_62A0_case_default
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
// switch_62A0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_62A0_case_default
        }
        case 0x1:
        {
// switch_62A0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_62A0_case_default
        }
        case 0x2:
        {
// switch_62A0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_62A0_case_default
        }
        case 0x3:
        {
// switch_62A0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_62A0_case_default
        }
    }
}
// fun_6360
fun_6360() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_63B0
// lab_63B0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9912;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6428
    OP_JUMP lab_6458
// lab_6428
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_63B0
// lab_6458
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_64E0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4470(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1978(var_56)
// lab_64E0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6548
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B0(var_24, var_16)
// lab_6548
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6608
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E58(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0BD8(var_88, var_80, var_72, var_64, var_56)
// lab_6608
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6648
    pri = 0;
    return pri;
// lab_6648
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6790
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 10032;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0DA8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6758
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_6790
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C80(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C80(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E58(var_40)
    pri = 0;
    return pri;
// lab_6758
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
}
// fun_6818
fun_6818() {
    pri = 10168;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_68A0
// lab_68A0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6A20
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6A10
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6960
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6960
    pri = 0;
    OP_JUMP lab_6968
// lab_6A20
    pri = 0;
    return pri;
// lab_6A10
    OP_JUMP lab_6898
// lab_6898
    OP_INC_P_S -936
// lab_6960
    pri = 1;
// lab_6968
    OP_JZER lab_69E0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_69D8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_69E0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_69D8
}
// fun_6A40
fun_6A40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6AD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 11088;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1950()
// lab_6AD8
    pri = arg_4;
    OP_JZER lab_6B10
    var_8 = 1;
    var_16 = 8;
    pri = fun_19A8(var_8)
// lab_6B10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6B68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6B68
    pri = 0;
    OP_JUMP lab_6B70
// lab_6B68
    pri = 1;
// lab_6B70
    OP_JZER lab_6C38
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6C38
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_6C10
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1890(var_32, var_24)
    OP_JUMP lab_6C38
// lab_6C38
    pri = arg_2;
    OP_JZER lab_6D10
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_6CE0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AD0(var_40)
    OP_JUMP lab_6D10
// lab_6D10
    pri = arg_3;
    OP_JZER lab_6D48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1918(var_8)
// lab_6D48
    pri = 0;
    return pri;
// lab_6CE0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
// lab_6C10
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1890(var_16, var_8)
}
// fun_6D58
fun_6D58() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0C80(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_61A0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    pri = arg_1;
    OP_LOAD_I 
    var_128 = pri;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_2258(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_23A0(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_6EF0
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2490(var_184, var_176, var_168)
// lab_6EF0
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2490(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2490(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2578(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_7758
        case default:
        {
// switch_7758_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7758_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_2258(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_23A0(var_72)
            var_88 = 0;
            pri = fun_2460()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_6360(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_71B8
            var_136 = 1;
            var_144 = 0;
            var_152 = 4641240890982006784;
            var_160 = 0;
            var_168 = 0;
            var_176 = arg_3;
            pri = float(var_176)
            var_184 = pri;
            var_192 = arg_2;
            pri = float(var_192)
            var_200 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_208 = 72;
            pri = fun_0B08(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_0C80(var_216)
// lab_71B8
            OP_JUMP switch_7758_case_default
        }
        case 0x1:
        {
// switch_7758_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_2258(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_23A0(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_25E8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_73D8
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            pri = arg_1;
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_192 = pri;
            var_200 = arg_0;
            var_208 = 56;
            pri = fun_2258(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_23A0(var_216)
            var_232 = 0;
            pri = fun_2460()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_6360(var_264, var_256, var_248, var_240)
            var_280 = 11136;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_73D8
            var_8 = 0;
            pri = fun_2460()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_6360(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_7528
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0B08(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0C80(var_136)
// lab_7528
            OP_JUMP switch_7758_case_default
        }
        case 0x2:
        {
// switch_7758_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_75F8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_2258(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_23A0(var_72)
// lab_75F8
            var_8 = 0;
            pri = fun_2460()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_6360(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_7748
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0B08(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0C80(var_136)
// lab_7748
            OP_JUMP switch_7758_case_default
        }
    }
}
// fun_77B8
fun_77B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 0;
    pri = fun_0498()
    pri = arg_1;
    OP_JZER lab_7830
    var_32 = 11248;
    pri = SoundPostEvent(var_32)
// lab_7830
    var_8 = 11448;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 11712;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0338(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_78B0
fun_78B0() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_7900
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_77B8(var_16, var_8)
// lab_7900
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C80(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_79A0
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_79A0
    pri = 1;
    OP_JUMP lab_79A8
// lab_79A0
    pri = 0;
// lab_79A8
    OP_JZER lab_7B40
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_7A88
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_0528(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_7B30
// lab_7B40
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0688(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_7A88
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_05C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7B30
    OP_JUMP lab_7C00
// lab_7C00
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_7C78
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0730(var_32, var_24, var_16)
// lab_7C78
    var_8 = 11728;
    pri = SoundPostEvent(var_8)
    var_16 = 12000;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02D8(var_24, var_16)
    var_40 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_7CE8
fun_7CE8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = arg_6;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_4;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_0B08(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0C80(var_96)
    pri = EvCameraStart()
    var_112 = 0;
    var_120 = 4630544841867001856;
    var_128 = 6;
    var_136 = arg_6;
    pri = float(var_136)
    var_144 = pri;
    pri = arg_5;
    alt = 4639230104117130035;
    var_152 = pri;
    var_160 = alt;
    var_168 = 16;
    pri = fun_0060(var_160, var_152)
    var_176 = pri;
    var_184 = arg_4;
    pri = float(var_184)
    var_192 = pri;
    pri = arg_6;
    alt = 4649161684787574866;
    var_200 = pri;
    var_208 = alt;
    var_216 = 16;
    pri = fun_0060(var_208, var_200)
    var_224 = pri;
    pri = arg_5;
    alt = 4641312315257347113;
    var_232 = pri;
    var_240 = alt;
    var_248 = 16;
    pri = fun_0060(var_240, var_232)
    var_256 = pri;
    var_264 = arg_4;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 10;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 8;
    var_296 = 8;
    pri = fun_00B8(var_288)
    var_304 = 12016;
    pri = SoundPostEvent(var_304)
    var_312 = 1;
    var_320 = 4607182418800017408;
    pri = arg_6;
    OP_ADD_P_C 169
    var_328 = pri;
    pri = float(var_328)
    var_336 = pri;
    var_344 = arg_5;
    pri = float(var_344)
    var_352 = pri;
    pri = arg_4;
    OP_ADD_P_C 206
    var_360 = pri;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 12272;
    var_384 = 48;
    pri = fun_1638(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 2;
    var_400 = 4607182418800017408;
    pri = arg_6;
    OP_ADD_P_C 169
    var_408 = pri;
    pri = float(var_408)
    var_416 = pri;
    var_424 = arg_5;
    pri = float(var_424)
    var_432 = pri;
    pri = arg_4;
    OP_ADD_P_C -199
    var_440 = pri;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 12488;
    var_464 = 48;
    pri = fun_1638(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 15;
    var_480 = 8;
    pri = fun_00B8(var_472)
    var_488 = 3;
    var_496 = 2;
    var_504 = 101;
    var_512 = arg_0;
    var_520 = 32;
    pri = fun_2100(var_512, var_504, var_496, var_488)
    var_528 = 12704;
    pri = SoundPostEvent(var_528)
    var_536 = 12944;
    pri = SoundPostEvent(var_536)
    var_544 = 15;
    var_552 = 8;
    pri = fun_00B8(var_544)
    var_560 = 5;
    var_568 = 5;
    var_576 = 8802641224559852288;
    var_584 = 24;
    pri = fun_1578(var_576, var_568, var_560)
    pri = arg_11;
    alt = -1;
    OP_JEQ lab_82D8
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 3;
    var_624 = 0;
    var_632 = arg_11;
    var_640 = 8802641224559852288;
    var_648 = 56;
    pri = fun_2890(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
// lab_82D8
    var_8 = 15;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 13168;
    pri = SoundPostEvent(var_24)
    var_32 = 45;
    var_40 = 8;
    pri = fun_00B8(var_32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_15E0(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 180;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 40;
    pri = fun_0BD8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 30;
    var_128 = 8;
    pri = fun_00B8(var_120)
    var_136 = 0;
    pri = fun_2308()
    pri = MsgWinClose()
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0C80(var_144)
    var_160 = arg_3;
    var_168 = 8;
    pri = fun_0460(var_160)
    var_176 = 0;
    pri = fun_0498()
    var_184 = 13424;
    pri = SoundPostEvent(var_184)
    var_192 = arg_2;
    var_200 = arg_1;
    var_208 = 16;
    pri = fun_0DA8(var_200, var_192)
    var_216 = 1;
    var_224 = 0;
    var_232 = 0;
    var_240 = 90;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 48;
    pri = fun_0B80(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 60;
    var_264 = 8;
    pri = fun_00B8(var_256)
    var_272 = 13656;
    pri = SoundPostEvent(var_272)
    var_280 = 13856;
    pri = SoundPostEvent(var_280)
    var_288 = 1;
    var_296 = 0;
    var_304 = 14120;
    var_312 = 8;
    var_320 = 32;
    pri = fun_0338(var_312, var_304, var_296, var_288)
    var_328 = 0;
    pri = fun_03A8()
    var_336 = 3;
    var_344 = 0;
    pri = EvCameraEnd(var_344, var_336)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0C80(var_352)
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = arg_10;
    pri = float(var_408)
    var_416 = pri;
    var_424 = arg_9;
    pri = float(var_424)
    var_432 = pri;
    var_440 = arg_8;
    var_448 = arg_7;
    var_456 = 72;
    pri = fun_0528(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 1;
    var_472 = 180;
    pri = float(var_472)
    var_480 = pri;
    var_488 = 8802641224559852288;
    var_496 = 24;
    pri = fun_0730(var_488, var_480, var_472)
    var_504 = 14136;
    pri = SoundPostEvent(var_504)
    var_512 = 14408;
    var_520 = 8;
    var_528 = 16;
    pri = fun_02D8(var_520, var_512)
    var_536 = 0;
    pri = fun_03A8()
    var_544 = -3293621181990616472;
    pri = FlagReset(var_544)
    pri = 0;
    return pri;
}
// fun_87A0
fun_87A0() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_78B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_8840
fun_8840() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6818(var_24)
    pri = 0;
    return pri;
}
// fun_88A8
fun_88A8() {
    pri = g_mode;
    switch (pri) {
// switch_89B8
        case default:
        {
// switch_89B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8A20
// lab_8A20
            pri = 0;
            return pri;
        }
        case 0xf2f042f669cf1d41:
        {
// switch_89B8_case_0xf2f042f669cf1d41
            var_8 = 0;
            pri = fun_AB28()
            OP_JUMP lab_8A20
        }
        case 0x0:
        {
// switch_89B8_case_0x0
            var_8 = 0;
            pri = fun_8A30()
            OP_JUMP lab_8A20
        }
        case 0x1db1269637d2ad03:
        {
// switch_89B8_case_0x1db1269637d2ad03
            var_8 = 0;
            pri = fun_AA50()
            OP_JUMP lab_8A20
        }
        case 0x3d9dc62779432557:
        {
// switch_89B8_case_0x3d9dc62779432557
            var_8 = 0;
            pri = fun_A998()
            OP_JUMP lab_8A20
        }
        case 0x5b4f202b037decdb:
        {
// switch_89B8_case_0x5b4f202b037decdb
            var_8 = 0;
            pri = fun_A8A8()
            OP_JUMP lab_8A20
        }
    }
}
// fun_8A30
fun_8A30() {
    pri = 0;
    return pri;
}
// fun_8A48
fun_8A48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6A40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8AA0
fun_8AA0() {
    pri = 0;
    return pri;
}
// fun_8AB8
fun_8AB8() {
    pri = 0;
    return pri;
}
// fun_8AD0
fun_8AD0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 14900;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 2603;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_06D8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 10;
    var_96 = 8;
    pri = fun_00B8(var_88)
    var_104 = 8387474953581570053;
    pri = FlagGet(var_104)
    alt = 1;
    OP_JEQ lab_9A60
    pri = EvCameraStart()
    var_112 = 0;
    var_120 = 4631952216750555136;
    var_128 = 0;
    OP_PUSH5_C 4668844295324067430, 4649953948886085140, 4659800141483516887, 4669056814429042115, 4652021294629094687
    var_136 = 4660212062519746888;
    var_144 = 1;
    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_152 = 0;
    pri = fun_26A0()
    var_160 = 14424;
    pri = SoundPostEvent(var_160)
    var_168 = 14696;
    var_176 = 8;
    var_184 = 16;
    pri = fun_02D8(var_176, var_168)
    var_192 = 0;
    pri = fun_03A8()
    var_200 = 0;
    var_208 = 4631952216750555136;
    var_216 = 3;
    OP_PUSH5_C 4669148882035193938, 4645446654899645317, 4659340765525432074, 4669140069449497313, 4648647729072287252
    var_224 = 4660284762228575437;
    var_232 = 180;
    pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 60;
    var_248 = 8;
    pri = fun_00B8(var_240)
    var_256 = 7;
    var_264 = 8802641224559852288;
    var_272 = 16;
    pri = fun_1500(var_264, var_256)
    var_280 = 0;
    var_288 = 1;
    OP_PUSH3_C -4620693217682128896, 4600877379321698714, 8802641224559852288
    var_296 = 40;
    pri = fun_13F0(var_288, var_280, var_272, var_264, var_256)
    var_304 = 1;
    var_312 = 0;
    var_320 = 4641240890982006784;
    var_328 = 0;
    var_336 = 0;
    var_344 = 14400;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 2600;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_376 = 72;
    pri = fun_0B08(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0C80(var_384)
    var_400 = 1;
    var_408 = 0;
    var_416 = 14712;
    var_424 = 1;
    var_432 = 32;
    pri = fun_0338(var_424, var_416, var_408, var_400)
    var_440 = 0;
    pri = fun_03A8()
    var_448 = 0;
    var_456 = 4631051496825081037;
    var_464 = 0;
    OP_PUSH5_C 4669226513053673062, -4596390668192930857, 4657697369475860398, 4669047518058229268, 4641435460559658025
    var_472 = 4658172930245106074;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    pri = fun_26A0()
    var_496 = 0;
    var_504 = 4630446325625153126;
    var_512 = 2;
    OP_PUSH5_C 4669248640725182054, -4591067976383332352, 4657638589584239493, 4669069645729738260, 4640444316797915628
    var_520 = 4658114150353485169;
    var_528 = 180;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 14760;
    var_544 = 15;
    var_552 = 16;
    pri = fun_02D8(var_544, var_536)
    var_560 = 90;
    var_568 = 8;
    pri = fun_00B8(var_560)
    var_576 = 0;
    var_584 = 4630249293141455667;
    var_592 = 0;
    OP_PUSH5_C 4669210300754721505, 4634475639916766167, 4657479292339607306, 4669046374566136381, 4637801970454044344
    var_600 = 4658220561088821330;
    var_608 = 1;
    pri = EvCameraMove(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_616 = 0;
    pri = fun_26A0()
    var_624 = 0;
    var_632 = 4630249293141455667;
    var_640 = 2;
    OP_PUSH5_C 4669217865394720604, 4634475639916766167, 4657506054452627374, 4669053966693926175, 4637799155704277238
    var_648 = 4658247411162771620;
    var_656 = 240;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 15;
    var_672 = 8;
    pri = fun_00B8(var_664)
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    OP_PUSH2_C 8802641224559852288, 5981245577942742835
    var_712 = 48;
    pri = fun_0C28(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 0;
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    OP_PUSH2_C 5981245577942742835, 8802641224559852288
    var_752 = 48;
    pri = fun_0C28(var_744, var_736, var_728, var_720, var_712, var_704)
    var_760 = 5981245577942742835;
    var_768 = 8;
    pri = fun_0C80(var_760)
    var_776 = 8802641224559852288;
    var_784 = 8;
    pri = fun_0C80(var_776)
    var_792 = 0;
    var_800 = 3;
    var_808 = 0;
    var_816 = 100;
    var_824 = -1;
    OP_PUSH2_C 577191432812407121, 5981245577942742835
    var_832 = 56;
    pri = fun_2258(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_840 = 1;
    var_848 = 8;
    pri = fun_23A0(var_840)
    var_856 = 7;
    var_864 = 8802641224559852288;
    var_872 = 16;
    pri = fun_1500(var_864, var_856)
    var_880 = 0;
    var_888 = 1;
    OP_PUSH3_C -4620693217682128896, -4622494657533077094, 8802641224559852288
    var_896 = 40;
    pri = fun_13F0(var_888, var_880, var_872, var_864, var_856)
    var_904 = 1;
    var_912 = 8;
    pri = fun_00B8(var_904)
    var_920 = 0;
    var_928 = 4631952216750555136;
    var_936 = 0;
    OP_PUSH5_C 4669140707166241423, 4637729490647541350, 4657894643852115968, 4669164104773680497, 4637813229453112771
    var_944 = 4657709991869347267;
    var_952 = 1;
    pri = EvCameraMove(var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_960 = 0;
    pri = fun_26A0()
    var_968 = 0;
    var_976 = 4631952216750555136;
    var_984 = 3;
    OP_PUSH5_C 4669140707166241423, 4637729490647541350, 4657894643852115968, 4669116325495895491, 4637813229453112771
    var_992 = 4657712014970742374;
    var_1000 = 360;
    pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 0;
    var_1016 = 3;
    var_1024 = 2;
    var_1032 = 100;
    var_1040 = -1;
    OP_PUSH2_C 577188134277522488, 5981245577942742835
    var_1048 = 56;
    pri = fun_2258(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1056 = 30;
    var_1064 = 8;
    pri = fun_00B8(var_1056)
    var_1072 = 8802641224559852288;
    var_1080 = 8;
    pri = fun_1448(var_1072)
    var_1088 = 3;
    var_1096 = 8;
    pri = fun_00B8(var_1088)
    var_1104 = 0;
    var_1112 = 12;
    OP_PUSH3_C -4620693217682128896, 4600877379321698714, 8802641224559852288
    var_1120 = 40;
    pri = fun_13F0(var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1128 = 0;
    pri = fun_2308()
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_23A0(var_1136)
    var_1152 = 0;
    var_1160 = 4631952216750555136;
    var_1168 = 0;
    OP_PUSH5_C 4668838561370928579, 4648321745864884224, 4659587759817495675, 4668976583065563300, 4649959490424689132
    var_1176 = 4659986904528610918;
    var_1184 = 1;
    pri = EvCameraMove(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1192 = 0;
    pri = fun_26A0()
    var_1200 = 0;
    var_1208 = 4631952216750555136;
    var_1216 = 2;
    OP_PUSH5_C 4668806312694885908, 4648321745864884224, 4659766298515613942, 4668944433345567130, 4649958698776317133
    var_1224 = 4660165069392775741;
    var_1232 = 360;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 0;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 100;
    var_1272 = -1;
    OP_PUSH2_C 577189233789150699, 5981245577942742835
    var_1280 = 56;
    pri = fun_2258(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_23A0(var_1288)
    var_1304 = 0;
    var_1312 = 3;
    var_1320 = 0;
    var_1328 = 100;
    var_1336 = -1;
    OP_PUSH2_C 577194731347291754, 5981245577942742835
    var_1344 = 56;
    pri = fun_2258(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1352 = 1;
    var_1360 = 8;
    pri = fun_23A0(var_1352)
    var_1368 = 0;
    pri = fun_2460()
    var_1376 = 1;
    var_1384 = 0;
    var_1392 = 11088;
    var_1400 = 8;
    var_1408 = 32;
    pri = fun_0338(var_1400, var_1392, var_1384, var_1376)
    var_1416 = 0;
    pri = fun_03A8()
    var_1424 = 8802641224559852288;
    var_1432 = 8;
    pri = fun_1540(var_1424)
    var_1440 = 8;
    var_1448 = 1;
    var_1456 = 0;
    pri = float(var_1456)
    var_1464 = pri;
    var_1472 = 0;
    pri = float(var_1472)
    var_1480 = pri;
    var_1488 = 8802641224559852288;
    var_1496 = 40;
    pri = fun_13F0(var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1504 = 0;
    var_1512 = 4631952216750555136;
    var_1520 = 0;
    OP_PUSH5_C 4669248024998670500, 4640063270048193577, 4657712146912137708, 4669412792313650872, 4645191040436419953
    var_1528 = 4657718743981904364;
    var_1536 = 1;
    pri = EvCameraMove(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1544 = 15;
    var_1552 = 8;
    pri = fun_00B8(var_1544)
    var_1560 = 14808;
    var_1568 = 8;
    var_1576 = 16;
    pri = fun_02D8(var_1568, var_1560)
    var_1584 = 0;
    pri = fun_03A8()
    var_1592 = 8387474953581570053;
    pri = FlagSet(var_1592)
    OP_JUMP lab_A5D8
// lab_9A60
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 14393;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 2603;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_80 = 72;
    pri = fun_0B08(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 10;
    var_96 = 8;
    pri = fun_00B8(var_88)
    var_104 = 14856;
    pri = SoundPostEvent(var_104)
    var_112 = 15128;
    var_120 = 8;
    var_128 = 16;
    pri = fun_02D8(var_120, var_112)
    var_136 = 0;
    pri = fun_03A8()
    var_144 = 60;
    var_152 = 8;
    pri = fun_00B8(var_144)
    var_160 = 8802641224559852288;
    var_168 = 8;
    pri = fun_0C80(var_160)
    pri = EvCameraStart()
    var_176 = 100;
    var_184 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, 5981245577942742835, 8802641224559852288
    var_192 = 15;
    var_200 = 56;
    pri = fun_2730(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH2_C 8802641224559852288, 5981245577942742835
    var_240 = 48;
    pri = fun_0C28(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH2_C 5981245577942742835, 8802641224559852288
    var_280 = 48;
    pri = fun_0C28(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 0;
    pri = fun_26A0()
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C 577191432812407121, 5981245577942742835
    var_336 = 56;
    pri = fun_2258(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_23A0(var_344)
    var_360 = 0;
    var_368 = 6684720708667037172;
    var_376 = 0;
    var_384 = 24;
    pri = fun_2490(var_376, var_368, var_360)
    var_392 = 0;
    var_400 = 6684724007201921805;
    var_408 = 1;
    var_416 = 24;
    pri = fun_2490(var_408, var_400, var_392)
    var_424 = 5981245577942742835;
    var_432 = 8;
    pri = fun_0C80(var_424)
    var_440 = 8802641224559852288;
    var_448 = 8;
    pri = fun_0C80(var_440)
    var_464 = 0;
    var_472 = 1;
    var_480 = 0;
    var_488 = 1;
    var_496 = 32;
    pri = fun_2578(var_488, var_480, var_472, var_464)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A5A8
        case default:
        {
// switch_A5A8_case_default
            OP_JUMP lab_A5D0
// lab_A5D0
        }
        case 0x0:
        {
// switch_A5A8_case_0x0
            var_8 = 7;
            var_16 = 8802641224559852288;
            var_24 = 16;
            pri = fun_1500(var_16, var_8)
            var_32 = 0;
            var_40 = 1;
            OP_PUSH3_C -4620693217682128896, -4622494657533077094, 8802641224559852288
            var_48 = 40;
            pri = fun_13F0(var_40, var_32, var_24, var_16, var_8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_00B8(var_56)
            var_72 = 0;
            var_80 = 4631952216750555136;
            var_88 = 0;
            OP_PUSH5_C 4669140707166241423, 4637729490647541350, 4657894643852115968, 4669164104773680497, 4637813229453112771
            var_96 = 4657709991869347267;
            var_104 = 1;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            pri = fun_26A0()
            var_120 = 0;
            var_128 = 4631952216750555136;
            var_136 = 3;
            OP_PUSH5_C 4669140707166241423, 4637729490647541350, 4657894643852115968, 4669116325495895491, 4637813229453112771
            var_144 = 4657712014970742374;
            var_152 = 360;
            pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_160 = 0;
            var_168 = 3;
            var_176 = 2;
            var_184 = 100;
            var_192 = -1;
            OP_PUSH2_C 577188134277522488, 5981245577942742835
            var_200 = 56;
            pri = fun_2258(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
            var_208 = 30;
            var_216 = 8;
            pri = fun_00B8(var_208)
            var_224 = 8802641224559852288;
            var_232 = 8;
            pri = fun_1448(var_224)
            var_240 = 3;
            var_248 = 8;
            pri = fun_00B8(var_240)
            var_256 = 0;
            var_264 = 12;
            OP_PUSH3_C -4620693217682128896, 4600877379321698714, 8802641224559852288
            var_272 = 40;
            pri = fun_13F0(var_264, var_256, var_248, var_240, var_232)
            var_280 = 0;
            pri = fun_2308()
            var_288 = 1;
            var_296 = 8;
            pri = fun_23A0(var_288)
            var_304 = 0;
            var_312 = 4631952216750555136;
            var_320 = 0;
            OP_PUSH5_C 4668838561370928579, 4648321745864884224, 4659587759817495675, 4668976583065563300, 4649959490424689132
            var_328 = 4659986904528610918;
            var_336 = 1;
            pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
            var_344 = 0;
            pri = fun_26A0()
            var_352 = 0;
            var_360 = 4631952216750555136;
            var_368 = 2;
            OP_PUSH5_C 4668806312694885908, 4648321745864884224, 4659766298515613942, 4668944433345567130, 4649958698776317133
            var_376 = 4660165069392775741;
            var_384 = 360;
            pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
            var_392 = 0;
            var_400 = 3;
            var_408 = 0;
            var_416 = 100;
            var_424 = -1;
            OP_PUSH2_C 577189233789150699, 5981245577942742835
            var_432 = 56;
            pri = fun_2258(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
            var_440 = 1;
            var_448 = 8;
            pri = fun_23A0(var_440)
            var_456 = 0;
            var_464 = 3;
            var_472 = 0;
            var_480 = 100;
            var_488 = -1;
            OP_PUSH2_C 577194731347291754, 5981245577942742835
            var_496 = 56;
            pri = fun_2258(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
            var_504 = 1;
            var_512 = 8;
            pri = fun_23A0(var_504)
            var_520 = 0;
            pri = fun_2460()
            var_528 = 1;
            var_536 = 0;
            var_544 = 11088;
            var_552 = 8;
            var_560 = 32;
            pri = fun_0338(var_552, var_544, var_536, var_528)
            var_568 = 0;
            pri = fun_03A8()
            var_576 = 8802641224559852288;
            var_584 = 8;
            pri = fun_1540(var_576)
            var_592 = 8;
            var_600 = 1;
            var_608 = 0;
            pri = float(var_608)
            var_616 = pri;
            var_624 = 0;
            pri = float(var_624)
            var_632 = pri;
            var_640 = 8802641224559852288;
            var_648 = 40;
            pri = fun_13F0(var_640, var_632, var_624, var_616, var_608)
            var_656 = 0;
            var_664 = 4631952216750555136;
            var_672 = 0;
            OP_PUSH5_C 4669248024998670500, 4640063270048193577, 4657712146912137708, 4669412792313650872, 4645191040436419953
            var_680 = 4657718743981904364;
            var_688 = 1;
            pri = EvCameraMove(var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
            var_696 = 15;
            var_704 = 8;
            pri = fun_00B8(var_696)
            var_712 = 14808;
            var_720 = 8;
            var_728 = 16;
            pri = fun_02D8(var_720, var_712)
            var_736 = 0;
            pri = fun_03A8()
            OP_JUMP lab_A5D0
        }
    }
// lab_A5D8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 577195830858919965, 5981245577942742835
    var_48 = 56;
    pri = fun_2258(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_23A0(var_56)
    var_72 = 0;
    pri = fun_2460()
    var_80 = 15144;
    pri = SoundPostEvent(var_80)
    var_88 = 3;
    var_96 = 45;
    pri = EvCameraEnd(var_96, var_88)
    var_104 = 45;
    var_112 = 8;
    pri = fun_00B8(var_104)
    var_120 = 15368;
    pri = SoundPostEvent(var_120)
    pri = 0;
    return pri;
}
// fun_A700
fun_A700() {
    pri = 0;
    return pri;
}
// fun_A718
fun_A718() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_A758
fun_A758() {
    var_8 = 1246;
    var_16 = 8;
    pri = fun_8840(var_8)
    var_24 = 4768062365477788911;
    pri = VanishFlagReset(var_24)
    var_32 = 8089259950129131903;
    pri = FlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_A7E0
fun_A7E0() {
    var_8 = 1240;
    var_16 = 8;
    pri = fun_8840(var_8)
    pri = 0;
    return pri;
}
// fun_A818
fun_A818() {
    pri = 0;
    return pri;
}
// fun_A830
fun_A830() {
    var_8 = 180;
    var_16 = -3561974131919890138;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C -7806788798280494145, -786951205769402670
    var_40 = 6;
    var_48 = 56;
    pri = fun_87A0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_A8A8
fun_A8A8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8A48()
    var_16 = 0;
    pri = fun_8AA0()
    var_24 = 0;
    pri = fun_8AB8()
    var_32 = 0;
    pri = fun_8AD0()
    var_40 = 0;
    pri = fun_A700()
    var_48 = 0;
    pri = fun_A718()
    var_56 = 0;
    pri = fun_A818()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A998
fun_A998() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_AA40
    var_8 = 0;
    pri = fun_8AA0()
    var_16 = 0;
    pri = fun_A718()
    var_24 = 0;
    pri = fun_A758()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
// lab_AA40
    pri = 0;
    return pri;
}
// fun_AA50
fun_AA50() {
    pri = 15632;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 14410;
    var_80 = 2600;
    OP_PUSH_P_ADR -64
    var_88 = 5981245577942742835;
    var_96 = 32;
    pri = fun_6D58(var_88, var_80, var_72, var_64)
    OP_JZER lab_AB10
    var_104 = 0;
    pri = fun_A7E0()
    var_112 = 0;
    pri = fun_A830()
// lab_AB10
    pri = 0;
    return pri;
}
// fun_AB28
fun_AB28() {
    var_8 = 0;
    pri = fun_A758()
    var_16 = 24;
    var_24 = 26500;
    var_32 = 20000;
    OP_PUSH2_C -7805798138303665259, -787941865746231556
    var_40 = -675;
    var_48 = 1615;
    var_56 = 2600;
    var_64 = 6;
    var_72 = 15696;
    OP_PUSH2_C -2430204150725827206, -338373122892973657
    var_80 = 96;
    pri = fun_7CE8(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    pri = 0;
    return pri;
}
