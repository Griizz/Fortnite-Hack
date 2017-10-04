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

// Function ChoiceCardCount.ChoiceCardCount_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InventoryCount                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChoiceCardCount_C::UpdateText(int InventoryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChoiceCardCount.ChoiceCardCount_C.UpdateText");

	UChoiceCardCount_C_UpdateText_Params params;
	params.InventoryCount = InventoryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
