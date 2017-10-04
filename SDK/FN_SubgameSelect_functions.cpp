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

// Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HideHeader                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HideFooter                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelect_C::UpdateHeaderAndFooter(bool HideHeader, bool HideFooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter");

	USubgameSelect_C_UpdateHeaderAndFooter_Params params;
	params.HideHeader = HideHeader;
	params.HideFooter = HideFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* USubgameSelect_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal");

	USubgameSelect_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelect.SubgameSelect_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USubgameSelect_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.Initialize");

	USubgameSelect_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USubgameSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.Construct");

	USubgameSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USubgameSelect_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.OnEnterState");

	USubgameSelect_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FContentPushState*      State                          (CPF_Parm)

void USubgameSelect_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal");

	USubgameSelect_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubgameSelect_C::ExecuteUbergraph_SubgameSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect");

	USubgameSelect_C_ExecuteUbergraph_SubgameSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
