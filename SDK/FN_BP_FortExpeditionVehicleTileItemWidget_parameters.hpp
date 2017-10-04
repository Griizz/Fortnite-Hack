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

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Name_Params
{
	struct FName                                       SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Rating_Params
{
	struct FName                                       SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Icon_Params
{
	struct FName                                       SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData
struct UBP_FortExpeditionVehicleTileItemWidget_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnClicked
struct UBP_FortExpeditionVehicleTileItemWidget_C_OnClicked_Params
{
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
struct UBP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
struct UBP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature_Params
{
	struct FName                                       SquadId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
