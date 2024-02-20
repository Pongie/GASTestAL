// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Basic/MaterialProgressBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialProgressBar() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UMaterialProgressBar();
	LYRAGAME_API UClass* Z_Construct_UClass_UMaterialProgressBar_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "OnFillAnimationFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMaterialProgressBar::FOnFillAnimationFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFillAnimationFinished)
{
	OnFillAnimationFinished.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMaterialProgressBar::execAnimateProgressFromCurrent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimateProgressFromCurrent(Z_Param_End,Z_Param_AnimSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execAnimateProgressFromStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Start);
		P_GET_PROPERTY(FFloatProperty,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimateProgressFromStart(Z_Param_Start,Z_Param_End,Z_Param_AnimSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execSetColorBackground)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorBackground);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorBackground(Z_Param_ColorBackground);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execSetColorB)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorB(Z_Param_ColorB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execSetColorA)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorA);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorA(Z_Param_ColorA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execSetStartProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartProgress(Z_Param_StartProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialProgressBar::execSetProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_Progress);
		P_NATIVE_END;
	}
	void UMaterialProgressBar::StaticRegisterNativesUMaterialProgressBar()
	{
		UClass* Class = UMaterialProgressBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimateProgressFromCurrent", &UMaterialProgressBar::execAnimateProgressFromCurrent },
			{ "AnimateProgressFromStart", &UMaterialProgressBar::execAnimateProgressFromStart },
			{ "SetColorA", &UMaterialProgressBar::execSetColorA },
			{ "SetColorB", &UMaterialProgressBar::execSetColorB },
			{ "SetColorBackground", &UMaterialProgressBar::execSetColorBackground },
			{ "SetProgress", &UMaterialProgressBar::execSetProgress },
			{ "SetStartProgress", &UMaterialProgressBar::execSetStartProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics
	{
		struct MaterialProgressBar_eventAnimateProgressFromCurrent_Parms
		{
			float End;
			float AnimSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromCurrent_Parms, End), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromCurrent_Parms, AnimSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::NewProp_AnimSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_AnimSpeed", "1.000000" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "AnimateProgressFromCurrent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::MaterialProgressBar_eventAnimateProgressFromCurrent_Parms), Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics
	{
		struct MaterialProgressBar_eventAnimateProgressFromStart_Parms
		{
			float Start;
			float End;
			float AnimSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Start;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, Start), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, End), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventAnimateProgressFromStart_Parms, AnimSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::NewProp_AnimSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_AnimSpeed", "1.000000" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "AnimateProgressFromStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::MaterialProgressBar_eventAnimateProgressFromStart_Parms), Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics
	{
		struct MaterialProgressBar_eventSetColorA_Parms
		{
			FLinearColor ColorA;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::NewProp_ColorA = { "ColorA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventSetColorA_Parms, ColorA), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::NewProp_ColorA,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::MaterialProgressBar_eventSetColorA_Parms), Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics
	{
		struct MaterialProgressBar_eventSetColorB_Parms
		{
			FLinearColor ColorB;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventSetColorB_Parms, ColorB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::NewProp_ColorB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::MaterialProgressBar_eventSetColorB_Parms), Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics
	{
		struct MaterialProgressBar_eventSetColorBackground_Parms
		{
			FLinearColor ColorBackground;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::NewProp_ColorBackground = { "ColorBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventSetColorBackground_Parms, ColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::NewProp_ColorBackground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetColorBackground", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::MaterialProgressBar_eventSetColorBackground_Parms), Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics
	{
		struct MaterialProgressBar_eventSetProgress_Parms
		{
			float Progress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventSetProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::MaterialProgressBar_eventSetProgress_Parms), Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics
	{
		struct MaterialProgressBar_eventSetStartProgress_Parms
		{
			float StartProgress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::NewProp_StartProgress = { "StartProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialProgressBar_eventSetStartProgress_Parms, StartProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::NewProp_StartProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialProgressBar, nullptr, "SetStartProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::MaterialProgressBar_eventSetStartProgress_Parms), Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialProgressBar);
	UClass* Z_Construct_UClass_UMaterialProgressBar_NoRegister()
	{
		return UMaterialProgressBar::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialProgressBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFillAnimationFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFillAnimationFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorA_MetaData[];
#endif
		static void NewProp_bOverrideDefaultColorA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorB_MetaData[];
#endif
		static void NewProp_bOverrideDefaultColorB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultColorBackground_MetaData[];
#endif
		static void NewProp_bOverrideDefaultColorBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultColorBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultSegments_MetaData[];
#endif
		static void NewProp_bOverrideDefaultSegments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultSegmentEdge_MetaData[];
#endif
		static void NewProp_bOverrideDefaultSegmentEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultSegmentEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEdge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultFillEdgeSoftness_MetaData[];
#endif
		static void NewProp_bOverrideDefaultFillEdgeSoftness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultFillEdgeSoftness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillEdgeSoftness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FillEdgeSoftness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultGlowEdge_MetaData[];
#endif
		static void NewProp_bOverrideDefaultGlowEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultGlowEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowEdge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultGlowSoftness_MetaData[];
#endif
		static void NewProp_bOverrideDefaultGlowSoftness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultGlowSoftness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowSoftness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowSoftness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultOutlineScale_MetaData[];
#endif
		static void NewProp_bOverrideDefaultOutlineScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultOutlineScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStroke_MetaData[];
#endif
		static void NewProp_bUseStroke_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStroke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrokeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrokeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoStrokeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoStrokeMaterial;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignTime_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesignTime_Progress;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_Bar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Image_Bar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundAnim_FillBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundAnim_FillBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialProgressBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialProgressBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromCurrent, "AnimateProgressFromCurrent" }, // 853312296
		{ &Z_Construct_UFunction_UMaterialProgressBar_AnimateProgressFromStart, "AnimateProgressFromStart" }, // 610227465
		{ &Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature, "OnFillAnimationFinished__DelegateSignature" }, // 3798484944
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorA, "SetColorA" }, // 1655008514
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorB, "SetColorB" }, // 1139449460
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetColorBackground, "SetColorBackground" }, // 2665316773
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetProgress, "SetProgress" }, // 1912428609
		{ &Z_Construct_UFunction_UMaterialProgressBar_SetStartProgress, "SetStartProgress" }, // 1892248599
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Basic/MaterialProgressBar.h" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished_MetaData[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished = { "OnFillAnimationFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, OnFillAnimationFinished), Z_Construct_UDelegateFunction_UMaterialProgressBar_OnFillAnimationFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished_MetaData)) }; // 3798484944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorA" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultColorA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA = { "bOverrideDefaultColorA", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color A" },
		{ "EditCondition", "bOverrideDefaultColorA" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA = { "CachedColorA", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, CachedColorA), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorB" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultColorB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB = { "bOverrideDefaultColorB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color B" },
		{ "EditCondition", "bOverrideDefaultColorB" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB = { "CachedColorB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, CachedColorB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "CachedColorBackground" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultColorBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground = { "bOverrideDefaultColorBackground", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Color Background" },
		{ "EditCondition", "bOverrideDefaultColorBackground" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground = { "CachedColorBackground", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, CachedColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "Segments" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultSegments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments = { "bOverrideDefaultSegments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultSegments" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, Segments), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "SegmentEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultSegmentEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge = { "bOverrideDefaultSegmentEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultSegmentEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge = { "SegmentEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, SegmentEdge), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "FillEdgeSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultFillEdgeSoftness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness = { "bOverrideDefaultFillEdgeSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultFillEdgeSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness = { "FillEdgeSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, FillEdgeSoftness), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "GlowEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultGlowEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge = { "bOverrideDefaultGlowEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultGlowEdge" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge = { "GlowEdge", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, GlowEdge), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "GlowSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultGlowSoftness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness = { "bOverrideDefaultGlowSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultGlowSoftness" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness = { "GlowSoftness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, GlowSoftness), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "InlineEditConditionToggle", "OutlineScale" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bOverrideDefaultOutlineScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale = { "bOverrideDefaultOutlineScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "EditCondition", "bOverrideDefaultOutlineScale" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale = { "OutlineScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, OutlineScale), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_SetBit(void* Obj)
	{
		((UMaterialProgressBar*)Obj)->bUseStroke = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke = { "bUseStroke", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialProgressBar), &Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial = { "StrokeMaterial", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, StrokeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial = { "NoStrokeMaterial", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, NoStrokeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress_MetaData[] = {
		{ "Category", "MaterialProgressBar" },
		{ "DisplayName", "Design Time Progress" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress = { "DesignTime_Progress", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, DesignTime_Progress), METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "MaterialProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar = { "Image_Bar", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, Image_Bar), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidgetAnim", "" },
		{ "Category", "MaterialProgressBar" },
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar = { "BoundAnim_FillBar", nullptr, (EPropertyFlags)0x0044000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, BoundAnim_FillBar), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/Basic/MaterialProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID = { "CachedMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialProgressBar, CachedMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OnFillAnimationFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultColorBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedColorBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultSegmentEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_SegmentEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultFillEdgeSoftness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_FillEdgeSoftness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultGlowSoftness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_GlowSoftness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bOverrideDefaultOutlineScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_OutlineScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_bUseStroke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_StrokeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_NoStrokeMaterial,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_DesignTime_Progress,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_Image_Bar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_BoundAnim_FillBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialProgressBar_Statics::NewProp_CachedMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialProgressBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialProgressBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialProgressBar_Statics::ClassParams = {
		&UMaterialProgressBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialProgressBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProgressBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialProgressBar()
	{
		if (!Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton, Z_Construct_UClass_UMaterialProgressBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialProgressBar.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UMaterialProgressBar>()
	{
		return UMaterialProgressBar::StaticClass();
	}
	UMaterialProgressBar::UMaterialProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialProgressBar);
	UMaterialProgressBar::~UMaterialProgressBar() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialProgressBar, UMaterialProgressBar::StaticClass, TEXT("UMaterialProgressBar"), &Z_Registration_Info_UClass_UMaterialProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialProgressBar), 3955014879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_2800743460(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
