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

// Function SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject
struct USpeechBubbleWidget_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget
struct USpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
