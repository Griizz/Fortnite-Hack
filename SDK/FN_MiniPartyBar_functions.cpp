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

// Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UMiniPartyBar_C::Get_Banners_Tooltip_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget");

	UMiniPartyBar_C_Get_Banners_Tooltip_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortUIFeatureState            FeatureState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyBar_C::HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged");

	UMiniPartyBar_C_HandlePartybarUIFeatureChanged_Params params;
	params.Feature = Feature;
	params.FeatureState = FeatureState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyBar.MiniPartyBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMiniPartyBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyBar.MiniPartyBar_C.Construct");

	UMiniPartyBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyBar_C::BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	UMiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyBar_C::ExecuteUbergraph_MiniPartyBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar");

	UMiniPartyBar_C_ExecuteUbergraph_MiniPartyBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
