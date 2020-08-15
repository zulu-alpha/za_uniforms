class cfgPatches
{
	class za_Vests
	{
		units[]={};
		weapons[]=
		{
			"class za_vst_carrierlite_brown",
			"class za_vst_carrierlite_arid",
			"class za_vst_carrierlite_trans",
			"class za_vst_carrierlite_wood",
			"class za_vst_carrierlite_snow",
			"class za_vst_carrier_brown",
			"class za_vst_carrier_arid",
			"class za_vst_carrier_trans",
			"class za_vst_carrier_wood",
			"class za_vst_carrier_snow",
		//	"class za_vst_modularlite_brown",
		//	"class za_vst_modularlite_arid",
		//	"class za_vst_modularlite_trans",
		//	"class za_vst_modularlite_wood",
		//	"class za_vst_modularlite_snow",
		//	"class za_vst_modular_brown",
		//	"class za_vst_modular_arid",
		//	"class za_vst_modular_trans"
		//	"class za_vst_modular_wood",
		//	"class za_vst_modular_snow"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Beta"
		};
	};
};
class cfgWeapons
{
	class Default;
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_blk;
	class V_PlateCarrier2_rgr;
	class V_PlateCarrier2_blk;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class za_vst_carrierlite_brown: V_PlateCarrier1_blk
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Carrier Lite Vest (Brown)";
		picture="\vests\data\ui\icon_za_carrierlite_brown.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_brown_ca.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitPointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitPointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	class za_vst_carrierlite_arid: za_vst_carrierlite_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Lite Vest (Arid)";
		picture="\vests\data\ui\icon_za_carrierlite_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_arid_ca.paa"
		};
	};

	class za_vst_carrierlite_snow: za_vst_carrierlite_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Lite Vest (Snow)";
		picture="\vests\data\ui\icon_za_carrierlite_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_snow_ca.paa"
		};
	};

		class za_vst_carrierlite_Wood: za_vst_carrierlite_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Lite Vest (wood)";
		picture="\vests\data\ui\icon_za_carrierlite_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_wood_ca.paa"
		};
	};

	class za_vst_carrierlite_trans: za_vst_carrierlite_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Lite Vest (Transitional)";
		picture="\vests\data\ui\icon_za_carrierlite_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_trans_ca.paa"
		};
	};
	class za_vst_carrier_brown: V_PlateCarrier2_blk
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Carrier Vest (Brown)";
		picture="\vests\data\ui\icon_za_carrier_brown.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_brown_ca.paa"
		};
		class ItemInfo: VestItem
		{
			mass=100;
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class za_vst_carrier_arid: za_vst_carrier_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Vest (Arid)";
		picture="\vests\data\ui\icon_za_carrier_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_arid_ca.paa"
		};
	};

	class za_vst_carrier_snow: za_vst_carrier_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Vest (Snow)";
		picture="\vests\data\ui\icon_za_carrier_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_snow_ca.paa"
		};
	};

	class za_vst_carrier_wood: za_vst_carrier_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Vest (wood)";
		picture="\vests\data\ui\icon_za_carrier_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_wood_ca.paa"
		};
	};

	class za_vst_carrier_trans: za_vst_carrier_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carrier Vest (Transitional)";
		picture="\vests\data\ui\icon_za_carrier_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_carrierrig_trans_ca.paa"
		};
	};
	class za_vst_modular_brown: V_PlateCarrierIA2_dgtl
	{
		author="Twak of Zulu-Alpha";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Modular Vest (Brown)";
		picture="\vests\data\ui\icon_za_modularvest_brown.paa";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_brown_ca.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply120";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitPointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	class za_vst_modular_arid: za_vst_modular_brown
	{
		author="Twak of Zulu-Alpha";
		displayName="ZA Modular Vest (Arid)";
		picture="\vests\data\ui\icon_za_modularvest_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_arid_ca.paa"
		};
	};
	class za_vst_modular_trans: za_vst_modular_brown
	{
		author="Twak of Zulu-Alpha";
		displayName="ZA Modular Vest (Transitional)";
		picture="\vests\data\ui\icon_za_modularvest_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_trans_ca.paa"
		};
	};
	class za_vst_modularlite_brown: V_PlateCarrierIA1_dgtl
	{
		author="Twak of Zulu-Alpha";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Modular Lite Vest (Brown)";
		picture="\vests\data\ui\icon_za_modularlite_brown.paa";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_brown_ca.paa"
		};
		class ItemInfo: VestItem
		{
			mass=60;
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply120";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitPointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	class za_vst_modularlite_arid: za_vst_modularlite_brown
	{
		author="Twak of Zulu-Alpha";
		displayName="ZA Modular Lite Vest (Arid)";
		picture="\vests\data\ui\icon_za_modularlite_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_arid_ca.paa"
		};
	};
	class za_vst_modularlite_trans: za_vst_modularlite_brown
	{
		author="Twak of Zulu-Alpha";
		displayName="ZA Modular Lite Vest (Transitional)";
		picture="\vests\data\ui\icon_za_modularlite_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\vests\data\textures\za_modularvest_trans_ca.paa"
		};
	};
};
class cfgMods
{
	author="76561198006625498";
	timepacked="1473707167";
};
