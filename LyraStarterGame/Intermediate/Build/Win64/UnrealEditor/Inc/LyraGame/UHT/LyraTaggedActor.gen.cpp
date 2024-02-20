// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraTaggedActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTaggedActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTaggedActor();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTaggedActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraTaggedActor::StaticRegisterNativesALyraTaggedActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraTaggedActor);
	UClass* Z_Construct_UClass_ALyraTaggedActor_NoRegister()
	{
		return ALyraTaggedActor::StaticClass();
	}
	struct Z_Construct_UClass_ALyraTaggedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticGameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraTaggedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraTaggedActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// An actor that implements the gameplay tag asset interface\n" },
		{ "IncludePath", "AbilitySystem/LyraTaggedActor.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraTaggedActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An actor that implements the gameplay tag asset interface" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "// Gameplay-related tags associated with this actor\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraTaggedActor.h" },
		{ "ToolTip", "Gameplay-related tags associated with this actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraTaggedActor_Statics::NewProp_StaticGameplayTags = { "StaticGameplayTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraTaggedActor, StaticGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ALyraTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraTaggedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraTaggedActor_Statics::NewProp_StaticGameplayTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraTaggedActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraTaggedActor, IGameplayTagAssetInterface), false },  // 3654419898
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraTaggedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraTaggedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraTaggedActor_Statics::ClassParams = {
		&ALyraTaggedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALyraTaggedActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTaggedActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraTaggedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTaggedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraTaggedActor()
	{
		if (!Z_Registration_Info_UClass_ALyraTaggedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraTaggedActor.OuterSingleton, Z_Construct_UClass_ALyraTaggedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraTaggedActor.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraTaggedActor>()
	{
		return ALyraTaggedActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraTaggedActor);
	ALyraTaggedActor::~ALyraTaggedActor() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraTaggedActor, ALyraTaggedActor::StaticClass, TEXT("ALyraTaggedActor"), &Z_Registration_Info_UClass_ALyraTaggedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraTaggedActor), 3066462267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_1891845421(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
