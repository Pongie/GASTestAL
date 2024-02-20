// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySystemGlobals() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAbilitySystemGlobals::StaticRegisterNativesULyraAbilitySystemGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySystemGlobals);
	UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals_NoRegister()
	{
		return ULyraAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/LyraAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemGlobals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySystemGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::ClassParams = {
		&ULyraAbilitySystemGlobals::StaticClass,
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
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilitySystemGlobals()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_ULyraAbilitySystemGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilitySystemGlobals.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySystemGlobals>()
	{
		return ULyraAbilitySystemGlobals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySystemGlobals);
	ULyraAbilitySystemGlobals::~ULyraAbilitySystemGlobals() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySystemGlobals, ULyraAbilitySystemGlobals::StaticClass, TEXT("ULyraAbilitySystemGlobals"), &Z_Registration_Info_UClass_ULyraAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySystemGlobals), 1740137167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_2265555929(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
