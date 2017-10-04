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

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged");

	UProgressModalWidget_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             Icon                           (CPF_Parm)

void UProgressModalWidget_C::SetIcon(const struct FSlateBrush& Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetIcon");

	UProgressModalWidget_C_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void UProgressModalWidget_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetDescription");

	UProgressModalWidget_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)

void UProgressModalWidget_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.SetTitle");

	UProgressModalWidget_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UProgressModalWidget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Initialize");

	UProgressModalWidget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProgressModalWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Construct");

	UProgressModalWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UProgressModalWidget_C::HandleIntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded");

	UProgressModalWidget_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UProgressModalWidget_C::HandleOutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded");

	UProgressModalWidget_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProgressModalWidget_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro");

	UProgressModalWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProgressModalWidget_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro");

	UProgressModalWidget_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProgressModalWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Destruct");

	UProgressModalWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget");

	UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
