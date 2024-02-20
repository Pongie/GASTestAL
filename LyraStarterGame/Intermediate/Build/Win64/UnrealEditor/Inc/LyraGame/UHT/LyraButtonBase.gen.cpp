// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Foundation/LyraButtonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraButtonBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraButtonBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraButtonBase::execSetButtonText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	struct LyraButtonBase_eventUpdateButtonText_Parms
	{
		FText InText;
	};
	static FName NAME_ULyraButtonBase_UpdateButtonStyle = FName(TEXT("UpdateButtonStyle"));
	void ULyraButtonBase::UpdateButtonStyle()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_UpdateButtonStyle),NULL);
	}
	static FName NAME_ULyraButtonBase_UpdateButtonText = FName(TEXT("UpdateButtonText"));
	void ULyraButtonBase::UpdateButtonText(FText const& InText)
	{
		LyraButtonBase_eventUpdateButtonText_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_UpdateButtonText),&Parms);
	}
	void ULyraButtonBase::StaticRegisterNativesULyraButtonBase()
	{
		UClass* Class = ULyraButtonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetButtonText", &ULyraButtonBase::execSetButtonText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics
	{
		struct LyraButtonBase_eventSetButtonText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "SetButtonText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::LyraButtonBase_eventSetButtonText_Parms), Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraButtonBase_SetButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_SetButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "UpdateButtonStyle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraButtonBase_eventUpdateButtonText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase, nullptr, "UpdateButtonText", nullptr, nullptr, sizeof(LyraButtonBase_eventUpdateButtonText_Parms), Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraButtonBase);
	UClass* Z_Construct_UClass_ULyraButtonBase_NoRegister()
	{
		return ULyraButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ButtonText_MetaData[];
#endif
		static void NewProp_bOverride_ButtonText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraButtonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraButtonBase_SetButtonText, "SetButtonText" }, // 919013449
		{ &Z_Construct_UFunction_ULyraButtonBase_UpdateButtonStyle, "UpdateButtonStyle" }, // 1185899572
		{ &Z_Construct_UFunction_ULyraButtonBase_UpdateButtonText, "UpdateButtonText" }, // 3415052562
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraButtonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Foundation/LyraButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit(void* Obj)
	{
		((ULyraButtonBase*)Obj)->bOverride_ButtonText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText = { "bOverride_ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULyraButtonBase), &Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "editcondition", "bOverride_ButtonText" },
		{ "ModuleRelativePath", "UI/Foundation/LyraButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraButtonBase, ButtonText), METADATA_PARAMS(Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_bOverride_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_Statics::NewProp_ButtonText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraButtonBase_Statics::ClassParams = {
		&ULyraButtonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraButtonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraButtonBase()
	{
		if (!Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton, Z_Construct_UClass_ULyraButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraButtonBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraButtonBase>()
	{
		return ULyraButtonBase::StaticClass();
	}
	ULyraButtonBase::ULyraButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraButtonBase);
	ULyraButtonBase::~ULyraButtonBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraButtonBase, ULyraButtonBase::StaticClass, TEXT("ULyraButtonBase"), &Z_Registration_Info_UClass_ULyraButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraButtonBase), 2910113606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_2546464802(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraButtonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
