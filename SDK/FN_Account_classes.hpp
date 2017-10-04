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

// Class Account.OnlineAccountCommon
// 0x07D8 (0x0800 - 0x0028)
class UOnlineAccountCommon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     AvailabilityServiceGameName;                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bRequireLightswitchAtStartup : 1;                         // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EulaKey;                                                  // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FWebEnvUrl>                          WebCreateEpicAccountUrl;                                  // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bShouldGrantFreeAccess : 1;                               // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0071(0x0001) MISSED OFFSET
	unsigned char                                      bUseGameSubAccessRedemption : 1;                          // 0x0072(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAllowHomeSharingAccess : 1;                              // 0x0073(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x78C];                                     // 0x0074(0x078C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.OnlineAccountCommon");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
