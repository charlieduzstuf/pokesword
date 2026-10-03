// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00A0
        case default:
        {
// switch_00A0_case_default
            pri = CommandNOP()
            OP_JUMP lab_00D8
// lab_00D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_00A0_case_0x0
            var_8 = 0;
            pri = fun_00E8()
            OP_JUMP lab_00D8
        }
        case 0x1:
        {
// switch_00A0_case_0x1
            var_8 = 0;
            pri = fun_0198()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1610
    OP_JZER lab_0170
    var_16 = 32;
    pri = SoundPostEvent(var_16)
    var_24 = 184;
    pri = SoundPostEvent(var_24)
// lab_0170
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
    pri = 0;
    return pri;
}
