// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00F0
        case default:
        {
// switch_00F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0148
// lab_0148
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_00F0_case_0x0
            var_8 = 0;
            pri = fun_0158()
            OP_JUMP lab_0148
        }
        case 0x1:
        {
// switch_00F0_case_0x1
            var_8 = 0;
            pri = fun_0188()
            OP_JUMP lab_0148
        }
        case 0x2:
        {
// switch_00F0_case_0x2
            var_8 = 0;
            pri = fun_0238()
            OP_JUMP lab_0148
        }
        case 0x3:
        {
// switch_00F0_case_0x3
            var_8 = 0;
            pri = fun_0268()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0188
fun_0188() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -2245354581539031897
    OP_JZER lab_0228
    var_8 = -434244537102995338;
    pri = FlagGet(var_8)
    OP_JNZ lab_0228
    var_16 = -434244537102995338;
    pri = FlagSet(var_16)
// lab_0228
    pri = 0;
    return pri;
}
// fun_0238
fun_0238() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0268
fun_0268() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
