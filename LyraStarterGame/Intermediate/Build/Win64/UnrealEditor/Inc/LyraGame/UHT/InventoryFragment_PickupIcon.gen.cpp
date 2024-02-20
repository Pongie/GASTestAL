// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryFragment_PickupIcon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_PickupIcon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon();
	LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInventoryFragment_PickupIcon::StaticRegisterNativesUInventoryFragment_PickupIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_PickupIcon);
	UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon_NoRegister()
	{
		return UInventoryFragment_PickupIcon::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PadColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_PickupIcon.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_PickupIcon, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_PickupIcon, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor = { "PadColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryFragment_PickupIcon, PadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_PickupIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::ClassParams = {
		&UInventoryFragment_PickupIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon()
	{
		if (!Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton, Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_PickupIcon>()
	{
		return UInventoryFragment_PickupIcon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_PickupIcon);
	UInventoryFragment_PickupIcon::~UInventoryFragment_PickupIcon() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_PickupIcon, UInventoryFragment_PickupIcon::StaticClass, TEXT("UInventoryFragment_PickupIcon"), &Z_Registration_Info_UClass_UInventoryFragment_PickupIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_PickupIcon), 1584468993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_2677542337(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
