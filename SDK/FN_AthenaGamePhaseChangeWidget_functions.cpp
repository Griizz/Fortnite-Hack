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

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaGamePhaseChangeWidget_C::PlayGamePhaseAlertSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound");

	UAthenaGamePhaseChangeWidget_C_PlayGamePhaseAlertSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  MESSAGE                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  TimeText                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaGamePhaseChangeWidget_C::UpdateMessaging(struct FText* MESSAGE, struct FText* TimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging");

	UAthenaGamePhaseChangeWidget_C_UpdateMessaging_Params params;
	params.MESSAGE = MESSAGE;
	params.TimeText = TimeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished");

	UAthenaGamePhaseChangeWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaGamePhaseChangeWidget_C::GamePhaseStepChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged");

	UAthenaGamePhaseChangeWidget_C_GamePhaseStepChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::ExecuteUbergraph_AthenaGamePhaseChangeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget");

	UAthenaGamePhaseChangeWidget_C_ExecuteUbergraph_AthenaGamePhaseChangeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
