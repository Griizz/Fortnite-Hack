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

// Function MediaAssets.MediaOverlays.GetTexts
struct UMediaOverlays_GetTexts_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutTexts;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	struct FTimespan                                   Time;                                                     // (CPF_Parm)
};

// Function MediaAssets.MediaOverlays.GetSubtitles
struct UMediaOverlays_GetSubtitles_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutSubtitles;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	struct FTimespan                                   Time;                                                     // (CPF_Parm)
};

// Function MediaAssets.MediaOverlays.GetCaptions
struct UMediaOverlays_GetCaptions_Params
{
	TArray<struct FMediaPlayerOverlay>                 OutCaptions;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	struct FTimespan                                   Time;                                                     // (CPF_Parm)
};

// Function MediaAssets.MediaPlayer.SupportsSeeking
struct UMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsScrubbing
struct UMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsRate
struct UMediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Unthinned;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetVideoTexture
struct UMediaPlayer_SetVideoTexture_Params
{
	class UMediaTexture*                               NewTexture;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetSoundWave
struct UMediaPlayer_SetSoundWave_Params
{
	class UMediaSoundWave*                             NewSoundWave;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetRate
struct UMediaPlayer_SetRate_Params
{
	float                                              Rate;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetOverlays
struct UMediaPlayer_SetOverlays_Params
{
	class UMediaOverlays*                              NewOverlays;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetLooping
struct UMediaPlayer_SetLooping_Params
{
	bool                                               Looping;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
struct UMediaPlayer_SetDesiredPlayerName_Params
{
	struct FName                                       PlayerName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SelectTrack
struct UMediaPlayer_SelectTrack_Params
{
	int                                                TrackIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Seek
struct UMediaPlayer_Seek_Params
{
	struct FTimespan                                   Time;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Rewind
struct UMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Reopen
struct UMediaPlayer_Reopen_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Previous
struct UMediaPlayer_Previous_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Play
struct UMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Pause
struct UMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenUrl
struct UMediaPlayer_OpenUrl_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenSource
struct UMediaPlayer_OpenSource_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
struct UMediaPlayer_OpenPlaylistIndex_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylist
struct UMediaPlayer_OpenPlaylist_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenFile
struct UMediaPlayer_OpenFile_Params
{
	struct FString                                     FilePath;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Next
struct UMediaPlayer_Next_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsReady
struct UMediaPlayer_IsReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPreparing
struct UMediaPlayer_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPlaying
struct UMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPaused
struct UMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsLooping
struct UMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetUrl
struct UMediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackLanguage
struct UMediaPlayer_GetTrackLanguage_Params
{
	int                                                TrackIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
struct UMediaPlayer_GetTrackDisplayName_Params
{
	int                                                TrackIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTime
struct UMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetSelectedTrack
struct UMediaPlayer_GetSelectedTrack_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetReverseRates
struct UMediaPlayer_GetReverseRates_Params
{
	bool                                               Unthinned;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatRange                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetRate
struct UMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetPlayerName
struct UMediaPlayer_GetPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetNumTracks
struct UMediaPlayer_GetNumTracks_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetForwardRates
struct UMediaPlayer_GetForwardRates_Params
{
	bool                                               Unthinned;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatRange                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetDuration
struct UMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
struct UMediaPlayer_GetDesiredPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Close
struct UMediaPlayer_Close_Params
{
};

// Function MediaAssets.MediaPlayer.CanPlayUrl
struct UMediaPlayer_CanPlayUrl_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPlaySource
struct UMediaPlayer_CanPlaySource_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPause
struct UMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.RemoveAt
struct UMediaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Remove
struct UMediaPlaylist_Remove_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Num
struct UMediaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Insert
struct UMediaPlaylist_Insert_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetRandom
struct UMediaPlaylist_GetRandom_Params
{
	int                                                InOutIndex;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetPrevious
struct UMediaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetNext
struct UMediaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Get
struct UMediaPlaylist_Get_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Add
struct UMediaPlaylist_Add_Params
{
	class UMediaSource*                                MediaSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MediaAssets.FileMediaSource.SetFilePath
struct UFileMediaSource_SetFilePath_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MediaAssets.MediaTexture.GetWidth
struct UMediaTexture_GetWidth_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetHeight
struct UMediaTexture_GetHeight_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetAspectRatio
struct UMediaTexture_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
