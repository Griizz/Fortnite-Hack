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

// BlueprintGeneratedClass Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
// 0x0000 (0x0110 - 0x0110)
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
