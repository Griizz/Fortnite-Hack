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

// UserDefinedStruct HeroCoreStat.HeroCoreStat
// 0x03B0
struct FHeroCoreStat
{
	struct FGameplayAttribute                          Attribute_2_859C1FB14ABE4A72207022AB0F1427C4;             // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         Icon_10_9D04FBD74360020AB7F4218AE9EBD958;                 // 0x0020(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Name_5_252242B144B4F7E24E2AE1A24ECF0B7B;                  // 0x0380(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description_7_9356C1674E7568A4B47D958509333360;           // 0x0398(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
