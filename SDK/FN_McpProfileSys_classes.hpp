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

// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0028 - 0x0028)
class UMcpItemDefinitionBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		return ptr;
	}

};


// Class McpProfileSys.McpProfile
// 0x0288 (0x02B0 - 0x0028)
class UMcpProfile : public UObject
{
public:
	unsigned char                                      bAllowSubscriptionToNotificationsService : 1;             // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA7];                                      // 0x0029(0x00A7) MISSED OFFSET
	struct FString                                     DebugName;                                                // 0x00D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bProfileLockOperationPending : 1;                         // 0x00E0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bProfileUnlockOperationPending : 1;                       // 0x00E1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x00E2(0x000E) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x00F8(0x0010) (CPF_ZeroConstructor)
	int64_t                                            ProfileRevision;                                          // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullProfileQueryQueued;                                   // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldCreateInstances : 1;                               // 0x0114(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bProfileWriteLocked : 1;                                  // 0x0115(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	struct FDateTime                                   ProfileWriteLockExpireTime;                               // 0x0118(0x0008)
	int                                                CommandRevision;                                          // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x18C];                                     // 0x0124(0x018C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}


	void UnlockProfileForWrite(const struct FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const struct FString& Code, int Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};


// Class McpProfileSys.McpItemAware
// 0x0000 (0x0028 - 0x0028)
class UMcpItemAware : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileGroup
// 0x0168 (0x0190 - 0x0028)
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	int                                                DelayMcpResults;                                          // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FProfileEntry>                       ProfileList;                                              // 0x0080(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsInitialized : 1;                                       // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0098(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsServer : 1;                                            // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FString                                     ProfileNotificationsStompTopic;                           // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData04[0x40];                                      // 0x00C0(0x0040) MISSED OFFSET
	struct FString                                     LastMcpVersion;                                           // 0x0100(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LastContentVersion;                                       // 0x0110(0x0010) (CPF_ZeroConstructor)
	struct FTimespan                                   LocalTimeOffset;                                          // 0x0120(0x0008)
	TArray<struct FProfileHttpRequest>                 PendingRequests;                                          // 0x0128(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	unsigned char                                      bIsProcessingRequestGenerator : 1;                        // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FString                                     LockCode;                                                 // 0x0150(0x0010) (CPF_ZeroConstructor)
	TArray<class UMcpProfile*>                         LockedProfiles;                                           // 0x0160(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LockedProfilesString;                                     // 0x0170(0x0010) (CPF_ZeroConstructor)
	int                                                ProfileWriteLockTimeoutSecs;                              // 0x0180(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bSubscribedToNotifications : 1;                           // 0x0184(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0xB];                                       // 0x0185(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileManager
// 0x0020 (0x0048 - 0x0028)
class UMcpProfileManager : public UObject
{
public:
	TArray<struct FProfileGroupEntry>                  ServerProfileGroups;                                      // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FProfileGroupEntry>                  ClientProfileGroups;                                      // 0x0038(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
