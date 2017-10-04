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

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReadyToExpand                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReadyToInstallAmplifier        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPI_StormShieldInterface_C::GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState");

	UBPI_StormShieldInterface_C_GetOutpostReadyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReadyToExpand != nullptr)
		*ReadyToExpand = params.ReadyToExpand;
	if (ReadyToInstallAmplifier != nullptr)
		*ReadyToInstallAmplifier = params.ReadyToInstallAmplifier;
}


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowedToLeave                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPI_StormShieldInterface_C::CanLeaveOutpost(bool* AllowedToLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost");

	UBPI_StormShieldInterface_C_CanLeaveOutpost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedToLeave != nullptr)
		*AllowedToLeave = params.AllowedToLeave;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
