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

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow");

	APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefinition != nullptr)
		*ItemDefinition = params.ItemDefinition;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Large_Texture                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItemDefinition*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals");

	APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params params;
	params.Large_Texture = Large_Texture;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetWeaponPlacementTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform");

	APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::UpdatePreviewMeshTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms");

	APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset");

	APartyDisplayManagerBP_C_GetItemPreviewOffset_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetPreviewMeshWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform");

	APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::SetupStaticMeshVisuals(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals");

	APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewMesh                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals");

	APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ResetVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals");

	APartyDisplayManagerBP_C_ResetVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript");

	APartyDisplayManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
// (FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimLevel__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc");

	APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
// (FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimLevel__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc");

	APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
// (FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimEvolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc");

	APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
// (FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimEvolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc");

	APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::ShowLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading");

	APartyDisplayManagerBP_C_ShowLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::HideLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading");

	APartyDisplayManagerBP_C_HideLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              ItemToView                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::ShowItem(class UFortItem** ItemToView)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem");

	APartyDisplayManagerBP_C_ShowItem_Params params;
	params.ItemToView = ItemToView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::PlayLevelUpEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect");

	APartyDisplayManagerBP_C_PlayLevelUpEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::PlayEvolutionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect");

	APartyDisplayManagerBP_C_PlayEvolutionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::CelebrateWithFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX");

	APartyDisplayManagerBP_C_CelebrateWithFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyDisplayManagerBP_C::PerformScaleMeshFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX");

	APartyDisplayManagerBP_C_PerformScaleMeshFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UFortItemDefinition**    ItemWhoseAssetsWereLoaded      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UObject*>*        LoadedAssets                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void APartyDisplayManagerBP_C::HandleLoadingAssetsForItemCompleted(class UFortItemDefinition** ItemWhoseAssetsWereLoaded, TArray<class UObject*>* LoadedAssets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted");

	APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params params;
	params.ItemWhoseAssetsWereLoaded = ItemWhoseAssetsWereLoaded;
	params.LoadedAssets = LoadedAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick");

	APartyDisplayManagerBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyDisplayManagerBP_C::ExecuteUbergraph_PartyDisplayManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP");

	APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
