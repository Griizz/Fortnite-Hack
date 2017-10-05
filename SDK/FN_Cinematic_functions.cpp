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

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AudioTrack                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::GetAudioTrackIndex(int* AudioTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.GetAudioTrackIndex");

	UCinematic_C_GetAudioTrackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioTrack != nullptr)
		*AudioTrack = params.AudioTrack;
}


// Function Cinematic.Cinematic_C.StopAndClearSubtitles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::StopAndClearSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.StopAndClearSubtitles");

	UCinematic_C_StopAndClearSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewSubtitlesExist              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortMediaSubtitlesPlayer* NewSubtitles                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary");

	UCinematic_C_ClearOldSubtitlesIfNecessary_Params params;
	params.NewSubtitlesExist = NewSubtitlesExist;
	params.NewSubtitles = NewSubtitles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.SetMoviePlaying
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MoviePlaying                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::SetMoviePlaying(bool MoviePlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.SetMoviePlaying");

	UCinematic_C_SetMoviePlaying_Params params;
	params.MoviePlaying = MoviePlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearMovieWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortMovieWidget*        MovieWidgetToClear             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCinematic_C::ClearMovieWidget(class UFortMovieWidget** MovieWidgetToClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovieWidget");

	UCinematic_C_ClearMovieWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieWidgetToClear != nullptr)
		*MovieWidgetToClear = params.MovieWidgetToClear;
}


// Function Cinematic.Cinematic_C.ClearMovieSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            MovieSlotToClear               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCinematic_C::ClearMovieSlot(class UPanelWidget** MovieSlotToClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovieSlot");

	UCinematic_C_ClearMovieSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieSlotToClear != nullptr)
		*MovieSlotToClear = params.MovieSlotToClear;
}


// Function Cinematic.Cinematic_C.PopContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UCinematic_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.PopContentWidgetInternal");

	UCinematic_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cinematic.Cinematic_C.SkipMovie
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::SkipMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.SkipMovie");

	UCinematic_C_SkipMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearMovie
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::ClearMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovie");

	UCinematic_C_ClearMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ShowMovie
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSoundWave*         MediaSoundWave                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNamedSlot*              MovieSlot                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UMovieWidget_C*          MovieWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCinematic_C::ShowMovie(class UMediaSource* MediaSource, class UMediaSoundWave* MediaSoundWave, class UNamedSlot** MovieSlot, class UMovieWidget_C** MovieWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ShowMovie");

	UCinematic_C_ShowMovie_Params params;
	params.MediaSource = MediaSource;
	params.MediaSoundWave = MediaSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieSlot != nullptr)
		*MovieSlot = params.MovieSlot;
	if (MovieWidget != nullptr)
		*MovieWidget = params.MovieWidget;
}


// Function Cinematic.Cinematic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCinematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.Construct");

	UCinematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCinematic_C::HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic");

	UCinematic_C_HandleClientEvent_QueueCinematic_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCinematic_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.Destruct");

	UCinematic_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleEndReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::HandleEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleEndReached");

	UCinematic_C_HandleEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCinematic_C::HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic");

	UCinematic_C_HandleClientEvent_SkipCinematic_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.PushContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FContentPushState*      State                          (CPF_Parm)

void UCinematic_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.PushContentWidgetInternal");

	UCinematic_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnEnterState");

	UCinematic_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnExitState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState*                  NextUIState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::OnExitState(EFortUIState* NextUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnExitState");

	UCinematic_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnMediaEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematic_C::OnMediaEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnMediaEvent");

	UCinematic_C_OnMediaEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCinematic_C::ExecuteUbergraph_Cinematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic");

	UCinematic_C_ExecuteUbergraph_Cinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
