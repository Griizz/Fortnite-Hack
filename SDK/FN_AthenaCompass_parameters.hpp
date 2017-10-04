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

// Function AthenaCompass.AthenaCompass_C.UpdateMarker
struct UAthenaCompass_C_UpdateMarker_Params
{
	class UImage*                                      MarkerImage;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   MarkerWorldPosition;                                      // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     PawnLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.UpdateCompassMaterial
struct UAthenaCompass_C_UpdateCompassMaterial_Params
{
	struct FRotator                                    InRot;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.Construct
struct UAthenaCompass_C_Construct_Params
{
};

// Function AthenaCompass.AthenaCompass_C.Tick
struct UAthenaCompass_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
struct UAthenaCompass_C_ExecuteUbergraph_AthenaCompass_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
