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

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
struct URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params
{
	struct FVector2D                                   Size;                                                     // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Screen_Position;                                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector2D                                   Screen_Size;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
struct URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params
{
	TEnumAsByte<EIntTypes>                             Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Variable_Name;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<int>                                        int1;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FVector2D>                           int2;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FVector>                             int3;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FLinearColor>                        int4;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     String;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
