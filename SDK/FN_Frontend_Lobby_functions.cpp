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

// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay");

	AFrontend_Lobby_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby");

	AFrontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
