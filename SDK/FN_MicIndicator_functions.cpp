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

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bIsTalking                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::OnPlayerTalkingChanged(bool* bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged");

	UMicIndicator_C_OnPlayerTalkingChanged_Params params;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicIndicator.MicIndicator_C.OnPlayerMuted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bIsMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::OnPlayerMuted(bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicIndicator.MicIndicator_C.OnPlayerMuted");

	UMicIndicator_C_OnPlayerMuted_Params params;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::ExecuteUbergraph_MicIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator");

	UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
