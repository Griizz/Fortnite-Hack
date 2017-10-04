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

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item as Seen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::Mark_Item_as_Seen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item as Seen");

	UBP_BannerEditorTile_C_Mark_Item_as_Seen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State");

	UBP_BannerEditorTile_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_BannerEditorTile_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData");

	UBP_BannerEditorTile_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct");

	UBP_BannerEditorTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_BannerEditorTile_C::HandleBannerIconLoadGuardFinished(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished");

	UBP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected");

	UBP_BannerEditorTile_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered");

	UBP_BannerEditorTile_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_BannerEditorTile_C::ExecuteUbergraph_BP_BannerEditorTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile");

	UBP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_BannerEditorTile_C::BannerTileBangUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature");

	UBP_BannerEditorTile_C_BannerTileBangUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
