// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingValueDiscrete_PerfStat() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraSettingValueDiscrete_PerfStat::StaticRegisterNativesULyraSettingValueDiscrete_PerfStat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingValueDiscrete_PerfStat);
	UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_NoRegister()
	{
		return ULyraSettingValueDiscrete_PerfStat::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingValueDiscrete,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h" },
		{ "ModuleRelativePath", "Settings/CustomSettings/LyraSettingValueDiscrete_PerfStat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingValueDiscrete_PerfStat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::ClassParams = {
		&ULyraSettingValueDiscrete_PerfStat::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat()
	{
		if (!Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton, Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSettingValueDiscrete_PerfStat>()
	{
		return ULyraSettingValueDiscrete_PerfStat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingValueDiscrete_PerfStat);
	ULyraSettingValueDiscrete_PerfStat::~ULyraSettingValueDiscrete_PerfStat() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingValueDiscrete_PerfStat, ULyraSettingValueDiscrete_PerfStat::StaticClass, TEXT("ULyraSettingValueDiscrete_PerfStat"), &Z_Registration_Info_UClass_ULyraSettingValueDiscrete_PerfStat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingValueDiscrete_PerfStat), 1797913369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_3387674164(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscrete_PerfStat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
