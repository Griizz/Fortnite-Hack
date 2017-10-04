#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Utc Now Offset
struct UBP_FortExpeditionExpiresWidget_C_Get_Utc_Now_Offset_Params
{
	struct FTimespan                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
struct UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
struct UBP_FortExpeditionExpiresWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
struct UBP_FortExpeditionExpiresWidget_C_OnExpeditionExpirationUpdated_Params
{
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
struct UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
struct UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
