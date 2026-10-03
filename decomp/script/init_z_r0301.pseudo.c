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
            pri = fun_0240()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    var_8 = -2217935711652527108;
    pri = FlagReset(var_8)
    var_16 = -8196952725690005508;
    pri = FlagReset(var_16)
    var_24 = 6910712898869243;
    pri = WorkGet(var_24)
    alt = 530;
    OP_JSLEQ lab_0218
    var_32 = 8486605092696844941;
    pri = FlagReset(var_32)
// lab_0218
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0240
fun_0240() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 1822717596287504666
    OP_JZER lab_02E0
    var_8 = -9033959440552083005;
    pri = FlagGet(var_8)
    OP_JNZ lab_02E0
    var_16 = -9033959440552083005;
    pri = FlagSet(var_16)
// lab_02E0
    var_8 = 4583425347612262718;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0348
    var_24 = 17;
    var_32 = 4583425347612262718;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_0348
    pri = 0;
    return pri;
}
