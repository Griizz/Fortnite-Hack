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

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Backfill_Color                 (CPF_Parm, CPF_IsPlainOldData)

void UItemDurabilityMeter_C::Set_Backfill_Color(const struct FLinearColor& Backfill_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color");

	UItemDurabilityMeter_C_Set_Backfill_Color_Params params;
	params.Backfill_Color = Backfill_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Durability                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDurabilityMeter_C::Set_Durability(float Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability");

	UItemDurabilityMeter_C_Set_Durability_Params params;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Draw_Size                      (CPF_Parm, CPF_IsPlainOldData)
// float                          Durability                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDurabilityMeter_C::Update(const struct FVector2D& Draw_Size, float Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update");

	UItemDurabilityMeter_C_Update_Params params;
	params.Draw_Size = Draw_Size;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemDurabilityMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct");

	UItemDurabilityMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDurabilityMeter_C::ExecuteUbergraph_ItemDurabilityMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter");

	UItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
