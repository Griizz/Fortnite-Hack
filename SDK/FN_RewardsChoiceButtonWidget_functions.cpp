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

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EnableHighlight                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsChoiceButtonWidget_C::SetHighlight(bool EnableHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight");

	URewardsChoiceButtonWidget_C_SetHighlight_Params params;
	params.EnableHighlight = EnableHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsChoiceButtonWidget_C::SelectRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards");

	URewardsChoiceButtonWidget_C_SelectRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URewardsChoiceButtonWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown");

	URewardsChoiceButtonWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewardsWidget_C*        Owner                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RewardIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void URewardsChoiceButtonWidget_C::PopulateRewards(class URewardsWidget_C* Owner, int RewardIndex, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards");

	URewardsChoiceButtonWidget_C_PopulateRewards_Params params;
	params.Owner = Owner;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
