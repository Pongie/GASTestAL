// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Executions/LyraDamageExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamageExecution() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageExecution();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageExecution_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraDamageExecution::StaticRegisterNativesULyraDamageExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamageExecution);
	UClass* Z_Construct_UClass_ULyraDamageExecution_NoRegister()
	{
		return ULyraDamageExecution::StaticClass();
	}
	struct Z_Construct_UClass_ULyraDamageExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraDamageExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDamageExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraDamageExecution\n *\n *\x09""Execution used by gameplay effects to apply damage to the health attributes.\n */" },
		{ "IncludePath", "AbilitySystem/Executions/LyraDamageExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LyraDamageExecution.h" },
		{ "ToolTip", "ULyraDamageExecution\n\n    Execution used by gameplay effects to apply damage to the health attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraDamageExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamageExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamageExecution_Statics::ClassParams = {
		&ULyraDamageExecution::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraDamageExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraDamageExecution()
	{
		if (!Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton, Z_Construct_UClass_ULyraDamageExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraDamageExecution.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraDamageExecution>()
	{
		return ULyraDamageExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamageExecution);
	ULyraDamageExecution::~ULyraDamageExecution() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamageExecution, ULyraDamageExecution::StaticClass, TEXT("ULyraDamageExecution"), &Z_Registration_Info_UClass_ULyraDamageExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamageExecution), 4248705511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_2265282304(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Executions_LyraDamageExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
