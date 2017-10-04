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

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             BulletIcon                     (CPF_Parm, CPF_OutParm)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon");

	UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BulletIcon != nullptr)
		*BulletIcon = params.BulletIcon;
}


// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Objective_WIdget_Class         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveContentWidgetClass(class UClass** Objective_WIdget_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass");

	UMissionObjectiveWidgetProviderInterface_C_GetObjectiveContentWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objective_WIdget_Class != nullptr)
		*Objective_WIdget_Class = params.Objective_WIdget_Class;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
