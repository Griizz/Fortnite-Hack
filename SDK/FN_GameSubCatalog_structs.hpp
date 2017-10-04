#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameSubCatalog.ECatalogRequirementType
enum class ECatalogRequirementType
{
	ECatalogRequirementType__RequireFulfillment = 0,
	ECatalogRequirementType__DenyOnFulfillment = 1,
	ECatalogRequirementType__RequireItemOwnership = 2,
	ECatalogRequirementType__DenyOnItemOwnership = 3,
	ECatalogRequirementType__ECatalogRequirementType_MAX = 4
};


// Enum GameSubCatalog.ECatalogOfferType
enum class ECatalogOfferType
{
	ECatalogOfferType__StaticPrice = 0,
	ECatalogOfferType__DynamicBundle = 1,
	ECatalogOfferType__ECatalogOfferType_MAX = 2
};


// Enum GameSubCatalog.ECatalogSaleType
enum class ECatalogSaleType
{
	ECatalogSaleType__NotOnSale    = 0,
	ECatalogSaleType__UndecoratedNewPrice = 1,
	ECatalogSaleType__AmountOff    = 2,
	ECatalogSaleType__PercentOff   = 3,
	ECatalogSaleType__PercentOn    = 4,
	ECatalogSaleType__Strikethrough = 5,
	ECatalogSaleType__MAX          = 6,
	ECatalogSaleType__ECatalogSaleType_MAX = 7
};


// Enum GameSubCatalog.EAppStore
enum class EAppStore
{
	EAppStore__DebugStore          = 0,
	EAppStore__EpicPurchasingService = 1,
	EAppStore__IOSAppStore         = 2,
	EAppStore__WeChatAppStore      = 3,
	EAppStore__GooglePlayAppStore  = 4,
	EAppStore__KindleStore         = 5,
	EAppStore__PlayStationStore    = 6,
	EAppStore__XboxLiveStore       = 7,
	EAppStore__MAX                 = 8,
	EAppStore__EAppStore_MAX       = 9
};


// Enum GameSubCatalog.EStoreCurrencyType
enum class EStoreCurrencyType
{
	EStoreCurrencyType__RealMoney  = 0,
	EStoreCurrencyType__MtxCurrency = 1,
	EStoreCurrencyType__GameItem   = 2,
	EStoreCurrencyType__Other      = 3,
	EStoreCurrencyType__MAX        = 4,
	EStoreCurrencyType__EStoreCurrencyType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0020
struct FCatalogPurchaseNotification
{
	struct FMcpLootResult                              LootResult;                                               // 0x0000(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0020
struct FCatalogKeyValue
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0048
struct FCatalogItemPrice
{
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                RegularPrice;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FinalPrice;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PriceTextOverride;                                        // 0x0020(0x0018)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FDateTime                                   SaleExpiration;                                           // 0x0040(0x0008)
};

// ScriptStruct GameSubCatalog.ItemQuantity
// 0x0038
struct FItemQuantity
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0018(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// 0x0078
struct FCatalogDynamicBundleItem
{
	struct FItemQuantity                               Item;                                                     // 0x0000(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanOwnMultiple : 1;                                      // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                RegularPrice;                                             // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DiscountedPrice;                                          // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AlreadyOwnedPriceReduction;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0048(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0060(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// 0x0030
struct FCatalogDynamicBundle
{
	int                                                BasePrice;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TEnumAsByte<ECatalogSaleType>                      DisplayType;                                              // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FCatalogDynamicBundleItem>           BundleItems;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0030
struct FCatalogMetaAssetInfo
{
	struct FString                                     StructName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FJsonObjectWrapper                          Payload;                                                  // 0x0010(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogOfferRequirement
// 0x0018
struct FCatalogOfferRequirement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty GameSubCatalog.CatalogOfferRequirement.RequirementType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinQuantity;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RequiredId;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x01D0
struct FCatalogOffer
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCatalogKeyValue>                    MetaInfo;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty GameSubCatalog.CatalogOffer.OfferType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FCatalogItemPrice>                   Prices;                                                   // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCatalogDynamicBundle                       DynamicBundleInfo;                                        // 0x0038(0x0030) (CPF_Edit)
	int                                                DailyLimit;                                               // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WeeklyLimit;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             Categories;                                               // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     CatalogGroup;                                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                CatalogGroupPriority;                                     // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SortPriority;                                             // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0098(0x0018) (CPF_Edit)
	struct FText                                       ShortDescription;                                         // 0x00B0(0x0018) (CPF_Edit)
	struct FText                                       Description;                                              // 0x00C8(0x0018) (CPF_Edit)
	struct FString                                     AppStoreId[0x8];                                          // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCatalogMetaAssetInfo                       MetaAssetInfo;                                            // 0x0160(0x0030)
	struct FString                                     DisplayAssetPath;                                         // 0x0190(0x0010) (CPF_ZeroConstructor)
	TArray<struct FItemQuantity>                       ItemGrants;                                               // 0x01A0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCatalogOfferRequirement>            Requirements;                                             // 0x01B0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DenyItemTemplateIds;                                      // 0x01C0(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
};

// ScriptStruct GameSubCatalog.Storefront
// 0x0020
struct FStorefront
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCatalogOffer>                       CatalogEntries;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x0020
struct FCatalogDownload
{
	int                                                RefreshIntervalHrs;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DailyPurchaseHrs;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDateTime                                   Expiration;                                               // 0x0008(0x0008)
	TArray<struct FStorefront>                         Storefronts;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// 0x0018
struct FCatalogItemSalePrice
{
	int                                                SalePrice;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FDateTime                                   StartTime;                                                // 0x0008(0x0008) (CPF_Edit)
	struct FDateTime                                   EndTime;                                                  // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0030
struct FCatalogPurchaseInfo
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                PurchaseQuantity;                                         // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    Currency;                                                 // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                ExpectedPrice;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0048
struct FCatalogReceiptInfo
{
	TEnumAsByte<EAppStore>                             AppStore;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AppStoreId;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ReceiptId;                                                // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ReceiptInfo;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PurchaseCorrelationId;                                    // 0x0038(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
