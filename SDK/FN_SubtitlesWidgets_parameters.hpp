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

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
struct UFortMediaSubtitlesPlayer_Stop_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
struct UFortMediaSubtitlesPlayer_SetSubtitles_Params
{
	class UOverlays*                                   Subtitles;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
struct UFortMediaSubtitlesPlayer_Play_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
struct UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
struct USubtitleDisplay_HasSubtitles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
