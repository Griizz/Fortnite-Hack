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

// ScriptStruct Overlay.OverlayItem
// 0x0028
struct FOverlayItem
{
	struct FTimespan                                   StartTime;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FTimespan                                   EndTime;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     Text;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
