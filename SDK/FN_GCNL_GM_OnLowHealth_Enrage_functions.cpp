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

// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGCNL_GM_OnLowHealth_Enrage_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove");

	AGCNL_GM_OnLowHealth_Enrage_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGCNL_GM_OnLowHealth_Enrage_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive");

	AGCNL_GM_OnLowHealth_Enrage_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGCNL_GM_OnLowHealth_Enrage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript");

	AGCNL_GM_OnLowHealth_Enrage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
