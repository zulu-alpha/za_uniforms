class cfgPatches
{
	class za_Headgear
	{
		units[]={};
		weapons[]=
		{
			"class za_hel_beret_brown",
			"class za_hel_canvas_brown",
			"class za_hel_canvas_arid",
			"class za_hel_canvas_trans",
			"class za_hel_Boonie_brown",
			"class za_hel_Boonie_arid",
			"class za_hel_Boonie_trans",
			"class za_hel_milcap_brown",
			"class za_hel_milcap_arid",
			"class za_hel_milcap_trans",
			"class za_hel_crewhelmet_brown",
			"class za_hel_crewhelmet_medic",
			"class za_hel_helihelmet_ghostrider",
			"class za_hel_helihelmet_medic",
			"class za_hel_helihelmet_phoenix",
			"class za_hel_helihelmet_raven",
			"class za_hel_enh_arid",
			"class za_hel_enh_trans",
			"class za_hel_enh_snow",
			"class za_hel_enh_wood",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Bootcamp",
			"A3_Characters_F_EPB"
		};
	};
};
class cfgWeapons
{
	class Default;
	class Uniform_Base;
	class HelmetBase;
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB;
	class H_HelmetIA;
	class H_Booniehat_khk;
	class H_MilCap_ocamo;
	class H_Beret_02;
	class H_Beret_blk;
	class H_HelmetCrew_I;
	class H_HelmetCrew_B;
	class H_PilotHelmetHeli_B;
	class H_HelmetSpecB;

class za_hel_enh_arid: H_HelmetSpecB
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Enchance Combat Helmet (Arid)";
		picture="\headgear\data\ui\icon_za_canvashelmet_arid.paa";
		model="\A3\characters_f_epa\BLUFOR\headgear_b_helmet_kerry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_enh_arid_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\A3\characters_f_epa\BLUFOR\headgear_b_helmet_kerry";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class za_hel_enh_snow: za_hel_enh_arid
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Enchance Combat Helmet (Snow)";
		picture="\headgear\data\ui\icon_za_canvashelmet_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_enh_snow_ca.paa"
		};
	};

class za_hel_enh_wood: za_hel_enh_arid
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Enchance Combat Helmet (Wood)";
		picture="\headgear\data\ui\icon_za_canvashelmet_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_enh_wood_ca.paa"
		};
	};class za_hel_enh_trans: za_hel_enh_arid
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Enchance Combat Helmet (Trans)";
		picture="\headgear\data\ui\icon_za_canvashelmet_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_enh_Trans_ca.paa"
		};
	};


	
	class za_hel_canvas_brown: H_HelmetIA
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Canvas Helmet (Brown)";
		picture="\headgear\data\ui\icon_za_canvashelmet_brown.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_canvashelmet_brown_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class za_hel_canvas_arid: za_hel_canvas_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Canvas Helmet (Arid)";
		picture="\headgear\data\ui\icon_za_canvashelmet_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_canvashelmet_arid_ca.paa"
		};
	};
	class za_hel_canvas_trans: za_hel_canvas_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Canvas Helmet (Transitional)";
		picture="\headgear\data\ui\icon_za_canvashelmet_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_canvashelmet_trans_ca.paa"
		};
	};
	class za_hel_boonie_brown: H_Booniehat_khk
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Boonie (Brown)";
		picture="\headgear\data\ui\icon_za_boonie_brown.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_boonie_brown_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\A3\Characters_F\Common\booniehat";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class za_hel_boonie_arid: za_hel_boonie_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Boonie (Arid)";
		picture="\headgear\data\ui\icon_za_boonie_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_boonie_arid_ca.paa"
		};
	};
	class za_hel_boonie_trans: za_hel_boonie_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Boonie (Transitional)";
		picture="\headgear\data\ui\icon_za_boonie_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_boonie_trans_ca.paa"
		};
	};
	class za_hel_beret_brown: H_Beret_02
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Beret";
		picture="\headgear\data\ui\icon_za_beret_brown.paa";
		model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_beret_brown_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class za_hel_milcap_brown: H_MilCap_ocamo
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Military Cap (Brown)";
		picture="\headgear\data\ui\icon_za_milcap_brown.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_milcap_brown_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			uniformModel="\A3\Characters_F\Common\cappatrol";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class za_hel_milcap_arid: za_hel_milcap_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Military Cap (Arid)";
		picture="\headgear\data\ui\icon_za_milcap_arid.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_milcap_arid_ca.paa"
		};
	};
	class za_hel_milcap_trans: za_hel_milcap_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Military Cap (Transitional)";
		picture="\headgear\data\ui\icon_za_milcap_trans.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_milcap_trans_ca.paa"
		};
	};
	class za_hel_crewhelmet_brown: H_HelmetCrew_I
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Crew Helmet";
		picture="\headgear\data\ui\icon_za_crewhelmet_brown.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_crewhelmet_brown_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class za_hel_milcap_medic: za_hel_crewhelmet_brown
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Crew Helmet (Medic)";
		picture="\headgear\data\ui\icon_za_crewhelmet_brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_crewhelmet_medic_ca.paa"
		};
	};
	class za_hel_helihelmet_ghostrider: H_PilotHelmetHeli_B
	{
		author="Zulu Alpha Bakkies";
		scope=2;
		weaponPoolAvailable=1;
		displayName="ZA Helicopter Helmet (Ghostrider)";
		picture="\headgear\data\ui\icon_za_heli_ghostrider.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_heli_ghostrider_ca.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class za_hel_helihelmet_phoenix: za_hel_helihelmet_ghostrider
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Helicopter Helmet (Phoenix)";
		picture="\headgear\data\ui\icon_za_heli_ghostrider.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_heli_phoenix_ca.paa"
		};
	};
	class za_hel_helihelmet_raven: za_hel_helihelmet_ghostrider
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Helicopter Helmet (Raven)";
		picture="\headgear\data\ui\icon_za_heli_ghostrider.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_heli_raven_ca.paa"
		};
	};
	class za_hel_helihelmet_medic: za_hel_helihelmet_ghostrider
	{
		author="Zulu Alpha Bakkies";
		displayName="ZA Helicopter Helmet (Medic)";
		picture="\headgear\data\ui\icon_za_heli_ghostrider.paa";
		hiddenSelectionsTextures[]=
		{
			"\headgear\data\textures\za_heli_medic_ca.paa"
		};
	};
};
class cfgMods
{
	author="76561198006625498";
	timepacked="1473707185";
};
