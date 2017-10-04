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

// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inStatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadStatsWidget_C::HighlightStat(int inStatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat");

	USquadStatsWidget_C_HighlightStat_Params params;
	params.inStatIndex = inStatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::RefreshScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll");

	USquadStatsWidget_C_RefreshScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates");

	USquadStatsWidget_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::ToggleBetweenStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats");

	USquadStatsWidget_C_ToggleBetweenStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerStateChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerState                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USquadStatsWidget_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerStateChanged");

	USquadStatsWidget_C_HandlePlayerStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerID                       (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USquadStatsWidget_C::HandlePlayerInfoChanged(struct FUniqueNetIdRepl* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandlePlayerInfoChanged");

	USquadStatsWidget_C_HandlePlayerInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates");

	USquadStatsWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::InitCoreStatsWidgetArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray");

	USquadStatsWidget_C_InitCoreStatsWidgetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USquadStatsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.Construct");

	USquadStatsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadStatsWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	USquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadStatsWidget_C::BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature");

	USquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USquadStatsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.Destruct");

	USquadStatsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USquadStatsWidget_C::HandleSquadSlottingPreviewStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged");

	USquadStatsWidget_C_HandleSquadSlottingPreviewStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadStatsWidget_C::ExecuteUbergraph_SquadStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget");

	USquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadStatsWidget_C::DetailedStatsClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature");

	USquadStatsWidget_C_DetailedStatsClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
