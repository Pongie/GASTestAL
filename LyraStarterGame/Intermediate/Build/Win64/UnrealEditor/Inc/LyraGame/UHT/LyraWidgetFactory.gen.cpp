// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Common/LyraWidgetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWidgetFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraWidgetFactory::execFindWidgetClassForData)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UUserWidget> *)Z_Param__Result=P_THIS->FindWidgetClassForData_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	struct LyraWidgetFactory_eventFindWidgetClassForData_Parms
	{
		const UObject* Data;
		TSubclassOf<UUserWidget>  ReturnValue;

		/** Constructor, initializes return property only **/
		LyraWidgetFactory_eventFindWidgetClassForData_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_ULyraWidgetFactory_FindWidgetClassForData = FName(TEXT("FindWidgetClassForData"));
	TSubclassOf<UUserWidget>  ULyraWidgetFactory::FindWidgetClassForData(const UObject* Data) const
	{
		LyraWidgetFactory_eventFindWidgetClassForData_Parms Parms;
		Parms.Data=Data;
		const_cast<ULyraWidgetFactory*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULyraWidgetFactory_FindWidgetClassForData),&Parms);
		return Parms.ReturnValue;
	}
	void ULyraWidgetFactory::StaticRegisterNativesULyraWidgetFactory()
	{
		UClass* Class = ULyraWidgetFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindWidgetClassForData", &ULyraWidgetFactory::execFindWidgetClassForData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWidgetFactory_eventFindWidgetClassForData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraWidgetFactory_eventFindWidgetClassForData_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWidgetFactory, nullptr, "FindWidgetClassForData", nullptr, nullptr, sizeof(LyraWidgetFactory_eventFindWidgetClassForData_Parms), Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWidgetFactory);
	UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister()
	{
		return ULyraWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraWidgetFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWidgetFactory_FindWidgetClassForData, "FindWidgetClassForData" }, // 3800117355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Common/LyraWidgetFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWidgetFactory_Statics::ClassParams = {
		&ULyraWidgetFactory::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWidgetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton, Z_Construct_UClass_ULyraWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWidgetFactory.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWidgetFactory>()
	{
		return ULyraWidgetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWidgetFactory);
	ULyraWidgetFactory::~ULyraWidgetFactory() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWidgetFactory, ULyraWidgetFactory::StaticClass, TEXT("ULyraWidgetFactory"), &Z_Registration_Info_UClass_ULyraWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWidgetFactory), 2512572561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_3702169979(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
