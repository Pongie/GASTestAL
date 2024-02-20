// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraExperienceActionSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraExperienceActionSet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceActionSet();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceActionSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraExperienceActionSet::StaticRegisterNativesULyraExperienceActionSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraExperienceActionSet);
	UClass* Z_Construct_UClass_ULyraExperienceActionSet_NoRegister()
	{
		return ULyraExperienceActionSet::StaticClass();
	}
	struct Z_Construct_UClass_ULyraExperienceActionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraExperienceActionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceActionSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Definition of a set of actions to perform as part of entering an experience\n */" },
		{ "IncludePath", "GameModes/LyraExperienceActionSet.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
		{ "ToolTip", "Definition of a set of actions to perform as part of entering an experience" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions to Perform" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Actions to Perform" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceActionSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Feature Dependencies" },
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceActionSet.h" },
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceActionSet, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceActionSet_Statics::NewProp_GameFeaturesToEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraExperienceActionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraExperienceActionSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraExperienceActionSet_Statics::ClassParams = {
		&ULyraExperienceActionSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceActionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceActionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraExperienceActionSet()
	{
		if (!Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton, Z_Construct_UClass_ULyraExperienceActionSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraExperienceActionSet.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraExperienceActionSet>()
	{
		return ULyraExperienceActionSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraExperienceActionSet);
	ULyraExperienceActionSet::~ULyraExperienceActionSet() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraExperienceActionSet, ULyraExperienceActionSet::StaticClass, TEXT("ULyraExperienceActionSet"), &Z_Registration_Info_UClass_ULyraExperienceActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraExperienceActionSet), 3377914873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_1579873398(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceActionSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
