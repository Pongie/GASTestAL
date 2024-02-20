// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Abilities/GameplayAbilityTargetActor_Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_Interact() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
	LYRAGAME_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact();
	LYRAGAME_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void AGameplayAbilityTargetActor_Interact::StaticRegisterNativesAGameplayAbilityTargetActor_Interact()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_Interact);
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_NoRegister()
	{
		return AGameplayAbilityTargetActor_Interact::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Intermediate base class for all interaction target actors. */" },
		{ "IncludePath", "Interaction/Abilities/GameplayAbilityTargetActor_Interact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Interaction/Abilities/GameplayAbilityTargetActor_Interact.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Intermediate base class for all interaction target actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_Interact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::ClassParams = {
		&AGameplayAbilityTargetActor_Interact::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Interact()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Interact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<AGameplayAbilityTargetActor_Interact>()
	{
		return AGameplayAbilityTargetActor_Interact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_Interact);
	AGameplayAbilityTargetActor_Interact::~AGameplayAbilityTargetActor_Interact() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_Interact, AGameplayAbilityTargetActor_Interact::StaticClass, TEXT("AGameplayAbilityTargetActor_Interact"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_Interact), 421127615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_2293576145(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_GameplayAbilityTargetActor_Interact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
