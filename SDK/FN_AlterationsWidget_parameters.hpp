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

// Function AlterationsWidget.AlterationsWidget_C.Construct
struct UAlterationsWidget_C_Construct_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
struct UAlterationsWidget_C_OnGenerateAlteration_Params
{
	struct FFortUIAlteration*                          AlterationInfo;                                           // (CPF_Parm)
};

// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
struct UAlterationsWidget_C_OnItemChanged_Params
{
};

// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
struct UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
