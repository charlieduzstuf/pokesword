// fun_0008
fun_0008() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0048
fun_0048() {
    pri = g_mode;
    switch (pri) {
// switch_0108
        case default:
        {
// switch_0108_case_default
            pri = CommandNOP()
            OP_JUMP lab_0150
// lab_0150
            pri = 0;
            return pri;
        }
        case 0x80bf863a5f1a0517:
        {
// switch_0108_case_0x80bf863a5f1a0517
            var_8 = 0;
            pri = fun_0178()
            OP_JUMP lab_0150
        }
        case 0x0:
        {
// switch_0108_case_0x0
            var_8 = 0;
            pri = fun_0160()
            OP_JUMP lab_0150
        }
        case 0x19b5da6acf47be22:
        {
// switch_0108_case_0x19b5da6acf47be22
            var_8 = 0;
            pri = fun_0190()
            OP_JUMP lab_0150
        }
    }
}
// fun_0160
fun_0160() {
    pri = 0;
    return pri;
}
// fun_0178
fun_0178() {
    pri = 0;
    return pri;
}
// fun_0190
fun_0190() {
    var_8 = 1;
    pri = Azukariya_IsEggExist_(var_8)
    OP_JZER lab_0230
    var_16 = 1;
    var_24 = 32;
    var_32 = -8753057709848650353;
    var_40 = 24;
    pri = fun_0008(var_32, var_24, var_16)
    var_48 = 1;
    var_56 = 3709265103350776868;
    pri = WorkSet(var_56, var_48)
// lab_0230
    pri = 0;
    return pri;
}
