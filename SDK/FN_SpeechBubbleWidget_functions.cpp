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

// Function SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InitObject                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpeechBubbleWidget_C::InitFromObject(class UObject* InitObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject");

	USpeechBubbleWidget_C_InitFromObject_Params params;
	params.InitObject = InitObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpeechBubbleWidget_C::ExecuteUbergraph_SpeechBubbleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget");

	USpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
