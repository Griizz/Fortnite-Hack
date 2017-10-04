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

// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovieWidget_C::SetDelayedContentValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetDelayedContentValues");

	UMovieWidget_C_SetDelayedContentValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Play
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldRewind                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieWidget_C::Play(bool ShouldRewind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Play");

	UMovieWidget_C_Play_Params params;
	params.ShouldRewind = ShouldRewind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.StopPlaying
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovieWidget_C::StopPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.StopPlaying");

	UMovieWidget_C_StopPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMediaSource*            InMediaSource                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSoundWave*         InMediaSoundWave               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieWidget_C::Init(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Init");

	UMovieWidget_C_Init_Params params;
	params.InMediaSource = InMediaSource;
	params.InMediaSoundWave = InMediaSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMovieWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Destruct");

	UMovieWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         NewWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         NewHeight                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieWidget_C::MediaDimensionsUpdated(float* NewWidth, float* NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated");

	UMovieWidget_C_MediaDimensionsUpdated_Params params;
	params.NewWidth = NewWidth;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.OnMediaLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovieWidget_C::OnMediaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.OnMediaLoaded");

	UMovieWidget_C_OnMediaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget");

	UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature");

	UMovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
