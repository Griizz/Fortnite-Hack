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

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.GetToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UBP_FortLiveStreamGrantWindowExpires_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.GetToolTipWidget_1");

	UBP_FortLiveStreamGrantWindowExpires_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Clean Up Name Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::Clean_Up_Name_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Clean Up Name Text");

	UBP_FortLiveStreamGrantWindowExpires_C_Clean_Up_Name_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Name Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::Update_Name_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Name Text");

	UBP_FortLiveStreamGrantWindowExpires_C_Update_Name_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Expiration Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimespan               Timespan                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_FortLiveStreamGrantWindowExpires_C::Update_Expiration_Text(const struct FTimespan& Timespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Expiration Text");

	UBP_FortLiveStreamGrantWindowExpires_C_Update_Expiration_Text_Params params;
	params.Timespan = Timespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Set Stream Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_FortLiveStreamGrantWindowExpires_C::Set_Stream_Brush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Set Stream Brush");

	UBP_FortLiveStreamGrantWindowExpires_C_Set_Stream_Brush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortLiveStreamGrantWindowExpires_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.PreConstruct");

	UBP_FortLiveStreamGrantWindowExpires_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Construct");

	UBP_FortLiveStreamGrantWindowExpires_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowStarts_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortLiveStreamGrantWindowExpires_C::OnLiveStreamingQuestWindowStarts_Event_1(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowStarts_Event_1");

	UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowStarts_Event_1_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowEnds_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::OnLiveStreamingQuestWindowEnds_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowEnds_Event_1");

	UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowEnds_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowSelectedViewers_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Names                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UBP_FortLiveStreamGrantWindowExpires_C::OnLiveStreamingQuestWindowSelectedViewers_Event_1(TArray<struct FText> Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowSelectedViewers_Event_1");

	UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowSelectedViewers_Event_1_Params params;
	params.Names = Names;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.HandleSimulateExpirationTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::HandleSimulateExpirationTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.HandleSimulateExpirationTimer");

	UBP_FortLiveStreamGrantWindowExpires_C_HandleSimulateExpirationTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnAnimation_Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::OnAnimation_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnAnimation_Finished");

	UBP_FortLiveStreamGrantWindowExpires_C_OnAnimation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Handle Wait Between Names
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::Handle_Wait_Between_Names()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Handle Wait Between Names");

	UBP_FortLiveStreamGrantWindowExpires_C_Handle_Wait_Between_Names_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.TextFadedOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::TextFadedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.TextFadedOut");

	UBP_FortLiveStreamGrantWindowExpires_C_TextFadedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortLiveStreamGrantWindowExpires_C::ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires");

	UBP_FortLiveStreamGrantWindowExpires_C_ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerStarted__DelegateSignature");

	UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortLiveStreamGrantWindowExpires_C::StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerExpired__DelegateSignature");

	UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
