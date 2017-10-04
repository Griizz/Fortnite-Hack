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

// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UFriendCodePC_C::GetFriendCodeUrl(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl");

	UFriendCodePC_C_GetFriendCodeUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FriendCodePC.FriendCodePC_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFriendCodePC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.Construct");

	UFriendCodePC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFriendCodePC_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnMouseEnter");

	UFriendCodePC_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFriendCodePC_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnMouseLeave");

	UFriendCodePC_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.OnClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFriendCodePC_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.OnClicked");

	UFriendCodePC_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC");

	UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
