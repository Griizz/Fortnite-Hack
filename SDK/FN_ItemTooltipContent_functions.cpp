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

// Function ItemTooltipContent.ItemTooltipContent_C.ClearExtendedInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::ClearExtendedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.ClearExtendedInfo");

	UItemTooltipContent_C_ClearExtendedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Rating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Rating()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Rating");

	UItemTooltipContent_C_Set_Rating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Quantity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Quantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Quantity");

	UItemTooltipContent_C_Set_Quantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.SetDescriptionText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::SetDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.SetDescriptionText");

	UItemTooltipContent_C_SetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Create Custom Integer Stat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFortStatValueDisplayType      Display_Type                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Label                          (CPF_Parm)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Comparison_Value               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HigherIsBetter                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortDisplayAttribute   Display_Attribute              (CPF_Parm, CPF_OutParm)

void UItemTooltipContent_C::Create_Custom_Integer_Stat(EFortStatValueDisplayType Display_Type, const struct FText& Label, int Value, int Comparison_Value, bool HigherIsBetter, struct FFortDisplayAttribute* Display_Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Create Custom Integer Stat");

	UItemTooltipContent_C_Create_Custom_Integer_Stat_Params params;
	params.Display_Type = Display_Type;
	params.Label = Label;
	params.Value = Value;
	params.Comparison_Value = Comparison_Value;
	params.HigherIsBetter = HigherIsBetter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Attribute != nullptr)
		*Display_Attribute = params.Display_Attribute;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Perks List
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Perks_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Perks List");

	UItemTooltipContent_C_Build_Perks_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.IsComparison
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItemTooltipContent_C::IsComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.IsComparison");

	UItemTooltipContent_C_IsComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTooltipContent.ItemTooltipContent_C.BuildHeroBonuses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::BuildHeroBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.BuildHeroBonuses");

	UItemTooltipContent_C_BuildHeroBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Ingredients
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Ingredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Ingredients");

	UItemTooltipContent_C_Build_Ingredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Init Tooltip Context
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortTooltipContext*     Tooltip_Context                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTooltipContent_C::Init_Tooltip_Context(class UFortTooltipContext** Tooltip_Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Init Tooltip Context");

	UItemTooltipContent_C_Init_Tooltip_Context_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tooltip_Context != nullptr)
		*Tooltip_Context = params.Tooltip_Context;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Get Query Tag
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_OutParm)

void UItemTooltipContent_C::Get_Query_Tag(struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Get Query Tag");

	UItemTooltipContent_C_Get_Query_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Schematic Ingredients
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Schematic_Ingredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Schematic Ingredients");

	UItemTooltipContent_C_Build_Schematic_Ingredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Rarity Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Rarity_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Rarity Data");

	UItemTooltipContent_C_Set_Rarity_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemTooltip_DisplayMode> DisplayMode                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTooltipContent_C::Set_Display_Mode(TEnumAsByte<EItemTooltip_DisplayMode> DisplayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Display Mode");

	UItemTooltipContent_C_Set_Display_Mode_Params params;
	params.DisplayMode = DisplayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Level Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Level_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Level Text");

	UItemTooltipContent_C_Set_Level_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Tier
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Tier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Tier");

	UItemTooltipContent_C_Set_Tier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Tertiary Category Icon & Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Tertiary_Category_Icon___Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Tertiary Category Icon & Text");

	UItemTooltipContent_C_Set_Tertiary_Category_Icon___Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Secondary Category Icon & Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Secondary_Category_Icon___Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Secondary Category Icon & Text");

	UItemTooltipContent_C_Set_Secondary_Category_Icon___Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Primary Category Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Primary_Category_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Primary Category Text");

	UItemTooltipContent_C_Set_Primary_Category_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Display Name Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Set_Display_Name_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Display Name Text");

	UItemTooltipContent_C_Set_Display_Name_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Stat Block
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Basic_Stat_Block()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Stat Block");

	UItemTooltipContent_C_Build_Basic_Stat_Block_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Intro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Intro");

	UItemTooltipContent_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Durability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Durability()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Durability");

	UItemTooltipContent_C_Build_Durability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Alteration Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Alteration_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Alteration Info");

	UItemTooltipContent_C_Build_Alteration_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Worker Stats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Worker_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Worker Stats");

	UItemTooltipContent_C_Build_Worker_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Weapon DPS Stat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Weapon_DPS_Stat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Weapon DPS Stat");

	UItemTooltipContent_C_Build_Weapon_DPS_Stat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Build_Basic_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Build Basic Info");

	UItemTooltipContent_C_Build_Basic_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Set Item Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Comparison_Item                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EItemTooltip_DisplayMode> DisplayMode                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OverrideQuantity               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTooltipContent_C::Set_Item_Data(class UFortItem* Item, class UFortItem* Comparison_Item, TEnumAsByte<EItemTooltip_DisplayMode> DisplayMode, int OverrideQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Set Item Data");

	UItemTooltipContent_C_Set_Item_Data_Params params;
	params.Item = Item;
	params.Comparison_Item = Comparison_Item;
	params.DisplayMode = DisplayMode;
	params.OverrideQuantity = OverrideQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Update
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTooltipContent_C::Update(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Update");

	UItemTooltipContent_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function ItemTooltipContent.ItemTooltipContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTooltipContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.Construct");

	UItemTooltipContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTooltipContent.ItemTooltipContent_C.ExecuteUbergraph_ItemTooltipContent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTooltipContent_C::ExecuteUbergraph_ItemTooltipContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTooltipContent.ItemTooltipContent_C.ExecuteUbergraph_ItemTooltipContent");

	UItemTooltipContent_C_ExecuteUbergraph_ItemTooltipContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
