// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularGameModeBase::StaticRegisterNativesAModularGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameModeBase);
	UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister()
	{
		return AModularGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameStateBase */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameStateBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams = {
		&AModularGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton, Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularGameModeBase.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameModeBase>()
	{
		return AModularGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameModeBase);
	AModularGameModeBase::~AModularGameModeBase() {}
	void AModularGameMode::StaticRegisterNativesAModularGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameMode);
	UClass* Z_Construct_UClass_AModularGameMode_NoRegister()
	{
		return AModularGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameState */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameState" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameMode_Statics::ClassParams = {
		&AModularGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameMode()
	{
		if (!Z_Registration_Info_UClass_AModularGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameMode.OuterSingleton, Z_Construct_UClass_AModularGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularGameMode.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameMode>()
	{
		return AModularGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameMode);
	AModularGameMode::~AModularGameMode() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameModeBase, AModularGameModeBase::StaticClass, TEXT("AModularGameModeBase"), &Z_Registration_Info_UClass_AModularGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameModeBase), 1610599723U) },
		{ Z_Construct_UClass_AModularGameMode, AModularGameMode::StaticClass, TEXT("AModularGameMode"), &Z_Registration_Info_UClass_AModularGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameMode), 2436139062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h_1848786185(TEXT("/Script/ModularGameplayActors"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
