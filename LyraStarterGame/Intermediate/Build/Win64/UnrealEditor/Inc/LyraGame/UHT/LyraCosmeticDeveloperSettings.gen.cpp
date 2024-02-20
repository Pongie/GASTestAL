// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cosmetics/LyraCosmeticDeveloperSettings.h"
#include "Cosmetics/LyraCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticDeveloperSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECosmeticCheatMode();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECosmeticCheatMode;
	static UEnum* ECosmeticCheatMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECosmeticCheatMode"));
		}
		return Z_Registration_Info_UEnum_ECosmeticCheatMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ECosmeticCheatMode>()
	{
		return ECosmeticCheatMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enumerators[] = {
		{ "ECosmeticCheatMode::ReplaceParts", (int64)ECosmeticCheatMode::ReplaceParts },
		{ "ECosmeticCheatMode::AddParts", (int64)ECosmeticCheatMode::AddParts },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enum_MetaDataParams[] = {
		{ "AddParts.Name", "ECosmeticCheatMode::AddParts" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
		{ "ReplaceParts.Name", "ECosmeticCheatMode::ReplaceParts" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ECosmeticCheatMode",
		"ECosmeticCheatMode",
		Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ECosmeticCheatMode()
	{
		if (!Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ECosmeticCheatMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECosmeticCheatMode.InnerSingleton;
	}
	void ULyraCosmeticDeveloperSettings::StaticRegisterNativesULyraCosmeticDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCosmeticDeveloperSettings);
	UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings_NoRegister()
	{
		return ULyraCosmeticDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheatCosmeticCharacterParts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheatCosmeticCharacterParts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatCosmeticCharacterParts;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CheatMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheatMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheatMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cosmetic developer settings / editor cheats\n */" },
		{ "IncludePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
		{ "ToolTip", "Cosmetic developer settings / editor cheats" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_Inner = { "CheatCosmeticCharacterParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(nullptr, 0) }; // 3613829318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_MetaData[] = {
		{ "Category", "LyraCosmeticDeveloperSettings" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts = { "CheatCosmeticCharacterParts", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCosmeticDeveloperSettings, CheatCosmeticCharacterParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_MetaData)) }; // 3613829318
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_MetaData[] = {
		{ "Category", "LyraCosmeticDeveloperSettings" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode = { "CheatMode", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCosmeticDeveloperSettings, CheatMode), Z_Construct_UEnum_LyraGame_ECosmeticCheatMode, METADATA_PARAMS(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_MetaData)) }; // 2548955069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatCosmeticCharacterParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::NewProp_CheatMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCosmeticDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::ClassParams = {
		&ULyraCosmeticDeveloperSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCosmeticDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton, Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCosmeticDeveloperSettings>()
	{
		return ULyraCosmeticDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCosmeticDeveloperSettings);
	ULyraCosmeticDeveloperSettings::~ULyraCosmeticDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::EnumInfo[] = {
		{ ECosmeticCheatMode_StaticEnum, TEXT("ECosmeticCheatMode"), &Z_Registration_Info_UEnum_ECosmeticCheatMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2548955069U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCosmeticDeveloperSettings, ULyraCosmeticDeveloperSettings::StaticClass, TEXT("ULyraCosmeticDeveloperSettings"), &Z_Registration_Info_UClass_ULyraCosmeticDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCosmeticDeveloperSettings), 466442695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_2040666106(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
