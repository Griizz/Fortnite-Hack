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

// BlueprintGeneratedClass GCNS_GM_OnDeathExplosion.GCNS_GM_OnDeathExplosion_C
// 0x0000 (0x0070 - 0x0070)
class UGCNS_GM_OnDeathExplosion_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnDeathExplosion.GCNS_GM_OnDeathExplosion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
