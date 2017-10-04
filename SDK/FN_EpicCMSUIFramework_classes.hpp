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

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0070 (0x0450 - 0x03E0)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	TAssetPtr<class UDataTable>                        TileTypeToTileClassDataTable;                             // 0x03E8(0x0020) (CPF_Edit)
	TAssetPtr<class UClass>                            LayoutErrorClass;                                         // 0x0408(0x0020) (CPF_Edit)
	TAssetPtr<class UDataTable>                        LayoutTypeToLayoutClassDataTable;                         // 0x0428(0x0020) (CPF_Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSScreenBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x09B8 - 0x08A0)
class UEpicCMSTileBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UClass*                                      DefaultTitleTextStyle;                                    // 0x08A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FeaturedTitleTextStyle;                                   // 0x08B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // 0x08B8(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     Link;                                                     // 0x08D0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bDownloadingExternalMedia : 1;                            // 0x08E0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRefreshingMcpCatalog : 1;                                // 0x08E1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB6];                                      // 0x08E2(0x00B6) MISSED OFFSET
	class UCommonLazyImage*                            LazyImage_Icon;                                           // 0x0998(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            TitleTextBlock;                                           // 0x09A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            SubtitleTextBlock;                                        // 0x09A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCommonTextBlock*                            EyebrowTextBlock;                                         // 0x09B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileBase");
		return ptr;
	}


	void Launch();
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
};


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0298 - 0x0230)
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>                    CarouselSlotDescriptions;                                 // 0x0230(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      CarouselClass;                                            // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0248(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSLayoutBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	struct FString                                     CmsEndpointOverride;                                      // 0x00A0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bRefreshing : 1;                                          // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00B1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSManager");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0280 - 0x0230)
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                                 PreviousButtonSound;                                      // 0x0230(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FSlateSound                                 NextButtonSound;                                          // 0x0248(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UCommonWidgetCarousel*                       Carousel;                                                 // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     NextPageButton;                                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     PreviousPageButton;                                       // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bShouldShowNavigationOnlyOnHover : 1;                     // 0x0278(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsShowingNavigation : 1;                                 // 0x0279(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileCarousel");
		return ptr;
	}


	void SetCurrentPageByIndex(int PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int GetCurrentPageIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
