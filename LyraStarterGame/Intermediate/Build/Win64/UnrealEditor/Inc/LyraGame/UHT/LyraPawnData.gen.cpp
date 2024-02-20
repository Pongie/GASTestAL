// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawnData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraPawnData::StaticRegisterNativesULyraPawnData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPawnData);
	UClass* Z_Construct_UClass_ULyraPawnData_NoRegister()
	{
		return ULyraPawnData::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPawnData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagRelationshipMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPawnData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraPawnData\n *\n *\x09Non-mutable data asset that contains properties used to define a pawn.\n */" },
		{ "DisplayName", "Lyra Pawn Data" },
		{ "IncludePath", "Character/LyraPawnData.h" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
		{ "ToolTip", "ULyraPawnData\n\n    Non-mutable data asset that contains properties used to define a pawn." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "Lyra|Pawn" },
		{ "Comment", "// Class to instantiate for this pawn (should usually derive from ALyraPawn or ALyraCharacter).\n" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ToolTip", "Class to instantiate for this pawn (should usually derive from ALyraPawn or ALyraCharacter)." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Lyra|Abilities" },
		{ "Comment", "// Ability sets to grant to this pawn's ability system.\n" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ToolTip", "Ability sets to grant to this pawn's ability system." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Lyra|Abilities" },
		{ "Comment", "// What mapping of ability tags to use for actions taking by this pawn\n" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ToolTip", "What mapping of ability tags to use for actions taking by this pawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnData, TagRelationshipMapping), Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Lyra|Input" },
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnData, InputConfig), Z_Construct_UClass_ULyraInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Lyra|Camera" },
		{ "Comment", "// Default camera mode used by player controlled pawns.\n" },
		{ "ModuleRelativePath", "Character/LyraPawnData.h" },
		{ "ToolTip", "Default camera mode used by player controlled pawns." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnData, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_PawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_AbilitySets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_TagRelationshipMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnData_Statics::NewProp_DefaultCameraMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPawnData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPawnData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPawnData_Statics::ClassParams = {
		&ULyraPawnData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraPawnData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPawnData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPawnData()
	{
		if (!Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton, Z_Construct_UClass_ULyraPawnData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPawnData.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPawnData>()
	{
		return ULyraPawnData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPawnData);
	ULyraPawnData::~ULyraPawnData() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPawnData, ULyraPawnData::StaticClass, TEXT("ULyraPawnData"), &Z_Registration_Info_UClass_ULyraPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPawnData), 2257660512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_2482896963(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
