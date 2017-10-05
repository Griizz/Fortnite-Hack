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

// Class Rejoin.RejoinCheck
// 0x0188 (0x01B0 - 0x0028)
class URejoinCheck : public UObject
{
public:
	ERejoinStatus                                      LastKnownStatus;                                          // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRejoinAfterCheck;                                        // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAttemptingRejoin;                                        // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x185];                                     // 0x002B(0x0185) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Rejoin.RejoinCheck");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
