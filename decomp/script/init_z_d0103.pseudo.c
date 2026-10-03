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
            pri = fun_0140()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = -1002754350902732205;
    pri = FlagReset(var_8)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0140
fun_0140() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -8113292702377454840
    OP_JZER lab_01E0
    var_8 = 932590893092010037;
    pri = FlagGet(var_8)
    OP_JNZ lab_01E0
    var_16 = 932590893092010037;
    pri = FlagSet(var_16)
// lab_01E0
    pri = 0;
    return pri;
}
