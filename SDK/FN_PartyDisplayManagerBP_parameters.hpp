#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
struct APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
struct APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params
{
	class UTexture2D*                                  Large_Texture;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItemDefinition*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
struct APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
struct APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
struct APartyDisplayManagerBP_C_GetItemPreviewOffset_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
struct APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
struct APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
struct APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params
{
	class USkeletalMesh*                               NewMesh;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
struct APartyDisplayManagerBP_C_ResetVisuals_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
struct APartyDisplayManagerBP_C_UserConstructionScript_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
struct APartyDisplayManagerBP_C_ShowLoading_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
struct APartyDisplayManagerBP_C_HideLoading_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
struct APartyDisplayManagerBP_C_ShowItem_Params
{
	class UFortItem**                                  ItemToView;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
struct APartyDisplayManagerBP_C_PlayLevelUpEffect_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
struct APartyDisplayManagerBP_C_PlayEvolutionEffect_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
struct APartyDisplayManagerBP_C_CelebrateWithFX_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
struct APartyDisplayManagerBP_C_PerformScaleMeshFX_Params
{
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
struct APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params
{
	class UFortItemDefinition**                        ItemWhoseAssetsWereLoaded;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>*                            LoadedAssets;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
struct APartyDisplayManagerBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
struct APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
