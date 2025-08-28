class CfgPatches {
	class 164_Armour {
		name="164th Helljumpers Armour";
		authors[]={
			"Mesa"
		};
		weapons[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"optre_unsc_units"
		};
	};
};

class cfgWeapons {
	// base inherits
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadgearItem;

	// base game inherits
	class H_MilCap_blue;

	// helmet inherits
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;

	// vest inherits
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52A_Armor_Base;

	// hmd inherits
	class OPTRE_NVG;

	// helmets
	class 164th_CH252D_Helmet_Base: OPTRE_UNSC_CH252D_Helmet {
		scope=0;
		author="Mesa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60000002;
		displayName="-";
		hiddenSelections[]={
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"164_armour\data\helmets\164_ch252d_standard_blk.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor.paa",
			"",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		CBRN_protection="1 + 2";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"164_armour\data\helmets\164_ch252d_standard_blk.paa",
				"164_armour\data\helmets\164_ch252d_standard_visor.paa",
				"",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	class 164th_CH252D_Helmet_Base_dp: OPTRE_UNSC_CH252D_Helmet {
		scope=0;
		author="Mesa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60000002;
		displayName="-";
		hiddenSelections[]={
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"164_armour\data\helmets\164_ch252d_standard_blk.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa",
			"",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		CBRN_protection="1 + 2";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"164_armour\data\helmets\164_ch252d_standard_blk.paa",
				"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa",
				"",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};

	class 164th_CH252D_Rifleman_BLK: 164th_CH252D_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[164th] CH252D Rifleman";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_blk.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor.paa"
		};
	};
	class 164th_CH252D_Rifleman_BLK_dp: 164th_CH252D_Helmet_Base_dp {
		scope=2;
		scopeArsenal=1;
		displayName="[164th] CH252D Rifleman (dp)";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_blk.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa"
		};
	};
	class 164th_CH252D_Rifleman_DES: 164th_CH252D_Rifleman_BLK {
		scope=2;
		scopeArsenal=2;
		displayName="[164th] CH252D Rifleman";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_des.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor.paa"
		};
	};
	class 164th_CH252D_Rifleman_DES_dp: 164th_CH252D_Rifleman_BLK_dp {
		scope=2;
		scopeArsenal=1;
		displayName="[164th] CH252D Rifleman (dp)";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_des.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa"
		};
	};
	class 164th_CH252D_Rifleman_SNO: 164th_CH252D_Rifleman_BLK {
		scope=2;
		scopeArsenal=2;
		displayName="[164th] CH252D Rifleman";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_sno.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor.paa"
		};
	};
	class 164th_CH252D_Rifleman_SNO_dp: 164th_CH252D_Rifleman_BLK_dp {
		scope=2;
		scopeArsenal=1;
		displayName="[164th] CH252D Rifleman (dp)";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_sno.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa"
		};
	};
	class 164th_CH252D_Rifleman_WDL: 164th_CH252D_Rifleman_BLK {
		scope=2;
		scopeArsenal=2;
		displayName="[164th] CH252D Rifleman";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_wdl.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor.paa"
		};
	};
	class 164th_CH252D_Rifleman_WDL_dp: 164th_CH252D_Rifleman_BLK_dp {
		scope=2;
		scopeArsenal=1;
		displayName="[164th] CH252D Rifleman (dp)";
		hiddenSelections[]={
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"164_armour\data\helmets\164_ch252d_standard_wdl.paa",
			"164_armour\data\helmets\164_ch252d_standard_visor_ca.paa"
		};
	};

	// vests
	
	class 164th_M52A_Armor_Base: OPTRE_UNSC_M52A_Armor_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Mesa";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply160";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class 164th_M52D_Armor_BLK: 164th_M52A_Armor_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Mesa";
		displayName="-";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_BR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply160";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
};