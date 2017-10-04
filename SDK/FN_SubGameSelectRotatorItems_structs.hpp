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

// UserDefinedStruct SubGameSelectRotatorItems.SubGameSelectRotatorItems
// 0x001C
struct FSubGameSelectRotatorItems
{
	class UTexture*                                    TextureA_14_E7B5352843A0CC202D091BA5F59BA9DD;             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    TextureB_17_97E08EFC465353392FD93BA3E86A55E2;             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      LongDuration_23_9643D52549E3E365C6EAA7BD64E38A7D : 1;     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TextureAOffset_18_6D3555E44726B049D630D78E92CC4870;       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TextureBOffset_21_74C86E2140E24AD02DBF4CB21456B661;       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
