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

// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MissionHasModifiers            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::MissionHasModifiers(bool* MissionHasModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers");

	UObjectivesPage_C_MissionHasModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionHasModifiers != nullptr)
		*MissionHasModifiers = params.MissionHasModifiers;
}


// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowModifiers                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::ConfigureModifiersView(bool ShowModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView");

	UObjectivesPage_C_ConfigureModifiersView_Params params;
	params.ShowModifiers = ShowModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::HandleInventory(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleInventory");

	UObjectivesPage_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           InButton                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InButtonIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::HandleSelectedButtonChanged(class UCommonButton* InButton, int InButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged");

	UObjectivesPage_C_HandleSelectedButtonChanged_Params params;
	params.InButton = InButton;
	params.InButtonIndex = InButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleBack");

	UObjectivesPage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectivesPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.Construct");

	UObjectivesPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UObjectivesPage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.OnActivated");

	UObjectivesPage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectivesPage_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.Destruct");

	UObjectivesPage_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectivesPage_C::ExecuteUbergraph_ObjectivesPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage");

	UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
