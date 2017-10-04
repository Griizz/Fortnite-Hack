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

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::DebugSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections");

	UResults_CommanderXPBar_C_DebugSections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Get_ProgressBarNew_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UResults_CommanderXPBar_C::Get_ProgressBarNew_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Get_ProgressBarNew_ToolTipWidget");

	UResults_CommanderXPBar_C_Get_ProgressBarNew_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   XpSectionName                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::GetHoveredProgressBarSection(struct FName* XpSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection");

	UResults_CommanderXPBar_C_GetHoveredProgressBarSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XpSectionName != nullptr)
		*XpSectionName = params.XpSectionName;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ProgressBarPercent             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::UpdateProgressBarPercent(const struct FName& ParameterName, float ProgressBarPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent");

	UResults_CommanderXPBar_C_UpdateProgressBarPercent_Params params;
	params.ParameterName = ParameterName;
	params.ProgressBarPercent = ProgressBarPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::RandomizeDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView");

	UResults_CommanderXPBar_C_RandomizeDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::updateXpType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType");

	UResults_CommanderXPBar_C_updateXpType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::clearXpBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar");

	UResults_CommanderXPBar_C_clearXpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon");

	UResults_CommanderXPBar_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState");

	UResults_CommanderXPBar_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd");

	UResults_CommanderXPBar_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize");

	UResults_CommanderXPBar_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::UpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount");

	UResults_CommanderXPBar_C_UpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence");

	UResults_CommanderXPBar_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence");

	UResults_CommanderXPBar_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXPBar_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::On_Count_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished");

	UResults_CommanderXPBar_C_On_Count_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct");

	UResults_CommanderXPBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct");

	UResults_CommanderXPBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::ExecuteUbergraph_Results_CommanderXPBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar");

	UResults_CommanderXPBar_C_ExecuteUbergraph_Results_CommanderXPBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::CountIncrement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature");

	UResults_CommanderXPBar_C_CountIncrement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::IntroFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature");

	UResults_CommanderXPBar_C_IntroFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_CommanderXPBar_C::LeveledUp__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature");

	UResults_CommanderXPBar_C_LeveledUp__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_CommanderXPBar_C::CountFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature");

	UResults_CommanderXPBar_C_CountFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
