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

// Function Item_TierBadge.Item_TierBadge_C.Set Level
struct UItem_TierBadge_C_Set_Level_Params
{
	int                                                Current_Level;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max_Level;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Item_TierBadge.Item_TierBadge_C.Refresh Visibility
struct UItem_TierBadge_C_Refresh_Visibility_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EItemDisplayMode>                      Display_Mode;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Current_Tier;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Visible;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Item_TierBadge.Item_TierBadge_C.Update
struct UItem_TierBadge_C_Update_Params
{
	TEnumAsByte<EFortItemTier>                         Current_Tier;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Max_Tier;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EItemDisplayStyle>                     Item_Display_Style;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EItemDisplayMode>                      Item_Display_Mode;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortRarityItemData                         Rarity_Colors;                                            // (CPF_Parm)
	int                                                Current_Level;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max_Level;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
