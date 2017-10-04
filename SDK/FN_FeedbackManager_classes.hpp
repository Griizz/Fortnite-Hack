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

// BlueprintGeneratedClass FeedbackManager.FeedbackManager_C
// 0x0008 (0x04B0 - 0x04A8)
class AFeedbackManager_C : public AFortFeedbackManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedbackManager.FeedbackManager_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
