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

// BlueprintGeneratedClass FeedbackAnnouncer.FeedbackAnnouncer_C
// 0x0000 (0x0EE0 - 0x0EE0)
class AFeedbackAnnouncer_C : public AFortPawn_FeedbackAnnouncer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedbackAnnouncer.FeedbackAnnouncer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
