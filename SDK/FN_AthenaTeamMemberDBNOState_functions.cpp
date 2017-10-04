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

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Reviving                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_Reviving(bool Is_Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving");

	UAthenaTeamMemberDBNOState_C_Set_Reviving_Params params;
	params.Is_Reviving = Is_Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_DBNO                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_DBNO(bool Is_DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO");

	UAthenaTeamMemberDBNOState_C_Set_DBNO_Params params;
	params.Is_DBNO = Is_DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
