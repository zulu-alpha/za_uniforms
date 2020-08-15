class cfgPatches
{
	class za_Backpacks
	{
		units[]=
		{
			"class za_bag_carryall_brown",
			"class za_bag_carryall_arid",
			"class za_bag_carryall_trans",
			"class za_bag_carryall_snow",
			"class za_bag_carryall_wood",
			"class za_bag_carryallmedic_brown",
			"class za_bag_carryallmedic_arid",
			"class za_bag_carryallmedic_trans",
			"class za_bag_carryallmedic_wood",
			"class za_bag_carryallmedic_snow",
			"class za_bag_bergen_brown",
			"class za_bag_bergen_arid",
			"class za_bag_bergen_trans"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class cfgVehicles
{
	class All;
	class Static;
	class Building;
	class Strategic;
	class ReammoBox;
	class Bag_Base;
	class B_Carryall_Base;
	class B_Bergen_Base;

	class za_bag_carryall_brown: B_Carryall_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="ZA Carryall Backpack (Brown)";
		picture="\backpacks\data\ui\icon_za_carryall_brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryall_brown_ca.paa"
		};
		maximumLoad=320;
		mass=60;
	};
	class za_bag_carryall_arid: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Backpack (Arid)";
		picture="\backpacks\data\ui\icon_za_carryall_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryall_arid_ca.paa"
		};
	};
	class za_bag_carryall_trans: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Backpack (Transitional)";
		picture="\backpacks\data\ui\icon_za_carryall_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryall_trans_ca.paa"
		};
	};

	class za_bag_carryall_snow: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Backpack (Snow)";
		picture="\backpacks\data\ui\icon_za_carryall_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryall_snow_ca.paa"
		};
	};

		class za_bag_carryall_wood: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Backpack (Woodland)";
		picture="\backpacks\data\ui\icon_za_carryall_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryall_wood_ca.paa"
		};
	};

	class za_bag_carryallmedic_brown: B_Carryall_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="ZA Carryall Medic Backpack (Brown)";
		picture="\backpacks\data\ui\icon_za_carryall_brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryallmedic_brown_ca.paa"
		};
		maximumLoad=320;
		mass=60;
	};
	class za_bag_carryallmedic_arid: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Medic Backpack (Arid)";
		picture="\backpacks\data\ui\icon_za_carryall_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryallmedic_arid_ca.paa"
		};
	};
	class za_bag_carryallmedic_trans: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Medic Backpack (Transitional)";
		picture="\backpacks\data\ui\icon_za_carryall_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryallmedic_trans_ca.paa"
		};
	};
	class za_bag_carryallmedic_wood: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Medic Backpack (Woodland)";
		picture="\backpacks\data\ui\icon_za_carryall_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryallmedic_wood_ca.paa"
		};
	};
		class za_bag_carryallmedic_snow: za_bag_carryall_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Carryall Medic Backpack (Snow)";
		picture="\backpacks\data\ui\icon_za_carryall_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_carryallmedic_Snow_ca.paa"
		};
	};

	class za_bag_bergen_brown: B_Bergen_Base
	{
		author="Zulu-Alpha Bakkies";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName="ZA Bergen Backpack (Brown)";
		picture="\backpacks\data\ui\icon_za_bergen_brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_bergen_brown_ca.paa"
		};
		maximumLoad=280;
		mass=50;
	};
	class za_bag_bergen_arid: za_bag_bergen_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Bergen Backpack (Arid)";
		picture="\backpacks\data\ui\icon_za_bergen_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_bergen_arid_ca.paa"
		};
	};
	class za_bag_bergen_trans: za_bag_bergen_brown
	{
		author="Zulu-Alpha Bakkies";
		displayName="ZA Bergen Backpack (Trans)";
		picture="\backpacks\data\ui\icon_za_bergen_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\backpacks\data\textures\za_bergen_trans_ca.paa"
		};
	};
};
class cfgMods
{
	author="76561198006625498";
	timepacked="1473707209";
};
