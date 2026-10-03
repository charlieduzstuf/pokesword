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
// fun_01A8
fun_01A8() {
    OP_JUMP lab_01C0
// lab_01C0
    pri = FadeWait_()
    OP_JZER lab_01F8
    pri = 0;
    return pri;
// lab_01F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_01C0
    pri = 0;
    return pri;
}
// fun_0238
fun_0238() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0260
fun_0260() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_02E0
    pri = 0;
    return pri;
// lab_02E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0320
// lab_0320
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0510(var_8)
    OP_JNZ lab_03A8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0398
    pri = 0;
    return pri;
// lab_03A8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_03F0
    pri = 0;
    return pri;
// lab_03F0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0450
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0498(var_8)
    pri = 0;
    return pri;
// lab_0450
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0320
    pri = 0;
    return pri;
// lab_0398
    OP_JUMP lab_03F0
}
// fun_0498
fun_0498() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0510
fun_0510() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0540
fun_0540() {
    OP_JUMP lab_0558
// lab_0558
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_05E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_05D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0298(var_8)
    pri = 0;
    return pri;
// lab_05E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0678
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0668
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0298(var_8)
    pri = 0;
    return pri;
// lab_0678
    pri = 0;
    return pri;
// lab_0668
    OP_JUMP lab_0688
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0558
    pri = 0;
    return pri;
// lab_05D8
    OP_JUMP lab_0688
}
// fun_06C8
fun_06C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0298(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0540(var_40)
    pri = 0;
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0788
fun_0788() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_08A8
// lab_08A8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0A28
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0A18
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0968
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0968
    pri = 0;
    OP_JUMP lab_0970
// lab_0A28
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_08A0
// lab_08A0
    OP_INC_P_S -936
// lab_0968
    pri = 1;
// lab_0970
    OP_JZER lab_09E8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_09E0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_09E8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_09E0
}
// fun_0A48
fun_0A48() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0AE0
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0138(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_01A8()
    var_56 = 0;
    pri = fun_0788()
// lab_0AE0
    pri = arg_4;
    OP_JZER lab_0B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_07B0(var_8)
// lab_0B18
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0B70
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0B70
    pri = 0;
    OP_JUMP lab_0B78
// lab_0B70
    pri = 1;
// lab_0B78
    OP_JZER lab_0C40
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_0C40
    var_16 = 0;
    pri = fun_0238()
    OP_JZER lab_0C18
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_06C8(var_32, var_24)
    OP_JUMP lab_0C40
// lab_0C40
    pri = arg_2;
    OP_JZER lab_0D18
    var_8 = 0;
    pri = fun_0238()
    OP_JZER lab_0CE8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_04D0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0260(var_40)
    OP_JUMP lab_0D18
// lab_0D18
    pri = arg_3;
    OP_JZER lab_0D50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0750(var_8)
// lab_0D50
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_04D0(var_16, var_8)
// lab_0C18
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_06C8(var_16, var_8)
}
// fun_0D60
fun_0D60() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0820(var_24)
    pri = 0;
    return pri;
}
// fun_0DC8
fun_0DC8() {
    pri = g_mode;
    switch (pri) {
// switch_0E88
        case default:
        {
// switch_0E88_case_default
            pri = CommandNOP()
            OP_JUMP lab_0ED0
// lab_0ED0
            pri = 0;
            return pri;
        }
        case 0xe71015274841d723:
        {
// switch_0E88_case_0xe71015274841d723
            var_8 = 0;
            pri = fun_1208()
            OP_JUMP lab_0ED0
        }
        case 0x0:
        {
// switch_0E88_case_0x0
            var_8 = 0;
            pri = fun_0EE0()
            OP_JUMP lab_0ED0
        }
        case 0x4a5ff2ad265189f:
        {
// switch_0E88_case_0x4a5ff2ad265189f
            var_8 = 0;
            pri = fun_1100()
            OP_JUMP lab_0ED0
        }
    }
}
// fun_0EE0
fun_0EE0() {
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0138(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_01A8()
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0A48(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = 1000;
    var_16 = 8;
    pri = fun_07E8(var_8)
    var_24 = 3;
    var_32 = 60;
    pri = EvCameraEnd(var_32, var_24)
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
    var_8 = 1890;
    var_16 = 8;
    pri = fun_0D60(var_8)
    var_24 = -2039142712897586641;
    pri = VanishFlagReset(var_24)
    var_32 = 1514373463937579588;
    pri = VanishFlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = 0;
    pri = fun_0EF8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_0F60()
    var_24 = 0;
    pri = fun_0FB8()
    var_32 = 0;
    pri = fun_0FD0()
    var_40 = 0;
    pri = fun_0FE8()
    var_48 = 0;
    pri = fun_1048()
    var_56 = 0;
    pri = fun_1060()
    var_64 = 0;
    pri = fun_10E8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = 0;
    pri = fun_0FB8()
    var_16 = 0;
    pri = fun_1060()
    pri = 0;
    return pri;
}
