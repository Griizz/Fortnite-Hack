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

// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
struct UStatsListWidget_C_AdjustClampCount_Params
{
	class UFortAttributeListItem_NUI*                  Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Add;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
struct UStatsListWidget_C_ToggleClampedValueMessage_Params
{
	bool                                               inShow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
struct UStatsListWidget_C_OnClearShownAttributes_Params
{
};

// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
struct UStatsListWidget_C_OnAddShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
struct UStatsListWidget_C_OnRemoveShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int*                                               AtIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
struct UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
