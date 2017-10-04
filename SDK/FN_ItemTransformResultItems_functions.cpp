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

// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultItems_C::UpdateMainReward(class UFortItem* Item, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward");

	UItemTransformResultItems_C_UpdateMainReward_Params params;
	params.Item = Item;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            TotalHeroXP                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TotalSchematicXP               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TotalWorkerXP                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultItems_C::CalculateRecycleXP(TArray<class UFortItem*>* SacrificeItems, int* TotalHeroXP, int* TotalSchematicXP, int* TotalWorkerXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP");

	UItemTransformResultItems_C_CalculateRecycleXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
	if (TotalHeroXP != nullptr)
		*TotalHeroXP = params.TotalHeroXP;
	if (TotalSchematicXP != nullptr)
		*TotalSchematicXP = params.TotalSchematicXP;
	if (TotalWorkerXP != nullptr)
		*TotalWorkerXP = params.TotalWorkerXP;
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Transform_Key                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            CurrentTier                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultItems_C::UpdateItems(class UFortItem* Transform_Key, int CurrentTier, TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems");

	UItemTransformResultItems_C_UpdateItems_Params params;
	params.Transform_Key = Transform_Key;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultItems_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct");

	UItemTransformResultItems_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformResultItems_C::ExecuteUbergraph_ItemTransformResultItems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems");

	UItemTransformResultItems_C_ExecuteUbergraph_ItemTransformResultItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
