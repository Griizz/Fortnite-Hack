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

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor
struct UBP_LocalPlayerProfileModal_C_Handle_Leaving_Banner_Editor_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction
struct UBP_LocalPlayerProfileModal_C_HandleNextAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction
struct UBP_LocalPlayerProfileModal_C_HandlePreviousAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers
struct UBP_LocalPlayerProfileModal_C_Setup_Input_Action_Handlers_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction
struct UBP_LocalPlayerProfileModal_C_HandleCloseAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget
struct UBP_LocalPlayerProfileModal_C_Activate_Widget_Params
{
	int                                                Selection;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct
struct UBP_LocalPlayerProfileModal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature
struct UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature
struct UBP_LocalPlayerProfileModal_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated
struct UBP_LocalPlayerProfileModal_C_OnActivated_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct
struct UBP_LocalPlayerProfileModal_C_Construct_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature
struct UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
struct UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params
{
	struct FName                                       IconId;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated
struct UBP_LocalPlayerProfileModal_C_OnDeactivated_Params
{
};

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal
struct UBP_LocalPlayerProfileModal_C_ExecuteUbergraph_BP_LocalPlayerProfileModal_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
