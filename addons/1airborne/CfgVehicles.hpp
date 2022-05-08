#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_Soldier_F;
    class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
    class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_SL_F;
    class B_Soldier_SL_F_OCimport_01 : B_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_Soldier_SL_F_OCimport_02 : B_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_HeavyGunner_F;
    class B_HeavyGunner_F_OCimport_01 : B_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_HeavyGunner_F_OCimport_02 : B_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AT_F;
    class B_soldier_AT_F_OCimport_01 : B_soldier_AT_F { scope = 0; class EventHandlers; };
    class B_soldier_AT_F_OCimport_02 : B_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class B_officer_F;
    class B_officer_F_OCimport_01 : B_officer_F { scope = 0; class EventHandlers; };
    class B_officer_F_OCimport_02 : B_officer_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_soldier_exp_F;
    class B_soldier_exp_F_OCimport_01 : B_soldier_exp_F { scope = 0; class EventHandlers; };
    class B_soldier_exp_F_OCimport_02 : B_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class RHS_M252_WD;
    class RHS_M252_WD_OCimport_01 : RHS_M252_WD { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M252_WD_OCimport_02 : RHS_M252_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_M119_WD;
    class RHS_M119_WD_OCimport_01 : RHS_M119_WD { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M119_WD_OCimport_02 : RHS_M119_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_M2StaticMG_MiniTripod_WD;
    class RHS_M2StaticMG_MiniTripod_WD_OCimport_01 : RHS_M2StaticMG_MiniTripod_WD { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M2StaticMG_MiniTripod_WD_OCimport_02 : RHS_M2StaticMG_MiniTripod_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_TOW_TriPod_WD;
    class RHS_TOW_TriPod_WD_OCimport_01 : RHS_TOW_TriPod_WD { scope = 0; class EventHandlers; class Turrets; };
    class RHS_TOW_TriPod_WD_OCimport_02 : RHS_TOW_TriPod_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_MK19_TriPod_WD;
    class RHS_MK19_TriPod_WD_OCimport_01 : RHS_MK19_TriPod_WD { scope = 0; class EventHandlers; class Turrets; };
    class RHS_MK19_TriPod_WD_OCimport_02 : RHS_MK19_TriPod_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_UH60M;
    class RHS_UH60M_OCimport_01 : RHS_UH60M { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH60M_OCimport_02 : RHS_UH60M_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class RHS_UH60M2;
    class RHS_UH60M2_OCimport_01 : RHS_UH60M2 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH60M2_OCimport_02 : RHS_UH60M2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class RHS_UH60M_MEV2;
    class RHS_UH60M_MEV2_OCimport_01 : RHS_UH60M_MEV2 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH60M_MEV2_OCimport_02 : RHS_UH60M_MEV2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class rhsusf_mrzr4_d;
    class rhsusf_mrzr4_d_OCimport_01 : rhsusf_mrzr4_d { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_mrzr4_d_OCimport_02 : rhsusf_mrzr4_d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class rhsusf_M1083A1P2_WD_fmtv_usarmy;
    class rhsusf_M1083A1P2_WD_fmtv_usarmy_OCimport_01 : rhsusf_M1083A1P2_WD_fmtv_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1083A1P2_WD_fmtv_usarmy_OCimport_02 : rhsusf_M1083A1P2_WD_fmtv_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy;
    class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy_OCimport_01 : rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy { scope = 0; class EventHandlers; };
    class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy_OCimport_02 : rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy;
    class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy_OCimport_01 : rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy { scope = 0; class EventHandlers; };
    class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy_OCimport_02 : rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_AH64D_wd;
    class RHS_AH64D_wd_OCimport_01 : RHS_AH64D_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_AH64D_wd_OCimport_02 : RHS_AH64D_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_CH_47F;
    class RHS_CH_47F_OCimport_01 : RHS_CH_47F { scope = 0; class EventHandlers; class Turrets; };
    class RHS_CH_47F_OCimport_02 : RHS_CH_47F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class RHS_CH_47F_cargo;
    class RHS_CH_47F_cargo_OCimport_01 : RHS_CH_47F_cargo { scope = 0; class EventHandlers; class Turrets; };
    class RHS_CH_47F_cargo_OCimport_02 : RHS_CH_47F_cargo_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class B_T_VTOL_01_infantry_F;
    class B_T_VTOL_01_infantry_F_OCimport_01 : B_T_VTOL_01_infantry_F { scope = 0; class EventHandlers; class Turrets; };
    class B_T_VTOL_01_infantry_F_OCimport_02 : B_T_VTOL_01_infantry_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class PassengerTurret_01;
            class PassengerTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_T_VTOL_01_vehicle_F;
    class B_T_VTOL_01_vehicle_F_OCimport_01 : B_T_VTOL_01_vehicle_F { scope = 0; class EventHandlers; class Turrets; };
    class B_T_VTOL_01_vehicle_F_OCimport_02 : B_T_VTOL_01_vehicle_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class PassengerTurret_01;
            class PassengerTurret_02;
        };
    };

    class rhsusf_M1117_W;
    class rhsusf_M1117_W_OCimport_01 : rhsusf_M1117_W { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1117_W_OCimport_02 : rhsusf_M1117_W_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_Out;
            class MainTurret2_Out;
        };
    };

    class rhsusf_m113_usarmy_M240;
    class rhsusf_m113_usarmy_M240_OCimport_01 : rhsusf_m113_usarmy_M240 { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_M240_OCimport_02 : rhsusf_m113_usarmy_M240_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_In;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };


    class B_EURF_Rifleman_01 : B_Soldier_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Rifleman_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Grenadier_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Grenadier_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_grenadier","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_grenadier","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145_m320","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EarPlugs",1}}},{"rhsusf_mbav_grenadier",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"rhs_mag_M433_HEDP",10,1},{"rhs_mag_m714_White",5,1},{"rhs_mag_M583A1_white",5,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Autorifleman_01 : B_soldier_AR_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Autorifleman_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_mg","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_mg","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_m249_pip_S","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_m249_pip_S","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_S","","","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"rhsusf_mag_17Rnd_9x19_JHP",1,17}}},{"rhsusf_mbav_mg",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200Rnd_556x45_box",1,200},{"rhsusf_mag_17Rnd_9x19_JHP",4,17}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"rhsusf_200Rnd_556x45_box",2,200}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Team_Leader_01 : B_Soldier_TL_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Team_Leader_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"TFAR_microdagr",1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Rifleman_AT_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Rifleman_AT_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhs_weap_M136","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_M136","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Squad_Leader_01 : B_Soldier_SL_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Squad_Leader_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "TFAR_rt1523g";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_ACOG3_USMC_3d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"TFAR_rt1523g",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"TFAR_microdagr",1},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Marksman_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Marksman_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_sr25_ec","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_sr25_ec","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25_ec","","","rhsusf_acc_M8541",{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"rhsusf_mag_17Rnd_9x19_JHP",1,17}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",4,20},{"rhsusf_mag_17Rnd_9x19_JHP",1,17}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",4,20},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Combat_Life_Saver_01 : B_medic_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Combat_Life_Saver_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_medic","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_medic","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_medic",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_Kitbag_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_fieldDressing",50},{"ACE_plasmaIV_250",8},{"ACE_plasmaIV_500",4},{"ACE_plasmaIV",2},{"ACE_splint",12},{"ACE_surgicalKit",1},{"ACE_personalAidKit",1},{"ACE_epinephrine",20},{"ACE_morphine",20},{"ACE_tourniquet",4}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Machine_Gunner_01 : B_HeavyGunner_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Machine_Gunner_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_mg","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_mg","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_m240G","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_m240G","rhsusf_weap_glock17g4","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhsusf_100Rnd_762x51","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhsusf_100Rnd_762x51","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240G","","","rhsusf_acc_su230_3d",{"rhsusf_100Rnd_762x51",100},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"rhsusf_mag_17Rnd_9x19_JHP",1,17}}},{"rhsusf_mbav_mg",{{"H_Beret_02",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhsusf_100Rnd_762x51",2,100}}},{"B_AssaultPack_cbr",{{"rhsusf_100Rnd_762x51",3,100},{"ACE_SpareBarrel",1,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_AT_Specialist_Javelin_01 : B_soldier_AT_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_AT_Specialist_Javelin_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Specialist (Javelin)";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhs_weap_fgm148","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_fgm148","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{"rhs_weap_fgm148","","","",{},{},""},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_AT_Specialist_MAAWS_01 : B_EURF_AT_Specialist_Javelin_01 {
        editorPreview = "1airborne\data\preview\B_EURF_AT_Specialist_MAAWS_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Specialist (MAAWS)";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhs_weap_maaws","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_maaws","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{"rhs_weap_maaws","","","rhs_optic_maaws",{"MRAWS_HEAT_F",1},{},""},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_Kitbag_cbr",{{"ACE_EntrenchingTool",1},{"MRAWS_HE_F",2,1},{"MRAWS_HEAT_F",2,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Officer_01 : B_officer_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Officer_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_casual"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "TFAR_rt1523g";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_ACOG3_USMC_3d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"TFAR_rt1523g",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"TFAR_microdagr",1},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_JTAC_01 : B_soldier_UAV_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_JTAC_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","B_UavTerminal","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","B_UavTerminal","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","ACE_Vector"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

        backpack = "TFAR_rt1523g_big_rhs";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_ACOG3_USMC_3d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"TFAR_rt1523g_big_rhs",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"TFAR_microdagr",1},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","B_UavTerminal","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_AT_Assistant_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_AT_Assistant_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Assistant";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_Carryall_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_Carryall_cbr",{{"rhs_fgm148_magazine_AT",1,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Demolitions_Specialist_01 : B_soldier_exp_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Demolitions_Specialist_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Demolitions Specialist";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_Kitbag_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"rhsusf_m112_mag",4,1},{"SatchelCharge_Remote_Mag",1,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"APERSMine_Range_Mag",4,1},{"SLAMDirectionalMine_Wire_Mag",1,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Engineer_01 : B_engineer_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Engineer_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_Kitbag_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"ToolKit",1},{"rhsusf_m112_mag",4,1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Helicopter_Pilot_01 : B_Helipilot_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Helicopter_Pilot_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_pilot"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav","rhsusf_hgu56p_visor_green","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav","rhsusf_hgu56p_visor_green","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhsusf_weap_MP7A2","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
        respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

        ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","rhsusf_acc_RM05",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"rhsusf_mbav",{{"H_Beret_02",1},{"rhsusf_mag_40Rnd_46x30_FMJ",1,40}}},{},"rhsusf_hgu56p_visor_green","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Crewman_01 : B_EURF_Engineer_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Crewman_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav","rhsusf_cvc_alt_helmet","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav","rhsusf_cvc_alt_helmet","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhsusf_weap_MP7A2","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
        respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

        ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","rhsusf_acc_RM05",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"rhsusf_mbav",{{"H_Beret_02",1},{"rhsusf_mag_40Rnd_46x30_FMJ",1,40}}},{},"rhsusf_cvc_alt_helmet","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Sniper_01 : B_EURF_Marksman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Sniper_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_m40a5","rhsusf_weap_glock17g4","ACE_Vector"};
        respawnWeapons[] = {"rhs_weap_m40a5","rhsusf_weap_glock17g4","ACE_Vector"};

        magazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};
        respawnMagazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_nxs_5522x56_md_sun",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"rhsusf_mag_17Rnd_9x19_JHP",1,17}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"rhsusf_mag_17Rnd_9x19_JHP",6,17},{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",12,5}}},{},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Spotter_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Spotter_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","ACE_Vector"};
        respawnWeapons[] = {"rhs_weap_hk416d145","ACE_Vector"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",20},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"B_AssaultPack_cbr",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_Tripod",1},{"ACE_SpottingScope",1},{"ACE_microDAGR",1},{"ACE_Kestrel4500",1},{"ACE_ATragMX",1}}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Mortar_Gunner_01 : B_EURF_Rifleman_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Mortar_Gunner_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Gunner";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "rhs_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"rhs_M252_Gun_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Mortar_Assistant_01 : B_EURF_Mortar_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Mortar_Assistant_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Assistant";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "rhs_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"rhs_M252_Bipod_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_M2_Gunner_01 : B_EURF_Mortar_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_M2_Gunner_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Gunner";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "RHS_M2_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"RHS_M2_Gun_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_M2_Assistant_01 : B_EURF_M2_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_M2_Assistant_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Assistant";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "RHS_M2_MiniTripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"RHS_M2_MiniTripod_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Tow_Gunner_01 : B_EURF_Mortar_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Tow_Gunner_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tow Gunner";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "rhs_Tow_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"rhs_Tow_Gun_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Tow_Assistant_01 : B_EURF_Tow_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Tow_Assistant_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tow Assistant";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "rhs_TOW_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"rhs_TOW_Tripod_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_M252_Mortar_01 : RHS_M252_WD_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_M252_Mortar_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M252 Mortar";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_L119_Howitzer_01 : RHS_M119_WD_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_L119_Howitzer_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "L119 Howitzer";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_M2_50_01 : RHS_M2StaticMG_MiniTripod_WD_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_M2_50_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 .50";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_TOW_Launcher_01 : RHS_TOW_TriPod_WD_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_TOW_Launcher_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "TOW Launcher";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Mk_19_01 : RHS_MK19_TriPod_WD_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Mk_19_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk 19";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Mk_19_Gunner_01 : B_EURF_Mortar_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Mk_19_Gunner_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk 19 Gunner";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "RHS_Mk19_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"RHS_Mk19_Gun_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Mk_19_Assistant_01 : B_EURF_Mk_19_Gunner_01 {
        editorPreview = "1airborne\data\preview\B_EURF_Mk_19_Assistant_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk 19 Assistant";
        side = 1;
        faction = "B_EURF";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_opscore_mar_fg_pelt","ItemMap","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};
        respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_bino_m24_ARD"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

        backpack = "RHS_M2_MiniTripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_wmx_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_kac_grip"},{},{},{"rhs_uniform_g3_rgr",{{"ACE_fieldDressing",18},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_EntrenchingTool",1}}},{"rhsusf_mbav_rifleman",{{"H_Beret_02",1},{"rhsusf_acc_anpeq15A",1},{"rhsusf_ANPVS_15",1},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"RHS_M2_MiniTripod_Bag",{}},"rhsusf_opscore_mar_fg_pelt","rhsusf_oakley_goggles_blk",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_UH_60_01 : RHS_UH60M_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_UH_60_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
            class MainTurret : MainTurret { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_UH_60_Unarmed_01 : RHS_UH60M2_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_UH_60_Unarmed_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60 (Unarmed)";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_UH_60_MEV_01 : RHS_UH60M_MEV2_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_UH_60_MEV_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60 (MEV)";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Polaris_MRZR_01 : rhsusf_mrzr4_d_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Polaris_MRZR_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris MRZR";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_mrzr\data\blue_grn_mud_co.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_mrzr\data\yel_grn_mud_co.paa'];_unit setObjectTextureGlobal [2,'\rhsusf\addons\rhsusf_mrzr\data\red_grn_mud_co.paa'];_unit setObjectTextureGlobal [3,'\rhsusf\addons\rhsusf_mrzr\data\grn_grn_mud_co.paa'];_unit setObjectTextureGlobal [4,'\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "mud_olive";

    };

    class B_EURF_Steyr_FMTV_01 : rhsusf_M1083A1P2_WD_fmtv_usarmy_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Steyr_FMTV_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Steyr FMTV";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa'];_unit setObjectTextureGlobal [9,'rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa'];_unit setObjectTextureGlobal [10,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa'];_unit setObjectTextureGlobal [11,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa'];_unit setObjectTextureGlobal [12,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa'];_unit setObjectTextureGlobal [13,'rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa'];_unit setObjectTextureGlobal [14,'rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa'];_unit setObjectTextureGlobal [15,'rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa'];_unit setObjectTextureGlobal [16,'rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa'];_unit setObjectTextureGlobal [17,'rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa'];_unit setObjectTextureGlobal [18,'rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa'];_unit setObjectTextureGlobal [19,'rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_woodland";

    };

    class B_EURF_Steyr_FMTV_Medical_01 : rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Steyr_FMTV_Medical_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Steyr FMTV (Medical)";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Steyr_FMTV_Flatbed_01 : rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Steyr_FMTV_Flatbed_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Steyr FMTV (Flatbed)";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_AH_64_01 : RHS_AH64D_wd_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_AH_64_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_CH_47F_01 : RHS_CH_47F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_CH_47F_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_helipilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = ""; };
            class RightDoorGun : RightDoorGun { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_CH_47F_Cargo_01 : RHS_CH_47F_cargo_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_CH_47F_Cargo_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F (Cargo)";
        side = 1;
        faction = "B_EURF";
        crew = "rhsusf_army_ucp_helipilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = ""; };
            class RightDoorGun : RightDoorGun { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_V44_XBlackfish_Infantry_01 : B_T_VTOL_01_infantry_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_V44_XBlackfish_Infantry_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Infantry)";
        side = 1;
        faction = "B_EURF";
        crew = "B_T_Pilot_F";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class PassengerTurret_01 : PassengerTurret_01 { gunnerType = ""; };
            class PassengerTurret_02 : PassengerTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_V44_XBlackfish_Vehicle_01 : B_T_VTOL_01_vehicle_F_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_V44_XBlackfish_Vehicle_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Vehicle)";
        side = 1;
        faction = "B_EURF";
        crew = "B_T_Pilot_F";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class PassengerTurret_01 : PassengerTurret_01 { gunnerType = ""; };
            class PassengerTurret_02 : PassengerTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_EURF_Guardian_ASV_01 : rhsusf_M1117_W_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_Guardian_ASV_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guardian ASV";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Grenadier_01"; };
            class MainTurret_Out : MainTurret_Out { gunnerType = "B_EURF_Autorifleman_01"; };
            class MainTurret2_Out : MainTurret2_Out { gunnerType = "B_EURF_Squad_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m1117\data\M1117_armour_od_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m1117\data\M1117_turret_od_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_EURF_M113A3_01 : rhsusf_m113_usarmy_M240_OCimport_02 {
        editorPreview = "1airborne\data\preview\B_EURF_M113A3_01.jpg";
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3";
        side = 1;
        faction = "B_EURF";
        crew = "B_EURF_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_EURF_Crewman_01"; };
            class MainTurret_In : MainTurret_In { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class B_EURF_AmmoBox : Box_NATO_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Ammo Box;
        class TransportMagazines {
            mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
            mag_xx(SmokeShell,50);
            mag_xx(rhs_mag_m67,50);
            mag_xx(rhs_mag_M433_HEDP,50);
            mag_xx(rhs_mag_m714_White,50);
            mag_xx(rhs_mag_M583A1_white,50);
            mag_xx(rhsusf_mag_17Rnd_9x19_JHP,50);
            mag_xx(rhsusf_200Rnd_556x45_box,50);
            mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
            mag_xx(rhsusf_100Rnd_762x51,50);
            mag_xx(ACE_SpareBarrel,50);
            mag_xx(MRAWS_HE_F,50);
            mag_xx(MRAWS_HEAT_F,50);
            mag_xx(rhs_fgm148_magazine_AT,50);
            mag_xx(rhsusf_m112_mag,50);
            mag_xx(SatchelCharge_Remote_Mag,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class B_EURF_WeaponsBox : Box_NATO_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Weapons Box;
        class TransportMagazines {
            mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
            mag_xx(rhs_mag_M433_HEDP,50);
            mag_xx(rhsusf_200Rnd_556x45_box,50);
            mag_xx(rhsusf_mag_17Rnd_9x19_JHP,50);
            mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
            mag_xx(rhsusf_100Rnd_762x51,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        };
        class TransportWeapons {
            weap_xx(rhs_weap_hk416d145,10);
            weap_xx(rhs_weap_hk416d145_m320,10);
            weap_xx(rhs_weap_m249_pip_S,10);
            weap_xx(rhsusf_weap_glock17g4,10);
            weap_xx(rhs_weap_sr25_ec,10);
            weap_xx(rhs_weap_m240G,10);
            weap_xx(rhsusf_weap_MP7A2,10);
            weap_xx(rhs_weap_m40a5,10);
        };
        class TransportItems {
            item_xx(rhsusf_acc_wmx_bk,10);
            item_xx(rhsusf_acc_compm4,10);
            item_xx(rhsusf_acc_kac_grip,10);
            item_xx(rhsusf_acc_su230,10);
            item_xx(rhsusf_acc_saw_bipod,10);
            item_xx(rhsusf_acc_ACOG3_USMC,10);
            item_xx(rhsusf_acc_ACOG3_USMC_3d,10);
            item_xx(rhsusf_acc_M8541,10);
            item_xx(rhsusf_acc_harris_bipod,10);
            item_xx(rhsusf_acc_su230_3d,10);
            item_xx(rhsusf_acc_RM05,10);
            item_xx(rhsusf_acc_nxs_5522x56_md_sun,10);
            item_xx(rhsusf_acc_harris_swivel,10);
            item_xx(rhsusf_acc_su230a,10);
        };
    };
    class B_EURF_LaunchersBox : Box_NATO_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Launchers Box;
        class TransportMagazines {
            mag_xx(MRAWS_HEAT_F,5);
        };
        class TransportWeapons {
            weap_xx(rhs_weap_M136,5);
            weap_xx(rhs_weap_fgm148,5);
            weap_xx(rhs_weap_maaws,5);
        };
        class TransportItems {
            item_xx(rhs_optic_maaws,5);
        };
    };
    class B_EURF_UniformBox : Box_NATO_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(rhs_uniform_g3_rgr,15);
        };
    };
    class B_EURF_SupportBox : Box_NATO_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(rhsusf_bino_m24_ARD,10);
            item_xx(rhsusf_mbav_rifleman,10);
            item_xx(rhsusf_opscore_mar_fg_pelt,10);
            item_xx(rhsusf_oakley_goggles_blk,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ACE_Altimeter,10);
            item_xx(TFAR_rf7800str,10);
            item_xx(rhsusf_mbav_grenadier,10);
            item_xx(rhsusf_mbav_mg,10);
            item_xx(TFAR_anprc152,10);
            item_xx(ACE_Vector,10);
            item_xx(TFAR_rt1523g,10);
            item_xx(rhsusf_mbav_medic,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(TFAR_rt1523g_big_rhs,10);
            item_xx(B_UavTerminal,10);
            item_xx(B_Carryall_cbr,10);
            item_xx(rhsusf_mbav,10);
            item_xx(rhsusf_hgu56p_visor_green,10);
            item_xx(rhsusf_cvc_alt_helmet,10);
            item_xx(rhs_M252_Gun_Bag,10);
            item_xx(rhs_M252_Bipod_Bag,10);
            item_xx(RHS_M2_Gun_Bag,10);
            item_xx(RHS_M2_MiniTripod_Bag,10);
            item_xx(rhs_Tow_Gun_Bag,10);
            item_xx(rhs_TOW_Tripod_Bag,10);
            item_xx(RHS_Mk19_Gun_Bag,10);
        };
    };
    class B_EURF_SupplyBox : B_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = 1st Airborne Supply Box;
        class TransportMagazines {
            mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
            mag_xx(SmokeShell,50);
            mag_xx(rhs_mag_m67,50);
            mag_xx(rhs_mag_M433_HEDP,50);
            mag_xx(rhs_mag_m714_White,50);
            mag_xx(rhs_mag_M583A1_white,50);
            mag_xx(rhsusf_mag_17Rnd_9x19_JHP,50);
            mag_xx(rhsusf_200Rnd_556x45_box,50);
            mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
            mag_xx(rhsusf_100Rnd_762x51,50);
            mag_xx(ACE_SpareBarrel,50);
            mag_xx(MRAWS_HE_F,50);
            mag_xx(MRAWS_HEAT_F,50);
            mag_xx(rhs_fgm148_magazine_AT,50);
            mag_xx(rhsusf_m112_mag,50);
            mag_xx(SatchelCharge_Remote_Mag,50);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(SLAMDirectionalMine_Wire_Mag,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        };
        class TransportWeapons {
            weap_xx(rhs_weap_hk416d145,10);
            weap_xx(rhs_weap_hk416d145_m320,10);
            weap_xx(rhs_weap_m249_pip_S,10);
            weap_xx(rhsusf_weap_glock17g4,10);
            weap_xx(rhs_weap_sr25_ec,10);
            weap_xx(rhs_weap_m240G,10);
            weap_xx(rhsusf_weap_MP7A2,10);
            weap_xx(rhs_weap_m40a5,10);
            weap_xx(rhs_weap_M136,10);
            weap_xx(rhs_weap_fgm148,10);
            weap_xx(rhs_weap_maaws,10);
        };
        class TransportItems {
            item_xx(rhsusf_acc_wmx_bk,10);
            item_xx(rhsusf_acc_compm4,10);
            item_xx(rhsusf_acc_kac_grip,10);
            item_xx(rhsusf_acc_su230,10);
            item_xx(rhsusf_acc_saw_bipod,10);
            item_xx(rhsusf_acc_ACOG3_USMC,10);
            item_xx(rhsusf_acc_ACOG3_USMC_3d,10);
            item_xx(rhsusf_acc_M8541,10);
            item_xx(rhsusf_acc_harris_bipod,10);
            item_xx(rhsusf_acc_su230_3d,10);
            item_xx(rhsusf_acc_RM05,10);
            item_xx(rhsusf_acc_nxs_5522x56_md_sun,10);
            item_xx(rhsusf_acc_harris_swivel,10);
            item_xx(rhsusf_acc_su230a,10);
            item_xx(rhsusf_bino_m24_ARD,10);
            item_xx(rhsusf_mbav_rifleman,10);
            item_xx(rhsusf_opscore_mar_fg_pelt,10);
            item_xx(rhsusf_oakley_goggles_blk,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ACE_Altimeter,10);
            item_xx(TFAR_rf7800str,10);
            item_xx(rhsusf_mbav_grenadier,10);
            item_xx(rhsusf_mbav_mg,10);
            item_xx(TFAR_anprc152,10);
            item_xx(ACE_Vector,10);
            item_xx(TFAR_rt1523g,10);
            item_xx(rhsusf_mbav_medic,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(TFAR_rt1523g_big_rhs,10);
            item_xx(B_UavTerminal,10);
            item_xx(B_Carryall_cbr,10);
            item_xx(rhsusf_mbav,10);
            item_xx(rhsusf_hgu56p_visor_green,10);
            item_xx(rhsusf_cvc_alt_helmet,10);
            item_xx(rhs_M252_Gun_Bag,10);
            item_xx(rhs_M252_Bipod_Bag,10);
            item_xx(RHS_M2_Gun_Bag,10);
            item_xx(RHS_M2_MiniTripod_Bag,10);
            item_xx(rhs_Tow_Gun_Bag,10);
            item_xx(rhs_TOW_Tripod_Bag,10);
            item_xx(RHS_Mk19_Gun_Bag,10);
            item_xx(rhs_uniform_g3_rgr,10);
            item_xx(rhs_optic_maaws,5);
        };
    };

};






