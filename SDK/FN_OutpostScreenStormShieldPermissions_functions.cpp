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

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget");

	UOutpostScreenStormShieldPermissions_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOutpostScreenStormShield_C* ParentWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::SetParent(class UOutpostScreenStormShield_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent");

	UOutpostScreenStormShieldPermissions_C_SetParent_Params params;
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack");

	UOutpostScreenStormShieldPermissions_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::AddInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers");

	UOutpostScreenStormShieldPermissions_C_AddInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOutpostScreenStormShieldPermissions_C::IsOwningPlayerOutpostOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner");

	UOutpostScreenStormShieldPermissions_C_IsOwningPlayerOutpostOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isAlone                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::isPlayerAlone(bool* isAlone)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone");

	UOutpostScreenStormShieldPermissions_C_isPlayerAlone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAlone != nullptr)
		*isAlone = params.isAlone;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct");

	UOutpostScreenStormShieldPermissions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (CPF_Parm)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_1(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_1_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_2(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_2");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_2_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated");

	UOutpostScreenStormShieldPermissions_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::ExecuteUbergraph_OutpostScreenStormShieldPermissions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions");

	UOutpostScreenStormShieldPermissions_C_ExecuteUbergraph_OutpostScreenStormShieldPermissions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::CloseOutpostScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature");

	UOutpostScreenStormShieldPermissions_C_CloseOutpostScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
