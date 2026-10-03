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
            pri = fun_0178()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    pri = CommandNOP()
    var_8 = -6724916590583491831;
    pri = FlagGet(var_8)
    OP_JZER lab_0168
    var_16 = -8337701566030680206;
    pri = ReserveScript(var_16)
// lab_0168
    pri = 0;
    return pri;
}
// fun_0178
fun_0178() {
    pri = 0;
    return pri;
}
