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

// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnActivated");

	UAthenaStatsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab");

	UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
