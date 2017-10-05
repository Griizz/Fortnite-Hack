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

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USubgameSelectScreen_C::IsBusyMatchmakingOrPartyTransitioning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning");

	USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Update");

	USubgameSelectScreen_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::AdvanceRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator");

	USubgameSelectScreen_C_AdvanceRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::ResetKeyArtForMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu");

	USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::ToggleTimer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer");

	USubgameSelectScreen_C_ToggleTimer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESubGame                       SubGame                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::SafeSetSubGame(ESubGame SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame");

	USubgameSelectScreen_C_SafeSetSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESubGame                       SubGame                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::SetDescriptionForSubGame(ESubGame SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame");

	USubgameSelectScreen_C_SetDescriptionForSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	USubgameSelectScreen_C_OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	USubgameSelectScreen_C_OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Try_And_Remove_The_Dialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog");

	USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates");

	USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingState> OldState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMatchmakingState> NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::CustomEvent_1(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1");

	USubgameSelectScreen_C_CustomEvent_1_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2");

	USubgameSelectScreen_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Show_Busy_If_Async_Tasks_Still_Pending()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending");

	USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Construct");

	USubgameSelectScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated");

	USubgameSelectScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3");

	USubgameSelectScreen_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::OnRealMoneyPurchaseComleteHandler(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler");

	USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USubgameSelectScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct");

	USubgameSelectScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen");

	USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
