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

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               NewDimensions                  (CPF_Parm, CPF_IsPlainOldData)

void UFullPartyMemberConnected_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions");

	UFullPartyMemberConnected_C_UpdateDimensions_Params params;
	params.NewDimensions = NewDimensions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (CPF_Parm)

void UFullPartyMemberConnected_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo");

	UFullPartyMemberConnected_C_UpdateMemberInfo_Params params;
	params.NewMemberInfo = NewMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMemberConnected_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct");

	UFullPartyMemberConnected_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullPartyMemberConnected_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberConnected.FullPartyMemberConnected_C.Construct");

	UFullPartyMemberConnected_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMemberConnected_C::ExecuteUbergraph_FullPartyMemberConnected(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected");

	UFullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
