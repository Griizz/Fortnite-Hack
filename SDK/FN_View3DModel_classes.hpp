#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass View3DModel.View3DModel_C
// 0x0008 (0x03E8 - 0x03E0)
class UView3DModel_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass View3DModel.View3DModel_C");
		return ptr;
	}


	void HandleBack(bool* PassThrough);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_View3DModel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
