// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0078
fun_0078() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetTentColor_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = g_mode;
    switch (pri) {
// switch_0150
        case default:
        {
// switch_0150_case_default
            pri = CommandNOP()
            OP_JUMP lab_0188
// lab_0188
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0150_case_0x0
            var_8 = 0;
            pri = fun_0198()
            OP_JUMP lab_0188
        }
        case 0x1:
        {
// switch_0150_case_0x1
            var_8 = 0;
            pri = fun_01C8()
            OP_JUMP lab_0188
        }
    }
}
// fun_0198
fun_0198() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_01C8
fun_01C8() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -1952989940832464680
    OP_JZER lab_0268
    var_8 = -5258392640920524667;
    pri = FlagGet(var_8)
    OP_JNZ lab_0268
    var_16 = -5258392640920524667;
    pri = FlagSet(var_16)
// lab_0268
    var_8 = -5515864177703787486;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_02D0
    var_24 = 11;
    var_32 = -5515864177703787486;
    var_40 = 16;
    pri = fun_0078(var_32, var_24)
// lab_02D0
    var_8 = -6747924587209772797;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_03A0
    var_24 = 0;
    pri = Azukariya_IsEggExist_(var_24)
    OP_JZER lab_03A0
    var_32 = 1;
    var_40 = 32;
    var_48 = -6747924587209772797;
    var_56 = 24;
    pri = fun_0038(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = -5686157121352957502;
    pri = WorkSet(var_72, var_64)
// lab_03A0
    pri = 0;
    return pri;
}
