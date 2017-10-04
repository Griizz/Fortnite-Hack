// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_TierBadge.Item_TierBadge_C.Set Level
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Current_Level                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Max_Level                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItem_TierBadge_C::Set_Level(int Current_Level, int Max_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_TierBadge.Item_TierBadge_C.Set Level");

	UItem_TierBadge_C_Set_Level_Params params;
	params.Current_Level = Current_Level;
	params.Max_Level = Max_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_TierBadge.Item_TierBadge_C.Refresh Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EItemDisplayMode>  Display_Mode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortItemTier>     Current_Tier                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItem_TierBadge_C::Refresh_Visibility(TEnumAsByte<EFortBrushSize> Brush_Size, TEnumAsByte<EItemDisplayMode> Display_Mode, TEnumAsByte<EFortItemTier> Current_Tier, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_TierBadge.Item_TierBadge_C.Refresh Visibility");

	UItem_TierBadge_C_Refresh_Visibility_Params params;
	params.Brush_Size = Brush_Size;
	params.Display_Mode = Display_Mode;
	params.Current_Tier = Current_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function Item_TierBadge.Item_TierBadge_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortItemTier>     Current_Tier                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortItemTier>     Max_Tier                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EItemDisplayStyle> Item_Display_Style             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EItemDisplayMode>  Item_Display_Mode              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortRarityItemData     Rarity_Colors                  (CPF_Parm)
// int                            Current_Level                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Max_Level                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItem_TierBadge_C::Update(TEnumAsByte<EFortItemTier> Current_Tier, TEnumAsByte<EFortItemTier> Max_Tier, TEnumAsByte<EFortBrushSize> Brush_Size, TEnumAsByte<EItemDisplayStyle> Item_Display_Style, TEnumAsByte<EItemDisplayMode> Item_Display_Mode, const struct FFortRarityItemData& Rarity_Colors, int Current_Level, int Max_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_TierBadge.Item_TierBadge_C.Update");

	UItem_TierBadge_C_Update_Params params;
	params.Current_Tier = Current_Tier;
	params.Max_Tier = Max_Tier;
	params.Brush_Size = Brush_Size;
	params.Item_Display_Style = Item_Display_Style;
	params.Item_Display_Mode = Item_Display_Mode;
	params.Rarity_Colors = Rarity_Colors;
	params.Current_Level = Current_Level;
	params.Max_Level = Max_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
