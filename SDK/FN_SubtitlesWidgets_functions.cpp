// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFortMediaSubtitlesPlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop");

	UFortMediaSubtitlesPlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UOverlays*               Subtitles                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles");

	UFortMediaSubtitlesPlayer_SetSubtitles_Params params;
	params.Subtitles = Subtitles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFortMediaSubtitlesPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play");

	UFortMediaSubtitlesPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer");

	UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USubtitleDisplay::HasSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles");

	USubtitleDisplay_HasSubtitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
