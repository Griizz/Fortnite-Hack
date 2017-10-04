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

// BlueprintGeneratedClass AIGoalManager.AIGoalManager_C
// 0x0008 (0x04A8 - 0x04A0)
class AAIGoalManager_C : public AFortAIGoalManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIGoalManager.AIGoalManager_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
