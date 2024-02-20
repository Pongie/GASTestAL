// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_EquippableItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInventoryFragment_EquippableItem::StaticRegisterNativesUInventoryFragment_EquippableItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_EquippableItem);
	UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem_NoRegister()
	{
		return UInventoryFragment_EquippableItem::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_EquippableItem.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_EquippableItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition_MetaData[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_EquippableItem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_EquippableItem, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_EquippableItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::ClassParams = {
		&UInventoryFragment_EquippableItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem()
	{
		if (!Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton, Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_EquippableItem>()
	{
		return UInventoryFragment_EquippableItem::StaticClass();
	}
	UInventoryFragment_EquippableItem::UInventoryFragment_EquippableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_EquippableItem);
	UInventoryFragment_EquippableItem::~UInventoryFragment_EquippableItem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_EquippableItem, UInventoryFragment_EquippableItem::StaticClass, TEXT("UInventoryFragment_EquippableItem"), &Z_Registration_Info_UClass_UInventoryFragment_EquippableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_EquippableItem), 1750361079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_2572855320(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
