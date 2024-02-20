// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Foundation/LyraLoadingScreenSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLoadingScreenSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLoadingScreenSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLoadingScreenSubsystem_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLoadingScreenWidgetChangedDelegate_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLoadingScreenWidgetChangedDelegate_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LoadingScreenWidgetChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::_Script_LyraGame_eventLoadingScreenWidgetChangedDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLoadingScreenWidgetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadingScreenWidgetChangedDelegate, TSubclassOf<UUserWidget>  NewWidgetClass)
{
	struct _Script_LyraGame_eventLoadingScreenWidgetChangedDelegate_Parms
	{
		TSubclassOf<UUserWidget>  NewWidgetClass;
	};
	_Script_LyraGame_eventLoadingScreenWidgetChangedDelegate_Parms Parms;
	Parms.NewWidgetClass=NewWidgetClass;
	LoadingScreenWidgetChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULyraLoadingScreenSubsystem::execGetLoadingScreenContentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UUserWidget> *)Z_Param__Result=P_THIS->GetLoadingScreenContentWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraLoadingScreenSubsystem::execSetLoadingScreenContentWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadingScreenContentWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void ULyraLoadingScreenSubsystem::StaticRegisterNativesULyraLoadingScreenSubsystem()
	{
		UClass* Class = ULyraLoadingScreenSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLoadingScreenContentWidget", &ULyraLoadingScreenSubsystem::execGetLoadingScreenContentWidget },
			{ "SetLoadingScreenContentWidget", &ULyraLoadingScreenSubsystem::execSetLoadingScreenContentWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics
	{
		struct LyraLoadingScreenSubsystem_eventGetLoadingScreenContentWidget_Parms
		{
			TSubclassOf<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLoadingScreenSubsystem_eventGetLoadingScreenContentWidget_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the last set loading screen widget class to display inside of the loading screen widget host\n" },
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
		{ "ToolTip", "Returns the last set loading screen widget class to display inside of the loading screen widget host" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLoadingScreenSubsystem, nullptr, "GetLoadingScreenContentWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::LyraLoadingScreenSubsystem_eventGetLoadingScreenContentWidget_Parms), Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics
	{
		struct LyraLoadingScreenSubsystem_eventSetLoadingScreenContentWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLoadingScreenSubsystem_eventSetLoadingScreenContentWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Sets the loading screen widget class to display inside of the loading screen widget host\n" },
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
		{ "ToolTip", "Sets the loading screen widget class to display inside of the loading screen widget host" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLoadingScreenSubsystem, nullptr, "SetLoadingScreenContentWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::LyraLoadingScreenSubsystem_eventSetLoadingScreenContentWidget_Parms), Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLoadingScreenSubsystem);
	UClass* Z_Construct_UClass_ULyraLoadingScreenSubsystem_NoRegister()
	{
		return ULyraLoadingScreenSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadingScreenWidgetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadingScreenWidgetChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLoadingScreenSubsystem_GetLoadingScreenContentWidget, "GetLoadingScreenContentWidget" }, // 671196743
		{ &Z_Construct_UFunction_ULyraLoadingScreenSubsystem_SetLoadingScreenContentWidget, "SetLoadingScreenContentWidget" }, // 4244646665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tracks/stores the current loading screen configuration in a place\n * that persists across map transitions\n */" },
		{ "IncludePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
		{ "ToolTip", "Tracks/stores the current loading screen configuration in a place\nthat persists across map transitions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_OnLoadingScreenWidgetChanged_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_OnLoadingScreenWidgetChanged = { "OnLoadingScreenWidgetChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLoadingScreenSubsystem, OnLoadingScreenWidgetChanged), Z_Construct_UDelegateFunction_LyraGame_LoadingScreenWidgetChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_OnLoadingScreenWidgetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_OnLoadingScreenWidgetChanged_MetaData)) }; // 3751712072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_LoadingScreenWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraLoadingScreenSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_LoadingScreenWidgetClass = { "LoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLoadingScreenSubsystem, LoadingScreenWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_LoadingScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_LoadingScreenWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_OnLoadingScreenWidgetChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::NewProp_LoadingScreenWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLoadingScreenSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::ClassParams = {
		&ULyraLoadingScreenSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraLoadingScreenSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraLoadingScreenSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLoadingScreenSubsystem.OuterSingleton, Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraLoadingScreenSubsystem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraLoadingScreenSubsystem>()
	{
		return ULyraLoadingScreenSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLoadingScreenSubsystem);
	ULyraLoadingScreenSubsystem::~ULyraLoadingScreenSubsystem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLoadingScreenSubsystem, ULyraLoadingScreenSubsystem::StaticClass, TEXT("ULyraLoadingScreenSubsystem"), &Z_Registration_Info_UClass_ULyraLoadingScreenSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLoadingScreenSubsystem), 1089016745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_1606706545(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
