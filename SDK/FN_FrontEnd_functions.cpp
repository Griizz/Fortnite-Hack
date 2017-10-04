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

// Function Frontend.FrontEnd_C.EnableTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFrontEnd_C::EnableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.EnableTutorial");

	AFrontEnd_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.OnMatchStarted
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFrontEnd_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.OnMatchStarted");

	AFrontEnd_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFrontEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ReceiveBeginPlay");

	AFrontEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd");

	AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
