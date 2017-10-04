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

// Function GamepadMappingInfo.GamepadMappingInfo_C.ComputeActiveWidgetIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            platform                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Configuration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UGamepadMappingInfo_C::ComputeActiveWidgetIndex(int platform, int Mode, int Configuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.ComputeActiveWidgetIndex");

	UGamepadMappingInfo_C_ComputeActiveWidgetIndex_Params params;
	params.platform = platform;
	params.Mode = Mode;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            platform                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Configuration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int platform, int Mode, int Configuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping");

	UGamepadMappingInfo_C_Update_Displayed_Mapping_Params params;
	params.platform = platform;
	params.Mode = Mode;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
