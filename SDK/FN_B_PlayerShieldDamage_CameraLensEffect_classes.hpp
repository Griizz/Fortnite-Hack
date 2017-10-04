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

// BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
// 0x0008 (0x0450 - 0x0448)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C");
		return ptr;
	}


	void UserConstructionScript();
	void PassParticle_Parameter_Shield(float NewParam);
	void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
