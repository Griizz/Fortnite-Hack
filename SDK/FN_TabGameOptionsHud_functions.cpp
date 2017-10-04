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

// Function TabGameOptionsHud.TabGameOptionsHud_C.Set Settings Tooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonTextBlock*        Tooltip_To_Display             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsHud_C::Set_Settings_Tooltip(class UCommonTextBlock* Tooltip_To_Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.Set Settings Tooltip");

	UTabGameOptionsHud_C_Set_Settings_Tooltip_Params params;
	params.Tooltip_To_Display = Tooltip_To_Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTabGameOptionsHud_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.Construct");

	UTabGameOptionsHud_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsHud_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab");

	UTabGameOptionsHud_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsHud_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab");

	UTabGameOptionsHud_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsHud_C::BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature");

	UTabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Gameplay_Tag                   (CPF_Parm)

void UTabGameOptionsHud_C::HUD_Changed(int Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed");

	UTabGameOptionsHud_C_HUD_Changed_Params params;
	params.Selected_Index = Selected_Index;
	params.Gameplay_Tag = Gameplay_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsHud_C::ExecuteUbergraph_TabGameOptionsHud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud");

	UTabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
