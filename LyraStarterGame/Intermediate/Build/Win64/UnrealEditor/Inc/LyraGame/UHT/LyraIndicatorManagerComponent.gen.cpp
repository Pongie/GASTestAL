// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IndicatorSystem/LyraIndicatorManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraIndicatorManagerComponent() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraIndicatorManagerComponent::execRemoveIndicator)
	{
		P_GET_OBJECT(UIndicatorDescriptor,Z_Param_IndicatorDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveIndicator(Z_Param_IndicatorDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraIndicatorManagerComponent::execAddIndicator)
	{
		P_GET_OBJECT(UIndicatorDescriptor,Z_Param_IndicatorDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIndicator(Z_Param_IndicatorDescriptor);
		P_NATIVE_END;
	}
	void ULyraIndicatorManagerComponent::StaticRegisterNativesULyraIndicatorManagerComponent()
	{
		UClass* Class = ULyraIndicatorManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIndicator", &ULyraIndicatorManagerComponent::execAddIndicator },
			{ "RemoveIndicator", &ULyraIndicatorManagerComponent::execRemoveIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics
	{
		struct LyraIndicatorManagerComponent_eventAddIndicator_Parms
		{
			UIndicatorDescriptor* IndicatorDescriptor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IndicatorDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::NewProp_IndicatorDescriptor = { "IndicatorDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraIndicatorManagerComponent_eventAddIndicator_Parms, IndicatorDescriptor), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::NewProp_IndicatorDescriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/LyraIndicatorManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraIndicatorManagerComponent, nullptr, "AddIndicator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::LyraIndicatorManagerComponent_eventAddIndicator_Parms), Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics
	{
		struct LyraIndicatorManagerComponent_eventRemoveIndicator_Parms
		{
			UIndicatorDescriptor* IndicatorDescriptor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IndicatorDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::NewProp_IndicatorDescriptor = { "IndicatorDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraIndicatorManagerComponent_eventRemoveIndicator_Parms, IndicatorDescriptor), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::NewProp_IndicatorDescriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/LyraIndicatorManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraIndicatorManagerComponent, nullptr, "RemoveIndicator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::LyraIndicatorManagerComponent_eventRemoveIndicator_Parms), Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraIndicatorManagerComponent);
	UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister()
	{
		return ULyraIndicatorManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Indicators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indicators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControllerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraIndicatorManagerComponent_AddIndicator, "AddIndicator" }, // 370508981
		{ &Z_Construct_UFunction_ULyraIndicatorManagerComponent_RemoveIndicator, "RemoveIndicator" }, // 3447140044
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @class ULyraIndicatorManagerComponent\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UI/IndicatorSystem/LyraIndicatorManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/LyraIndicatorManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class ULyraIndicatorManagerComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators_Inner = { "Indicators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators_MetaData[] = {
		{ "ModuleRelativePath", "UI/IndicatorSystem/LyraIndicatorManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators = { "Indicators", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraIndicatorManagerComponent, Indicators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::NewProp_Indicators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraIndicatorManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::ClassParams = {
		&ULyraIndicatorManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraIndicatorManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraIndicatorManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraIndicatorManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraIndicatorManagerComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraIndicatorManagerComponent>()
	{
		return ULyraIndicatorManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraIndicatorManagerComponent);
	ULyraIndicatorManagerComponent::~ULyraIndicatorManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraIndicatorManagerComponent, ULyraIndicatorManagerComponent::StaticClass, TEXT("ULyraIndicatorManagerComponent"), &Z_Registration_Info_UClass_ULyraIndicatorManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraIndicatorManagerComponent), 233550640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_3609819076(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_LyraIndicatorManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
