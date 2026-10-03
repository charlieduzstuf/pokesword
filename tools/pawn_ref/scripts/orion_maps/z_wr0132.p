#include "lib/std.inc"

main()
{
    switch (g_mode) {
        case 0x8d0140735a01920e:
            fun_0360()
        case 0xceab368884e58633:
            CheckYamaskEvolution()
        case 0x261dc1a76131e052:
            EvolveYamask()
        case 0x80a140f427c3f883:
            DisableYamaskEvolution()
        case 0:
            fun_0348()
        default:
            CommandNOP()
    }
}

fun_0348()
{
    return 0;
}

fun_0360()
{
    return 0;
}

CheckYamaskEvolution()
{
    if (FlagGet(FSYS_DESUMASU_EVOLVE_ENABLE) != 0) {
        return;
    }
    if (PokePartyCanEvolve(562)) {
        ReserveScript(0x261dc1a76131e052);
        FlagSet(FSYS_DESUMASU_EVOLVE_ENABLE);
    }
}

EvolveYamask()
{
    FadeOut(8, "BLACK", 0, 1);
    FadeWait();
    PokePartyCallEvolve(562, 1);
    FadeIn(8, "BLACK");
    FadeWait();
}

DisableYamaskEvolution()
{
    FlagReset(FSYS_DESUMASU_EVOLVE_ENABLE);
}
