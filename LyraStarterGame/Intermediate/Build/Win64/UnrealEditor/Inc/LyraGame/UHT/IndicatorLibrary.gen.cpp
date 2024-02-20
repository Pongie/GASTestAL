// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IndicatorSystem/IndicatorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLibrary_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(UIndicatorLibrary::execGetIndicatorManagerComponent)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraIndicatorManagerComponent**)Z_Param__Result=UIndicatorLibrary::GetIndicatorManagerComponent(Z_Param_Controller);
		P_NATIVE_END;
	}
	void UIndicatorLibrary::StaticRegisterNativesUIndicatorLibrary()
	{
		UClass* Class = UIndicatorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndicatorManagerComponent", &UIndicatorLibrary::execGetIndicatorManagerComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics
	{
		struct IndicatorLibrary_eventGetIndicatorManagerComponent_Parms
		{
			AController* Controller;
			ULyraIndicatorManagerComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorLibrary_eventGetIndicatorManagerComponent_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorLibrary_eventGetIndicatorManagerComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraIndicatorManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorLibrary, nullptr, "GetIndicatorManagerComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::IndicatorLibrary_eventGetIndicatorManagerComponent_Parms), Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorLibrary);
	UClass* Z_Construct_UClass_UIndicatorLibrary_NoRegister()
	{
		return UIndicatorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UIndicatorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndicatorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIndicatorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorLibrary_GetIndicatorManagerComponent, "GetIndicatorManagerComponent" }, // 3022491239
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndicatorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorLibrary_Statics::ClassParams = {
		&UIndicatorLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndicatorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndicatorLibrary()
	{
		if (!Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton, Z_Construct_UClass_UIndicatorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIndicatorLibrary.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UIndicatorLibrary>()
	{
		return UIndicatorLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorLibrary);
	UIndicatorLibrary::~UIndicatorLibrary() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorLibrary, UIndicatorLibrary::StaticClass, TEXT("UIndicatorLibrary"), &Z_Registration_Info_UClass_UIndicatorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorLibrary), 3028986261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_1298496399(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
