// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00C8
        case default:
        {
// switch_00C8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0110
// lab_0110
            pri = 0;
            return pri;
        }
        case 0xae096165d308c3f2:
        {
// switch_00C8_case_0xae096165d308c3f2
            var_8 = 0;
            pri = fun_01A0()
            OP_JUMP lab_0110
        }
        case 0x0:
        {
// switch_00C8_case_0x0
            var_8 = 0;
            pri = fun_0120()
            OP_JUMP lab_0110
        }
        case 0x6fe1ba2f520a6d45:
        {
// switch_00C8_case_0x6fe1ba2f520a6d45
            var_8 = 0;
            pri = fun_0138()
            OP_JUMP lab_0110
        }
    }
}
// fun_0120
fun_0120() {
    pri = 0;
    return pri;
}
// fun_0138
fun_0138() {
    var_8 = 32;
    pri = SoundPostEvent(var_8)
    var_16 = 999;
    var_24 = 5527541426142670619;
    pri = WorkSet(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_01A0
fun_01A0() {
    var_8 = 2264360507842583958;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
