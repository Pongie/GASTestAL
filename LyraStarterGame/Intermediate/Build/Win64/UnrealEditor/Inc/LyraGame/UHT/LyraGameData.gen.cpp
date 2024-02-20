// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameData();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameData::StaticRegisterNativesULyraGameData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameData);
	UClass* Z_Construct_UClass_ULyraGameData_NoRegister()
	{
		return ULyraGameData::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_SetByCaller_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DamageGameplayEffect_SetByCaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealGameplayEffect_SetByCaller_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HealGameplayEffect_SetByCaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTagGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DynamicTagGameplayEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraGameData\n *\n *\x09Non-mutable data asset that contains global game data.\n */" },
		{ "DisplayName", "Lyra Game Data" },
		{ "IncludePath", "System/LyraGameData.h" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
		{ "ToolTip", "ULyraGameData\n\n    Non-mutable data asset that contains global game data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.\n" },
		{ "DisplayName", "Damage Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
		{ "ToolTip", "Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller = { "DamageGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameData, DamageGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.\n" },
		{ "DisplayName", "Heal Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
		{ "ToolTip", "Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller = { "HealGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameData, HealGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to add and remove dynamic tags.\n" },
		{ "ModuleRelativePath", "System/LyraGameData.h" },
		{ "ToolTip", "Gameplay effect used to add and remove dynamic tags." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect = { "DynamicTagGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameData, DynamicTagGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_HealGameplayEffect_SetByCaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameData_Statics::NewProp_DynamicTagGameplayEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameData_Statics::ClassParams = {
		&ULyraGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameData()
	{
		if (!Z_Registration_Info_UClass_ULyraGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameData.OuterSingleton, Z_Construct_UClass_ULyraGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameData.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameData>()
	{
		return ULyraGameData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameData);
	ULyraGameData::~ULyraGameData() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameData, ULyraGameData::StaticClass, TEXT("ULyraGameData"), &Z_Registration_Info_UClass_ULyraGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameData), 1840022989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_153653748(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
