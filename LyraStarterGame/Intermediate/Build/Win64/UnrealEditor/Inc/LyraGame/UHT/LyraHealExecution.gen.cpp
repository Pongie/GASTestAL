// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Executions/LyraHealExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHealExecution() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealExecution();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHealExecution_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraHealExecution::StaticRegisterNativesULyraHealExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHealExecution);
	UClass* Z_Construct_UClass_ULyraHealExecution_NoRegister()
	{
		return ULyraHealExecution::StaticClass();
	}
	struct Z_Construct_UClass_ULyraHealExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraHealExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHealExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraHealExecution\n *\n *\x09""Execution used by gameplay effects to apply healing to the health attributes.\n */" },
		{ "IncludePath", "AbilitySystem/Executions/LyraHealExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LyraHealExecution.h" },
		{ "ToolTip", "ULyraHealExecution\n\n    Execution used by gameplay effects to apply healing to the health attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraHealExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHealExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHealExecution_Statics::ClassParams = {
		&ULyraHealExecution::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraHealExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHealExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraHealExecution()
	{
		if (!Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton, Z_Construct_UClass_ULyraHealExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraHealExecution.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraHealExecution>()
	{
		return ULyraHealExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHealExecution);
	ULyraHealExecution::~ULyraHealExecution() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHealExecution, ULyraHealExecution::StaticClass, TEXT("ULyraHealExecution"), &Z_Registration_Info_UClass_ULyraHealExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHealExecution), 1787159436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_2568613424(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraHealExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
