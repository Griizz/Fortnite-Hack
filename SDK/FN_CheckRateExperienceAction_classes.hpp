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

// BlueprintGeneratedClass CheckRateExperienceAction.CheckRateExperienceAction_C
// 0x0010 (0x03F8 - 0x03E8)
class ACheckRateExperienceAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckRateExperienceAction.CheckRateExperienceAction_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Execute(struct FFortScriptedActionParams* Params);
	void ExecuteUbergraph_CheckRateExperienceAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
