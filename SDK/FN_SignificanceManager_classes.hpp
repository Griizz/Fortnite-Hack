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

// Class SignificanceManager.SignificanceManager
// 0x00C8 (0x00F0 - 0x0028)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET
	struct FStringClassReference                       SignificanceManagerClassName;                             // 0x00E0(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
