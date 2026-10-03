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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
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
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0300
fun_0300() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0378
fun_0378() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_03C0
    pri = 0;
    return pri;
// lab_03C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0400
// lab_0400
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05F0(var_8)
    OP_JNZ lab_0488
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0478
    pri = 0;
    return pri;
// lab_0488
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_04D0
    pri = 0;
    return pri;
// lab_04D0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0530
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0578(var_8)
    pri = 0;
    return pri;
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0400
    pri = 0;
    return pri;
// lab_0478
    OP_JUMP lab_04D0
}
// fun_0578
fun_0578() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0620
fun_0620() {
    OP_JUMP lab_0638
// lab_0638
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_06C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_06B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0378(var_8)
    pri = 0;
    return pri;
// lab_06C8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0758
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0748
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0378(var_8)
    pri = 0;
    return pri;
// lab_0758
    pri = 0;
    return pri;
// lab_0748
    OP_JUMP lab_0768
// lab_0768
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0638
    pri = 0;
    return pri;
// lab_06B8
    OP_JUMP lab_0768
}
// fun_07A8
fun_07A8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0378(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0620(var_40)
    pri = 0;
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0868
fun_0868() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0988
// lab_0988
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0B08
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0AF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0A48
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0A48
    pri = 0;
    OP_JUMP lab_0A50
// lab_0B08
    pri = 0;
    return pri;
// lab_0AF8
    OP_JUMP lab_0980
// lab_0980
    OP_INC_P_S -936
// lab_0A48
    pri = 1;
// lab_0A50
    OP_JZER lab_0AC8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0AC0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0AC8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0AC0
}
// fun_0B28
fun_0B28() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0BC0
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0868()
// lab_0BC0
    pri = arg_4;
    OP_JZER lab_0BF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0890(var_8)
// lab_0BF8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0C50
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0C50
    pri = 0;
    OP_JUMP lab_0C58
// lab_0C50
    pri = 1;
// lab_0C58
    OP_JZER lab_0D20
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_0D20
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_0CF8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_07A8(var_32, var_24)
    OP_JUMP lab_0D20
// lab_0D20
    pri = arg_2;
    OP_JZER lab_0DF8
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_0DC8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_05B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0300(var_40)
    OP_JUMP lab_0DF8
// lab_0DF8
    pri = arg_3;
    OP_JZER lab_0E30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0830(var_8)
// lab_0E30
    pri = 0;
    return pri;
// lab_0DC8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_05B0(var_16, var_8)
// lab_0CF8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
}
// fun_0E40
fun_0E40() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0900(var_24)
    pri = 0;
    return pri;
}
// fun_0EA8
fun_0EA8() {
    pri = g_mode;
    switch (pri) {
// switch_0F68
        case default:
        {
// switch_0F68_case_default
            pri = CommandNOP()
            OP_JUMP lab_0FB0
// lab_0FB0
            pri = 0;
            return pri;
        }
        case 0xa6402022105f3706:
        {
// switch_0F68_case_0xa6402022105f3706
            var_8 = 0;
            pri = fun_1338()
            OP_JUMP lab_0FB0
        }
        case 0x0:
        {
// switch_0F68_case_0x0
            var_8 = 0;
            pri = fun_0FC0()
            OP_JUMP lab_0FB0
        }
        case 0x4401861e5f86a57a:
        {
// switch_0F68_case_0x4401861e5f86a57a
            var_8 = 0;
            pri = fun_1428()
            OP_JUMP lab_0FB0
        }
    }
}
// fun_0FC0
fun_0FC0() {
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0B28(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
    pri = 0;
    return pri;
}
// fun_1048
fun_1048() {
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 3;
    var_32 = 1000;
    var_40 = 1171483871548512351;
    var_48 = 24;
    pri = fun_0338(var_40, var_32, var_24)
    pri = IsMovieSkipEnable()
    OP_JZER lab_10F8
    OP_JUMP lab_1118
// lab_10F8
    var_8 = 1080;
    var_16 = 8;
    pri = fun_08C8(var_8)
// lab_1118
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_11B8
    var_8 = 1;
    var_16 = 90;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_02C0(var_32, var_24, var_16)
// lab_11B8
    var_8 = 2;
    var_16 = 1240;
    var_24 = 1171483871548512351;
    var_32 = 24;
    pri = fun_0338(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = 640;
    var_16 = 8;
    pri = fun_0E40(var_8)
    var_24 = 6824651908674154928;
    pri = VanishFlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    OP_PUSH2_C 1003091793780467894, 7257424260567799177
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = FieldCameraClearDelay()
    var_24 = 1320;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_0FD8()
    var_16 = 0;
    pri = fun_1030()
    var_24 = 0;
    pri = fun_1048()
    var_32 = 0;
    pri = fun_1060()
    var_40 = 0;
    pri = fun_1200()
    var_48 = 0;
    pri = fun_1218()
    var_56 = 0;
    pri = fun_1278()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = 0;
    pri = fun_1030()
    var_16 = 0;
    pri = fun_1218()
    pri = 0;
    return pri;
}
