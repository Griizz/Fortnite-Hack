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

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStoreWeaponMaster_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript");

	AStoreWeaponMaster_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStoreWeaponMaster_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay");

	AStoreWeaponMaster_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreWeaponMaster_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick");

	AStoreWeaponMaster_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AStoreWeaponMaster_BP_C::ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP");

	AStoreWeaponMaster_BP_C_ExecuteUbergraph_StoreWeaponMaster_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
