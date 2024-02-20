// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/LyraTeamCreationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamCreationComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCreationComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCreationComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraTeamCreationComponent::StaticRegisterNativesULyraTeamCreationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamCreationComponent);
	UClass* Z_Construct_UClass_ULyraTeamCreationComponent_NoRegister()
	{
		return ULyraTeamCreationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTeamCreationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeamsToCreate_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamsToCreate_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamsToCreate_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TeamsToCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicTeamInfoClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PublicTeamInfoClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateTeamInfoClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrivateTeamInfoClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTeamCreationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamCreationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Teams/LyraTeamCreationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_ValueProp = { "TeamsToCreate", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_Key_KeyProp = { "TeamsToCreate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_MetaData[] = {
		{ "Category", "Teams" },
		{ "Comment", "// List of teams to create (id to display asset mapping, the display asset can be left unset if desired)\n" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
		{ "ToolTip", "List of teams to create (id to display asset mapping, the display asset can be left unset if desired)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate = { "TeamsToCreate", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTeamCreationComponent, TeamsToCreate), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass = { "PublicTeamInfoClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTeamCreationComponent, PublicTeamInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass = { "PrivateTeamInfoClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTeamCreationComponent, PrivateTeamInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTeamCreationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamCreationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::ClassParams = {
		&ULyraTeamCreationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTeamCreationComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton, Z_Construct_UClass_ULyraTeamCreationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTeamCreationComponent>()
	{
		return ULyraTeamCreationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamCreationComponent);
	ULyraTeamCreationComponent::~ULyraTeamCreationComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamCreationComponent, ULyraTeamCreationComponent::StaticClass, TEXT("ULyraTeamCreationComponent"), &Z_Registration_Info_UClass_ULyraTeamCreationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamCreationComponent), 2422738868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_3631872088(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
