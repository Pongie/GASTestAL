// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hotfix/LyraTextHotfixConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTextHotfixConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTextHotfixConfig();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTextHotfixConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraTextHotfixConfig::StaticRegisterNativesULyraTextHotfixConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTextHotfixConfig);
	UClass* Z_Construct_UClass_ULyraTextHotfixConfig_NoRegister()
	{
		return ULyraTextHotfixConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTextHotfixConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextReplacements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextReplacements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextReplacements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTextHotfixConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTextHotfixConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class allows hotfixing individual FText values anywhere\n */" },
		{ "IncludePath", "Hotfix/LyraTextHotfixConfig.h" },
		{ "ModuleRelativePath", "Hotfix/LyraTextHotfixConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class allows hotfixing individual FText values anywhere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_Inner = { "TextReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData[] = {
		{ "Category", "LyraTextHotfixConfig" },
		{ "Comment", "// The list of FText values to hotfix\n" },
		{ "ModuleRelativePath", "Hotfix/LyraTextHotfixConfig.h" },
		{ "ToolTip", "The list of FText values to hotfix" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements = { "TextReplacements", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTextHotfixConfig, TextReplacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTextHotfixConfig_Statics::NewProp_TextReplacements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTextHotfixConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTextHotfixConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTextHotfixConfig_Statics::ClassParams = {
		&ULyraTextHotfixConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTextHotfixConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTextHotfixConfig()
	{
		if (!Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton, Z_Construct_UClass_ULyraTextHotfixConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTextHotfixConfig.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTextHotfixConfig>()
	{
		return ULyraTextHotfixConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTextHotfixConfig);
	ULyraTextHotfixConfig::~ULyraTextHotfixConfig() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTextHotfixConfig, ULyraTextHotfixConfig::StaticClass, TEXT("ULyraTextHotfixConfig"), &Z_Registration_Info_UClass_ULyraTextHotfixConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTextHotfixConfig), 1970538920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_4144091177(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Hotfix_LyraTextHotfixConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
