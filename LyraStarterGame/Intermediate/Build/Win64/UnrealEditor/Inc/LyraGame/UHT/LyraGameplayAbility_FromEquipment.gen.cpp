// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraGameplayAbility_FromEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_FromEquipment() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraGameplayAbility_FromEquipment::execGetAssociatedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->GetAssociatedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility_FromEquipment::execGetAssociatedEquipment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->GetAssociatedEquipment();
		P_NATIVE_END;
	}
	void ULyraGameplayAbility_FromEquipment::StaticRegisterNativesULyraGameplayAbility_FromEquipment()
	{
		UClass* Class = ULyraGameplayAbility_FromEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssociatedEquipment", &ULyraGameplayAbility_FromEquipment::execGetAssociatedEquipment },
			{ "GetAssociatedItem", &ULyraGameplayAbility_FromEquipment::execGetAssociatedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics
	{
		struct LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms
		{
			ULyraEquipmentInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, nullptr, "GetAssociatedEquipment", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms), Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics
	{
		struct LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms
		{
			ULyraInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, nullptr, "GetAssociatedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms), Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_FromEquipment);
	UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_NoRegister()
	{
		return ULyraGameplayAbility_FromEquipment::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment, "GetAssociatedEquipment" }, // 1366982332
		{ &Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem, "GetAssociatedItem" }, // 3559889115
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayAbility_FromEquipment\n *\n * An ability granted by and associated with an equipment instance\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraGameplayAbility_FromEquipment\n\nAn ability granted by and associated with an equipment instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_FromEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::ClassParams = {
		&ULyraGameplayAbility_FromEquipment::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_FromEquipment>()
	{
		return ULyraGameplayAbility_FromEquipment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_FromEquipment);
	ULyraGameplayAbility_FromEquipment::~ULyraGameplayAbility_FromEquipment() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, ULyraGameplayAbility_FromEquipment::StaticClass, TEXT("ULyraGameplayAbility_FromEquipment"), &Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_FromEquipment), 1191275064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_2314801602(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
