class cfgPatches
{
	class za_Fatigues
	{
		units[]=
		{
			"class za_soldier1_brown",
			"class za_soldier1_arid",
			"class za_soldier1_snow",
			"class za_soldier1_wood",
			"class za_soldier1_trans",
			"class za_soldier1_candidate",
			"class za_soldier2_brown",
			"class za_soldier2_arid",
			"class za_soldier2_snow",
			"class za_soldier2_wood",
			"class za_soldier2_trans",
			"class za_officer1_brown",
			"class za_officer1_arid",
			"class za_officer1_trans"
		};
		weapons[]=
		{
			"class za_fat1_soldier_brown",
			"class za_fat1_soldier_arid",
			"class za_fat1_soldier_trans",
			"class za_fat1_soldier_snow",
			"class za_fat1_soldier_wood",
			"class za_fat1_soldier_candidate",
			"class za_fat2_soldier_brown",
			"class za_fat2_soldier_arid",
			"class za_fat2_soldier_snow",
			"class za_fat2_soldier_wood",
			"class za_fat2_soldier_trans",
			"class za_fat3_officer_brown",
			"class za_fat3_officer_arid",
			"class za_fat3_officer_trans"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Bootcamp"
		};
	};
};
class cfgFactionClasses
{
	class za_faction
	{
		displayName="Zulu-Alpha";
		priority=1;
		side=1;
		icon="";
		flag="";
	};
};
class cfgVehicleClasses
{
	class za_units
	{
		displayName="Zulu-Alpha Units";
	};
};
class cfgVehicles
{
	class B_Soldier_base_F;
	class za_soldier1_brown: B_Soldier_base_F
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		faction="za_faction";
		vehicleClass="za_units";
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		displayName="ZA Soldier (Brown)";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		uniformClass="za_fat1_soldier_brown";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_brown_ca.paa",
			"\Icon\ZA_ca.paa"
		};
		icon="iconMan";
		picture="";
		backpack="";
		weapons[]={};
		respawnWeapons[]={};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class za_soldier2_brown: B_Soldier_base_F
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		faction="za_faction";
		vehicleClass="za_units";
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		displayName="ZA Soldier 'rolled-up' (Brown)";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		uniformClass="za_fat2_soldier_brown";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_brown_ca.paa",
			"\Icon\ZA_ca.paa"
		};
		icon="iconMan";
		picture="";
		backpack="";
		weapons[]={};
		respawnWeapons[]={};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class za_officer1_brown: B_Soldier_base_F
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		faction="za_faction";
		vehicleClass="za_units";
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		displayName="ZA Officer (Brown)";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass="za_fat3_officer_brown";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_brown_ca.paa",
			"\Icon\ZA_ca.paa"
		};
		icon="iconMan";
		picture="";
		backpack="";
		weapons[]={};
		respawnWeapons[]={};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};

	class za_soldier1_arid: za_soldier1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier (Arid)";
		uniformClass="za_fat1_soldier_arid";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_arid_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

		class za_soldier1_snow: za_soldier1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier (snow)";
		uniformClass="za_fat1_soldier_snow";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_snow_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

		class za_soldier1_wood: za_soldier1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier (Wood)";
		uniformClass="za_fat1_soldier_wood";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_wood_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

	class za_soldier1_trans: za_soldier1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier (Transitional)";
		uniformClass="za_fat1_soldier_trans";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_trans_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};
	class za_soldier1_candidate: za_soldier1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier (Candidate)";
		uniformClass="za_fat1_soldier_candidate";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_candidate_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};
	class za_soldier2_arid: za_soldier2_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier 'rolled-up' (Arid)";
		uniformClass="za_fat2_soldier_arid";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_arid_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

	class za_soldier2_snow: za_soldier2_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier 'rolled-up' (Snow)";
		uniformClass="za_fat2_soldier_snow";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_snow_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

	class za_soldier2_wood: za_soldier2_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier 'rolled-up' (Wood)";
		uniformClass="za_fat2_soldier_wood";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_wood_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};

	class za_soldier2_trans: za_soldier2_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Soldier 'rolled-up' (Transitional)";
		uniformClass="za_fat2_soldier_trans";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_trans_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};
	class za_officer1_arid: za_officer1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Officer (Arid)";
		uniformClass="za_fat3_officer_arid";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_arid_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};
	class za_officer1_trans: za_officer1_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Officer (Transitional)";
		uniformClass="za_fat3_officer_trans";
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_trans_ca.paa",
			"\Icon\ZA_ca.paa"
		};
	};
};
class cfgWeapons
{
	class Default;
	class Uniform_Base;
	class UniformItem;
	class za_fat1_soldier_brown: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Brown)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_brown";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_brown_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat1_soldier_arid: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Arid)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_arid";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_arid_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_arid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat1_soldier_trans: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Transitional)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_trans_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_trans";
			containerClass="Supply40";
			mass=40;
		};
	};

	class za_fat1_soldier_snow: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Snow)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_snow_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_snow";
			containerClass="Supply40";
			mass=40;
		};
	};

		class za_fat1_soldier_wood: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Woodlands)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_wood_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_wood";
			containerClass="Supply40";
			mass=40;
		};
	};

	class za_fat1_soldier_candidate: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues (Candidate)";
		picture="\fatigues\data\ui\icon_za_fatigues_long_brown";
		model="\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_candidate_ca"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier1_candidate";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat2_soldier_brown: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues 'rolled-up' (Brown)";
		picture="\fatigues\data\ui\icon_za_fatigues_short_brown";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_brown_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier2_brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat2_soldier_arid: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues 'rolled-up' (Arid)";
		picture="\fatigues\data\ui\icon_za_fatigues_short_arid";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_arid_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier2_arid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat2_soldier_trans: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues 'rolled-up' (Transitional)";
		picture="\fatigues\data\ui\icon_za_fatigues_short_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_trans_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier2_trans";
			containerClass="Supply40";
			mass=40;
		};
	};

		class za_fat2_soldier_snow: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues 'rolled-up' (Snow)";
		picture="\fatigues\data\ui\icon_za_fatigues_short_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_snow_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier2_snow";
			containerClass="Supply40";
			mass=40;
		};
	};

		class za_fat2_soldier_wood: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Fatigues 'rolled-up' (Woodlands)";
		picture="\fatigues\data\ui\icon_za_fatigues_short_trans";
		model="\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_fatigues_wood_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_soldier2_wood";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat3_officer_brown: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Officer Fatigues (Brown)";
		picture="\fatigues\data\ui\icon_za_fatigues_officer_brown";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_brown_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_officer1_brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat3_officer_arid: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Officer Fatigues (Arid)";
		picture="\fatigues\data\ui\icon_za_fatigues_officer_arid";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_arid_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_officer1_arid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class za_fat3_officer_trans: Uniform_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		displayName="ZA Officer Fatigues (Transitional)";
		picture="\fatigues\data\ui\icon_za_fatigues_officer_trans";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\fatigues\data\textures\za_officerfatigues_trans_ca.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="za_officer1_trans";
			containerClass="Supply40";
			mass=40;
		};
	};
};
class cfgMods
{
	author="76561198006625498";
	timepacked="1473709612";
};
