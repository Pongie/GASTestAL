// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWorldSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraWorldSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraWorldSettings_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraWorldSettings::StaticRegisterNativesALyraWorldSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraWorldSettings);
	UClass* Z_Construct_UClass_ALyraWorldSettings_NoRegister()
	{
		return ALyraWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_ALyraWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayExperience_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultGameplayExperience;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceStandaloneNetMode_MetaData[];
#endif
		static void NewProp_ForceStandaloneNetMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceStandaloneNetMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "GameModes/LyraWorldSettings.h" },
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The default world settings object, used primarily to set the default gameplay experience to use when playing on this map" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "// The default experience to use when a server opens this map if it is not overridden by the user-facing experience\n" },
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
		{ "ToolTip", "The default experience to use when a server opens this map if it is not overridden by the user-facing experience" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience = { "DefaultGameplayExperience", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraWorldSettings, DefaultGameplayExperience), Z_Construct_UClass_ULyraExperienceDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_MetaData[] = {
		{ "Category", "PIE" },
		{ "Comment", "// Is this level part of a front-end or other standalone experience?\n// When set, the net mode will be forced to Standalone when you hit Play in the editor\n" },
		{ "ModuleRelativePath", "GameModes/LyraWorldSettings.h" },
		{ "ToolTip", "Is this level part of a front-end or other standalone experience?\nWhen set, the net mode will be forced to Standalone when you hit Play in the editor" },
	};
#endif
	void Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit(void* Obj)
	{
		((ALyraWorldSettings*)Obj)->ForceStandaloneNetMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode = { "ForceStandaloneNetMode", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALyraWorldSettings), &Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_DefaultGameplayExperience,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraWorldSettings_Statics::NewProp_ForceStandaloneNetMode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraWorldSettings_Statics::ClassParams = {
		&ALyraWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraWorldSettings()
	{
		if (!Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton, Z_Construct_UClass_ALyraWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraWorldSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraWorldSettings>()
	{
		return ALyraWorldSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraWorldSettings);
	ALyraWorldSettings::~ALyraWorldSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraWorldSettings, ALyraWorldSettings::StaticClass, TEXT("ALyraWorldSettings"), &Z_Registration_Info_UClass_ALyraWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraWorldSettings), 332468574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_2109743122(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraWorldSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
