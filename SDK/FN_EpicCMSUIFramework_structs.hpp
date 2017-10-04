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

// Enum EpicCMSUIFramework.EDateType
enum class EDateType
{
	EDateType__None                = 0,
	EDateType__Coming              = 1,
	EDateType__Ending              = 2,
	EDateType__EDateType_MAX       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicCMSUIFramework.SlotDescription
// 0x0018
struct FSlotDescription
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ColumnCount;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RowCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseFeaturedTextStyle : 1;                                // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAutoScroll : 1;                                    // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct EpicCMSUIFramework.TileDefinition
// 0x0088
struct FTileDefinition
{
	struct FString                                     TypeString;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Subtitle;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Eyebrow;                                                  // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Link;                                                     // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     GroupID;                                                  // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FDateTime                                   Countdown;                                                // 0x0060(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0068(0x0001) UNKNOWN PROPERTY: EnumProperty EpicCMSUIFramework.TileDefinition.CountdownType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     MediaUrl;                                                 // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      IsVisible : 1;                                            // 0x0080(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSTileTypeMapping
// 0x0020 (0x0028 - 0x0008)
struct FEpicCMSTileTypeMapping : public FTableRowBase
{
	TAssetPtr<class UClass>                            TileClass;                                                // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// 0x0020 (0x0028 - 0x0008)
struct FEpicCMSLayoutTypeMapping : public FTableRowBase
{
	TAssetPtr<class UClass>                            LayoutType;                                               // 0x0008(0x0020) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
