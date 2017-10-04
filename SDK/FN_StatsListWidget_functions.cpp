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

// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Add                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListWidget_C::AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.AdjustClampCount");

	UStatsListWidget_C_AdjustClampCount_Params params;
	params.Widget = Widget;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           inShow                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListWidget_C::ToggleClampedValueMessage(bool inShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage");

	UStatsListWidget_C_ToggleClampedValueMessage_Params params;
	params.inShow = inShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatsListWidget_C::OnClearShownAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes");

	UStatsListWidget_C_OnClearShownAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI** AttributeListItemWidget        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListWidget_C::OnAddShownAttributeListItem(class UFortAttributeListItem_NUI** AttributeListItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem");

	UStatsListWidget_C_OnAddShownAttributeListItem_Params params;
	params.AttributeListItemWidget = AttributeListItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI** AttributeListItemWidget        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           AtIndex                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListWidget_C::OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI** AttributeListItemWidget, int* AtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem");

	UStatsListWidget_C_OnRemoveShownAttributeListItem_Params params;
	params.AttributeListItemWidget = AttributeListItemWidget;
	params.AtIndex = AtIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListWidget_C::ExecuteUbergraph_StatsListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget");

	UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
