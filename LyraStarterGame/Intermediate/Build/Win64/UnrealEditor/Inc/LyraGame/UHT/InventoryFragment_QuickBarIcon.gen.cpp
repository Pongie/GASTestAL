// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryFragment_QuickBarIcon.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_QuickBarIcon() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInventoryFragment_QuickBarIcon::StaticRegisterNativesUInventoryFragment_QuickBarIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_QuickBarIcon);
	UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon_NoRegister()
	{
		return UInventoryFragment_QuickBarIcon::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameWhenEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameWhenEquipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush = { "AmmoBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, AmmoBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped = { "DisplayNameWhenEquipped", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, DisplayNameWhenEquipped), METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_QuickBarIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::ClassParams = {
		&UInventoryFragment_QuickBarIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon()
	{
		if (!Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton, Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_QuickBarIcon>()
	{
		return UInventoryFragment_QuickBarIcon::StaticClass();
	}
	UInventoryFragment_QuickBarIcon::UInventoryFragment_QuickBarIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_QuickBarIcon);
	UInventoryFragment_QuickBarIcon::~UInventoryFragment_QuickBarIcon() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_QuickBarIcon, UInventoryFragment_QuickBarIcon::StaticClass, TEXT("UInventoryFragment_QuickBarIcon"), &Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_QuickBarIcon), 4240938949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_452815890(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
