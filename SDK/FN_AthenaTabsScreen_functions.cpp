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

// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTabsScreen_C::HandleTabSelected(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected");

	UAthenaTabsScreen_C_HandleTabSelected_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTabsScreen_C::HandleTabCreated(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated");

	UAthenaTabsScreen_C_HandleTabCreated_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaTabsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated");

	UAthenaTabsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaTabsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.Construct");

	UAthenaTabsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaTabsScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated");

	UAthenaTabsScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTabsScreen_C::ExecuteUbergraph_AthenaTabsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen");

	UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
