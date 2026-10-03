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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0218
fun_0218() {
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
// fun_0288
fun_0288() {
    OP_JUMP lab_02A0
// lab_02A0
    pri = FadeWait_()
    OP_JZER lab_02D8
    pri = 0;
    return pri;
// lab_02D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02A0
    pri = 0;
    return pri;
}
// fun_0318
fun_0318() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0378
fun_0378() {
    pri = arg_1;
    OP_JZER lab_03E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0218(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0288()
// lab_03E8
    pri = 80;
    OP_ADDR_ALT -1200
    OP_MOVS 1200
    OP_CONST_S -1208, 50
    OP_ZERO_P_S -1216
    OP_CONST_S -1224, 5
    var_1232 = -9019446742694110882;
    pri = FlagGet(var_1232)
    OP_JZER lab_04C8
    pri = var_1208;
    var_1216 = pri;
    OP_JUMP lab_04E0
// lab_04C8
    OP_CONST_S -1216, 22
// lab_04E0
    OP_ZERO_P_S -1232
    OP_ZERO_P_S -1240
    OP_ZERO_P_S -1232
    OP_JUMP lab_0520
// lab_0520
    OP_LOAD_S_BOTH -1232, -1208
    OP_JSGEQ lab_0628
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagSet(var_8)
    pri = arg_0;
    OP_JZER lab_0618
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_0348(var_16)
// lab_0628
    OP_ZERO_P_S -1232
    OP_JUMP lab_0648
// lab_0648
    OP_LOAD_S_BOTH -1232, -1224
    OP_JSGEQ lab_08F8
    OP_ZERO_P_S -1240
    OP_JUMP lab_0690
// lab_08F8
    pri = arg_1;
    OP_JZER lab_0970
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1280;
    var_32 = 8;
    var_40 = 16;
    pri = fun_01B8(var_32, var_24)
    var_48 = 0;
    pri = fun_0288()
// lab_0970
    pri = 0;
    return pri;
// lab_0690
    pri = var_1240;
    alt = 100;
    OP_JSGEQ lab_08E8
    var_16 = 0;
    var_24 = var_1216;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_1248 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_40 = pri;
    pri = VanishFlagGet(var_40)
    OP_JZER lab_07D0
    pri = arg_2;
    var_48 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JEQ lab_07D0
    pri = 1;
    OP_JUMP lab_07D8
// lab_08E8
    OP_JUMP lab_0640
// lab_0640
    OP_INC_P_S -1232
// lab_07D0
    pri = 0;
// lab_07D8
    OP_JZER lab_08D0
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagReset(var_8)
    pri = arg_0;
    OP_JZER lab_08B8
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_0318(var_16)
// lab_08D0
    OP_JUMP lab_0688
// lab_0688
    OP_INC_P_S -1240
// lab_08B8
    OP_JUMP lab_08E8
// lab_0618
    OP_JUMP lab_0518
// lab_0518
    OP_INC_P_S -1232
}
// fun_0988
fun_0988() {
    pri = 1328;
    OP_ADDR_ALT -912
    OP_MOVS 912
    pri = 2240;
    OP_ADDR_ALT -1056
    OP_MOVS 144
    OP_CONST_S -1064, 114
    OP_CONST_S -1072, 18
    OP_ZERO_P_S -1080
    OP_ZERO_P_S -1080
    OP_JUMP lab_0A70
// lab_0A70
    OP_LOAD_S_BOTH -1080, -1064
    OP_JSGEQ lab_0AE0
    OP_ADDR_P_ALT -912
    pri = var_1080;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = FlagReset(var_8)
    OP_JUMP lab_0A68
// lab_0AE0
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0B70
    var_8 = -1251043979743435512;
    pri = FlagReset(var_8)
    var_16 = 9084871044164192133;
    pri = FlagReset(var_16)
    OP_JUMP lab_0BC0
// lab_0B70
    var_8 = 4639331620742658412;
    pri = FlagReset(var_8)
    var_16 = 4284010857221015048;
    pri = FlagReset(var_16)
// lab_0BC0
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_0C88
    OP_ZERO_P_S -1080
    OP_JUMP lab_0C18
// lab_0C88
    pri = 0;
    return pri;
// lab_0C18
    OP_LOAD_S_BOTH -1080, -1072
    OP_JSGEQ lab_0C88
    OP_ADDR_P_ALT -1056
    pri = var_1080;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = FlagReset(var_8)
    OP_JUMP lab_0C10
// lab_0C10
    OP_INC_P_S -1080
// lab_0A68
    OP_INC_P_S -1080
}
// fun_0CA0
fun_0CA0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0D60
    var_8 = 8106079978163211080;
    pri = FlagReset(var_8)
    var_16 = 3659812871750077692;
    pri = FlagReset(var_16)
    var_24 = 2113986344944074123;
    pri = FlagReset(var_24)
    OP_JUMP lab_0DD8
// lab_0D60
    var_8 = -8622062552344276047;
    pri = FlagReset(var_8)
    var_16 = 3177992585167662909;
    pri = FlagReset(var_16)
    var_24 = -4857160162063413694;
    pri = FlagReset(var_24)
// lab_0DD8
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = -317401305166797496;
    pri = FlagGet(var_8)
    OP_JNZ lab_0EC8
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    pri = fun_0378(var_32, var_24, var_16)
    pri = CommandNOP()
    var_48 = 0;
    pri = fun_0988()
    var_56 = 0;
    pri = fun_0CA0()
    var_64 = -317401305166797496;
    pri = FlagSet(var_64)
// lab_0EC8
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    pri = g_mode;
    switch (pri) {
// switch_0F70
        case default:
        {
// switch_0F70_case_default
            pri = CommandNOP()
            OP_JUMP lab_0FA8
// lab_0FA8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0F70_case_0x0
            var_8 = 0;
            pri = fun_0FB8()
            OP_JUMP lab_0FA8
        }
        case 0x1:
        {
// switch_0F70_case_0x1
            var_8 = 0;
            pri = fun_1000()
            OP_JUMP lab_0FA8
        }
    }
}
// fun_0FB8
fun_0FB8() {
    var_8 = 0;
    pri = fun_0DE8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1000
fun_1000() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 8606915937035968121
    OP_JZER lab_10A0
    var_8 = -712073235512299890;
    pri = FlagGet(var_8)
    OP_JNZ lab_10A0
    var_16 = -712073235512299890;
    pri = FlagSet(var_16)
// lab_10A0
    pri = 0;
    return pri;
}
