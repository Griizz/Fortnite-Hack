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

// Function Results_Summary.Results_Summary_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Summary_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.Focus");

	UResults_Summary_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.InitializeRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            InTotalMissionPoints           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::InitializeRewards(int InTotalMissionPoints, TArray<class UFortItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.InitializeRewards");

	UResults_Summary_C_InitializeRewards_Params params;
	params.InTotalMissionPoints = InTotalMissionPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Summary_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization");

	UResults_Summary_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.Initialize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortItem*>       InRewardItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            InTotalMissionPoints           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::Initialize(class UFortUIScoreReport* InScoreReport, int InTotalMissionPoints, TArray<class UFortItem*>* InRewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.Initialize");

	UResults_Summary_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.InTotalMissionPoints = InTotalMissionPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewardItems != nullptr)
		*InRewardItems = params.InRewardItems;
}


// Function Results_Summary.Results_Summary_C.InitializeLootChest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::InitializeLootChest(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.InitializeLootChest");

	UResults_Summary_C_InitializeLootChest_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.PreConstruct");

	UResults_Summary_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");

	UResults_Summary_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Summary_C::ExecuteUbergraph_Results_Summary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary");

	UResults_Summary_C_ExecuteUbergraph_Results_Summary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Summary_C::OnReturnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature");

	UResults_Summary_C_OnReturnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
