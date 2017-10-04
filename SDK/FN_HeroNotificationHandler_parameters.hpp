#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HeroNotificationHandler.HeroNotificationHandler_C.CreateWidget
struct UHeroNotificationHandler_C_CreateWidget_Params
{
	class APlayerController**                          OwningPlayer;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
