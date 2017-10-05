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

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
struct UCinematic_C_GetAudioTrackIndex_Params
{
	int                                                AudioTrack;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.StopAndClearSubtitles
struct UCinematic_C_StopAndClearSubtitles_Params
{
};

// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
struct UCinematic_C_ClearOldSubtitlesIfNecessary_Params
{
	bool                                               NewSubtitlesExist;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMediaSubtitlesPlayer*                   NewSubtitles;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.SetMoviePlaying
struct UCinematic_C_SetMoviePlaying_Params
{
	bool                                               MoviePlaying;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.ClearMovieWidget
struct UCinematic_C_ClearMovieWidget_Params
{
	class UFortMovieWidget*                            MovieWidgetToClear;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.ClearMovieSlot
struct UCinematic_C_ClearMovieSlot_Params
{
	class UPanelWidget*                                MovieSlotToClear;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.PopContentWidgetInternal
struct UCinematic_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.SkipMovie
struct UCinematic_C_SkipMovie_Params
{
};

// Function Cinematic.Cinematic_C.ClearMovie
struct UCinematic_C_ClearMovie_Params
{
};

// Function Cinematic.Cinematic_C.ShowMovie
struct UCinematic_C_ShowMovie_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSoundWave*                             MediaSoundWave;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNamedSlot*                                  MovieSlot;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UMovieWidget_C*                              MovieWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.Construct
struct UCinematic_C_Construct_Params
{
};

// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
struct UCinematic_C_HandleClientEvent_QueueCinematic_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Cinematic.Cinematic_C.Destruct
struct UCinematic_C_Destruct_Params
{
};

// Function Cinematic.Cinematic_C.HandleEndReached
struct UCinematic_C_HandleEndReached_Params
{
};

// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
struct UCinematic_C_HandleClientEvent_SkipCinematic_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Cinematic.Cinematic_C.PushContentWidgetInternal
struct UCinematic_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
};

// Function Cinematic.Cinematic_C.OnEnterState
struct UCinematic_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.OnExitState
struct UCinematic_C_OnExitState_Params
{
	EFortUIState*                                      NextUIState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Cinematic.Cinematic_C.OnMediaEvent
struct UCinematic_C_OnMediaEvent_Params
{
};

// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
struct UCinematic_C_ExecuteUbergraph_Cinematic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
