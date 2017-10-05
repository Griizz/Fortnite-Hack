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

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
struct UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
struct UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params
{
	class UTexture2D*                                  Image;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // (CPF_Parm)
	struct FText                                       Subtitle;                                                 // (CPF_Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
struct UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params
{
	struct FText                                       Subtitle;                                                 // (CPF_Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
struct UTalkingHeadWidget_C_SetTalkingHeadName_Params
{
	struct FText                                       Title;                                                    // (CPF_Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
struct UTalkingHeadWidget_C_SetTalkingHeadImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
struct UTalkingHeadWidget_C_Construct_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
struct UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
