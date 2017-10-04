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

// Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgress_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.GetHeightEstimate");

	UMissionObjectiveProgress_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            BarIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgress_C::Update(class AFortObjectiveBase* Objective, int BarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.Update");

	UMissionObjectiveProgress_C_Update_Params params;
	params.Objective = Objective;
	params.BarIndex = BarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionObjectiveProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.Construct");

	UMissionObjectiveProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgress_C::ExecuteUbergraph_MissionObjectiveProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgress.MissionObjectiveProgress_C.ExecuteUbergraph_MissionObjectiveProgress");

	UMissionObjectiveProgress_C_ExecuteUbergraph_MissionObjectiveProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
