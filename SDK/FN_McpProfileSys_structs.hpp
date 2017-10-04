#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0018
struct FProfileEntry
{
	struct FString                                     ProfileId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UMcpProfile*                                 ProfileObject;                                            // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct McpProfileSys.ProfileHttpRequest
// 0x0070
struct FProfileHttpRequest
{
	class UMcpProfile*                                 SourceProfile;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020
struct FProfileGroupEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0058
struct FMcpLootEntry
{
	struct FString                                     ItemType;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ItemGuid;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                Quantity;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020)
	struct FString                                     ItemProfile;                                              // 0x0048(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020
struct FMcpLootResult
{
	struct FString                                     TierGroupName;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMcpLootEntry>                       Items;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// 0x0028
struct FProfileUpdateNotification
{
	TArray<struct FJsonObjectWrapper>                  Changes;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   LockExpiration;                                           // 0x0010(0x0008)
	int                                                CommandRevision;                                          // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int64_t                                            Revision;                                                 // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0050
struct FProfileUpdateSingle
{
	int64_t                                            ProfileRevision;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x0008(0x0010) (CPF_ZeroConstructor)
	int64_t                                            ProfileChangesBaseRevision;                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FJsonObjectWrapper>                  ProfileChanges;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   LockExpiration;                                           // 0x0030(0x0008)
	TArray<struct FJsonObjectWrapper>                  Notifications;                                            // 0x0038(0x0010) (CPF_ZeroConstructor)
	int                                                ProfileCommandRevision;                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x00F0 (0x0140 - 0x0050)
struct FProfileUpdate : public FProfileUpdateSingle
{
	int                                                ResponseVersion;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FDateTime                                   ServerTime;                                               // 0x0058(0x0008)
	TArray<struct FProfileUpdateSingle>                MultiUpdate;                                              // 0x0060(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0070(0x00D0) MISSED OFFSET
};

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0070
struct FBaseUrlContext
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FPublicUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FClientUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FDedicatedServerUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048
struct FMcpAddItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TemplateId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                Quantity;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020)
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010
struct FMcpRemoveItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018
struct FMcpChangeQuantityRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                DeltaQuantity;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030
struct FMcpChangeAttributesRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0010(0x0020)
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058
struct FMcpProfileChangeRequest
{
	int                                                BaseCommandRevision;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMcpAddItemRequest>                  AddRequests;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMcpRemoveItemRequest>               RemoveRequests;                                           // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMcpChangeQuantityRequest>           ChangeQuantityRequests;                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMcpChangeAttributesRequest>         ChangeAttributesRequests;                                 // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FJsonObjectWrapper>                  ChangeStatRequests;                                       // 0x0048(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
