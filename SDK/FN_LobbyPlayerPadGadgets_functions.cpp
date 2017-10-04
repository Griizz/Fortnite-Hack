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

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadGadgets_C::Initialize(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize");

	ULobbyPlayerPadGadgets_C_Initialize_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnInputClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked");

	ULobbyPlayerPadGadgets_C_OnInputClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULobbyPlayerPadGadgets_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown");

	ULobbyPlayerPadGadgets_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void ULobbyPlayerPadGadgets_C::Refresh(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh");

	ULobbyPlayerPadGadgets_C_Refresh_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULobbyPlayerPadGadgets_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter");

	ULobbyPlayerPadGadgets_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULobbyPlayerPadGadgets_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave");

	ULobbyPlayerPadGadgets_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadGadgets_C::ExecuteUbergraph_LobbyPlayerPadGadgets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets");

	ULobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnGadgetsMouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature");

	ULobbyPlayerPadGadgets_C_OnGadgetsMouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnGadgetsMouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature");

	ULobbyPlayerPadGadgets_C_OnGadgetsMouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
