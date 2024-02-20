// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost_ItemTagStack() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAbilityCost_ItemTagStack::StaticRegisterNativesULyraAbilityCost_ItemTagStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost_ItemTagStack);
	UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_NoRegister()
	{
		return ULyraAbilityCost_ItemTagStack::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAbilityCost,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack\n * on the associated item instance\n */" },
		{ "DisplayName", "Item Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack\non the associated item instance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** Which tag to spend some of */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ToolTip", "Which tag to spend some of" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** Which tag to send back as a response if this cost cannot be applied */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_ItemTagStack.h" },
		{ "ToolTip", "Which tag to send back as a response if this cost cannot be applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag = { "FailureTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_ItemTagStack, FailureTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::NewProp_FailureTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost_ItemTagStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::ClassParams = {
		&ULyraAbilityCost_ItemTagStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilityCost_ItemTagStack()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_ItemTagStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost_ItemTagStack>()
	{
		return ULyraAbilityCost_ItemTagStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost_ItemTagStack);
	ULyraAbilityCost_ItemTagStack::~ULyraAbilityCost_ItemTagStack() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost_ItemTagStack, ULyraAbilityCost_ItemTagStack::StaticClass, TEXT("ULyraAbilityCost_ItemTagStack"), &Z_Registration_Info_UClass_ULyraAbilityCost_ItemTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost_ItemTagStack), 2298827556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_1233008530(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_ItemTagStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
