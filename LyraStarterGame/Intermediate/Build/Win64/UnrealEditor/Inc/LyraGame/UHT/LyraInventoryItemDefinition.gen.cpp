// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/LyraInventoryItemDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryItemDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraInventoryItemFragment::StaticRegisterNativesULyraInventoryItemFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemFragment);
	UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister()
	{
		return ULyraInventoryItemFragment::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryItemFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryItemFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemFragment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Represents a fragment of an item definition\n" },
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ToolTip", "Represents a fragment of an item definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryItemFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemFragment_Statics::ClassParams = {
		&ULyraInventoryItemFragment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInventoryItemFragment()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemFragment>()
	{
		return ULyraInventoryItemFragment::StaticClass();
	}
	ULyraInventoryItemFragment::ULyraInventoryItemFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemFragment);
	ULyraInventoryItemFragment::~ULyraInventoryItemFragment() {}
	void ULyraInventoryItemDefinition::StaticRegisterNativesULyraInventoryItemDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemDefinition);
	UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister()
	{
		return ULyraInventoryItemDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryItemDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraInventoryItemDefinition\n */" },
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraInventoryItemDefinition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInventoryItemDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x001400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInventoryItemDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::ClassParams = {
		&ULyraInventoryItemDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers),
		0,
		0x008100A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInventoryItemDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemDefinition>()
	{
		return ULyraInventoryItemDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemDefinition);
	ULyraInventoryItemDefinition::~ULyraInventoryItemDefinition() {}
	DEFINE_FUNCTION(ULyraInventoryFunctionLibrary::execFindItemDefinitionFragment)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_GET_OBJECT(UClass,Z_Param_FragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULyraInventoryItemFragment**)Z_Param__Result=ULyraInventoryFunctionLibrary::FindItemDefinitionFragment(Z_Param_ItemDef,Z_Param_FragmentClass);
		P_NATIVE_END;
	}
	void ULyraInventoryFunctionLibrary::StaticRegisterNativesULyraInventoryFunctionLibrary()
	{
		UClass* Class = ULyraInventoryFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindItemDefinitionFragment", &ULyraInventoryFunctionLibrary::execFindItemDefinitionFragment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics
	{
		struct LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms
		{
			TSubclassOf<ULyraInventoryItemDefinition>  ItemDef;
			TSubclassOf<ULyraInventoryItemFragment>  FragmentClass;
			const ULyraInventoryItemFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryFunctionLibrary, nullptr, "FindItemDefinitionFragment", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms), Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryFunctionLibrary);
	UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister()
	{
		return ULyraInventoryFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment, "FindItemDefinitionFragment" }, // 1693981592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//@TODO: Make into a subsystem instead?\n" },
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ToolTip", "@TODO: Make into a subsystem instead?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams = {
		&ULyraInventoryFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryFunctionLibrary>()
	{
		return ULyraInventoryFunctionLibrary::StaticClass();
	}
	ULyraInventoryFunctionLibrary::ULyraInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryFunctionLibrary);
	ULyraInventoryFunctionLibrary::~ULyraInventoryFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryItemFragment, ULyraInventoryItemFragment::StaticClass, TEXT("ULyraInventoryItemFragment"), &Z_Registration_Info_UClass_ULyraInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemFragment), 2965617969U) },
		{ Z_Construct_UClass_ULyraInventoryItemDefinition, ULyraInventoryItemDefinition::StaticClass, TEXT("ULyraInventoryItemDefinition"), &Z_Registration_Info_UClass_ULyraInventoryItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemDefinition), 1021653315U) },
		{ Z_Construct_UClass_ULyraInventoryFunctionLibrary, ULyraInventoryFunctionLibrary::StaticClass, TEXT("ULyraInventoryFunctionLibrary"), &Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryFunctionLibrary), 3853011865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_238889778(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
