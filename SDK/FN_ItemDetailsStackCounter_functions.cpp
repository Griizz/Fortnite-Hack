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

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemDetailsStackCounter_C::Refresh_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility");

	UItemDetailsStackCounter_C_Refresh_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Set Stack Count
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsStackCounter_C::Set_Stack_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Set Stack Count");

	UItemDetailsStackCounter_C_Set_Stack_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsStackCounter_C::Update(TEnumAsByte<EFortBrushSize> Brush_Size, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update");

	UItemDetailsStackCounter_C_Update_Params params;
	params.Brush_Size = Brush_Size;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsStackCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct");

	UItemDetailsStackCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemDetailsStackCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct");

	UItemDetailsStackCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsStackCounter_C::ExecuteUbergraph_ItemDetailsStackCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter");

	UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
