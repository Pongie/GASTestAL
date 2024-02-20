// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraBotCreationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBotCreationComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCreationComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCreationComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraBotCreationComponent::StaticRegisterNativesULyraBotCreationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBotCreationComponent);
	UClass* Z_Construct_UClass_ULyraBotCreationComponent_NoRegister()
	{
		return ULyraBotCreationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraBotCreationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBotsToCreate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBotsToCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BotControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BotControllerClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RandomBotNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomBotNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomBotNames;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedBotList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBotList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBotList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraBotCreationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCreationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/LyraBotCreationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate = { "NumBotsToCreate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBotCreationComponent, NumBotsToCreate), METADATA_PARAMS(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass = { "BotControllerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBotCreationComponent, BotControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_Inner = { "RandomBotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames = { "RandomBotNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBotCreationComponent, RandomBotNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_Inner = { "SpawnedBotList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LyraBotCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList = { "SpawnedBotList", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBotCreationComponent, SpawnedBotList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_NumBotsToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_BotControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_RandomBotNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBotCreationComponent_Statics::NewProp_SpawnedBotList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraBotCreationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBotCreationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBotCreationComponent_Statics::ClassParams = {
		&ULyraBotCreationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::PropPointers),
		0,
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraBotCreationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCreationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraBotCreationComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton, Z_Construct_UClass_ULyraBotCreationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraBotCreationComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraBotCreationComponent>()
	{
		return ULyraBotCreationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBotCreationComponent);
	ULyraBotCreationComponent::~ULyraBotCreationComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBotCreationComponent, ULyraBotCreationComponent::StaticClass, TEXT("ULyraBotCreationComponent"), &Z_Registration_Info_UClass_ULyraBotCreationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBotCreationComponent), 1813007021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_2643252417(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
