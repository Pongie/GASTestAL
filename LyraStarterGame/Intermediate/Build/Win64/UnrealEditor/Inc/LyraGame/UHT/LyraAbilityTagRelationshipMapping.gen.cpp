// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraAbilityTagRelationshipMapping.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityTagRelationshipMapping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityTagRelationship();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship;
class UScriptStruct* FLyraAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilityTagRelationship>()
{
	return FLyraAbilityTagRelationship::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToBlock_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToCancel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToCancel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that defines the relationship between different ability tags */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Struct that defines the relationship between different ability tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilityTagRelationship>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Gameplay.Action" },
		{ "Category", "Ability" },
		{ "Comment", "/** The tag that this container relationship is about. Single tag, but abilities can have multiple of these */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The tag that this container relationship is about. Single tag, but abilities can have multiple of these" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityTagRelationship, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be blocked by any ability using this tag */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be blocked by any ability using this tag" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock = { "AbilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityTagRelationship, AbilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be canceled by any ability using this tag */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be canceled by any ability using this tag" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel = { "AbilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityTagRelationship, AbilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation required tags of the ability */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation required tags of the ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityTagRelationship, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation blocked tags of the ability */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation blocked tags of the ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityTagRelationship, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilityTagRelationship",
		sizeof(FLyraAbilityTagRelationship),
		alignof(FLyraAbilityTagRelationship),
		Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityTagRelationship()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship.InnerSingleton;
	}
	void ULyraAbilityTagRelationshipMapping::StaticRegisterNativesULyraAbilityTagRelationshipMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityTagRelationshipMapping);
	UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister()
	{
		return ULyraAbilityTagRelationshipMapping::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagRelationships_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagRelationships_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTagRelationships;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Mapping of how ability tags block or cancel other abilities */" },
		{ "IncludePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Mapping of how ability tags block or cancel other abilities" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAbilityTagRelationship, METADATA_PARAMS(nullptr, 0) }; // 4134453515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The list of relationships between different gameplay tags (which ones block or cancel others) */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilityTagRelationshipMapping.h" },
		{ "TitleProperty", "AbilityTag" },
		{ "ToolTip", "The list of relationships between different gameplay tags (which ones block or cancel others)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityTagRelationshipMapping, AbilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData)) }; // 4134453515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityTagRelationshipMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::ClassParams = {
		&ULyraAbilityTagRelationshipMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilityTagRelationshipMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityTagRelationshipMapping.OuterSingleton, Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilityTagRelationshipMapping.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityTagRelationshipMapping>()
	{
		return ULyraAbilityTagRelationshipMapping::StaticClass();
	}
	ULyraAbilityTagRelationshipMapping::ULyraAbilityTagRelationshipMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityTagRelationshipMapping);
	ULyraAbilityTagRelationshipMapping::~ULyraAbilityTagRelationshipMapping() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo[] = {
		{ FLyraAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilityTagRelationship_Statics::NewStructOps, TEXT("LyraAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_LyraAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilityTagRelationship), 4134453515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityTagRelationshipMapping, ULyraAbilityTagRelationshipMapping::StaticClass, TEXT("ULyraAbilityTagRelationshipMapping"), &Z_Registration_Info_UClass_ULyraAbilityTagRelationshipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityTagRelationshipMapping), 4116778543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_318212845(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
