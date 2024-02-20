// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryFragment_SetStats.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_SetStats() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_SetStats();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_SetStats_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInventoryFragment_SetStats::StaticRegisterNativesUInventoryFragment_SetStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_SetStats);
	UClass* Z_Construct_UClass_UInventoryFragment_SetStats_NoRegister()
	{
		return UInventoryFragment_SetStats::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryFragment_SetStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialItemStats_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialItemStats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialItemStats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InitialItemStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryFragment_SetStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_SetStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_SetStats.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_SetStats.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_ValueProp = { "InitialItemStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_Key_KeyProp = { "InitialItemStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_SetStats.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats = { "InitialItemStats", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_SetStats, InitialItemStats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_SetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetStats_Statics::NewProp_InitialItemStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryFragment_SetStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_SetStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_SetStats_Statics::ClassParams = {
		&UInventoryFragment_SetStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryFragment_SetStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetStats_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_SetStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryFragment_SetStats()
	{
		if (!Z_Registration_Info_UClass_UInventoryFragment_SetStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_SetStats.OuterSingleton, Z_Construct_UClass_UInventoryFragment_SetStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryFragment_SetStats.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_SetStats>()
	{
		return UInventoryFragment_SetStats::StaticClass();
	}
	UInventoryFragment_SetStats::UInventoryFragment_SetStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_SetStats);
	UInventoryFragment_SetStats::~UInventoryFragment_SetStats() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_SetStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_SetStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_SetStats, UInventoryFragment_SetStats::StaticClass, TEXT("UInventoryFragment_SetStats"), &Z_Registration_Info_UClass_UInventoryFragment_SetStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_SetStats), 2351481615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_SetStats_h_235421199(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_SetStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_SetStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
