// fun_0008
fun_0008() {
    pri = arg_1;
    OP_JZER lab_0050
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0050
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_0088
fun_0088() {
    OP_LOAD_S_BOTH 24, 32
    OP_SUB_ALT 
    var_8 = pri;
    pri = GetPublicRand(var_8)
    OP_LOAD_P_S_ALT 24
    OP_ADD 
    return pri;
}
// fun_00E8
fun_00E8() {
    pri = arg_0;
    switch (pri) {
// switch_0290
        case default:
        {
// switch_0290_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0290_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x1:
        {
// switch_0290_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x2:
        {
// switch_0290_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x3:
        {
// switch_0290_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x4:
        {
// switch_0290_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x5:
        {
// switch_0290_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
        case 0x6:
        {
// switch_0290_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0290_case_default
        }
    }
}
// fun_0328
fun_0328() {
    var_8 = arg_0;
    pri = AddPocketMoney_(var_8)
    return pri;
}
// fun_0358
fun_0358() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayerAddDressupItem(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0398
fun_0398() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_03D0
fun_03D0() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0458
// lab_0458
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_05D8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_05C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0518
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0518
    pri = 0;
    OP_JUMP lab_0520
// lab_05D8
    pri = 0;
    return pri;
// lab_05C8
    OP_JUMP lab_0450
// lab_0450
    OP_INC_P_S -936
// lab_0518
    pri = 1;
// lab_0520
    OP_JZER lab_0598
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0590
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0598
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0590
}
// fun_05F8
fun_05F8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0640
    pri = arg_0;
    return pri;
// lab_0640
    pri = arg_1;
    return pri;
}
// fun_0650
fun_0650() {
    var_8 = 3466787895896185279;
    pri = FlagSet(var_8)
    var_16 = 0;
    var_24 = 7829858067611776523;
    pri = WorkSet(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_03D0(var_24)
    pri = 0;
    return pri;
}
// fun_0728
fun_0728() {
    pri = g_mode;
    switch (pri) {
// switch_0810
        case default:
        {
// switch_0810_case_default
            pri = CommandNOP()
            OP_JUMP lab_0868
// lab_0868
            pri = 0;
            return pri;
        }
        case 0x8d58a03cc10e3b21:
        {
// switch_0810_case_0x8d58a03cc10e3b21
            var_8 = 0;
            pri = fun_6E88()
            OP_JUMP lab_0868
        }
        case 0xaa72716da6894bd5:
        {
// switch_0810_case_0xaa72716da6894bd5
            var_8 = 0;
            pri = fun_6158()
            OP_JUMP lab_0868
        }
        case 0x0:
        {
// switch_0810_case_0x0
            var_8 = 0;
            pri = fun_0878()
            OP_JUMP lab_0868
        }
        case 0x3bbbf0b35da01121:
        {
// switch_0810_case_0x3bbbf0b35da01121
            var_8 = 0;
            pri = fun_7F48()
            OP_JUMP lab_0868
        }
    }
}
// fun_0878
fun_0878() {
    pri = 0;
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = 7506713967005848083;
    pri = FlagSet(var_8)
    var_16 = -8669601815973682975;
    pri = FlagSet(var_16)
    var_24 = 6943973363734289279;
    pri = FlagSet(var_24)
    var_32 = 2478588589520194700;
    pri = FlagSet(var_32)
    var_40 = -5165677370440995445;
    pri = FlagSet(var_40)
    var_48 = 550817590317733207;
    pri = FlagSet(var_48)
    var_56 = 6390156580044702728;
    pri = FlagSet(var_56)
    var_64 = -8551397936661211544;
    pri = FlagSet(var_64)
    var_72 = -8286243085875040294;
    pri = FlagSet(var_72)
    var_80 = -2409953949732425464;
    pri = FlagSet(var_80)
    var_88 = 3235464708911765657;
    pri = FlagSet(var_88)
    var_96 = 3480884744796360697;
    pri = FlagSet(var_96)
    var_104 = 7149317435715846772;
    pri = FlagSet(var_104)
    var_112 = -7766450811062851545;
    pri = FlagSet(var_112)
    var_120 = -1655053127185566619;
    pri = FlagSet(var_120)
    var_128 = -752408949595178378;
    pri = FlagSet(var_128)
    var_136 = 7095484774853797935;
    pri = FlagSet(var_136)
    var_144 = -1624929651410500742;
    pri = FlagSet(var_144)
    var_152 = 5388265639592717085;
    pri = FlagSet(var_152)
    var_160 = 4044457239875455202;
    pri = FlagSet(var_160)
    var_168 = 5388264540081088874;
    pri = FlagSet(var_168)
    var_176 = -2226754383299060518;
    pri = FlagSet(var_176)
    var_184 = -5634459638772040499;
    pri = FlagSet(var_184)
    var_192 = 51229971475200296;
    pri = FlagSet(var_192)
    var_200 = -4200946985965466213;
    pri = FlagSet(var_200)
    var_208 = 1996327394012649957;
    pri = FlagSet(var_208)
    var_216 = 3761483749247810063;
    pri = FlagSet(var_216)
    var_224 = -8303296711058148032;
    pri = FlagSet(var_224)
    var_232 = -8303295611546519821;
    pri = FlagSet(var_232)
    var_240 = -8303294512034891610;
    pri = FlagSet(var_240)
    var_248 = -970134989010580305;
    pri = FlagSet(var_248)
    var_256 = 7845089036434421356;
    pri = FlagSet(var_256)
    var_264 = -4242657469657360075;
    pri = FlagSet(var_264)
    var_272 = -2133533246548165864;
    pri = FlagSet(var_272)
    var_280 = 2696390934716002895;
    pri = FlagSet(var_280)
    var_288 = -4010460735086782799;
    pri = FlagSet(var_288)
    var_296 = 320142966542498375;
    pri = FlagSet(var_296)
    var_304 = -7767209653950836110;
    pri = FlagSet(var_304)
    var_312 = -3298867873700702363;
    pri = FlagSet(var_312)
    var_320 = -4214615090440700579;
    pri = FlagSet(var_320)
    var_328 = -130826681769030093;
    pri = FlagSet(var_328)
    var_336 = -5661906939330003973;
    pri = FlagSet(var_336)
    var_344 = -5766348188344541335;
    pri = FlagSet(var_344)
    var_352 = -6784874504492061910;
    pri = FlagSet(var_352)
    var_360 = -3181508942575245480;
    pri = FlagSet(var_360)
    var_368 = 8868142065411558194;
    pri = FlagSet(var_368)
    var_376 = -3319423182739788766;
    pri = FlagSet(var_376)
    var_384 = 3178397703945784922;
    pri = FlagSet(var_384)
    var_392 = -3639666256585418915;
    pri = FlagSet(var_392)
    var_400 = 5862401268159596619;
    pri = FlagSet(var_400)
    var_408 = -5225704462842025352;
    pri = FlagSet(var_408)
    var_416 = -1787470995557921022;
    pri = FlagSet(var_416)
    var_424 = -21939952124344083;
    pri = FlagSet(var_424)
    var_432 = 4139704275241219055;
    pri = FlagSet(var_432)
    var_440 = 5598396028474176704;
    pri = FlagSet(var_440)
    var_448 = -8040610231773951744;
    pri = FlagSet(var_448)
    var_456 = 1838443220896465507;
    pri = FlagSet(var_456)
    var_464 = -34089364971008208;
    pri = FlagSet(var_464)
    var_472 = -3674018664616446908;
    pri = FlagSet(var_472)
    var_480 = -3674024162174587963;
    pri = FlagSet(var_480)
    var_488 = 2312218129280921210;
    pri = FlagSet(var_488)
    var_496 = -8654315183630985365;
    pri = FlagSet(var_496)
    var_504 = -8654322880212382842;
    pri = FlagSet(var_504)
    var_512 = 9204042830795947825;
    pri = FlagSet(var_512)
    var_520 = 440998338954051805;
    pri = FlagSet(var_520)
    var_528 = 2206624492151242658;
    pri = FlagSet(var_528)
    var_536 = 440986244326141484;
    pri = FlagSet(var_536)
    var_544 = -4504228236179943877;
    pri = FlagSet(var_544)
    var_552 = -317160502977836181;
    pri = FlagSet(var_552)
    var_560 = -484552086778445211;
    pri = FlagSet(var_560)
    var_568 = -484546589220304156;
    pri = FlagSet(var_568)
    var_576 = 6256141132606737718;
    pri = FlagSet(var_576)
    var_584 = 59409724177917345;
    pri = FlagSet(var_584)
    var_592 = 119772388837235790;
    pri = FlagSet(var_592)
    var_600 = 2481285362137015056;
    pri = FlagSet(var_600)
    var_608 = 2481297456764925377;
    pri = FlagSet(var_608)
    var_616 = -1499539697698718860;
    pri = FlagSet(var_616)
    var_624 = -3059696659601986933;
    pri = FlagSet(var_624)
    var_632 = 6241921994871454197;
    pri = FlagSet(var_632)
    var_640 = -4507474598933643017;
    pri = FlagSet(var_640)
    var_648 = 2658386530751210263;
    pri = FlagSet(var_648)
    var_656 = -5005481396565922172;
    pri = FlagSet(var_656)
    var_664 = 9204040631772691403;
    pri = FlagSet(var_664)
    var_672 = -9016284007180476738;
    pri = FlagSet(var_672)
    var_680 = 2206622293127986236;
    pri = FlagSet(var_680)
    var_688 = 9204041731284319614;
    pri = FlagSet(var_688)
    var_696 = -2539670835808990616;
    pri = FlagSet(var_696)
    var_704 = -1725466129553517516;
    pri = FlagSet(var_704)
    var_712 = -8389920027382669047;
    pri = FlagSet(var_712)
    var_720 = -4640419951713714794;
    pri = FlagSet(var_720)
    var_728 = -4640418852202086583;
    pri = FlagSet(var_728)
    var_736 = -4640422150736971216;
    pri = FlagSet(var_736)
    var_744 = -4640421051225343005;
    pri = FlagSet(var_744)
    var_752 = -3429033924844752434;
    pri = FlagSet(var_752)
    var_760 = -7045052338775704800;
    pri = FlagSet(var_760)
    var_768 = 8112749681754728295;
    pri = FlagSet(var_768)
    var_776 = 2556148519277313732;
    pri = FlagSet(var_776)
    var_784 = 6712433672450853327;
    pri = FlagSet(var_784)
    var_792 = 1656060553018210897;
    pri = FlagSet(var_792)
    var_800 = -4273768064731533314;
    pri = FlagSet(var_800)
    var_808 = -968882842724727458;
    pri = FlagSet(var_808)
    var_816 = -1528879600583155539;
    pri = FlagSet(var_816)
    var_824 = -8752830076052889270;
    pri = FlagSet(var_824)
    var_832 = -8752828976541261059;
    pri = FlagSet(var_832)
    var_840 = 2610993506854619934;
    pri = FlagSet(var_840)
    var_848 = 8311746388232223697;
    pri = FlagSet(var_848)
    var_856 = -8177398779958974095;
    pri = FlagSet(var_856)
    var_864 = 7874170534708825062;
    pri = FlagSet(var_864)
    var_872 = -988436650023575209;
    pri = FlagSet(var_872)
    var_880 = -8146230406596348434;
    pri = FlagSet(var_880)
    var_888 = -7643235762281396180;
    pri = FlagSet(var_888)
    var_896 = 7977662558473576712;
    pri = FlagSet(var_896)
    var_904 = -7408722731584171860;
    pri = FlagSet(var_904)
    var_912 = -7408722731584171860;
    pri = FlagSet(var_912)
    var_920 = -6352432447319980419;
    pri = FlagSet(var_920)
    var_928 = -5399359210222382523;
    pri = FlagSet(var_928)
    var_936 = 3216989005259082369;
    pri = FlagSet(var_936)
    var_944 = 702631533266588014;
    pri = FlagSet(var_944)
    var_952 = -3470649453704576271;
    pri = FlagSet(var_952)
    var_960 = -542322190474721943;
    pri = FlagSet(var_960)
    var_968 = 357722928481934510;
    pri = FlagSet(var_968)
    var_976 = -1817487643744510502;
    pri = FlagSet(var_976)
    var_984 = 702631533266588014;
    pri = FlagSet(var_984)
    var_992 = -1772686665497876459;
    pri = FlagSet(var_992)
    var_1000 = -542323289986350154;
    pri = FlagSet(var_1000)
    var_1008 = -5291113835877623842;
    pri = FlagSet(var_1008)
    var_1016 = 5804806806352038632;
    pri = FlagSet(var_1016)
    var_1024 = 6086521948512369532;
    pri = FlagSet(var_1024)
    var_1032 = 972678789484826509;
    pri = FlagSet(var_1032)
    var_1040 = -7688158225218808343;
    pri = FlagSet(var_1040)
    var_1048 = -4015134941316681380;
    pri = FlagSet(var_1048)
    var_1056 = 5275293038303505846;
    pri = FlagSet(var_1056)
    var_1064 = 3275595920700649692;
    pri = FlagSet(var_1064)
    var_1072 = -6270886897370188264;
    pri = FlagSet(var_1072)
    var_1080 = 4971798268198637023;
    pri = FlagSet(var_1080)
    var_1088 = -4621246254867816340;
    pri = FlagSet(var_1088)
    var_1096 = 6318695584273792737;
    pri = FlagSet(var_1096)
    var_1104 = 6318683489645882416;
    pri = FlagSet(var_1104)
    var_1112 = 1341676596660868790;
    pri = FlagSet(var_1112)
    var_1120 = 8661207189725172744;
    pri = FlagSet(var_1120)
    var_1128 = 189517696436208142;
    pri = FlagSet(var_1128)
    var_1136 = 7241287441575206891;
    pri = FlagSet(var_1136)
    var_1144 = 8934092026399605527;
    pri = FlagSet(var_1144)
    var_1152 = -3276543787315562266;
    pri = FlagSet(var_1152)
    var_1160 = 6876896308051621773;
    pri = FlagSet(var_1160)
    var_1168 = -2952232645155182278;
    pri = FlagSet(var_1168)
    var_1176 = 8661210488260057377;
    pri = FlagSet(var_1176)
    var_1184 = -3276542687803934055;
    pri = FlagSet(var_1184)
    var_1192 = -6389907082618827969;
    pri = FlagSet(var_1192)
    var_1200 = 8934088727864720894;
    pri = FlagSet(var_1200)
    var_1208 = -2176457642552959458;
    pri = FlagSet(var_1208)
    var_1216 = -3276541588292305844;
    pri = FlagSet(var_1216)
    var_1224 = 8934089827376349105;
    pri = FlagSet(var_1224)
    var_1232 = 7241280844505437625;
    pri = FlagSet(var_1232)
    var_1240 = 189518795947836353;
    pri = FlagSet(var_1240)
    var_1248 = 6404368837009661395;
    pri = FlagSet(var_1248)
    var_1256 = 1341677696172497001;
    pri = FlagSet(var_1256)
    var_1264 = -6389908182130456180;
    pri = FlagSet(var_1264)
    var_1272 = -2427908484187054076;
    pri = FlagSet(var_1272)
    var_1280 = -1701854585655222088;
    pri = FlagSet(var_1280)
    var_1288 = 3215614591933677749;
    pri = FlagSet(var_1288)
    var_1296 = -884363338698514034;
    pri = FlagSet(var_1296)
    var_1304 = -821092416317714652;
    pri = FlagSet(var_1304)
    var_1312 = 6467987368656318883;
    pri = FlagSet(var_1312)
    var_1320 = 1983516971041023246;
    pri = FlagSet(var_1320)
    var_1328 = 713219082408657684;
    pri = FlagSet(var_1328)
    var_1336 = -7024236298326424865;
    pri = FlagSet(var_1336)
    var_1344 = 1243398226496293493;
    pri = FlagSet(var_1344)
    var_1352 = 8990122872356867010;
    pri = FlagSet(var_1352)
    var_1360 = 8990121772845238799;
    pri = FlagSet(var_1360)
    var_1368 = 8892309384594757773;
    pri = FlagSet(var_1368)
    var_1376 = -2560267667239473489;
    pri = FlagSet(var_1376)
    var_1384 = 4166911318193987639;
    pri = FlagSet(var_1384)
    var_1392 = -8424277323871559939;
    pri = FlagSet(var_1392)
    var_1400 = 3563100693386837929;
    pri = FlagSet(var_1400)
    var_1408 = -5422418860321335279;
    pri = FlagSet(var_1408)
    var_1416 = 5996991087849294980;
    pri = FlagSet(var_1416)
    var_1424 = 8248084679607072011;
    pri = FlagSet(var_1424)
    var_1432 = 231539292373669382;
    pri = FlagSet(var_1432)
    var_1440 = 5767568996398104757;
    pri = FlagSet(var_1440)
    var_1448 = 4103919529309054878;
    pri = FlagSet(var_1448)
    var_1456 = -686112562623115494;
    pri = FlagSet(var_1456)
    var_1464 = 4915895829130115764;
    pri = FlagSet(var_1464)
    var_1472 = 3160493614543024327;
    pri = FlagSet(var_1472)
    var_1480 = -1110336741612234150;
    pri = FlagSet(var_1480)
    var_1488 = -2468653985012663263;
    pri = FlagSet(var_1488)
    var_1496 = -6771760433814120014;
    pri = FlagSet(var_1496)
    var_1504 = -4228322870407095995;
    pri = FlagSet(var_1504)
    var_1512 = -2664763386676178833;
    pri = FlagSet(var_1512)
    var_1520 = 5238487797000439776;
    pri = FlagSet(var_1520)
    var_1528 = 7457989319736929833;
    pri = FlagSet(var_1528)
    var_1536 = 8264757426734906200;
    pri = FlagSet(var_1536)
    var_1544 = -1086038895627741681;
    pri = FlagSet(var_1544)
    var_1552 = 4408565633761206261;
    pri = FlagSet(var_1552)
    var_1560 = -2774639142214799656;
    pri = FlagSet(var_1560)
    var_1568 = 6023732433702693609;
    pri = FlagSet(var_1568)
    var_1576 = 4450823607977779618;
    pri = FlagSet(var_1576)
    var_1584 = -4495954252891467750;
    pri = FlagSet(var_1584)
    var_1592 = 8333688502895045657;
    pri = FlagSet(var_1592)
    var_1600 = -2609511271441633747;
    pri = FlagSet(var_1600)
    var_1608 = 2149647299146444625;
    pri = FlagSet(var_1608)
    var_1616 = 8367471676757782360;
    pri = FlagSet(var_1616)
    var_1624 = 7578286301365252433;
    pri = FlagSet(var_1624)
    var_1632 = -7459836055509795977;
    pri = FlagSet(var_1632)
    var_1640 = 4090159915399653913;
    pri = FlagSet(var_1640)
    var_1648 = 7983844220748856187;
    pri = FlagSet(var_1648)
    var_1656 = -840913160134923076;
    pri = FlagSet(var_1656)
    var_1664 = 1508178191079341492;
    pri = FlagSet(var_1664)
    var_1672 = -7720708891673496377;
    pri = FlagSet(var_1672)
    var_1680 = -3179587887033667580;
    pri = FlagSet(var_1680)
    var_1688 = -250553440047947672;
    pri = FlagSet(var_1688)
    var_1696 = 4297677812289604185;
    pri = FlagSet(var_1696)
    var_1704 = 4030259161792003751;
    pri = FlagSet(var_1704)
    var_1712 = -86091334692859052;
    pri = FlagSet(var_1712)
    var_1720 = 5359895669450946422;
    pri = FlagSet(var_1720)
    var_1728 = -3576349374177777326;
    pri = FlagSet(var_1728)
    var_1736 = -125952833011027486;
    pri = FlagSet(var_1736)
    var_1744 = 8541340050249644631;
    pri = FlagSet(var_1744)
    var_1752 = 8389417158930239541;
    pri = FlagSet(var_1752)
    var_1760 = -6397670319191688058;
    pri = FlagSet(var_1760)
    var_1768 = -7023822302788336185;
    pri = FlagSet(var_1768)
    var_1776 = -2226112049068809935;
    pri = FlagSet(var_1776)
    var_1784 = -8896755840842652872;
    pri = FlagSet(var_1784)
    var_1792 = 5022837494877359952;
    pri = FlagSet(var_1792)
    var_1800 = 6824651908674154928;
    pri = FlagSet(var_1800)
    var_1808 = 3038398906929913387;
    pri = FlagSet(var_1808)
    var_1816 = 5858126159611641479;
    pri = FlagSet(var_1816)
    var_1824 = 5858127259123269690;
    pri = FlagSet(var_1824)
    var_1832 = 6577952962885434863;
    pri = FlagSet(var_1832)
    var_1840 = 1003091793780467894;
    pri = FlagSet(var_1840)
    var_1848 = 8896463344906650392;
    pri = FlagSet(var_1848)
    var_1856 = 6925251713131868404;
    pri = FlagSet(var_1856)
    var_1864 = 6925255011666753037;
    pri = FlagSet(var_1864)
    var_1872 = 6925251713131868404;
    pri = FlagSet(var_1872)
    var_1880 = 7633379448393287205;
    pri = FlagSet(var_1880)
    var_1888 = -1690062793469606128;
    pri = FlagSet(var_1888)
    var_1896 = 7633376149858402572;
    pri = FlagSet(var_1896)
    var_1904 = 4090041247219487386;
    pri = FlagSet(var_1904)
    var_1912 = -4834270172384559181;
    pri = FlagSet(var_1912)
    var_1920 = 2114447493271261331;
    pri = FlagSet(var_1920)
    var_1928 = -341965168978892642;
    pri = FlagSet(var_1928)
    var_1936 = -7289458305334070753;
    pri = FlagSet(var_1936)
    var_1944 = -5471796947768100173;
    pri = FlagSet(var_1944)
    var_1952 = -1823449519866571522;
    pri = FlagSet(var_1952)
    var_1960 = 4639838440238230742;
    pri = FlagSet(var_1960)
    var_1968 = 4337981634622023336;
    pri = FlagSet(var_1968)
    var_1976 = 4337976137063882281;
    pri = FlagSet(var_1976)
    var_1984 = 8838721707033461072;
    pri = FlagSet(var_1984)
    var_1992 = -4060473859728235179;
    pri = FlagSet(var_1992)
    var_2000 = 9010937134125686001;
    pri = FlagSet(var_2000)
    var_2008 = -4504382268511091935;
    pri = FlagSet(var_2008)
    var_2016 = -3149351691952044084;
    pri = FlagSet(var_2016)
    var_2024 = -3149339597324133763;
    pri = FlagSet(var_2024)
    var_2032 = -8539039257394276789;
    pri = FlagSet(var_2032)
    var_2040 = -2747090564907400189;
    pri = FlagSet(var_2040)
    var_2048 = -6477629637938931612;
    pri = FlagSet(var_2048)
    var_2056 = -2592008544789079578;
    pri = FlagSet(var_2056)
    var_2064 = 1751443779179290009;
    pri = FlagSet(var_2064)
    var_2072 = 7720660484484750577;
    pri = FlagSet(var_2072)
    var_2080 = 4514459545519325051;
    pri = FlagSet(var_2080)
    var_2088 = 2082975168935974472;
    pri = FlagSet(var_2088)
    var_2096 = 8939762938985858608;
    pri = FlagSet(var_2096)
    var_2104 = 3755852098630684190;
    pri = FlagSet(var_2104)
    var_2112 = -9092457264898983630;
    pri = FlagSet(var_2112)
    var_2120 = 2917844282692320165;
    pri = FlagSet(var_2120)
    var_2128 = 4337981634622023336;
    pri = FlagSet(var_2128)
    var_2136 = 4337976137063882281;
    pri = FlagSet(var_2136)
    var_2144 = -6320636825666538237;
    pri = FlagSet(var_2144)
    var_2152 = 3307058085393826287;
    pri = FlagSet(var_2152)
    var_2160 = -8600099808306903038;
    pri = FlagSet(var_2160)
    var_2168 = 3307060284417082709;
    pri = FlagSet(var_2168)
    var_2176 = 3307059184905454498;
    pri = FlagSet(var_2176)
    var_2184 = 3307052587835685232;
    pri = FlagSet(var_2184)
    var_2192 = -7618857127012231868;
    pri = FlagSet(var_2192)
    var_2200 = 4670086111686298058;
    pri = FlagSet(var_2200)
    var_2208 = -7283748629432624885;
    pri = FlagSet(var_2208)
    var_2216 = -6885374073561345874;
    pri = FlagSet(var_2216)
    var_2224 = -6245882449017408807;
    pri = FlagSet(var_2224)
    var_2232 = -7748209240823921678;
    pri = FlagSet(var_2232)
    var_2240 = 7099240262869383700;
    pri = FlagSet(var_2240)
    var_2248 = -1292278190967397311;
    pri = FlagSet(var_2248)
    var_2256 = 206712646364256524;
    pri = FlagSet(var_2256)
    var_2264 = -8208209633826348795;
    pri = FlagSet(var_2264)
    var_2272 = 7418990988919710256;
    pri = FlagSet(var_2272)
    var_2280 = 3469112159760161694;
    pri = FlagSet(var_2280)
    var_2288 = -5896533038610949627;
    pri = FlagSet(var_2288)
    var_2296 = 6155949791004856836;
    pri = FlagSet(var_2296)
    var_2304 = 1151696524443736482;
    pri = FlagSet(var_2304)
    var_2312 = 7432981168339418010;
    pri = FlagSet(var_2312)
    var_2320 = 1151691026885595427;
    pri = FlagSet(var_2320)
    var_2328 = 1151689927373967216;
    pri = FlagSet(var_2328)
    var_2336 = 7432975670781276955;
    pri = FlagSet(var_2336)
    var_2344 = 7432977869804533377;
    pri = FlagSet(var_2344)
    var_2352 = 1452431273728693011;
    pri = FlagSet(var_2352)
    var_2360 = 1452433472751949433;
    pri = FlagSet(var_2360)
    var_2368 = 3902380436590392612;
    pri = FlagSet(var_2368)
    var_2376 = -2838057900622105808;
    pri = FlagSet(var_2376)
    var_2384 = 3902379337078764401;
    pri = FlagSet(var_2384)
    var_2392 = 3902378237567136190;
    pri = FlagSet(var_2392)
    var_2400 = -2838055701598849386;
    pri = FlagSet(var_2400)
    var_2408 = 1151692126397223638;
    pri = FlagSet(var_2408)
    var_2416 = 1151704221025133959;
    pri = FlagSet(var_2416)
    var_2424 = 1452432373240321222;
    pri = FlagSet(var_2424)
    var_2432 = -4302912376062203493;
    pri = FlagSet(var_2432)
    var_2440 = 1151703121513505748;
    pri = FlagSet(var_2440)
    var_2448 = 2298869767325498192;
    pri = FlagSet(var_2448)
    var_2456 = -7378220578778123489;
    pri = FlagSet(var_2456)
    var_2464 = -492037105610703242;
    pri = FlagSet(var_2464)
    var_2472 = 1590452028359343224;
    pri = FlagSet(var_2472)
    var_2480 = 1590455326894227857;
    pri = FlagSet(var_2480)
    var_2488 = 1058120175172563091;
    pri = FlagSet(var_2488)
    var_2496 = 1058121274684191302;
    pri = FlagSet(var_2496)
    var_2504 = 1359373253614330205;
    pri = FlagSet(var_2504)
    var_2512 = 7664219872515097466;
    pri = FlagSet(var_2512)
    var_2520 = 5306116557915082582;
    pri = FlagSet(var_2520)
    var_2528 = 7589307597612998181;
    pri = FlagSet(var_2528)
    var_2536 = 1437989026607552983;
    pri = FlagSet(var_2536)
    var_2544 = 1437990126119181194;
    pri = FlagSet(var_2544)
    var_2552 = -4807553854326954453;
    pri = FlagSet(var_2552)
    var_2560 = -7268306149131292845;
    pri = FlagSet(var_2560)
    var_2568 = 4985763535029371052;
    pri = FlagSet(var_2568)
    var_2576 = 3896444167467819354;
    pri = FlagSet(var_2576)
    var_2584 = -2669111732362968534;
    pri = FlagSet(var_2584)
    var_2592 = -201298903742919217;
    pri = FlagSet(var_2592)
    var_2600 = -4341115018897366444;
    pri = FlagSet(var_2600)
    var_2608 = -5483880531844336598;
    pri = FlagSet(var_2608)
    var_2616 = -6262522284274375690;
    pri = FlagSet(var_2616)
    var_2624 = 157350306758072480;
    pri = FlagSet(var_2624)
    var_2632 = 546922064245419454;
    pri = FlagSet(var_2632)
    var_2640 = -8787185482726947913;
    pri = FlagSet(var_2640)
    var_2648 = 1547268981296325127;
    pri = FlagSet(var_2648)
    var_2656 = -2424754999503323182;
    pri = FlagSet(var_2656)
    var_2664 = 1514373463937579588;
    pri = FlagSet(var_2664)
    var_2672 = -2039142712897586641;
    pri = FlagSet(var_2672)
    var_2680 = 7816440442768909182;
    pri = FlagSet(var_2680)
    var_2688 = 387792121742723038;
    pri = FlagSet(var_2688)
    var_2696 = 6718143717892348318;
    pri = FlagSet(var_2696)
    var_2704 = 3012735517485661393;
    pri = FlagSet(var_2704)
    var_2712 = 1139048380943932808;
    pri = FlagSet(var_2712)
    var_2720 = -7785343324082770324;
    pri = FlagSet(var_2720)
    var_2728 = -164538243036851154;
    pri = FlagSet(var_2728)
    var_2736 = -5321351475360329479;
    pri = FlagSet(var_2736)
    var_2744 = -4984428124630057404;
    pri = FlagSet(var_2744)
    var_2752 = 7694382768399930019;
    pri = FlagSet(var_2752)
    var_2760 = 387838090113935797;
    pri = FlagSet(var_2760)
    var_2768 = -1349778034395884683;
    pri = FlagSet(var_2768)
    var_2776 = 7473960101546429514;
    pri = FlagSet(var_2776)
    var_2784 = 1688300219790732716;
    pri = FlagSet(var_2784)
    var_2792 = -8218456393840537451;
    pri = FlagSet(var_2792)
    var_2800 = 6513469414483989899;
    pri = FlagSet(var_2800)
    var_2808 = -4893233655299320911;
    pri = FlagSet(var_2808)
    var_2816 = -785782855654695402;
    pri = FlagSet(var_2816)
    var_2824 = -5689261488698659897;
    pri = FlagSet(var_2824)
    var_2832 = -8973315221164296937;
    pri = FlagSet(var_2832)
    var_2840 = -4706292389713189629;
    pri = FlagSet(var_2840)
    var_2848 = -7270143436548576266;
    pri = FlagSet(var_2848)
    var_2856 = 6647385320559237855;
    pri = FlagSet(var_2856)
    var_2864 = 6905620846586353737;
    pri = FlagSet(var_2864)
    var_2872 = -1822226077523994044;
    pri = FlagSet(var_2872)
    var_2880 = -3147750900567566230;
    pri = FlagSet(var_2880)
    var_2888 = 2895981217777046770;
    pri = FlagSet(var_2888)
    var_2896 = 8653505451221769205;
    pri = FlagSet(var_2896)
    var_2904 = -2634777529138130236;
    pri = FlagSet(var_2904)
    var_2912 = -7800673974562670051;
    pri = FlagSet(var_2912)
    var_2920 = -4374024216485124166;
    pri = FlagSet(var_2920)
    var_2928 = -7811456750994411148;
    pri = FlagSet(var_2928)
    var_2936 = -130345246077277967;
    pri = FlagSet(var_2936)
    var_2944 = 6867508795578722623;
    pri = FlagSet(var_2944)
    var_2952 = 6867509895090350834;
    pri = FlagSet(var_2952)
    var_2960 = -9002353280860239615;
    pri = FlagSet(var_2960)
    var_2968 = -683078124329981204;
    pri = FlagSet(var_2968)
    var_2976 = 1106296903455206425;
    pri = FlagSet(var_2976)
    var_2984 = 8316871755620665972;
    pri = FlagSet(var_2984)
    var_2992 = -8958263881345873397;
    pri = FlagSet(var_2992)
    var_3000 = 643169185203737588;
    pri = FlagSet(var_3000)
    var_3008 = 5416558514670626579;
    pri = FlagSet(var_3008)
    var_3016 = -4124947564017203457;
    pri = FlagSet(var_3016)
    var_3024 = -6635286479268925353;
    pri = FlagSet(var_3024)
    var_3032 = -783341769600439278;
    pri = FlagSet(var_3032)
    var_3040 = 1551124569145526424;
    pri = FlagSet(var_3040)
    var_3048 = 4416541122757820847;
    pri = FlagSet(var_3048)
    var_3056 = 6149361526766711478;
    pri = FlagSet(var_3056)
    var_3064 = 398139449972301239;
    pri = FlagSet(var_3064)
    var_3072 = -5633339793993941687;
    pri = FlagSet(var_3072)
    var_3080 = 2649506633853810915;
    pri = FlagSet(var_3080)
    var_3088 = 7856789072662591994;
    pri = FlagSet(var_3088)
    var_3096 = 1388184477031301254;
    pri = FlagSet(var_3096)
    var_3104 = -351125813381875025;
    pri = FlagSet(var_3104)
    var_3112 = -7417824923732940501;
    pri = FlagSet(var_3112)
    var_3120 = 293095515385682860;
    pri = FlagSet(var_3120)
    var_3128 = 8892982613819863695;
    pri = FlagSet(var_3128)
    var_3136 = 7927692416553760981;
    pri = FlagSet(var_3136)
    var_3144 = 12376771534612344;
    pri = FlagSet(var_3144)
    var_3152 = -464315911094145909;
    pri = FlagSet(var_3152)
    var_3160 = -464312612559261276;
    pri = FlagSet(var_3160)
    var_3168 = -957350763623574401;
    pri = FlagSet(var_3168)
    var_3176 = 2162984971204676483;
    pri = FlagSet(var_3176)
    var_3184 = -1517632578076027777;
    pri = FlagSet(var_3184)
    var_3192 = 8567564428947440771;
    pri = FlagSet(var_3192)
    var_3200 = 1773351177496499754;
    pri = FlagSet(var_3200)
    var_3208 = 6740051908999982722;
    pri = FlagSet(var_3208)
    var_3216 = -1388330654265746967;
    pri = FlagSet(var_3216)
    var_3224 = -3646626466504250240;
    pri = FlagSet(var_3224)
    var_3232 = 4768062365477788911;
    pri = FlagSet(var_3232)
    var_3240 = -5365638758836490511;
    pri = FlagSet(var_3240)
    var_3248 = -2965822370794371503;
    pri = FlagSet(var_3248)
    var_3256 = 8855976090230375108;
    pri = FlagSet(var_3256)
    var_3264 = -672553494604168372;
    pri = FlagSet(var_3264)
    var_3272 = -303377521461947352;
    pri = FlagSet(var_3272)
    var_3280 = -2963507660619991057;
    pri = FlagSet(var_3280)
    var_3288 = -2963506561108362846;
    pri = FlagSet(var_3288)
    var_3296 = 3932988810004887490;
    pri = FlagSet(var_3296)
    var_3304 = -2963505461596734635;
    pri = FlagSet(var_3304)
    var_3312 = 3932987710493259279;
    pri = FlagSet(var_3312)
    var_3320 = -2963513158178132112;
    pri = FlagSet(var_3320)
    var_3328 = -2963512058666503901;
    pri = FlagSet(var_3328)
    var_3336 = 3932986610981631068;
    pri = FlagSet(var_3336)
    var_3344 = 3932985511470002857;
    pri = FlagSet(var_3344)
    var_3352 = 4949931760410899326;
    pri = FlagSet(var_3352)
    var_3360 = -2963510959154875690;
    pri = FlagSet(var_3360)
    var_3368 = 4949930660899271115;
    pri = FlagSet(var_3368)
    var_3376 = 3593635681699453544;
    pri = FlagSet(var_3376)
    var_3384 = -1180051137964617721;
    pri = FlagSet(var_3384)
    var_3392 = -3123382877661890469;
    pri = FlagSet(var_3392)
    var_3400 = 2200388119624283720;
    pri = FlagSet(var_3400)
    var_3408 = -3736443088335965036;
    pri = FlagSet(var_3408)
    var_3416 = -2880321909380894005;
    pri = FlagSet(var_3416)
    var_3424 = 3891751626396970610;
    pri = FlagSet(var_3424)
    var_3432 = 6937552327517786733;
    pri = FlagSet(var_3432)
    var_3440 = 6937540232889876412;
    pri = FlagSet(var_3440)
    var_3448 = -6406173741565687760;
    pri = FlagSet(var_3448)
    var_3456 = -463679841549179559;
    pri = FlagSet(var_3456)
    var_3464 = 5853607184497386062;
    pri = FlagSet(var_3464)
    var_3472 = 547143905629064524;
    pri = FlagSet(var_3472)
    var_3480 = -1397410882338721035;
    pri = FlagSet(var_3480)
    var_3488 = -7410766090770750972;
    pri = FlagSet(var_3488)
    var_3496 = 5123282357415888306;
    pri = FlagSet(var_3496)
    var_3504 = -1893674408148688629;
    pri = FlagSet(var_3504)
    var_3512 = -7957091523925665997;
    pri = FlagSet(var_3512)
    var_3520 = 7366913082650908554;
    pri = FlagSet(var_3520)
    var_3528 = -6527131671004063671;
    pri = FlagSet(var_3528)
    var_3536 = 4156158420330092502;
    pri = FlagSet(var_3536)
    var_3544 = -8755440991666276328;
    pri = FlagSet(var_3544)
    var_3552 = -8755446489224417383;
    pri = FlagSet(var_3552)
    var_3560 = 1372741294210509627;
    pri = FlagSet(var_3560)
    var_3568 = 5031382083998270356;
    pri = FlagSet(var_3568)
    var_3576 = 1130723494474694849;
    pri = FlagSet(var_3576)
    var_3584 = -4237019533666158271;
    pri = FlagSet(var_3584)
    var_3592 = -4237031628294068592;
    pri = FlagSet(var_3592)
    var_3600 = 4322625172868200955;
    pri = FlagSet(var_3600)
    var_3608 = 1854599915766895833;
    pri = FlagSet(var_3608)
    var_3616 = -2117705809819912762;
    pri = FlagSet(var_3616)
    var_3624 = 118753704079410460;
    pri = FlagSet(var_3624)
    var_3632 = 6660951804926948019;
    pri = FlagSet(var_3632)
    var_3640 = -4971445171120860642;
    pri = FlagSet(var_3640)
    var_3648 = -2780782667399596389;
    pri = FlagSet(var_3648)
    var_3656 = -66433073690856353;
    pri = FlagSet(var_3656)
    var_3664 = 8287683314310166736;
    pri = FlagSet(var_3664)
    var_3672 = 8053569876173910393;
    pri = FlagSet(var_3672)
    var_3680 = 3444055432580894141;
    pri = FlagSet(var_3680)
    var_3688 = 3444054333069265930;
    pri = FlagSet(var_3688)
    var_3696 = 6862435835977116128;
    pri = FlagSet(var_3696)
    var_3704 = 6862436935488744339;
    pri = FlagSet(var_3704)
    var_3712 = 6862438035000372550;
    pri = FlagSet(var_3712)
    var_3720 = 6862439134512000761;
    pri = FlagSet(var_3720)
    var_3728 = 6862449030116654660;
    pri = FlagSet(var_3728)
    var_3736 = -8861403721397965071;
    pri = FlagSet(var_3736)
    var_3744 = 4588701099155483113;
    pri = FlagSet(var_3744)
    var_3752 = -3113441888070653316;
    pri = FlagSet(var_3752)
    var_3760 = -812938253260952198;
    pri = FlagSet(var_3760)
    var_3768 = 5595895409926974626;
    pri = FlagSet(var_3768)
    var_3776 = 5595896509438602837;
    pri = FlagSet(var_3776)
    var_3784 = 5595893210903718204;
    pri = FlagSet(var_3784)
    var_3792 = 5595894310415346415;
    pri = FlagSet(var_3792)
    var_3800 = 8018861594109541073;
    pri = FlagSet(var_3800)
    var_3808 = 8018849499481630752;
    pri = FlagSet(var_3808)
    var_3816 = 4637153820979408116;
    pri = FlagSet(var_3816)
    var_3824 = 688830528901060397;
    pri = FlagSet(var_3824)
    var_3832 = -3748282655303313513;
    pri = FlagSet(var_3832)
    var_3840 = 4477399624824395582;
    pri = FlagSet(var_3840)
    var_3848 = 7198756580005256125;
    pri = FlagSet(var_3848)
    var_3856 = -4535650465247009105;
    pri = FlagSet(var_3856)
    var_3864 = -6123113357586276550;
    pri = FlagSet(var_3864)
    var_3872 = -6123123253190930449;
    pri = FlagSet(var_3872)
    var_3880 = -1554014642428341586;
    pri = FlagSet(var_3880)
    var_3888 = -9073444652711349948;
    pri = FlagSet(var_3888)
    var_3896 = -3600543307321665573;
    pri = FlagSet(var_3896)
    var_3904 = 5901625555322344598;
    pri = FlagSet(var_3904)
    var_3912 = -1995419997847866053;
    pri = FlagSet(var_3912)
    var_3920 = -7718714376658834905;
    pri = FlagSet(var_3920)
    var_3928 = 3641199730571183281;
    pri = FlagSet(var_3928)
    var_3936 = -8328642263788588591;
    pri = FlagSet(var_3936)
    var_3944 = -8328654358416498912;
    pri = FlagSet(var_3944)
    var_3952 = -7228191161882330812;
    pri = FlagSet(var_3952)
    var_3960 = 8354367212204860235;
    pri = FlagSet(var_3960)
    var_3968 = -316047009090804736;
    pri = FlagSet(var_3968)
    var_3976 = -2946325732682814391;
    pri = FlagSet(var_3976)
    var_3984 = -3563485881366118589;
    pri = FlagSet(var_3984)
    var_3992 = -1550676495148187892;
    pri = FlagSet(var_3992)
    var_4000 = 5626903673887278750;
    pri = FlagSet(var_4000)
    var_4008 = -1145167662867329443;
    pri = FlagSet(var_4008)
    var_4016 = -4673310409164856701;
    pri = FlagSet(var_4016)
    var_4024 = 2216618159322974925;
    pri = FlagSet(var_4024)
    var_4032 = -8397937223901467836;
    pri = FlagSet(var_4032)
    var_4040 = -8399045066815602958;
    pri = FlagSet(var_4040)
    var_4048 = -4601338112117134426;
    pri = FlagSet(var_4048)
    var_4056 = 1714533968603238541;
    pri = FlagSet(var_4056)
    var_4064 = -3080511186278356512;
    pri = FlagSet(var_4064)
    var_4072 = -1985652461983578070;
    pri = FlagSet(var_4072)
    var_4080 = -3598189572607956399;
    pri = FlagSet(var_4080)
    var_4088 = -3963089787682859935;
    pri = FlagSet(var_4088)
    var_4096 = 7606634048257225585;
    pri = FlagSet(var_4096)
    var_4104 = 456344909220120189;
    pri = FlagSet(var_4104)
    var_4112 = -4889189955526537819;
    pri = FlagSet(var_4112)
    var_4120 = 1141313780110520273;
    pri = FlagSet(var_4120)
    var_4128 = -587242334477354430;
    pri = FlagSet(var_4128)
    var_4136 = -7553978749038383413;
    pri = FlagSet(var_4136)
    var_4144 = 1516618099705160561;
    pri = FlagSet(var_4144)
    var_4152 = 1032537072811622167;
    pri = FlagSet(var_4152)
    var_4160 = 1157467776379281293;
    pri = FlagSet(var_4160)
    var_4168 = -1103613497924482127;
    pri = FlagSet(var_4168)
    var_4176 = 8192753114472961747;
    pri = FlagSet(var_4176)
    var_4184 = -5290567873877948523;
    pri = FlagSet(var_4184)
    var_4192 = -1658347341221882014;
    pri = FlagSet(var_4192)
    var_4200 = 4153083102117004023;
    pri = FlagSet(var_4200)
    var_4208 = 2029204762929083870;
    pri = FlagSet(var_4208)
    var_4216 = -6904460519603837464;
    pri = FlagSet(var_4216)
    var_4224 = 2536016370620122602;
    pri = FlagSet(var_4224)
    var_4232 = -98310360955755334;
    pri = FlagSet(var_4232)
    var_4240 = 7078417717483480727;
    pri = FlagSet(var_4240)
    var_4248 = -8074183856950479541;
    pri = FlagSet(var_4248)
    var_4256 = -5663627750221996031;
    pri = FlagSet(var_4256)
    var_4264 = 4188046879888384287;
    pri = FlagSet(var_4264)
    var_4272 = 7412181012284178912;
    pri = FlagSet(var_4272)
    var_4280 = 6560277620740561664;
    pri = FlagSet(var_4280)
    var_4288 = -8446806533310799730;
    pri = FlagSet(var_4288)
    var_4296 = -4944442492494389738;
    pri = FlagSet(var_4296)
    var_4304 = 1520678507684672495;
    pri = FlagSet(var_4304)
    var_4312 = 5330537022675391310;
    pri = FlagSet(var_4312)
    var_4320 = 5664822906954742011;
    pri = FlagSet(var_4320)
    var_4328 = -988081304844711546;
    pri = FlagSet(var_4328)
    var_4336 = -7963071361348574373;
    pri = FlagSet(var_4336)
    var_4344 = -7963079057929971850;
    pri = FlagSet(var_4344)
    var_4352 = -7856618442502275419;
    pri = FlagSet(var_4352)
    var_4360 = 8594007528122057589;
    pri = FlagSet(var_4360)
    var_4368 = -8328680712272566952;
    pri = FlagSet(var_4368)
    var_4376 = 3447269533191472208;
    pri = FlagSet(var_4376)
    var_4384 = 6337321403593889913;
    pri = FlagSet(var_4384)
    var_4392 = -7278861448092522080;
    pri = FlagSet(var_4392)
    var_4400 = -8722475237237873584;
    pri = FlagSet(var_4400)
    var_4408 = -6172060507476320999;
    pri = FlagSet(var_4408)
    var_4416 = -5194924915703375849;
    pri = FlagSet(var_4416)
    var_4424 = 2486974047188821742;
    pri = FlagSet(var_4424)
    var_4432 = 1694664729997947566;
    pri = FlagSet(var_4432)
    var_4440 = -7538304522349733508;
    pri = FlagSet(var_4440)
    var_4448 = 2427332002786397889;
    pri = FlagSet(var_4448)
    var_4456 = -4984660476301504303;
    pri = FlagSet(var_4456)
    var_4464 = -4984672570929414624;
    pri = FlagSet(var_4464)
    var_4472 = -5819758985880837554;
    pri = FlagSet(var_4472)
    var_4480 = 7078654711603879870;
    pri = FlagSet(var_4480)
    var_4488 = 1303735410573414071;
    pri = FlagSet(var_4488)
    var_4496 = -8327649383280945428;
    pri = FlagSet(var_4496)
    var_4504 = -926766122763761482;
    pri = FlagReset(var_4504)
    var_4512 = -753250835465839301;
    pri = FlagSet(var_4512)
    OP_PUSH2_C -2916345239092709701, -2916366129813645710
    var_4520 = 16;
    pri = fun_05F8(var_4512, var_4504)
    var_4528 = pri;
    pri = FlagSet(var_4528)
    pri = 0;
    return pri;
}
// fun_6118
fun_6118() {
    var_8 = 5750971725145164889;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_6158
fun_6158() {
    pri = CommandNOP()
    var_8 = 3;
    var_16 = 8;
    pri = fun_00E8(var_8)
    var_24 = 0;
    pri = fun_0890()
    var_32 = 0;
    pri = fun_6118()
    var_40 = 0;
    pri = fun_88A0()
    var_48 = 0;
    pri = fun_0650()
    pri = PlayerGetSex()
    OP_JNZ lab_6258
    var_56 = 550817590317733207;
    pri = FlagReset(var_56)
    OP_JUMP lab_6280
// lab_6258
    var_8 = -5165677370440995445;
    pri = FlagReset(var_8)
// lab_6280
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_62E8
    var_8 = 6188688822059352447;
    pri = FlagSet(var_8)
    OP_JUMP lab_6310
// lab_62E8
    var_8 = 1415074643067412438;
    pri = FlagSet(var_8)
// lab_6310
    var_8 = 2610220889158092514;
    pri = FlagSet(var_8)
    var_16 = 5719297239432064110;
    pri = FlagSet(var_16)
    var_24 = 4620856866437920034;
    pri = FlagSet(var_24)
    var_32 = 4912827976898292528;
    pri = FlagSet(var_32)
    var_40 = -3164948309531026310;
    pri = FlagSet(var_40)
    var_48 = -2946393096541456471;
    pri = FlagSet(var_48)
    var_56 = 3945789460015947337;
    pri = FlagSet(var_56)
    var_64 = 1;
    var_72 = 8;
    pri = fun_06C0(var_64)
    var_80 = 10;
    var_88 = 336300587360083209;
    pri = WorkSet(var_88, var_80)
    var_96 = 1;
    var_104 = 5527541426142670619;
    pri = WorkSet(var_104, var_96)
    var_112 = 1;
    var_120 = -4456992515142052892;
    pri = WorkSet(var_120, var_112)
    var_128 = 1000;
    var_136 = 8;
    pri = fun_0328(var_128)
    var_144 = 0;
    pri = fun_8728()
    var_152 = 0;
    pri = fun_87D8()
    var_160 = 3;
    var_168 = 17;
    pri = ItemAdd(var_168, var_160)
    var_176 = 1;
    var_184 = 703;
    pri = ItemAdd(var_184, var_176)
    var_192 = 1;
    var_200 = 1080;
    pri = ItemAdd(var_200, var_192)
    var_208 = 128;
    var_216 = -6267628599641695783;
    pri = WorkSet(var_216, var_208)
    var_224 = 100;
    var_232 = 1;
    var_240 = 16;
    pri = fun_0088(var_232, var_224)
    var_248 = pri;
    var_256 = 776807753077357730;
    pri = WorkSet(var_256, var_248)
    var_264 = 100;
    var_272 = 1;
    var_280 = 16;
    pri = fun_0088(var_272, var_264)
    var_288 = pri;
    var_296 = 776806653565729519;
    pri = WorkSet(var_296, var_288)
    var_304 = 100;
    var_312 = 1;
    var_320 = 16;
    pri = fun_0088(var_312, var_304)
    var_328 = pri;
    var_336 = 776805554054101308;
    pri = WorkSet(var_336, var_328)
    var_344 = 2234620552158517153;
    pri = FlagSet(var_344)
    var_352 = -3054674591831309094;
    pri = FlagSet(var_352)
    var_360 = 6843557689882585150;
    pri = FlagSet(var_360)
    var_368 = 0;
    var_376 = 100;
    var_384 = 16;
    pri = fun_0008(var_376, var_368)
    var_392 = pri;
    var_400 = 1325346859704536274;
    pri = WorkSet(var_400, var_392)
    var_408 = 0;
    var_416 = 100;
    var_424 = 16;
    pri = fun_0008(var_416, var_408)
    var_432 = pri;
    var_440 = 4889868170595686847;
    pri = WorkSet(var_440, var_432)
    var_448 = 0;
    var_456 = 100;
    var_464 = 16;
    pri = fun_0008(var_456, var_448)
    OP_ADD_P_C 1
    var_472 = pri;
    var_480 = -4922461017337725029;
    pri = WorkSet(var_480, var_472)
    var_488 = 0;
    var_496 = 100;
    var_504 = 16;
    pri = fun_0008(var_496, var_488)
    OP_ADD_P_C 1
    var_512 = pri;
    var_520 = -7370115527224682391;
    pri = WorkSet(var_520, var_512)
    var_528 = 0;
    var_536 = 100;
    var_544 = 16;
    pri = fun_0008(var_536, var_528)
    OP_ADD_P_C 1
    var_552 = pri;
    var_560 = 9015833752062682035;
    pri = WorkSet(var_560, var_552)
    var_568 = 6976591467573662175;
    pri = FlagSet(var_568)
    var_576 = 1405363174061267524;
    pri = FlagSet(var_576)
    var_584 = -5857638180272710291;
    pri = FlagSet(var_584)
    var_592 = 1319847341384060514;
    pri = FlagSet(var_592)
    var_600 = -7489293420604004125;
    pri = FlagSet(var_600)
    var_608 = -7489293420604004125;
    pri = FlagSet(var_608)
    var_616 = -572520493186561752;
    pri = FlagSet(var_616)
    var_624 = 8396331116892437585;
    pri = FlagSet(var_624)
    var_632 = -5048081930659341098;
    pri = FlagSet(var_632)
    var_640 = 8382391019613633172;
    pri = FlagSet(var_640)
    var_648 = -3206980937197852792;
    pri = FlagSet(var_648)
    var_656 = -295513285109879347;
    pri = FlagSet(var_656)
    var_664 = 235638423344666865;
    pri = FlagSet(var_664)
    var_672 = -3984905309655593796;
    pri = FlagSet(var_672)
    var_680 = 437309857629153751;
    pri = FlagSet(var_680)
    var_688 = 8950728635120640474;
    pri = FlagSet(var_688)
    var_696 = -7143533764906462843;
    pri = FlagSet(var_696)
    var_704 = 5581677564220011776;
    pri = FlagSet(var_704)
    var_712 = 8486605092696844941;
    pri = FlagSet(var_712)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6CA8
    var_720 = -1251043979743435512;
    pri = FlagSet(var_720)
    var_728 = 9084871044164192133;
    pri = FlagSet(var_728)
    OP_JUMP lab_6CF8
// lab_6CA8
    var_8 = 4639331620742658412;
    pri = FlagSet(var_8)
    var_16 = 4284010857221015048;
    pri = FlagSet(var_16)
// lab_6CF8
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6DD8
    var_8 = 8106079978163211080;
    pri = FlagSet(var_8)
    var_16 = 3659812871750077692;
    pri = FlagSet(var_16)
    var_24 = 2113986344944074123;
    pri = FlagSet(var_24)
    var_32 = -5184468426406343096;
    pri = FlagSet(var_32)
    OP_JUMP lab_6E78
// lab_6DD8
    var_8 = -8622062552344276047;
    pri = FlagSet(var_8)
    var_16 = 3177992585167662909;
    pri = FlagSet(var_16)
    var_24 = -4857160162063413694;
    pri = FlagSet(var_24)
    var_32 = -5184487118104022683;
    pri = FlagSet(var_32)
// lab_6E78
    pri = 0;
    return pri;
}
// fun_6E88
fun_6E88() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_0890()
    var_16 = 0;
    pri = fun_6118()
    var_24 = 0;
    pri = fun_88A0()
    pri = PlayerGetSex()
    OP_JNZ lab_6F50
    var_32 = 550817590317733207;
    pri = FlagReset(var_32)
    OP_JUMP lab_6F78
// lab_6F50
    var_8 = -5165677370440995445;
    pri = FlagReset(var_8)
// lab_6F78
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_6FE0
    var_8 = 6188688822059352447;
    pri = FlagSet(var_8)
    OP_JUMP lab_7008
// lab_6FE0
    var_8 = 1415074643067412438;
    pri = FlagSet(var_8)
// lab_7008
    var_8 = 2234620552158517153;
    pri = FlagSet(var_8)
    var_16 = -3054674591831309094;
    pri = FlagSet(var_16)
    var_24 = 6843557689882585150;
    pri = FlagSet(var_24)
    var_32 = -5962307436086630610;
    pri = FlagSet(var_32)
    var_40 = -9221739579950643884;
    pri = FlagSet(var_40)
    var_48 = 8148776415994478925;
    pri = FlagSet(var_48)
    var_56 = 7958203305269363613;
    pri = FlagSet(var_56)
    var_64 = -5709837727726135438;
    pri = FlagSet(var_64)
    var_72 = 2610220889158092514;
    pri = FlagSet(var_72)
    var_80 = 5719297239432064110;
    pri = FlagSet(var_80)
    var_88 = 6156808637371898465;
    pri = FlagSet(var_88)
    var_96 = 292601305930245919;
    pri = FlagSet(var_96)
    var_104 = 4620856866437920034;
    pri = FlagSet(var_104)
    var_112 = 7093823562630176359;
    pri = FlagSet(var_112)
    var_120 = 6520226307844289844;
    pri = FlagSet(var_120)
    var_128 = -8053805891332954820;
    pri = FlagSet(var_128)
    var_136 = 4670683926884430720;
    pri = FlagSet(var_136)
    var_144 = -5769160658289007030;
    pri = FlagSet(var_144)
    var_152 = 3447853788456145154;
    pri = FlagSet(var_152)
    var_160 = 1293907258682306415;
    pri = FlagSet(var_160)
    var_168 = -8799907414557996815;
    pri = FlagSet(var_168)
    var_176 = 3380472944985996827;
    pri = FlagSet(var_176)
    var_184 = 4668685613554153179;
    pri = FlagSet(var_184)
    var_192 = 6184071265140786515;
    pri = FlagSet(var_192)
    var_200 = -7105285698882344957;
    pri = FlagSet(var_200)
    var_208 = -7105284599370716746;
    pri = FlagSet(var_208)
    var_216 = -7105283499859088535;
    pri = FlagSet(var_216)
    var_224 = -7105282400347460324;
    pri = FlagSet(var_224)
    var_232 = -7105281300835832113;
    pri = FlagSet(var_232)
    var_240 = -7105280201324203902;
    pri = FlagSet(var_240)
    var_248 = -7105279101812575691;
    pri = FlagSet(var_248)
    var_256 = -7105278002300947480;
    pri = FlagSet(var_256)
    var_264 = -7105276902789319269;
    pri = FlagSet(var_264)
    var_272 = -7104435776393927079;
    pri = FlagSet(var_272)
    var_280 = -7104436875905555290;
    pri = FlagSet(var_280)
    var_288 = -8701599134619619336;
    pri = FlagSet(var_288)
    var_296 = 0;
    pri = fun_8728()
    var_304 = 10;
    var_312 = 336300587360083209;
    pri = WorkSet(var_312, var_304)
    var_320 = 1;
    var_328 = 5527541426142670619;
    pri = WorkSet(var_328, var_320)
    var_336 = 1;
    var_344 = -4456992515142052892;
    pri = WorkSet(var_344, var_336)
    var_352 = 0;
    pri = fun_87D8()
    var_360 = 1;
    var_368 = -6958835188024118277;
    pri = WorkSet(var_368, var_360)
    var_376 = 3000000;
    var_384 = 8;
    pri = fun_0328(var_376)
    var_392 = 1;
    var_400 = 1077;
    pri = ItemAdd(var_400, var_392)
    var_408 = 1;
    pri = SetPlayerGBand(var_408)
    var_416 = -4825674380137535056;
    pri = FlagSet(var_416)
    var_424 = 1;
    var_432 = 1075;
    pri = ItemAdd(var_432, var_424)
    var_440 = 1;
    var_448 = 703;
    pri = ItemAdd(var_448, var_440)
    var_456 = 1;
    var_464 = 1255;
    pri = ItemAdd(var_464, var_456)
    var_472 = 1;
    var_480 = 1080;
    pri = ItemAdd(var_480, var_472)
    var_488 = 6037426689042037478;
    pri = FlagSet(var_488)
    var_496 = 6037425589530409267;
    pri = FlagSet(var_496)
    var_504 = 6037424490018781056;
    pri = FlagSet(var_504)
    var_512 = 6037432186600178533;
    pri = FlagSet(var_512)
    var_520 = 6037431087088550322;
    pri = FlagSet(var_520)
    var_528 = 6037429987576922111;
    pri = FlagSet(var_528)
    var_536 = -7129106813683726140;
    pri = FlagSet(var_536)
    var_544 = 1541382543354576061;
    pri = FlagSet(var_544)
    var_552 = -8898736271188799298;
    pri = FlagSet(var_552)
    var_560 = 6655440032673617314;
    pri = FlagSet(var_560)
    var_568 = -1068059977769391999;
    pri = FlagSet(var_568)
    var_576 = 663141959539201238;
    pri = FlagSet(var_576)
    var_584 = 128;
    var_592 = -6267628599641695783;
    pri = WorkSet(var_592, var_584)
    var_600 = 100;
    var_608 = 1;
    var_616 = 16;
    pri = fun_0088(var_608, var_600)
    var_624 = pri;
    var_632 = 776807753077357730;
    pri = WorkSet(var_632, var_624)
    var_640 = 100;
    var_648 = 1;
    var_656 = 16;
    pri = fun_0088(var_648, var_640)
    var_664 = pri;
    var_672 = 776806653565729519;
    pri = WorkSet(var_672, var_664)
    var_680 = 100;
    var_688 = 1;
    var_696 = 16;
    pri = fun_0088(var_688, var_680)
    var_704 = pri;
    var_712 = 776805554054101308;
    pri = WorkSet(var_712, var_704)
    var_720 = 0;
    var_728 = 100;
    var_736 = 16;
    pri = fun_0008(var_728, var_720)
    var_744 = pri;
    var_752 = 1325346859704536274;
    pri = WorkSet(var_752, var_744)
    var_760 = 0;
    var_768 = 100;
    var_776 = 16;
    pri = fun_0008(var_768, var_760)
    var_784 = pri;
    var_792 = 4889868170595686847;
    pri = WorkSet(var_792, var_784)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7C20
    var_800 = -1251043979743435512;
    pri = FlagSet(var_800)
    var_808 = 9084871044164192133;
    pri = FlagSet(var_808)
    OP_JUMP lab_7C70
// lab_7C20
    var_8 = 4639331620742658412;
    pri = FlagSet(var_8)
    var_16 = 4284010857221015048;
    pri = FlagSet(var_16)
// lab_7C70
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7D50
    var_8 = 8106079978163211080;
    pri = FlagSet(var_8)
    var_16 = 3659812871750077692;
    pri = FlagSet(var_16)
    var_24 = 2113986344944074123;
    pri = FlagSet(var_24)
    var_32 = -5184468426406343096;
    pri = FlagSet(var_32)
    OP_JUMP lab_7DF0
// lab_7D50
    var_8 = -8622062552344276047;
    pri = FlagSet(var_8)
    var_16 = 3177992585167662909;
    pri = FlagSet(var_16)
    var_24 = -4857160162063413694;
    pri = FlagSet(var_24)
    var_32 = -5184487118104022683;
    pri = FlagSet(var_32)
// lab_7DF0
    var_8 = 0;
    var_16 = 100;
    var_24 = 16;
    pri = fun_0008(var_16, var_8)
    OP_ADD_P_C 1
    var_32 = pri;
    var_40 = -4922461017337725029;
    pri = WorkSet(var_40, var_32)
    var_48 = 0;
    var_56 = 100;
    var_64 = 16;
    pri = fun_0008(var_56, var_48)
    OP_ADD_P_C 1
    var_72 = pri;
    var_80 = -7370115527224682391;
    pri = WorkSet(var_80, var_72)
    var_88 = 0;
    var_96 = 100;
    var_104 = 16;
    pri = fun_0008(var_96, var_88)
    OP_ADD_P_C 1
    var_112 = pri;
    var_120 = 9015833752062682035;
    pri = WorkSet(var_120, var_112)
    var_128 = 3216989005259082369;
    pri = FlagReset(var_128)
    pri = 0;
    return pri;
}
// fun_7F48
fun_7F48() {
    var_8 = 9010327285021969031;
    pri = FlagSet(var_8)
    var_16 = -7104436875905555290;
    pri = FlagSet(var_16)
    var_24 = 1996327394012649957;
    pri = FlagReset(var_24)
    var_32 = -926766122763761482;
    pri = FlagSet(var_32)
    var_40 = -8327649383280945428;
    pri = FlagReset(var_40)
    var_48 = -4825674380137535056;
    pri = FlagReset(var_48)
    var_56 = 8605829310283107306;
    pri = FlagSet(var_56)
    var_64 = -4944442492494389738;
    pri = FlagReset(var_64)
    var_72 = 952;
    var_80 = 8;
    pri = fun_0398(var_72)
    var_88 = -8752831175564517481;
    pri = FlagSet(var_88)
    var_96 = -8752830076052889270;
    pri = FlagReset(var_96)
    var_104 = -7045052338775704800;
    pri = FlagSet(var_104)
    var_112 = 1;
    var_120 = 2019152596824525233;
    pri = WorkSet(var_120, var_112)
    var_128 = 10;
    var_136 = 8312327445073408207;
    pri = WorkSet(var_136, var_128)
    var_144 = 4915895829130115764;
    pri = FlagReset(var_144)
    var_152 = 3160493614543024327;
    pri = FlagReset(var_152)
    var_160 = 10;
    var_168 = 1499409312851771820;
    pri = WorkSet(var_168, var_160)
    var_176 = -753250835465839301;
    pri = FlagReset(var_176)
    var_184 = -4601655790924892273;
    pri = FlagSet(var_184)
    OP_PUSH2_C -2916366129813645710, -2916345239092709701
    var_192 = 16;
    pri = fun_05F8(var_184, var_176)
    var_200 = pri;
    pri = FlagSet(var_200)
    var_208 = 1;
    var_216 = 7281706755392414581;
    pri = WorkSet(var_216, var_208)
    var_224 = 3822075576610749444;
    pri = FlagSet(var_224)
    var_232 = 2234620552158517153;
    pri = FlagReset(var_232)
    var_240 = -3054674591831309094;
    pri = FlagReset(var_240)
    var_248 = 6843557689882585150;
    pri = FlagReset(var_248)
    var_256 = 1;
    var_264 = 2103038975166986794;
    pri = WorkSet(var_264, var_256)
    var_272 = 8192754213984589958;
    pri = FlagSet(var_272)
    var_280 = 8192753114472961747;
    pri = FlagReset(var_280)
    var_288 = -6558256728329565588;
    pri = FlagSet(var_288)
    var_296 = 6976591467573662175;
    pri = FlagReset(var_296)
    var_304 = 1405363174061267524;
    pri = FlagReset(var_304)
    var_312 = -5857638180272710291;
    pri = FlagReset(var_312)
    var_320 = 1319847341384060514;
    pri = FlagReset(var_320)
    var_328 = -7489293420604004125;
    pri = FlagReset(var_328)
    var_336 = -7489293420604004125;
    pri = FlagReset(var_336)
    var_344 = -572520493186561752;
    pri = FlagReset(var_344)
    var_352 = 8396331116892437585;
    pri = FlagReset(var_352)
    var_360 = -5048081930659341098;
    pri = FlagReset(var_360)
    var_368 = 8382391019613633172;
    pri = FlagReset(var_368)
    var_376 = -3206980937197852792;
    pri = FlagReset(var_376)
    var_384 = -295513285109879347;
    pri = FlagReset(var_384)
    var_392 = 235638423344666865;
    pri = FlagReset(var_392)
    var_400 = -3984905309655593796;
    pri = FlagReset(var_400)
    var_408 = 437309857629153751;
    pri = FlagReset(var_408)
    var_416 = 8950728635120640474;
    pri = FlagReset(var_416)
    var_424 = -7143533764906462843;
    pri = FlagReset(var_424)
    var_432 = 5581677564220011776;
    pri = FlagReset(var_432)
    var_440 = -939995838075939757;
    pri = FlagSet(var_440)
    pri = 0;
    return pri;
}
// fun_8728
fun_8728() {
    pri = PlayerGetSex()
    OP_JNZ lab_8798
    var_8 = 1;
    var_16 = -4782185239360289478;
    pri = WorkSet(var_16, var_8)
    OP_JUMP lab_87C8
// lab_8798
    var_8 = 0;
    var_16 = -4782185239360289478;
    pri = WorkSet(var_16, var_8)
// lab_87C8
    pri = 0;
    return pri;
}
// fun_87D8
fun_87D8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 16;
    pri = fun_05F8(var_16, var_8)
    var_32 = pri;
    var_40 = 5806912219719071553;
    pri = WorkSet(var_40, var_32)
    var_48 = 1;
    var_56 = 0;
    var_64 = 16;
    pri = fun_05F8(var_56, var_48)
    var_72 = pri;
    var_80 = 1622007190656976460;
    pri = WorkSet(var_80, var_72)
    pri = 0;
    return pri;
}
// fun_88A0
fun_88A0() {
    pri = PlayerGetSex()
    OP_JNZ lab_8B60
    var_8 = 1024;
    var_16 = 7;
    var_24 = 16;
    pri = fun_0358(var_16, var_8)
    var_32 = 1248;
    var_40 = 9;
    var_48 = 16;
    pri = fun_0358(var_40, var_32)
    var_56 = 1440;
    var_64 = 12;
    var_72 = 16;
    pri = fun_0358(var_64, var_56)
    var_80 = 1760;
    var_88 = 13;
    var_96 = 16;
    pri = fun_0358(var_88, var_80)
    var_104 = 2024;
    var_112 = 14;
    var_120 = 16;
    pri = fun_0358(var_112, var_104)
    var_128 = 2288;
    var_136 = 10;
    var_144 = 16;
    pri = fun_0358(var_136, var_128)
    var_152 = 2584;
    var_160 = 6;
    var_168 = 16;
    pri = fun_0358(var_160, var_152)
    var_176 = 2856;
    var_184 = 6;
    var_192 = 16;
    pri = fun_0358(var_184, var_176)
    var_200 = 3136;
    var_208 = 11;
    var_216 = 16;
    pri = fun_0358(var_208, var_200)
    var_224 = 3344;
    var_232 = 11;
    var_240 = 16;
    pri = fun_0358(var_232, var_224)
    var_248 = 3560;
    var_256 = 9;
    var_264 = 16;
    pri = fun_0358(var_256, var_248)
    var_272 = 3784;
    var_280 = 9;
    var_288 = 16;
    pri = fun_0358(var_280, var_272)
    var_296 = 3992;
    var_304 = 9;
    var_312 = 16;
    pri = fun_0358(var_304, var_296)
    var_320 = 4208;
    var_328 = 12;
    var_336 = 16;
    pri = fun_0358(var_328, var_320)
    var_344 = 4464;
    var_352 = 13;
    var_360 = 16;
    pri = fun_0358(var_352, var_344)
    var_368 = 4704;
    var_376 = 13;
    var_384 = 16;
    pri = fun_0358(var_376, var_368)
    OP_JUMP lab_8DE0
// lab_8B60
    var_8 = 4944;
    var_16 = 7;
    var_24 = 16;
    pri = fun_0358(var_16, var_8)
    var_32 = 5184;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0358(var_40, var_32)
    var_56 = 5424;
    var_64 = 12;
    var_72 = 16;
    pri = fun_0358(var_64, var_56)
    var_80 = 5656;
    var_88 = 13;
    var_96 = 16;
    pri = fun_0358(var_88, var_80)
    var_104 = 5928;
    var_112 = 14;
    var_120 = 16;
    pri = fun_0358(var_112, var_104)
    var_128 = 6184;
    var_136 = 10;
    var_144 = 16;
    pri = fun_0358(var_136, var_128)
    var_152 = 6440;
    var_160 = 6;
    var_168 = 16;
    pri = fun_0358(var_160, var_152)
    var_176 = 6712;
    var_184 = 6;
    var_192 = 16;
    pri = fun_0358(var_184, var_176)
    var_200 = 6992;
    var_208 = 11;
    var_216 = 16;
    pri = fun_0358(var_208, var_200)
    var_224 = 7200;
    var_232 = 11;
    var_240 = 16;
    pri = fun_0358(var_232, var_224)
    var_248 = 7416;
    var_256 = 9;
    var_264 = 16;
    pri = fun_0358(var_256, var_248)
    var_272 = 7616;
    var_280 = 9;
    var_288 = 16;
    pri = fun_0358(var_280, var_272)
    var_296 = 7800;
    var_304 = 9;
    var_312 = 16;
    pri = fun_0358(var_304, var_296)
    var_320 = 7992;
    var_328 = 12;
    var_336 = 16;
    pri = fun_0358(var_328, var_320)
    var_344 = 8248;
    var_352 = 13;
    var_360 = 16;
    pri = fun_0358(var_352, var_344)
    var_368 = 8488;
    var_376 = 13;
    var_384 = 16;
    pri = fun_0358(var_376, var_368)
// lab_8DE0
    pri = 0;
    return pri;
}
