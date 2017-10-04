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

// BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C
// 0x0000 (0x0040 - 0x0040)
class UThrowingStarTest_C : public UGameplayCueNotify_Static
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C");
		return ptr;
	}


	bool OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
