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

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	struct FGameplayTag                                TagToCheck;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_Parm, CPF_OutParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
	struct FGameplayTag                                A;                                                        // (CPF_Parm)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (CPF_Parm)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        // (CPF_Parm)
	struct FGameplayTag                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
	struct FGameplayTag                                TagOne;                                                   // (CPF_Parm)
	struct FGameplayTag                                TagTwo;                                                   // (CPF_Parm)
	bool                                               bExactMatch;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
	struct FGameplayTag                                TagOne;                                                   // (CPF_Parm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bExactMatch;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       Value;                                                    // (CPF_Parm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	struct FGameplayTag                                Value;                                                    // (CPF_Parm)
	struct FGameplayTag                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	struct FGameplayTagQuery                           TagQuery;                                                 // (CPF_Parm)
	struct FGameplayTagQuery                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
	struct FGameplayTag                                SingleTag;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm)
	bool                                               bExactMatch;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bExactMatch;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bExactMatch;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       OtherContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagQuery                           GameplayTagQuery;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        // (CPF_Parm)
	struct FGameplayTag                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagQuery                           TagQuery;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTagContainer                       InOutTagContainer;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       InTagContainer;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTagToContainer
struct UBlueprintGameplayTagLibrary_AddGameplayTagToContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                Tag;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
	struct FGameplayTagContainer                       InOutTagContainer;                                        // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                Tag;                                                      // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
