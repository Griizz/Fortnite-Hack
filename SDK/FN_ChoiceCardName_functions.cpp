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

// Function ChoiceCardName.ChoiceCardName_C.UpdateText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DisplayText                    (CPF_Parm)
// EFortRarity                    Rarity                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChoiceCardName_C::UpdateText(const struct FText& DisplayText, EFortRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChoiceCardName.ChoiceCardName_C.UpdateText");

	UChoiceCardName_C_UpdateText_Params params;
	params.DisplayText = DisplayText;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
