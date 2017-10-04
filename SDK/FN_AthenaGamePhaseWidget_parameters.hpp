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

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Construct
struct UAthenaGamePhaseWidget_C_Construct_Params
{
};

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.Tick
struct UAthenaGamePhaseWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
struct UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
