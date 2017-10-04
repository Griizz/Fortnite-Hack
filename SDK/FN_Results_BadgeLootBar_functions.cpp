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

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            LootPoints                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NextLootLevelPoints            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::GetNextLootLevelPoints(int LootPoints, int* NextLootLevelPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints");

	UResults_BadgeLootBar_C_GetNextLootLevelPoints_Params params;
	params.LootPoints = LootPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextLootLevelPoints != nullptr)
		*NextLootLevelPoints = params.NextLootLevelPoints;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState");

	UResults_BadgeLootBar_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd");

	UResults_BadgeLootBar_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon");

	UResults_BadgeLootBar_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UResults_Badge_C*        Badge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Points                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::GetBadgePoints(class UResults_Badge_C* Badge, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints");

	UResults_BadgeLootBar_C_GetBadgePoints_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::SetLootLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel");

	UResults_BadgeLootBar_C_SetLootLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::Initialize(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize");

	UResults_BadgeLootBar_C_Initialize_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::UpdateAddBadgePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints");

	UResults_BadgeLootBar_C_UpdateAddBadgePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence");

	UResults_BadgeLootBar_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResults_Badge_C*        Badge                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::Add_Badge_Points_Sequence(class UResults_Badge_C* Badge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence");

	UResults_BadgeLootBar_C_Add_Badge_Points_Sequence_Params params;
	params.Badge = Badge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_BadgeLootBar_C_BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::On_Leveled_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up");

	UResults_BadgeLootBar_C_On_Leveled_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct");

	UResults_BadgeLootBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_BadgeLootBar_C::ExecuteUbergraph_Results_BadgeLootBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar");

	UResults_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::LeveledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature");

	UResults_BadgeLootBar_C_LeveledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::FinishedAddingBadgePoints__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature");

	UResults_BadgeLootBar_C_FinishedAddingBadgePoints__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_BadgeLootBar_C::IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature");

	UResults_BadgeLootBar_C_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
