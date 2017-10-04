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

// Function Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreat_RainAttachedToPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C.UserConstructionScript");

	AThreat_RainAttachedToPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
