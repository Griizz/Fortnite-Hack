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

// BlueprintGeneratedClass Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
// 0x0010 (0x0398 - 0x0388)
class AThreat_RainAttachedToPlayer_C : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
