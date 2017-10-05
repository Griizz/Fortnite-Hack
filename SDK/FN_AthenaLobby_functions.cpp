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

// Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommited                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnInputFillChangeGamepad(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad");

	UAthenaLobby_C_OnInputFillChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommited                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnInputPlaylistChangeGamepad(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad");

	UAthenaLobby_C_OnInputPlaylistChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.IsLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsLocalPlayer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::IsLocalPlayer(int PlayerIndex, bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.IsLocalPlayer");

	UAthenaLobby_C_IsLocalPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function AthenaLobby.AthenaLobby_C.OnSelect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnSelect(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnSelect");

	UAthenaLobby_C_OnSelect_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanNavigatePlayers            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::CanNavigatePlayers(bool* bCanNavigatePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers");

	UAthenaLobby_C_CanNavigatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanNavigatePlayers != nullptr)
		*bCanNavigatePlayers = params.bCanNavigatePlayers;
}


// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::SetHoveredPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer");

	UAthenaLobby_C_SetHoveredPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::HoverNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverNextPlayer");

	UAthenaLobby_C_HoverNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::HoverPreviousPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer");

	UAthenaLobby_C_HoverPreviousPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.StartMusic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::StartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.StartMusic");

	UAthenaLobby_C_StartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::ShouldAddPlay(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddPlay");

	UAthenaLobby_C_ShouldAddPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.InitializeInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeInput");

	UAthenaLobby_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered");

	UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered");

	UAthenaLobby_C_OnLobbyPlayerPadHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerGadgetsClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked");

	UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnLobbyEmptyPlayerClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked");

	UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected");

	UAthenaLobby_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::RefreshLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshLaunch");

	UAthenaLobby_C_RefreshLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UAthenaLobby_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown");

	UAthenaLobby_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::ShouldAddScroll(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddScroll");

	UAthenaLobby_C_ShouldAddScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::ShouldAddCancel(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddCancel");

	UAthenaLobby_C_ShouldAddCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.RefreshInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::RefreshInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshInput");

	UAthenaLobby_C_RefreshInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommited                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnInputAbandon(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputAbandon");

	UAthenaLobby_C_OnInputAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeContextEvents");

	UAthenaLobby_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Focus");

	UAthenaLobby_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputCancel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommited                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnInputCancel(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputCancel");

	UAthenaLobby_C_OnInputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::RefreshPlayerHeroes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes");

	UAthenaLobby_C_RefreshPlayerHeroes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UAthenaLobby_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged");

	UAthenaLobby_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EmptySlot                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnTeamMemberRemoved(int EmptySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved");

	UAthenaLobby_C_OnTeamMemberRemoved_Params params;
	params.EmptySlot = EmptySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UAthenaLobby_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded");

	UAthenaLobby_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Refresh");

	UAthenaLobby_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Initialize");

	UAthenaLobby_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::DialogResult_156754AE468EF93DCA2009A412591BA7(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7");

	UAthenaLobby_C_DialogResult_156754AE468EF93DCA2009A412591BA7_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Event Abandon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobby_C::Event_Abandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Event Abandon");

	UAthenaLobby_C_Event_Abandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnEndCursorOverPlayer(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer");

	UAthenaLobby_C_OnEndCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLobby_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationLeft");

	UAthenaLobby_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLobby_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationRight");

	UAthenaLobby_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature");

	UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Construct");

	UAthenaLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLobby_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnActivated");

	UAthenaLobby_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnPlayerClicked(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnPlayerClicked");

	UAthenaLobby_C_OnPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::OnBeginCursorOverPlayer(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer");

	UAthenaLobby_C_OnBeginCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature
// (FUNC_BlueprintEvent)

void UAthenaLobby_C::BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature");

	UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby");

	UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
