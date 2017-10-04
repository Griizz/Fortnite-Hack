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

// Function PermissionsRoot.PermissionsRoot_C.Input Handle Back
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPermissionsRoot_C::Input_Handle_Back(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.Input Handle Back");

	UPermissionsRoot_C_Input_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPermissionsRoot_C::RefreshOutpostInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo");

	UPermissionsRoot_C_RefreshOutpostInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPermissionsRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.Construct");

	UPermissionsRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPermissionsRoot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.OnActivated");

	UPermissionsRoot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPermissionsRoot_C::ExecuteUbergraph_PermissionsRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot");

	UPermissionsRoot_C_ExecuteUbergraph_PermissionsRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
