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

// Function Subtitles.Subtitles_C.GetSubtitleVisibility
struct USubtitles_C_GetSubtitleVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Subtitles.Subtitles_C.Construct
struct USubtitles_C_Construct_Params
{
};

// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
struct USubtitles_C_ExecuteUbergraph_Subtitles_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
