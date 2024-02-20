// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayCueManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayCueManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayCueManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameplayCueManager::StaticRegisterNativesULyraGameplayCueManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayCueManager);
	UClass* Z_Construct_UClass_ULyraGameplayCueManager_NoRegister()
	{
		return ULyraGameplayCueManager::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayCueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PreloadedCues_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedCues_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PreloadedCues;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AlwaysLoadedCues_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysLoadedCues_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlwaysLoadedCues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayCueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayCueManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayCueManager\n *\n * Game-specific manager for gameplay cues\n */" },
		{ "IncludePath", "AbilitySystem/LyraGameplayCueManager.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayCueManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraGameplayCueManager\n\nGame-specific manager for gameplay cues" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp = { "PreloadedCues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData[] = {
		{ "Comment", "// Cues that were preloaded on the client due to being referenced by content\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayCueManager.h" },
		{ "ToolTip", "Cues that were preloaded on the client due to being referenced by content" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues = { "PreloadedCues", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayCueManager, PreloadedCues), METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData[] = {
		{ "Comment", "// Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayCueManager.h" },
		{ "ToolTip", "Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayCueManager, AlwaysLoadedCues), METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayCueManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_PreloadedCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayCueManager_Statics::NewProp_AlwaysLoadedCues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayCueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayCueManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayCueManager_Statics::ClassParams = {
		&ULyraGameplayCueManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraGameplayCueManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayCueManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayCueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayCueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayCueManager()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayCueManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayCueManager.OuterSingleton, Z_Construct_UClass_ULyraGameplayCueManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayCueManager.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayCueManager>()
	{
		return ULyraGameplayCueManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayCueManager);
	ULyraGameplayCueManager::~ULyraGameplayCueManager() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayCueManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayCueManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayCueManager, ULyraGameplayCueManager::StaticClass, TEXT("ULyraGameplayCueManager"), &Z_Registration_Info_UClass_ULyraGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayCueManager), 3366976893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayCueManager_h_2191653674(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayCueManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
