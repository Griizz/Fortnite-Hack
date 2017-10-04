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

// UserDefinedStruct DynamicQuestUpdateInfo.DynamicQuestUpdateInfo
// 0x001D
struct FDynamicQuestUpdateInfo
{
	int                                                LastNotifiedCount_2_0F77AC33401CB8426EAEFE9B7A6BA3CF;     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AchievedCount_4_D769733A4EAE28644D6AFDB4BC3EB027;         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItem*                              QuestItem_11_3D49559C46BFAA72DF4BEBBC53D09EC3;            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestObjectiveInfo*                     QuestObjective_13_DD90737247F2659E162C58B4258EAEAF;       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TweenTimeRemaining_21_BE81ABC64DF8EDBD1C0476ADDB3D4541;   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasUpdateStarted_20_619FFE6348FDB23D6A4253BFCFB0DF57 : 1;// 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
