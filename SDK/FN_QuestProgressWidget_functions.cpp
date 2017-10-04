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

// Function QuestProgressWidget.QuestProgressWidget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Required                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Achieved                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestProgressWidget_C::Update(int Required, int Achieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestProgressWidget.QuestProgressWidget_C.Update");

	UQuestProgressWidget_C_Update_Params params;
	params.Required = Required;
	params.Achieved = Achieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
