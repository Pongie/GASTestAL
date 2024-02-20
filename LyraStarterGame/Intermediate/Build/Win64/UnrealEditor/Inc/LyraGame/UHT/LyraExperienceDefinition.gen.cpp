// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraExperienceDefinition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceActionSet_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraExperienceDefinition::StaticRegisterNativesULyraExperienceDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraExperienceDefinition);
	UClass* Z_Construct_UClass_ULyraExperienceDefinition_NoRegister()
	{
		return ULyraExperienceDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraExperienceDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultPawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraExperienceDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Definition of an experience\n */" },
		{ "IncludePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ToolTip", "Definition of an experience" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** The default pawn class to spawn for players *///@TODO: Make soft?\n" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The default pawn class to spawn for players //@TODO: Make soft?" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceDefinition, DefaultPawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0014008000010019, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraExperienceActionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// List of additional action sets to compose into this experience\n" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceDefinition.h" },
		{ "ToolTip", "List of additional action sets to compose into this experience" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraExperienceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_DefaultPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceDefinition_Statics::NewProp_ActionSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraExperienceDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraExperienceDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraExperienceDefinition_Statics::ClassParams = {
		&ULyraExperienceDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraExperienceDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::PropPointers),
		0,
		0x008100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraExperienceDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraExperienceDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraExperienceDefinition.OuterSingleton, Z_Construct_UClass_ULyraExperienceDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraExperienceDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraExperienceDefinition>()
	{
		return ULyraExperienceDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraExperienceDefinition);
	ULyraExperienceDefinition::~ULyraExperienceDefinition() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraExperienceDefinition, ULyraExperienceDefinition::StaticClass, TEXT("ULyraExperienceDefinition"), &Z_Registration_Info_UClass_ULyraExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraExperienceDefinition), 1339413613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceDefinition_h_1962337077(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
