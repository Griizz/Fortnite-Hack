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

// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.OnPlayerAccumulatedItemsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamMemberBluGloIndicator_C::OnPlayerAccumulatedItemsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.OnPlayerAccumulatedItemsUpdated");

	UTeamMemberBluGloIndicator_C_OnPlayerAccumulatedItemsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.SetPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerNetId                    (CPF_Parm)

void UTeamMemberBluGloIndicator_C::SetPlayer(const struct FUniqueNetIdRepl& PlayerNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.SetPlayer");

	UTeamMemberBluGloIndicator_C_SetPlayer_Params params;
	params.PlayerNetId = PlayerNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
