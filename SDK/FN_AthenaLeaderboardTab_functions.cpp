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

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated");

	UAthenaLeaderboardTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::ExecuteUbergraph_AthenaLeaderboardTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab");

	UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
