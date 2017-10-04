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

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTag            TagToCheck                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_Parm, CPF_OutParm)

void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");

	UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_Parm)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");

	UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FGameplayTag            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            TagOne                         (CPF_Parm)
// struct FGameplayTag            TagTwo                         (CPF_Parm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");

	UBlueprintGameplayTagLibrary_MatchesTag_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            TagOne                         (CPF_Parm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");

	UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params;
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Value                          (CPF_Parm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            Value                          (CPF_Parm)
// struct FGameplayTag            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (CPF_Parm)
// struct FGameplayTagQuery       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            SingleTag                      (CPF_Parm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params;
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>    GameplayTags                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");

	UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");

	UBlueprintGameplayTagLibrary_HasTag_Params params;
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");

	UBlueprintGameplayTagLibrary_HasAnyTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");

	UBlueprintGameplayTagLibrary_HasAllTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UBlueprintGameplayTagLibrary::STATIC_GetTagName(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");

	UBlueprintGameplayTagLibrary_GetTagName_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagQuery       GameplayTagQuery               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");

	UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FGameplayTag            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagQuery       TagQuery                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FGameplayTag>    GameplayTags                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");

	UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   InTagContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTagToContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::STATIC_AddGameplayTagToContainer(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTagToContainer");

	UBlueprintGameplayTagLibrary_AddGameplayTagToContainer_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_Parm)

void UBlueprintGameplayTagLibrary::STATIC_AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* InOutTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");

	UBlueprintGameplayTagLibrary_AddGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
