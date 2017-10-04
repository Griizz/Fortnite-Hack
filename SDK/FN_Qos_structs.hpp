#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Qos.EQosResponseType
enum class EQosResponseType
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3
};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4
};


// Enum Qos.EQosRegionResult
enum class EQosRegionResult
{
	EQosRegionResult__Invalid      = 0,
	EQosRegionResult__Success      = 1,
	EQosRegionResult__Incomplete   = 2,
	EQosRegionResult__EQosRegionResult_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0040
struct FQosDatacenterInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018)
	struct FString                                     RegionId;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bEnabled : 1;                                             // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bVisible : 1;                                             // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBeta : 1;                                                // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	TArray<struct FQosPingServerInfo>                  Servers;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Qos.QosRegionInfo
// 0x0078
struct FQosRegionInfo
{
	struct FQosDatacenterInfo                          Region;                                                   // 0x0000(0x0040) (CPF_Transient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0040(0x0001) UNKNOWN PROPERTY: EnumProperty Qos.QosRegionInfo.Result
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                AvgPingMs;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TArray<int>                                        PingResults;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0070(0x0008) (CPF_Transient)
};

// ScriptStruct Qos.QosSearchPass
// 0x0008
struct FQosSearchPass
{
	int                                                RegionIdx;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentSessionIdx;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
