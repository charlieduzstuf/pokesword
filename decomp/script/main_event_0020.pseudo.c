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
    pri = AnyInputWait_()
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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
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
// fun_0758
fun_0758() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1338(var_8)
    OP_JZER lab_0878
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1368(var_24)
    OP_JNZ lab_0878
    pri = 0;
    return pri;
// lab_0878
    OP_JUMP lab_0888
// lab_0888
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08E8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0888
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A20
    pri = 0;
    return pri;
// lab_0A20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A60
// lab_0A60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1338(var_8)
    OP_JNZ lab_0AE8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AD8
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D00(var_8)
    pri = 0;
    return pri;
// lab_0B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A60
    pri = 0;
    return pri;
// lab_0AD8
    OP_JUMP lab_0B30
}
// fun_0BD8
fun_0BD8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C20
// lab_0C20
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C78
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CB8
    pri = 0;
    return pri;
// lab_0CB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C20
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D88
    pri = 0;
    return pri;
// lab_0D88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1338(var_8)
    OP_JZER lab_0EB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE0
    OP_ZERO_P_S 64
// lab_0EB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF0
    OP_CONST_S 64, 1
// lab_0EF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F28
    OP_CONST_S 72, 1
// lab_0F28
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
// lab_0DE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E08
    OP_ZERO_P_S 72
// lab_0E08
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
    OP_JUMP lab_0FC8
// lab_0FC8
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1018
fun_1018() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = 440;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1188(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1200(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1240(var_24)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1398
fun_1398() {
    OP_JUMP lab_13B0
// lab_13B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1440
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1430
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D8(var_8)
    pri = 0;
    return pri;
// lab_1440
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_14C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D8(var_8)
    pri = 0;
    return pri;
// lab_14D0
    pri = 0;
    return pri;
// lab_14C0
    OP_JUMP lab_14E0
// lab_14E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13B0
    pri = 0;
    return pri;
// lab_1430
    OP_JUMP lab_14E0
}
// fun_1520
fun_1520() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1398(var_40)
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1638
fun_1638() {
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
// fun_1708
fun_1708() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
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
// switch_1D58
        case default:
        {
// switch_1D58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DA0
// lab_1DA0
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
            OP_JNZ lab_1E48
            var_88 = 0;
            pri = fun_20C0()
// lab_1E48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1940
                case default:
                {
// switch_1940_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19B8
// lab_19B8
                    OP_JUMP lab_1DA0
                }
                case 0x0:
                {
// switch_1940_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19B8
                }
                case 0x1:
                {
// switch_1940_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19B8
                }
                case 0x2:
                {
// switch_1940_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19B8
                }
                case 0x3:
                {
// switch_1940_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19B8
                }
                case 0x4:
                {
// switch_1940_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19B8
                }
                case 0x5:
                {
// switch_1940_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19B8
                }
            }
        }
        case 0x65:
        {
// switch_1D58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1AF8
                case default:
                {
// switch_1AF8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B70
// lab_1B70
                    OP_JUMP lab_1DA0
                }
                case 0x0:
                {
// switch_1AF8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B70
                }
                case 0x1:
                {
// switch_1AF8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B70
                }
                case 0x2:
                {
// switch_1AF8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B70
                }
                case 0x3:
                {
// switch_1AF8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B70
                }
                case 0x4:
                {
// switch_1AF8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B70
                }
                case 0x5:
                {
// switch_1AF8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B70
                }
            }
        }
        case 0x66:
        {
// switch_1D58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CB0
                case default:
                {
// switch_1CB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D28
// lab_1D28
                    OP_JUMP lab_1DA0
                }
                case 0x0:
                {
// switch_1CB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D28
                }
                case 0x1:
                {
// switch_1CB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D28
                }
                case 0x2:
                {
// switch_1CB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D28
                }
                case 0x3:
                {
// switch_1CB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D28
                }
                case 0x4:
                {
// switch_1CB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D28
                }
                case 0x5:
                {
// switch_1CB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D28
                }
            }
        }
    }
}
// fun_1E60
fun_1E60() {
    pri = arg_1;
    var_8 = pri;
    pri = PlayerGetSex()
    OP_JNZ lab_1EB8
    pri = arg_0;
    var_8 = pri;
// lab_1EB8
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_3;
    var_32 = arg_4;
    var_40 = arg_2;
    var_48 = var_8;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1740(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F20
fun_1F20() {
    pri = 488;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 568;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09A0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FC8
    pri = 1;
    return pri;
// lab_1FC8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2010
fun_2010() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2060
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F20(var_8)
    arg_2 = pri;
// lab_2060
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1740(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    OP_JUMP lab_20D8
// lab_20D8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2118
    pri = 0;
    return pri;
// lab_2118
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20D8
    pri = 0;
    return pri;
}
// fun_2158
fun_2158() {
    var_8 = 0;
    pri = fun_20C0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2208
    var_32 = 616;
    pri = SoundPostEvent(var_32)
// lab_2208
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    OP_JUMP lab_2260
// lab_2260
    pri = EvCameraMoveWait_()
    OP_JZER lab_2298
    pri = 0;
    return pri;
// lab_2298
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2260
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2340(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2418()
    pri = 0;
    return pri;
}
// fun_2340
fun_2340() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2398
fun_2398() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2340(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2418()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2418
fun_2418() {
    OP_JUMP lab_2430
// lab_2430
    pri = IsEasingRunningDof_()
    OP_JZER lab_2488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2498
// lab_2488
    pri = 0;
    return pri;
// lab_2498
    OP_JUMP lab_2430
    pri = 0;
    return pri;
}
// fun_24B8
fun_24B8() {
    pri = arg_6;
    OP_JNZ lab_24F0
    var_8 = 0;
    pri = fun_0FD8()
// lab_24F0
    pri = arg_1;
    switch (pri) {
// switch_3A58
        case default:
        {
// switch_3A58_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3DA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3DA8
            pri = 1;
            OP_JUMP lab_3DB0
// lab_3DA8
            pri = 0;
// lab_3DB0
            OP_JZER lab_3F08
            var_16 = 8464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09A0(var_24, var_16)
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
            var_64 = 8568;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3F68
// lab_3F08
            var_8 = 64;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3F68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3FC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4028
// lab_3FC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4028
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4028
            pri = arg_2;
            OP_JZER lab_4068
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4068
            var_8 = 0;
            pri = fun_1018()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A58_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1:
        {
// switch_3A58_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x2:
        {
// switch_3A58_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x3:
        {
// switch_3A58_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x4:
        {
// switch_3A58_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x5:
        {
// switch_3A58_case_0x5
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
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x6:
        {
// switch_3A58_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x7:
        {
// switch_3A58_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x8:
        {
// switch_3A58_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x9:
        {
// switch_3A58_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xa:
        {
// switch_3A58_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xb:
        {
// switch_3A58_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xc:
        {
// switch_3A58_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xd:
        {
// switch_3A58_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xe:
        {
// switch_3A58_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xf:
        {
// switch_3A58_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x10:
        {
// switch_3A58_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x11:
        {
// switch_3A58_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x12:
        {
// switch_3A58_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5992;
            var_72 = 5984;
            var_80 = 5976;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x13:
        {
// switch_3A58_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x14:
        {
// switch_3A58_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x15:
        {
// switch_3A58_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x16:
        {
// switch_3A58_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x17:
        {
// switch_3A58_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x18:
        {
// switch_3A58_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x19:
        {
// switch_3A58_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6016;
            var_72 = 6008;
            var_80 = 6000;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1a:
        {
// switch_3A58_case_0x1a
            var_8 = 1;
            var_16 = 6024;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0960(var_24, var_16, var_8)
            var_40 = 6160;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0928(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6240;
            var_88 = 6232;
            var_96 = 6224;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1b:
        {
// switch_3A58_case_0x1b
            var_8 = 3;
            var_16 = 6248;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0960(var_24, var_16, var_8)
            var_40 = 6384;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0928(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6464;
            var_88 = 6456;
            var_96 = 6448;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1c:
        {
// switch_3A58_case_0x1c
            var_8 = 2;
            var_16 = 6472;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0960(var_24, var_16, var_8)
            var_40 = 6608;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0928(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6688;
            var_88 = 6680;
            var_96 = 6672;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1d:
        {
// switch_3A58_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1e:
        {
// switch_3A58_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1f:
        {
// switch_3A58_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x20:
        {
// switch_3A58_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7104;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x21:
        {
// switch_3A58_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7224;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x22:
        {
// switch_3A58_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x23:
        {
// switch_3A58_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x24:
        {
// switch_3A58_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x25:
        {
// switch_3A58_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x26:
        {
// switch_3A58_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x27:
        {
// switch_3A58_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x28:
        {
// switch_3A58_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x29:
        {
// switch_3A58_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
    }
}
// fun_4098
fun_4098() {
    pri = arg_4;
    OP_JNZ lab_40D0
    var_8 = 0;
    pri = fun_0FD8()
// lab_40D0
    pri = arg_1;
    switch (pri) {
// switch_54A8
        case default:
        {
// switch_54A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 9104;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1338(var_264)
            OP_JZER lab_5A70
            pri = arg_3;
            switch (pri) {
// switch_5A18
                case default:
                {
// switch_5A18_case_default
                    OP_JUMP lab_5D28
// lab_5D28
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5D98
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5D98
                    var_8 = 0;
                    pri = fun_1018()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5A18_case_0x1
                    var_8 = 32;
                    var_16 = 9256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5A18_case_default
                }
                case 0x2:
                {
// switch_5A18_case_0x2
                    var_8 = 32;
                    var_16 = 9360;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5A18_case_default
                }
                case 0x3:
                {
// switch_5A18_case_0x3
                    var_8 = 32;
                    var_16 = 9160;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5A18_case_default
                }
            }
// lab_5A70
            pri = arg_1;
            OP_JZER lab_5AC0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5AC0
            pri = 0;
            OP_JUMP lab_5AC8
// lab_5AC0
            pri = 1;
// lab_5AC8
            OP_JZER lab_5B30
            var_8 = 9456;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09A0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B30
            pri = 1;
            OP_JUMP lab_5B38
// lab_5B30
            pri = 0;
// lab_5B38
            OP_JZER lab_5B88
            var_8 = 32;
            var_16 = 9552;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5D28
// lab_5B88
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5BF0
            var_8 = 32;
            var_16 = 9712;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5D28
// lab_5BF0
            var_16 = 9832;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09A0(var_24, var_16)
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
            var_176 = 9936;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9952;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_54A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1:
        {
// switch_54A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2:
        {
// switch_54A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3:
        {
// switch_54A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x4:
        {
// switch_54A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x5:
        {
// switch_54A8_case_0x5
            var_8 = 1;
            var_16 = 8584;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0960(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D00(var_40)
            OP_JUMP switch_54A8_case_default
        }
        case 0x6:
        {
// switch_54A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x7:
        {
// switch_54A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x8:
        {
// switch_54A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x9:
        {
// switch_54A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xa:
        {
// switch_54A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xb:
        {
// switch_54A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xc:
        {
// switch_54A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xd:
        {
// switch_54A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xe:
        {
// switch_54A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0xf:
        {
// switch_54A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x10:
        {
// switch_54A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x11:
        {
// switch_54A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x12:
        {
// switch_54A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x13:
        {
// switch_54A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x14:
        {
// switch_54A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x15:
        {
// switch_54A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x16:
        {
// switch_54A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x17:
        {
// switch_54A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x18:
        {
// switch_54A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x19:
        {
// switch_54A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1a:
        {
// switch_54A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1b:
        {
// switch_54A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1c:
        {
// switch_54A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1d:
        {
// switch_54A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1e:
        {
// switch_54A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x1f:
        {
// switch_54A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x20:
        {
// switch_54A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x21:
        {
// switch_54A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x22:
        {
// switch_54A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x23:
        {
// switch_54A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x24:
        {
// switch_54A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x25:
        {
// switch_54A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x26:
        {
// switch_54A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x27:
        {
// switch_54A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x28:
        {
// switch_54A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x29:
        {
// switch_54A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2a:
        {
// switch_54A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2b:
        {
// switch_54A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2c:
        {
// switch_54A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2d:
        {
// switch_54A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2e:
        {
// switch_54A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x2f:
        {
// switch_54A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x30:
        {
// switch_54A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x31:
        {
// switch_54A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x32:
        {
// switch_54A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x33:
        {
// switch_54A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x34:
        {
// switch_54A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x35:
        {
// switch_54A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x36:
        {
// switch_54A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x37:
        {
// switch_54A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x38:
        {
// switch_54A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x39:
        {
// switch_54A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3a:
        {
// switch_54A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3b:
        {
// switch_54A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3c:
        {
// switch_54A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8680;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3d:
        {
// switch_54A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8856;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
        case 0x3e:
        {
// switch_54A8_case_0x3e
            var_8 = 3;
            var_16 = 9000;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0960(var_24, var_16, var_8)
            OP_JUMP switch_54A8_case_default
        }
    }
}
// fun_5DC8
fun_5DC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6538(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 10000;
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
    var_424 = 10056;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 10072;
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
    OP_JZER lab_5FC0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5FC0
    pri = 0;
    return pri;
}
// fun_5FD8
fun_5FD8() {
    pri = arg_4;
    OP_JNZ lab_6010
    var_8 = 0;
    pri = fun_0FD8()
// lab_6010
    pri = arg_1;
    OP_JNZ lab_60B8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 10424;
    var_72 = 10416;
    var_80 = 10272;
    var_88 = 10120;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_60B8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6118
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6118
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_61C8
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 10880;
    var_72 = 10736;
    var_80 = 10584;
    var_88 = 10432;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_61C8
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_6278
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 11512;
    var_72 = 11360;
    var_80 = 11192;
    var_88 = 11016;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6278
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_6328
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 11712;
    var_72 = 11704;
    var_80 = 11696;
    var_88 = 11520;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6328
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_63D8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 12128;
    var_72 = 12000;
    var_80 = 11864;
    var_88 = 11720;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0D38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_63D8
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6438
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6438
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_6498
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6498
    var_8 = 0;
    pri = fun_1018()
    pri = 0;
    return pri;
}
// fun_64C0
fun_64C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_64F8(var_8)
    pri = 0;
    return pri;
}
// fun_64F8
fun_64F8() {
    var_8 = 12296;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0928(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6538
fun_6538() {
    var_8 = arg_1;
    var_16 = 12480;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0960(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6580
fun_6580() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6680
        case default:
        {
// switch_6680_case_default
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
// switch_6680_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6680_case_default
        }
        case 0x1:
        {
// switch_6680_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6680_case_default
        }
        case 0x2:
        {
// switch_6680_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6680_case_default
        }
        case 0x3:
        {
// switch_6680_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6680_case_default
        }
    }
}
// fun_6740
fun_6740() {
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
    pri = fun_2010(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_20C0()
    pri = 0;
    return pri;
}
// fun_67D8
fun_67D8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6580(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6740(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6880
fun_6880() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_68D0
// lab_68D0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 12584;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6948
    OP_JUMP lab_6978
// lab_6948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_68D0
// lab_6978
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6A00
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4098(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1608(var_56)
// lab_6A00
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6A68
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10B0(var_24, var_16)
// lab_6A68
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_10B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6B28
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09D8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_07B0(var_88, var_80, var_72, var_64, var_56)
// lab_6B28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6B68
    pri = 0;
    return pri;
// lab_6B68
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6CB0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 12704;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0928(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6C78
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6CB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0800(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0800(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09D8(var_40)
    pri = 0;
    return pri;
// lab_6C78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10B0(var_16, var_8)
}
// fun_6D38
fun_6D38() {
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
    pri = fun_67D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2158(var_112)
    var_128 = 0;
    pri = fun_2218()
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
    pri = fun_6880(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6EB0
fun_6EB0() {
    pri = 12840;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6F38
// lab_6F38
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_70B8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_70A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6FF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6FF8
    pri = 0;
    OP_JUMP lab_7000
// lab_70B8
    pri = 0;
    return pri;
// lab_70A8
    OP_JUMP lab_6F30
// lab_6F30
    OP_INC_P_S -936
// lab_6FF8
    pri = 1;
// lab_7000
    OP_JZER lab_7078
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7070
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7078
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7070
}
// fun_70D8
fun_70D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7170
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0468()
    var_56 = 0;
    pri = fun_15E0()
// lab_7170
    pri = arg_4;
    OP_JZER lab_71A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1708(var_8)
// lab_71A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7200
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7200
    pri = 0;
    OP_JUMP lab_7208
// lab_7200
    pri = 1;
// lab_7208
    OP_JZER lab_72D0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_72D0
    var_16 = 0;
    pri = fun_04F8()
    OP_JZER lab_72A8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1520(var_32, var_24)
    OP_JUMP lab_72D0
// lab_72D0
    pri = arg_2;
    OP_JZER lab_73A8
    var_8 = 0;
    pri = fun_04F8()
    OP_JZER lab_7378
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A8(var_40)
    OP_JUMP lab_73A8
// lab_73A8
    pri = arg_3;
    OP_JZER lab_73E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_15A8(var_8)
// lab_73E0
    pri = 0;
    return pri;
// lab_7378
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10B0(var_16, var_8)
// lab_72A8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1520(var_16, var_8)
}
// fun_73F0
fun_73F0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6EB0(var_24)
    pri = 0;
    return pri;
}
// fun_7458
fun_7458() {
    pri = g_mode;
    switch (pri) {
// switch_75B8
        case default:
        {
// switch_75B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_7640
// lab_7640
            pri = 0;
            return pri;
        }
        case 0x946f4f220624337c:
        {
// switch_75B8_case_0x946f4f220624337c
            var_8 = 0;
            pri = fun_96E0()
            OP_JUMP lab_7640
        }
        case 0xb72ac5f91aae7883:
        {
// switch_75B8_case_0xb72ac5f91aae7883
            var_8 = 0;
            pri = fun_A540()
            OP_JUMP lab_7640
        }
        case 0xbd8810eaec5df5e1:
        {
// switch_75B8_case_0xbd8810eaec5df5e1
            var_8 = 0;
            pri = fun_A5C8()
            OP_JUMP lab_7640
        }
        case 0x0:
        {
// switch_75B8_case_0x0
            var_8 = 0;
            pri = fun_7650()
            OP_JUMP lab_7640
        }
        case 0x2019e00e4d8bf2bc:
        {
// switch_75B8_case_0x2019e00e4d8bf2bc
            var_8 = 0;
            pri = fun_A4B8()
            OP_JUMP lab_7640
        }
        case 0x50ac53926cfdb559:
        {
// switch_75B8_case_0x50ac53926cfdb559
            var_8 = 0;
            pri = fun_98F8()
            OP_JUMP lab_7640
        }
        case 0x76a3651e7bd36290:
        {
// switch_75B8_case_0x76a3651e7bd36290
            var_8 = 0;
            pri = fun_97E8()
            OP_JUMP lab_7640
        }
    }
}
// fun_7650
fun_7650() {
    pri = 0;
    return pri;
}
// fun_7668
fun_7668() {
    pri = 0;
    return pri;
}
// fun_7680
fun_7680() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_70D8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_76D8
fun_76D8() {
    pri = 0;
    return pri;
}
// fun_76F0
fun_76F0() {
    var_8 = 7;
    pri = SetPlayerNoDressupParts(var_8)
    var_16 = 10;
    pri = SetPlayerNoDressupParts(var_16)
    var_24 = 0;
    var_32 = 0;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 14072;
    var_56 = 13960;
    var_64 = 8802641224559852288;
    var_72 = 13912;
    var_80 = 13808;
    var_88 = 13760;
    var_96 = 48;
    pri = fun_0550(var_88, var_80, var_72, var_64, var_56, var_48)
    pri = 0;
    return pri;
}
// fun_77C0
fun_77C0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = -90;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 695;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 607;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_05D8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C -4587338432941916160, 4651787406515634176, 4652420725213233152, -3759734097910417347
    var_104 = 48;
    pri = fun_05D8(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 1;
    OP_PUSH4_C -4587338432941916160, 4652095269771411456, 4652728588469010432, 9064385164831989442
    var_128 = 48;
    pri = fun_05D8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    OP_PUSH4_C -4587338432941916160, 4651769814329589760, 4653621391910764544, -965260324886180608
    var_152 = 48;
    pri = fun_05D8(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 0;
    var_168 = -3759734097910417347;
    var_176 = 16;
    pri = fun_0630(var_168, var_160)
    var_184 = 0;
    var_192 = 9064385164831989442;
    var_200 = 16;
    pri = fun_0630(var_192, var_184)
    var_208 = 1;
    var_216 = 8802641224559852288;
    var_224 = 16;
    pri = fun_0668(var_216, var_208)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 0;
    var_256 = 0;
    var_264 = 8802641224559852288;
    var_272 = 24;
    pri = fun_1278(var_264, var_256, var_248)
    var_280 = 1;
    var_288 = -1;
    var_296 = -1;
    var_304 = 2;
    var_312 = 8802641224559852288;
    var_320 = 40;
    pri = fun_5FD8(var_312, var_304, var_296, var_288, var_280)
    var_328 = 15;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_344 = 0;
    var_352 = 4630404104378646528;
    var_360 = 0;
    OP_PUSH5_C 4651069733285952225, 4637049024891343340, 4645112403364801413, 4652882915921085071, 4638857149772988416
    var_368 = 4650728180993899889;
    var_376 = 1;
    pri = EvCameraMove(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 0;
    pri = fun_2248()
    var_392 = 0;
    var_400 = 0;
    var_408 = -965260324886180608;
    var_416 = 24;
    pri = fun_5DC8(var_408, var_400, var_392)
    var_424 = 80;
    var_432 = 8;
    var_440 = 16;
    pri = fun_0398(var_432, var_424)
    var_448 = 0;
    pri = fun_0468()
    var_456 = 0;
    var_464 = 4627927124583592755;
    var_472 = 3;
    OP_PUSH5_C 4650005054186544169, 4635939309795661578, 4648357985768135721, 4653098156317338501, 4641563883517782262
    var_480 = 4643377110133380219;
    var_488 = 300;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 270;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 1;
    var_520 = 0;
    var_528 = 14160;
    var_536 = 1;
    var_544 = 32;
    pri = fun_03F8(var_536, var_528, var_520, var_512)
    var_552 = 0;
    pri = fun_0468()
    var_560 = 0;
    var_568 = 4630375956880975462;
    var_576 = 0;
    OP_PUSH5_C 4649661478793096724, 4635201141669237883, 4648870358186679337, 4651202730212448010, 4638934555391583846
    var_584 = 4647772341894717112;
    var_592 = 1;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    pri = fun_2248()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_608 = 16;
    pri = fun_22D8(var_600, var_592)
    var_616 = 0;
    var_624 = 1;
    var_632 = 220;
    pri = float(var_632)
    var_640 = pri;
    var_648 = 4607182418800017408;
    var_656 = 32;
    pri = fun_2340(var_648, var_640, var_632, var_624)
    var_664 = 14208;
    var_672 = 8;
    var_680 = 16;
    pri = fun_0398(var_672, var_664)
    var_688 = 0;
    var_696 = 4630375956880975462;
    var_704 = 2;
    OP_PUSH5_C 4649305764791278633, 4634287051682370028, 4649123773626649149, 4650846576405978808, 4638252330416781394
    var_712 = 4648025317530035814;
    var_720 = 150;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 0;
    pri = fun_2248()
    var_736 = 14256;
    pri = SoundPostEvent(var_736)
    var_744 = 30;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 0;
    var_768 = 3;
    var_776 = 0;
    var_784 = 100;
    var_792 = -1;
    OP_PUSH2_C 6655910041455771352, -3759734097910417347
    var_800 = 56;
    pri = fun_2010(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 8;
    pri = fun_2158(var_808)
    var_824 = 0;
    pri = fun_2218()
    var_832 = 14424;
    pri = SoundPostEvent(var_832)
    var_840 = 15;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_64C0(var_856)
    var_872 = 14720;
    pri = SoundPostEvent(var_872)
    var_880 = 1;
    var_888 = -3759734097910417347;
    var_896 = 16;
    pri = fun_0630(var_888, var_880)
    var_904 = 1;
    var_912 = 9064385164831989442;
    var_920 = 16;
    pri = fun_0630(var_912, var_904)
    var_936 = 15024;
    var_944 = 1;
    var_952 = 0;
    var_960 = 1;
    var_968 = -1;
    var_976 = 0;
    var_984 = 0;
    var_992 = 0;
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 4651620280748212224;
    var_1032 = 0;
    OP_PUSH2_C 4650371235539058688, 4652183230701633536
    var_1040 = 0;
    OP_PUSH2_C 4651118903445946368, 4652192026794655744
    var_1048 = 0;
    var_1056 = 4652288783817900032;
    var_1064 = 3;
    var_1072 = 168;
    pri = fun_1638(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_8 = pri;
    var_1080 = 1;
    var_1088 = 4596373779694328218;
    var_1096 = -1;
    var_1104 = 4607182418800017408;
    var_1112 = var_8;
    var_1120 = -3759734097910417347;
    var_1128 = 48;
    pri = fun_0758(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1136 = 15;
    var_1144 = 8;
    pri = fun_0060(var_1136)
    var_1152 = 0;
    var_1160 = 5;
    var_1168 = 4602678819172646912;
    var_1176 = 1;
    pri = float(var_1176)
    var_1184 = pri;
    var_1192 = -3759734097910417347;
    var_1200 = 40;
    pri = fun_10F0(var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    OP_PUSH2_C 8802641224559852288, -3759734097910417347
    var_1232 = 40;
    pri = fun_1058(var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1240 = 0;
    var_1248 = 1;
    var_1256 = 400;
    pri = float(var_1256)
    var_1264 = pri;
    var_1272 = 4609434218613702656;
    var_1280 = 32;
    pri = fun_2340(var_1272, var_1264, var_1256, var_1248)
    var_1288 = 0;
    var_1296 = 4629221909476461773;
    var_1304 = 0;
    OP_PUSH5_C 4650956439607826186, 4635299657911086612, 4649431900765217096, 4653477927633572332, 4640815511923452805
    var_1312 = 4647697223260307456;
    var_1320 = 1;
    pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1328 = 0;
    pri = fun_2248()
    var_1336 = 0;
    var_1344 = 4629221909476461773;
    var_1352 = 2;
    OP_PUSH5_C 4651113977633853932, 4635299657911086612, 4649715134960532193, 4653327602403822797, 4640805660299267932
    var_1360 = 4646720329169261036;
    var_1368 = 210;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 30;
    var_1384 = 8;
    pri = fun_0060(var_1376)
    var_1392 = 1;
    var_1400 = 0;
    var_1408 = 4641240890982006784;
    var_1416 = -150;
    pri = float(var_1416)
    var_1424 = pri;
    var_1432 = 1;
    OP_PUSH4_C 4652095269771411456, 4651127699538968576, 4607182418800017408, 9064385164831989442
    var_1440 = 72;
    pri = fun_06E0(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 30;
    var_1456 = 8;
    pri = fun_0060(var_1448)
    var_1464 = -3759734097910417347;
    var_1472 = 8;
    pri = fun_0800(var_1464)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C 6655917738037168829, -3759734097910417347
    var_1520 = 56;
    pri = fun_2010(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_2158(var_1528)
    var_1544 = 0;
    pri = fun_2218()
    var_1552 = 9064385164831989442;
    var_1560 = 8;
    pri = fun_0800(var_1552)
    var_1568 = 0;
    var_1576 = 4629827080676389683;
    var_1584 = 3;
    OP_PUSH5_C 4652253599445811200, 4637329796180612219, 4650832414696213053, 4652946423712705413, 4640243765877009285
    var_1592 = 4649003970839686676;
    var_1600 = 90;
    pri = EvCameraMove(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1608 = 0;
    var_1616 = 60;
    var_1624 = 330;
    pri = float(var_1624)
    var_1632 = pri;
    var_1640 = 4609434218613702656;
    var_1648 = 32;
    pri = fun_2340(var_1640, var_1632, var_1624, var_1616)
    var_1656 = 30;
    var_1664 = 8;
    pri = fun_0060(var_1656)
    var_1672 = 1;
    var_1680 = 0;
    var_1688 = 4641240890982006784;
    var_1696 = 0;
    var_1704 = 0;
    OP_PUSH4_C 4651769814329589760, 4652961684934098944, 4607182418800017408, -965260324886180608
    var_1712 = 72;
    pri = fun_06E0(var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1720 = 60;
    var_1728 = 8;
    pri = fun_0060(var_1720)
    var_1736 = -1;
    var_1744 = -3759734097910417347;
    var_1752 = 16;
    pri = fun_10B0(var_1744, var_1736)
    var_1760 = 0;
    var_1768 = 0;
    var_1776 = 0;
    var_1784 = 90;
    pri = float(var_1784)
    var_1792 = pri;
    var_1800 = -3759734097910417347;
    var_1808 = 40;
    pri = fun_07B0(var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1816 = 5;
    var_1824 = 8;
    pri = fun_0060(var_1816)
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 0;
    var_1856 = 90;
    pri = float(var_1856)
    var_1864 = pri;
    var_1872 = 9064385164831989442;
    var_1880 = 40;
    pri = fun_07B0(var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1888 = -965260324886180608;
    var_1896 = 8;
    pri = fun_0800(var_1888)
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    OP_PUSH2_C -4236860509162526793, -965260324886180608
    var_1944 = 56;
    pri = fun_2010(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = 1;
    var_1960 = 8;
    pri = fun_2158(var_1952)
    var_1968 = 0;
    pri = fun_2218()
    var_1976 = -3759734097910417347;
    var_1984 = 8;
    pri = fun_0800(var_1976)
    var_1992 = 9064385164831989442;
    var_2000 = 8;
    pri = fun_0800(var_1992)
    var_2008 = 0;
    var_2016 = 3;
    var_2024 = -3759734097910417347;
    var_2032 = 24;
    pri = fun_5DC8(var_2024, var_2016, var_2008)
    var_2040 = 0;
    var_2048 = 3;
    var_2056 = 0;
    var_2064 = 100;
    var_2072 = -1;
    OP_PUSH2_C 6655914439502284196, -3759734097910417347
    var_2080 = 56;
    pri = fun_2010(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2088 = 15072;
    var_2096 = -3759734097910417347;
    var_2104 = 16;
    pri = fun_0BD8(var_2096, var_2088)
    var_2112 = 1;
    var_2120 = 8;
    pri = fun_2158(var_2112)
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = -3759734097910417347;
    var_2152 = 24;
    pri = fun_5DC8(var_2144, var_2136, var_2128)
    var_2160 = 0;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 100;
    var_2192 = -1;
    OP_PUSH2_C 6655915539013912407, -3759734097910417347
    var_2200 = 56;
    pri = fun_2010(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 15192;
    var_2216 = -3759734097910417347;
    var_2224 = 16;
    pri = fun_0BD8(var_2216, var_2208)
    var_2232 = 1;
    var_2240 = 8;
    pri = fun_2158(var_2232)
    var_2248 = 0;
    pri = fun_2218()
    var_2256 = 0;
    var_2264 = 1;
    var_2272 = 310;
    pri = float(var_2272)
    var_2280 = pri;
    var_2288 = 4609434218613702656;
    var_2296 = 32;
    pri = fun_2340(var_2288, var_2280, var_2272, var_2264)
    var_2304 = 0;
    var_2312 = 4629827080676389683;
    var_2320 = 0;
    OP_PUSH5_C 4651497839133343089, 4636351670636542689, 4650106649060950671, 4653002410844791767, 4639474635503147418
    var_2328 = 4650419614050680832;
    var_2336 = 1;
    pri = EvCameraMove(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2344 = 0;
    pri = fun_2248()
    var_2352 = 0;
    var_2360 = 4629827080676389683;
    var_2368 = 2;
    OP_PUSH5_C 4651522468193805271, 4636351670636542689, 4649926065271204741, 4653025192725719286, 4639474283659426529
    var_2376 = 4649971189228408668;
    var_2384 = 240;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 1;
    var_2400 = 1;
    var_2408 = -1;
    OP_PUSH2_C 8802641224559852288, -3759734097910417347
    var_2416 = 40;
    pri = fun_1058(var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2424 = 0;
    var_2432 = 0;
    var_2440 = 0;
    var_2448 = -150;
    pri = float(var_2448)
    var_2456 = pri;
    var_2464 = -3759734097910417347;
    var_2472 = 40;
    pri = fun_07B0(var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2480 = 5;
    var_2488 = 8;
    pri = fun_0060(var_2480)
    var_2496 = 0;
    var_2504 = 0;
    var_2512 = 0;
    var_2520 = -150;
    pri = float(var_2520)
    var_2528 = pri;
    var_2536 = 9064385164831989442;
    var_2544 = 40;
    pri = fun_07B0(var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2552 = 15;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 0;
    var_2576 = 3;
    var_2584 = 0;
    var_2592 = 100;
    var_2600 = -1;
    OP_PUSH2_C 6655912240479027774, -3759734097910417347
    var_2608 = 56;
    pri = fun_2010(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552)
    var_2616 = 1;
    var_2624 = 8;
    pri = fun_2158(var_2616)
    var_2632 = 0;
    pri = fun_2218()
    var_2640 = -3759734097910417347;
    var_2648 = 8;
    pri = fun_0800(var_2640)
    var_2656 = 9064385164831989442;
    var_2664 = 8;
    pri = fun_0800(var_2656)
    var_2672 = -1;
    var_2680 = -3759734097910417347;
    var_2688 = 16;
    pri = fun_10B0(var_2680, var_2672)
    var_2696 = 1;
    var_2704 = 0;
    var_2712 = 4641240890982006784;
    var_2720 = 0;
    var_2728 = 0;
    OP_PUSH4_C 4651787406515634176, 4652007308841189376, 4611686018427387904, -3759734097910417347
    var_2736 = 72;
    pri = fun_06E0(var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2744 = 5;
    var_2752 = 8;
    pri = fun_0060(var_2744)
    var_2760 = 1;
    var_2768 = 0;
    var_2776 = 50;
    pri = float(var_2776)
    var_2784 = pri;
    var_2792 = 0;
    pri = float(var_2792)
    var_2800 = pri;
    var_2808 = 0;
    OP_PUSH4_C 4652095269771411456, 4652007308841189376, 4607182418800017408, 9064385164831989442
    var_2816 = 72;
    pri = fun_06E0(var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2824 = 0;
    var_2832 = 3;
    var_2840 = 0;
    var_2848 = 100;
    var_2856 = -1;
    OP_PUSH2_C 6655913339990655985, -3759734097910417347
    var_2864 = 56;
    pri = fun_2010(var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2872 = -3759734097910417347;
    var_2880 = 8;
    pri = fun_0800(var_2872)
    var_2888 = 9064385164831989442;
    var_2896 = 8;
    pri = fun_0800(var_2888)
    var_2904 = 1;
    var_2912 = 8;
    pri = fun_2158(var_2904)
    var_2920 = 0;
    pri = fun_2218()
    var_2928 = 15312;
    pri = SoundPostEvent(var_2928)
    var_2936 = 3;
    var_2944 = 60;
    var_2952 = 1000;
    pri = float(var_2952)
    var_2960 = pri;
    var_2968 = 8;
    pri = float(var_2968)
    var_2976 = pri;
    var_2984 = 32;
    pri = fun_2340(var_2976, var_2968, var_2960, var_2952)
    var_2992 = 0;
    var_3000 = 4631952216750555136;
    var_3008 = 3;
    OP_PUSH5_C 4649324500469415936, 4636571221118377001, 4648550444283461632, 4652261076124880077, 4640743735804391588
    var_3016 = 4648550444283461632;
    var_3024 = 60;
    pri = EvCameraMove(var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3032 = 30;
    var_3040 = 8;
    pri = fun_0060(var_3032)
    var_3048 = 15608;
    pri = SoundPostEvent(var_3048)
    var_3056 = 31;
    var_3064 = 8;
    pri = fun_0060(var_3056)
    pri = EvCameraStart()
    var_3072 = 0;
    pri = fun_0138()
    var_3080 = 3;
    var_3088 = 30;
    pri = EvCameraEnd(var_3088, var_3080)
    var_3096 = 8802641224559852288;
    var_3104 = 8;
    pri = fun_64C0(var_3096)
    var_3112 = 1;
    var_3120 = 1;
    var_3128 = 0;
    pri = float(var_3128)
    var_3136 = pri;
    var_3144 = 828;
    pri = float(var_3144)
    var_3152 = pri;
    var_3160 = 1913;
    pri = float(var_3160)
    var_3168 = pri;
    var_3176 = -965260324886180608;
    var_3184 = 48;
    pri = fun_05D8(var_3176, var_3168, var_3160, var_3152, var_3144, var_3136)
    var_3192 = 5;
    var_3200 = 8;
    pri = fun_0060(var_3192)
    var_3208 = 8802641224559852288;
    var_3216 = 8;
    pri = fun_11C8(var_3208)
    var_3224 = 8802641224559852288;
    var_3232 = 8;
    pri = fun_12E0(var_3224)
    var_3240 = 15912;
    var_3248 = 8;
    pri = fun_05A8(var_3240)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3256 = 3;
    var_3264 = 1;
    var_3272 = 32;
    pri = fun_2398(var_3264, var_3256, var_3248, var_3240)
    var_3280 = 8802641224559852288;
    var_3288 = 8;
    pri = fun_09D8(var_3280)
    var_3296 = 0;
    var_3304 = 8802641224559852288;
    var_3312 = 16;
    pri = fun_0668(var_3304, var_3296)
    pri = 0;
    return pri;
}
// fun_9530
fun_9530() {
    pri = 0;
    return pri;
}
// fun_9548
fun_9548() {
    var_8 = -3759734097910417347;
    var_16 = 8;
    pri = fun_0520(var_8)
    var_24 = 9064385164831989442;
    var_32 = 8;
    pri = fun_0520(var_24)
    var_40 = 20;
    var_48 = 8;
    pri = fun_73F0(var_40)
    var_56 = 10;
    var_64 = 6833283603599948542;
    pri = WorkSet(var_64, var_56)
    var_72 = -1655053127185566619;
    pri = VanishFlagReset(var_72)
    var_80 = 5388264540081088874;
    pri = VanishFlagReset(var_80)
    var_88 = 7095484774853797935;
    pri = VanishFlagReset(var_88)
    var_96 = -1624929651410500742;
    pri = VanishFlagReset(var_96)
    var_104 = 5388265639592717085;
    pri = VanishFlagReset(var_104)
    pri = 0;
    return pri;
}
// fun_96C8
fun_96C8() {
    pri = 0;
    return pri;
}
// fun_96E0
fun_96E0() {
    var_8 = 0;
    pri = fun_7668()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_7680()
    var_24 = 0;
    pri = fun_76D8()
    var_32 = 0;
    pri = fun_76F0()
    var_40 = 0;
    pri = fun_77C0()
    var_48 = 0;
    pri = fun_9530()
    var_56 = 0;
    pri = fun_9548()
    var_64 = 0;
    pri = fun_96C8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_97E8
fun_97E8() {
    var_8 = 0;
    pri = fun_76D8()
    var_16 = 0;
    pri = fun_9548()
    var_24 = -5709837727726135438;
    pri = FlagSet(var_24)
    var_32 = -5165677370440995445;
    pri = FlagSet(var_32)
    var_40 = 550817590317733207;
    pri = FlagSet(var_40)
    var_48 = 25;
    var_56 = 8;
    pri = fun_73F0(var_48)
    var_64 = 20;
    var_72 = 6833283603599948542;
    pri = WorkSet(var_72, var_64)
    pri = 0;
    return pri;
}
// fun_98F8
fun_98F8() {
    var_8 = 3;
    var_16 = 0;
    var_24 = 102;
    OP_PUSH2_C 1084515783888082969, 1084512485353198336
    var_32 = 40;
    pri = fun_1E60(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2158(var_40)
    var_56 = 0;
    pri = fun_2218()
    var_64 = 1;
    var_72 = 0;
    var_80 = 32;
    var_88 = 8;
    var_96 = 32;
    pri = fun_03F8(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_0468()
    var_112 = -5709837727726135438;
    pri = FlagSet(var_112)
    pri = GetTargetFieldObjectID()
    var_120 = pri;
    var_128 = 8;
    pri = fun_0520(var_120)
    pri = SetPlayerDressupPartsByPreset()
    var_136 = 5;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 0;
    var_160 = 0;
    var_168 = 16;
    pri = fun_02A8(var_160, var_152)
    var_176 = 10;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH4_C 4636033603912859648, 4650687894887858176, 4657595026933547008, 8802641224559852288
    var_208 = 48;
    pri = fun_05D8(var_200, var_192, var_184, var_176, var_168, var_160)
    pri = EvCameraStart()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_216 = 16;
    pri = fun_22D8(var_208, var_200)
    var_224 = 0;
    var_232 = 1;
    var_240 = 55;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 4613937818241073152;
    var_264 = 32;
    pri = fun_2340(var_256, var_248, var_240, var_232)
    var_272 = 0;
    var_280 = 4631389266797133824;
    var_288 = 0;
    OP_PUSH5_C 4650482242232998953, 4633697361606161203, 4657613608680056422, 4651236067405002179, 4636007567477513912
    var_296 = 4657473706820538204;
    var_304 = 1;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 0;
    pri = fun_2248()
    var_320 = 0;
    var_328 = 4631389266797133824;
    var_336 = 0;
    OP_PUSH5_C 4650467464796721644, 4634487602603276370, 4657616357459125862, 4651221289968724869, 4636543777308147712
    var_344 = 4657476455599607644;
    var_352 = 150;
    pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 80;
    var_368 = 8;
    var_376 = 16;
    pri = fun_0398(var_368, var_360)
    var_384 = 0;
    pri = fun_0468()
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 17;
    var_440 = 8802641224559852288;
    var_448 = 56;
    pri = fun_24B8(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 120;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 0;
    var_480 = 4630924833085561242;
    var_488 = 0;
    OP_PUSH5_C 4650600989488798761, 4638209405482833019, 4657597995614942003, 4651340652951036232, 4638988035637158871
    var_496 = 4657518434953556132;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    pri = fun_2248()
    var_520 = 0;
    var_528 = 4631445561792475955;
    var_536 = 0;
    OP_PUSH5_C 4650600989488798761, 4638209405482833019, 4657597995614942003, 4651370999471962849, 4639009498104133059
    var_544 = 4657515180399137915;
    var_552 = 90;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 15;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    pri = float(var_600)
    var_608 = pri;
    var_616 = 8802641224559852288;
    var_624 = 40;
    pri = fun_07B0(var_616, var_608, var_600, var_592, var_584)
    var_632 = 10;
    var_640 = 8;
    pri = fun_0060(var_632)
    var_648 = 8802641224559852288;
    var_656 = 8;
    pri = fun_1148(var_648)
    var_664 = 8802641224559852288;
    var_672 = 8;
    pri = fun_0800(var_664)
    var_680 = 15;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 0;
    var_704 = 0;
    var_712 = 8802641224559852288;
    var_720 = 24;
    pri = fun_1278(var_712, var_704, var_696)
    var_728 = 1;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 1;
    var_752 = -1;
    var_760 = -1;
    var_768 = 3;
    var_776 = 0;
    var_784 = 18;
    var_792 = 8802641224559852288;
    var_800 = 56;
    pri = fun_24B8(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 20;
    var_816 = 8;
    pri = fun_0060(var_808)
    var_824 = 8802641224559852288;
    var_832 = 8;
    pri = fun_1148(var_824)
    var_840 = 10;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_1148(var_856)
    var_872 = 30;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 1;
    var_904 = 200;
    pri = float(var_904)
    var_912 = pri;
    var_920 = 4609434218613702656;
    var_928 = 32;
    pri = fun_2340(var_920, var_912, var_904, var_896)
    var_936 = 0;
    var_944 = 4629306351969474970;
    var_952 = 0;
    OP_PUSH5_C 4650674348904603976, 4636894917341594255, 4657590101121454572, 4651521588584503050, 4633496106997813084
    var_960 = 4657278631467538186;
    var_968 = 1;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 0;
    pri = fun_2248()
    var_984 = 0;
    var_992 = 4631952216750555136;
    var_1000 = 3;
    OP_PUSH5_C 4650687894887858176, 4636286227704457462, 4657595026933547008, 4652942773334101197, 4640601239097431818
    var_1008 = 4657595026933547008;
    var_1016 = 90;
    pri = EvCameraMove(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1024 = 15;
    var_1032 = 8;
    pri = fun_0060(var_1024)
    var_1040 = 3;
    var_1048 = 75;
    var_1056 = 1000;
    pri = float(var_1056)
    var_1064 = pri;
    var_1072 = 8;
    pri = float(var_1072)
    var_1080 = pri;
    var_1088 = 32;
    pri = fun_2340(var_1080, var_1072, var_1064, var_1056)
    var_1096 = 30;
    var_1104 = 8;
    pri = fun_0060(var_1096)
    var_1112 = 8802641224559852288;
    var_1120 = 8;
    pri = fun_1148(var_1112)
    var_1128 = 8802641224559852288;
    var_1136 = 8;
    pri = fun_12E0(var_1128)
    var_1144 = 45;
    var_1152 = 8;
    pri = fun_0060(var_1144)
    var_1160 = 8802641224559852288;
    var_1168 = 8;
    pri = fun_11C8(var_1160)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1176 = 3;
    var_1184 = 1;
    var_1192 = 32;
    pri = fun_2398(var_1184, var_1176, var_1168, var_1160)
    var_1200 = 3;
    var_1208 = 30;
    pri = EvCameraEnd(var_1208, var_1200)
    var_1216 = 25;
    var_1224 = 8;
    pri = fun_73F0(var_1216)
    var_1232 = 20;
    var_1240 = 6833283603599948542;
    pri = WorkSet(var_1240, var_1232)
    var_1248 = 15960;
    pri = CallTips(var_1248)
    pri = 0;
    return pri;
}
// fun_A4B8
fun_A4B8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4236858310139270371;
    var_88 = 80;
    pri = fun_6D38(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A540
fun_A540() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4236859409650898582;
    var_88 = 80;
    pri = fun_6D38(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A5C8
fun_A5C8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4236866006720667848;
    var_88 = 80;
    pri = fun_6D38(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
