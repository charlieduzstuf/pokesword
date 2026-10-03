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
// fun_04A8
fun_04A8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04D8
fun_04D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0510
// lab_0510
    var_8 = 0;
    pri = fun_0658()
    OP_JNZ lab_0548
    OP_JUMP lab_0578
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05E8
    pri = 0;
    return pri;
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
    pri = 0;
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0658
fun_0658() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DeleteFieldTrafficObject_(var_16, var_8)
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveStaticCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0898
fun_0898() {
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
// fun_0910
fun_0910() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1630(var_8)
    OP_JZER lab_0A88
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1660(var_24)
    OP_JNZ lab_0A88
    pri = 0;
    return pri;
// lab_0A88
    OP_JUMP lab_0A98
// lab_0A98
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AF8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A98
    pri = 0;
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C30
    pri = 0;
    return pri;
// lab_0C30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C70
// lab_0C70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1630(var_8)
    OP_JNZ lab_0CF8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CE8
    pri = 0;
    return pri;
// lab_0CF8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D40
    pri = 0;
    return pri;
// lab_0D40
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    pri = 0;
    return pri;
// lab_0DA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C70
    pri = 0;
    return pri;
// lab_0CE8
    OP_JUMP lab_0D40
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E70
    pri = 0;
    return pri;
// lab_0E70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1630(var_8)
    OP_JZER lab_0FA0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_ZERO_P_S 64
// lab_0FA0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD8
    OP_CONST_S 64, 1
// lab_0FD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1010
    OP_CONST_S 72, 1
// lab_1010
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
// lab_0EC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF0
    OP_ZERO_P_S 72
// lab_0EF0
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
    OP_JUMP lab_10B0
// lab_10B0
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11D8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1250(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1218(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1290(var_24)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1630(var_8)
    OP_JZER lab_1428
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
// lab_1428
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
// fun_1490
fun_1490() {
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
    pri = fun_1388(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1660
fun_1660() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1690
fun_1690() {
    OP_JUMP lab_16A8
// lab_16A8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1738
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1728
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    pri = 0;
    return pri;
// lab_1738
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_17B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    pri = 0;
    return pri;
// lab_17C8
    pri = 0;
    return pri;
// lab_17B8
    OP_JUMP lab_17D8
// lab_17D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16A8
    pri = 0;
    return pri;
// lab_1728
    OP_JUMP lab_17D8
}
// fun_1818
fun_1818() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1690(var_40)
    pri = 0;
    return pri;
}
// fun_18A0
fun_18A0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_18D8
fun_18D8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1900
fun_1900() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1930
fun_1930() {
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
// fun_1A00
fun_1A00() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
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
// switch_2050
        case default:
        {
// switch_2050_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2098
// lab_2098
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
            OP_JNZ lab_2140
            var_88 = 0;
            pri = fun_22F8()
// lab_2140
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2050_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1C38
                case default:
                {
// switch_1C38_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CB0
// lab_1CB0
                    OP_JUMP lab_2098
                }
                case 0x0:
                {
// switch_1C38_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1CB0
                }
                case 0x1:
                {
// switch_1C38_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1CB0
                }
                case 0x2:
                {
// switch_1C38_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1CB0
                }
                case 0x3:
                {
// switch_1C38_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CB0
                }
                case 0x4:
                {
// switch_1C38_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1CB0
                }
                case 0x5:
                {
// switch_1C38_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1CB0
                }
            }
        }
        case 0x65:
        {
// switch_2050_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1DF0
                case default:
                {
// switch_1DF0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E68
// lab_1E68
                    OP_JUMP lab_2098
                }
                case 0x0:
                {
// switch_1DF0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1E68
                }
                case 0x1:
                {
// switch_1DF0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1E68
                }
                case 0x2:
                {
// switch_1DF0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1E68
                }
                case 0x3:
                {
// switch_1DF0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E68
                }
                case 0x4:
                {
// switch_1DF0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1E68
                }
                case 0x5:
                {
// switch_1DF0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1E68
                }
            }
        }
        case 0x66:
        {
// switch_2050_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1FA8
                case default:
                {
// switch_1FA8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2020
// lab_2020
                    OP_JUMP lab_2098
                }
                case 0x0:
                {
// switch_1FA8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2020
                }
                case 0x1:
                {
// switch_1FA8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2020
                }
                case 0x2:
                {
// switch_1FA8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2020
                }
                case 0x3:
                {
// switch_1FA8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2020
                }
                case 0x4:
                {
// switch_1FA8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2020
                }
                case 0x5:
                {
// switch_1FA8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2020
                }
            }
        }
    }
}
// fun_2158
fun_2158() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BB0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2200
    pri = 1;
    return pri;
// lab_2200
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2248
fun_2248() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2298
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2158(var_8)
    arg_2 = pri;
// lab_2298
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22F8
fun_22F8() {
    OP_JUMP lab_2310
// lab_2310
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2350
    pri = 0;
    return pri;
// lab_2350
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2310
    pri = 0;
    return pri;
}
// fun_2390
fun_2390() {
    var_8 = 0;
    pri = fun_22F8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2440
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2440
    pri = 0;
    return pri;
}
// fun_2450
fun_2450() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_24F8()
    return pri;
}
// fun_24F8
fun_24F8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2538
fun_2538() {
    pri = arg_1;
    OP_JNZ lab_2580
    var_8 = 3408;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2580
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
// fun_25D8
fun_25D8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2650
fun_2650() {
    var_8 = 0;
    pri = fun_25D8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_26D0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_26D0
    pri = 1;
    return pri;
// lab_26D0
    var_8 = 0;
    pri = fun_25D8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2710
    pri = 1;
    return pri;
// lab_2710
    var_8 = 0;
    pri = fun_25D8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2740
fun_2740() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2790
fun_2790() {
    OP_JUMP lab_27A8
// lab_27A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_27E0
    pri = 0;
    return pri;
// lab_27E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27A8
    pri = 0;
    return pri;
}
// fun_2820
fun_2820() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2888(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2960()
    pri = 0;
    return pri;
}
// fun_2888
fun_2888() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2888(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2960()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2960
fun_2960() {
    OP_JUMP lab_2978
// lab_2978
    pri = IsEasingRunningDof_()
    OP_JZER lab_29D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_29E0
// lab_29D0
    pri = 0;
    return pri;
// lab_29E0
    OP_JUMP lab_2978
    pri = 0;
    return pri;
}
// fun_2A00
fun_2A00() {
    pri = arg_6;
    OP_JNZ lab_2A38
    var_8 = 0;
    pri = fun_10C0()
// lab_2A38
    pri = arg_1;
    switch (pri) {
// switch_3FA0
        case default:
        {
// switch_3FA0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42F0
            pri = 1;
            OP_JUMP lab_42F8
// lab_42F0
            pri = 0;
// lab_42F8
            OP_JZER lab_4450
            var_16 = 11088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB0(var_24, var_16)
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
            var_64 = 11192;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_44B0
// lab_4450
            var_8 = 64;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_44B0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4510
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4570
// lab_4510
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4570
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4570
            pri = arg_2;
            OP_JZER lab_45B0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_45B0
            var_8 = 0;
            pri = fun_1100()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3FA0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1:
        {
// switch_3FA0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x2:
        {
// switch_3FA0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x3:
        {
// switch_3FA0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x4:
        {
// switch_3FA0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x5:
        {
// switch_3FA0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8376;
            var_72 = 8368;
            var_80 = 8360;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x6:
        {
// switch_3FA0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8400;
            var_72 = 8392;
            var_80 = 8384;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x7:
        {
// switch_3FA0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8424;
            var_72 = 8416;
            var_80 = 8408;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x8:
        {
// switch_3FA0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x9:
        {
// switch_3FA0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8448;
            var_72 = 8440;
            var_80 = 8432;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xa:
        {
// switch_3FA0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8472;
            var_72 = 8464;
            var_80 = 8456;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xb:
        {
// switch_3FA0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8496;
            var_72 = 8488;
            var_80 = 8480;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xc:
        {
// switch_3FA0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8520;
            var_72 = 8512;
            var_80 = 8504;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xd:
        {
// switch_3FA0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8544;
            var_72 = 8536;
            var_80 = 8528;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xe:
        {
// switch_3FA0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8568;
            var_72 = 8560;
            var_80 = 8552;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0xf:
        {
// switch_3FA0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x10:
        {
// switch_3FA0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x11:
        {
// switch_3FA0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8592;
            var_72 = 8584;
            var_80 = 8576;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x12:
        {
// switch_3FA0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8616;
            var_72 = 8608;
            var_80 = 8600;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x13:
        {
// switch_3FA0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x14:
        {
// switch_3FA0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x15:
        {
// switch_3FA0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x16:
        {
// switch_3FA0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x17:
        {
// switch_3FA0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x18:
        {
// switch_3FA0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x19:
        {
// switch_3FA0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8640;
            var_72 = 8632;
            var_80 = 8624;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1a:
        {
// switch_3FA0_case_0x1a
            var_8 = 1;
            var_16 = 8648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            var_40 = 8784;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8864;
            var_88 = 8856;
            var_96 = 8848;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E20(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1b:
        {
// switch_3FA0_case_0x1b
            var_8 = 3;
            var_16 = 8872;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            var_40 = 9008;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9088;
            var_88 = 9080;
            var_96 = 9072;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E20(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1c:
        {
// switch_3FA0_case_0x1c
            var_8 = 2;
            var_16 = 9096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            var_40 = 9232;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B38(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9312;
            var_88 = 9304;
            var_96 = 9296;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E20(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1d:
        {
// switch_3FA0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1e:
        {
// switch_3FA0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9456;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x1f:
        {
// switch_3FA0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9592;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x20:
        {
// switch_3FA0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9728;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x21:
        {
// switch_3FA0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x22:
        {
// switch_3FA0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9968;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x23:
        {
// switch_3FA0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10104;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x24:
        {
// switch_3FA0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10240;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x25:
        {
// switch_3FA0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10376;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x26:
        {
// switch_3FA0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10512;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x27:
        {
// switch_3FA0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x28:
        {
// switch_3FA0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
        case 0x29:
        {
// switch_3FA0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10944;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA0_case_default
        }
    }
}
// fun_45E0
fun_45E0() {
    pri = arg_5;
    OP_JNZ lab_4618
    var_8 = 0;
    pri = fun_10C0()
// lab_4618
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4668
    OP_CONST_S -8, -1
// lab_4668
    pri = arg_1;
    switch (pri) {
// switch_6120
        case default:
        {
// switch_6120_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_65C8
            var_520 = 30952;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BB0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_65C8
            pri = 1;
            OP_JUMP lab_65D0
// lab_65C8
            pri = 0;
// lab_65D0
            OP_JZER lab_6620
            var_8 = 64;
            var_16 = 31048;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6878
// lab_6620
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6688
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6688
            pri = 1;
            OP_JUMP lab_6690
// lab_6688
            pri = 0;
// lab_6690
            OP_JZER lab_6818
            var_16 = 31224;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB0(var_24, var_16)
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
            var_176 = 31328;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31344;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6878
// lab_6818
            var_8 = 64;
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6878
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_68E8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_68E8
            var_8 = 0;
            pri = fun_1100()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6120_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x1:
        {
// switch_6120_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x2:
        {
// switch_6120_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3:
        {
// switch_6120_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x4:
        {
// switch_6120_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x5:
        {
// switch_6120_case_0x5
            var_8 = 2;
            var_16 = 21208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DE8(var_40)
            OP_JUMP switch_6120_case_default
        }
        case 0x6:
        {
// switch_6120_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x7:
        {
// switch_6120_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x8:
        {
// switch_6120_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x9:
        {
// switch_6120_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0xa:
        {
// switch_6120_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0xb:
        {
// switch_6120_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0xc:
        {
// switch_6120_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0xd:
        {
// switch_6120_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21856;
            var_72 = 21680;
            var_80 = 21496;
            var_88 = 21304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0xe:
        {
// switch_6120_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22512;
            var_72 = 22304;
            var_80 = 22088;
            var_88 = 21864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0xf:
        {
// switch_6120_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22904;
            var_72 = 22784;
            var_80 = 22656;
            var_88 = 22520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x10:
        {
// switch_6120_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23248;
            var_72 = 23144;
            var_80 = 23032;
            var_88 = 22912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x11:
        {
// switch_6120_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23592;
            var_72 = 23488;
            var_80 = 23376;
            var_88 = 23256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x12:
        {
// switch_6120_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x13:
        {
// switch_6120_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x14:
        {
// switch_6120_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24152;
            var_72 = 23976;
            var_80 = 23792;
            var_88 = 23600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x15:
        {
// switch_6120_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x16:
        {
// switch_6120_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x17:
        {
// switch_6120_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x18:
        {
// switch_6120_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x19:
        {
// switch_6120_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x1a:
        {
// switch_6120_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x1b:
        {
// switch_6120_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x1c:
        {
// switch_6120_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24544;
            var_72 = 24424;
            var_80 = 24296;
            var_88 = 24160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x1d:
        {
// switch_6120_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x1e:
        {
// switch_6120_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25008;
            var_72 = 24864;
            var_80 = 24712;
            var_88 = 24552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x1f:
        {
// switch_6120_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x20:
        {
// switch_6120_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x21:
        {
// switch_6120_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x22:
        {
// switch_6120_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x23:
        {
// switch_6120_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x24:
        {
// switch_6120_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25264;
            var_80 = 25144;
            var_88 = 25016;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x25:
        {
// switch_6120_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25744;
            var_72 = 25632;
            var_80 = 25512;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x26:
        {
// switch_6120_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x27:
        {
// switch_6120_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x28:
        {
// switch_6120_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x29:
        {
// switch_6120_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26184;
            var_72 = 26048;
            var_80 = 25904;
            var_88 = 25752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x2a:
        {
// switch_6120_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26456;
            var_80 = 26328;
            var_88 = 26192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x2b:
        {
// switch_6120_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26992;
            var_72 = 26864;
            var_80 = 26728;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x2c:
        {
// switch_6120_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27296;
            var_80 = 27152;
            var_88 = 27000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x2d:
        {
// switch_6120_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x2e:
        {
// switch_6120_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27656;
            var_80 = 27552;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x2f:
        {
// switch_6120_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28144;
            var_72 = 28024;
            var_80 = 27896;
            var_88 = 27760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x30:
        {
// switch_6120_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28536;
            var_72 = 28416;
            var_80 = 28288;
            var_88 = 28152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x31:
        {
// switch_6120_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x32:
        {
// switch_6120_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x33:
        {
// switch_6120_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28928;
            var_72 = 28808;
            var_80 = 28680;
            var_88 = 28544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x34:
        {
// switch_6120_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29296;
            var_72 = 29184;
            var_80 = 29064;
            var_88 = 28936;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x35:
        {
// switch_6120_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29784;
            var_72 = 29632;
            var_80 = 29472;
            var_88 = 29304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x36:
        {
// switch_6120_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30152;
            var_72 = 30040;
            var_80 = 29920;
            var_88 = 29792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x37:
        {
// switch_6120_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x38:
        {
// switch_6120_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30520;
            var_72 = 30408;
            var_80 = 30288;
            var_88 = 30160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6120_case_default
        }
        case 0x39:
        {
// switch_6120_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3a:
        {
// switch_6120_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3b:
        {
// switch_6120_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3c:
        {
// switch_6120_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3d:
        {
// switch_6120_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
        case 0x3e:
        {
// switch_6120_case_0x3e
            var_8 = 4;
            var_16 = 30848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            OP_JUMP switch_6120_case_default
        }
    }
}
// fun_6918
fun_6918() {
    pri = arg_4;
    OP_JNZ lab_6950
    var_8 = 0;
    pri = fun_10C0()
// lab_6950
    pri = arg_1;
    switch (pri) {
// switch_7D28
        case default:
        {
// switch_7D28_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31920;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1630(var_264)
            OP_JZER lab_82F0
            pri = arg_3;
            switch (pri) {
// switch_8298
                case default:
                {
// switch_8298_case_default
                    OP_JUMP lab_85A8
// lab_85A8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8618
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8618
                    var_8 = 0;
                    pri = fun_1100()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8298_case_0x1
                    var_8 = 32;
                    var_16 = 32072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8298_case_default
                }
                case 0x2:
                {
// switch_8298_case_0x2
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8298_case_default
                }
                case 0x3:
                {
// switch_8298_case_0x3
                    var_8 = 32;
                    var_16 = 31976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8298_case_default
                }
            }
// lab_82F0
            pri = arg_1;
            OP_JZER lab_8340
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8340
            pri = 0;
            OP_JUMP lab_8348
// lab_8340
            pri = 1;
// lab_8348
            OP_JZER lab_83B0
            var_8 = 32272;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BB0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_83B0
            pri = 1;
            OP_JUMP lab_83B8
// lab_83B0
            pri = 0;
// lab_83B8
            OP_JZER lab_8408
            var_8 = 32;
            var_16 = 32368;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_85A8
// lab_8408
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8470
            var_8 = 32;
            var_16 = 32528;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_85A8
// lab_8470
            var_16 = 32648;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB0(var_24, var_16)
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
            var_176 = 32752;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32768;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7D28_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1:
        {
// switch_7D28_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2:
        {
// switch_7D28_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3:
        {
// switch_7D28_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x4:
        {
// switch_7D28_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x5:
        {
// switch_7D28_case_0x5
            var_8 = 1;
            var_16 = 31400;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DE8(var_40)
            OP_JUMP switch_7D28_case_default
        }
        case 0x6:
        {
// switch_7D28_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x7:
        {
// switch_7D28_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x8:
        {
// switch_7D28_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x9:
        {
// switch_7D28_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xa:
        {
// switch_7D28_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xb:
        {
// switch_7D28_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xc:
        {
// switch_7D28_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xd:
        {
// switch_7D28_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xe:
        {
// switch_7D28_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0xf:
        {
// switch_7D28_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x10:
        {
// switch_7D28_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x11:
        {
// switch_7D28_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x12:
        {
// switch_7D28_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x13:
        {
// switch_7D28_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x14:
        {
// switch_7D28_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x15:
        {
// switch_7D28_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x16:
        {
// switch_7D28_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x17:
        {
// switch_7D28_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x18:
        {
// switch_7D28_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x19:
        {
// switch_7D28_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1a:
        {
// switch_7D28_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1b:
        {
// switch_7D28_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1c:
        {
// switch_7D28_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1d:
        {
// switch_7D28_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1e:
        {
// switch_7D28_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x1f:
        {
// switch_7D28_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x20:
        {
// switch_7D28_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x21:
        {
// switch_7D28_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x22:
        {
// switch_7D28_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x23:
        {
// switch_7D28_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x24:
        {
// switch_7D28_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x25:
        {
// switch_7D28_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x26:
        {
// switch_7D28_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x27:
        {
// switch_7D28_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x28:
        {
// switch_7D28_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x29:
        {
// switch_7D28_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2a:
        {
// switch_7D28_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2b:
        {
// switch_7D28_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2c:
        {
// switch_7D28_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2d:
        {
// switch_7D28_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2e:
        {
// switch_7D28_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x2f:
        {
// switch_7D28_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x30:
        {
// switch_7D28_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x31:
        {
// switch_7D28_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x32:
        {
// switch_7D28_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x33:
        {
// switch_7D28_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x34:
        {
// switch_7D28_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x35:
        {
// switch_7D28_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x36:
        {
// switch_7D28_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x37:
        {
// switch_7D28_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x38:
        {
// switch_7D28_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x39:
        {
// switch_7D28_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3a:
        {
// switch_7D28_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3b:
        {
// switch_7D28_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3c:
        {
// switch_7D28_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31496;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3d:
        {
// switch_7D28_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31672;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
        case 0x3e:
        {
// switch_7D28_case_0x3e
            var_8 = 3;
            var_16 = 31816;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B70(var_24, var_16, var_8)
            OP_JUMP switch_7D28_case_default
        }
    }
}
// fun_8648
fun_8648() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8858(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32816;
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
    var_424 = 32872;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32888;
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
    OP_JZER lab_8840
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8840
    pri = 0;
    return pri;
}
// fun_8858
fun_8858() {
    var_8 = arg_1;
    var_16 = 32936;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B70(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88A0
fun_88A0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_89A0
        case default:
        {
// switch_89A0_case_default
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
// switch_89A0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_89A0_case_default
        }
        case 0x1:
        {
// switch_89A0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_89A0_case_default
        }
        case 0x2:
        {
// switch_89A0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_89A0_case_default
        }
        case 0x3:
        {
// switch_89A0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_89A0_case_default
        }
    }
}
// fun_8A60
fun_8A60() {
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
    pri = fun_2248(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_22F8()
    pri = 0;
    return pri;
}
// fun_8AF8
fun_8AF8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_88A0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8A60(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8BA0
fun_8BA0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8BF0
// lab_8BF0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 33040;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8C68
    OP_JUMP lab_8C98
// lab_8C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8BF0
// lab_8C98
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8D20
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6918(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1900(var_56)
// lab_8D20
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8D88
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1198(var_24, var_16)
// lab_8D88
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1198(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8E48
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BE8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0968(var_88, var_80, var_72, var_64, var_56)
// lab_8E48
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8E88
    pri = 0;
    return pri;
// lab_8E88
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8FD0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 33160;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B38(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8F98
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8FD0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A10(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A10(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BE8(var_40)
    pri = 0;
    return pri;
// lab_8F98
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1198(var_16, var_8)
}
// fun_9058
fun_9058() {
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
    pri = fun_8AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2390(var_112)
    var_128 = 0;
    pri = fun_2450()
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
    pri = fun_8BA0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_91D0
fun_91D0() {
    pri = 33296;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9258
// lab_9258
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_93D8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_93C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9318
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9318
    pri = 0;
    OP_JUMP lab_9320
// lab_93D8
    pri = 0;
    return pri;
// lab_93C8
    OP_JUMP lab_9250
// lab_9250
    OP_INC_P_S -936
// lab_9318
    pri = 1;
// lab_9320
    OP_JZER lab_9398
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9390
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9398
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9390
}
// fun_93F8
fun_93F8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9490
    var_8 = 1;
    var_16 = 0;
    var_24 = 34216;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_18D8()
// lab_9490
    pri = arg_4;
    OP_JZER lab_94C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A00(var_8)
// lab_94C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9520
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9520
    pri = 0;
    OP_JUMP lab_9528
// lab_9520
    pri = 1;
// lab_9528
    OP_JZER lab_95F0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_95F0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_95C8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1818(var_32, var_24)
    OP_JUMP lab_95F0
// lab_95F0
    pri = arg_2;
    OP_JZER lab_96C8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9698
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1198(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0860(var_40)
    OP_JUMP lab_96C8
// lab_96C8
    pri = arg_3;
    OP_JZER lab_9700
    var_8 = 1;
    var_16 = 8;
    pri = fun_18A0(var_8)
// lab_9700
    pri = 0;
    return pri;
// lab_9698
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1198(var_16, var_8)
// lab_95C8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1818(var_16, var_8)
}
// fun_9710
fun_9710() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_91D0(var_24)
    pri = 0;
    return pri;
}
// fun_9778
fun_9778() {
    pri = g_mode;
    switch (pri) {
// switch_98D8
        case default:
        {
// switch_98D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9960
// lab_9960
            pri = 0;
            return pri;
        }
        case 0x8a5b04f589d9c282:
        {
// switch_98D8_case_0x8a5b04f589d9c282
            var_8 = 0;
            pri = fun_14250()
            OP_JUMP lab_9960
        }
        case 0xadc16676d026dce1:
        {
// switch_98D8_case_0xadc16676d026dce1
            var_8 = 0;
            pri = fun_13FA8()
            OP_JUMP lab_9960
        }
        case 0xb6d05966783173c5:
        {
// switch_98D8_case_0xb6d05966783173c5
            var_8 = 0;
            pri = fun_143A8()
            OP_JUMP lab_9960
        }
        case 0x0:
        {
// switch_98D8_case_0x0
            var_8 = 0;
            pri = fun_9970()
            OP_JUMP lab_9960
        }
        case 0x17336b075abe7b3a:
        {
// switch_98D8_case_0x17336b075abe7b3a
            var_8 = 0;
            pri = fun_A060()
            OP_JUMP lab_9960
        }
        case 0x1f7bf52ae1d5e75f:
        {
// switch_98D8_case_0x1f7bf52ae1d5e75f
            var_8 = 0;
            pri = fun_A030()
            OP_JUMP lab_9960
        }
        case 0x46c55b277e969543:
        {
// switch_98D8_case_0x46c55b277e969543
            var_8 = 0;
            pri = fun_A090()
            OP_JUMP lab_9960
        }
    }
}
// fun_9970
fun_9970() {
    pri = 0;
    return pri;
}
// fun_9988
fun_9988() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_93F8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_99E0
fun_99E0() {
    pri = 0;
    return pri;
}
// fun_99F8
fun_99F8() {
    var_8 = -2780782667399596389;
    var_16 = 8;
    pri = fun_04A8(var_8)
    var_24 = 8287683314310166736;
    var_32 = 8;
    pri = fun_04A8(var_24)
    var_40 = 3444055432580894141;
    var_48 = 8;
    pri = fun_04A8(var_40)
    var_56 = 3444054333069265930;
    var_64 = 8;
    pri = fun_04A8(var_56)
    pri = 0;
    return pri;
}
// fun_9AB0
fun_9AB0() {
    var_8 = 0;
    pri = fun_04D8()
    pri = EvCameraStart()
    var_16 = 0;
    var_24 = 4631952216750555136;
    var_32 = 0;
    OP_PUSH5_C 4670923526787773235, 4648495908506723942, 4670180421854140826, 4671022018290610340, 4649159485764319314
    var_40 = 4670285120100116726;
    var_48 = 1;
    pri = EvCameraMove(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 0;
    pri = fun_2790()
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 3;
    OP_PUSH5_C 4670938219011899392, 4640731069430439608, 4670203857944486871, 4671004013787705508, 4642504009939995853
    var_88 = 4670270779719711457;
    var_96 = 80;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4671009893426135040, 4635681760191971328, 4670214121885532160, 8802641224559852288
    var_120 = 48;
    pri = fun_0710(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 34264;
    var_152 = 8;
    var_160 = 16;
    pri = fun_0280(var_152, var_144)
    var_168 = 0;
    pri = fun_0350()
    var_176 = 1;
    var_184 = 0;
    var_192 = 4641240890982006784;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH4_C 4670951894187769856, 4670214121885532160, 4611686018427387904, 8802641224559852288
    var_216 = 72;
    pri = fun_0898(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0A10(var_224)
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 3;
    var_288 = 6660951804926948019;
    var_296 = 56;
    pri = fun_45E0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C -4282425563931509729, 6660951804926948019
    var_344 = 56;
    pri = fun_2248(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_2390(var_352)
    var_368 = 0;
    pri = fun_2450()
    var_376 = 1;
    var_384 = 3;
    var_392 = 0;
    var_400 = 3;
    var_408 = 6660951804926948019;
    var_416 = 40;
    pri = fun_6918(var_408, var_400, var_392, var_384, var_376)
    var_424 = 6660951804926948019;
    var_432 = 8;
    pri = fun_0BE8(var_424)
    var_440 = 3;
    var_448 = 50;
    pri = EvCameraEnd(var_448, var_440)
    pri = 0;
    return pri;
}
// fun_9ED8
fun_9ED8() {
    pri = 0;
    return pri;
}
// fun_9EF0
fun_9EF0() {
    var_8 = 1586;
    var_16 = 8;
    pri = fun_9710(var_8)
    pri = 0;
    return pri;
}
// fun_9F28
fun_9F28() {
    pri = 0;
    return pri;
}
// fun_9F40
fun_9F40() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9988()
    var_16 = 0;
    pri = fun_99E0()
    var_24 = 0;
    pri = fun_99F8()
    var_32 = 0;
    pri = fun_9AB0()
    var_40 = 0;
    pri = fun_9ED8()
    var_48 = 0;
    pri = fun_9EF0()
    var_56 = 0;
    pri = fun_9F28()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A030
fun_A030() {
    var_8 = 0;
    pri = fun_9F40()
    pri = 0;
    return pri;
}
// fun_A060
fun_A060() {
    var_8 = 0;
    pri = fun_9F40()
    pri = 0;
    return pri;
}
// fun_A090
fun_A090() {
    var_8 = 0;
    pri = fun_99E0()
    var_16 = 0;
    pri = fun_9EF0()
    var_24 = 0;
    pri = fun_13398()
    var_32 = 0;
    pri = fun_13B30()
    var_40 = 0;
    pri = fun_13B48()
    var_48 = 0;
    pri = fun_13EA0()
    var_56 = 0;
    pri = fun_13F18()
    pri = 0;
    return pri;
}
// fun_A150
fun_A150() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_32 = 40;
    pri = fun_1140(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_72 = 48;
    pri = fun_09B8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    OP_PUSH2_C -6972685261560586573, -2780782667399596389
    var_120 = 56;
    pri = fun_2248(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_2390(var_128)
    var_144 = 0;
    pri = fun_2450()
    var_152 = 1;
    var_160 = 1;
    var_168 = -1;
    OP_PUSH2_C 8802641224559852288, 3444055432580894141
    var_176 = 40;
    pri = fun_1140(var_168, var_160, var_152, var_144, var_136)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH2_C 8802641224559852288, 3444055432580894141
    var_216 = 48;
    pri = fun_09B8(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 0;
    var_264 = 1;
    var_272 = 3444055432580894141;
    var_280 = 56;
    pri = fun_45E0(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -4718792119704734384, 3444055432580894141
    var_328 = 56;
    pri = fun_2248(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_2390(var_336)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0A10(var_352)
    var_368 = 3444055432580894141;
    var_376 = 8;
    pri = fun_0A10(var_368)
    var_384 = 0;
    var_392 = 0;
    var_400 = 1;
    OP_PUSH2_C -5439404509415903403, -5439407807950788036
    var_408 = 1;
    var_416 = 48;
    pri = fun_2480(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 1;
    var_432 = 3;
    var_440 = 0;
    var_448 = 1;
    var_456 = 3444055432580894141;
    var_464 = 40;
    pri = fun_6918(var_456, var_448, var_440, var_432, var_424)
    var_472 = 3444055432580894141;
    var_480 = 8;
    pri = fun_0BE8(var_472)
    var_488 = 1;
    var_496 = 0;
    var_504 = 0;
    OP_PUSH2_C 4607182418800017408, -2780782667399596389
    var_512 = 0;
    var_520 = 48;
    pri = fun_1490(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 30;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 1;
    var_552 = 1;
    var_560 = -1;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_568 = 40;
    pri = fun_1140(var_560, var_552, var_544, var_536, var_528)
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_608 = 48;
    pri = fun_09B8(var_600, var_592, var_584, var_576, var_568, var_560)
    var_616 = 1;
    var_624 = 1;
    var_632 = -1;
    OP_PUSH2_C -2780782667399596389, 3444055432580894141
    var_640 = 40;
    pri = fun_1140(var_632, var_624, var_616, var_608, var_600)
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH2_C -2780782667399596389, 3444055432580894141
    var_680 = 48;
    pri = fun_09B8(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C -6972684162048958362, -2780782667399596389
    var_728 = 56;
    pri = fun_2248(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_2390(var_736)
    var_752 = 0;
    pri = fun_2450()
    var_760 = -2780782667399596389;
    var_768 = 8;
    pri = fun_0A10(var_760)
    var_776 = 3444055432580894141;
    var_784 = 8;
    pri = fun_0A10(var_776)
    var_792 = 0;
    var_800 = 3;
    var_808 = 0;
    var_816 = 101;
    var_824 = -1;
    OP_PUSH2_C -6972683062537330151, -2780782667399596389
    var_832 = 56;
    pri = fun_2248(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_840 = 1;
    var_848 = 8;
    pri = fun_2390(var_840)
    var_856 = 0;
    pri = fun_2450()
    var_864 = 36;
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 285;
    var_904 = 40;
    pri = fun_2538(var_896, var_888, var_880, var_872, var_864)
    var_912 = 0;
    pri = fun_2650()
    OP_JZER lab_A888
    var_920 = 0;
    pri = fun_2740()
// lab_A888
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4640537203540230144, 4670301258182033408, 4670706977972682752, 8802641224559852288
    var_24 = 48;
    pri = fun_06B8(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = -1;
    var_40 = -2780782667399596389;
    var_48 = 16;
    pri = fun_1198(var_40, var_32)
    var_56 = -1;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_1198(var_64, var_56)
    var_80 = -1;
    var_88 = 3444055432580894141;
    var_96 = 16;
    pri = fun_1198(var_88, var_80)
    var_104 = 1;
    var_112 = 0;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 6660951804926948019;
    var_136 = 24;
    pri = fun_0768(var_128, var_120, var_112)
    var_144 = 1;
    var_152 = 0;
    pri = float(var_152)
    var_160 = pri;
    var_168 = -2780782667399596389;
    var_176 = 24;
    pri = fun_0768(var_168, var_160, var_152)
    pri = EvCameraStart()
    var_184 = 0;
    var_192 = -4616189618054758400;
    var_200 = -1;
    OP_PUSH5_C 4670256480570992230, 4639323342703165440, 4670697714587218739, 4670392710061673677, 4642109944972600934
    var_208 = 4670752497754072678;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 1;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 34264;
    var_248 = 8;
    var_256 = 16;
    pri = fun_0280(var_248, var_240)
    var_264 = 0;
    pri = fun_0350()
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -6972681963025701940, -2780782667399596389
    var_312 = 56;
    pri = fun_2248(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_2390(var_320)
    var_336 = 0;
    pri = fun_2450()
    var_344 = 1;
    var_352 = 0;
    var_360 = 4641240890982006784;
    var_368 = 0;
    var_376 = 0;
    OP_PUSH4_C 4670407086176206848, 4670579709501767680, 4611686018427387904, -2780782667399596389
    var_384 = 72;
    pri = fun_0898(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = -2780782667399596389;
    var_400 = 8;
    pri = fun_0A10(var_392)
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_440 = 48;
    pri = fun_09B8(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH2_C -2780782667399596389, 3444055432580894141
    var_480 = 48;
    pri = fun_09B8(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 8802641224559852288;
    var_496 = 8;
    pri = fun_0A10(var_488)
    var_504 = 3444055432580894141;
    var_512 = 8;
    pri = fun_0A10(var_504)
    var_520 = 1;
    var_528 = 1;
    var_536 = -1;
    var_544 = -1;
    var_552 = 0;
    var_560 = 2;
    var_568 = 3444055432580894141;
    var_576 = 56;
    pri = fun_45E0(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C -4718788821169849751, 3444055432580894141
    var_624 = 56;
    pri = fun_2248(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_2390(var_632)
    var_648 = 0;
    pri = fun_2450()
    var_656 = 1;
    var_664 = 3;
    var_672 = 0;
    var_680 = 2;
    var_688 = 3444055432580894141;
    var_696 = 40;
    pri = fun_6918(var_688, var_680, var_672, var_664, var_656)
    var_704 = -1;
    var_712 = 8802641224559852288;
    var_720 = 16;
    pri = fun_1198(var_712, var_704)
    var_728 = -1;
    var_736 = 3444055432580894141;
    var_744 = 16;
    pri = fun_1198(var_736, var_728)
    var_752 = 3;
    var_760 = 10;
    pri = EvCameraEnd(var_760, var_752)
    var_768 = 1587;
    var_776 = 8;
    pri = fun_9710(var_768)
    OP_PUSH2_C -2780782667399596389, -2870006955772034316
    pri = SetBamiriInfoToChara(var_776, var_768)
    pri = 0;
    return pri;
}
// fun_AF40
fun_AF40() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 0;
    OP_PUSH2_C 4607182418800017408, -2780782667399596389
    var_32 = 0;
    var_40 = 48;
    pri = fun_1490(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 30;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_88 = 40;
    pri = fun_1140(var_80, var_72, var_64, var_56, var_48)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_128 = 48;
    pri = fun_09B8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_160 = 40;
    pri = fun_1140(var_152, var_144, var_136, var_128, var_120)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_200 = 48;
    pri = fun_09B8(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_0A10(var_208)
    var_224 = -2780782667399596389;
    var_232 = 8;
    pri = fun_0A10(var_224)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C -6972680863514073729, -2780782667399596389
    var_280 = 56;
    pri = fun_2248(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_2390(var_288)
    var_304 = 0;
    pri = fun_2450()
    var_312 = 37;
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 286;
    var_352 = 40;
    pri = fun_2538(var_344, var_336, var_328, var_320, var_312)
    var_360 = 0;
    pri = fun_2650()
    OP_JZER lab_B248
    var_368 = 0;
    pri = fun_2740()
// lab_B248
    var_8 = 1;
    var_16 = 1;
    var_24 = 16;
    pri = fun_0680(var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640361281679785984, 4670869705693593600, 4669545618815844352, 8802641224559852288
    var_48 = 48;
    pri = fun_06B8(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = -1;
    var_64 = -2780782667399596389;
    var_72 = 16;
    pri = fun_1198(var_64, var_56)
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_112 = 48;
    pri = fun_09B8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_144 = 40;
    pri = fun_1140(var_136, var_128, var_120, var_112, var_104)
    var_152 = -2780782667399596389;
    var_160 = 8;
    pri = fun_0A10(var_152)
    var_168 = 1;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 6660951804926948019;
    var_200 = 24;
    pri = fun_0768(var_192, var_184, var_176)
    pri = EvCameraStart()
    var_208 = 0;
    var_216 = -4616189618054758400;
    var_224 = -1;
    OP_PUSH5_C 4670846258608131277, 4636251747019810406, 4669553150470494618, 4670930178833121280, 4643415285177096602
    var_232 = 4669413952298418176;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 1;
    var_256 = 8;
    pri = fun_0060(var_248)
    var_264 = 34264;
    var_272 = 8;
    var_280 = 16;
    pri = fun_0280(var_272, var_264)
    var_288 = 0;
    pri = fun_0350()
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 101;
    var_328 = -1;
    OP_PUSH2_C -6972679764002445518, -2780782667399596389
    var_336 = 56;
    pri = fun_2248(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_2390(var_344)
    var_360 = 0;
    pri = fun_2450()
    var_368 = -1;
    var_376 = -2780782667399596389;
    var_384 = 16;
    pri = fun_1198(var_376, var_368)
    var_392 = -1;
    var_400 = 8802641224559852288;
    var_408 = 16;
    pri = fun_1198(var_400, var_392)
    var_416 = 1;
    var_424 = 0;
    var_432 = 4641240890982006784;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH4_C 4670836720344760320, 4669248200920530944, 4611686018427387904, -2780782667399596389
    var_456 = 72;
    pri = fun_0898(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = -2780782667399596389;
    var_472 = 8;
    pri = fun_0A10(var_464)
    var_480 = 3;
    var_488 = 10;
    pri = EvCameraEnd(var_488, var_480)
    var_496 = 1588;
    var_504 = 8;
    pri = fun_9710(var_496)
    OP_PUSH2_C -2780782667399596389, -2870005856260406105
    pri = SetBamiriInfoToChara(var_504, var_496)
    pri = 0;
    return pri;
}
// fun_B710
fun_B710() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_32 = 40;
    pri = fun_1140(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_72 = 48;
    pri = fun_09B8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 4607182418800017408, -2780782667399596389
    var_104 = 0;
    var_112 = 48;
    pri = fun_1490(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 30;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_160 = 40;
    pri = fun_1140(var_152, var_144, var_136, var_128, var_120)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH2_C 8802641224559852288, -2780782667399596389
    var_200 = 48;
    pri = fun_09B8(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 30;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0A10(var_224)
    var_240 = -2780782667399596389;
    var_248 = 8;
    pri = fun_0A10(var_240)
    var_256 = 1;
    var_264 = 0;
    var_272 = 34216;
    var_280 = 8;
    var_288 = 32;
    pri = fun_02E0(var_280, var_272, var_264, var_256)
    var_296 = 0;
    pri = fun_0350()
    var_304 = 34312;
    pri = SoundPostEvent(var_304)
    var_312 = 1;
    var_320 = 1;
    OP_PUSH4_C 4625759767262920704, 4670683338472685568, 4668695146571759616, -2780782667399596389
    var_328 = 48;
    pri = fun_06B8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 1;
    var_344 = 1;
    OP_PUSH4_C -4583644073872588800, 4670765526966861824, 4668762766536867840, 8802641224559852288
    var_352 = 48;
    pri = fun_06B8(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = -1;
    var_368 = -2780782667399596389;
    var_376 = 16;
    pri = fun_1198(var_368, var_360)
    var_384 = -1;
    var_392 = 8802641224559852288;
    var_400 = 16;
    pri = fun_1198(var_392, var_384)
    var_408 = 30;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 34264;
    var_432 = 8;
    var_440 = 16;
    pri = fun_0280(var_432, var_424)
    var_448 = 0;
    pri = fun_0350()
    var_456 = 0;
    var_464 = 3;
    var_472 = 0;
    var_480 = 101;
    var_488 = -1;
    OP_PUSH2_C -6972678664490817307, -2780782667399596389
    var_496 = 56;
    pri = fun_2248(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = 1;
    var_512 = 8;
    pri = fun_2390(var_504)
    var_520 = 0;
    pri = fun_2450()
    var_528 = 38;
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    var_560 = 287;
    var_568 = 40;
    pri = fun_2538(var_560, var_552, var_544, var_536, var_528)
    var_576 = 0;
    pri = fun_2650()
    OP_JZER lab_BC08
    var_584 = 0;
    pri = fun_2740()
// lab_BC08
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4583890364477210624, 4670726494304075776, 4668711639246176256, 8802641224559852288
    var_24 = 48;
    pri = fun_06B8(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4584066286337654784, 4670735290397097984, 4668851277222903808, 6660951804926948019
    var_48 = 48;
    pri = fun_06B8(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4584066286337654784, 4670788341833138176, 4668955730827542528, 3444054333069265930
    var_72 = 48;
    pri = fun_06B8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4584066286337654784, 4670813355722670080, 4668874916722900992, 8287683314310166736
    var_96 = 48;
    pri = fun_06B8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 34264;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    var_136 = 1;
    var_144 = 1;
    var_152 = -1;
    var_160 = -1;
    var_168 = 0;
    var_176 = 2;
    var_184 = -2780782667399596389;
    var_192 = 56;
    pri = fun_45E0(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C -6972677564979189096, -2780782667399596389
    var_240 = 56;
    pri = fun_2248(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2390(var_248)
    var_264 = 0;
    pri = fun_2450()
    var_272 = 1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 2;
    var_304 = -2780782667399596389;
    var_312 = 40;
    pri = fun_6918(var_304, var_296, var_288, var_280, var_272)
    var_320 = -2780782667399596389;
    var_328 = 8;
    pri = fun_0BE8(var_320)
    var_336 = 1;
    var_344 = 0;
    var_352 = 4641240890982006784;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH4_C 4670391967891324928, 4669934296176263168, 4611686018427387904, -2780782667399596389
    var_376 = 72;
    pri = fun_0898(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 40;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 0;
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    OP_PUSH2_C -2780782667399596389, 8802641224559852288
    var_432 = 48;
    pri = fun_09B8(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 10;
    var_448 = 8;
    pri = fun_0060(var_440)
    var_456 = 8802641224559852288;
    var_464 = 8;
    pri = fun_0A10(var_456)
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH2_C 8287683314310166736, 6660951804926948019
    var_504 = 48;
    pri = fun_09B8(var_496, var_488, var_480, var_472, var_464, var_456)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -4281439302001193687, 6660951804926948019
    var_552 = 56;
    pri = fun_2248(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_2390(var_560)
    var_576 = 0;
    pri = fun_2450()
    var_584 = 6660951804926948019;
    var_592 = 8;
    pri = fun_0A10(var_584)
    var_600 = 1;
    var_608 = 0;
    var_616 = 4641240890982006784;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH4_C 4670966737594744832, 4669407080350744576, 4611686018427387904, 3444054333069265930
    var_640 = 72;
    pri = fun_0898(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 1;
    var_656 = 0;
    var_664 = 4641240890982006784;
    var_672 = 0;
    var_680 = 0;
    OP_PUSH4_C 4671031883658690560, 4669355403304239104, 4611686018427387904, 8287683314310166736
    var_688 = 72;
    pri = fun_0898(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 20;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    var_736 = 0;
    OP_PUSH2_C 8802641224559852288, 6660951804926948019
    var_744 = 48;
    pri = fun_09B8(var_736, var_728, var_720, var_712, var_704, var_696)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    OP_PUSH2_C 6660951804926948019, 8802641224559852288
    var_784 = 48;
    pri = fun_09B8(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 30;
    var_800 = 8;
    pri = fun_0060(var_792)
    var_808 = 6660951804926948019;
    var_816 = 8;
    pri = fun_0A10(var_808)
    var_824 = 8802641224559852288;
    var_832 = 8;
    pri = fun_0A10(var_824)
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 3;
    var_872 = 0;
    var_880 = 0;
    var_888 = 6660951804926948019;
    var_896 = 56;
    pri = fun_2A00(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 60;
    var_912 = 8;
    pri = fun_0060(var_904)
    var_920 = 1;
    var_928 = 0;
    var_936 = 4641240890982006784;
    var_944 = 0;
    var_952 = 0;
    OP_PUSH4_C 4670422479338995712, 4669718242141405184, 4607182418800017408, 6660951804926948019
    var_960 = 72;
    pri = fun_0898(var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 1;
    var_976 = 0;
    var_984 = 4641240890982006784;
    var_992 = 0;
    var_1000 = 0;
    OP_PUSH4_C 4670471407606431744, 4669688005571641344, 4611686018427387904, 8802641224559852288
    var_1008 = 72;
    pri = fun_0898(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 30;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = 8287683314310166736;
    var_1040 = 8;
    pri = fun_0A10(var_1032)
    var_1048 = 3444054333069265930;
    var_1056 = 8;
    pri = fun_0A10(var_1048)
    var_1064 = 1;
    var_1072 = 0;
    var_1080 = 34216;
    var_1088 = 8;
    var_1096 = 32;
    pri = fun_02E0(var_1088, var_1080, var_1072, var_1064)
    var_1104 = 0;
    pri = fun_0350()
    var_1112 = 8802641224559852288;
    var_1120 = 8;
    pri = fun_0A10(var_1112)
    var_1128 = -2780782667399596389;
    var_1136 = 8;
    pri = fun_0A10(var_1128)
    var_1144 = 0;
    pri = fun_13398()
    pri = 0;
    return pri;
}
// fun_C5B0
fun_C5B0() {
    var_8 = 0;
    pri = fun_13B30()
    var_16 = 0;
    pri = fun_13398()
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 4407;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 2677;
    pri = float(var_80)
    var_88 = pri;
    OP_PUSH2_C -6671058735196667065, 6009338534933018162
    var_96 = 72;
    pri = fun_0408(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_07E0(var_112, var_104)
    var_128 = 0;
    var_136 = 4588701099155483113;
    var_144 = 16;
    pri = fun_07E0(var_136, var_128)
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C 4640537203540230144, 4661680262386548736, 4657465284561469440, 8802641224559852288
    var_168 = 48;
    pri = fun_06B8(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 1;
    OP_PUSH4_C 4640537203540230144, 4661494994677268480, 4657304755863814144, -3113441888070653316
    var_192 = 48;
    pri = fun_06B8(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4661508188816801792, 4657735764421902336, -812938253260952198
    var_216 = 48;
    pri = fun_06B8(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C -4582834833314545664, 4661551949379587277, 4657595686640523674, 4588701099155483113
    var_240 = 48;
    pri = fun_06B8(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C 4640537203540230144, 4660788008700608512, 4658043627677679616, 5595894310415346415
    var_264 = 48;
    pri = fun_06B8(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4584875526895697920, 4661566462933073920, 4658492228421812224, 6707881205123203646
    var_288 = 48;
    pri = fun_06B8(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C -4584382945686454272, 4661656622886551552, 4658391073352056832, 6707871309518549747
    var_312 = 48;
    pri = fun_06B8(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 0;
    var_328 = 8802641224559852288;
    var_336 = 16;
    pri = fun_07A8(var_328, var_320)
    var_344 = 0;
    var_352 = -3113441888070653316;
    var_360 = 16;
    pri = fun_07A8(var_352, var_344)
    var_368 = 0;
    var_376 = -812938253260952198;
    var_384 = 16;
    pri = fun_07A8(var_376, var_368)
    var_392 = 0;
    var_400 = 4588701099155483113;
    var_408 = 16;
    pri = fun_07A8(var_400, var_392)
    var_416 = 0;
    var_424 = 6707881205123203646;
    var_432 = 16;
    pri = fun_07A8(var_424, var_416)
    var_440 = 0;
    var_448 = 6707871309518549747;
    var_456 = 16;
    pri = fun_07A8(var_448, var_440)
    pri = EvCameraStart()
    var_464 = 0;
    var_472 = -4616189618054758400;
    var_480 = -1;
    OP_PUSH5_C 4661394059509838643, 4640537203540230144, 4658055942207910707, 4662443103553899725, 4645443664228017766
    var_488 = 4658127630366041702;
    var_496 = 1;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 1;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 0;
    var_528 = -4616189618054758400;
    var_536 = 3;
    OP_PUSH5_C 4659909498910015488, 4640537203540230144, 4658082550389302886, 4661169099430795674, 4645010896451325133
    var_544 = 4658087608142790656;
    var_552 = 90;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 1;
    var_568 = 0;
    var_576 = 4641240890982006784;
    var_584 = 0;
    var_592 = 0;
    OP_PUSH4_C 4659717084375154688, 4658061219863724032, 4611686018427387904, 5595894310415346415
    var_600 = 72;
    pri = fun_0898(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 15;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 34264;
    var_632 = 8;
    var_640 = 16;
    pri = fun_0280(var_632, var_624)
    var_648 = 0;
    pri = fun_0350()
    var_656 = 5595894310415346415;
    var_664 = 8;
    pri = fun_0A10(var_656)
    var_672 = 0;
    pri = fun_2790()
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    pri = float(var_704)
    var_712 = pri;
    var_720 = 5595894310415346415;
    var_728 = 40;
    pri = fun_0968(var_720, var_712, var_704, var_696, var_688)
    var_736 = 5595894310415346415;
    var_744 = 8;
    pri = fun_0A10(var_736)
    var_752 = 0;
    var_760 = -4616189618054758400;
    var_768 = -1;
    OP_PUSH5_C 4659941604649546547, 4639439451131058586, 4658077492635815117, 4660380749593680282, 4639094644284588032
    var_776 = 4658068476640467354;
    var_784 = 1;
    pri = EvCameraMove(var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_792 = 0;
    var_800 = 2;
    var_808 = 5595894310415346415;
    var_816 = 24;
    pri = fun_8648(var_808, var_800, var_792)
    var_824 = 20;
    var_832 = 8;
    pri = fun_0060(var_824)
    var_840 = 0;
    var_848 = -4616189618054758400;
    var_856 = 3;
    OP_PUSH5_C 4659940725040244326, 4639439451131058586, 4657129933514997760, 4660376791351820288, 4640350726368159334
    var_864 = 4657120037910347776;
    var_872 = 80;
    pri = EvCameraMove(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 0;
    var_888 = 2;
    var_896 = 5595893210903718204;
    var_904 = 24;
    pri = fun_8648(var_896, var_888, var_880)
    var_912 = 20;
    var_920 = 8;
    pri = fun_0060(var_912)
    var_928 = 0;
    var_936 = 2;
    var_944 = 5595896509438602837;
    var_952 = 24;
    pri = fun_8648(var_944, var_936, var_928)
    var_960 = 20;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = 0;
    var_984 = 2;
    var_992 = 5595895409926974626;
    var_1000 = 24;
    pri = fun_8648(var_992, var_984, var_976)
    var_1008 = 0;
    pri = fun_2790()
    var_1016 = 0;
    var_1024 = -4616189618054758400;
    var_1032 = -1;
    OP_PUSH5_C 4658463861021815603, 4638616136824179917, 4657577434747502592, 4660464092575065702, 4639527412061280666
    var_1040 = 4657561601780062618;
    var_1048 = 1;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 1;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    var_1080 = -4616189618054758400;
    var_1088 = 3;
    OP_PUSH5_C 4658455064928793395, 4648034113623058022, 4657577654649828147, 4659040225017095782, 4647567041083578778
    var_1096 = 4657560062463783731;
    var_1104 = 90;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_2790()
    var_1120 = 0;
    var_1128 = 4631952216750555136;
    var_1136 = 0;
    OP_PUSH5_C 4660736837429451817, 4639103792221331128, 4657158696739180380, 4660820642205720904, 4639441210349663027
    var_1144 = 4657102841548489359;
    var_1152 = 1;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    pri = fun_2790()
    var_1168 = 0;
    var_1176 = 4631952216750555136;
    var_1184 = 2;
    OP_PUSH5_C 4661016992992209142, 4634884482320438395, 4657524768140532122, 4661518524226102886, 4639991845772853248
    var_1192 = 4656995463242920755;
    var_1200 = 25;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 1;
    var_1216 = 8802641224559852288;
    var_1224 = 16;
    pri = fun_07A8(var_1216, var_1208)
    var_1232 = 1;
    var_1240 = -3113441888070653316;
    var_1248 = 16;
    pri = fun_07A8(var_1240, var_1232)
    var_1256 = 1;
    var_1264 = -812938253260952198;
    var_1272 = 16;
    pri = fun_07A8(var_1264, var_1256)
    var_1280 = 1;
    var_1288 = 0;
    var_1296 = 4641240890982006784;
    var_1304 = 0;
    var_1312 = 0;
    OP_PUSH4_C 4661504560428430131, 4657465284561469440, 4611686018427387904, 8802641224559852288
    var_1320 = 72;
    pri = fun_0898(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1328 = 1;
    var_1336 = 0;
    var_1344 = 4641240890982006784;
    var_1352 = 0;
    var_1360 = 0;
    OP_PUSH4_C 4661314784721475994, 4657445053547518362, 4611686018427387904, -3113441888070653316
    var_1368 = 72;
    pri = fun_0898(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 1;
    var_1384 = 0;
    var_1392 = 4641240890982006784;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH4_C 4661187571226142310, 4657737523640506778, 4611686018427387904, -812938253260952198
    var_1416 = 72;
    pri = fun_0898(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1424 = 8802641224559852288;
    var_1432 = 8;
    pri = fun_0A10(var_1424)
    var_1440 = -3113441888070653316;
    var_1448 = 8;
    pri = fun_0A10(var_1440)
    var_1456 = 6;
    var_1464 = -3113441888070653316;
    var_1472 = 16;
    pri = fun_11D8(var_1464, var_1456)
    var_1480 = 0;
    var_1488 = 4631952216750555136;
    var_1496 = 0;
    OP_PUSH5_C 4661233080012415959, 4636690847983479030, 4657593949412151788, 4661258896545436140, 4639565763026857492
    var_1504 = 4657259741857772995;
    var_1512 = 1;
    pri = EvCameraMove(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1520 = 0;
    pri = fun_2790()
    var_1528 = 15;
    var_1536 = 8;
    pri = fun_0060(var_1528)
    var_1544 = 0;
    var_1552 = 4631952216750555136;
    var_1560 = 2;
    OP_PUSH5_C 4661276686643573555, 4636410780381651927, 4657587484283780465, 4661276741619154944, 4639431358725478154
    var_1568 = 4657249494409402122;
    var_1576 = 15;
    pri = EvCameraMove(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1584 = -812938253260952198;
    var_1592 = 8;
    pri = fun_0A10(var_1584)
    var_1600 = 5;
    var_1608 = 8;
    pri = fun_0060(var_1600)
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    var_1640 = 0;
    OP_PUSH2_C -3113441888070653316, -812938253260952198
    var_1648 = 48;
    pri = fun_09B8(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1656 = -812938253260952198;
    var_1664 = 8;
    pri = fun_0A10(var_1656)
    var_1672 = 6;
    var_1680 = -812938253260952198;
    var_1688 = 16;
    pri = fun_11D8(var_1680, var_1672)
    var_1696 = 1;
    var_1704 = -1;
    var_1712 = -1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 1;
    var_1744 = -812938253260952198;
    var_1752 = 56;
    pri = fun_2A00(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = -812938253260952198;
    var_1768 = 8;
    pri = fun_0BE8(var_1760)
    var_1776 = 1;
    var_1784 = 4588701099155483113;
    var_1792 = 16;
    pri = fun_07A8(var_1784, var_1776)
    var_1800 = 1;
    var_1808 = 1;
    var_1816 = -1;
    var_1824 = -1;
    var_1832 = 0;
    var_1840 = 11;
    var_1848 = -3113441888070653316;
    var_1856 = 56;
    pri = fun_45E0(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1864 = 6;
    var_1872 = 8802641224559852288;
    var_1880 = 16;
    pri = fun_11D8(var_1872, var_1864)
    var_1888 = 0;
    var_1896 = 4631952216750555136;
    var_1904 = 0;
    OP_PUSH5_C 4661453048308668826, 4636175045088656753, 4657381523765665464, 4661590960052140769, 4638861371897639076
    var_1912 = 4657288856925676503;
    var_1920 = 1;
    pri = EvCameraMove(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1928 = 0;
    pri = fun_2790()
    var_1936 = 0;
    var_1944 = 4631952216750555136;
    var_1952 = 2;
    OP_PUSH5_C 4661460821855877202, 4636175045088656753, 4657427857185659945, 4661598744594465423, 4638861371897639076
    var_1960 = 4657335168355438428;
    var_1968 = 110;
    pri = EvCameraMove(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1976 = 90;
    var_1984 = 8;
    pri = fun_0060(var_1976)
    var_1992 = 1;
    var_2000 = 1;
    var_2008 = -1;
    var_2016 = -1;
    var_2024 = 0;
    var_2032 = 42;
    var_2040 = 4588701099155483113;
    var_2048 = 56;
    pri = fun_45E0(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2056 = 15;
    var_2064 = 8;
    pri = fun_0060(var_2056)
    var_2072 = 34480;
    pri = SoundPostEvent(var_2072)
    var_2080 = 0;
    var_2088 = 4631952216750555136;
    var_2096 = 0;
    OP_PUSH5_C 4661444318186344284, 4639247344459453563, 4657517115539602801, 4661422745768207319, 4639799739101248225
    var_2104 = 4657534355881926328;
    var_2112 = 1;
    pri = EvCameraMove(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2120 = 1;
    var_2128 = 3;
    var_2136 = 0;
    var_2144 = 11;
    var_2152 = -3113441888070653316;
    var_2160 = 40;
    pri = fun_6918(var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2168 = -3113441888070653316;
    var_2176 = 8;
    pri = fun_0BE8(var_2168)
    var_2184 = 1;
    var_2192 = 1;
    OP_PUSH4_C 4639048904600872550, 4661344911340077056, 4657248460868472013, -3113441888070653316
    var_2200 = 48;
    pri = fun_06B8(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2208 = 1;
    var_2216 = 1;
    OP_PUSH4_C -4583904438226046157, 4661367011523795354, 4657941812900947558, -812938253260952198
    var_2224 = 48;
    pri = fun_06B8(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2232 = 1;
    var_2240 = 1;
    var_2248 = -1;
    OP_PUSH2_C 4588701099155483113, 8802641224559852288
    var_2256 = 40;
    pri = fun_1140(var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2264 = 1;
    var_2272 = 1;
    var_2280 = -1;
    OP_PUSH2_C 4588701099155483113, -3113441888070653316
    var_2288 = 40;
    pri = fun_1140(var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2296 = 1;
    var_2304 = 1;
    var_2312 = -1;
    OP_PUSH2_C 4588701099155483113, -812938253260952198
    var_2320 = 40;
    pri = fun_1140(var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2328 = 9;
    var_2336 = 5;
    var_2344 = -812938253260952198;
    var_2352 = 24;
    pri = fun_12C8(var_2344, var_2336, var_2328)
    var_2360 = -3113441888070653316;
    var_2368 = 8;
    pri = fun_1330(var_2360)
    var_2376 = 0;
    var_2384 = 4631952216750555136;
    var_2392 = 2;
    OP_PUSH5_C 4661480492118898115, 4639359934450137825, 4657534465833089106, 4661411420798441226, 4640960471536458793
    var_2400 = 4657537896309367767;
    var_2408 = 20;
    pri = EvCameraMove(var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2416 = 0;
    pri = fun_2790()
    var_2424 = 8802641224559852288;
    var_2432 = 8;
    pri = fun_1218(var_2424)
    var_2440 = 10;
    var_2448 = 8;
    pri = fun_0060(var_2440)
    var_2456 = 0;
    var_2464 = 4631952216750555136;
    var_2472 = 2;
    OP_PUSH5_C 4661329243299381248, 4633318777762485371, 4657654994297725911, 4661021654921510912, 4641295074915023585
    var_2480 = 4657550914527040635;
    var_2488 = 60;
    pri = EvCameraMove(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416)
    var_2496 = -1;
    var_2504 = 8802641224559852288;
    var_2512 = 16;
    pri = fun_1198(var_2504, var_2496)
    var_2520 = 1;
    var_2528 = 3;
    var_2536 = 0;
    var_2544 = 42;
    var_2552 = 4588701099155483113;
    var_2560 = 40;
    pri = fun_6918(var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2568 = 0;
    var_2576 = 3;
    var_2584 = 0;
    var_2592 = 100;
    var_2600 = -1;
    OP_PUSH2_C -4282429961978022573, 4588701099155483113
    var_2608 = 56;
    pri = fun_2248(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552)
    var_2616 = 1;
    var_2624 = 8;
    pri = fun_2390(var_2616)
    var_2632 = 0;
    pri = fun_2450()
    var_2640 = 4588701099155483113;
    var_2648 = 8;
    pri = fun_0BE8(var_2640)
    var_2656 = 1;
    var_2664 = 1;
    var_2672 = -1;
    OP_PUSH2_C 4588701099155483113, 8802641224559852288
    var_2680 = 40;
    pri = fun_1140(var_2672, var_2664, var_2656, var_2648, var_2640)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2688 = 16;
    pri = fun_2820(var_2680, var_2672)
    var_2696 = 3;
    var_2704 = 1;
    OP_PUSH2_C 4636099891269875007, 4613804962052065722
    var_2712 = 32;
    pri = fun_2888(var_2704, var_2696, var_2688, var_2680)
    var_2720 = 0;
    var_2728 = 4631952216750555136;
    var_2736 = 0;
    OP_PUSH5_C 4661117884179173868, 4638400104779554488, 4657730156912600678, 4661137037671729725, 4639094644284588032
    var_2744 = 4657343920467995525;
    var_2752 = 1;
    pri = EvCameraMove(var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2760 = 0;
    pri = fun_2790()
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 0;
    var_2792 = 180;
    pri = float(var_2792)
    var_2800 = pri;
    var_2808 = 4588701099155483113;
    var_2816 = 40;
    pri = fun_0968(var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2824 = 4588701099155483113;
    var_2832 = 8;
    pri = fun_0A10(var_2824)
    var_2840 = 8;
    var_2848 = 4588701099155483113;
    var_2856 = 16;
    pri = fun_11D8(var_2848, var_2840)
    var_2864 = 0;
    var_2872 = 3;
    var_2880 = 0;
    var_2888 = 100;
    var_2896 = -1;
    OP_PUSH2_C -4282428862466394362, 4588701099155483113
    var_2904 = 56;
    pri = fun_2248(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2912 = 1;
    var_2920 = 8;
    pri = fun_2390(var_2912)
    var_2928 = 0;
    pri = fun_2450()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2936 = 3;
    var_2944 = 1;
    var_2952 = 32;
    pri = fun_28E0(var_2944, var_2936, var_2928, var_2920)
    var_2960 = 0;
    var_2968 = 4631952216750555136;
    var_2976 = 0;
    OP_PUSH5_C 4660120715093711258, 4632881084173700301, 4657513069336812585, 4660429545919720980, 4639846534316126372
    var_2984 = 4657422579529846620;
    var_2992 = 1;
    pri = EvCameraMove(var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_3000 = 0;
    pri = fun_2790()
    var_3008 = 0;
    var_3016 = 4631952216750555136;
    var_3024 = 2;
    OP_PUSH5_C 4659966981377915617, 4641407313061986959, 4657469440715422433, 4660319550776478269, 4643513273653363999
    var_3032 = 4657365976671248712;
    var_3040 = 20;
    pri = EvCameraMove(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
    var_3048 = 1;
    var_3056 = 1;
    var_3064 = -1;
    OP_PUSH2_C 5595893210903718204, 5595896509438602837
    var_3072 = 40;
    pri = fun_1140(var_3064, var_3056, var_3048, var_3040, var_3032)
    var_3080 = 1;
    var_3088 = 1;
    var_3096 = -1;
    OP_PUSH2_C 5595896509438602837, 5595893210903718204
    var_3104 = 40;
    pri = fun_1140(var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3112 = 15;
    var_3120 = 8;
    pri = fun_0060(var_3112)
    var_3128 = 1;
    var_3136 = 0;
    var_3144 = 0;
    OP_PUSH2_C 4607182418800017408, 5595896509438602837
    var_3152 = 1;
    var_3160 = 48;
    pri = fun_1490(var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
    var_3168 = 30;
    var_3176 = 8;
    pri = fun_0060(var_3168)
    var_3184 = -1;
    var_3192 = 5595896509438602837;
    var_3200 = 16;
    pri = fun_1198(var_3192, var_3184)
    var_3208 = -1;
    var_3216 = 5595893210903718204;
    var_3224 = 16;
    pri = fun_1198(var_3216, var_3208)
    var_3232 = 15;
    var_3240 = 8;
    pri = fun_0060(var_3232)
    var_3248 = 0;
    var_3256 = 4631952216750555136;
    var_3264 = 0;
    OP_PUSH5_C 4661110165607546880, 4638552804954420019, 4657592168203314790, 4660992847716863181, 4641726787160553554
    var_3272 = 4657422249676358287;
    var_3280 = 1;
    pri = EvCameraMove(var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3288 = 0;
    pri = fun_2790()
    var_3296 = 10;
    var_3304 = 8;
    pri = fun_0060(var_3296)
    var_3312 = 4588701099155483113;
    var_3320 = 8;
    pri = fun_1218(var_3312)
    var_3328 = 1;
    var_3336 = 1;
    var_3344 = -1;
    var_3352 = -1;
    var_3360 = 0;
    var_3368 = 44;
    var_3376 = 4588701099155483113;
    var_3384 = 56;
    pri = fun_45E0(var_3376, var_3368, var_3360, var_3352, var_3344, var_3336, var_3328)
    var_3392 = 15;
    var_3400 = 8;
    pri = fun_0060(var_3392)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3408 = 16;
    pri = fun_2820(var_3400, var_3392)
    var_3416 = 3;
    var_3424 = 20;
    OP_PUSH2_C 4639099042331099136, 4611686018427387904
    var_3432 = 32;
    pri = fun_2888(var_3424, var_3416, var_3408, var_3400)
    var_3440 = 0;
    var_3448 = 4631952216750555136;
    var_3456 = 26;
    OP_PUSH5_C 4661110165607546880, 4638552804954420019, 4657592168203314790, 4660940620914543821, 4643104959015273103
    var_3464 = 4657346647256832410;
    var_3472 = 20;
    pri = EvCameraMove(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416, var_3408, var_3400)
    var_3480 = 0;
    var_3488 = 3;
    var_3496 = 0;
    var_3504 = 101;
    var_3512 = -1;
    OP_PUSH2_C -4281440401512821898, 4588701099155483113
    var_3520 = 56;
    pri = fun_2248(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464)
    var_3528 = 1;
    var_3536 = 8;
    pri = fun_2390(var_3528)
    var_3544 = 0;
    pri = fun_2450()
    var_3552 = 3;
    var_3560 = 15;
    OP_PUSH2_C 4635873866863576351, 4613804962052065722
    var_3568 = 32;
    pri = fun_2888(var_3560, var_3552, var_3544, var_3536)
    var_3576 = 0;
    var_3584 = 4631952216750555136;
    var_3592 = 0;
    OP_PUSH5_C 4661177169846143549, 4638770948061370778, 4657610859900986982, 4660844545588508754, 4642401623417217352
    var_3600 = 4657601470071685775;
    var_3608 = 1;
    pri = EvCameraMove(var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536)
    var_3616 = 0;
    pri = fun_2790()
    var_3624 = 0;
    var_3632 = 4631952216750555136;
    var_3640 = 26;
    OP_PUSH5_C 4661177169846143549, 4638770948061370778, 4657610859900986982, 4660969867923842662, 4641033655030403564
    var_3648 = 4657605010499127214;
    var_3656 = 20;
    pri = EvCameraMove(var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584)
    var_3664 = 0;
    var_3672 = 3;
    var_3680 = 0;
    var_3688 = 101;
    var_3696 = -1;
    OP_PUSH2_C -4281441501024450109, 4588701099155483113
    var_3704 = 56;
    pri = fun_2248(var_3696, var_3688, var_3680, var_3672, var_3664, var_3656, var_3648)
    var_3712 = 1;
    var_3720 = 8;
    pri = fun_2390(var_3712)
    var_3728 = 0;
    pri = fun_2450()
    var_3736 = 5;
    var_3744 = 8;
    pri = fun_0060(var_3736)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3752 = 3;
    var_3760 = 1;
    var_3768 = 32;
    pri = fun_28E0(var_3760, var_3752, var_3744, var_3736)
    var_3776 = 0;
    var_3784 = 4631952216750555136;
    var_3792 = 0;
    OP_PUSH5_C 4661267175867993293, 4637666158777781453, 4657619875896334746, 4661572653183538299, 4645597419934045962
    var_3800 = 4657459918944725893;
    var_3808 = 1;
    pri = EvCameraMove(var_3808, var_3800, var_3792, var_3784, var_3776, var_3768, var_3760, var_3752, var_3744, var_3736)
    var_3816 = 0;
    pri = fun_2790()
    var_3824 = 0;
    var_3832 = 4631952216750555136;
    var_3840 = 0;
    OP_PUSH5_C 4661267175867993293, 4637666158777781453, 4657619875896334746, 4661383262305653883, 4645822775837274931
    var_3848 = 4657063413061517312;
    var_3856 = 500;
    pri = EvCameraMove(var_3856, var_3848, var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784)
    var_3864 = 0;
    var_3872 = 3;
    var_3880 = 0;
    var_3888 = 101;
    var_3896 = -1;
    OP_PUSH2_C -4281442600536078320, 4588701099155483113
    var_3904 = 56;
    pri = fun_2248(var_3896, var_3888, var_3880, var_3872, var_3864, var_3856, var_3848)
    var_3912 = 1;
    var_3920 = 8;
    pri = fun_2390(var_3912)
    var_3928 = 0;
    pri = fun_2450()
    var_3936 = -1;
    var_3944 = 8802641224559852288;
    var_3952 = 16;
    pri = fun_1198(var_3944, var_3936)
    var_3960 = -1;
    var_3968 = -3113441888070653316;
    var_3976 = 16;
    pri = fun_1198(var_3968, var_3960)
    var_3984 = -1;
    var_3992 = -812938253260952198;
    var_4000 = 16;
    pri = fun_1198(var_3992, var_3984)
    var_4008 = 0;
    var_4016 = 4631952216750555136;
    var_4024 = 0;
    OP_PUSH5_C 4661496687925175255, 4638158739987025101, 4658324091103692718, 4661543791003309179, 4638886352801822147
    var_4032 = 4657940713389319782;
    var_4040 = 1;
    pri = EvCameraMove(var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976, var_3968)
    var_4048 = 0;
    pri = fun_2790()
    var_4056 = 0;
    var_4064 = 4631952216750555136;
    var_4072 = 2;
    OP_PUSH5_C 4661570992920980357, 4638158739987025101, 4658360572899502326, 4661617997043067781, 4638886000958101258
    var_4080 = 4657977107224199168;
    var_4088 = 20;
    pri = EvCameraMove(var_4088, var_4080, var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016)
    var_4096 = 1;
    var_4104 = 6707881205123203646;
    var_4112 = 16;
    pri = fun_07A8(var_4104, var_4096)
    var_4120 = 1;
    var_4128 = 6707871309518549747;
    var_4136 = 16;
    pri = fun_07A8(var_4128, var_4120)
    var_4144 = 1;
    var_4152 = 8;
    pri = fun_0060(var_4144)
    var_4160 = 34640;
    pri = SoundPostEvent(var_4160)
    var_4168 = 1;
    var_4176 = 1;
    var_4184 = -1;
    var_4192 = -1;
    var_4200 = 0;
    var_4208 = 47;
    var_4216 = 6707881205123203646;
    var_4224 = 56;
    pri = fun_45E0(var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168)
    var_4232 = 0;
    var_4240 = 3;
    var_4248 = 0;
    var_4256 = 101;
    var_4264 = -1;
    OP_PUSH2_C -1868211538302753806, 6707881205123203646
    var_4272 = 56;
    pri = fun_2248(var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216)
    var_4280 = 1;
    var_4288 = 8;
    pri = fun_2390(var_4280)
    var_4296 = 0;
    pri = fun_2450()
    var_4304 = 34832;
    pri = SoundPostEvent(var_4304)
    var_4312 = 1;
    var_4320 = 1;
    var_4328 = -1;
    var_4336 = -1;
    var_4344 = 0;
    var_4352 = 47;
    var_4360 = 6707871309518549747;
    var_4368 = 56;
    pri = fun_45E0(var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312)
    var_4376 = 10;
    var_4384 = 8;
    pri = fun_0060(var_4376)
    var_4392 = 0;
    var_4400 = 3;
    var_4408 = 0;
    var_4416 = 101;
    var_4424 = -1;
    OP_PUSH2_C -3960973466817104811, 6707871309518549747
    var_4432 = 56;
    pri = fun_2248(var_4424, var_4416, var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4440 = 1;
    var_4448 = 8;
    pri = fun_2390(var_4440)
    var_4456 = 0;
    pri = fun_2450()
    var_4464 = 0;
    var_4472 = 4631952216750555136;
    var_4480 = 0;
    OP_PUSH5_C 4658581508765987635, 4646947796134815334, 4656532370935534060, 4659594532809122775, 4645212854747115028
    var_4488 = 4657057079874541322;
    var_4496 = 1;
    pri = EvCameraMove(var_4496, var_4488, var_4480, var_4472, var_4464, var_4456, var_4448, var_4440, var_4432, var_4424)
    var_4504 = 0;
    pri = fun_2790()
    var_4512 = 0;
    var_4520 = 4631952216750555136;
    var_4528 = 2;
    OP_PUSH5_C 4658616253333425357, 4648096565883515699, 4656561925808088678, 4659628903542607053, 4646740208339491226
    var_4536 = 4657072539008027853;
    var_4544 = 30;
    pri = EvCameraMove(var_4544, var_4536, var_4528, var_4520, var_4512, var_4504, var_4496, var_4488, var_4480, var_4472)
    var_4552 = 20;
    var_4560 = 8;
    pri = fun_0060(var_4552)
    var_4568 = 0;
    var_4576 = 0;
    var_4584 = 0;
    var_4592 = 0;
    OP_PUSH2_C 4588701099155483113, -4535650465247009105
    var_4600 = 48;
    pri = fun_09B8(var_4592, var_4584, var_4576, var_4568, var_4560, var_4552)
    var_4608 = -4535650465247009105;
    var_4616 = 8;
    pri = fun_0A10(var_4608)
    var_4624 = 0;
    var_4632 = 3;
    var_4640 = 0;
    var_4648 = 100;
    var_4656 = -1;
    OP_PUSH2_C 9157650087690620849, -4535650465247009105
    var_4664 = 56;
    pri = fun_2248(var_4656, var_4648, var_4640, var_4632, var_4624, var_4616, var_4608)
    var_4672 = 1;
    var_4680 = 8;
    pri = fun_2390(var_4672)
    var_4688 = 0;
    pri = fun_2450()
    var_4696 = 0;
    var_4704 = 0;
    var_4712 = 0;
    var_4720 = 0;
    OP_PUSH2_C 4588701099155483113, 7198756580005256125
    var_4728 = 48;
    pri = fun_09B8(var_4720, var_4712, var_4704, var_4696, var_4688, var_4680)
    var_4736 = 7198756580005256125;
    var_4744 = 8;
    pri = fun_0A10(var_4736)
    var_4752 = 0;
    var_4760 = 3;
    var_4768 = 0;
    var_4776 = 100;
    var_4784 = -1;
    OP_PUSH2_C -6227081694487780068, 7198756580005256125
    var_4792 = 56;
    pri = fun_2248(var_4784, var_4776, var_4768, var_4760, var_4752, var_4744, var_4736)
    var_4800 = 1;
    var_4808 = 8;
    pri = fun_2390(var_4800)
    var_4816 = 0;
    pri = fun_2450()
    var_4824 = 1;
    var_4832 = 4588701099155483113;
    var_4840 = 16;
    pri = fun_0820(var_4832, var_4824)
    var_4848 = 1;
    var_4856 = -4535650465247009105;
    var_4864 = 16;
    pri = fun_0820(var_4856, var_4848)
    var_4872 = 1;
    var_4880 = 7198756580005256125;
    var_4888 = 16;
    pri = fun_0820(var_4880, var_4872)
    var_4896 = 1;
    var_4904 = -3565078316412726206;
    var_4912 = 16;
    pri = fun_0820(var_4904, var_4896)
    var_4920 = 1;
    var_4928 = 3942632517730091317;
    var_4936 = 16;
    pri = fun_0820(var_4928, var_4920)
    var_4944 = 1;
    var_4952 = 7198753281470371492;
    var_4960 = 16;
    pri = fun_0820(var_4952, var_4944)
    var_4968 = 1;
    var_4976 = 4637153820979408116;
    var_4984 = 16;
    pri = fun_0820(var_4976, var_4968)
    var_4992 = 1;
    var_5000 = 688830528901060397;
    var_5008 = 16;
    pri = fun_0820(var_5000, var_4992)
    var_5016 = 1;
    var_5024 = 8018849499481630752;
    var_5032 = 16;
    pri = fun_0820(var_5024, var_5016)
    var_5040 = 1;
    var_5048 = 8018861594109541073;
    var_5056 = 16;
    pri = fun_0820(var_5048, var_5040)
    var_5064 = 1;
    var_5072 = -4231032927162974978;
    var_5080 = 16;
    pri = fun_0820(var_5072, var_5064)
    var_5088 = 1;
    var_5096 = 4477399624824395582;
    var_5104 = 16;
    pri = fun_0820(var_5096, var_5088)
    var_5112 = 1;
    var_5120 = -3748282655303313513;
    var_5128 = 16;
    pri = fun_0820(var_5120, var_5112)
    var_5136 = 1;
    var_5144 = 2710746293628157769;
    var_5152 = 16;
    pri = fun_0820(var_5144, var_5136)
    var_5160 = 1;
    var_5168 = -5319540891068052559;
    var_5176 = 16;
    pri = fun_0820(var_5168, var_5160)
    var_5184 = 1;
    var_5192 = -5771320145991997854;
    var_5200 = 16;
    pri = fun_0820(var_5192, var_5184)
    var_5208 = 1;
    var_5216 = 6707881205123203646;
    var_5224 = 16;
    pri = fun_0820(var_5216, var_5208)
    var_5232 = 1;
    var_5240 = 6707871309518549747;
    var_5248 = 16;
    pri = fun_0820(var_5240, var_5232)
    var_5256 = 0;
    var_5264 = 4631952216750555136;
    var_5272 = 0;
    OP_PUSH5_C 4661178357318701548, 4647088885466891551, 4659677128122601308, 4661408639034022953, 4649355462716854108
    var_5280 = 4658782851335265976;
    var_5288 = 1;
    pri = EvCameraMove(var_5288, var_5280, var_5272, var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216)
    var_5296 = 0;
    pri = fun_2790()
    var_5304 = 0;
    var_5312 = 4631952216750555136;
    var_5320 = 2;
    OP_PUSH5_C 4661184492593584538, 4648510861864861696, 4659802626379795661, 4661419898033091379, 4649805646757730714
    var_5328 = 4658843632338049434;
    var_5336 = 45;
    pri = EvCameraMove(var_5336, var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5344 = 15;
    var_5352 = 8;
    pri = fun_0060(var_5344)
    var_5360 = 0;
    var_5368 = 0;
    var_5376 = 0;
    var_5384 = 0;
    OP_PUSH2_C 4588701099155483113, 4477399624824395582
    var_5392 = 48;
    pri = fun_09B8(var_5384, var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5400 = 10;
    var_5408 = 8;
    pri = fun_0060(var_5400)
    var_5416 = 0;
    var_5424 = 0;
    var_5432 = 0;
    var_5440 = 0;
    OP_PUSH2_C 4588701099155483113, -3748282655303313513
    var_5448 = 48;
    pri = fun_09B8(var_5440, var_5432, var_5424, var_5416, var_5408, var_5400)
    var_5456 = 10;
    var_5464 = 8;
    pri = fun_0060(var_5456)
    var_5472 = 0;
    pri = fun_2790()
    var_5480 = 0;
    var_5488 = -4616189618054758400;
    var_5496 = 3;
    OP_PUSH5_C 4658966777640360346, 4648510861864861696, 4658546984100875469, 4659908619300713267, 4650526046776249549
    var_5504 = 4658286399845092557;
    var_5512 = 200;
    pri = EvCameraMove(var_5512, var_5504, var_5496, var_5488, var_5480, var_5472, var_5464, var_5456, var_5448, var_5440)
    var_5520 = 4477399624824395582;
    var_5528 = 8;
    pri = fun_0A10(var_5520)
    var_5536 = -3748282655303313513;
    var_5544 = 8;
    pri = fun_0A10(var_5536)
    var_5552 = 1;
    var_5560 = 0;
    var_5568 = 4641240890982006784;
    var_5576 = 0;
    var_5584 = 0;
    OP_PUSH4_C 4660247048979742720, 4659728079491432448, 4611686018427387904, 4637153820979408116
    var_5592 = 72;
    pri = fun_0898(var_5584, var_5576, var_5568, var_5560, var_5552, var_5544, var_5536, var_5528, var_5520)
    var_5600 = 15;
    var_5608 = 8;
    pri = fun_0060(var_5600)
    var_5616 = 1;
    var_5624 = 0;
    var_5632 = 4641240890982006784;
    var_5640 = 0;
    var_5648 = 0;
    OP_PUSH4_C 4660086520282087424, 4659615929305399296, 4611686018427387904, 688830528901060397
    var_5656 = 72;
    pri = fun_0898(var_5648, var_5640, var_5632, var_5624, var_5616, var_5608, var_5600, var_5592, var_5584)
    var_5664 = 20;
    var_5672 = 8;
    pri = fun_0060(var_5664)
    var_5680 = 4637153820979408116;
    var_5688 = 8;
    pri = fun_0A10(var_5680)
    var_5696 = 0;
    var_5704 = 0;
    var_5712 = 0;
    var_5720 = 0;
    OP_PUSH2_C 4588701099155483113, 8018849499481630752
    var_5728 = 48;
    pri = fun_09B8(var_5720, var_5712, var_5704, var_5696, var_5688, var_5680)
    var_5736 = 0;
    var_5744 = 0;
    var_5752 = 0;
    var_5760 = 0;
    OP_PUSH2_C 4588701099155483113, 8018861594109541073
    var_5768 = 48;
    pri = fun_09B8(var_5760, var_5752, var_5744, var_5736, var_5728, var_5720)
    var_5776 = 5;
    var_5784 = 8;
    pri = fun_0060(var_5776)
    var_5792 = 688830528901060397;
    var_5800 = 8;
    pri = fun_0A10(var_5792)
    var_5808 = 0;
    var_5816 = 0;
    var_5824 = 0;
    var_5832 = 0;
    OP_PUSH2_C 4588701099155483113, -4231032927162974978
    var_5840 = 48;
    pri = fun_09B8(var_5832, var_5824, var_5816, var_5808, var_5800, var_5792)
    var_5848 = 0;
    pri = fun_2790()
    var_5856 = 8018849499481630752;
    var_5864 = 8;
    pri = fun_0A10(var_5856)
    var_5872 = 8018861594109541073;
    var_5880 = 8;
    pri = fun_0A10(var_5872)
    var_5888 = 0;
    var_5896 = -4616189618054758400;
    var_5904 = -1;
    OP_PUSH5_C 4658815484840378368, 4648086890181191270, 4658585467007847629, 4659240556035676570, 4651165522738964070
    var_5912 = 4658237581528819302;
    var_5920 = 1;
    pri = EvCameraMove(var_5920, var_5912, var_5904, var_5896, var_5888, var_5880, var_5872, var_5864, var_5856, var_5848)
    var_5928 = 0;
    pri = fun_2790()
    var_5936 = 10;
    var_5944 = 8;
    pri = fun_0060(var_5936)
    var_5952 = -4231032927162974978;
    var_5960 = 8;
    pri = fun_0A10(var_5952)
    var_5968 = 0;
    var_5976 = -4616189618054758400;
    var_5984 = 3;
    OP_PUSH5_C 4658815484840378368, 4648086890181191270, 4658585467007847629, 4659111913175226778, 4650234896097214464
    var_5992 = 4658342914742760243;
    var_6000 = 60;
    pri = EvCameraMove(var_6000, var_5992, var_5984, var_5976, var_5968, var_5960, var_5952, var_5944, var_5936, var_5928)
    var_6008 = 0;
    var_6016 = 0;
    var_6024 = 5595895409926974626;
    var_6032 = 24;
    pri = fun_8648(var_6024, var_6016, var_6008)
    var_6040 = 0;
    var_6048 = 0;
    var_6056 = 5595896509438602837;
    var_6064 = 24;
    pri = fun_8648(var_6056, var_6048, var_6040)
    var_6072 = 0;
    var_6080 = 0;
    var_6088 = 5595893210903718204;
    var_6096 = 24;
    pri = fun_8648(var_6088, var_6080, var_6072)
    var_6104 = 0;
    var_6112 = 0;
    var_6120 = 5595894310415346415;
    var_6128 = 24;
    pri = fun_8648(var_6120, var_6112, var_6104)
    var_6136 = 5595895409926974626;
    var_6144 = 8;
    pri = fun_0BE8(var_6136)
    var_6152 = 5595896509438602837;
    var_6160 = 8;
    pri = fun_0BE8(var_6152)
    var_6168 = 5595893210903718204;
    var_6176 = 8;
    pri = fun_0BE8(var_6168)
    var_6184 = 5595894310415346415;
    var_6192 = 8;
    pri = fun_0BE8(var_6184)
    var_6200 = 1;
    var_6208 = 180;
    pri = float(var_6208)
    var_6216 = pri;
    var_6224 = 5595895409926974626;
    var_6232 = 24;
    pri = fun_0768(var_6224, var_6216, var_6208)
    var_6240 = 1;
    var_6248 = 180;
    pri = float(var_6248)
    var_6256 = pri;
    var_6264 = 5595896509438602837;
    var_6272 = 24;
    pri = fun_0768(var_6264, var_6256, var_6248)
    var_6280 = 1;
    var_6288 = 180;
    pri = float(var_6288)
    var_6296 = pri;
    var_6304 = 5595893210903718204;
    var_6312 = 24;
    pri = fun_0768(var_6304, var_6296, var_6288)
    var_6320 = 1;
    var_6328 = 180;
    pri = float(var_6328)
    var_6336 = pri;
    var_6344 = 5595894310415346415;
    var_6352 = 24;
    pri = fun_0768(var_6344, var_6336, var_6328)
    var_6360 = 1;
    var_6368 = 1;
    OP_PUSH4_C 4636033603912859648, 4657656599584702464, 4656097492096516096, -4535650465247009105
    var_6376 = 48;
    pri = fun_06B8(var_6368, var_6360, var_6352, var_6344, var_6336, var_6328)
    var_6384 = 1;
    var_6392 = 1;
    OP_PUSH4_C 4636033603912859648, 4657656599584702464, 4656097492096516096, 7198756580005256125
    var_6400 = 48;
    pri = fun_06B8(var_6392, var_6384, var_6376, var_6368, var_6360, var_6352)
    var_6408 = 10;
    var_6416 = 8;
    pri = fun_0060(var_6408)
    var_6424 = 0;
    var_6432 = 4631952216750555136;
    var_6440 = 0;
    OP_PUSH5_C 4658804951518984274, 4648090848423051264, 4658589403259475067, 4658989251658032087, 4649378508480572293
    var_6448 = 4658488709984603341;
    var_6456 = 1;
    pri = EvCameraMove(var_6456, var_6448, var_6440, var_6432, var_6424, var_6416, var_6408, var_6400, var_6392, var_6384)
    var_6464 = 0;
    pri = fun_2790()
    var_6472 = 0;
    var_6480 = 4631952216750555136;
    var_6488 = 2;
    OP_PUSH5_C 4658804951518984274, 4648090848423051264, 4658589403259475067, 4658964204783151350, 4649203554190360576
    var_6496 = 4658502387909252874;
    var_6504 = 10;
    pri = EvCameraMove(var_6504, var_6496, var_6488, var_6480, var_6472, var_6464, var_6456, var_6448, var_6440, var_6432)
    var_6512 = 0;
    var_6520 = 0;
    var_6528 = 1;
    var_6536 = 263;
    pri = SoundPlayPokeVoice(var_6536, var_6528, var_6520, var_6512)
    var_6544 = 1;
    var_6552 = -1;
    var_6560 = -1;
    var_6568 = 3;
    var_6576 = 0;
    var_6584 = 30;
    var_6592 = -3565078316412726206;
    var_6600 = 56;
    pri = fun_2A00(var_6592, var_6584, var_6576, var_6568, var_6560, var_6552, var_6544)
    var_6608 = 2;
    var_6616 = 8;
    pri = fun_0060(var_6608)
    var_6624 = 1;
    var_6632 = -1;
    var_6640 = -1;
    var_6648 = 3;
    var_6656 = 0;
    var_6664 = 30;
    var_6672 = 3942632517730091317;
    var_6680 = 56;
    pri = fun_2A00(var_6672, var_6664, var_6656, var_6648, var_6640, var_6632, var_6624)
    var_6688 = -3565078316412726206;
    var_6696 = 8;
    pri = fun_0BE8(var_6688)
    var_6704 = 3942632517730091317;
    var_6712 = 8;
    pri = fun_0BE8(var_6704)
    var_6720 = 0;
    var_6728 = 0;
    var_6736 = 160;
    var_6744 = 2;
    var_6752 = 2;
    pri = float(var_6752)
    var_6760 = pri;
    var_6768 = 4;
    var_6776 = 0;
    pri = float(var_6776)
    var_6784 = pri;
    var_6792 = 4587366580439587226;
    var_6800 = 0;
    pri = float(var_6800)
    var_6808 = pri;
    var_6816 = 0;
    pri = float(var_6816)
    var_6824 = pri;
    var_6832 = 4591870180066957722;
    var_6840 = 0;
    pri = float(var_6840)
    var_6848 = pri;
    pri = EvCameraShake_(var_6848, var_6840, var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784, var_6776, var_6768, var_6760)
    var_6856 = 0;
    var_6864 = 4631952216750555136;
    var_6872 = 0;
    OP_PUSH5_C 4658944545515246715, 4643673010702647296, 4657626341024706068, 4659814149261654753, 4642112759722368041
    var_6880 = 4657623218411683185;
    var_6888 = 1;
    pri = EvCameraMove(var_6888, var_6880, var_6872, var_6864, var_6856, var_6848, var_6840, var_6832, var_6824, var_6816)
    var_6896 = 0;
    pri = fun_2790()
    var_6904 = 1;
    var_6912 = 1;
    OP_PUSH4_C -4587338432941916160, 4657584031817269248, 4658903445770600448, 7198753281470371492
    var_6920 = 48;
    pri = fun_06B8(var_6912, var_6904, var_6896, var_6888, var_6880, var_6872)
    var_6936 = 35000;
    var_6944 = 1;
    var_6952 = 0;
    var_6960 = 1;
    var_6968 = -1;
    OP_PUSH5_C 4660782511142469632, -9223372036854775808, 4657005248896407962, 4659378874598450790, 4636610627615116493
    OP_PUSH5_C 4657862867966073242, 4658858805598512742, 4644101380432828826, 4657411628394033971, 4658008443305590784
    OP_PUSH5_C 4647063904562708480, 4657807892384684442, 4658202177254404915, 4647063904562708480, 4658563256872966554
    var_6976 = 5;
    var_6984 = 168;
    pri = fun_1930(var_6976, var_6968, var_6960, var_6952, var_6944, var_6936, var_6928, var_6920, var_6912, var_6904, var_6896, var_6888, var_6880, var_6872, var_6864, var_6856, var_6848, var_6840, var_6832, var_6824, var_6816)
    var_8 = pri;
    var_6992 = 1;
    var_7000 = 4596373779694328218;
    var_7008 = -1;
    var_7016 = 4611686018427387904;
    var_7024 = var_8;
    var_7032 = -3565078316412726206;
    var_7040 = 48;
    pri = fun_0910(var_7032, var_7024, var_7016, var_7008, var_7000, var_6992)
    var_7048 = 15;
    var_7056 = 8;
    pri = fun_0060(var_7048)
    var_7072 = 35048;
    var_7080 = 1;
    var_7088 = 0;
    var_7096 = 1;
    var_7104 = -1;
    OP_PUSH5_C 4660711702593640858, -9223372036854775808, 4658200418035800474, 4659328297063573094, 4638032076247505306
    OP_PUSH5_C 4657276828268468634, 4658817463961308365, 4644391651502561690, 4657749398366086758, 4658088267849767322
    OP_PUSH5_C 4647063904562708480, 4658098603259068416, 4658241539770679296, 4647063904562708480, 4658848030384560538
    var_7112 = 5;
    var_7120 = 168;
    pri = fun_1930(var_7112, var_7104, var_7096, var_7088, var_7080, var_7072, var_7064, var_7056, var_7048, var_7040, var_7032, var_7024, var_7016, var_7008, var_7000, var_6992, var_6984, var_6976, var_6968, var_6960, var_6952)
    var_16 = pri;
    var_7128 = 1;
    var_7136 = 4596373779694328218;
    var_7144 = -1;
    var_7152 = 4611686018427387904;
    var_7160 = var_16;
    var_7168 = 3942632517730091317;
    var_7176 = 48;
    pri = fun_0910(var_7168, var_7160, var_7152, var_7144, var_7136, var_7128)
    var_7192 = 35096;
    var_7200 = 1;
    var_7208 = 0;
    var_7216 = 1;
    var_7224 = -1;
    var_7232 = 0;
    var_7240 = 0;
    var_7248 = 0;
    OP_PUSH5_C 4660117086705339597, 4622382067542392832, 4657472761240538317, 4658777441738057318, 4644866640525760922
    OP_PUSH5_C 4657560942073085952, 4658077492635815117, 4647257418609197056, 4657828123398635520, 4657940713389319782
    OP_PUSH2_C 4647257418609197056, 4658935331607805952
    var_7256 = 4;
    var_7264 = 168;
    pri = fun_1930(var_7256, var_7248, var_7240, var_7232, var_7224, var_7216, var_7208, var_7200, var_7192, var_7184, var_7176, var_7168, var_7160, var_7152, var_7144, var_7136, var_7128, var_7120, var_7112, var_7104, var_7096)
    var_24 = pri;
    var_7272 = 1;
    var_7280 = 4596373779694328218;
    var_7288 = -1;
    var_7296 = 4611686018427387904;
    var_7304 = var_24;
    var_7312 = 4637153820979408116;
    var_7320 = 48;
    pri = fun_0910(var_7312, var_7304, var_7296, var_7288, var_7280, var_7272)
    var_7328 = 30;
    var_7336 = 8;
    pri = fun_0060(var_7328)
    var_7344 = 0;
    var_7352 = 4631952216750555136;
    var_7360 = 3;
    OP_PUSH5_C 4658929020411062518, 4642385086762335601, 4657626406995403735, 4660571492870866862, 4640040400206335836
    var_7368 = 4657619238179590636;
    var_7376 = 50;
    pri = EvCameraMove(var_7376, var_7368, var_7360, var_7352, var_7344, var_7336, var_7328, var_7320, var_7312, var_7304)
    var_7384 = 20;
    var_7392 = 8;
    pri = fun_0060(var_7384)
    var_7408 = 35144;
    var_7416 = 1;
    var_7424 = 0;
    var_7432 = 1;
    var_7440 = -1;
    OP_PUSH5_C 4660647930919229850, -9223372036854775808, 4657152803356855501, 4659329396575200870, 4637996891875416474
    OP_PUSH5_C 4657509265026580480, 4658729503031086285, 4645012655669929574, 4657507285905650483, 4658006903989311898
    OP_PUSH5_C 4647063904562708480, 4657853632068399923, 4658121033296275046, 4647063904562708480, 4659078707924067942
    var_7448 = 5;
    var_7456 = 168;
    pri = fun_1930(var_7448, var_7440, var_7432, var_7424, var_7416, var_7408, var_7400, var_7392, var_7384, var_7376, var_7368, var_7360, var_7352, var_7344, var_7336, var_7328, var_7320, var_7312, var_7304, var_7296, var_7288)
    var_32 = pri;
    var_7464 = 1;
    var_7472 = 4596373779694328218;
    var_7480 = -1;
    var_7488 = 4611686018427387904;
    var_7496 = var_32;
    var_7504 = 8018861594109541073;
    var_7512 = 48;
    pri = fun_0910(var_7504, var_7496, var_7488, var_7480, var_7472, var_7464)
    var_7520 = 10;
    var_7528 = 8;
    pri = fun_0060(var_7520)
    var_7544 = 35192;
    var_7552 = 1;
    var_7560 = 0;
    var_7568 = 1;
    var_7576 = -1;
    OP_PUSH5_C 4660974046068028211, -9223372036854775808, 4658064738300932915, 4659169527584522240, 4640607572284407808
    OP_PUSH5_C 4657623394333543629, 4658677606082255258, 4645378573139653427, 4657679909231211315, 4658054622793957376
    OP_PUSH5_C 4647063904562708480, 4657841977245145498, 4658203716570683802, 4647063904562708480, 4658809767379913933
    var_7584 = 5;
    var_7592 = 168;
    pri = fun_1930(var_7584, var_7576, var_7568, var_7560, var_7552, var_7544, var_7536, var_7528, var_7520, var_7512, var_7504, var_7496, var_7488, var_7480, var_7472, var_7464, var_7456, var_7448, var_7440, var_7432, var_7424)
    var_40 = pri;
    var_7600 = 1;
    var_7608 = 4596373779694328218;
    var_7616 = -1;
    var_7624 = 4611686018427387904;
    var_7632 = var_40;
    var_7640 = 7198753281470371492;
    var_7648 = 48;
    pri = fun_0910(var_7640, var_7632, var_7624, var_7616, var_7608, var_7600)
    var_7664 = 35240;
    var_7672 = 1;
    var_7680 = 0;
    var_7688 = 1;
    var_7696 = -1;
    var_7704 = 0;
    var_7712 = 0;
    var_7720 = 0;
    OP_PUSH5_C 4660671460468064256, -9223372036854775808, 4657253958426610893, 4658849349798513869, 4644168230739797606
    OP_PUSH5_C 4657424822533567283, 4658022956859077427, 4647063904562708480, 4657266492859167539, 4658137745873017242
    OP_PUSH2_C 4647063904562708480, 4656602387835990835
    var_7728 = 4;
    var_7736 = 168;
    pri = fun_1930(var_7728, var_7720, var_7712, var_7704, var_7696, var_7688, var_7680, var_7672, var_7664, var_7656, var_7648, var_7640, var_7632, var_7624, var_7616, var_7608, var_7600, var_7592, var_7584, var_7576, var_7568)
    var_48 = pri;
    var_7744 = 1;
    var_7752 = 4596373779694328218;
    var_7760 = -1;
    var_7768 = 4611686018427387904;
    var_7776 = var_48;
    var_7784 = 7198756580005256125;
    var_7792 = 48;
    pri = fun_0910(var_7784, var_7776, var_7768, var_7760, var_7752, var_7744)
    var_7800 = 5;
    var_7808 = 8;
    pri = fun_0060(var_7800)
    var_7824 = 35288;
    var_7832 = 1;
    var_7840 = 0;
    var_7848 = 1;
    var_7856 = -1;
    OP_PUSH5_C 4660275636282064896, -9223372036854775808, 4658145662356737229, 4659336653351944192, 4637799859391719014
    OP_PUSH5_C 4657766990552131174, 4658932033072922624, 4643584170163122995, 4657860888845143245, 4658109598375346176
    OP_PUSH5_C 4647063904562708480, 4658005804477684122, 4657858909724213248, 4647063904562708480, 4658643521221794202
    var_7864 = 5;
    var_7872 = 168;
    pri = fun_1930(var_7864, var_7856, var_7848, var_7840, var_7832, var_7824, var_7816, var_7808, var_7800, var_7792, var_7784, var_7776, var_7768, var_7760, var_7752, var_7744, var_7736, var_7728, var_7720, var_7712, var_7704)
    var_56 = pri;
    var_7880 = 1;
    var_7888 = 4596373779694328218;
    var_7896 = -1;
    var_7904 = 4611686018427387904;
    var_7912 = var_56;
    var_7920 = -4231032927162974978;
    var_7928 = 48;
    pri = fun_0910(var_7920, var_7912, var_7904, var_7896, var_7888, var_7880)
    var_7944 = 35336;
    var_7952 = 1;
    var_7960 = 0;
    var_7968 = 1;
    var_7976 = -1;
    OP_PUSH5_C 4660666842519227597, -9223372036854775808, 4657969740496293069, 4659458699142627328, 4634351790927013478
    OP_PUSH5_C 4657781504105617818, 4658589865054358733, 4645997818088416870, 4657728727547484570, 4657937194952110899
    OP_PUSH5_C 4647063904562708480, 4658143903138132787, 4658068256738141798, 4647063904562708480, 4658874198761301606
    var_7984 = 5;
    var_7992 = 168;
    pri = fun_1930(var_7984, var_7976, var_7968, var_7960, var_7952, var_7944, var_7936, var_7928, var_7920, var_7912, var_7904, var_7896, var_7888, var_7880, var_7872, var_7864, var_7856, var_7848, var_7840, var_7832, var_7824)
    var_64 = pri;
    var_8000 = 1;
    var_8008 = 4596373779694328218;
    var_8016 = -1;
    var_8024 = 4611686018427387904;
    var_8032 = var_64;
    var_8040 = 688830528901060397;
    var_8048 = 48;
    pri = fun_0910(var_8040, var_8032, var_8024, var_8016, var_8008, var_8000)
    var_8064 = 35384;
    var_8072 = 1;
    var_8080 = 0;
    var_8088 = 1;
    var_8096 = -1;
    var_8104 = 0;
    var_8112 = 0;
    var_8120 = 0;
    OP_PUSH5_C 4660478826030877901, -9223372036854775808, 4657175013491736576, 4658774143203173990, 4644697755539734528
    OP_PUSH5_C 4657331583947531878, 4658270346975327027, 4647063904562708480, 4657243842919635354, 4657819767110264422
    OP_PUSH2_C 4647063904562708480, 4656615581975524147
    var_8128 = 4;
    var_8136 = 168;
    pri = fun_1930(var_8128, var_8120, var_8112, var_8104, var_8096, var_8088, var_8080, var_8072, var_8064, var_8056, var_8048, var_8040, var_8032, var_8024, var_8016, var_8008, var_8000, var_7992, var_7984, var_7976, var_7968)
    var_72 = pri;
    var_8144 = 1;
    var_8152 = 4596373779694328218;
    var_8160 = -1;
    var_8168 = 4611686018427387904;
    var_8176 = var_72;
    var_8184 = -4535650465247009105;
    var_8192 = 48;
    pri = fun_0910(var_8184, var_8176, var_8168, var_8160, var_8152, var_8144)
    var_8200 = 0;
    var_8208 = 4631952216750555136;
    var_8216 = 0;
    OP_PUSH5_C 4658433250618098319, 4648007461461200732, 4657422029774032732, 4658954814953850143, 4648678955202516091
    var_8224 = 4657231902223357706;
    var_8232 = 1;
    pri = EvCameraMove(var_8232, var_8224, var_8216, var_8208, var_8200, var_8192, var_8184, var_8176, var_8168, var_8160)
    var_8240 = 15;
    var_8248 = 8;
    pri = fun_0060(var_8240)
    var_8256 = 0;
    var_8264 = 4631952216750555136;
    var_8272 = 0;
    OP_PUSH5_C 4658929020411062518, 4642385086762335601, 4657626406995403735, 4660571492870866862, 4640040400206335836
    var_8280 = 4657619238179590636;
    var_8288 = 1;
    pri = EvCameraMove(var_8288, var_8280, var_8272, var_8264, var_8256, var_8248, var_8240, var_8232, var_8224, var_8216)
    var_8296 = 5;
    var_8304 = 7;
    var_8312 = 5595895409926974626;
    var_8320 = 24;
    pri = fun_12C8(var_8312, var_8304, var_8296)
    var_8328 = 5;
    var_8336 = 7;
    var_8344 = 5595896509438602837;
    var_8352 = 24;
    pri = fun_12C8(var_8344, var_8336, var_8328)
    var_8360 = 5;
    var_8368 = 7;
    var_8376 = 5595893210903718204;
    var_8384 = 24;
    pri = fun_12C8(var_8376, var_8368, var_8360)
    var_8392 = 5;
    var_8400 = 7;
    var_8408 = 5595894310415346415;
    var_8416 = 24;
    pri = fun_12C8(var_8408, var_8400, var_8392)
    var_8424 = 1;
    var_8432 = 0;
    var_8440 = 4641240890982006784;
    var_8448 = 0;
    var_8456 = 0;
    OP_PUSH4_C 4661040896374996992, 4656233831538360320, 4611686018427387904, 5595895409926974626
    var_8464 = 72;
    pri = fun_0898(var_8456, var_8448, var_8440, var_8432, var_8424, var_8416, var_8408, var_8400, var_8392)
    var_8472 = 1;
    var_8480 = 0;
    var_8488 = 4641240890982006784;
    var_8496 = 0;
    var_8504 = 0;
    OP_PUSH4_C 4661789663793512448, 4657148625212669952, 4611686018427387904, 5595896509438602837
    var_8512 = 72;
    pri = fun_0898(var_8504, var_8496, var_8488, var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8520 = 1;
    var_8528 = 0;
    var_8536 = 4641240890982006784;
    var_8544 = 0;
    var_8552 = 0;
    OP_PUSH4_C 4661639030700507136, 4658094205212557312, 4611686018427387904, 5595893210903718204
    var_8560 = 72;
    pri = fun_0898(var_8552, var_8544, var_8536, var_8528, var_8520, var_8512, var_8504, var_8496, var_8488)
    var_8568 = 1;
    var_8576 = 0;
    var_8584 = 4641240890982006784;
    var_8592 = 0;
    var_8600 = 0;
    OP_PUSH4_C 4660568106375053312, 4659096959817089024, 4611686018427387904, 5595894310415346415
    var_8608 = 72;
    pri = fun_0898(var_8600, var_8592, var_8584, var_8576, var_8568, var_8560, var_8552, var_8544, var_8536)
    var_8616 = 1;
    var_8624 = 1;
    OP_PUSH4_C -4597049319638433792, 4659644516607721472, 4658703334654345216, -812938253260952198
    var_8632 = 48;
    pri = fun_06B8(var_8624, var_8616, var_8608, var_8600, var_8592, var_8584)
    var_8640 = 60;
    var_8648 = 8;
    pri = fun_0060(var_8640)
    var_8656 = 0;
    var_8664 = 4631952216750555136;
    var_8672 = 0;
    OP_PUSH5_C 4659648540820279132, 4638277663164685353, 4658691833762718679, 4659853357846301245, 4637501495916405719
    var_8680 = 4658506368141345423;
    var_8688 = 1;
    pri = EvCameraMove(var_8688, var_8680, var_8672, var_8664, var_8656, var_8648, var_8640, var_8632, var_8624, var_8616)
    var_8696 = 0;
    pri = fun_2790()
    var_8704 = 0;
    var_8712 = 4631952216750555136;
    var_8720 = 3;
    OP_PUSH5_C 4659648540820279132, 4638277663164685353, 4658691833762718679, 4659924562219316019, 4637502199603847496
    var_8728 = 4658704873970624102;
    var_8736 = 200;
    pri = EvCameraMove(var_8736, var_8728, var_8720, var_8712, var_8704, var_8696, var_8688, var_8680, var_8672, var_8664)
    var_8744 = 1;
    var_8752 = 1;
    var_8760 = -1;
    var_8768 = -1;
    var_8776 = 0;
    var_8784 = 3;
    var_8792 = -812938253260952198;
    var_8800 = 56;
    pri = fun_45E0(var_8792, var_8784, var_8776, var_8768, var_8760, var_8752, var_8744)
    var_8808 = 40;
    var_8816 = 8;
    pri = fun_0060(var_8808)
    var_8824 = 0;
    var_8832 = 0;
    var_8840 = 0;
    var_8848 = 101;
    var_8856 = -1;
    OP_PUSH2_C 1273766110767596711, 6707881205123203646
    var_8864 = 56;
    pri = fun_2248(var_8856, var_8848, var_8840, var_8832, var_8824, var_8816, var_8808)
    var_8872 = 1;
    var_8880 = 8;
    pri = fun_2390(var_8872)
    var_8888 = 0;
    pri = fun_2450()
    var_8896 = 1;
    var_8904 = 1;
    var_8912 = -1;
    var_8920 = -1;
    var_8928 = 0;
    var_8936 = 51;
    var_8944 = 4477399624824395582;
    var_8952 = 56;
    pri = fun_45E0(var_8944, var_8936, var_8928, var_8920, var_8912, var_8904, var_8896)
    var_8960 = 1;
    var_8968 = 1;
    var_8976 = -1;
    var_8984 = -1;
    var_8992 = 0;
    var_9000 = 53;
    var_9008 = -3748282655303313513;
    var_9016 = 56;
    pri = fun_45E0(var_9008, var_9000, var_8992, var_8984, var_8976, var_8968, var_8960)
    var_9024 = -3565078316412726206;
    var_9032 = 8;
    pri = fun_0A10(var_9024)
    var_9040 = 3942632517730091317;
    var_9048 = 8;
    pri = fun_0A10(var_9040)
    var_9056 = -4535650465247009105;
    var_9064 = 8;
    pri = fun_0A10(var_9056)
    var_9072 = 7198756580005256125;
    var_9080 = 8;
    pri = fun_0A10(var_9072)
    var_9088 = 4637153820979408116;
    var_9096 = 8;
    pri = fun_0A10(var_9088)
    var_9104 = 688830528901060397;
    var_9112 = 8;
    pri = fun_0A10(var_9104)
    var_9120 = 8018861594109541073;
    var_9128 = 8;
    pri = fun_0A10(var_9120)
    var_9136 = -4231032927162974978;
    var_9144 = 8;
    pri = fun_0A10(var_9136)
    var_9152 = 7198753281470371492;
    var_9160 = 8;
    pri = fun_0A10(var_9152)
    var_9168 = 5595895409926974626;
    var_9176 = 8;
    pri = fun_0A10(var_9168)
    var_9184 = 5595896509438602837;
    var_9192 = 8;
    pri = fun_0A10(var_9184)
    var_9200 = 5595893210903718204;
    var_9208 = 8;
    pri = fun_0A10(var_9200)
    var_9216 = 5595894310415346415;
    var_9224 = 8;
    pri = fun_0A10(var_9216)
    var_9232 = 0;
    var_9240 = 5595895409926974626;
    var_9248 = 16;
    pri = fun_07A8(var_9240, var_9232)
    var_9256 = 0;
    var_9264 = 5595896509438602837;
    var_9272 = 16;
    pri = fun_07A8(var_9264, var_9256)
    var_9280 = 0;
    var_9288 = 5595893210903718204;
    var_9296 = 16;
    pri = fun_07A8(var_9288, var_9280)
    var_9304 = 0;
    var_9312 = 5595894310415346415;
    var_9320 = 16;
    pri = fun_07A8(var_9312, var_9304)
    var_9328 = 0;
    var_9336 = 1827484940113052560;
    var_9344 = 16;
    pri = fun_07A8(var_9336, var_9328)
    var_9352 = 1;
    var_9360 = 1;
    OP_PUSH4_C 4640220544191430656, 4661558766351679488, 4657474080654491648, -4535650465247009105
    var_9368 = 48;
    pri = fun_06B8(var_9360, var_9352, var_9344, var_9336, var_9328, var_9320)
    var_9376 = 1;
    var_9384 = 1;
    OP_PUSH4_C 4637250983187133235, 4661283888444735488, 4657225591026614272, 7198756580005256125
    var_9392 = 48;
    pri = fun_06B8(var_9384, var_9376, var_9368, var_9360, var_9352, var_9344)
    var_9400 = 1;
    var_9408 = 1;
    OP_PUSH4_C -4583081123919167488, 4661534577095868416, 4657665395677724672, -3565078316412726206
    var_9416 = 48;
    pri = fun_06B8(var_9408, var_9400, var_9392, var_9384, var_9376, var_9368)
    var_9424 = 1;
    var_9432 = 1;
    OP_PUSH4_C -4584031101965565952, 4661534577095868416, 4657843516561424384, 3942632517730091317
    var_9440 = 48;
    pri = fun_06B8(var_9432, var_9424, var_9416, var_9408, var_9400, var_9392)
    var_9448 = 1;
    var_9456 = 1;
    OP_PUSH4_C -4583257045779611648, 4661657722398179328, 4657808332189335552, 7198753281470371492
    var_9464 = 48;
    pri = fun_06B8(var_9456, var_9448, var_9440, var_9432, var_9424, var_9416)
    var_9472 = 1;
    var_9480 = 1;
    OP_PUSH4_C -4584523683174809600, 4661433422026113024, 4657968860886990848, 4637153820979408116
    var_9488 = 48;
    pri = fun_06B8(var_9480, var_9472, var_9464, var_9456, var_9448, var_9440)
    var_9496 = 1;
    var_9504 = 1;
    OP_PUSH4_C -4586001426802540544, 4661324570374963200, 4658041428654424064, 688830528901060397
    var_9512 = 48;
    pri = fun_06B8(var_9504, var_9496, var_9488, var_9480, var_9472, var_9464)
    var_9520 = 1;
    var_9528 = 1;
    OP_PUSH4_C -4586564376755961856, 4661241007491252224, 4658129389584646144, 8018849499481630752
    var_9536 = 48;
    pri = fun_06B8(var_9528, var_9520, var_9512, var_9504, var_9496, var_9488)
    var_9544 = 1;
    var_9552 = 1;
    OP_PUSH4_C -4589730970243956736, 4661007911026163712, 4658122792514879488, 8018861594109541073
    var_9560 = 48;
    pri = fun_06B8(var_9552, var_9544, var_9536, var_9528, var_9520, var_9512)
    var_9568 = 1;
    var_9576 = 1;
    OP_PUSH4_C -4585368108104941568, 4661451014212157440, 4658195360282312704, -4231032927162974978
    var_9584 = 48;
    pri = fun_06B8(var_9576, var_9568, var_9560, var_9552, var_9544, var_9536)
    var_9592 = 1;
    var_9600 = 1;
    OP_PUSH4_C 4639288158331076608, 4661451014212157440, 4657386119724269568, 4477399624824395582
    var_9608 = 48;
    pri = fun_06B8(var_9600, var_9592, var_9584, var_9576, var_9568, var_9560)
    var_9616 = 1;
    var_9624 = 1;
    OP_PUSH4_C 4639108718033423565, 4661393839607513088, 4657289362701025280, -3748282655303313513
    var_9632 = 48;
    pri = fun_06B8(var_9624, var_9616, var_9608, var_9600, var_9592, var_9584)
    var_9640 = 1;
    var_9648 = 1;
    OP_PUSH4_C -4586071795546718208, 4661363053281935360, 4658415262607867904, 2710746293628157769
    var_9656 = 48;
    pri = fun_06B8(var_9648, var_9640, var_9632, var_9624, var_9616, var_9608)
    var_9664 = 1;
    var_9672 = 1;
    OP_PUSH4_C -4590997607639154688, 4660913353026174976, 4657973258933501952, -5319540891068052559
    var_9680 = 48;
    pri = fun_06B8(var_9672, var_9664, var_9656, var_9648, var_9640, var_9632)
    var_9688 = 1;
    var_9696 = 1;
    OP_PUSH4_C 4638679468693939814, 4661405934235418624, 4657148625212669952, -5771320145991997854
    var_9704 = 48;
    pri = fun_06B8(var_9696, var_9688, var_9680, var_9672, var_9664, var_9656)
    var_9712 = 1;
    var_9720 = 1;
    OP_PUSH4_C -4583819995733032960, 4661735787723751424, 4658021637445124096, 6707881205123203646
    var_9728 = 48;
    pri = fun_06B8(var_9720, var_9712, var_9704, var_9696, var_9688, var_9680)
    var_9736 = 1;
    var_9744 = 1;
    OP_PUSH4_C -4584312576942276608, 4661590652188884992, 4658300913398579200, 6707871309518549747
    var_9752 = 48;
    pri = fun_06B8(var_9744, var_9736, var_9728, var_9720, var_9712, var_9704)
    var_9760 = 1;
    var_9768 = 1;
    var_9776 = -1;
    var_9784 = -1;
    var_9792 = 0;
    var_9800 = 4;
    var_9808 = -4535650465247009105;
    var_9816 = 56;
    pri = fun_45E0(var_9808, var_9800, var_9792, var_9784, var_9776, var_9768, var_9760)
    var_9824 = 1;
    var_9832 = 1;
    var_9840 = -1;
    var_9848 = -1;
    var_9856 = 0;
    var_9864 = 8;
    var_9872 = 7198756580005256125;
    var_9880 = 56;
    pri = fun_45E0(var_9872, var_9864, var_9856, var_9848, var_9840, var_9832, var_9824)
    var_9888 = 1;
    var_9896 = 1;
    var_9904 = -1;
    var_9912 = -1;
    var_9920 = 0;
    var_9928 = 8;
    var_9936 = 4637153820979408116;
    var_9944 = 56;
    pri = fun_45E0(var_9936, var_9928, var_9920, var_9912, var_9904, var_9896, var_9888)
    var_9952 = 1;
    var_9960 = 1;
    var_9968 = -1;
    var_9976 = -1;
    var_9984 = 0;
    var_9992 = 15;
    var_10000 = 688830528901060397;
    var_10008 = 56;
    pri = fun_45E0(var_10000, var_9992, var_9984, var_9976, var_9968, var_9960, var_9952)
    var_10016 = 1;
    var_10024 = 1;
    var_10032 = -1;
    var_10040 = -1;
    var_10048 = 0;
    var_10056 = 8;
    var_10064 = -4231032927162974978;
    var_10072 = 56;
    pri = fun_45E0(var_10064, var_10056, var_10048, var_10040, var_10032, var_10024, var_10016)
    var_10080 = 1;
    var_10088 = 1;
    var_10096 = -1;
    var_10104 = -1;
    var_10112 = 0;
    var_10120 = 7;
    var_10128 = 7198753281470371492;
    var_10136 = 56;
    pri = fun_45E0(var_10128, var_10120, var_10112, var_10104, var_10096, var_10088, var_10080)
    var_10144 = 1;
    var_10152 = 1;
    var_10160 = -1;
    var_10168 = -1;
    var_10176 = 0;
    var_10184 = 8;
    var_10192 = 2710746293628157769;
    var_10200 = 56;
    pri = fun_45E0(var_10192, var_10184, var_10176, var_10168, var_10160, var_10152, var_10144)
    var_10208 = 1;
    var_10216 = 1;
    var_10224 = -1;
    var_10232 = -1;
    var_10240 = 0;
    var_10248 = 4;
    var_10256 = 8018861594109541073;
    var_10264 = 56;
    pri = fun_45E0(var_10256, var_10248, var_10240, var_10232, var_10224, var_10216, var_10208)
    var_10272 = 40;
    var_10280 = 8;
    pri = fun_0060(var_10272)
    var_10288 = 1;
    var_10296 = -1;
    var_10304 = -1;
    var_10312 = 3;
    var_10320 = 0;
    var_10328 = 30;
    var_10336 = -3565078316412726206;
    var_10344 = 56;
    pri = fun_2A00(var_10336, var_10328, var_10320, var_10312, var_10304, var_10296, var_10288)
    var_10352 = 0;
    var_10360 = 4631952216750555136;
    var_10368 = 0;
    OP_PUSH5_C 4661275774048922501, 4637016655269021614, 4657653279059586580, 4661274916429852836, 4644089769590039511
    var_10376 = 4656955594951297597;
    var_10384 = 1;
    pri = EvCameraMove(var_10384, var_10376, var_10368, var_10360, var_10352, var_10344, var_10336, var_10328, var_10320, var_10312)
    var_10392 = 0;
    pri = fun_2790()
    var_10400 = 0;
    var_10408 = 4631952216750555136;
    var_10416 = 3;
    OP_PUSH5_C 4661283261723107656, 4635155401985522401, 4657581546920990474, 4660808129763396813, 4644431937608603402
    var_10424 = 4657260445545214771;
    var_10432 = 120;
    pri = EvCameraMove(var_10432, var_10424, var_10416, var_10408, var_10400, var_10392, var_10384, var_10376, var_10368, var_10360)
    var_10440 = 6;
    var_10448 = -3113441888070653316;
    var_10456 = 16;
    pri = fun_11D8(var_10448, var_10440)
    var_10464 = 1;
    var_10472 = 1;
    var_10480 = 0;
    OP_PUSH3_C 4658050224747446272, 4657377323631247360, 8802641224559852288
    var_10488 = 48;
    pri = fun_06B8(var_10480, var_10472, var_10464, var_10456, var_10448, var_10440)
    var_10496 = 1;
    var_10504 = 1;
    var_10512 = 0;
    OP_PUSH3_C 4657905089212579840, 4657588429863780352, -3113441888070653316
    var_10520 = 48;
    pri = fun_06B8(var_10512, var_10504, var_10496, var_10488, var_10480, var_10472)
    var_10528 = 1;
    var_10536 = 3;
    var_10544 = 0;
    var_10552 = 3;
    var_10560 = -812938253260952198;
    var_10568 = 40;
    pri = fun_6918(var_10560, var_10552, var_10544, var_10536, var_10528)
    var_10576 = -812938253260952198;
    var_10584 = 8;
    pri = fun_0BE8(var_10576)
    var_10592 = 35432;
    pri = SoundPostEvent(var_10592)
    var_10600 = 30;
    var_10608 = 8;
    pri = fun_0060(var_10600)
    var_10616 = 1;
    var_10624 = -1;
    var_10632 = -1;
    var_10640 = 3;
    var_10648 = 0;
    var_10656 = 30;
    var_10664 = 3942632517730091317;
    var_10672 = 56;
    pri = fun_2A00(var_10664, var_10656, var_10648, var_10640, var_10632, var_10624, var_10616)
    var_10680 = 0;
    pri = fun_2790()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_10688 = 16;
    pri = fun_2820(var_10680, var_10672)
    var_10696 = 3;
    var_10704 = 20;
    OP_PUSH2_C 4635195723275936203, 4613804962052065722
    var_10712 = 32;
    pri = fun_2888(var_10704, var_10696, var_10688, var_10680)
    var_10720 = 0;
    var_10728 = 4631952216750555136;
    var_10736 = 0;
    OP_PUSH5_C 4661219083229394371, 4637835747451249623, 4657622360792613519, 4660983721770352640, 4640741624742066258
    var_10744 = 4657592761939593789;
    var_10752 = 1;
    pri = EvCameraMove(var_10752, var_10744, var_10736, var_10728, var_10720, var_10712, var_10704, var_10696, var_10688, var_10680)
    var_10760 = 0;
    pri = fun_2790()
    var_10768 = 0;
    var_10776 = 3;
    var_10784 = 0;
    var_10792 = 101;
    var_10800 = -1;
    OP_PUSH2_C -4282427762954766151, 4588701099155483113
    var_10808 = 56;
    pri = fun_2248(var_10800, var_10792, var_10784, var_10776, var_10768, var_10760, var_10752)
    var_10816 = 1;
    var_10824 = 8;
    pri = fun_2390(var_10816)
    var_10832 = 0;
    pri = fun_2450()
    var_10840 = -812938253260952198;
    var_10848 = 8;
    pri = fun_0A10(var_10840)
    var_10864 = 35624;
    var_10872 = 1;
    var_10880 = 0;
    var_10888 = 1;
    var_10896 = -1;
    var_10904 = 0;
    var_10912 = 0;
    var_10920 = 0;
    var_10928 = 0;
    var_10936 = 0;
    var_10944 = 0;
    OP_PUSH5_C 4658095084821859533, 4647063904562708480, 4657745220221901210, 4658712350649692979, 4645132282535031603
    OP_PUSH4_C 4657933456612576461, 4659186240161264435, 4640375355428621517, 4657933456612576461
    var_10952 = 3;
    var_10960 = 168;
    pri = fun_1930(var_10952, var_10944, var_10936, var_10928, var_10920, var_10912, var_10904, var_10896, var_10888, var_10880, var_10872, var_10864, var_10856, var_10848, var_10840, var_10832, var_10824, var_10816, var_10808, var_10800, var_10792)
    var_80 = pri;
    var_10968 = 1;
    var_10976 = 4596373779694328218;
    var_10984 = -1;
    var_10992 = 4611686018427387904;
    var_11000 = var_80;
    var_11008 = -812938253260952198;
    var_11016 = 48;
    pri = fun_0910(var_11008, var_11000, var_10992, var_10984, var_10976, var_10968)
    var_11024 = 6;
    var_11032 = 8802641224559852288;
    var_11040 = 16;
    pri = fun_11D8(var_11032, var_11024)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_11048 = 3;
    var_11056 = 1;
    var_11064 = 32;
    pri = fun_28E0(var_11056, var_11048, var_11040, var_11032)
    var_11072 = 0;
    var_11080 = 4631952216750555136;
    var_11088 = 0;
    OP_PUSH5_C 4658382343229732291, 4648173179853739131, 4657524130423788012, 4658716572774343639, 4647974300190507008
    var_11096 = 4657223611905684275;
    var_11104 = 1;
    pri = EvCameraMove(var_11104, var_11096, var_11088, var_11080, var_11072, var_11064, var_11056, var_11048, var_11040, var_11032)
    var_11112 = 0;
    pri = fun_2790()
    var_11120 = 0;
    var_11128 = 4631952216750555136;
    var_11136 = 3;
    OP_PUSH5_C 4658267928049745920, 4648300899124421591, 4657391573301943337, 4658466521839954821, 4648182679634203116
    var_11144 = 4657213012613592515;
    var_11152 = 45;
    pri = EvCameraMove(var_11152, var_11144, var_11136, var_11128, var_11120, var_11112, var_11104, var_11096, var_11088, var_11080)
    var_11160 = 1;
    var_11168 = -1;
    var_11176 = -1;
    var_11184 = 3;
    var_11192 = 0;
    var_11200 = 19;
    var_11208 = 8802641224559852288;
    var_11216 = 56;
    pri = fun_2A00(var_11208, var_11200, var_11192, var_11184, var_11176, var_11168, var_11160)
    var_11224 = 3;
    var_11232 = 8;
    pri = fun_0060(var_11224)
    var_11240 = 1;
    var_11248 = -1;
    var_11256 = -1;
    var_11264 = 3;
    var_11272 = 0;
    var_11280 = 0;
    var_11288 = -3113441888070653316;
    var_11296 = 56;
    pri = fun_2A00(var_11288, var_11280, var_11272, var_11264, var_11256, var_11248, var_11240)
    var_11304 = 8802641224559852288;
    var_11312 = 8;
    pri = fun_0BE8(var_11304)
    var_11320 = -3113441888070653316;
    var_11328 = 8;
    pri = fun_0BE8(var_11320)
    var_11336 = 0;
    var_11344 = 0;
    var_11352 = 0;
    var_11360 = 180;
    pri = float(var_11360)
    var_11368 = pri;
    var_11376 = -3113441888070653316;
    var_11384 = 40;
    pri = fun_0968(var_11376, var_11368, var_11360, var_11352, var_11344)
    var_11392 = -812938253260952198;
    var_11400 = 8;
    pri = fun_0A10(var_11392)
    var_11408 = 0;
    var_11416 = 0;
    var_11424 = 0;
    var_11432 = 180;
    pri = float(var_11432)
    var_11440 = pri;
    var_11448 = 8802641224559852288;
    var_11456 = 40;
    pri = fun_0968(var_11448, var_11440, var_11432, var_11424, var_11416)
    var_11464 = 1;
    var_11472 = 0;
    var_11480 = 34216;
    var_11488 = 8;
    var_11496 = 32;
    pri = fun_02E0(var_11488, var_11480, var_11472, var_11464)
    var_11504 = 0;
    pri = fun_0350()
    var_11512 = 35672;
    pri = SoundPostEvent(var_11512)
    var_11520 = 35832;
    pri = SoundPostEvent(var_11520)
    var_11528 = 8802641224559852288;
    var_11536 = 8;
    pri = fun_1330(var_11528)
    var_11544 = -3113441888070653316;
    var_11552 = 8;
    pri = fun_0A10(var_11544)
    var_11560 = 8802641224559852288;
    var_11568 = 8;
    pri = fun_0A10(var_11560)
    var_11576 = 0;
    var_11584 = 4588701099155483113;
    var_11592 = 16;
    pri = fun_0820(var_11584, var_11576)
    var_11600 = 0;
    var_11608 = -4535650465247009105;
    var_11616 = 16;
    pri = fun_0820(var_11608, var_11600)
    var_11624 = 0;
    var_11632 = 7198756580005256125;
    var_11640 = 16;
    pri = fun_0820(var_11632, var_11624)
    var_11648 = 0;
    var_11656 = -3565078316412726206;
    var_11664 = 16;
    pri = fun_0820(var_11656, var_11648)
    var_11672 = 0;
    var_11680 = 3942632517730091317;
    var_11688 = 16;
    pri = fun_0820(var_11680, var_11672)
    var_11696 = 0;
    var_11704 = 7198753281470371492;
    var_11712 = 16;
    pri = fun_0820(var_11704, var_11696)
    var_11720 = 0;
    var_11728 = 4637153820979408116;
    var_11736 = 16;
    pri = fun_0820(var_11728, var_11720)
    var_11744 = 0;
    var_11752 = 688830528901060397;
    var_11760 = 16;
    pri = fun_0820(var_11752, var_11744)
    var_11768 = 0;
    var_11776 = 8018849499481630752;
    var_11784 = 16;
    pri = fun_0820(var_11776, var_11768)
    var_11792 = 0;
    var_11800 = 8018861594109541073;
    var_11808 = 16;
    pri = fun_0820(var_11800, var_11792)
    var_11816 = 0;
    var_11824 = -4231032927162974978;
    var_11832 = 16;
    pri = fun_0820(var_11824, var_11816)
    var_11840 = 0;
    var_11848 = 4477399624824395582;
    var_11856 = 16;
    pri = fun_0820(var_11848, var_11840)
    var_11864 = 0;
    var_11872 = -3748282655303313513;
    var_11880 = 16;
    pri = fun_0820(var_11872, var_11864)
    var_11888 = 0;
    var_11896 = 2710746293628157769;
    var_11904 = 16;
    pri = fun_0820(var_11896, var_11888)
    var_11912 = 0;
    var_11920 = -5319540891068052559;
    var_11928 = 16;
    pri = fun_0820(var_11920, var_11912)
    var_11936 = 0;
    var_11944 = -5771320145991997854;
    var_11952 = 16;
    pri = fun_0820(var_11944, var_11936)
    var_11960 = 0;
    var_11968 = 6707881205123203646;
    var_11976 = 16;
    pri = fun_0820(var_11968, var_11960)
    var_11984 = 0;
    var_11992 = 6707871309518549747;
    var_12000 = 16;
    pri = fun_0820(var_11992, var_11984)
    var_12008 = 0;
    pri = fun_13B48()
    var_12016 = 0;
    var_12024 = 0;
    var_12032 = 0;
    var_12040 = 0;
    var_12048 = 0;
    var_12056 = 10253;
    pri = float(var_12056)
    var_12064 = pri;
    var_12072 = 3313;
    pri = float(var_12072)
    var_12080 = pri;
    OP_PUSH2_C -935846128285746696, 5475751305874598021
    var_12088 = 72;
    pri = fun_0408(var_12080, var_12072, var_12064, var_12056, var_12048, var_12040, var_12032, var_12024, var_12016)
    var_12096 = 0;
    pri = fun_13F90()
    pri = 0;
    return pri;
}
// fun_13398
fun_13398() {
    var_8 = 6660951804926948019;
    pri = VanishFlagSet(var_8)
    var_16 = 118753704079410460;
    pri = VanishFlagSet(var_16)
    var_24 = -2780782667399596389;
    pri = VanishFlagSet(var_24)
    var_32 = -66433073690856353;
    pri = VanishFlagSet(var_32)
    var_40 = 8287683314310166736;
    pri = VanishFlagSet(var_40)
    var_48 = 8053569876173910393;
    pri = VanishFlagSet(var_48)
    var_56 = 3444055432580894141;
    pri = VanishFlagSet(var_56)
    var_64 = 3444054333069265930;
    pri = VanishFlagSet(var_64)
    var_72 = 6862435835977116128;
    pri = VanishFlagSet(var_72)
    var_80 = 6862436935488744339;
    pri = VanishFlagSet(var_80)
    var_88 = 6862438035000372550;
    pri = VanishFlagSet(var_88)
    var_96 = 6862439134512000761;
    pri = VanishFlagSet(var_96)
    var_104 = 6862449030116654660;
    pri = VanishFlagSet(var_104)
    var_112 = -8861403721397965071;
    pri = VanishFlagSet(var_112)
    var_120 = 1630852289642056826;
    pri = VanishFlagReset(var_120)
    var_128 = -5092834258003007029;
    pri = VanishFlagReset(var_128)
    var_136 = 5125789878332258075;
    pri = VanishFlagReset(var_136)
    var_144 = -4322017226219254454;
    pri = VanishFlagReset(var_144)
    var_152 = 1630851190130428615;
    pri = VanishFlagReset(var_152)
    var_160 = -4026809036642052317;
    pri = VanishFlagReset(var_160)
    var_168 = 5125795375890399130;
    pri = VanishFlagReset(var_168)
    var_176 = 766121820021451030;
    pri = VanishFlagReset(var_176)
    var_184 = 8106626419537127196;
    pri = VanishFlagReset(var_184)
    var_192 = -2818721618577334593;
    pri = VanishFlagReset(var_192)
    var_200 = 5118005038650923130;
    pri = VanishFlagReset(var_200)
    var_208 = 8240744505783900195;
    pri = VanishFlagReset(var_208)
    var_216 = 3444053233557637719;
    pri = VanishFlagReset(var_216)
    var_224 = 3444052134046009508;
    pri = VanishFlagReset(var_224)
    var_232 = 7910991384959417448;
    pri = VanishFlagReset(var_232)
    var_240 = 4588701099155483113;
    pri = VanishFlagReset(var_240)
    var_248 = -812938253260952198;
    pri = VanishFlagReset(var_248)
    var_256 = -3113441888070653316;
    pri = VanishFlagReset(var_256)
    var_264 = 6707881205123203646;
    pri = VanishFlagReset(var_264)
    var_272 = 6707871309518549747;
    pri = VanishFlagReset(var_272)
    var_280 = 5595895409926974626;
    pri = VanishFlagReset(var_280)
    var_288 = 5595896509438602837;
    pri = VanishFlagReset(var_288)
    var_296 = 5595893210903718204;
    pri = VanishFlagReset(var_296)
    var_304 = 5595894310415346415;
    pri = VanishFlagReset(var_304)
    var_312 = -4535650465247009105;
    pri = VanishFlagReset(var_312)
    var_320 = 7198756580005256125;
    pri = VanishFlagReset(var_320)
    var_328 = 8018849499481630752;
    pri = VanishFlagReset(var_328)
    var_336 = 8018861594109541073;
    pri = VanishFlagReset(var_336)
    var_344 = 688830528901060397;
    pri = VanishFlagReset(var_344)
    var_352 = 4637153820979408116;
    pri = VanishFlagReset(var_352)
    var_360 = 4477399624824395582;
    pri = VanishFlagReset(var_360)
    var_368 = -3748282655303313513;
    pri = VanishFlagReset(var_368)
    var_376 = 7198754380981999703;
    pri = VanishFlagSet(var_376)
    var_384 = 4142177433269184897;
    pri = VanishFlagSet(var_384)
    pri = 0;
    return pri;
}
// fun_13B30
fun_13B30() {
    pri = 0;
    return pri;
}
// fun_13B48
fun_13B48() {
    var_8 = -6966129411289188542;
    pri = FlagReset(var_8)
    var_16 = 5595895409926974626;
    pri = VanishFlagSet(var_16)
    var_24 = 5595896509438602837;
    pri = VanishFlagSet(var_24)
    var_32 = 5595893210903718204;
    pri = VanishFlagSet(var_32)
    var_40 = 5595894310415346415;
    pri = VanishFlagSet(var_40)
    var_48 = -4535650465247009105;
    pri = VanishFlagSet(var_48)
    var_56 = 7198756580005256125;
    pri = VanishFlagSet(var_56)
    var_64 = 8018849499481630752;
    pri = VanishFlagSet(var_64)
    var_72 = 8018861594109541073;
    pri = VanishFlagSet(var_72)
    var_80 = 688830528901060397;
    pri = VanishFlagSet(var_80)
    var_88 = 4637153820979408116;
    pri = VanishFlagSet(var_88)
    var_96 = 4477399624824395582;
    pri = VanishFlagSet(var_96)
    var_104 = -3748282655303313513;
    pri = VanishFlagSet(var_104)
    var_112 = 4588701099155483113;
    pri = VanishFlagSet(var_112)
    var_120 = -812938253260952198;
    pri = VanishFlagSet(var_120)
    var_128 = -3113441888070653316;
    pri = VanishFlagSet(var_128)
    var_136 = 6707881205123203646;
    pri = VanishFlagSet(var_136)
    var_144 = 6707871309518549747;
    pri = VanishFlagSet(var_144)
    var_152 = 7198754380981999703;
    pri = VanishFlagReset(var_152)
    var_160 = 4142177433269184897;
    pri = VanishFlagReset(var_160)
    var_168 = 1590;
    var_176 = 8;
    pri = fun_9710(var_168)
    pri = 0;
    return pri;
}
// fun_13EA0
fun_13EA0() {
    var_8 = -1;
    var_16 = 8;
    pri = fun_04A8(var_8)
    var_24 = -1;
    var_32 = 8;
    pri = fun_04A8(var_24)
    var_40 = -1;
    var_48 = 8;
    pri = fun_04A8(var_40)
    pri = 0;
    return pri;
}
// fun_13F18
fun_13F18() {
    var_8 = -1;
    var_16 = 8;
    pri = fun_0628(var_8)
    var_24 = -1;
    var_32 = 8;
    pri = fun_0628(var_24)
    var_40 = -1;
    var_48 = 8;
    pri = fun_0628(var_40)
    pri = 0;
    return pri;
}
// fun_13F90
fun_13F90() {
    pri = 0;
    return pri;
}
// fun_13FA8
fun_13FA8() {
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    pri = var_8;
    alt = 1586;
    OP_JSGRTR lab_14088
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = -4282424464419881518;
    var_104 = 80;
    pri = fun_9058(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_14238
// lab_14088
    pri = var_8;
    alt = 1587;
    OP_JSGRTR lab_14128
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4282423364908253307;
    var_88 = 80;
    pri = fun_9058(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_14238
// lab_14128
    pri = var_8;
    alt = 1588;
    OP_JSGRTR lab_141C8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4282422265396625096;
    var_88 = 80;
    pri = fun_9058(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_14238
// lab_141C8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4282421165884996885;
    var_88 = 80;
    pri = fun_9058(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_14238
    pri = 0;
    return pri;
}
// fun_14250
fun_14250() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_93F8(var_40, var_32, var_24, var_16, var_8)
    var_64 = 6910712898869243;
    pri = WorkGet(var_64)
    var_8 = pri;
    pri = var_8;
    alt = 1586;
    OP_JSGRTR lab_14318
    var_72 = 0;
    pri = fun_A150()
    OP_JUMP lab_14390
// lab_14318
    pri = var_8;
    alt = 1587;
    OP_JSGRTR lab_14360
    var_8 = 0;
    pri = fun_AF40()
    OP_JUMP lab_14390
// lab_14360
    var_8 = 0;
    pri = fun_B710()
    var_16 = 0;
    pri = fun_C5B0()
// lab_14390
    pri = 0;
    return pri;
}
// fun_143A8
fun_143A8() {
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    pri = var_8;
    alt = 1586;
    OP_JSGRTR lab_14488
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = -4718792119704734384;
    var_104 = 80;
    pri = fun_9058(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_144F8
// lab_14488
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4718788821169849751;
    var_88 = 80;
    pri = fun_9058(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_144F8
    pri = 0;
    return pri;
}
