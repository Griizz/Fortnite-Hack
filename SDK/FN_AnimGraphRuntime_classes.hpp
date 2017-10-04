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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000 (0x0358 - 0x0358)
class UAnimCustomInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0358 - 0x0358)
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
