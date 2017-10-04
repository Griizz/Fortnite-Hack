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

// Class Qos.QosBeaconClient
// 0x0060 (0x04A0 - 0x0440)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0440(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}


	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse();
};


// Class Qos.QosBeaconHost
// 0x0010 (0x03C0 - 0x03B0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x0080 (0x00A8 - 0x0028)
class UQosRegionManager : public UObject
{
public:
	unsigned char                                      bUseOldQosServers : 1;                                    // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NumTestsPerRegion;                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PingTimeout;                                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FQosDatacenterInfo>                  Datacenters;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0048(0x0008)
	class UQosEvaluator*                               Evaluator;                                                // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0058(0x0001) UNKNOWN PROPERTY: EnumProperty Qos.QosRegionManager.QosEvalResult
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<struct FQosRegionInfo>                      RegionOptions;                                            // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ForceRegionId;                                            // 0x0070(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bRegionForcedViaCommandline : 1;                          // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     SelectedRegionId;                                         // 0x0088(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x00F8 (0x0120 - 0x0028)
class UQosEvaluator : public UObject
{
public:
	struct FQosSearchPass                              CurrentSearchPass;                                        // 0x0028(0x0008)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET
	int                                                ControllerId;                                             // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInProgress : 1;                                          // 0x00DC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCancelOperation : 1;                                     // 0x00DD(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET
	TArray<struct FQosRegionInfo>                      Datacenters;                                              // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
