#include "lib/std.inc"

RefreshHiddenItems()
{
   if (RomGetVersion() == GameVersion:Sword) {
        FlagReset(z_wr0201_HiddenItem_K_0);
        FlagReset(z_wr0202_HiddenItem_K_0);
        FlagReset(z_wr0208_HiddenItem_K_0);
        FlagReset(z_wr0208_HiddenItem_K_0_0);
    } else {
        FlagReset(z_wr0201_HiddenItem_T_0);
        FlagReset(z_wr0202_HiddenItem_T_0);
        FlagReset(z_wr0208_HiddenItem_T_0);
        FlagReset(z_wr0208_HiddenItem_T_0_0);
   }
}

TryResetDay()
{
    if (!FlagGet(TMFLG_WIDEROAD02_DAY_RESET_END)) {
        CommandNOP();
        FlagSet(TMFLG_WIDEROAD02_DAY_RESET_END);
        PlaceRandomNPCs(true, false, 0);
        RefreshGimmickSpawners();
        RefreshHiddenItems();
        if (WorkGet(WK_SCENE_R01_MAIN_MASTER) > 310) {
            PlaceGymLeaders(false);
        }
    }
}

// Places the random gym leaders (and hop) that appear with enough story progress
PlaceGymLeaders(should_skip_rival)
{
    new i = 0;
    new chosen = 0;
    if (RomGetVersion() == GameVersion:Sword) {
        new gym_leaders[70] = {
            FV_R1_YOROIJIMA_HOP_01,
            FV_R1_YOROIJIMA_HOP_02,
            FV_R1_YOROIJIMA_HOP_03,
            FV_R1_YOROIJIMA_HOP_04,
            FV_R1_YOROIJIMA_HOP_05,
            FV_R1_YOROIJIMA_HOP_06,
            FV_R1_YOROIJIMA_HOP_07,
            FV_R1_YOROIJIMA_YARO_01,
            FV_R1_YOROIJIMA_YARO_02,
            FV_R1_YOROIJIMA_YARO_03,
            FV_R1_YOROIJIMA_YARO_04,
            FV_R1_YOROIJIMA_YARO_05,
            FV_R1_YOROIJIMA_YARO_06,
            FV_R1_YOROIJIMA_YARO_07,
            FV_R1_YOROIJIMA_RURINA_01,
            FV_R1_YOROIJIMA_RURINA_02,
            FV_R1_YOROIJIMA_RURINA_03,
            FV_R1_YOROIJIMA_RURINA_04,
            FV_R1_YOROIJIMA_RURINA_05,
            FV_R1_YOROIJIMA_RURINA_06,
            FV_R1_YOROIJIMA_RURINA_07,
            FV_R1_YOROIJIMA_KABU_01,
            FV_R1_YOROIJIMA_KABU_02,
            FV_R1_YOROIJIMA_KABU_03,
            FV_R1_YOROIJIMA_KABU_04,
            FV_R1_YOROIJIMA_KABU_05,
            FV_R1_YOROIJIMA_KABU_06,
            FV_R1_YOROIJIMA_KABU_07,
            FV_R1_YOROIJIMA_BEET_01,
            FV_R1_YOROIJIMA_BEET_02,
            FV_R1_YOROIJIMA_BEET_03,
            FV_R1_YOROIJIMA_BEET_04,
            FV_R1_YOROIJIMA_BEET_05,
            FV_R1_YOROIJIMA_BEET_06,
            FV_R1_YOROIJIMA_BEET_07,
            FV_R1_YOROIJIMA_MARI_01,
            FV_R1_YOROIJIMA_MARI_02,
            FV_R1_YOROIJIMA_MARI_03,
            FV_R1_YOROIJIMA_MARI_04,
            FV_R1_YOROIJIMA_MARI_05,
            FV_R1_YOROIJIMA_MARI_06,
            FV_R1_YOROIJIMA_MARI_07,
            FV_R1_YOROIJIMA_NEZU_01,
            FV_R1_YOROIJIMA_NEZU_02,
            FV_R1_YOROIJIMA_NEZU_03,
            FV_R1_YOROIJIMA_NEZU_04,
            FV_R1_YOROIJIMA_NEZU_05,
            FV_R1_YOROIJIMA_NEZU_06,
            FV_R1_YOROIJIMA_NEZU_07,
            FV_R1_YOROIJIMA_KIBANA_01,
            FV_R1_YOROIJIMA_KIBANA_02,
            FV_R1_YOROIJIMA_KIBANA_03,
            FV_R1_YOROIJIMA_KIBANA_04,
            FV_R1_YOROIJIMA_KIBANA_05,
            FV_R1_YOROIJIMA_KIBANA_06,
            FV_R1_YOROIJIMA_KIBANA_07,
            FV_R1_YOROIJIMA_SAITO_01,
            FV_R1_YOROIJIMA_SAITO_02,
            FV_R1_YOROIJIMA_SAITO_03,
            FV_R1_YOROIJIMA_SAITO_04,
            FV_R1_YOROIJIMA_SAITO_05,
            FV_R1_YOROIJIMA_SAITO_06,
            FV_R1_YOROIJIMA_SAITO_07,
            FV_R1_YOROIJIMA_MAKUWA_01,
            FV_R1_YOROIJIMA_MAKUWA_02,
            FV_R1_YOROIJIMA_MAKUWA_03,
            FV_R1_YOROIJIMA_MAKUWA_04,
            FV_R1_YOROIJIMA_MAKUWA_05,
            FV_R1_YOROIJIMA_MAKUWA_06,
            FV_R1_YOROIJIMA_MAKUWA_07,
        };
        for (i = 0; i < 70; i++) {
            FlagSet(gym_leaders[i]);
        }
        if (should_skip_rival) {
            new d = 7;
            chosen = RandMax(70 - d, false) + d;
        } else {
            chosen = RandMax(70, false);
        }
        FlagReset(gym_leaders[chosen]);
    } else {
        new gym_leaders[70] = {
            FV_R1_YOROIJIMA_HOP_01,
            FV_R1_YOROIJIMA_HOP_02,
            FV_R1_YOROIJIMA_HOP_03,
            FV_R1_YOROIJIMA_HOP_04,
            FV_R1_YOROIJIMA_HOP_05,
            FV_R1_YOROIJIMA_HOP_06,
            FV_R1_YOROIJIMA_HOP_07,
            FV_R1_YOROIJIMA_YARO_01,
            FV_R1_YOROIJIMA_YARO_02,
            FV_R1_YOROIJIMA_YARO_03,
            FV_R1_YOROIJIMA_YARO_04,
            FV_R1_YOROIJIMA_YARO_05,
            FV_R1_YOROIJIMA_YARO_06,
            FV_R1_YOROIJIMA_YARO_07,
            FV_R1_YOROIJIMA_RURINA_01,
            FV_R1_YOROIJIMA_RURINA_02,
            FV_R1_YOROIJIMA_RURINA_03,
            FV_R1_YOROIJIMA_RURINA_04,
            FV_R1_YOROIJIMA_RURINA_05,
            FV_R1_YOROIJIMA_RURINA_06,
            FV_R1_YOROIJIMA_RURINA_07,
            FV_R1_YOROIJIMA_KABU_01,
            FV_R1_YOROIJIMA_KABU_02,
            FV_R1_YOROIJIMA_KABU_03,
            FV_R1_YOROIJIMA_KABU_04,
            FV_R1_YOROIJIMA_KABU_05,
            FV_R1_YOROIJIMA_KABU_06,
            FV_R1_YOROIJIMA_KABU_07,
            FV_R1_YOROIJIMA_BEET_01,
            FV_R1_YOROIJIMA_BEET_02,
            FV_R1_YOROIJIMA_BEET_03,
            FV_R1_YOROIJIMA_BEET_04,
            FV_R1_YOROIJIMA_BEET_05,
            FV_R1_YOROIJIMA_BEET_06,
            FV_R1_YOROIJIMA_BEET_07,
            FV_R1_YOROIJIMA_MARI_01,
            FV_R1_YOROIJIMA_MARI_02,
            FV_R1_YOROIJIMA_MARI_03,
            FV_R1_YOROIJIMA_MARI_04,
            FV_R1_YOROIJIMA_MARI_05,
            FV_R1_YOROIJIMA_MARI_06,
            FV_R1_YOROIJIMA_MARI_07,
            FV_R1_YOROIJIMA_NEZU_01,
            FV_R1_YOROIJIMA_NEZU_02,
            FV_R1_YOROIJIMA_NEZU_03,
            FV_R1_YOROIJIMA_NEZU_04,
            FV_R1_YOROIJIMA_NEZU_05,
            FV_R1_YOROIJIMA_NEZU_06,
            FV_R1_YOROIJIMA_NEZU_07,
            FV_R1_YOROIJIMA_KIBANA_01,
            FV_R1_YOROIJIMA_KIBANA_02,
            FV_R1_YOROIJIMA_KIBANA_03,
            FV_R1_YOROIJIMA_KIBANA_04,
            FV_R1_YOROIJIMA_KIBANA_05,
            FV_R1_YOROIJIMA_KIBANA_06,
            FV_R1_YOROIJIMA_KIBANA_07,
            FV_R1_YOROIJIMA_ONION_01,
            FV_R1_YOROIJIMA_ONION_02,
            FV_R1_YOROIJIMA_ONION_03,
            FV_R1_YOROIJIMA_ONION_04,
            FV_R1_YOROIJIMA_ONION_05,
            FV_R1_YOROIJIMA_ONION_06,
            FV_R1_YOROIJIMA_ONION_07,
            FV_R1_YOROIJIMA_MELON_01,
            FV_R1_YOROIJIMA_MELON_02,
            FV_R1_YOROIJIMA_MELON_03,
            FV_R1_YOROIJIMA_MELON_04,
            FV_R1_YOROIJIMA_MELON_05,
            FV_R1_YOROIJIMA_MELON_06,
            FV_R1_YOROIJIMA_MELON_07,
        };
        for (i = 0; i < 70; i++) {
            FlagSet(gym_leaders[i]);
        }
        if (should_skip_rival) {
            new d = 7;
            chosen = RandMax(70 - d, false) + d;
        } else {
            chosen = RandMax(70, false);
        }
        FlagReset(gym_leaders[chosen]);
    }
    if (chosen < 7) {
        FlagSet(z_wr0201_i0101_RIVAL_0);
    } else {
        if (WorkGet(WK_SCENE_R02_GST_MASTER) < 30) {
            FlagReset(z_wr0201_i0101_RIVAL_0);
        }
    }
}

RefreshGimmickSpawners()
{
    new spawners[181] = {
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0,
        z_wr0201_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_4,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_6,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_7,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_8,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_9,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_10,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_7_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_1,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_1_0,
        z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0_1,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_4,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_4_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0_1,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_4_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_3_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_4,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_5,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_1_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_4_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_3_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_5_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_3_1_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_3_1_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_3,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_3,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_0_0_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_2_0_0_0_2,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_4,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_4_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_5,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_4_0_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_6,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_6_0_0,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_2_0_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_3,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_1,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_1_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_1_1,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_1_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_1_1_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_2,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_4,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_6,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_7,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_8,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_9_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0_1,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_1_0_1_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_10,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_10_0,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_1,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_1_0,
        z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_1_0_0,
        z_wr0221_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0221_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0221_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0,
        z_wr0221_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0,
        z_wr0221_SymbolEncountPokemonGimmickSpawner_WR02_Common_1,
        z_wr0223_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0223_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common_0,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0_0,
        z_wr0231_SymbolEncountPokemonGimmickSpawner_WR02_Common_0_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_2,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_3,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_4,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_4_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0_0_0_0,
        z_wr0204_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0_0_0_1,
        z_wr0205_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0,
        z_wr0207_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1_0_0,
        z_wr0208_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1_0_0_0,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0,
        z_wr0224_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water,
        z_wr0224_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_0,
        z_wr0224_SymbolEncountPokemonGimmickSpawner_WR02_Common_Water_1,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0_0_0_0_0_0,
        z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Emonga_0_0_0_0_0_0_0_0,
    };
    new i = 0;
    for (i = 0; i < 181; i++) {
        FlagReset(spawners[i]);
    }
    if (RomGetVersion() == GameVersion:Sword) {
        FlagReset(z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0202_K_01);
        FlagReset(z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0202_K_02);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_01);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_02);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_03);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_04);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_05);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_06);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_K_07);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_01);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_02);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_03);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_04);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_05);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_06);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_07);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_08);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_09);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_K_10);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_K_01);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_K_02);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_K_03);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_K_01);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_K_02);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_K_03);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_K_04);
    } else {
        FlagReset(z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0202_T_01);
        FlagReset(z_wr0202_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0202_T_02);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_01);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_02);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_03);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_04);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_05);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_06);
        FlagReset(z_wr0203_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0203_T_07);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_01);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_02);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_03);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_04);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_05);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_06);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_07);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_08);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_09);
        FlagReset(z_wr0206_SymbolEncountPokemonGimmickSpawner_WR02_wr0206_T_10);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_T_01);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_T_02);
        FlagReset(z_wr0209_SymbolEncountPokemonGimmickSpawner_WR02_wr0209_T_03);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_T_01);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_T_02);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_T_03);
        FlagReset(z_wr0211_SymbolEncountPokemonGimmickSpawner_WR02_Common_wr0211_T_04);
    }
    if (FlagGet(EF_R2_MEMO_SANCHO_START)) {
        // Galarian Moltres
        if (!FlagGet(EF_R2_FAIYAA_GET)) {
            FlagReset(z_wr02onload_SymbolEncountPokemonGimmickSpawner_WR02_FIRE);
        }
    }
    // IOA Wailord
    if (RandMax(100, false) <= 0) {
        FlagReset(z_wr02onload_SymbolEncountPokemonGimmickSpawner_WR02_Hoeruo_0);
    }
}

new const trader_locations[45][2] = {
    {z_wr0201_WR02_TradeNPC,z_wr0201_WR02_TradeNPC},
    {z_wr0202_WR02_TradeNPC,z_wr0202_WR02_TradeNPC},
    {z_wr0202_WR02_TradeNPC_0,z_wr0202_WR02_TradeNPC_0},
    {z_wr0203_WR02_TradeNPC_0,z_wr0203_WR02_TradeNPC_0},
    {z_wr0203_WR02_TradeNPC,z_wr0203_WR02_TradeNPC},
    {z_wr0204_WR02_TradeNPC,z_wr0204_WR02_TradeNPC},
    {z_wr0204_WR02_TradeNPC_0,z_wr0204_WR02_TradeNPC_0},
    {z_wr0205_WR02_TradeNPC,z_wr0205_WR02_TradeNPC},
    {z_wr0205_WR02_TradeNPC_0,z_wr0205_WR02_TradeNPC_0},
    {z_wr0205_WR02_TradeNPC_1,z_wr0205_WR02_TradeNPC_1},
    {z_wr0202_WR02_TradeNPC_1,z_wr0202_WR02_TradeNPC_1},
    {z_wr0203_WR02_TradeNPC_1,z_wr0203_WR02_TradeNPC_1},
    {z_wr0205_WR02_TradeNPC_1,z_wr0205_WR02_TradeNPC_1},
    {z_wr0206_WR02_TradeNPC,z_wr0206_WR02_TradeNPC},
    {z_wr0206_WR02_TradeNPC_0,z_wr0206_WR02_TradeNPC_0},
    {z_wr0207_WR02_TradeNPC,z_wr0207_WR02_TradeNPC},
    {z_wr0207_WR02_TradeNPC_0,z_wr0207_WR02_TradeNPC_0},
    {z_wr0207_WR02_TradeNPC_1,z_wr0207_WR02_TradeNPC_1},
    {z_wr0208_WR02_TradeNPC,z_wr0208_WR02_TradeNPC},
    {z_wr0208_WR02_TradeNPC_0,z_wr0208_WR02_TradeNPC_0},
    {z_wr0209_WR02_TradeNPC,z_wr0209_WR02_TradeNPC},
    {z_wr0209_WR02_TradeNPC_0,z_wr0209_WR02_TradeNPC_0},
    {z_wr0209_WR02_TradeNPC_1,z_wr0209_WR02_TradeNPC_1},
    {z_wr0209_WR02_TradeNPC_2,z_wr0209_WR02_TradeNPC_2},
    {z_wr0211_WR02_TradeNPC,z_wr0211_WR02_TradeNPC},
    {z_wr0211_WR02_TradeNPC_0,z_wr0211_WR02_TradeNPC_0},
    {z_wr0211_WR02_TradeNPC_1,z_wr0211_WR02_TradeNPC_1},
    {z_wr0211_WR02_TradeNPC_2,z_wr0211_WR02_TradeNPC_2},
    {z_wr0211_WR02_TradeNPC_3,z_wr0211_WR02_TradeNPC_3},
    {z_wr0221_WR02_TradeNPC,z_wr0221_WR02_TradeNPC},
    {z_wr0221_WR02_TradeNPC_0,z_wr0221_WR02_TradeNPC_0},
    {z_wr0221_WR02_TradeNPC_1,z_wr0221_WR02_TradeNPC_1},
    {z_wr0221_WR02_TradeNPC_2,z_wr0221_WR02_TradeNPC_2},
    {z_wr0221_WR02_TradeNPC_3,z_wr0221_WR02_TradeNPC_3},
    {z_wr0221_WR02_TradeNPC_4,z_wr0221_WR02_TradeNPC_4},
    {z_wr0221_WR02_TradeNPC_5,z_wr0221_WR02_TradeNPC_5},
    {z_wr0222_WR02_TradeNPC,z_wr0222_WR02_TradeNPC},
    {z_wr0222_WR02_TradeNPC_0,z_wr0222_WR02_TradeNPC_0},
    {z_wr0222_WR02_TradeNPC_1,z_wr0222_WR02_TradeNPC_1},
    {z_wr0222_WR02_TradeNPC_2,z_wr0222_WR02_TradeNPC_2},
    {z_wr0223_WR02_TradeNPC,z_wr0223_WR02_TradeNPC},
    {z_wr0223_WR02_TradeNPC_0,z_wr0223_WR02_TradeNPC_0},
    {z_wr0223_WR02_TradeNPC_1,z_wr0223_WR02_TradeNPC_1},
    {z_wr0224_WR02_TradeNPC,z_wr0224_WR02_TradeNPC},
    {z_wr0231_WR02_TradeNPC,z_wr0231_WR02_TradeNPC},
};

GetTraderIdx(hash)
{
    new i = 0;
    for (i = 0; i < sizeof(trader_locations); i++) {
        if (trader_locations[i][1] == hash) {
            return i;
        }
    }
    return 0;
}
new const ioa_trade_table[12][3] = {
    // EncounterTrade.Hash0, Message Hash (msg_field_trade_wr02_01_%02d), Game Versions
    {0x4e002aa39028ae6e,msg_field_trade_wr02_01_01,GameVersion:Any},
    {0x4e0029a39028acbb,msg_field_trade_wr02_01_02,GameVersion:Sword},
    {0x4e0028a39028ab08,msg_field_trade_wr02_01_03,GameVersion:Shield},
    {0x4e002fa39028b6ed,msg_field_trade_wr02_01_04,GameVersion:Shield},
    {0x4e002ea39028b53a,msg_field_trade_wr02_01_05,GameVersion:Any},
    {0x4e002da39028b387,msg_field_trade_wr02_01_06,GameVersion:Sword},
    {0x4e002ca39028b1d4,msg_field_trade_wr02_01_07,GameVersion:Any},
    {0x4e0023a39028a289,msg_field_trade_wr02_01_08,GameVersion:Any},
    {0x4e0022a39028a0d6,msg_field_trade_wr02_01_09,GameVersion:Any},
    {0x4dfca5a390259698,msg_field_trade_wr02_01_09,GameVersion:Any},
    {0x4dfca6a39025984b,msg_field_trade_wr02_01_10,GameVersion:Any},
    {0x4dfca7a3902599fe,msg_field_trade_wr02_01_11,GameVersion:Any},
};
new const ioa_trade_storage[5][2] = {
    {SYS_WORK_WR02_TRADE_NPC1_INDEX,SYS_WORK_WR02_TRADE_NPC1_POKEID},
    {SYS_WORK_WR02_TRADE_NPC2_INDEX,SYS_WORK_WR02_TRADE_NPC2_POKEID},
    {SYS_WORK_WR02_TRADE_NPC3_INDEX,SYS_WORK_WR02_TRADE_NPC3_POKEID},
    {SYS_WORK_WR02_TRADE_NPC4_INDEX,SYS_WORK_WR02_TRADE_NPC4_POKEID},
    {SYS_WORK_WR02_TRADE_NPC5_INDEX,SYS_WORK_WR02_TRADE_NPC5_POKEID},
};

// Places the random apricorn girls and traders around the wild area
PlaceRandomNPCs(should_update_field_objects, should_fade, npc_to_skip)
{
    if (should_fade) {
        FadeOut(8, "BLACK", 0, 1);
        FadeWait();
    }
    new npc_locations[51][2] = {
        {z_wr0201_WR02_ZukanNPC,z_wr0201_WR02_ZukanNPC},
        {z_wr0201_WR02_ZukanNPC_0,z_wr0201_WR02_ZukanNPC_0},
        {z_wr0202_WR02_ZukanNPC_0,z_wr0202_WR02_ZukanNPC_0},
        {z_wr0202_WR02_ZukanNPC,z_wr0202_WR02_ZukanNPC},
        {z_wr0202_WR02_ZukanNPC_1,z_wr0202_WR02_ZukanNPC_1},
        {z_wr0202_WR02_ZukanNPC_2,z_wr0202_WR02_ZukanNPC_2},
        {z_wr0202_WR02_ZukanNPC_3,z_wr0202_WR02_ZukanNPC_3},
        {z_wr0203_WR02_ZukanNPC,z_wr0203_WR02_ZukanNPC},
        {z_wr0203_WR02_ZukanNPC_0,z_wr0203_WR02_ZukanNPC_0},
        {z_wr0203_WR02_ZukanNPC_1,z_wr0203_WR02_ZukanNPC_1},
        {z_wr0203_WR02_ZukanNPC_2,z_wr0203_WR02_ZukanNPC_2},
        {z_wr0203_WR02_ZukanNPC_4,z_wr0203_WR02_ZukanNPC_4},
        {z_wr0203_WR02_ZukanNPC_5,z_wr0203_WR02_ZukanNPC_5},
        {z_wr0203_WR02_ZukanNPC_6,z_wr0203_WR02_ZukanNPC_6},
        {z_wr0204_WR02_ZukanNPC,z_wr0204_WR02_ZukanNPC},
        {z_wr0204_WR02_ZukanNPC_0,z_wr0204_WR02_ZukanNPC_0},
        {z_wr0204_WR02_ZukanNPC_1,z_wr0204_WR02_ZukanNPC_1},
        {z_wr0204_WR02_ZukanNPC_2,z_wr0204_WR02_ZukanNPC_2},
        {z_wr0204_WR02_ZukanNPC_3,z_wr0204_WR02_ZukanNPC_3},
        {z_wr0205_WR02_ZukanNPC,z_wr0205_WR02_ZukanNPC},
        {z_wr0205_WR02_ZukanNPC_0,z_wr0205_WR02_ZukanNPC_0},
        {z_wr0205_WR02_ZukanNPC_1,z_wr0205_WR02_ZukanNPC_1},
        {z_wr0205_WR02_ZukanNPC_2,z_wr0205_WR02_ZukanNPC_2},
        {z_wr0205_WR02_ZukanNPC_3,z_wr0205_WR02_ZukanNPC_3},
        {z_wr0205_WR02_ZukanNPC_4,z_wr0205_WR02_ZukanNPC_4},
        {z_wr0205_WR02_ZukanNPC_5,z_wr0205_WR02_ZukanNPC_5},
        {z_wr0201_WR02_ZukanNPC_1,z_wr0201_WR02_ZukanNPC_1},
        {z_wr0201_WR02_ZukanNPC_2,z_wr0201_WR02_ZukanNPC_2},
        {z_wr0201_WR02_ZukanNPC_3,z_wr0201_WR02_ZukanNPC_3},
        {z_wr0206_WR02_ZukanNPC,z_wr0206_WR02_ZukanNPC},
        {z_wr0206_WR02_ZukanNPC_0,z_wr0206_WR02_ZukanNPC_0},
        {z_wr0207_WR02_ZukanNPC,z_wr0207_WR02_ZukanNPC},
        {z_wr0207_WR02_ZukanNPC_0,z_wr0207_WR02_ZukanNPC_0},
        {z_wr0207_WR02_ZukanNPC_1,z_wr0207_WR02_ZukanNPC_1},
        {z_wr0207_WR02_ZukanNPC_2,z_wr0207_WR02_ZukanNPC_2},
        {z_wr0208_WR02_ZukanNPC,z_wr0208_WR02_ZukanNPC},
        {z_wr0208_WR02_ZukanNPC_0,z_wr0208_WR02_ZukanNPC_0},
        {z_wr0209_WR02_ZukanNPC,z_wr0209_WR02_ZukanNPC},
        {z_wr0209_WR02_ZukanNPC_0,z_wr0209_WR02_ZukanNPC_0},
        {z_wr0209_WR02_ZukanNPC_1,z_wr0209_WR02_ZukanNPC_1},
        {z_wr0209_WR02_ZukanNPC_2,z_wr0209_WR02_ZukanNPC_2},
        {z_wr0209_WR02_ZukanNPC_3,z_wr0209_WR02_ZukanNPC_3},
        {z_wr0209_WR02_ZukanNPC_4,z_wr0209_WR02_ZukanNPC_4},
        {z_wr0210_WR02_ZukanNPC,z_wr0210_WR02_ZukanNPC},
        {z_wr0211_WR02_ZukanNPC,z_wr0211_WR02_ZukanNPC},
        {z_wr0211_WR02_ZukanNPC_0,z_wr0211_WR02_ZukanNPC_0},
        {z_wr0211_WR02_ZukanNPC_1,z_wr0211_WR02_ZukanNPC_1},
        {z_wr0211_WR02_ZukanNPC_2,z_wr0211_WR02_ZukanNPC_2},
        {z_wr0211_WR02_ZukanNPC_3,z_wr0211_WR02_ZukanNPC_3},
        {z_wr0211_WR02_ZukanNPC_4,z_wr0211_WR02_ZukanNPC_4},
        {z_wr0211_WR02_ZukanNPC_5,z_wr0211_WR02_ZukanNPC_5},
    };
    new attempted_npc_0_count = 5;
    new attempted_npc_1_count = 3;
    new i = 0;
    new spawn_attempt = 0;
    for (i = 0; i < sizeof(npc_locations); i++) {
        FlagSet(npc_locations[i][0]);
        if (should_update_field_objects) {
            DeleteFieldObject(npc_locations[i][1]);
        }
    }
    for (i = 0; i < sizeof(trader_locations); i++) {
        FlagSet(trader_locations[i][0]);
        if (should_update_field_objects) {
            DeleteFieldObject(trader_locations[i][1]);
        }
    }
    for (i = 0; i < attempted_npc_0_count; i++) {
        for (spawn_attempt = 0; spawn_attempt < 100; spawn_attempt++) {
            new random_location = RandMax(sizeof(npc_locations), false);
            if (VanishFlagGet(npc_locations[random_location][0]) && npc_to_skip != npc_locations[random_location][1]) {
                FlagReset(npc_locations[random_location][0]);
                if (should_update_field_objects) {
                    AddFieldObject(npc_locations[random_location][1])
                }
                break;
            }
        }
    }
    for (i = 0; i < attempted_npc_1_count; i++) {
        for (spawn_attempt = 0; spawn_attempt < 100; spawn_attempt++) {
            new random_location = RandMax(sizeof(trader_locations), false);
            if (VanishFlagGet(trader_locations[random_location][0]) && npc_to_skip != trader_locations[random_location][1]) {
                FlagReset(trader_locations[random_location][0]);
                if (should_update_field_objects) {
                    AddFieldObject(trader_locations[random_location][1]);
                }
                WorkSet(ioa_trade_storage[i][0], GetTraderIdx(trader_locations[random_location][1]));
                WorkSet(ioa_trade_storage[i][1], ChooseRandomTrade());
                break;
            }
        }
    }
    if (should_fade) {
        SuspendN(10);
        FadeIn(8, "BLACK");
        FadeWait();
    }
}

// Selects a random trade from those allowed in the game's version
ChooseRandomTrade()
{
    new available_trades[12] = {0, ...};
    new trade_count = 0;
    for (new i = 0; i < 12; i++) {
        if (ioa_trade_table[i][2] == RomGetVersion() || ioa_trade_table[i][2] == 0) {
            available_trades[trade_count] = i;
            trade_count++;
        }
    }
    return available_trades[RandMax(trade_count, false)];
}

main()
{
    switch (g_mode) {
        case 0x0:
            LoadZone()
        case 0x1:
            fun_2588()
        default:
            printf("scrid =%d Not Found \n", g_mode)
    }
}

LoadZone()
{
    if (WorkGet(WK_EV_R1_SUB_012_PROGRESS) <= 0) {
        if (WorkGet(WK_SCENE_MAIN_MASTER) >= 1320) {
            WorkSet(WK_EV_R1_SUB_012_PROGRESS, 1);
        }
    }
    TryResetDay();
    printf(">zone_change z_wr0201\n");
}

fun_2588()
{
    if (PlayerGetZoneID() == z_wr0201) {
        if (!FlagGet(FSYS_ARRIVE_WR0201)) {
            FlagSet(FSYS_ARRIVE_WR0201);
        }
    }
}