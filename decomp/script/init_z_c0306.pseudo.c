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
            pri = fun_0208()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1600;
    OP_JSLESS lab_0188
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 1660;
    OP_JSGRTR lab_0188
    pri = 1;
    OP_JUMP lab_0190
// lab_0188
    pri = 0;
// lab_0190
    OP_JZER lab_01E0
    var_8 = 32;
    pri = SoundPostEvent(var_8)
    var_16 = 224;
    pri = SoundPostEvent(var_16)
// lab_01E0
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0208
fun_0208() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -935846128285746696
    OP_JZER lab_02A8
    var_8 = -1713212955377147003;
    pri = FlagGet(var_8)
    OP_JNZ lab_02A8
    var_16 = -1713212955377147003;
    pri = FlagSet(var_16)
// lab_02A8
    pri = 0;
    return pri;
}
