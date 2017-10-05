#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UEditableGameplayTagQueryExpression*         RootExpression;                                           // 0x0048(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                // 0x0050(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};


// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	struct FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag);
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
	bool STATIC_AddGameplayTagToContainer(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer);
	void STATIC_AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* InOutTagContainer);
};


// Class GameplayTags.GameplayTagsManager
// 0x0158 (0x0180 - 0x0028)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TArray<struct FGameplayTagSource>                  TagSources;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x00B8(0x0068) MISSED OFFSET
	TArray<class UDataTable*>                          GameplayTagTables;                                        // 0x0120(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0130(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                          // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x0058 (0x00A0 - 0x0048)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                     // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               WarnOnInvalidTags;                                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	bool                                               FastReplication;                                          // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FStringAssetReference>               GameplayTagTableList;                                     // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                     // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               CommonlyReplicatedTags;                                   // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                NumBitsForContainerSize;                                  // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                NetIndexFirstBitSegment;                                  // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	struct FString                                     DeveloperConfigName;                                      // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
