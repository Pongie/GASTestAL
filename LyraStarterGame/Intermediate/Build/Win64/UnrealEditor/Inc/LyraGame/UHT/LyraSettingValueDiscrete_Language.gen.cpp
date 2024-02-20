// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/CustomSettings/LyraSettingValueDiscrete_Language.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_Language() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraSettingValueDiscrete_Language::StaticRegisterNativesULyraSettingValueDiscrete_Language()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_Language);
	UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language_NoRegister()
	{
		return ULyraSettingValueDiscrete_Language::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Language.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_Language.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_Language>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::ClassParams = {
		&ULyraSettingValueDiscrete_Language::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_Language()
	{
		if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_Language_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_Language>()
	{
		return ULyraSettingValueDiscrete_Language::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_Language);
	ULyraSettingValueDiscrete_Language::~ULyraSettingValueDiscrete_Language() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_Language, ULyraSettingValueDiscrete_Language::StaticClass, TEXT("ULyraSettingValueDiscrete_Language"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_Language, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_Language), 3080056742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_914585204(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_Language_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
