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

// Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeroSquadBonuses_C::OnSquadSlotSelected(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected");

	UHeroSquadBonuses_C_OnSquadSlotSelected_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
