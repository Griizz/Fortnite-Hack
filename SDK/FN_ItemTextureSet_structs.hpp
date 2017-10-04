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

// UserDefinedStruct ItemTextureSet.ItemTextureSet
// 0x0A28
struct FItemTextureSet
{
	TEnumAsByte<EItemDisplayStyle>                     Style_21_0D38ED0D4F46097BD1353E930AE51488;                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         Bezel_32_21DC2A9C4E30B0D304AD4685FDFDA26D;                // 0x0008(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         Shadow_33_514BE8E24563A9CF138144960776C114;               // 0x0368(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         Chamfer_31_AD4B992A4499C810B0AA9F8AFD86EFAB;              // 0x06C8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
