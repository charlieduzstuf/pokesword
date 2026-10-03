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
            pri = fun_0268()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 550;
    OP_JSGRTR lab_01A0
    var_16 = -8196952725690005508;
    pri = FlagGet(var_16)
    OP_JNZ lab_0190
    var_24 = -8196952725690005508;
    pri = FlagSet(var_24)
// lab_01A0
    var_8 = -8196952725690005508;
    pri = FlagReset(var_8)
// lab_0190
    OP_JUMP lab_01C8
// lab_01C8
    var_8 = 1665416836226414515;
    pri = FlagReset(var_8)
    var_16 = 1714422350576896604;
    pri = FlagReset(var_16)
    var_24 = 5966754102457039368;
    pri = FlagReset(var_24)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0268
fun_0268() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 8491605567333890387
    OP_JZER lab_0308
    var_8 = 2743755924622671882;
    pri = FlagGet(var_8)
    OP_JNZ lab_0308
    var_16 = 2743755924622671882;
    pri = FlagSet(var_16)
// lab_0308
    pri = 0;
    return pri;
}
