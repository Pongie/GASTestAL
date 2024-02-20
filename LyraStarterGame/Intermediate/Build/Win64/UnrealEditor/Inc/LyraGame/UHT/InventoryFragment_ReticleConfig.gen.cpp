// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/InventoryFragment_ReticleConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_ReticleConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInventoryFragment_ReticleConfig::StaticRegisterNativesUInventoryFragment_ReticleConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_ReticleConfig);
	UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig_NoRegister()
	{
		return UInventoryFragment_ReticleConfig::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReticleWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/InventoryFragment_ReticleConfig.h" },
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraReticleWidgetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_ReticleConfig, ReticleWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_ReticleConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::ClassParams = {
		&UInventoryFragment_ReticleConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryFragment_ReticleConfig()
	{
		if (!Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton, Z_Construct_UClass_UInventoryFragment_ReticleConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_ReticleConfig>()
	{
		return UInventoryFragment_ReticleConfig::StaticClass();
	}
	UInventoryFragment_ReticleConfig::UInventoryFragment_ReticleConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_ReticleConfig);
	UInventoryFragment_ReticleConfig::~UInventoryFragment_ReticleConfig() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_ReticleConfig, UInventoryFragment_ReticleConfig::StaticClass, TEXT("UInventoryFragment_ReticleConfig"), &Z_Registration_Info_UClass_UInventoryFragment_ReticleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_ReticleConfig), 2915311199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_4107789626(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
