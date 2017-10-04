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

// Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UFortQuestItem*> UQuestTrackerTrackedQuestsList_C::GetQuestsToDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay");

	UQuestTrackerTrackedQuestsList_C_GetQuestsToDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
