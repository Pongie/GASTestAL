// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraAbilityCost_InventoryItem.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost_InventoryItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_InventoryItem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_InventoryItem_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAbilityCost_InventoryItem::StaticRegisterNativesULyraAbilityCost_InventoryItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost_InventoryItem);
	UClass* Z_Construct_UClass_ULyraAbilityCost_InventoryItem_NoRegister()
	{
		return ULyraAbilityCost_InventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAbilityCost,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of an inventory item\n */" },
		{ "DisplayName", "Inventory Item" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost_InventoryItem.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_InventoryItem.h" },
		{ "ToolTip", "Represents a cost that requires expending a quantity of an inventory item" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "AbilityCost" },
		{ "Comment", "/** How much of the item to spend (keyed on ability level) */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_InventoryItem.h" },
		{ "ToolTip", "How much of the item to spend (keyed on ability level)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_InventoryItem, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData[] = {
		{ "Category", "AbilityCost" },
		{ "Comment", "/** Which item to consume */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_InventoryItem.h" },
		{ "ToolTip", "Which item to consume" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition = { "ItemDefinition", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilityCost_InventoryItem, ItemDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost_InventoryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::ClassParams = {
		&ULyraAbilityCost_InventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilityCost_InventoryItem()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilityCost_InventoryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost_InventoryItem.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_InventoryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilityCost_InventoryItem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost_InventoryItem>()
	{
		return ULyraAbilityCost_InventoryItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost_InventoryItem);
	ULyraAbilityCost_InventoryItem::~ULyraAbilityCost_InventoryItem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_InventoryItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_InventoryItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost_InventoryItem, ULyraAbilityCost_InventoryItem::StaticClass, TEXT("ULyraAbilityCost_InventoryItem"), &Z_Registration_Info_UClass_ULyraAbilityCost_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost_InventoryItem), 2267340960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_InventoryItem_h_648042735(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_InventoryItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
