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

// Function LeaveButton.LeaveButton_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TextOverride                   (CPF_Parm)

void ULeaveButton_C::SetText(const struct FText& TextOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.SetText");

	ULeaveButton_C_SetText_Params params;
	params.TextOverride = TextOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.GetButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UIconTextButton_C*       Leave                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::GetButton(class UIconTextButton_C** Leave)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetButton");

	ULeaveButton_C_GetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Leave != nullptr)
		*Leave = params.Leave;
}


// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasUnsavedQuestProgress        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress");

	ULeaveButton_C_HasUnsavedQuestProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasUnsavedQuestProgress != nullptr)
		*HasUnsavedQuestProgress = params.HasUnsavedQuestProgress;
}


// Function LeaveButton.LeaveButton_C.LeaveParty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeaveButton_C::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.LeaveParty");

	ULeaveButton_C_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.UpdateState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeaveButton_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.UpdateState");

	ULeaveButton_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InGame                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::IsConsideredInGame(bool* InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.IsConsideredInGame");

	ULeaveButton_C_IsConsideredInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGame != nullptr)
		*InGame = params.InGame;
}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void ULeaveButton_C::GetLeaveActionText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetLeaveActionText");

	ULeaveButton_C_GetLeaveActionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::DialogResult_1E39F47546648367BB2F218F69311220(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220");

	ULeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::DialogResult_F5AF58094777CFEEC0BF28BEA620800C(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C");

	ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.DialogResult_9CCFD7A449420648C97D57A200B3396D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::DialogResult_9CCFD7A449420648C97D57A200B3396D(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_9CCFD7A449420648C97D57A200B3396D");

	ULeaveButton_C_DialogResult_9CCFD7A449420648C97D57A200B3396D_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::HandleTeamMemberRemoved(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved");

	ULeaveButton_C_HandleTeamMemberRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (CPF_Parm)

void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded");

	ULeaveButton_C_HandleTeamMemberAdded_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeaveButton_C::HandleLobbyEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleLobbyEvents");

	ULeaveButton_C_HandleLobbyEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULeaveButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Construct");

	ULeaveButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULeaveButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Destruct");

	ULeaveButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton");

	ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaveButton_C::Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature");

	ULeaveButton_C_Update_Visibility__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature");

	ULeaveButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
