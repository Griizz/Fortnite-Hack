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

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItemTransformResultInfo_C::Is_Tranfsorm_Button_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled");

	UItemTransformResultInfo_C_Is_Tranfsorm_Button_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentSacrificePoints         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::Get_Transform_Data(int* CurrentSacrificePoints, int* CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data");

	UItemTransformResultInfo_C_Get_Transform_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = params.CurrentSacrificePoints;
	if (CurrentTier != nullptr)
		*CurrentTier = params.CurrentTier;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UItemTransformResultInfo_C::CalculateNextTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier");

	UItemTransformResultInfo_C_CalculateNextTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Tier                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Points                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::GetPointsForTier(int Tier, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier");

	UItemTransformResultInfo_C_GetPointsForTier_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformResultInfo_C::UpdateTierProgressPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage");

	UItemTransformResultInfo_C_UpdateTierProgressPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalSacrificePoints           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::CalculateCurrentSacrificePoints(int* TotalSacrificePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints");

	UItemTransformResultInfo_C_CalculateCurrentSacrificePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalSacrificePoints != nullptr)
		*TotalSacrificePoints = params.TotalSacrificePoints;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemTransformResultInfo_C::UpdateSacrificeInfo(TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo");

	UItemTransformResultInfo_C_UpdateSacrificeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformResultInfo_C::UpdateSacrificePointsBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar");

	UItemTransformResultInfo_C_UpdateSacrificePointsBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::SetKeyToRepresent(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent");

	UItemTransformResultInfo_C_SetKeyToRepresent_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	UItemTransformResultInfo_C_BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTransformResultInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct");

	UItemTransformResultInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::ExecuteUbergraph_ItemTransformResultInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo");

	UItemTransformResultInfo_C_ExecuteUbergraph_ItemTransformResultInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TransformActive                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature");

	UItemTransformResultInfo_C_OnUpdateSacrificeInfo__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SacrificePoints                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultInfo_C::OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature");

	UItemTransformResultInfo_C_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
