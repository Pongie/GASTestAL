// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/PhysicalMaterialWithTags.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialWithTags() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_UPhysicalMaterialWithTags();
	LYRAGAME_API UClass* Z_Construct_UClass_UPhysicalMaterialWithTags_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UPhysicalMaterialWithTags::StaticRegisterNativesUPhysicalMaterialWithTags()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialWithTags);
	UClass* Z_Construct_UClass_UPhysicalMaterialWithTags_NoRegister()
	{
		return UPhysicalMaterialWithTags::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialWithTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraWeaponInstance\n *\n * A piece of equipment representing a weapon spawned and applied to a pawn\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Physics/PhysicalMaterialWithTags.h" },
		{ "ModuleRelativePath", "Physics/PhysicalMaterialWithTags.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraWeaponInstance\n\nA piece of equipment representing a weapon spawned and applied to a pawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "Comment", "// A container of gameplay tags that game code can use to reason about this physical material\n" },
		{ "ModuleRelativePath", "Physics/PhysicalMaterialWithTags.h" },
		{ "ToolTip", "A container of gameplay tags that game code can use to reason about this physical material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialWithTags, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialWithTags>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::ClassParams = {
		&UPhysicalMaterialWithTags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialWithTags()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialWithTags_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterialWithTags.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UPhysicalMaterialWithTags>()
	{
		return UPhysicalMaterialWithTags::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialWithTags);
	UPhysicalMaterialWithTags::~UPhysicalMaterialWithTags() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialWithTags, UPhysicalMaterialWithTags::StaticClass, TEXT("UPhysicalMaterialWithTags"), &Z_Registration_Info_UClass_UPhysicalMaterialWithTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialWithTags), 2005535638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_834694638(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Physics_PhysicalMaterialWithTags_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
