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

// Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListWidget_C::PresentAllRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards");

	URewardsListWidget_C_PresentAllRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHomeScreenQuestRewardItem_C* Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DisplayName                    (CPF_Parm)
// class UFrontEndRewardWrapperWidget_C* OutputPin                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsListWidget_C::CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, const struct FText& DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper");

	URewardsListWidget_C_CreateRewardWrapper_Params params;
	params.Item = Item;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function RewardsListWidget.RewardsListWidget_C.CreateReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortItemInstanceQuantityPair FortItemInstanceQuantityPair   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Selectable                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsListWidget_C::CreateReward(const struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.CreateReward");

	URewardsListWidget_C_CreateReward_Params params;
	params.FortItemInstanceQuantityPair = FortItemInstanceQuantityPair;
	params.Selectable = Selectable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListWidget.RewardsListWidget_C.PresentNextReward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListWidget_C::PresentNextReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.PresentNextReward");

	URewardsListWidget_C_PresentNextReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SelectableRewards              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void URewardsListWidget_C::PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>* Rewards, TArray<struct FFortItemInstanceQuantityPair>* SelectableRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.PopulateRewards");

	URewardsListWidget_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
	if (SelectableRewards != nullptr)
		*SelectableRewards = params.SelectableRewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
