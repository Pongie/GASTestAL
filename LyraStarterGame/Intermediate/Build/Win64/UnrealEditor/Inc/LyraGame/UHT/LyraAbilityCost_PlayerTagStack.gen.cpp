// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost_PlayerTagStack() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAbilityCost_PlayerTagStack::StaticRegisterNativesULyraAbilityCost_PlayerTagStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost_PlayerTagStack);
	UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_NoRegister()
	{
		return ULyraAbilityCost_PlayerTagStack::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAbilityCost,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack on the player state\n */" },
		{ "DisplayName", "Player Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack on the player state" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_PlayerTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** Which tag to spend some of */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "Which tag to spend some of" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_PlayerTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost_PlayerTagStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::ClassParams = {
		&ULyraAbilityCost_PlayerTagStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost_PlayerTagStack>()
	{
		return ULyraAbilityCost_PlayerTagStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost_PlayerTagStack);
	ULyraAbilityCost_PlayerTagStack::~ULyraAbilityCost_PlayerTagStack() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack, ULyraAbilityCost_PlayerTagStack::StaticClass, TEXT("ULyraAbilityCost_PlayerTagStack"), &Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost_PlayerTagStack), 3486053100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_2798707650(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
