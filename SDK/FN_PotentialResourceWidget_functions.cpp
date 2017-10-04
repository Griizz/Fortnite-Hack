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

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               PotentialResource              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeakpointDamage               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPotentialResourceWidget_C::ShowPotentialResource(class UFortItem* PotentialResource, bool bWeakpointDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource");

	UPotentialResourceWidget_C_ShowPotentialResource_Params params;
	params.PotentialResource = PotentialResource;
	params.bWeakpointDamage = bWeakpointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::SetupFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont");

	UPotentialResourceWidget_C_SetupFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               Resource                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UPotentialResourceWidget_C::GetResourceCountAsText(class UFortItem* Resource, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText");

	UPotentialResourceWidget_C_GetResourceCountAsText_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::UpdateResourceCountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText");

	UPotentialResourceWidget_C_UpdateResourceCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.Construct");

	UPotentialResourceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::HandleTranslateAndFadeUpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished");

	UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPotentialResourceWidget_C::ExecuteUbergraph_PotentialResourceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget");

	UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::FinishedShowing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature");

	UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
