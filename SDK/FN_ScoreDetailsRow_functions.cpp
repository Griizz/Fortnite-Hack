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

// Function ScoreDetailsRow.ScoreDetailsRow_C.UpdateRow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm)
// int                            TotalScore                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Combat                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Building                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Utility                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreDetailsRow_C::UpdateRow(const struct FText& PlayerName, int TotalScore, int Combat, int Building, int Utility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreDetailsRow.ScoreDetailsRow_C.UpdateRow");

	UScoreDetailsRow_C_UpdateRow_Params params;
	params.PlayerName = PlayerName;
	params.TotalScore = TotalScore;
	params.Combat = Combat;
	params.Building = Building;
	params.Utility = Utility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
