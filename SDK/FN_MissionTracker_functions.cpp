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

// Function MissionTracker.MissionTracker_C.HandlePinnedQuestsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTracker_C::HandlePinnedQuestsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HandlePinnedQuestsChanged");

	UMissionTracker_C_HandlePinnedQuestsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.HasVisibleMission
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMissionTracker_C::HasVisibleMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HasVisibleMission");

	UMissionTracker_C_HasVisibleMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionTracker.MissionTracker_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTracker_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.UpdateVisibility");

	UMissionTracker_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.HandleQuestsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTracker_C::HandleQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.HandleQuestsUpdated");

	UMissionTracker_C_HandleQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionTracker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.Construct");

	UMissionTracker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionTracker_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.Destruct");

	UMissionTracker_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTracker_C::ExecuteUbergraph_MissionTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker");

	UMissionTracker_C_ExecuteUbergraph_MissionTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
