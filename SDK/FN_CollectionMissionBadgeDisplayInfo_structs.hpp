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

// UserDefinedStruct CollectionMissionBadgeDisplayInfo.CollectionMissionBadgeDisplayInfo
// 0x0018
struct FCollectionMissionBadgeDisplayInfo
{
	struct FCollectionBounds                           Bounds_14_295D6CA74FA0EC30A7015AB9010ADFD6;               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                BadgeTag_23_3FF135D54FFE66A5594ED095D3BA7681;             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	class UFortBadgeItemDefinition*                    BadgeItemDefinition_27_4EC70F514FAD538A8A68D7AD278D14FF;  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
