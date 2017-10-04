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

// Function BoostsRoot.BoostsRoot_C.HandleStore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::HandleStore(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleStore");

	UBoostsRoot_C_HandleStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BoostsRoot.BoostsRoot_C.HandleCursorModeChanging
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleCursorModeChanging");

	UBoostsRoot_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.Set Input Action Handlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBoostsRoot_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Set Input Action Handlers");

	UBoostsRoot_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.HandleBack");

	UBoostsRoot_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BoostsRoot.BoostsRoot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBoostsRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Construct");

	UBoostsRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBoostsRoot_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.Destruct");

	UBoostsRoot_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBoostsRoot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.OnActivated");

	UBoostsRoot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature");

	UBoostsRoot_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature");

	UBoostsRoot_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostsRoot.BoostsRoot_C.ExecuteUbergraph_BoostsRoot
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBoostsRoot_C::ExecuteUbergraph_BoostsRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostsRoot.BoostsRoot_C.ExecuteUbergraph_BoostsRoot");

	UBoostsRoot_C_ExecuteUbergraph_BoostsRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
