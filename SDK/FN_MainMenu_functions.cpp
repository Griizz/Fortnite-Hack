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

// Function MainMenu.MainMenu_C.ConfigureSubGameWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::ConfigureSubGameWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ConfigureSubGameWidgets");

	UMainMenu_C_ConfigureSubGameWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Set Icon Button List Column Width
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::Set_Icon_Button_List_Column_Width(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Set Icon Button List Column Width");

	UMainMenu_C_Set_Icon_Button_List_Column_Width_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindDelegates");

	UMainMenu_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ProcessFriendCodes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::ProcessFriendCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ProcessFriendCodes");

	UMainMenu_C_ProcessFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnIssueFriendCodes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFriendCode             FriendCode                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMainMenu_C::OnIssueFriendCodes(bool Success, struct FFriendCode* FriendCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnIssueFriendCodes");

	UMainMenu_C_OnIssueFriendCodes_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendCode != nullptr)
		*FriendCode = params.FriendCode;
}


// Function MainMenu.MainMenu_C.GetTotalNumFriendCodes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Num_Codes                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::GetTotalNumFriendCodes(int* Num_Codes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetTotalNumFriendCodes");

	UMainMenu_C_GetTotalNumFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num_Codes != nullptr)
		*Num_Codes = params.Num_Codes;
}


// Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFriendCode>     FriendCodes                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMainMenu_C::OnQueryUnredeemedFriendCodes(bool Success, TArray<struct FFriendCode>* FriendCodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes");

	UMainMenu_C_OnQueryUnredeemedFriendCodes_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendCodes != nullptr)
		*FriendCodes = params.FriendCodes;
}


// Function MainMenu.MainMenu_C.RefreshFriendCodesButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::RefreshFriendCodesButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.RefreshFriendCodesButton");

	UMainMenu_C_RefreshFriendCodesButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandlePartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyStateChanged");

	UMainMenu_C_HandlePartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleMatchmakingStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleMatchmakingStarted");

	UMainMenu_C_HandleMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLobbyDisconnected");

	UMainMenu_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLobbyStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLobbyStarted");

	UMainMenu_C_HandleLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleMatchmakingComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleMatchmakingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleMatchmakingComplete");

	UMainMenu_C_HandleMatchmakingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleActiveInvitesAmountChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActiveInvitesAmount            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::HandleActiveInvitesAmountChanged(int ActiveInvitesAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleActiveInvitesAmountChanged");

	UMainMenu_C_HandleActiveInvitesAmountChanged_Params params;
	params.ActiveInvitesAmount = ActiveInvitesAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyTypeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandlePartyTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyTypeChanged");

	UMainMenu_C_HandlePartyTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyJoined
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandlePartyJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyJoined");

	UMainMenu_C_HandlePartyJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandlePartybarUIFeatureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged");

	UMainMenu_C_HandlePartybarUIFeatureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved");

	UMainMenu_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberState                 (CPF_Parm)

void UMainMenu_C::HandleRemotePlayerStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged");

	UMainMenu_C_HandleRemotePlayerStateChanged_Params params;
	params.NewMemberState = NewMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyLeft");

	UMainMenu_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     MemberState                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMainMenu_C::HandleLocalPlayerStateChanged(struct FFortTeamMemberInfo* MemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged");

	UMainMenu_C_HandleLocalPlayerStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberState != nullptr)
		*MemberState = params.MemberState;
}


// Function MainMenu.MainMenu_C.HandlePrivacySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FriendsOfFriends               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::HandlePrivacySelected(bool FriendsOfFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePrivacySelected");

	UMainMenu_C_HandlePrivacySelected_Params params;
	params.FriendsOfFriends = FriendsOfFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OpenPartyPrivacy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::OpenPartyPrivacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OpenPartyPrivacy");

	UMainMenu_C_OpenPartyPrivacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OpenPartyInvites
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::OpenPartyInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OpenPartyInvites");

	UMainMenu_C_OpenPartyInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetPrivacyButtonData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Button_Text                    (CPF_Parm)

void UMainMenu_C::SetPrivacyButtonData(class UTexture2D* Image, const struct FText& Button_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetPrivacyButtonData");

	UMainMenu_C_SetPrivacyButtonData_Params params;
	params.Image = Image;
	params.Button_Text = Button_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdatePrivacyButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Use_Overide_Party_Type         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::UpdatePrivacyButton(bool Use_Overide_Party_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdatePrivacyButton");

	UMainMenu_C_UpdatePrivacyButton_Params params;
	params.Use_Overide_Party_Type = Use_Overide_Party_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.IsOutpostOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           OutpostOwner                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::IsOutpostOwner(bool* OutpostOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.IsOutpostOwner");

	UMainMenu_C_IsOutpostOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutpostOwner != nullptr)
		*OutpostOwner = params.OutpostOwner;
}


// Function MainMenu.MainMenu_C.PushDailyRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::PushDailyRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.PushDailyRewards");

	UMainMenu_C_PushDailyRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ProcessPartyBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::ProcessPartyBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ProcessPartyBar");

	UMainMenu_C_ProcessPartyBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateButtonStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateButtonStates");

	UMainMenu_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateDescriptionText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   HelpText                       (CPF_Parm)

void UMainMenu_C::UpdateDescriptionText(const struct FText& HelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateDescriptionText");

	UMainMenu_C_UpdateDescriptionText_Params params;
	params.HelpText = HelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.InitializeMainMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::InitializeMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.InitializeMainMenu");

	UMainMenu_C_InitializeMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetupTestUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::SetupTestUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetupTestUI");

	UMainMenu_C_SetupTestUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0");

	UMainMenu_C_DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7");

	UMainMenu_C_DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetCenterWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::SetCenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetCenterWidget");

	UMainMenu_C_SetCenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.LeaveUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::LeaveUnhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.LeaveUnhovered");

	UMainMenu_C_LeaveUnhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.LeaveGameHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::LeaveGameHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.LeaveGameHovered");

	UMainMenu_C_LeaveGameHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindLeaveHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::BindLeaveHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindLeaveHovered");

	UMainMenu_C_BindLeaveHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindLeaveUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::BindLeaveUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindLeaveUnhovered");

	UMainMenu_C_BindLeaveUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Destruct");

	UMainMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Construct");

	UMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleChangeGameModeHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleChangeGameModeHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleChangeGameModeHovered");

	UMainMenu_C_HandleChangeGameModeHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::HandleChangeGameModeUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered");

	UMainMenu_C_HandleChangeGameModeUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Handle Game Mode Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::Handle_Game_Mode_Unhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Handle Game Mode Unhovered");

	UMainMenu_C_Handle_Game_Mode_Unhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Handle Game Mode Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::Handle_Game_Mode_Hovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Handle Game Mode Hovered");

	UMainMenu_C_Handle_Game_Mode_Hovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature");

	UMainMenu_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_259_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_259_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_259_CommonButtonClicked__DelegateSignature");

	UMainMenu_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_259_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	UMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenu_C::OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature");

	UMainMenu_C_OnRequestShowFeedbackWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
