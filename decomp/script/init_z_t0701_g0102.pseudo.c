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
            pri = fun_0258()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 1082113614280679655;
    pri = FlagSet(var_8)
    var_16 = 1082114713792307866;
    pri = FlagSet(var_16)
    var_24 = 1082115813303936077;
    pri = FlagSet(var_24)
    var_32 = 1082108116722538600;
    pri = FlagSet(var_32)
    var_40 = 1082109216234166811;
    pri = FlagSet(var_40)
    var_48 = 1082110315745795022;
    pri = FlagSet(var_48)
    var_56 = 1082111415257423233;
    pri = FlagSet(var_56)
    var_64 = 1082103718676025756;
    pri = FlagSet(var_64)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0258
fun_0258() {
    pri = 0;
    return pri;
}
