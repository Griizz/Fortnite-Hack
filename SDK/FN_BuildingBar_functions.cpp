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

// Function BuildingBar.BuildingBar_C.UpdateBuildingTrap
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABuildingTrap*           BuildingTrap                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::UpdateBuildingTrap(class ABuildingTrap* BuildingTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.UpdateBuildingTrap");

	UBuildingBar_C_UpdateBuildingTrap_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Set Display Mode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortBuildingInteraction       Display_Mode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Set_Display_Mode(EFortBuildingInteraction Display_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Set Display Mode");

	UBuildingBar_C_Set_Display_Mode_Params params;
	params.Display_Mode = Display_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Durability Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingBar_C::Update_Durability_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Durability Text");

	UBuildingBar_C_Update_Durability_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current Durability Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentDurability              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Update_Current_Durability_Value(float CurrentDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current Durability Value");

	UBuildingBar_C_Update_Current_Durability_Value_Params params;
	params.CurrentDurability = CurrentDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max Durability Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Update_Max_Durability_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max Durability Value");

	UBuildingBar_C_Update_Max_Durability_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Initialize Bar
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Initialize Bar");

	UBuildingBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Set Timer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Set_Timer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Set Timer");

	UBuildingBar_C_Set_Timer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update");

	UBuildingBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update HP Delta Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingBar_C::Update_HP_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update HP Delta Bar");

	UBuildingBar_C_Update_HP_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update HP Fill Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingBar_C::Update_HP_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update HP Fill Bar");

	UBuildingBar_C_Update_HP_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current HP Value
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Update_Current_HP_Value(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current HP Value");

	UBuildingBar_C_Update_Current_HP_Value_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max HP Value
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::Update_Max_HP_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max HP Value");

	UBuildingBar_C_Update_Max_HP_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.PreConstruct");

	UBuildingBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuildingBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Destruct");

	UBuildingBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.ExecuteUbergraph_BuildingBar
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingBar_C::ExecuteUbergraph_BuildingBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.ExecuteUbergraph_BuildingBar");

	UBuildingBar_C_ExecuteUbergraph_BuildingBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
