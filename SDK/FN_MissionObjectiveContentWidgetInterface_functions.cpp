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

// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveContentWidgetInterface_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate");

	UMissionObjectiveContentWidgetInterface_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInConfigureAsHUD              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveContentWidgetInterface_C::Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup");

	UMissionObjectiveContentWidgetInterface_C_Setup_Params params;
	params.Objective = Objective;
	params.bInConfigureAsHUD = bInConfigureAsHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
