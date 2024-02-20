// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraPlayerStart.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerStart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraPlayerStart::StaticRegisterNativesALyraPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerStart);
	UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister()
	{
		return ALyraPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_ALyraPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimingController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClaimingController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpirationCheckInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPointTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPointTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraPlayerStart\n * \n * Base player starts that can be used by a lot of modes.\n */" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Player/LyraPlayerStart.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALyraPlayerStart\n\nBase player starts that can be used by a lot of modes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController_MetaData[] = {
		{ "Comment", "/** The controller that claimed this PlayerStart */" },
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
		{ "ToolTip", "The controller that claimed this PlayerStart" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController = { "ClaimingController", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerStart, ClaimingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval_MetaData[] = {
		{ "Category", "Player Start Claiming" },
		{ "Comment", "/** Interval in which we'll check if this player start is not colliding with anyone anymore */" },
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
		{ "ToolTip", "Interval in which we'll check if this player start is not colliding with anyone anymore" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval = { "ExpirationCheckInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerStart, ExpirationCheckInterval), METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags_MetaData[] = {
		{ "Category", "LyraPlayerStart" },
		{ "Comment", "/** Tags to identify this player start */" },
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
		{ "ToolTip", "Tags to identify this player start" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags = { "StartPointTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerStart, StartPointTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerStart_Statics::ClassParams = {
		&ALyraPlayerStart::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraPlayerStart()
	{
		if (!Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton, Z_Construct_UClass_ALyraPlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerStart>()
	{
		return ALyraPlayerStart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerStart);
	ALyraPlayerStart::~ALyraPlayerStart() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerStart, ALyraPlayerStart::StaticClass, TEXT("ALyraPlayerStart"), &Z_Registration_Info_UClass_ALyraPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerStart), 1436530086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_4155953787(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
