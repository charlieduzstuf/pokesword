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
    pri = 1;
    OP_STOR_PRI 16
    pri = 0;
    return pri;
}
// fun_0150
fun_0150() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_1148()
    OP_JZER lab_02B8
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0268
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_02B8
    OP_BREAK 
    var_8 = 0;
    pri = fun_1380()
    OP_JZER lab_0418
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_03C8
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0418
    OP_BREAK 
    var_8 = 0;
    pri = fun_17E0()
    OP_JZER lab_0578
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0528
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0578
    OP_BREAK 
    var_8 = 0;
    pri = fun_1D78()
    OP_JZER lab_0600
    OP_BREAK 
    var_16 = 20;
    var_24 = 8;
    pri = fun_0A30(var_16)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0600
    OP_BREAK 
    var_8 = 0;
    pri = fun_25B0()
    OP_JZER lab_0760
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0710
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0760
    OP_BREAK 
    var_8 = 0;
    pri = fun_2AF0()
    OP_JZER lab_08C0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_0870
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_08C0
    OP_BREAK 
    var_8 = 0;
    pri = fun_3170()
    OP_JZER lab_0A20
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_09D0
    OP_BREAK 
    var_64 = 20;
    var_72 = 8;
    pri = fun_0A30(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0A20
    pri = 0;
    return pri;
// lab_09D0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0870
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0710
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0528
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_03C8
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0268
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_0A30(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0A30
fun_0A30() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_0B18()
    OP_LOAD_S_ALT 24
    OP_ADD 
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_PUSH_S -8
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    var_24 = 0;
    pri = fun_0110()
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 113;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0F10
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 4;
    var_136 = 127;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 150
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 382
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 383
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 483
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 484
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 644
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 643
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 716
    OP_JNZ lab_0EB8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 717
    OP_JNZ lab_0EB8
    pri = 0;
    OP_JUMP lab_0EC8
// lab_0F10
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 114;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -24
    OP_BREAK 
    pri = 240;
    OP_LOAD_S_ALT -24
    OP_JSGRTR lab_1028
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_ADD_C 4
    OP_STOR_S_PRI -8
    OP_JUMP lab_1118
// lab_1028
    OP_BREAK 
    pri = 200;
    OP_LOAD_S_ALT -24
    OP_JSGRTR lab_10A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_ADD_C 3
    OP_STOR_S_PRI -8
    OP_JUMP lab_1118
// lab_10A8
    OP_BREAK 
    pri = 160;
    OP_LOAD_S_ALT -24
    OP_JSGRTR lab_1118
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_ADD_C 2
    OP_STOR_S_PRI -8
// lab_1118
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_STACK 24
    return pri;
// lab_0EB8
    pri = 1;
// lab_0EC8
    OP_JZER lab_0F10
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_ADD_C -30
    OP_STOR_S_PRI -8
}
// fun_1148
fun_1148() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11F0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_11F0
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 18;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 19;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_ADD_C 1
    OP_MOVE_ALT 
    OP_LOAD_S_PRI -8
    OP_EQ 
    OP_STACK 16
    return pri;
}
// fun_1380
fun_1380() {
    OP_BREAK 
    OP_STACK -16
    pri = 24;
    OP_ADDR_ALT -16
    OP_MOVS 16
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -24
    OP_BREAK 
    OP_ZERO_S -24
    OP_JUMP lab_1438
// lab_1438
    OP_LOAD_S_PRI -24
    alt = 2;
    OP_JSGEQ lab_17B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    OP_ADDR_ALT -16
    OP_LOAD_S_PRI -24
    OP_BOUNDS 1
    OP_LIDX_B 3
    var_32 = pri;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 25
    OP_JZER lab_16D8
    var_56 = 0;
    var_64 = 0;
    OP_ADDR_ALT -16
    OP_LOAD_S_PRI -24
    OP_BOUNDS 1
    OP_LIDX_B 3
    var_72 = pri;
    var_80 = 1;
    var_88 = 84;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_16D8
    var_104 = 0;
    var_112 = 0;
    OP_ADDR_ALT -16
    OP_LOAD_S_PRI -24
    OP_BOUNDS 1
    OP_LIDX_B 3
    var_120 = pri;
    var_128 = 4;
    var_136 = 122;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 1
    OP_JZER lab_16D8
    pri = 1;
    OP_JUMP lab_16E0
// lab_17B8
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_16D8
    pri = 0;
// lab_16E0
    OP_JZER lab_17A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17A8
    OP_BREAK 
    pri = 1;
    OP_STACK 24
    return pri;
// lab_17A8
    OP_JUMP lab_1420
// lab_1420
    OP_BREAK 
    OP_INC_S -24
}
// fun_17E0
fun_17E0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 36;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1908
    var_56 = 0;
    var_64 = 0;
    var_72 = 2;
    var_80 = 1;
    var_88 = 36;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1908
    pri = 0;
    OP_JUMP lab_1918
// lab_1908
    pri = 1;
// lab_1918
    OP_JZER lab_1940
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1940
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 22;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19E0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_19E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 0;
    var_32 = 4;
    var_40 = 36;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1B00
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 4;
    var_88 = 36;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1B00
    pri = 0;
    OP_JUMP lab_1B10
// lab_1B00
    pri = 1;
// lab_1B10
    OP_JZER lab_1BA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    return pri;
// lab_1BA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 0;
    var_32 = 4;
    var_40 = 37;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1CC0
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 4;
    var_88 = 37;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1CC0
    pri = 0;
    OP_JUMP lab_1CD0
// lab_1CC0
    pri = 1;
// lab_1CD0
    OP_JZER lab_1D60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    return pri;
// lab_1D60
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 20;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_1E68
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_1E68
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    OP_PUSH_S -8
    var_32 = 26;
    var_40 = 40;
    pri = fun_0010(var_32, var_24, var_16, var_8, var_0)
    OP_JNZ lab_1F80
    OP_BREAK 
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 170;
    var_80 = 0;
    var_88 = 40;
    pri = fun_0010(var_80, var_72, var_64, var_56, var_48)
    OP_STACK 8
    return pri;
// lab_1F80
    OP_BREAK 
    OP_PUSH_S -8
    var_8 = 0;
    var_16 = 1;
    var_24 = 24;
    pri = fun_2440(var_16, var_8, var_0)
    OP_JZER lab_2068
    OP_PUSH_S -8
    var_32 = 2;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2440(var_40, var_32, var_24)
    OP_JZER lab_2068
    pri = 1;
    OP_JUMP lab_2070
// lab_2068
    pri = 0;
// lab_2070
    OP_JZER lab_2418
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -16
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 0;
    var_32 = 4;
    var_40 = 36;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_21C8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 4;
    var_88 = 36;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_21C8
    pri = 0;
    OP_JUMP lab_21D8
// lab_2418
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_21C8
    pri = 1;
// lab_21D8
    OP_JZER lab_2220
    OP_BREAK 
    pri = 170;
    OP_STOR_S_PRI -16
    OP_JUMP lab_2388
// lab_2220
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 0;
    var_32 = 4;
    var_40 = 37;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_2340
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 4;
    var_88 = 37;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_2340
    pri = 0;
    OP_JUMP lab_2350
// lab_2340
    pri = 1;
// lab_2350
    OP_JZER lab_2388
    OP_BREAK 
    pri = 128;
    OP_STOR_S_PRI -16
// lab_2388
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    OP_PUSH_S -16
    var_32 = 0;
    var_40 = 40;
    pri = fun_0010(var_32, var_24, var_16, var_8, var_0)
    OP_STACK 16
    return pri;
}
// fun_2440
fun_2440() {
    OP_BREAK 
    var_8 = 0;
    OP_PUSH_S 40
    OP_PUSH_S 32
    OP_PUSH_S 24
    var_16 = 34;
    var_24 = 40;
    pri = fun_0010(var_16, var_8, var_0, var_-8, var_-16)
    OP_JZER lab_24F0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_24F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    OP_PUSH_S 40
    OP_PUSH_S 32
    var_24 = 115;
    var_32 = 40;
    pri = fun_0010(var_24, var_16, var_8, var_0, var_-8)
    OP_JZER lab_2598
    OP_BREAK 
    pri = 1;
    return pri;
// lab_2598
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 113;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26E0
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4;
    var_88 = 127;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_26E0
    pri = 1;
    OP_JUMP lab_26E8
// lab_26E0
    pri = 0;
// lab_26E8
    OP_JZER lab_2710
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2710
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_2830
    var_56 = 0;
    var_64 = 0;
    var_72 = 2;
    var_80 = 1;
    var_88 = 84;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_2830
    pri = 0;
    OP_JUMP lab_2840
// lab_2830
    pri = 1;
// lab_2840
    OP_JZER lab_28F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 85;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_28F0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_28F0
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    OP_PUSH_S -8
    var_72 = 4;
    var_80 = 115;
    var_88 = 40;
    pri = fun_0010(var_80, var_72, var_64, var_56, var_48)
    OP_JZER lab_2AC8
    OP_BREAK 
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 128;
    var_128 = 0;
    var_136 = 40;
    pri = fun_0010(var_128, var_120, var_112, var_104, var_96)
    OP_JZER lab_2AC8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_2AC8
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_2AF0
fun_2AF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 113;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2C20
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4;
    var_88 = 127;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_2C20
    pri = 1;
    OP_JUMP lab_2C28
// lab_2C20
    pri = 0;
// lab_2C28
    OP_JZER lab_2C50
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2C50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 30;
    OP_JEQ lab_2D00
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2D00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2E28
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 1;
    var_88 = 11;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_2E28
    pri = 1;
    OP_JUMP lab_2E30
// lab_2E28
    pri = 0;
// lab_2E30
    OP_JZER lab_2E58
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2E58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2EF8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2EF8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_3048
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STACK 8
    return pri;
// lab_3048
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    OP_PUSH_S -8
    var_16 = 4;
    var_24 = 0;
    var_32 = 35;
    var_40 = 40;
    pri = fun_0010(var_32, var_24, var_16, var_8, var_0)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 7;
    OP_JSGEQ lab_3148
    OP_BREAK 
    pri = 1;
    OP_STACK 16
    return pri;
// lab_3148
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_3170
fun_3170() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32A0
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32A0
    pri = 1;
    OP_JUMP lab_32A8
// lab_32A0
    pri = 0;
// lab_32A8
    OP_JZER lab_32D0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_32D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 86;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 4;
    OP_JSLESS lab_3380
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3380
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 113;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34A8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4;
    var_88 = 127;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34A8
    pri = 1;
    OP_JUMP lab_34B0
// lab_34A8
    pri = 0;
// lab_34B0
    OP_JZER lab_34D8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_34D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 122;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3578
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3578
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 116;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_3660
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_3660
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    OP_PUSH_S -8
    var_16 = 4;
    var_24 = 0;
    var_32 = 35;
    var_40 = 40;
    pri = fun_0010(var_32, var_24, var_16, var_8, var_0)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JNZ lab_37B0
    OP_BREAK 
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 128;
    var_80 = 0;
    var_88 = 40;
    pri = fun_0010(var_80, var_72, var_64, var_56, var_48)
    OP_STACK 16
    return pri;
// lab_37B0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 6;
    OP_JSGRTR lab_3878
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 85;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STACK 16
    return pri;
// lab_3878
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
