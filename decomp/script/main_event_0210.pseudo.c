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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0828
fun_0828() {
    pri = arg_1;
    OP_NOT 
    var_8 = pri;
    var_16 = arg_0;
    pri = SetFieldObjectTerrainHieghtAdjustFlag_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08F0
fun_08F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAttachModelPosAndRotationByFieldObject_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0930
fun_0930() {
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
// fun_09A8
fun_09A8() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16B0(var_8)
    OP_JZER lab_0B20
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_16E0(var_24)
    OP_JNZ lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    OP_JUMP lab_0B30
// lab_0B30
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B90
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B30
    pri = 0;
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CC8
    pri = 0;
    return pri;
// lab_0CC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D08
// lab_0D08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16B0(var_8)
    OP_JNZ lab_0D90
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D80
    pri = 0;
    return pri;
// lab_0D90
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0DD8
    pri = 0;
    return pri;
// lab_0DD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E80(var_8)
    pri = 0;
    return pri;
// lab_0E38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D08
    pri = 0;
    return pri;
// lab_0D80
    OP_JUMP lab_0DD8
}
// fun_0E80
fun_0E80() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F08
    pri = 0;
    return pri;
// lab_0F08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16B0(var_8)
    OP_JZER lab_1038
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F60
    OP_ZERO_P_S 64
// lab_1038
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1070
    OP_CONST_S 64, 1
// lab_1070
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10A8
    OP_CONST_S 72, 1
// lab_10A8
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
// lab_0F60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F88
    OP_ZERO_P_S 72
// lab_0F88
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
    OP_JUMP lab_1148
// lab_1148
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1220
// lab_1220
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = IsAttachModelAnimationStateName_(var_24, var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1280
    pri = 0;
    return pri;
// lab_1280
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_12C0
    pri = 0;
    return pri;
// lab_12C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1220
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
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
// fun_1428
fun_1428() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1468
fun_1468() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_15F0
fun_15F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1500(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1578(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1658
fun_1658() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1540(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15B8(var_24)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_16E0
fun_16E0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1710
fun_1710() {
    OP_JUMP lab_1728
// lab_1728
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_17B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_17A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C80(var_8)
    pri = 0;
    return pri;
// lab_17B8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1848
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1838
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C80(var_8)
    pri = 0;
    return pri;
// lab_1848
    pri = 0;
    return pri;
// lab_1838
    OP_JUMP lab_1858
// lab_1858
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1728
    pri = 0;
    return pri;
// lab_17A8
    OP_JUMP lab_1858
}
// fun_1898
fun_1898() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C80(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1710(var_40)
    pri = 0;
    return pri;
}
// fun_1920
fun_1920() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1958
fun_1958() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_19B0
fun_19B0() {
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
// fun_1A80
fun_1A80() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
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
// switch_20D0
        case default:
        {
// switch_20D0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2118
// lab_2118
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
            OP_JNZ lab_21C0
            var_88 = 0;
            pri = fun_2430()
// lab_21C0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_20D0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1CB8
                case default:
                {
// switch_1CB8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D30
// lab_1D30
                    OP_JUMP lab_2118
                }
                case 0x0:
                {
// switch_1CB8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1D30
                }
                case 0x1:
                {
// switch_1CB8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1D30
                }
                case 0x2:
                {
// switch_1CB8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1D30
                }
                case 0x3:
                {
// switch_1CB8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D30
                }
                case 0x4:
                {
// switch_1CB8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1D30
                }
                case 0x5:
                {
// switch_1CB8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1D30
                }
            }
        }
        case 0x65:
        {
// switch_20D0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1E70
                case default:
                {
// switch_1E70_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EE8
// lab_1EE8
                    OP_JUMP lab_2118
                }
                case 0x0:
                {
// switch_1E70_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1EE8
                }
                case 0x1:
                {
// switch_1E70_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1EE8
                }
                case 0x2:
                {
// switch_1E70_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1EE8
                }
                case 0x3:
                {
// switch_1E70_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1EE8
                }
                case 0x4:
                {
// switch_1E70_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1EE8
                }
                case 0x5:
                {
// switch_1E70_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1EE8
                }
            }
        }
        case 0x66:
        {
// switch_20D0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2028
                case default:
                {
// switch_2028_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20A0
// lab_20A0
                    OP_JUMP lab_2118
                }
                case 0x0:
                {
// switch_2028_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_20A0
                }
                case 0x1:
                {
// switch_2028_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_20A0
                }
                case 0x2:
                {
// switch_2028_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_20A0
                }
                case 0x3:
                {
// switch_2028_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_20A0
                }
                case 0x4:
                {
// switch_2028_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_20A0
                }
                case 0x5:
                {
// switch_2028_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_20A0
                }
            }
        }
    }
}
// fun_21D8
fun_21D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1AB8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C48(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_22E8
    pri = 1;
    return pri;
// lab_22E8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2330
fun_2330() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2380
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2240(var_8)
    arg_2 = pri;
// lab_2380
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1AB8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_21D8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2430
fun_2430() {
    OP_JUMP lab_2448
// lab_2448
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2488
    pri = 0;
    return pri;
// lab_2488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2448
    pri = 0;
    return pri;
}
// fun_24C8
fun_24C8() {
    var_8 = 0;
    pri = fun_2430()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2578
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2578
    pri = 0;
    return pri;
}
// fun_2588
fun_2588() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_25E8
// lab_25E8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2628
    OP_JUMP lab_2658
// lab_2628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25E8
// lab_2658
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
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
// fun_2710
fun_2710() {
    OP_JUMP lab_2728
// lab_2728
    pri = EvCameraMoveWait_()
    OP_JZER lab_2760
    pri = 0;
    return pri;
// lab_2760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2728
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2808(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_28E0()
    pri = 0;
    return pri;
}
// fun_2808
fun_2808() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2860
fun_2860() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2808(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_28E0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    OP_JUMP lab_28F8
// lab_28F8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2950
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2960
// lab_2950
    pri = 0;
    return pri;
// lab_2960
    OP_JUMP lab_28F8
    pri = 0;
    return pri;
}
// fun_2980
fun_2980() {
    pri = arg_6;
    OP_JNZ lab_29B8
    var_8 = 0;
    pri = fun_1158()
// lab_29B8
    pri = arg_1;
    switch (pri) {
// switch_3F20
        case default:
        {
// switch_3F20_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4270
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4270
            pri = 1;
            OP_JUMP lab_4278
// lab_4270
            pri = 0;
// lab_4278
            OP_JZER lab_43D0
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C48(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4430
// lab_43D0
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4430
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4490
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_44F0
// lab_4490
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_44F0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_44F0
            pri = arg_2;
            OP_JZER lab_4530
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4530
            var_8 = 0;
            pri = fun_1198()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F20_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1:
        {
// switch_3F20_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x2:
        {
// switch_3F20_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x3:
        {
// switch_3F20_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x4:
        {
// switch_3F20_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x5:
        {
// switch_3F20_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x6:
        {
// switch_3F20_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x7:
        {
// switch_3F20_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x8:
        {
// switch_3F20_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x9:
        {
// switch_3F20_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xa:
        {
// switch_3F20_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xb:
        {
// switch_3F20_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xc:
        {
// switch_3F20_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xd:
        {
// switch_3F20_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xe:
        {
// switch_3F20_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0xf:
        {
// switch_3F20_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x10:
        {
// switch_3F20_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x11:
        {
// switch_3F20_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x12:
        {
// switch_3F20_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x13:
        {
// switch_3F20_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x14:
        {
// switch_3F20_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x15:
        {
// switch_3F20_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x16:
        {
// switch_3F20_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x17:
        {
// switch_3F20_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x18:
        {
// switch_3F20_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x19:
        {
// switch_3F20_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1a:
        {
// switch_3F20_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1b:
        {
// switch_3F20_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1c:
        {
// switch_3F20_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BD0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1d:
        {
// switch_3F20_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1e:
        {
// switch_3F20_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x1f:
        {
// switch_3F20_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x20:
        {
// switch_3F20_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x21:
        {
// switch_3F20_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x22:
        {
// switch_3F20_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x23:
        {
// switch_3F20_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x24:
        {
// switch_3F20_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x25:
        {
// switch_3F20_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x26:
        {
// switch_3F20_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x27:
        {
// switch_3F20_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x28:
        {
// switch_3F20_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
        case 0x29:
        {
// switch_3F20_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F20_case_default
        }
    }
}
// fun_4560
fun_4560() {
    pri = arg_5;
    OP_JNZ lab_4598
    var_8 = 0;
    pri = fun_1158()
// lab_4598
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_45E8
    OP_CONST_S -8, -1
// lab_45E8
    pri = arg_1;
    switch (pri) {
// switch_60A0
        case default:
        {
// switch_60A0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6548
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C48(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6548
            pri = 1;
            OP_JUMP lab_6550
// lab_6548
            pri = 0;
// lab_6550
            OP_JZER lab_65A0
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_67F8
// lab_65A0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6608
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6608
            pri = 1;
            OP_JUMP lab_6610
// lab_6608
            pri = 0;
// lab_6610
            OP_JZER lab_6798
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C48(var_24, var_16)
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
            var_176 = 28608;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28624;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_67F8
// lab_6798
            var_8 = 64;
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_67F8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6868
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6868
            var_8 = 0;
            pri = fun_1198()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_60A0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1:
        {
// switch_60A0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2:
        {
// switch_60A0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3:
        {
// switch_60A0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x4:
        {
// switch_60A0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x5:
        {
// switch_60A0_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E80(var_40)
            OP_JUMP switch_60A0_case_default
        }
        case 0x6:
        {
// switch_60A0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x7:
        {
// switch_60A0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x8:
        {
// switch_60A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x9:
        {
// switch_60A0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0xa:
        {
// switch_60A0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0xb:
        {
// switch_60A0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0xc:
        {
// switch_60A0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0xd:
        {
// switch_60A0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19136;
            var_72 = 18960;
            var_80 = 18776;
            var_88 = 18584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0xe:
        {
// switch_60A0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19792;
            var_72 = 19584;
            var_80 = 19368;
            var_88 = 19144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0xf:
        {
// switch_60A0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20184;
            var_72 = 20064;
            var_80 = 19936;
            var_88 = 19800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x10:
        {
// switch_60A0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20528;
            var_72 = 20424;
            var_80 = 20312;
            var_88 = 20192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x11:
        {
// switch_60A0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20768;
            var_80 = 20656;
            var_88 = 20536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x12:
        {
// switch_60A0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x13:
        {
// switch_60A0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x14:
        {
// switch_60A0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21432;
            var_72 = 21256;
            var_80 = 21072;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x15:
        {
// switch_60A0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x16:
        {
// switch_60A0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x17:
        {
// switch_60A0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x18:
        {
// switch_60A0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x19:
        {
// switch_60A0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1a:
        {
// switch_60A0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1b:
        {
// switch_60A0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1c:
        {
// switch_60A0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21824;
            var_72 = 21704;
            var_80 = 21576;
            var_88 = 21440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1d:
        {
// switch_60A0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1e:
        {
// switch_60A0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22288;
            var_72 = 22144;
            var_80 = 21992;
            var_88 = 21832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x1f:
        {
// switch_60A0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x20:
        {
// switch_60A0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x21:
        {
// switch_60A0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x22:
        {
// switch_60A0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x23:
        {
// switch_60A0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x24:
        {
// switch_60A0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22656;
            var_72 = 22544;
            var_80 = 22424;
            var_88 = 22296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x25:
        {
// switch_60A0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23024;
            var_72 = 22912;
            var_80 = 22792;
            var_88 = 22664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x26:
        {
// switch_60A0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x27:
        {
// switch_60A0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x28:
        {
// switch_60A0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x29:
        {
// switch_60A0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23464;
            var_72 = 23328;
            var_80 = 23184;
            var_88 = 23032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2a:
        {
// switch_60A0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23856;
            var_72 = 23736;
            var_80 = 23608;
            var_88 = 23472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2b:
        {
// switch_60A0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24272;
            var_72 = 24144;
            var_80 = 24008;
            var_88 = 23864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2c:
        {
// switch_60A0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24712;
            var_72 = 24576;
            var_80 = 24432;
            var_88 = 24280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2d:
        {
// switch_60A0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2e:
        {
// switch_60A0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25032;
            var_72 = 24936;
            var_80 = 24832;
            var_88 = 24720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x2f:
        {
// switch_60A0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25304;
            var_80 = 25176;
            var_88 = 25040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x30:
        {
// switch_60A0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25816;
            var_72 = 25696;
            var_80 = 25568;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x31:
        {
// switch_60A0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x32:
        {
// switch_60A0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x33:
        {
// switch_60A0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26208;
            var_72 = 26088;
            var_80 = 25960;
            var_88 = 25824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x34:
        {
// switch_60A0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26464;
            var_80 = 26344;
            var_88 = 26216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x35:
        {
// switch_60A0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27064;
            var_72 = 26912;
            var_80 = 26752;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x36:
        {
// switch_60A0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27320;
            var_80 = 27200;
            var_88 = 27072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x37:
        {
// switch_60A0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x38:
        {
// switch_60A0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27688;
            var_80 = 27568;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60A0_case_default
        }
        case 0x39:
        {
// switch_60A0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3a:
        {
// switch_60A0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3b:
        {
// switch_60A0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3c:
        {
// switch_60A0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3d:
        {
// switch_60A0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
        case 0x3e:
        {
// switch_60A0_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            OP_JUMP switch_60A0_case_default
        }
    }
}
// fun_6898
fun_6898() {
    pri = arg_4;
    OP_JNZ lab_68D0
    var_8 = 0;
    pri = fun_1158()
// lab_68D0
    pri = arg_1;
    switch (pri) {
// switch_7CA8
        case default:
        {
// switch_7CA8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_16B0(var_264)
            OP_JZER lab_8270
            pri = arg_3;
            switch (pri) {
// switch_8218
                case default:
                {
// switch_8218_case_default
                    OP_JUMP lab_8528
// lab_8528
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8598
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8598
                    var_8 = 0;
                    pri = fun_1198()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8218_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8218_case_default
                }
                case 0x2:
                {
// switch_8218_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8218_case_default
                }
                case 0x3:
                {
// switch_8218_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8218_case_default
                }
            }
// lab_8270
            pri = arg_1;
            OP_JZER lab_82C0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_82C0
            pri = 0;
            OP_JUMP lab_82C8
// lab_82C0
            pri = 1;
// lab_82C8
            OP_JZER lab_8330
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C48(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8330
            pri = 1;
            OP_JUMP lab_8338
// lab_8330
            pri = 0;
// lab_8338
            OP_JZER lab_8388
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8528
// lab_8388
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_83F0
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8528
// lab_83F0
            var_16 = 29928;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C48(var_24, var_16)
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
            var_176 = 30032;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30048;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7CA8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1:
        {
// switch_7CA8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2:
        {
// switch_7CA8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3:
        {
// switch_7CA8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x4:
        {
// switch_7CA8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x5:
        {
// switch_7CA8_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E80(var_40)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x6:
        {
// switch_7CA8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x7:
        {
// switch_7CA8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x8:
        {
// switch_7CA8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x9:
        {
// switch_7CA8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xa:
        {
// switch_7CA8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xb:
        {
// switch_7CA8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xc:
        {
// switch_7CA8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xd:
        {
// switch_7CA8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xe:
        {
// switch_7CA8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0xf:
        {
// switch_7CA8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x10:
        {
// switch_7CA8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x11:
        {
// switch_7CA8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x12:
        {
// switch_7CA8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x13:
        {
// switch_7CA8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x14:
        {
// switch_7CA8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x15:
        {
// switch_7CA8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x16:
        {
// switch_7CA8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x17:
        {
// switch_7CA8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x18:
        {
// switch_7CA8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x19:
        {
// switch_7CA8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1a:
        {
// switch_7CA8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1b:
        {
// switch_7CA8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1c:
        {
// switch_7CA8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1d:
        {
// switch_7CA8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1e:
        {
// switch_7CA8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x1f:
        {
// switch_7CA8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x20:
        {
// switch_7CA8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x21:
        {
// switch_7CA8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x22:
        {
// switch_7CA8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x23:
        {
// switch_7CA8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x24:
        {
// switch_7CA8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x25:
        {
// switch_7CA8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x26:
        {
// switch_7CA8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x27:
        {
// switch_7CA8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x28:
        {
// switch_7CA8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x29:
        {
// switch_7CA8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2a:
        {
// switch_7CA8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2b:
        {
// switch_7CA8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2c:
        {
// switch_7CA8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2d:
        {
// switch_7CA8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2e:
        {
// switch_7CA8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x2f:
        {
// switch_7CA8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x30:
        {
// switch_7CA8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x31:
        {
// switch_7CA8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x32:
        {
// switch_7CA8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x33:
        {
// switch_7CA8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x34:
        {
// switch_7CA8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x35:
        {
// switch_7CA8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x36:
        {
// switch_7CA8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x37:
        {
// switch_7CA8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x38:
        {
// switch_7CA8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x39:
        {
// switch_7CA8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3a:
        {
// switch_7CA8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3b:
        {
// switch_7CA8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3c:
        {
// switch_7CA8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3d:
        {
// switch_7CA8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
        case 0x3e:
        {
// switch_7CA8_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C08(var_24, var_16, var_8)
            OP_JUMP switch_7CA8_case_default
        }
    }
}
// fun_85C8
fun_85C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_87D8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30096;
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
    var_424 = 30152;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30168;
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
    OP_JZER lab_87C0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_87C0
    pri = 0;
    return pri;
}
// fun_87D8
fun_87D8() {
    var_8 = arg_1;
    var_16 = 30216;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C08(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8820
fun_8820() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8920
        case default:
        {
// switch_8920_case_default
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
// switch_8920_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8920_case_default
        }
        case 0x1:
        {
// switch_8920_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8920_case_default
        }
        case 0x2:
        {
// switch_8920_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8920_case_default
        }
        case 0x3:
        {
// switch_8920_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8920_case_default
        }
    }
}
// fun_89E0
fun_89E0() {
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
    pri = fun_2330(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2430()
    pri = 0;
    return pri;
}
// fun_8A78
fun_8A78() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8820(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_89E0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8B20
fun_8B20() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8B70
// lab_8B70
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30320;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8BE8
    OP_JUMP lab_8C18
// lab_8BE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8B70
// lab_8C18
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8CA0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6898(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1980(var_56)
// lab_8CA0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8D08
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1428(var_24, var_16)
// lab_8D08
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1428(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8DC8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0C80(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0A00(var_88, var_80, var_72, var_64, var_56)
// lab_8DC8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8E08
    pri = 0;
    return pri;
// lab_8E08
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F50
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30440;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0BD0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8F18
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8F50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0AA8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0C80(var_40)
    pri = 0;
    return pri;
// lab_8F18
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1428(var_16, var_8)
}
// fun_8FD8
fun_8FD8() {
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
    pri = fun_8A78(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_24C8(var_112)
    var_128 = 0;
    pri = fun_2588()
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
    pri = fun_8B20(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9150
fun_9150() {
    pri = 30576;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_91D8
// lab_91D8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9358
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9348
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9298
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9298
    pri = 0;
    OP_JUMP lab_92A0
// lab_9358
    pri = 0;
    return pri;
// lab_9348
    OP_JUMP lab_91D0
// lab_91D0
    OP_INC_P_S -936
// lab_9298
    pri = 1;
// lab_92A0
    OP_JZER lab_9318
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9310
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9318
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9310
}
// fun_9378
fun_9378() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9410
    var_8 = 1;
    var_16 = 0;
    var_24 = 31496;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1958()
// lab_9410
    pri = arg_4;
    OP_JZER lab_9448
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A80(var_8)
// lab_9448
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_94A0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_94A0
    pri = 0;
    OP_JUMP lab_94A8
// lab_94A0
    pri = 1;
// lab_94A8
    OP_JZER lab_9570
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9570
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_9548
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1898(var_32, var_24)
    OP_JUMP lab_9570
// lab_9570
    pri = arg_2;
    OP_JZER lab_9648
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9618
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1428(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08B8(var_40)
    OP_JUMP lab_9648
// lab_9648
    pri = arg_3;
    OP_JZER lab_9680
    var_8 = 1;
    var_16 = 8;
    pri = fun_1920(var_8)
// lab_9680
    pri = 0;
    return pri;
// lab_9618
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1428(var_16, var_8)
// lab_9548
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1898(var_16, var_8)
}
// fun_9690
fun_9690() {
    var_8 = 31752;
    var_16 = 31744;
    var_24 = 8802641224559852288;
    var_32 = 31696;
    var_40 = 31592;
    var_48 = 31544;
    var_56 = 48;
    pri = fun_06F0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 31760;
    var_80 = 16;
    pri = fun_08F0(var_72, var_64)
    pri = arg_0;
    OP_JZER lab_9748
    var_88 = 0;
    pri = fun_9758()
// lab_9748
    pri = 0;
    return pri;
}
// fun_9758
fun_9758() {
    var_8 = 1;
    var_16 = 31856;
    var_24 = 31808;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 31984;
    var_48 = 31936;
    pri = SetAttachModelAnimationStateIntParameter_(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_97D0
fun_97D0() {
    var_8 = 0;
    var_16 = 32160;
    var_24 = 32112;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 32336;
    var_48 = 32288;
    var_56 = 24;
    pri = fun_11D8(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_9848
fun_9848() {
    pri = arg_0;
    OP_JZER lab_9880
    var_8 = 0;
    pri = fun_97D0()
// lab_9880
    var_8 = 32456;
    var_16 = 8;
    pri = fun_0748(var_8)
    pri = 0;
    return pri;
}
// fun_98B0
fun_98B0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9150(var_24)
    pri = 0;
    return pri;
}
// fun_9918
fun_9918() {
    pri = g_mode;
    switch (pri) {
// switch_9A00
        case default:
        {
// switch_9A00_case_default
            pri = CommandNOP()
            OP_JUMP lab_9A58
// lab_9A58
            pri = 0;
            return pri;
        }
        case 0x84000b21fd15a9e1:
        {
// switch_9A00_case_0x84000b21fd15a9e1
            var_8 = 0;
            pri = fun_E5B0()
            OP_JUMP lab_9A58
        }
        case 0x8efb809a06c2f2bb:
        {
// switch_9A00_case_0x8efb809a06c2f2bb
            var_8 = 0;
            pri = fun_E6E8()
            OP_JUMP lab_9A58
        }
        case 0x0:
        {
// switch_9A00_case_0x0
            var_8 = 0;
            pri = fun_9A68()
            OP_JUMP lab_9A58
        }
        case 0x66a0a11e7320d155:
        {
// switch_9A00_case_0x66a0a11e7320d155
            var_8 = 0;
            pri = fun_E6A0()
            OP_JUMP lab_9A58
        }
    }
}
// fun_9A68
fun_9A68() {
    pri = 0;
    return pri;
}
// fun_9A80
fun_9A80() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9378(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9AD8
fun_9AD8() {
    var_8 = 3461578099255135998;
    var_16 = 8;
    pri = fun_0518(var_8)
    pri = 0;
    return pri;
}
// fun_9B18
fun_9B18() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_9B48
fun_9B48() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4656814373677826048, 4652596647073677312, 8802641224559852288
    var_24 = 48;
    pri = fun_0778(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640537203540230144, 4656466928003448832, 4652596647073677312, 8112749681754728295
    var_48 = 48;
    pri = fun_0778(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4647503709213818880, 4643228808005025792, 4652860529864343552, -7045052338775704800
    var_72 = 48;
    pri = fun_07D0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    var_96 = -22;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH3_C 4650492621622765158, 4653068997268969882, 3461578099255135998
    var_112 = 48;
    pri = fun_0778(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 0;
    var_144 = 4631952216750555136;
    var_152 = 0;
    OP_PUSH5_C 4655713718557957161, 4636880843592758723, 4653141257173147320, 4656742223724811387, 4635274325163182653
    var_160 = 4653770265785165414;
    var_168 = 1;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_2710()
    var_184 = 0;
    var_192 = 4631952216750555136;
    var_200 = 0;
    OP_PUSH5_C 4655645153012849050, 4636880843592758723, 4653255562401970913, 4656693867203421798, 4635274325163182653
    var_208 = 4653884571013989007;
    var_216 = 200;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH4_C 4653652178236342272, 4652596647073677312, 4607182418800017408, 8112749681754728295
    var_264 = 72;
    pri = fun_0930(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 32504;
    var_280 = 8;
    var_288 = 16;
    pri = fun_0280(var_280, var_272)
    var_296 = 0;
    pri = fun_0350()
    var_304 = 10;
    var_312 = 8;
    pri = fun_0060(var_304)
    var_320 = 1;
    var_328 = 0;
    var_336 = 4641240890982006784;
    var_344 = 0;
    var_352 = 0;
    OP_PUSH4_C 4654751689864118272, 4652596647073677312, 4607182418800017408, 8802641224559852288
    var_360 = 72;
    pri = fun_0930(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 60;
    var_376 = 8;
    pri = fun_0060(var_368)
    var_384 = 8112749681754728295;
    var_392 = 8;
    pri = fun_0AA8(var_384)
    var_400 = 1;
    var_408 = 8802641224559852288;
    var_416 = 16;
    pri = fun_0878(var_408, var_400)
    var_424 = 1;
    var_432 = 8112749681754728295;
    var_440 = 16;
    pri = fun_0878(var_432, var_424)
    var_448 = 1;
    var_456 = 1;
    OP_PUSH4_C -4582834833314545664, 4652684608003899392, 4652596647073677312, 8112749681754728295
    var_464 = 48;
    pri = fun_0778(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 0;
    var_480 = 4631065570573916570;
    var_488 = 0;
    OP_PUSH5_C 4652569862970424689, 4638859260835313746, 4652092982787225682, 4652572897622517350, 4638942999640885166
    var_496 = 4653382621965676708;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 1;
    var_520 = 1;
    var_528 = -1;
    var_536 = -1;
    var_544 = 0;
    var_552 = 3;
    var_560 = 8112749681754728295;
    var_568 = 56;
    pri = fun_4560(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C 3710590818795990187, 8112749681754728295
    var_616 = 56;
    pri = fun_2330(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_24C8(var_624)
    var_640 = 0;
    pri = fun_2588()
    var_648 = 1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 3;
    var_680 = 8112749681754728295;
    var_688 = 40;
    pri = fun_6898(var_680, var_672, var_664, var_656, var_648)
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 835;
    pri = SoundPlayPokeVoice(var_720, var_712, var_704, var_696)
    var_728 = 0;
    var_736 = 3;
    var_744 = 2;
    var_752 = 100;
    var_760 = -1;
    OP_PUSH2_C -6137958088826169266, 3461578099255135998
    var_768 = 56;
    pri = fun_2330(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 8112749681754728295;
    var_784 = 8;
    pri = fun_0C80(var_776)
    var_792 = 0;
    pri = fun_2430()
    var_800 = 1;
    var_808 = 8;
    pri = fun_24C8(var_800)
    var_816 = 0;
    pri = fun_2588()
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    OP_PUSH2_C 3461578099255135998, 8112749681754728295
    var_856 = 48;
    pri = fun_0A50(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 1;
    var_872 = 1;
    var_880 = 15;
    OP_PUSH2_C 3461578099255135998, 8112749681754728295
    var_888 = 40;
    pri = fun_1370(var_880, var_872, var_864, var_856, var_848)
    var_896 = 35;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 8112749681754728295;
    var_920 = 8;
    pri = fun_0AA8(var_912)
    var_928 = 0;
    var_936 = 4627589354611539968;
    var_944 = 0;
    OP_PUSH5_C 4651923921879338844, 4635937198733336248, 4652817956774116065, 4653594651787977032, 4641892505553091953
    var_952 = 4652832206444812042;
    var_960 = 1;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 30;
    var_976 = 8;
    pri = fun_0060(var_968)
    var_984 = 8802641224559852288;
    var_992 = 8;
    pri = fun_0AA8(var_984)
    var_1000 = 1;
    var_1008 = 1;
    OP_PUSH4_C -4582834833314545664, 4653036451724787712, 4653036451724787712, 8802641224559852288
    var_1016 = 48;
    pri = fun_0778(var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1024 = 0;
    var_1032 = 4629728564434540954;
    var_1040 = 0;
    OP_PUSH5_C 4649530065163344937, -4592710382872439030, 4653039398415950152, 4651731727246803599, 4635638131570581176
    var_1048 = 4653049425961995469;
    var_1056 = 1;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 0;
    pri = fun_2710()
    var_1072 = 0;
    var_1080 = 4629728564434540954;
    var_1088 = 3;
    OP_PUSH5_C 4649370855879642972, -4592171358292038124, 4653038694728508375, 4651572517963101635, 4635369322967822500
    var_1096 = 4653048722274553692;
    var_1104 = 45;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 1;
    var_1120 = 1;
    var_1128 = -1;
    var_1136 = -1;
    var_1144 = 0;
    var_1152 = 5;
    var_1160 = 8112749681754728295;
    var_1168 = 56;
    pri = fun_4560(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 835;
    pri = SoundPlayPokeVoice(var_1200, var_1192, var_1184, var_1176)
    var_1208 = 1;
    var_1216 = -1;
    var_1224 = -1;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 30;
    var_1256 = 3461578099255135998;
    var_1264 = 56;
    pri = fun_2980(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 3461578099255135998;
    var_1280 = 8;
    pri = fun_0C80(var_1272)
    var_1288 = 1;
    var_1296 = 0;
    var_1304 = 4641240890982006784;
    var_1312 = 0;
    var_1320 = 0;
    OP_PUSH4_C 4652235127650464563, 4652717153548081562, 4607182418800017408, 3461578099255135998
    var_1328 = 72;
    pri = fun_0930(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 15;
    var_1344 = 8;
    pri = fun_0060(var_1336)
    var_1352 = 0;
    var_1360 = 4629728564434540954;
    var_1368 = 0;
    OP_PUSH5_C 4652465497326716191, 4632122509111465083, 4652855867935041782, 4653566328368445522, 4640270857843517686
    var_1376 = 4652865895481087099;
    var_1384 = 1;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 0;
    pri = fun_2710()
    var_1400 = 0;
    var_1408 = 4629728564434540954;
    var_1416 = 2;
    OP_PUSH5_C 4652470335177878405, 4632122509111465083, 4652718516942500004, 4653562238185190195, 4640270857843517686
    var_1424 = 4652858814626204221;
    var_1432 = 150;
    pri = EvCameraMove(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1440 = 1;
    var_1448 = 1;
    var_1456 = 30;
    var_1464 = 4652235127650464563;
    var_1472 = 20;
    pri = float(var_1472)
    var_1480 = pri;
    OP_PUSH2_C 4652717153548081562, 8802641224559852288
    var_1488 = 56;
    pri = fun_1308(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1496 = 3461578099255135998;
    var_1504 = 8;
    pri = fun_0AA8(var_1496)
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 835;
    pri = SoundPlayPokeVoice(var_1536, var_1528, var_1520, var_1512)
    var_1544 = 1;
    var_1552 = -1;
    var_1560 = -1;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 30;
    var_1592 = 3461578099255135998;
    var_1600 = 56;
    pri = fun_2980(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 3461578099255135998;
    var_1616 = 8;
    pri = fun_0C80(var_1608)
    var_1624 = 0;
    pri = fun_2710()
    var_1632 = 0;
    var_1640 = 4629728564434540954;
    var_1648 = 3;
    OP_PUSH5_C 4652437393809510236, 4638156628924699771, 4652757703536913940, 4653652002314481828, 4635603650885934121
    var_1656 = 4652827764417835827;
    var_1664 = 90;
    pri = EvCameraMove(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1672 = 0;
    var_1680 = 1;
    var_1688 = -7045052338775704800;
    var_1696 = 24;
    pri = fun_85C8(var_1688, var_1680, var_1672)
    var_1704 = 1;
    var_1712 = 1;
    var_1720 = 1;
    OP_PUSH2_C 8112749681754728295, -7045052338775704800
    var_1728 = 40;
    pri = fun_1370(var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1736 = 0;
    var_1744 = 3;
    var_1752 = 2;
    var_1760 = 100;
    var_1768 = -1;
    OP_PUSH2_C -1700341917886697678, -7045052338775704800
    var_1776 = 56;
    pri = fun_2330(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1784 = 15;
    var_1792 = 8;
    pri = fun_0060(var_1784)
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = 160;
    pri = float(var_1824)
    var_1832 = pri;
    var_1840 = 3461578099255135998;
    var_1848 = 40;
    pri = fun_0A00(var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1856 = 1;
    var_1864 = 1;
    var_1872 = 15;
    var_1880 = 500;
    pri = float(var_1880)
    var_1888 = pri;
    var_1896 = 358;
    pri = float(var_1896)
    var_1904 = pri;
    var_1912 = 1170;
    pri = float(var_1912)
    var_1920 = pri;
    var_1928 = 8802641224559852288;
    var_1936 = 56;
    pri = fun_1308(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1944 = 1;
    var_1952 = 1;
    var_1960 = 45;
    OP_PUSH2_C -7045052338775704800, 8112749681754728295
    var_1968 = 40;
    pri = fun_1370(var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1976 = 3461578099255135998;
    var_1984 = 8;
    pri = fun_0AA8(var_1976)
    var_1992 = 8802641224559852288;
    var_2000 = 8;
    pri = fun_0AA8(var_1992)
    var_2008 = 0;
    pri = fun_2710()
    var_2016 = 0;
    pri = fun_2430()
    var_2024 = 1;
    var_2032 = 8;
    pri = fun_24C8(var_2024)
    var_2040 = 0;
    pri = fun_2588()
    var_2048 = 0;
    var_2056 = 0;
    var_2064 = -7045052338775704800;
    var_2072 = 24;
    pri = fun_85C8(var_2064, var_2056, var_2048)
    var_2080 = -7045052338775704800;
    var_2088 = 8;
    pri = fun_0C80(var_2080)
    var_2096 = 10;
    var_2104 = -7045052338775704800;
    var_2112 = 16;
    pri = fun_1428(var_2104, var_2096)
    var_2120 = 1;
    var_2128 = 0;
    var_2136 = 4641240890982006784;
    var_2144 = 0;
    var_2152 = 0;
    var_2160 = 500;
    pri = float(var_2160)
    var_2168 = pri;
    var_2176 = 1400;
    pri = float(var_2176)
    var_2184 = pri;
    OP_PUSH2_C 4607182418800017408, -7045052338775704800
    var_2192 = 72;
    pri = fun_0930(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2200 = 45;
    var_2208 = 8;
    pri = fun_0060(var_2200)
    var_2216 = 1;
    var_2224 = 1;
    var_2232 = 30;
    var_2240 = 500;
    pri = float(var_2240)
    var_2248 = pri;
    var_2256 = 150;
    pri = float(var_2256)
    var_2264 = pri;
    var_2272 = 1350;
    pri = float(var_2272)
    var_2280 = pri;
    var_2288 = 8802641224559852288;
    var_2296 = 56;
    pri = fun_1308(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = -7045052338775704800;
    var_2312 = 8;
    pri = fun_0AA8(var_2304)
    var_2320 = 1;
    var_2328 = 8;
    pri = fun_0060(var_2320)
    var_2336 = 1;
    var_2344 = -7045052338775704800;
    var_2352 = 16;
    pri = fun_0828(var_2344, var_2336)
    var_2360 = 1;
    var_2368 = 1;
    OP_PUSH4_C 4646975943632486400, 4643744259056127181, 4653828100096786432, -7045052338775704800
    var_2376 = 48;
    pri = fun_07D0(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2384 = 0;
    var_2392 = 4629995965662416077;
    var_2400 = 0;
    OP_PUSH5_C 4647107709105959076, 4645122958676428063, 4653995885571185050, 4647961194011903918, 4645071413571317924
    var_2408 = 4654568335305070346;
    var_2416 = 1;
    pri = EvCameraMove(var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2424 = 0;
    pri = fun_2710()
    var_2432 = 0;
    var_2440 = 4629995965662416077;
    var_2448 = 3;
    OP_PUSH5_C 4646185350791650345, 4636096232095177769, 4654079580396291359, 4649296089088954204, 4635217326480398746
    var_2456 = 4656521595721581855;
    var_2464 = 100;
    pri = EvCameraMove(var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2472 = 1;
    var_2480 = 3;
    var_2488 = 0;
    var_2496 = 5;
    var_2504 = 8112749681754728295;
    var_2512 = 40;
    pri = fun_6898(var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2528 = 32552;
    var_2536 = 1;
    var_2544 = 0;
    var_2552 = 0;
    var_2560 = -1;
    var_2568 = 4649280520004304896;
    var_2576 = 0;
    OP_PUSH5_C 4654549819529258598, 4648840715353194496, 4607182418800017408, 4655341467901257318, 4647803655985876173
    OP_PUSH5_C 4611686018427387904, 4655454497696592691, 4646977702851090842, 4628377484546329805, 4655133440301282099
    OP_PUSH3_C 4646975943632486400, 4643744259056127181, 4653828100096786432
    var_2584 = 5;
    var_2592 = 168;
    pri = fun_19B0(var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_8 = pri;
    var_2600 = 1;
    var_2608 = 4596373779694328218;
    var_2616 = -1;
    var_2624 = 4607182418800017408;
    var_2632 = var_8;
    var_2640 = -7045052338775704800;
    var_2648 = 48;
    pri = fun_09A8(var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2656 = 1;
    var_2664 = 0;
    var_2672 = 4641240890982006784;
    var_2680 = 0;
    var_2688 = 0;
    OP_PUSH4_C 4650492621622765158, 4653068997268969882, 4607182418800017408, 3461578099255135998
    var_2696 = 72;
    pri = fun_0930(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 3461578099255135998;
    var_2712 = 8;
    pri = fun_0AA8(var_2704)
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 100;
    pri = float(var_2744)
    var_2752 = pri;
    var_2760 = 3461578099255135998;
    var_2768 = 40;
    pri = fun_0A00(var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2776 = 3461578099255135998;
    var_2784 = 8;
    pri = fun_0AA8(var_2776)
    var_2792 = 45;
    var_2800 = 8;
    pri = fun_0060(var_2792)
    var_2808 = 1;
    var_2816 = 1;
    var_2824 = 1;
    OP_PUSH2_C 3461578099255135998, 8112749681754728295
    var_2832 = 40;
    pri = fun_1370(var_2824, var_2816, var_2808, var_2800, var_2792)
    var_2840 = 0;
    var_2848 = 4628461927039343002;
    var_2856 = 0;
    OP_PUSH5_C 4653108095902453596, 4640130120355162358, 4653602832154487685, 4654008595925602140, 4643221419286887137
    var_2864 = 4653855367985155277;
    var_2872 = 1;
    pri = EvCameraMove(var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2880 = 0;
    pri = fun_2710()
    var_2888 = 0;
    var_2896 = 4628461927039343002;
    var_2904 = 3;
    OP_PUSH5_C 4653299586847547064, 4639629094896617390, 4653016660515487744, 4654199866968370053, 4642733060202294149
    var_2912 = 4653269372268015780;
    var_2920 = 200;
    pri = EvCameraMove(var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2928 = -7045052338775704800;
    var_2936 = 8;
    pri = fun_0AA8(var_2928)
    var_2944 = 0;
    var_2952 = -7045052338775704800;
    var_2960 = 16;
    pri = fun_0828(var_2952, var_2944)
    var_2968 = 1;
    var_2976 = 1;
    OP_PUSH4_C -4587338432941916160, 4649896246515859456, 4654399846143229952, -7045052338775704800
    var_2984 = 48;
    pri = fun_0778(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_2992 = 1;
    var_3000 = 8;
    pri = fun_0060(var_2992)
    var_3008 = 1;
    var_3016 = 0;
    var_3024 = 4641240890982006784;
    var_3032 = 0;
    pri = float(var_3032)
    var_3040 = pri;
    var_3048 = 1;
    OP_PUSH4_C 4649896246515859456, 4652772568934121472, 4607182418800017408, -7045052338775704800
    var_3056 = 72;
    pri = fun_0930(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3064 = 0;
    var_3072 = 3;
    var_3080 = 2;
    var_3088 = 100;
    var_3096 = -1;
    OP_PUSH2_C 3710591918307618398, 8112749681754728295
    var_3104 = 56;
    pri = fun_2330(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
    var_3112 = 0;
    var_3120 = 0;
    var_3128 = 0;
    var_3136 = 0;
    OP_PUSH2_C 8112749681754728295, 3461578099255135998
    var_3144 = 48;
    pri = fun_0A50(var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3152 = 15;
    var_3160 = 8;
    pri = fun_0060(var_3152)
    var_3168 = 1;
    var_3176 = 1;
    var_3184 = 200;
    OP_PUSH2_C 8112749681754728295, 8802641224559852288
    var_3192 = 40;
    pri = fun_1370(var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3200 = 0;
    pri = fun_2430()
    var_3208 = 1;
    var_3216 = 8;
    pri = fun_24C8(var_3208)
    var_3224 = 1;
    var_3232 = 1;
    var_3240 = -1;
    OP_PUSH2_C 8802641224559852288, 8112749681754728295
    var_3248 = 40;
    pri = fun_1370(var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3256 = 0;
    var_3264 = 0;
    var_3272 = 0;
    var_3280 = 80;
    pri = float(var_3280)
    var_3288 = pri;
    var_3296 = 8112749681754728295;
    var_3304 = 40;
    pri = fun_0A00(var_3296, var_3288, var_3280, var_3272, var_3264)
    var_3312 = 0;
    var_3320 = 3;
    var_3328 = 0;
    var_3336 = 100;
    var_3344 = -1;
    OP_PUSH2_C 3710593017819246609, 8112749681754728295
    var_3352 = 56;
    pri = fun_2330(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3360 = 1;
    var_3368 = 8;
    pri = fun_24C8(var_3360)
    var_3376 = -7045052338775704800;
    var_3384 = 8;
    pri = fun_0AA8(var_3376)
    var_3392 = 8112749681754728295;
    var_3400 = 8;
    pri = fun_0AA8(var_3392)
    var_3408 = 0;
    pri = fun_2588()
    var_3416 = 7;
    var_3424 = -7045052338775704800;
    var_3432 = 16;
    pri = fun_1578(var_3424, var_3416)
    var_3440 = 1;
    var_3448 = 1;
    var_3456 = -1;
    var_3464 = -1;
    var_3472 = 0;
    var_3480 = 8;
    var_3488 = -7045052338775704800;
    var_3496 = 56;
    pri = fun_4560(var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3504 = 1;
    var_3512 = 1;
    var_3520 = 15;
    OP_PUSH2_C -7045052338775704800, 8802641224559852288
    var_3528 = 40;
    pri = fun_1370(var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3536 = 0;
    var_3544 = 4628461927039343002;
    var_3552 = 3;
    OP_PUSH5_C 4653299586847547064, 4639629094896617390, 4653016660515487744, 4654253874979526410, 4641833395807982715
    var_3560 = 4653212373585231872;
    var_3568 = 60;
    pri = EvCameraMove(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496)
    var_3576 = 0;
    var_3584 = 3;
    var_3592 = 0;
    var_3600 = 100;
    var_3608 = -1;
    OP_PUSH2_C -1700343017398325889, -7045052338775704800
    var_3616 = 56;
    pri = fun_2330(var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560)
    var_3624 = 0;
    pri = fun_2710()
    var_3632 = 1;
    var_3640 = 8;
    pri = fun_24C8(var_3632)
    var_3648 = 0;
    pri = fun_2588()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3656 = 16;
    pri = fun_27A0(var_3648, var_3640)
    var_3664 = 3;
    var_3672 = 1;
    OP_PUSH2_C 4639551126328068538, 4611719795424593183
    var_3680 = 32;
    pri = fun_2808(var_3672, var_3664, var_3656, var_3648)
    var_3688 = -7045052338775704800;
    var_3696 = 8;
    pri = fun_1658(var_3688)
    var_3704 = 1;
    var_3712 = 3;
    var_3720 = 0;
    var_3728 = 8;
    var_3736 = -7045052338775704800;
    var_3744 = 40;
    pri = fun_6898(var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3752 = 0;
    var_3760 = 4626266422220999885;
    var_3768 = 0;
    OP_PUSH5_C 4649750231371690803, 4625303777800649441, 4652746444537845514, 4651985318608633856, 4630439288750735360
    var_3776 = 4653244523305228042;
    var_3784 = 1;
    pri = EvCameraMove(var_3784, var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720, var_3712)
    var_3792 = 0;
    pri = fun_2710()
    var_3800 = 3;
    var_3808 = 90;
    OP_PUSH2_C 4642828726510003683, 4611719795424593183
    var_3816 = 32;
    pri = fun_2808(var_3808, var_3800, var_3792, var_3784)
    var_3824 = 0;
    var_3832 = 4626266422220999885;
    var_3840 = 9;
    OP_PUSH5_C 4649683469025652244, 4638652024883710525, 4652731579140637983, 4651918644223525519, 4639413414695712850
    var_3848 = 4653229569947090289;
    var_3856 = 90;
    pri = EvCameraMove(var_3856, var_3848, var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784)
    var_3864 = 32600;
    pri = SoundPostEvent(var_3864)
    var_3872 = 75;
    var_3880 = 8;
    pri = fun_0060(var_3872)
    var_3888 = 5;
    var_3896 = -7045052338775704800;
    var_3904 = 16;
    pri = fun_1500(var_3896, var_3888)
    var_3912 = 0;
    var_3920 = 3;
    var_3928 = 0;
    var_3936 = 100;
    var_3944 = -1;
    OP_PUSH2_C -1701191840375115556, -7045052338775704800
    var_3952 = 56;
    pri = fun_2330(var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3960 = -7045052338775704800;
    var_3968 = 8;
    pri = fun_0C80(var_3960)
    var_3976 = 1;
    var_3984 = 8;
    pri = fun_24C8(var_3976)
    var_3992 = 0;
    pri = fun_2588()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_4000 = 3;
    var_4008 = 1;
    var_4016 = 32;
    pri = fun_2860(var_4008, var_4000, var_3992, var_3984)
    var_4024 = 0;
    var_4032 = 0;
    var_4040 = 0;
    var_4048 = 180;
    pri = float(var_4048)
    var_4056 = pri;
    var_4064 = 8112749681754728295;
    var_4072 = 40;
    pri = fun_0A00(var_4064, var_4056, var_4048, var_4040, var_4032)
    var_4080 = -1;
    var_4088 = 8112749681754728295;
    var_4096 = 16;
    pri = fun_1428(var_4088, var_4080)
    var_4104 = 1;
    var_4112 = 1;
    OP_PUSH4_C -4582834833314545664, 4652992471259676672, 4652992471259676672, 8802641224559852288
    var_4120 = 48;
    pri = fun_0778(var_4112, var_4104, var_4096, var_4088, var_4080, var_4072)
    OP_PUSH2_C -4608983858650965606, 4630333735634468864
    var_4128 = 0;
    OP_PUSH5_C 4651630396255187763, 4633832469594982318, 4652724410324824883, 4650426914807889265, 4644583406330445824
    var_4136 = 4654705862219472568;
    var_4144 = 1;
    pri = EvCameraMove(var_4144, var_4136, var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072)
    var_4152 = 0;
    pri = fun_2710()
    OP_PUSH2_C -4608983858650965606, 4630333735634468864
    var_4160 = 3;
    OP_PUSH5_C 4651930167105384612, 4633832469594982318, 4652769930106214810, 4650726685658086113, 4644583406330445824
    var_4168 = 4654751382000862495;
    var_4176 = 360;
    pri = EvCameraMove(var_4176, var_4168, var_4160, var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104)
    var_4184 = -7045052338775704800;
    var_4192 = 8;
    pri = fun_1540(var_4184)
    var_4200 = 0;
    var_4208 = 3;
    var_4216 = 0;
    var_4224 = 100;
    var_4232 = -1;
    OP_PUSH2_C 3710594117330874820, 8112749681754728295
    var_4240 = 56;
    pri = fun_2330(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4248 = 1;
    var_4256 = 8;
    pri = fun_24C8(var_4248)
    var_4264 = 0;
    pri = fun_2588()
    var_4272 = 3461578099255135998;
    var_4280 = 8;
    pri = fun_0AA8(var_4272)
    var_4288 = 0;
    var_4296 = 0;
    var_4304 = 0;
    OP_PUSH2_C -4593502734931879526, 3461578099255135998
    var_4312 = 40;
    pri = fun_0A00(var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4320 = 3461578099255135998;
    var_4328 = 8;
    pri = fun_0AA8(var_4320)
    var_4336 = 1;
    var_4344 = 1;
    var_4352 = 10;
    OP_PUSH2_C 3461578099255135998, 8802641224559852288
    var_4360 = 40;
    pri = fun_1370(var_4352, var_4344, var_4336, var_4328, var_4320)
    var_4368 = 1;
    var_4376 = 0;
    var_4384 = 4641240890982006784;
    var_4392 = 0;
    var_4400 = 0;
    OP_PUSH4_C 4652499010441130803, 4652321329362082202, 4607182418800017408, 3461578099255135998
    var_4408 = 72;
    pri = fun_0930(var_4400, var_4392, var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336)
    var_4416 = 30;
    var_4424 = 8;
    pri = fun_0060(var_4416)
    var_4432 = 1;
    var_4440 = 1;
    var_4448 = 60;
    var_4456 = 1087;
    pri = float(var_4456)
    var_4464 = pri;
    var_4472 = 20;
    pri = float(var_4472)
    var_4480 = pri;
    var_4488 = 1047;
    pri = float(var_4488)
    var_4496 = pri;
    var_4504 = 8802641224559852288;
    var_4512 = 56;
    pri = fun_1308(var_4504, var_4496, var_4488, var_4480, var_4472, var_4464, var_4456)
    var_4520 = 3461578099255135998;
    var_4528 = 8;
    pri = fun_0AA8(var_4520)
    var_4536 = 1;
    var_4544 = 1;
    var_4552 = 0;
    OP_PUSH3_C 4649896246515859456, 4652684608003899392, -7045052338775704800
    var_4560 = 48;
    pri = fun_0778(var_4552, var_4544, var_4536, var_4528, var_4520, var_4512)
    var_4568 = 0;
    var_4576 = 4628264894555645542;
    var_4584 = 0;
    OP_PUSH5_C 4652002207107236495, 4632233691727265792, 4652745037162961961, 4655117387431516570, 4636124379592848835
    var_4592 = 4652944356630845194;
    var_4600 = 1;
    pri = EvCameraMove(var_4600, var_4592, var_4584, var_4576, var_4568, var_4560, var_4552, var_4544, var_4536, var_4528)
    var_4608 = 8112749681754728295;
    var_4616 = 8;
    pri = fun_0AA8(var_4608)
    var_4624 = 0;
    var_4632 = 0;
    var_4640 = 0;
    var_4648 = 0;
    OP_PUSH2_C 8112749681754728295, 3461578099255135998
    var_4656 = 48;
    pri = fun_0A50(var_4648, var_4640, var_4632, var_4624, var_4616, var_4608)
    var_4664 = 0;
    var_4672 = 0;
    var_4680 = 0;
    var_4688 = 0;
    OP_PUSH2_C 3461578099255135998, 8112749681754728295
    var_4696 = 48;
    pri = fun_0A50(var_4688, var_4680, var_4672, var_4664, var_4656, var_4648)
    var_4704 = 1;
    var_4712 = 1;
    var_4720 = 10;
    OP_PUSH2_C 3461578099255135998, 8112749681754728295
    var_4728 = 40;
    pri = fun_1370(var_4720, var_4712, var_4704, var_4696, var_4688)
    var_4736 = 30;
    var_4744 = 8;
    pri = fun_0060(var_4736)
    var_4752 = 8112749681754728295;
    var_4760 = 8;
    pri = fun_0AA8(var_4752)
    var_4768 = 3461578099255135998;
    var_4776 = 8;
    pri = fun_0AA8(var_4768)
    var_4784 = 1;
    var_4792 = 0;
    var_4800 = 4641240890982006784;
    var_4808 = 0;
    var_4816 = 0;
    OP_PUSH4_C 4656466928003448832, 4652321329362082202, 4607182418800017408, 3461578099255135998
    var_4824 = 72;
    pri = fun_0930(var_4816, var_4808, var_4800, var_4792, var_4784, var_4776, var_4768, var_4760, var_4752)
    var_4832 = 40;
    var_4840 = 8;
    pri = fun_0060(var_4832)
    var_4848 = 0;
    var_4856 = 0;
    var_4864 = 0;
    var_4872 = -50;
    pri = float(var_4872)
    var_4880 = pri;
    var_4888 = 8802641224559852288;
    var_4896 = 40;
    pri = fun_0A00(var_4888, var_4880, var_4872, var_4864, var_4856)
    var_4904 = 1;
    var_4912 = 1;
    var_4920 = 20;
    var_4928 = 4656466928003448832;
    var_4936 = 30;
    pri = float(var_4936)
    var_4944 = pri;
    OP_PUSH2_C 4652319570143477760, 8802641224559852288
    var_4952 = 56;
    pri = fun_1308(var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896)
    var_4960 = 8802641224559852288;
    var_4968 = 8;
    pri = fun_0AA8(var_4960)
    var_4976 = 5;
    var_4984 = 8;
    pri = fun_0060(var_4976)
    var_4992 = -1;
    var_5000 = 8112749681754728295;
    var_5008 = 16;
    pri = fun_1428(var_5000, var_4992)
    var_5016 = 1;
    var_5024 = 0;
    var_5032 = 4641240890982006784;
    var_5040 = 0;
    var_5048 = 0;
    OP_PUSH4_C 4656466928003448832, 4652596647073677312, 4607182418800017408, 8112749681754728295
    var_5056 = 72;
    pri = fun_0930(var_5048, var_5040, var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984)
    var_5064 = 20;
    var_5072 = 8;
    pri = fun_0060(var_5064)
    var_5080 = 1;
    var_5088 = 1;
    var_5096 = 15;
    var_5104 = 4652684608003899392;
    var_5112 = 150;
    pri = float(var_5112)
    var_5120 = pri;
    OP_PUSH2_C 4652596647073677312, 8802641224559852288
    var_5128 = 56;
    pri = fun_1308(var_5120, var_5112, var_5104, var_5096, var_5088, var_5080, var_5072)
    var_5136 = 15;
    var_5144 = 8;
    pri = fun_0060(var_5136)
    var_5152 = 1;
    var_5160 = 1;
    var_5168 = 20;
    var_5176 = 4653828100096786432;
    var_5184 = 150;
    pri = float(var_5184)
    var_5192 = pri;
    OP_PUSH2_C 4652596647073677312, 8802641224559852288
    var_5200 = 56;
    pri = fun_1308(var_5192, var_5184, var_5176, var_5168, var_5160, var_5152, var_5144)
    var_5208 = 8802641224559852288;
    var_5216 = 8;
    pri = fun_0AA8(var_5208)
    var_5224 = 15;
    var_5232 = 8;
    pri = fun_0060(var_5224)
    var_5240 = 1;
    var_5248 = 0;
    var_5256 = 4641240890982006784;
    var_5264 = 0;
    var_5272 = 0;
    OP_PUSH4_C 4652244803352788992, 4652684608003899392, 4607182418800017408, -7045052338775704800
    var_5280 = 72;
    pri = fun_0930(var_5272, var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216, var_5208)
    var_5288 = -7045052338775704800;
    var_5296 = 8;
    pri = fun_0AA8(var_5288)
    var_5304 = 7;
    var_5312 = 8;
    var_5320 = -7045052338775704800;
    var_5328 = 24;
    pri = fun_15F0(var_5320, var_5312, var_5304)
    var_5336 = 1;
    var_5344 = 1;
    var_5352 = -1;
    var_5360 = -1;
    var_5368 = 0;
    var_5376 = 9;
    var_5384 = -7045052338775704800;
    var_5392 = 56;
    pri = fun_4560(var_5384, var_5376, var_5368, var_5360, var_5352, var_5344, var_5336)
    var_5400 = 0;
    var_5408 = 3;
    var_5416 = 2;
    var_5424 = 100;
    var_5432 = -1;
    OP_PUSH2_C -1700344116909954100, -7045052338775704800
    var_5440 = 56;
    pri = fun_2330(var_5432, var_5424, var_5416, var_5408, var_5400, var_5392, var_5384)
    var_5448 = -7045052338775704800;
    var_5456 = 8;
    pri = fun_0AA8(var_5448)
    var_5464 = 15;
    var_5472 = 8802641224559852288;
    var_5480 = 16;
    pri = fun_1428(var_5472, var_5464)
    var_5488 = 0;
    var_5496 = 0;
    var_5504 = 0;
    var_5512 = -150;
    pri = float(var_5512)
    var_5520 = pri;
    var_5528 = 8802641224559852288;
    var_5536 = 40;
    pri = fun_0A00(var_5528, var_5520, var_5512, var_5504, var_5496)
    var_5544 = 8802641224559852288;
    var_5552 = 8;
    pri = fun_0AA8(var_5544)
    var_5560 = 0;
    pri = fun_2430()
    var_5568 = 1;
    var_5576 = 8;
    pri = fun_24C8(var_5568)
    var_5584 = 3461578099255135998;
    var_5592 = 8;
    pri = fun_0AA8(var_5584)
    var_5600 = 8112749681754728295;
    var_5608 = 8;
    pri = fun_0AA8(var_5600)
    var_5616 = 0;
    var_5624 = 8112749681754728295;
    var_5632 = 16;
    pri = fun_0878(var_5624, var_5616)
    var_5640 = 8112749681754728295;
    var_5648 = 8;
    pri = fun_0698(var_5640)
    var_5656 = -7045052338775704800;
    var_5664 = 8;
    pri = fun_1540(var_5656)
    var_5672 = 1;
    var_5680 = 3;
    var_5688 = 0;
    var_5696 = 9;
    var_5704 = -7045052338775704800;
    var_5712 = 40;
    pri = fun_6898(var_5704, var_5696, var_5688, var_5680, var_5672)
    var_5720 = 32760;
    pri = SoundPostEvent(var_5720)
    var_5728 = 30;
    var_5736 = 8;
    pri = fun_0060(var_5728)
    var_5744 = 33056;
    pri = SoundPostEvent(var_5744)
    var_5752 = -7045052338775704800;
    var_5760 = 8;
    pri = fun_0C80(var_5752)
    var_5768 = 1;
    var_5776 = 1;
    var_5784 = 10;
    OP_PUSH2_C 8802641224559852288, -7045052338775704800
    var_5792 = 40;
    pri = fun_1370(var_5784, var_5776, var_5768, var_5760, var_5752)
    var_5800 = 0;
    var_5808 = 3;
    var_5816 = 0;
    var_5824 = 100;
    var_5832 = -1;
    OP_PUSH2_C -1701190740863487345, -7045052338775704800
    var_5840 = 56;
    pri = fun_2330(var_5832, var_5824, var_5816, var_5808, var_5800, var_5792, var_5784)
    var_5848 = 1;
    var_5856 = 8;
    pri = fun_24C8(var_5848)
    var_5864 = 5;
    var_5872 = -7045052338775704800;
    var_5880 = 16;
    pri = fun_1500(var_5872, var_5864)
    var_5888 = -7045052338775704800;
    var_5896 = 8;
    pri = fun_15B8(var_5888)
    var_5904 = 0;
    var_5912 = 3;
    var_5920 = 0;
    var_5928 = 100;
    var_5936 = -1;
    OP_PUSH2_C -1701189641351859134, -7045052338775704800
    var_5944 = 56;
    pri = fun_2330(var_5936, var_5928, var_5920, var_5912, var_5904, var_5896, var_5888)
    var_5952 = 1;
    var_5960 = 8;
    pri = fun_24C8(var_5952)
    var_5968 = 0;
    pri = fun_2588()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_5976 = 16;
    pri = fun_27A0(var_5968, var_5960)
    var_5984 = 3;
    var_5992 = 1;
    OP_PUSH2_C 4643811109363095962, 4611719795424593183
    var_6000 = 32;
    pri = fun_2808(var_5992, var_5984, var_5976, var_5968)
    var_6008 = 0;
    var_6016 = 4627448617123184640;
    var_6024 = 0;
    OP_PUSH5_C 4653661150251224924, -4588902026437543854, 4654220757689297797, 4651562666338916762, 4641597308671266652
    var_6032 = 4651986989866308076;
    var_6040 = 1;
    pri = EvCameraMove(var_6040, var_6032, var_6024, var_6016, var_6008, var_6000, var_5992, var_5984, var_5976, var_5968)
    var_6048 = 0;
    pri = fun_2710()
    var_6056 = 0;
    var_6064 = 4627448617123184640;
    var_6072 = 2;
    OP_PUSH5_C 4653589638014954373, -4590215107203899064, 4654135215684656824, 4651419465944515215, 4641989614420057129
    var_6080 = 4651815729935165686;
    var_6088 = 30;
    pri = EvCameraMove(var_6088, var_6080, var_6072, var_6064, var_6056, var_6048, var_6040, var_6032, var_6024, var_6016)
    var_6096 = 1;
    var_6104 = 0;
    var_6112 = 15;
    var_6120 = 15;
    pri = float(var_6120)
    var_6128 = pri;
    var_6136 = 0;
    pri = float(var_6136)
    var_6144 = pri;
    var_6152 = 8802641224559852288;
    var_6160 = 48;
    pri = fun_13C8(var_6152, var_6144, var_6136, var_6128, var_6120, var_6112)
    var_6168 = 1;
    var_6176 = 8;
    pri = fun_9690(var_6168)
    var_6184 = 0;
    var_6192 = 0;
    var_6200 = 0;
    var_6208 = 479;
    pri = SoundPlayPokeVoice(var_6208, var_6200, var_6192, var_6184)
    var_6216 = 30;
    var_6224 = 8;
    pri = fun_0060(var_6216)
    var_6232 = 3;
    var_6240 = 0;
    var_6248 = 101;
    var_6256 = 4769329133301595117;
    var_6264 = 32;
    pri = fun_21D8(var_6256, var_6248, var_6240, var_6232)
    var_6272 = 1;
    var_6280 = 8;
    pri = fun_24C8(var_6272)
    var_6288 = 0;
    pri = fun_2588()
    var_6296 = 0;
    var_6304 = 4629334499467146035;
    var_6312 = 0;
    OP_PUSH5_C 4648734370588556001, 4637913856757286830, 4652735361460637532, 4653489626437291868, 4637322759306194452
    var_6320 = 4652920431257824788;
    var_6328 = 1;
    pri = EvCameraMove(var_6328, var_6320, var_6312, var_6304, var_6296, var_6288, var_6280, var_6272, var_6264, var_6256)
    var_6336 = 0;
    pri = fun_2710()
    var_6344 = 0;
    var_6352 = 4629334499467146035;
    var_6360 = 2;
    OP_PUSH5_C 4648735953885299999, 4637913856757286830, 4652908600512709919, 4653495827682872525, 4637322759306194452
    var_6368 = 4652869150035505316;
    var_6376 = 240;
    pri = EvCameraMove(var_6376, var_6368, var_6360, var_6352, var_6344, var_6336, var_6328, var_6320, var_6312, var_6304)
    var_6384 = 0;
    var_6392 = 3;
    var_6400 = 0;
    var_6408 = 100;
    var_6416 = -1;
    OP_PUSH2_C -1701188541840230923, -7045052338775704800
    var_6424 = 56;
    pri = fun_2330(var_6416, var_6408, var_6400, var_6392, var_6384, var_6376, var_6368)
    var_6432 = 1;
    var_6440 = 8;
    pri = fun_24C8(var_6432)
    var_6448 = -7045052338775704800;
    var_6456 = 8;
    pri = fun_1540(var_6448)
    var_6464 = 10;
    var_6472 = 8802641224559852288;
    var_6480 = 16;
    pri = fun_1428(var_6472, var_6464)
    var_6488 = 0;
    var_6496 = 10;
    OP_PUSH3_C -4624296097384025292, -4620693217682128896, -7045052338775704800
    var_6504 = 40;
    pri = fun_1468(var_6496, var_6488, var_6480, var_6472, var_6464)
    var_6512 = 1;
    var_6520 = 8;
    pri = fun_9848(var_6512)
    var_6528 = 5;
    var_6536 = 8;
    pri = fun_0060(var_6528)
    var_6544 = -7045052338775704800;
    var_6552 = 8;
    pri = fun_14C0(var_6544)
    var_6560 = 8;
    var_6568 = 10;
    var_6576 = 0;
    var_6584 = 0;
    var_6592 = -7045052338775704800;
    var_6600 = 40;
    pri = fun_1468(var_6592, var_6584, var_6576, var_6568, var_6560)
    var_6608 = 0;
    var_6616 = 3;
    var_6624 = 0;
    var_6632 = 100;
    var_6640 = -1;
    OP_PUSH2_C -1700345216421582311, -7045052338775704800
    var_6648 = 56;
    pri = fun_2330(var_6640, var_6632, var_6624, var_6616, var_6608, var_6600, var_6592)
    var_6656 = 1;
    var_6664 = 8;
    pri = fun_24C8(var_6656)
    var_6672 = 0;
    var_6680 = 1309226512207369434;
    var_6688 = 0;
    var_6696 = 24;
    pri = fun_25B8(var_6688, var_6680, var_6672)
    var_6704 = 0;
    var_6712 = 1309225412695741223;
    var_6720 = 1;
    var_6728 = 24;
    pri = fun_25B8(var_6720, var_6712, var_6704)
    var_6744 = 0;
    var_6752 = 0;
    var_6760 = 0;
    var_6768 = 1;
    var_6776 = 32;
    pri = fun_26A0(var_6768, var_6760, var_6752, var_6744)
    var_16 = pri;
    var_6784 = 3;
    var_6792 = 1;
    OP_PUSH2_C 4640907378318976745, 4612415601567021924
    var_6800 = 32;
    pri = fun_2808(var_6792, var_6784, var_6776, var_6768)
    var_6808 = 0;
    var_6816 = 4626716782183736934;
    var_6824 = 0;
    OP_PUSH5_C 4648602517154153103, 4636061047723088937, 4652679770152737178, 4653129426428032451, 4639695593359865283
    var_6832 = 4652734130007614423;
    var_6840 = 1;
    pri = EvCameraMove(var_6840, var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784, var_6776, var_6768)
    var_6848 = 0;
    var_6856 = 0;
    var_6864 = 0;
    var_6872 = 0;
    OP_PUSH2_C 8802641224559852288, -7045052338775704800
    var_6880 = 48;
    pri = fun_0A50(var_6872, var_6864, var_6856, var_6848, var_6840, var_6832)
    var_6888 = -7045052338775704800;
    var_6896 = 8;
    pri = fun_0AA8(var_6888)
    pri = var_16;
    switch (pri) {
// switch_DA68
        case default:
        {
// switch_DA68_case_default
            var_8 = 0;
            pri = fun_2588()
            var_16 = 1;
            var_24 = -1;
            var_32 = -1;
            var_40 = 3;
            var_48 = 0;
            var_56 = 2;
            var_64 = -7045052338775704800;
            var_72 = 56;
            pri = fun_2980(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 15;
            var_88 = 8;
            pri = fun_0060(var_80)
            var_96 = 33360;
            pri = SoundPostEvent(var_96)
            var_104 = 3;
            var_112 = 0;
            var_120 = -3027317529702187635;
            var_128 = 24;
            pri = fun_23E0(var_120, var_112, var_104)
            var_136 = -7045052338775704800;
            var_144 = 8;
            pri = fun_0C80(var_136)
            var_152 = 0;
            var_160 = 8;
            pri = fun_0408(var_152)
            var_168 = 1;
            var_176 = 8;
            pri = fun_24C8(var_168)
            var_184 = 0;
            pri = fun_2588()
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_192 = 3;
            var_200 = 1;
            var_208 = 32;
            pri = fun_2860(var_200, var_192, var_184, var_176)
            var_216 = 1;
            var_224 = 1;
            var_232 = 0;
            OP_PUSH3_C 4653432275910787072, 4652429521306255360, 3461578099255135998
            var_240 = 48;
            pri = fun_0778(var_232, var_224, var_216, var_208, var_200, var_192)
            var_248 = 0;
            var_256 = 4626716782183736934;
            var_264 = 0;
            OP_PUSH5_C 4652699033596455813, 4636243302770509087, 4652885158924805734, 4655145710851048079, 4645189984905257288
            var_272 = 4653043224716414812;
            var_280 = 1;
            pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_288 = 0;
            pri = fun_2710()
            var_296 = 0;
            var_304 = 4626716782183736934;
            var_312 = 2;
            OP_PUSH5_C 4652696746612270039, 4636243302770509087, 4652863168692250214, 4655136386992444539, 4645182244343397745
            var_320 = 4652610281017861734;
            var_328 = 360;
            pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
            var_336 = 1;
            var_344 = 0;
            var_352 = 4641240890982006784;
            var_360 = 35;
            pri = float(var_360)
            var_368 = pri;
            var_376 = 1;
            OP_PUSH4_C 4652275589678366720, 4652429521306255360, 4607182418800017408, 3461578099255135998
            var_384 = 72;
            pri = fun_0930(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
            var_392 = 1;
            var_400 = 1;
            var_408 = -1;
            var_416 = -1;
            var_424 = 0;
            var_432 = 1;
            var_440 = -7045052338775704800;
            var_448 = 56;
            pri = fun_4560(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
            var_456 = 0;
            var_464 = 3;
            var_472 = 0;
            var_480 = 100;
            var_488 = -1;
            OP_PUSH2_C -1700348514956466944, -7045052338775704800
            var_496 = 56;
            pri = fun_2330(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
            var_504 = 1;
            var_512 = 8;
            pri = fun_24C8(var_504)
            var_520 = 1;
            var_528 = 3;
            var_536 = 0;
            var_544 = 1;
            var_552 = -7045052338775704800;
            var_560 = 40;
            pri = fun_6898(var_552, var_544, var_536, var_528, var_520)
            var_568 = 0;
            var_576 = 3;
            var_584 = 0;
            var_592 = 100;
            var_600 = -1;
            OP_PUSH2_C -1700332022282043779, -7045052338775704800
            var_608 = 56;
            pri = fun_2330(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
            var_616 = 1;
            var_624 = 8;
            pri = fun_24C8(var_616)
            var_632 = 0;
            pri = fun_2588()
            var_640 = -7045052338775704800;
            var_648 = 8;
            pri = fun_0C80(var_640)
            var_656 = 3461578099255135998;
            var_664 = 8;
            pri = fun_0AA8(var_656)
            var_672 = 1;
            var_680 = 0;
            var_688 = 31496;
            var_696 = 8;
            var_704 = 32;
            pri = fun_02E0(var_696, var_688, var_680, var_672)
            var_712 = 0;
            pri = fun_0350()
            var_720 = 33576;
            pri = SoundPostEvent(var_720)
            var_728 = -7045052338775704800;
            var_736 = 8;
            pri = fun_1658(var_728)
            var_744 = -1;
            var_752 = -7045052338775704800;
            var_760 = 16;
            pri = fun_1428(var_752, var_744)
            var_768 = -1;
            var_776 = 8802641224559852288;
            var_784 = 16;
            pri = fun_1428(var_776, var_768)
            var_792 = 0;
            var_800 = 8802641224559852288;
            var_808 = 16;
            pri = fun_0878(var_800, var_792)
            var_816 = 3;
            var_824 = 1;
            pri = EvCameraEnd(var_824, var_816)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_DA68_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -1700346315933210522, -7045052338775704800
            var_48 = 56;
            pri = fun_2330(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_24C8(var_56)
            OP_JUMP switch_DA68_case_default
        }
        case 0x1:
        {
// switch_DA68_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -1700347415444838733, -7045052338775704800
            var_48 = 56;
            pri = fun_2330(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_24C8(var_56)
            OP_JUMP switch_DA68_case_default
        }
    }
}
// fun_E1A0
fun_E1A0() {
    pri = 0;
    return pri;
}
// fun_E1B8
fun_E1B8() {
    var_8 = 215;
    var_16 = 8;
    pri = fun_98B0(var_8)
    var_24 = 8112749681754728295;
    var_32 = 8;
    pri = fun_0698(var_24)
    var_40 = -34089364971008208;
    pri = VanishFlagReset(var_40)
    var_48 = 2658386530751210263;
    pri = VanishFlagSet(var_48)
    var_56 = -5005481396565922172;
    pri = VanishFlagSet(var_56)
    var_64 = 9204040631772691403;
    pri = VanishFlagSet(var_64)
    var_72 = -9016284007180476738;
    pri = VanishFlagSet(var_72)
    var_80 = 2206622293127986236;
    pri = VanishFlagSet(var_80)
    var_88 = 9204042830795947825;
    pri = VanishFlagReset(var_88)
    var_96 = -8654322880212382842;
    pri = VanishFlagReset(var_96)
    var_104 = 59409724177917345;
    pri = VanishFlagReset(var_104)
    var_112 = -484546589220304156;
    pri = VanishFlagReset(var_112)
    var_120 = -484552086778445211;
    pri = VanishFlagReset(var_120)
    var_128 = -3674024162174587963;
    pri = VanishFlagReset(var_128)
    var_136 = 8148776415994478925;
    pri = FlagSet(var_136)
    var_144 = -8799907414557996815;
    pri = FlagSet(var_144)
    pri = 0;
    return pri;
}
// fun_E448
fun_E448() {
    OP_PUSH2_C -7045052338775704800, 8482470537274116946
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1600;
    pri = float(var_32)
    var_40 = pri;
    OP_PUSH2_C 4652552666608566272, 8802641224559852288
    var_48 = 48;
    pri = fun_0778(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4593404218690030797, 4655753564859347763, 4653082191408503194, 3461578099255135998
    var_72 = 48;
    pri = fun_0778(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 15;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 32504;
    var_104 = 8;
    var_112 = 16;
    pri = fun_0280(var_104, var_96)
    var_120 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_E5B0
fun_E5B0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9A80()
    var_16 = 0;
    pri = fun_9AD8()
    var_24 = 0;
    pri = fun_9B18()
    var_32 = 0;
    pri = fun_9B48()
    var_40 = 0;
    pri = fun_E1A0()
    var_48 = 0;
    pri = fun_E1B8()
    var_56 = 0;
    pri = fun_E448()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_E6A0
fun_E6A0() {
    var_8 = 0;
    pri = fun_9AD8()
    var_16 = 0;
    pri = fun_E1B8()
    pri = 0;
    return pri;
}
// fun_E6E8
fun_E6E8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -1700333121793671990;
    var_88 = 80;
    pri = fun_8FD8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
