// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAbilityCost::StaticRegisterNativesULyraAbilityCost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost);
	UClass* Z_Construct_UClass_ULyraAbilityCost_NoRegister()
	{
		return ULyraAbilityCost::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilityCost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[];
#endif
		static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilityCost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraAbilityCost\n *\n * Base class for costs that a LyraGameplayAbility has (e.g., ammo or charges)\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost.h" },
		{ "ToolTip", "ULyraAbilityCost\n\nBase class for costs that a LyraGameplayAbility has (e.g., ammo or charges)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost.h" },
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
	};
#endif
	void Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
	{
		((ULyraAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraAbilityCost), &Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilityCost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_Statics::ClassParams = {
		&ULyraAbilityCost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilityCost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilityCost()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilityCost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilityCost.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost>()
	{
		return ULyraAbilityCost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost);
	ULyraAbilityCost::~ULyraAbilityCost() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost, ULyraAbilityCost::StaticClass, TEXT("ULyraAbilityCost"), &Z_Registration_Info_UClass_ULyraAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost), 211647920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_h_1560992207(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
