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

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	Failed                         = 2,
	Cancelled                      = 3,
	Invalid                        = 4,
	NotAllowed                     = 5,
	Restored                       = 6,
	AlreadyOwned                   = 7,
	EInAppPurchaseState_MAX        = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None                           = 0,
	Quit                           = 1,
	Won                            = 2,
	Lost                           = 3,
	Tied                           = 4,
	TimeExpired                    = 5,
	First                          = 6,
	Second                         = 7,
	Third                          = 8,
	Fourth                         = 9,
	EMPMatchOutcome_MAX            = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InterfaceClassName;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8
struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              RawPrice;                                                 // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     CurrencyCode;                                             // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     CurrencySymbol;                                           // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DecimalSeparator;                                         // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     GroupingSeparator;                                        // 0x0088(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0098(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030
struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                        // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
