#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemTooltipContent.ItemTooltipContent_C.ClearExtendedInfo
struct UItemTooltipContent_C_ClearExtendedInfo_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Rating
struct UItemTooltipContent_C_Set_Rating_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Quantity
struct UItemTooltipContent_C_Set_Quantity_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.SetDescriptionText
struct UItemTooltipContent_C_SetDescriptionText_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Create Custom Integer Stat
struct UItemTooltipContent_C_Create_Custom_Integer_Stat_Params
{
	EFortStatValueDisplayType                          Display_Type;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Label;                                                    // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Comparison_Value;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HigherIsBetter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortDisplayAttribute                       Display_Attribute;                                        // (CPF_Parm, CPF_OutParm)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Perks List
struct UItemTooltipContent_C_Build_Perks_List_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.IsComparison
struct UItemTooltipContent_C_IsComparison_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemTooltipContent.ItemTooltipContent_C.BuildHeroBonuses
struct UItemTooltipContent_C_BuildHeroBonuses_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Ingredients
struct UItemTooltipContent_C_Build_Ingredients_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Init Tooltip Context
struct UItemTooltipContent_C_Init_Tooltip_Context_Params
{
	class UFortTooltipContext*                         Tooltip_Context;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Get Query Tag
struct UItemTooltipContent_C_Get_Query_Tag_Params
{
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm, CPF_OutParm)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Schematic Ingredients
struct UItemTooltipContent_C_Build_Schematic_Ingredients_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Rarity Data
struct UItemTooltipContent_C_Set_Rarity_Data_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Mode
struct UItemTooltipContent_C_Set_Display_Mode_Params
{
	TEnumAsByte<EItemTooltip_DisplayMode>              DisplayMode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Level Text
struct UItemTooltipContent_C_Set_Level_Text_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Tier
struct UItemTooltipContent_C_Set_Tier_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Tertiary Category Icon & Text
struct UItemTooltipContent_C_Set_Tertiary_Category_Icon___Text_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Secondary Category Icon & Text
struct UItemTooltipContent_C_Set_Secondary_Category_Icon___Text_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Primary Category Text
struct UItemTooltipContent_C_Set_Primary_Category_Text_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Name Text
struct UItemTooltipContent_C_Set_Display_Name_Text_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Stat Block
struct UItemTooltipContent_C_Build_Basic_Stat_Block_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Intro
struct UItemTooltipContent_C_Intro_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Durability
struct UItemTooltipContent_C_Build_Durability_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Alteration Info
struct UItemTooltipContent_C_Build_Alteration_Info_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Worker Stats
struct UItemTooltipContent_C_Build_Worker_Stats_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Weapon DPS Stat
struct UItemTooltipContent_C_Build_Weapon_DPS_Stat_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Info
struct UItemTooltipContent_C_Build_Basic_Info_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.Set Item Data
struct UItemTooltipContent_C_Set_Item_Data_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Comparison_Item;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EItemTooltip_DisplayMode>              DisplayMode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OverrideQuantity;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Update
struct UItemTooltipContent_C_Update_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTooltipContent.ItemTooltipContent_C.Construct
struct UItemTooltipContent_C_Construct_Params
{
};

// Function ItemTooltipContent.ItemTooltipContent_C.ExecuteUbergraph_ItemTooltipContent
struct UItemTooltipContent_C_ExecuteUbergraph_ItemTooltipContent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
