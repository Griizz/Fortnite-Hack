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

// Function MissionModifierItem.MissionModifierItem_C.GetToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UMissionModifierItem_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModifierItem.MissionModifierItem_C.GetToolTipWidget");

	UMissionModifierItem_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionModifierItem.MissionModifierItem_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionModifierItem_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModifierItem.MissionModifierItem_C.Update");

	UMissionModifierItem_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionModifierItem.MissionModifierItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionModifierItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModifierItem.MissionModifierItem_C.Construct");

	UMissionModifierItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionModifierItem.MissionModifierItem_C.ExecuteUbergraph_MissionModifierItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionModifierItem_C::ExecuteUbergraph_MissionModifierItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModifierItem.MissionModifierItem_C.ExecuteUbergraph_MissionModifierItem");

	UMissionModifierItem_C_ExecuteUbergraph_MissionModifierItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
