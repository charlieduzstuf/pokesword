#include "lib/std.inc"

main()
{
    switch (g_mode) {
        case 0x99ad6b990ec1f80:
            fun_0518()
        case 0:
            fun_0500()
        default:
            CommandNOP()
    }
}

fun_0500()
{
    return 0;
}

// TODO: can strings be unpacked properly
new FADE_COLOR[6] = {'B', 'L', 'A', 'C', 'K', '\00'};
fun_0518()
{
    new spawner_hash = GetLastSymbolEncoutSpawner();
    if (spawner_hash == z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01 || spawner_hash == z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_0 || spawner_hash == z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_1) {
        if (HasLostLastWildBattle()) {
            ResetSlowpokeFlag(spawner_hash);
            LoseBattle();
        } else {
            if (GetWildBattleResult() != WildBattleResult:RunAway && GetWildBattleResult() != WildBattleResult:Unk4 && GetWildBattleResult() != WildBattleResult:Unk6) {
                ReserveScript(0xa2efaf58c431762b);
            } else {
                ResetSlowpokeFlag(spawner_hash);
                FadeIn(4, FADE_COLOR);
                FadeWait();
            }
        }
        return;
    }
    if (spawner_hash == z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Mikaruge) {
        if (HasLostLastWildBattle()) {
            FlagReset(z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Mikaruge);
            LoseBattle();
        } else {
            if (GetWildBattleResult() == WildBattleResult:Capture) {
                FlagSet(FE_CAPTURE_MIKARUGE);
            } else {
                FlagReset(z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Mikaruge);
            }
            FadeIn(4, FADE_COLOR);
            FadeWait();
        }
    }
    new swords_of_justice[4][4] = {
        {z_wr0304_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, z_wr0304_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, 15301262184428037344, 8731045791824628257},
        {z_wr0312_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, z_wr0312_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, 6691191545088219118, 13673683019161706147},
        {z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, 11435832804260205878, 16646914286280865979},
        {z_wr0322_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, z_wr0322_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi, 3456461205869328739, 10149422678575480222},
    }
    for (new i = 0; i < 4; i++) {
        if (spawner_hash == swords_of_justice[i][0]) {
            if (HasLostLastWildBattle()) {
                FlagReset(swords_of_justice[i][1]);
                LoseBattle();
            } else {
                FadeIn(4, FADE_COLOR);
                FadeWait();
                if (GetWildBattleResult() == WildBattleResult:Capture) {
                    ReserveScript(swords_of_justice[i][2]);
                } else {
                    if (spawner_hash == z_wr0321_SymbolEncountPokemonGimmickSpawner_WR03_Sanjyuusi) {
                        if (WorkGet(WK_EV_KELDHIO_POP_AVAILABLE) == 2) {
                            WorkSet(WK_EV_KELDHIO_POP_AVAILABLE, 0);
                        }
                    } else {
                        FlagReset(swords_of_justice[i][1]);
                    }
                    ReserveScript(swords_of_justice[i][3]);
                }
            }
        }
    }
    if (spawner_hash == z_wr02onload_SymbolEncountPokemonGimmickSpawner_WR02_FIRE || spawner_hash == z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer || spawner_hash == z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER) {
        if (HasLostLastWildBattle()) {
            ResetBirdFlag(spawner_hash);
            LoseBattle();
        } else {
            if (GetWildBattleResult() == WildBattleResult:Win || GetWildBattleResult() == WildBattleResult:Capture) {
                FlagSet(FSYS_BTL_BGM_OPEN_VS35);
            }
            if (GetWildBattleResult() == WildBattleResult:Capture) {
                SetBirdFlag(spawner_hash);
                ReserveScript(0xcf5a1790e71a03a6);
            } else {
                ResetBirdFlag(spawner_hash);
                ReserveScript(0xa6c13987e6ad7491);
            }
            FadeIn(4, FADE_COLOR);
            FadeWait();
        }
        return;
    }
}
ResetSlowpokeFlag(spawner_hash)
{
    new slowpoke_hash = z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01;
    if (spawner_hash == z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_0) {
        slowpoke_hash = z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_0;
    } else {
        if (spawner_hash == z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_1) {
            slowpoke_hash = z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Yadon01_1;
        }
    }
    FlagReset(slowpoke_hash);
}
ResetBirdFlag(spawner_hash)
{
    new bird_hash = z_wr02onload_SymbolEncountPokemonGimmickSpawner_WR02_FIRE;
    if (spawner_hash == z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer) {
        bird_hash = z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer;
        FlagReset(z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer_left_d);
        FlagReset(z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer_right_d);
    } else {
        if (spawner_hash == z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER) {
            bird_hash = z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER;
        }
    }
    FlagReset(bird_hash);
}
SetBirdFlag(spawner_hash)
{
    new bird_hash = z_wr02onload_SymbolEncountPokemonGimmickSpawner_WR02_FIRE;
    if (spawner_hash == z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer) {
        bird_hash = z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer;
        FlagSet(z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer_left_d);
        FlagSet(z_wr03onload_SymbolEncountPokemonGimmickSpawner_WR03_Freezer_right_d);
    } else {
        if (spawner_hash == z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER) {
            bird_hash = z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER;
        }
    }
    FlagSet(bird_hash);
}