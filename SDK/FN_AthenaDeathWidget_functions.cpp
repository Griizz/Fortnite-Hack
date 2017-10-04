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

// Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AnyAlive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaDeathWidget_C::AnyTeamMembersStillAlive(class AFortPlayerControllerAthena* PlayerController, bool* AnyAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive");

	UAthenaDeathWidget_C_AnyTeamMembersStillAlive_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyAlive != nullptr)
		*AnyAlive = params.AnyAlive;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Winner                         (CPF_Parm, CPF_ZeroConstructor)

void UAthenaDeathWidget_C::OnWinnerAnnounced(const struct FString& Winner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced");

	UAthenaDeathWidget_C_OnWinnerAnnounced_Params params;
	params.Winner = Winner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::HideExtraStuffForSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating");

	UAthenaDeathWidget_C_HideExtraStuffForSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::OnViewTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged");

	UAthenaDeathWidget_C_OnViewTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::OnPlaceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged");

	UAthenaDeathWidget_C_OnPlaceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaDeathWidget_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied");

	UAthenaDeathWidget_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated");

	UAthenaDeathWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.Construct");

	UAthenaDeathWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaDeathWidget_C::On_Kill_Feed_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated");

	UAthenaDeathWidget_C_On_Kill_Feed_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaDeathWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	UAthenaDeathWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaDeathWidget_C::ExecuteUbergraph_AthenaDeathWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget");

	UAthenaDeathWidget_C_ExecuteUbergraph_AthenaDeathWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
