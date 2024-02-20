// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/LyraWeaponDebugSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponDebugSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponDebugSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponDebugSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraWeaponDebugSettings::StaticRegisterNativesULyraWeaponDebugSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponDebugSettings);
	UClass* Z_Construct_UClass_ULyraWeaponDebugSettings_NoRegister()
	{
		return ULyraWeaponDebugSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWeaponDebugSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletTraceDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletTraceDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletHitDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletHitDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawBulletHitRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawBulletHitRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Developer debugging settings for weapons\n */" },
		{ "IncludePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ToolTip", "Developer debugging settings for weapons" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should we do debug drawing for bullet traces (if above zero, sets how long (in seconds)\n" },
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletTraceDuration" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ToolTip", "Should we do debug drawing for bullet traces (if above zero, sets how long (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration = { "DrawBulletTraceDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletTraceDuration), METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should we do debug drawing for bullet impacts (if above zero, sets how long (in seconds)\n" },
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletHitDuration" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ToolTip", "Should we do debug drawing for bullet impacts (if above zero, sets how long (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration = { "DrawBulletHitDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletHitDuration), METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// When bullet hit debug drawing is enabled (see DrawBulletHitDuration), how big should the hit radius be? (in cm)\n" },
		{ "ConsoleVariable", "lyra.Weapon.DrawBulletHitRadius" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponDebugSettings.h" },
		{ "ToolTip", "When bullet hit debug drawing is enabled (see DrawBulletHitDuration), how big should the hit radius be? (in cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius = { "DrawBulletHitRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponDebugSettings, DrawBulletHitRadius), METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletTraceDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::NewProp_DrawBulletHitRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponDebugSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::ClassParams = {
		&ULyraWeaponDebugSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWeaponDebugSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton, Z_Construct_UClass_ULyraWeaponDebugSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWeaponDebugSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponDebugSettings>()
	{
		return ULyraWeaponDebugSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponDebugSettings);
	ULyraWeaponDebugSettings::~ULyraWeaponDebugSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponDebugSettings, ULyraWeaponDebugSettings::StaticClass, TEXT("ULyraWeaponDebugSettings"), &Z_Registration_Info_UClass_ULyraWeaponDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponDebugSettings), 3851749641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_2360766676(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponDebugSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
