// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0068
fun_0068() {
    pri = g_mode;
    switch (pri) {
// switch_0100
        case default:
        {
// switch_0100_case_default
            pri = CommandNOP()
            OP_JUMP lab_0138
// lab_0138
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0100_case_0x0
            var_8 = 0;
            pri = fun_0148()
            OP_JUMP lab_0138
        }
        case 0x1:
        {
// switch_0100_case_0x1
            var_8 = 0;
            pri = fun_0178()
            OP_JUMP lab_0138
        }
    }
}
// fun_0148
fun_0148() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0178
fun_0178() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -8113291602865826629
    OP_JZER lab_0218
    var_8 = 932589793580381826;
    pri = FlagGet(var_8)
    OP_JNZ lab_0218
    var_16 = 932589793580381826;
    pri = FlagSet(var_16)
// lab_0218
    var_8 = -8930991717109470278;
    var_16 = 8;
    pri = fun_0038(var_8)
    OP_JZER lab_02A8
    var_24 = 6910712898869243;
    pri = WorkGet(var_24)
    alt = 3030;
    OP_JEQ lab_02A8
    pri = 1;
    OP_JUMP lab_02B0
// lab_02A8
    pri = 0;
// lab_02B0
    OP_JZER lab_02E8
    var_8 = -8930991717109470278;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_02E8
    pri = 0;
    return pri;
}
