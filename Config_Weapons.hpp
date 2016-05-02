/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "O' Connors Republican Store";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "arifle_mas_m16", "", 20000, 7500 },
			{ "arifle_mas_fal", "", 20000, 7500 },
			{ "arifle_mas_ak_74m", "", 20000, 7500 },
            { "arifle_mas_mp40", "", 7500, 350 },
			{ "arifle_mas_lee_l", "", 5000, 350 },
            { "LMG_mas_rpk_F", "", 100000, 50000 },
            { "optic_Hamr", "", 7500, -1 },
			{ "B_Mortar_01_support_F", "Mortar BI-POD", 70000, 35000 },
			{ "B_Mortar_01_weapon_F", "Mortar Tube", 130000, 75000 },
			{ "SmokeShellGreen", "Tear Gas", 600, 300 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 },
			{ "20Rnd_mas_762x51_Stanag", "", 125 },
			{ "5Rnd_mas_762x51_Stanag", "", 125 },
			{ "30Rnd_mas_9x21_Stanag", "", 125 },
			{ "30Rnd_mas_545x39_mag", "", 500 },
			{ "30Rnd_mas_545x39_mag", "", 125 }
        };
    };
	
	 class sep_weapons {
        name = "Dmitri's Weapon Shop";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "arifle_mas_m16", "", 20000, 7500 },
			{ "arifle_mas_fal", "", 20000, 7500 },
			{ "arifle_mas_ak_74m", "", 20000, 7500 },
            { "arifle_mas_mp40", "", 7500, 350 },
			{ "arifle_mas_lee_l", "", 5000, 350 },
            { "LMG_mas_rpk_F", "", 100000, 50000 },
            { "optic_Hamr", "", 7500, -1 },
			{ "B_Mortar_01_support_F", "Mortar BI-POD", 70000, 35000 },
			{ "B_Mortar_01_weapon_F", "Mortar Tube", 130000, 75000 },
			{ "SmokeShellGreen", "Tear Gas", 600, 300 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 },
			{ "20Rnd_mas_762x51_Stanag", "", 125 },
			{ "5Rnd_mas_762x51_Stanag", "", 125 },
			{ "30Rnd_mas_9x21_Stanag", "", 125 },
			{ "30Rnd_mas_545x39_mag", "", 500 },
			{ "30Rnd_mas_545x39_mag", "", 125 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
			{ "arifle_mas_m16", "", 20000, 7500 },
			{ "arifle_mas_fal", "", 20000, 7500 },
			{ "arifle_mas_ak_74m", "", 20000, 7500 },
            { "arifle_mas_mp40", "", 7500, 350 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 },
			{ "20Rnd_mas_762x51_Stanag", "", 125 },
			{ "5Rnd_mas_762x51_Stanag", "", 125 },
			{ "30Rnd_mas_9x21_Stanag", "", 125 },
			{ "30Rnd_mas_545x39_mag", "", 125 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "UN Basic Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };

    class cop_patrol {
        name = "UN Patrol Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a part of the UN-Patrol Squad!" };
        items[] = {
            { "UN_arifle_TRG20_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "arifle_mas_m16", "", 30000, 5000 },
			{ "arifle_mas_m4", "", 15000, -1 },
			{ "arifle_mas_m1014", "", 5000, 2500 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_mas_556x45_Stanag", "", 100, -1 },
			{ "30Rnd_556x45_Stanag", "", 100, -1 },
			{ "7Rnd_mas_12Gauge_Pellets", "", 100, -1 }
        };
    };

    class cop_sergeant {
        name = "UN Rapid Deployment Squad Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a part of the UN-RDS!" };
        items[] = {
            { "UN_arifle_TRG20_F", "", 15000, -1 },
			{ "arifle_mas_hk416_sd", "HK416 Stealth", 25000, -1 },
			{ "arifle_mas_hk416_t", "", 15000, -1 },
			{ "arifle_mas_hk416_a", "", 15000, -1 },
			{ "arifle_mas_m16", "", 30000, 5000 },
			{ "arifle_mas_m4", "", 15000, -1 },
			{ "arifle_mas_m1014", "", 5000, 2500 },
            { "arifle_mas_ak_74m", "", 30000, 5000 },
			{ "mas_ak74", "", 25000, 15000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "SmokeShellBlue", "", 600, 300 },
			{ "SmokeShellYellow", "", 600, 300 },
			{ "SmokeShellOrange", "", 600, 300 },
			{ "SmokeShellPurple", "", 600, 300 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_mas_545x39_mag", "", 200 },
            { "30Rnd_556x45_Stanag", "", 100, -1 },
			{ "30Rnd_mas_556x45_Stanag", "", 100, -1 },
			{ "7Rnd_mas_12Gauge_Pellets", "", 100, -1 }
        };
    };
	
	    class cop_vice {
        name = "VICE Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be VICE to use this store." };
        items[] = {
            { "arifle_mas_hk416", "", 15000, -1 },
			{ "arifle_mas_hk416_sd", "HK416 Stealth", 25000, -1 },
            { "arifle_mas_ak_74m", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "RH_deagleg", "", 2500, -1 },
			{ "RH_cz75", "", 2500, -1 },
			{ "RH_m9", "", 2500, -1 },
			{ "RH_m9qd", "", 2500, -1 },
			{ "RH_usp", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "SmokeShellBlue", "", 600, 300 },
			{ "SmokeShellYellow", "", 600, 300 },
			{ "SmokeShellOrange", "", 600, 300 },
			{ "SmokeShellPurple", "", 600, 300 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_mas_545x39_mag", "", 200 },
			{ "RH_7Rnd_50_AE", "", 200 },
			{ "RH_12Rnd_45cal_usp", "", 200 },
			{ "RH_15Rnd_9x19_M9", "", 200 },
            { "RH_16Rnd_9x19_cz", "", 100, -1 },
			{ "30Rnd_mas_556x45_Stanag", "", 100, -1 }
        };
    };
	
		 class Boondock {
        name = "The Republican Armory";
        side = "civ";
        license = "Irish";
        level[] = { "", "", -1, "This is for Staff Only!" };
        items[] = {
            { "arifle_mas_hk416", "", 15000, -1 },
			{ "arifle_mas_hk416_sd", "HK416 Stealth", 25000, -1 },
            { "arifle_mas_ak_74m", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "arifle_mas_m16", "", 30000, 5000 },
			{ "hgun_mas_mp7_F", "", 7500, 2500 },
            { "RH_deagleg", "", 2500, -1 },
			{ "RH_cz75", "", 2500, -1 },
			{ "hgun_mas_m9_F_sd", "M9 SD", 2500, -1 },
			{ "RH_usp", "", 2500, -1 },
			{ "RH_m9", "", 2500, -1 },
			{ "RH_m9qd", "", 2500, -1 },
			{ "RH_deaglem", "", 5000, -1 },
            { "RH_demz", "", 2500, -1 },
			{ "SmokeShellGreen", "Tear Gas", 600, 300 },
			{ "SmokeShellBlue", "", 600, 300 },
			{ "SmokeShellYellow", "", 600, 300 },
			{ "SmokeShellOrange", "", 600, 300 },
			{ "SmokeShellPurple", "", 600, 300 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_mas_545x39_mag", "", 200 },
			{ "RH_7Rnd_50_AE", "", 200 },
			{ "RH_12Rnd_45cal_usp", "", 200 },
			{ "16Rnd_9x21_Mag", "", 200 },
            { "RH_16Rnd_9x19_cz", "", 100, -1 },
			{ "30Rnd_mas_556x45_Stanag", "", 100, -1 },
			{ "RH_15Rnd_9x19_M9", "", 100, -1 },
			{ "40Rnd_mas_46x30_Mag", "", 100, -1 }
        };
	};
	    class cop_swat {
        name = "ASF Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be ASF to use this store." };
        items[] = {
            { "arifle_mas_m4", "", 15000, -1 },
			{ "arifle_mas_m4_sd", "M4 SD", 25000, -1 },
			{ "arifle_mas_g36c_sd", "", 15000, -1 },
			{ "arifle_mas_mk16", "", 15000, -1 },
            { "arifle_mas_m16", "", 30000, 5000 },
			{ "srifle_mas_m24", "", 25000, 2500 },
			{ "hgun_mas_mp7_F", "", 7500, 2500 },
			{ "mas_launch_Stinger_F", "", 50000, 2500 },
			{ "arifle_mas_m1014", "", 5000, 2500 },
			{ "arifle_mas_m79", "Teargas Launcher", 2500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "srifle_mas_m107_h", "50. Cal Sniper", 250000, 100000 },
            { "optic_Arco", "", 2500, -1 },
			{ "optic_mas_zeiss", "", 150, 0 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "SmokeShellGreen", "Tear Gas", 600, 300 },
			{ "SmokeShellBlue", "", 600, 300 },
			{ "SmokeShellYellow", "", 600, 300 },
			{ "SmokeShellOrange", "", 600, 300 },
			{ "SmokeShellPurple", "", 600, 300 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_mas_545x39_mag", "", 200 },
            { "30Rnd_mas_556x45_T_Stanag", "", 100, -1 },
			{ "40Rnd_mas_46x30_Mag", "", 100, -1 },
			{ "5Rnd_mas_762x51_Stanag", "", 100, -1 },
			{ "7Rnd_mas_12Gauge_Pellets", "", 100, -1 },
			{ "mas_Stinger", "", 100, -1 },
			{ "30Rnd_mas_556x45_Stanag", "", 100, -1 },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1 },
			{ "1Rnd_SmokeGreen_Grenade_shell", "Teargas Grenade", 200, -1 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
