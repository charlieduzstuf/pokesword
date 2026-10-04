// fun_0010
fun_0010() {
    OP_BREAK 
    OP_PUSH_S 56
    OP_PUSH_S 48
    OP_PUSH_S 40
    OP_PUSH_S 32
    OP_PUSH_S 24
    OP_PUSH 0
    var_8 = 48;
    OP_SYSREQ_C AI_CMD
    OP_STACK 56
    return pri;
}
// fun_00B8
fun_00B8() {
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_LOAD_ALT 8
    OP_ADD 
    OP_STOR_PRI 8
    pri = 0;
    return pri;
}
// fun_0110
fun_0110() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 117;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0198
fun_0198() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    pri = fun_0280()
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_0280
fun_0280() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 57;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_04A0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 67;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_04A0
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_04A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 128;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0C70
    OP_BREAK 
    var_56 = 9;
    var_64 = 0;
    pri = fun_0110()
    var_72 = pri;
    var_80 = 0;
    var_88 = 1;
    var_96 = 34;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_0698
    OP_BREAK 
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 220;
    var_144 = 0;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_JZER lab_0688
    OP_BREAK 
    var_160 = 2;
    var_168 = 8;
    pri = fun_00B8(var_160)
// lab_0C70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 45;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F98
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 93;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0D90
    OP_JUMP lab_1F98
// lab_1F98
    OP_BREAK 
    var_8 = 0;
    pri = fun_22A0()
    OP_JNZ lab_2120
    OP_BREAK 
    var_16 = 0;
    pri = fun_2DD8()
    OP_JNZ lab_2120
    OP_BREAK 
    OP_STACK -8
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 28;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 1
    OP_JZER lab_2110
    OP_BREAK 
    var_72 = -1;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_2120
    OP_BREAK 
    var_8 = 9;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_2280
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 180;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_2280
    OP_BREAK 
    var_112 = 2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_2280
    OP_STACK 16
    pri = 0;
    return pri;
// lab_2110
    OP_STACK 8
// lab_0D90
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_1AB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 3;
    var_96 = 81;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_JSLESS lab_14C0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_0FB0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 170
    OP_JNZ lab_0FB0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 248
    OP_JNZ lab_0FB0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 148
    OP_JNZ lab_0FB0
    pri = 0;
    OP_JUMP lab_0FC0
// lab_1AB0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_1B90
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 170
    OP_JNZ lab_1B90
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 248
    OP_JNZ lab_1B90
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 148
    OP_JNZ lab_1B90
    pri = 0;
    OP_JUMP lab_1BA0
// lab_1B90
    pri = 1;
// lab_1BA0
    OP_JZER lab_1C80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C70
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1C80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1D40
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1D40
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 103
    OP_JNZ lab_1DC0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 360
    OP_JNZ lab_1DC0
    pri = 0;
    OP_JUMP lab_1DD0
// lab_1DC0
    pri = 1;
// lab_1DD0
    OP_JZER lab_1EA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1EA0
    OP_BREAK 
    var_56 = 5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1EA0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 341
    OP_JZER lab_1F98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F98
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1C70
    OP_JUMP lab_1D40
// lab_14C0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_15A0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 170
    OP_JNZ lab_15A0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 248
    OP_JNZ lab_15A0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 148
    OP_JNZ lab_15A0
    pri = 0;
    OP_JUMP lab_15B0
// lab_15A0
    pri = 1;
// lab_15B0
    OP_JZER lab_1690
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1680
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1690
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1750
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1750
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 103
    OP_JNZ lab_17D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 360
    OP_JNZ lab_17D0
    pri = 0;
    OP_JUMP lab_17E0
// lab_17D0
    pri = 1;
// lab_17E0
    OP_JZER lab_18B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18B0
    OP_BREAK 
    var_56 = 5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_18B0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 341
    OP_JZER lab_19A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19A8
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_19A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 421
    OP_JZER lab_1AA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1AA0
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1AA0
    OP_JUMP lab_1F98
// lab_1680
    OP_JUMP lab_1750
// lab_0FB0
    pri = 1;
// lab_0FC0
    OP_JZER lab_10A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1090
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_10A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1160
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1160
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 103
    OP_JNZ lab_11E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 360
    OP_JNZ lab_11E0
    pri = 0;
    OP_JUMP lab_11F0
// lab_11E0
    pri = 1;
// lab_11F0
    OP_JZER lab_12C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12C0
    OP_BREAK 
    var_56 = 5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_12C0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 341
    OP_JZER lab_13B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13B8
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_13B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 421
    OP_JZER lab_14B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14B0
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14B0
    OP_JUMP lab_1AA0
// lab_1090
    OP_JUMP lab_1160
// lab_0698
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0808
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_07F8
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_0808
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0978
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_0968
    OP_BREAK 
    var_112 = -1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_0978
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0AE8
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_0AD8
    OP_BREAK 
    var_112 = -2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_0AE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0C48
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_0C48
    OP_BREAK 
    var_112 = -5;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_0C48
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_0AD8
    OP_JUMP lab_0C48
// lab_0968
    OP_JUMP lab_0C48
// lab_07F8
    OP_JUMP lab_0C48
// lab_0688
    OP_JUMP lab_0C48
}
// fun_22A0
fun_22A0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_STACK -8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_STACK -8
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 33;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_STOR_S_PRI -40
    OP_BREAK 
    OP_STACK -8
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 33;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_STOR_S_PRI -48
    OP_BREAK 
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    pri = fun_0110()
    var_328 = pri;
    var_336 = 26;
    var_344 = 40;
    pri = fun_0010(var_336, var_328, var_320, var_312, var_304)
    OP_JZER lab_2DB0
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_LOAD_S_ALT -24
    OP_JNEQ lab_2788
    OP_LOAD_S_PRI -40
    OP_LOAD_S_ALT -32
    OP_JNEQ lab_2788
    OP_LOAD_S_PRI -48
    OP_LOAD_S_ALT -40
    OP_JNEQ lab_2788
    pri = 0;
    OP_JUMP lab_2798
// lab_2DB0
    OP_BREAK 
    pri = 0;
    OP_STACK 48
    return pri;
// lab_2788
    pri = 1;
// lab_2798
    OP_JZER lab_2DB0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2828
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_2828
    pri = 0;
    OP_JUMP lab_2838
// lab_2828
    pri = 1;
// lab_2838
    OP_JZER lab_2CA8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 86
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 87
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 183
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 184
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 241
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 296
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 297
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 298
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 325
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 326
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 363
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 364
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 365
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 432
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 143
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 446
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 220
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 221
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 473
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 498
    OP_JNZ lab_2C58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 499
    OP_JNZ lab_2C58
    pri = 0;
    OP_JUMP lab_2C68
// lab_2CA8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2D28
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2D28
    pri = 0;
    OP_JUMP lab_2D38
// lab_2D28
    pri = 1;
// lab_2D38
    OP_JZER lab_2DB0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 437
    OP_JZER lab_2DB0
    OP_BREAK 
    pri = 1;
    OP_STACK 48
    return pri;
// lab_2C58
    pri = 1;
// lab_2C68
    OP_JZER lab_2CA8
    OP_BREAK 
    pri = 1;
    OP_STACK 48
    return pri;
}
// fun_2DD8
fun_2DD8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JZER lab_2F50
    var_56 = 0;
    var_64 = 0;
    var_72 = 198;
    var_80 = 0;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_2F50
    pri = 1;
    OP_JUMP lab_2F58
// lab_2F50
    pri = 0;
// lab_2F58
    OP_JZER lab_2F98
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_2F98
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JZER lab_3070
    var_8 = 0;
    var_16 = 0;
    var_24 = 195;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3070
    pri = 1;
    OP_JUMP lab_3078
// lab_3070
    pri = 0;
// lab_3078
    OP_JZER lab_30B8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_30B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JZER lab_3190
    var_8 = 0;
    var_16 = 0;
    var_24 = 193;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3190
    pri = 1;
    OP_JUMP lab_3198
// lab_3190
    pri = 0;
// lab_3198
    OP_JZER lab_31D8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_31D8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_32B0
    var_8 = 0;
    var_16 = 0;
    var_24 = 189;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32B0
    pri = 1;
    OP_JUMP lab_32B8
// lab_32B0
    pri = 0;
// lab_32B8
    OP_JZER lab_32F8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_32F8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JZER lab_33D0
    var_8 = 0;
    var_16 = 0;
    var_24 = 187;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33D0
    pri = 1;
    OP_JUMP lab_33D8
// lab_33D0
    pri = 0;
// lab_33D8
    OP_JZER lab_3418
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3418
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JZER lab_34F0
    var_8 = 0;
    var_16 = 0;
    var_24 = 196;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34F0
    pri = 1;
    OP_JUMP lab_34F8
// lab_34F0
    pri = 0;
// lab_34F8
    OP_JZER lab_3538
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3538
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JZER lab_3610
    var_8 = 0;
    var_16 = 0;
    var_24 = 188;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3610
    pri = 1;
    OP_JUMP lab_3618
// lab_3610
    pri = 0;
// lab_3618
    OP_JZER lab_3658
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3658
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JZER lab_3730
    var_8 = 0;
    var_16 = 0;
    var_24 = 191;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3730
    pri = 1;
    OP_JUMP lab_3738
// lab_3730
    pri = 0;
// lab_3738
    OP_JZER lab_3778
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3778
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JZER lab_3850
    var_8 = 0;
    var_16 = 0;
    var_24 = 186;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3850
    pri = 1;
    OP_JUMP lab_3858
// lab_3850
    pri = 0;
// lab_3858
    OP_JZER lab_3898
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3898
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JZER lab_3970
    var_8 = 0;
    var_16 = 0;
    var_24 = 190;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3970
    pri = 1;
    OP_JUMP lab_3978
// lab_3970
    pri = 0;
// lab_3978
    OP_JZER lab_39B8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_39B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JZER lab_3A90
    var_8 = 0;
    var_16 = 0;
    var_24 = 197;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3A90
    pri = 1;
    OP_JUMP lab_3A98
// lab_3A90
    pri = 0;
// lab_3A98
    OP_JZER lab_3AD8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3AD8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_3BA0
    var_8 = 0;
    var_16 = 0;
    var_24 = 200;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3BA0
    pri = 1;
    OP_JUMP lab_3BA8
// lab_3BA0
    pri = 0;
// lab_3BA8
    OP_JZER lab_3BE8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3BE8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JZER lab_3CC0
    var_8 = 0;
    var_16 = 0;
    var_24 = 199;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CC0
    pri = 1;
    OP_JUMP lab_3CC8
// lab_3CC0
    pri = 0;
// lab_3CC8
    OP_JZER lab_3D08
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3D08
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JZER lab_3DE0
    var_8 = 0;
    var_16 = 0;
    var_24 = 192;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3DE0
    pri = 1;
    OP_JUMP lab_3DE8
// lab_3DE0
    pri = 0;
// lab_3DE8
    OP_JZER lab_3E28
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3E28
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JZER lab_3F00
    var_8 = 0;
    var_16 = 0;
    var_24 = 686;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3F00
    pri = 1;
    OP_JUMP lab_3F08
// lab_3F00
    pri = 0;
// lab_3F08
    OP_JZER lab_3F48
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3F48
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JZER lab_4020
    var_8 = 0;
    var_16 = 0;
    var_24 = 184;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4020
    pri = 1;
    OP_JUMP lab_4028
// lab_4020
    pri = 0;
// lab_4028
    OP_JZER lab_4068
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_4068
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JZER lab_4140
    var_8 = 0;
    var_16 = 0;
    var_24 = 185;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4140
    pri = 1;
    OP_JUMP lab_4148
// lab_4140
    pri = 0;
// lab_4148
    OP_JZER lab_4188
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_4188
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JZER lab_4260
    var_8 = 0;
    var_16 = 0;
    var_24 = 194;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4260
    pri = 1;
    OP_JUMP lab_4268
// lab_4260
    pri = 0;
// lab_4268
    OP_JZER lab_42A8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_42A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JZER lab_4760
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 2;
    var_40 = 72;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4390
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4760
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4390
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 104;
    OP_JEQ lab_44E0
    OP_LOAD_S_PRI -16
    alt = 163;
    OP_JEQ lab_44E0
    OP_LOAD_S_PRI -16
    alt = 164;
    OP_JEQ lab_44E0
    pri = 1;
    OP_JUMP lab_44E8
// lab_44E0
    pri = 0;
// lab_44E8
    OP_JZER lab_4750
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 26
    OP_JNZ lab_46C8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 2
    OP_JNZ lab_46C8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 2;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 2
    OP_JNZ lab_46C8
    pri = 0;
    OP_JUMP lab_46D8
// lab_4750
    OP_STACK 8
// lab_46C8
    pri = 1;
// lab_46D8
    OP_JZER lab_4750
    OP_BREAK 
    var_8 = -3;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 1;
    OP_STACK 16
    return pri;
}
