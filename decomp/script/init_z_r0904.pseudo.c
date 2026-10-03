// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetTentColor_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0078
fun_0078() {
    pri = g_mode;
    switch (pri) {
// switch_0110
        case default:
        {
// switch_0110_case_default
            pri = CommandNOP()
            OP_JUMP lab_0148
// lab_0148
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0110_case_0x0
            var_8 = 0;
            pri = fun_0158()
            OP_JUMP lab_0148
        }
        case 0x1:
        {
// switch_0110_case_0x1
            var_8 = 0;
            pri = fun_0250()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    var_8 = 7325900110250916831;
    pri = FlagReset(var_8)
    var_16 = 7325899010739288620;
    pri = FlagReset(var_16)
    var_24 = 7325902309274173253;
    pri = FlagReset(var_24)
    var_32 = 7325901209762545042;
    pri = FlagReset(var_32)
    var_40 = 7058349710611773512;
    pri = FlagReset(var_40)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0250
fun_0250() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 5475804298118719459
    OP_JZER lab_02F0
    var_8 = -2761798657609630838;
    pri = FlagGet(var_8)
    OP_JNZ lab_02F0
    var_16 = -2761798657609630838;
    pri = FlagSet(var_16)
// lab_02F0
    var_8 = 7183952171610968249;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0358
    var_24 = 9;
    var_32 = 7183952171610968249;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_0358
    pri = 0;
    return pri;
}
