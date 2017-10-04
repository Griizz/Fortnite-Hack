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

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieSceneSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
struct UMovieSceneSequencePlayer_StartPlayingNextTick_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UMovieSceneSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewEndTime;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieSceneSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieSceneSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieSceneSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UMovieSceneSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UMovieSceneSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UMovieSceneSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UMovieSceneSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
