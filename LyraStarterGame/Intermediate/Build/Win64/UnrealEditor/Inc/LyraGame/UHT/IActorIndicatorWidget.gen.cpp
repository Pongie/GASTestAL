// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IndicatorSystem/IActorIndicatorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIActorIndicatorWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorWidgetInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(IIndicatorWidgetInterface::execUnbindIndicator)
	{
		P_GET_OBJECT(UIndicatorDescriptor,Z_Param_Indicator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindIndicator_Implementation(Z_Param_Indicator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIndicatorWidgetInterface::execBindIndicator)
	{
		P_GET_OBJECT(UIndicatorDescriptor,Z_Param_Indicator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindIndicator_Implementation(Z_Param_Indicator);
		P_NATIVE_END;
	}
	struct IndicatorWidgetInterface_eventBindIndicator_Parms
	{
		UIndicatorDescriptor* Indicator;
	};
	struct IndicatorWidgetInterface_eventUnbindIndicator_Parms
	{
		const UIndicatorDescriptor* Indicator;
	};
	void IIndicatorWidgetInterface::BindIndicator(UIndicatorDescriptor* Indicator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindIndicator instead.");
	}
	void IIndicatorWidgetInterface::UnbindIndicator(const UIndicatorDescriptor* Indicator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindIndicator instead.");
	}
	void UIndicatorWidgetInterface::StaticRegisterNativesUIndicatorWidgetInterface()
	{
		UClass* Class = UIndicatorWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindIndicator", &IIndicatorWidgetInterface::execBindIndicator },
			{ "UnbindIndicator", &IIndicatorWidgetInterface::execUnbindIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorWidgetInterface_eventBindIndicator_Parms, Indicator), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::NewProp_Indicator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorWidgetInterface, nullptr, "BindIndicator", nullptr, nullptr, sizeof(IndicatorWidgetInterface_eventBindIndicator_Parms), Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IndicatorWidgetInterface_eventUnbindIndicator_Parms, Indicator), Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::NewProp_Indicator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicatorWidgetInterface, nullptr, "UnbindIndicator", nullptr, nullptr, sizeof(IndicatorWidgetInterface_eventUnbindIndicator_Parms), Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorWidgetInterface);
	UClass* Z_Construct_UClass_UIndicatorWidgetInterface_NoRegister()
	{
		return UIndicatorWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIndicatorWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndicatorWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIndicatorWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicatorWidgetInterface_BindIndicator, "BindIndicator" }, // 3563128856
		{ &Z_Construct_UFunction_UIndicatorWidgetInterface_UnbindIndicator, "UnbindIndicator" }, // 806200169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IActorIndicatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndicatorWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIndicatorWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorWidgetInterface_Statics::ClassParams = {
		&UIndicatorWidgetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIndicatorWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndicatorWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton, Z_Construct_UClass_UIndicatorWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIndicatorWidgetInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UIndicatorWidgetInterface>()
	{
		return UIndicatorWidgetInterface::StaticClass();
	}
	UIndicatorWidgetInterface::UIndicatorWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorWidgetInterface);
	UIndicatorWidgetInterface::~UIndicatorWidgetInterface() {}
	static FName NAME_UIndicatorWidgetInterface_BindIndicator = FName(TEXT("BindIndicator"));
	void IIndicatorWidgetInterface::Execute_BindIndicator(UObject* O, UIndicatorDescriptor* Indicator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIndicatorWidgetInterface::StaticClass()));
		IndicatorWidgetInterface_eventBindIndicator_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIndicatorWidgetInterface_BindIndicator);
		if (Func)
		{
			Parms.Indicator=Indicator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIndicatorWidgetInterface*)(O->GetNativeInterfaceAddress(UIndicatorWidgetInterface::StaticClass())))
		{
			I->BindIndicator_Implementation(Indicator);
		}
	}
	static FName NAME_UIndicatorWidgetInterface_UnbindIndicator = FName(TEXT("UnbindIndicator"));
	void IIndicatorWidgetInterface::Execute_UnbindIndicator(UObject* O, const UIndicatorDescriptor* Indicator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIndicatorWidgetInterface::StaticClass()));
		IndicatorWidgetInterface_eventUnbindIndicator_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIndicatorWidgetInterface_UnbindIndicator);
		if (Func)
		{
			Parms.Indicator=Indicator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIndicatorWidgetInterface*)(O->GetNativeInterfaceAddress(UIndicatorWidgetInterface::StaticClass())))
		{
			I->UnbindIndicator_Implementation(Indicator);
		}
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorWidgetInterface, UIndicatorWidgetInterface::StaticClass, TEXT("UIndicatorWidgetInterface"), &Z_Registration_Info_UClass_UIndicatorWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorWidgetInterface), 4214305961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_2270573579(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
