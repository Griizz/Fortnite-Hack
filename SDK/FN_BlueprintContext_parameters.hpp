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

// Function BlueprintContext.BlueprintContextLibrary.GetContext
struct UBlueprintContextLibrary_GetContext_Params
{
	class UObject*                                     ContextObject;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Class;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlueprintContextBase*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
