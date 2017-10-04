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

// Function FriendCodeConsole.FriendCodeConsole_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFriendCodeConsole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.Construct");

	UFriendCodeConsole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bMessageSent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFriendCodeConsole_C::OnSendFriendCodeMessageComplete(bool bMessageSent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete");

	UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params params;
	params.bMessageSent = bMessageSent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.OnClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFriendCodeConsole_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.OnClicked");

	UFriendCodeConsole_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFriendCodeConsole_C::ExecuteUbergraph_FriendCodeConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole");

	UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
