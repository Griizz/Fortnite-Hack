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

// Function MissionTrackerEntry.MissionTrackerEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionTrackerEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.Construct");

	UMissionTrackerEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.OnMissionSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMissionTrackerEntry_C::OnMissionSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.OnMissionSet");

	UMissionTrackerEntry_C_OnMissionSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerEntry_C::ExecuteUbergraph_MissionTrackerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.ExecuteUbergraph_MissionTrackerEntry");

	UMissionTrackerEntry_C_ExecuteUbergraph_MissionTrackerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerEntry.MissionTrackerEntry_C.WidgetVisibilityChanged__DelegateSignature");

	UMissionTrackerEntry_C_WidgetVisibilityChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
