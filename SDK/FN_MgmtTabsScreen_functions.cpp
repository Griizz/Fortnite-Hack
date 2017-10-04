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

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMgmtTabsScreen_C::HandleMgmtMenuTabChangeRequested(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested");

	UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::HandleDamageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived");

	UMgmtTabsScreen_C_HandleDamageReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMgmtTabsScreen_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged");

	UMgmtTabsScreen_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated");

	UMgmtTabsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMgmtTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.Construct");

	UMgmtTabsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct");

	UMgmtTabsScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::HandleShowQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests");

	UMgmtTabsScreen_C_HandleShowQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMgmtTabsScreen_C::HandleShowObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives");

	UMgmtTabsScreen_C_HandleShowObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMgmtTabsScreen_C::ExecuteUbergraph_MgmtTabsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen");

	UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
