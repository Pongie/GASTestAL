// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraSimulatedInputWidget.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSimulatedInputWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSimulatedInputWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execFlushSimulatedInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushSimulatedInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execInputKeyValue2D)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputKeyValue2D(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execInputKeyValue)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputKeyValue(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetSimulatedKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetSimulatedKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetAssociatedAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInputAction**)Z_Param__Result=P_THIS->GetAssociatedAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSimulatedInputWidget::execGetEnhancedInputSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnhancedInputLocalPlayerSubsystem**)Z_Param__Result=P_THIS->GetEnhancedInputSubsystem();
		P_NATIVE_END;
	}
	void ULyraSimulatedInputWidget::StaticRegisterNativesULyraSimulatedInputWidget()
	{
		UClass* Class = ULyraSimulatedInputWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushSimulatedInput", &ULyraSimulatedInputWidget::execFlushSimulatedInput },
			{ "GetAssociatedAction", &ULyraSimulatedInputWidget::execGetAssociatedAction },
			{ "GetEnhancedInputSubsystem", &ULyraSimulatedInputWidget::execGetEnhancedInputSubsystem },
			{ "GetSimulatedKey", &ULyraSimulatedInputWidget::execGetSimulatedKey },
			{ "InputKeyValue", &ULyraSimulatedInputWidget::execInputKeyValue },
			{ "InputKeyValue2D", &ULyraSimulatedInputWidget::execInputKeyValue2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "FlushSimulatedInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics
	{
		struct LyraSimulatedInputWidget_eventGetAssociatedAction_Parms
		{
			const UInputAction* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetAssociatedAction_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetAssociatedAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::LyraSimulatedInputWidget_eventGetAssociatedAction_Parms), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics
	{
		struct LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms
		{
			UEnhancedInputLocalPlayerSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get the enhanced input subsystem based on the owning local player of this widget. Will return null if there is no owning player */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "Get the enhanced input subsystem based on the owning local player of this widget. Will return null if there is no owning player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetEnhancedInputSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::LyraSimulatedInputWidget_eventGetEnhancedInputSubsystem_Parms), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics
	{
		struct LyraSimulatedInputWidget_eventGetSimulatedKey_Parms
		{
			FKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSimulatedInputWidget_eventGetSimulatedKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the current key that will be used to input any values. */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "Returns the current key that will be used to input any values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "GetSimulatedKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::LyraSimulatedInputWidget_eventGetSimulatedKey_Parms), Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics
	{
		struct LyraSimulatedInputWidget_eventInputKeyValue_Parms
		{
			FVector Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSimulatedInputWidget_eventInputKeyValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Injects the given vector as an input to the current simulated key.\n\x09 * This calls \"InputKey\" on the current player.\n\x09 */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "Injects the given vector as an input to the current simulated key.\nThis calls \"InputKey\" on the current player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "InputKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::LyraSimulatedInputWidget_eventInputKeyValue_Parms), Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics
	{
		struct LyraSimulatedInputWidget_eventInputKeyValue2D_Parms
		{
			FVector2D Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSimulatedInputWidget_eventInputKeyValue2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Injects the given vector as an input to the current simulated key.\n\x09 * This calls \"InputKey\" on the current player.\n\x09 */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "Injects the given vector as an input to the current simulated key.\nThis calls \"InputKey\" on the current player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSimulatedInputWidget, nullptr, "InputKeyValue2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::LyraSimulatedInputWidget_eventInputKeyValue2D_Parms), Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSimulatedInputWidget);
	UClass* Z_Construct_UClass_ULyraSimulatedInputWidget_NoRegister()
	{
		return ULyraSimulatedInputWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSimulatedInputWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonVisibilityBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonVisibilityBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBindingKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackBindingKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_FlushSimulatedInput, "FlushSimulatedInput" }, // 3048161804
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetAssociatedAction, "GetAssociatedAction" }, // 1981342534
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetEnhancedInputSubsystem, "GetEnhancedInputSubsystem" }, // 763741661
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_GetSimulatedKey, "GetSimulatedKey" }, // 1419125567
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue, "InputKeyValue" }, // 4095694019
		{ &Z_Construct_UFunction_ULyraSimulatedInputWidget_InputKeyValue2D, "InputKeyValue2D" }, // 2979182691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  A UMG widget with base functionality to inject input (keys or input actions)\n *  to the enhanced input subsystem.\n */" },
		{ "DisplayName", "Lyra Simulated Input Widget" },
		{ "IncludePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A UMG widget with base functionality to inject input (keys or input actions)\nto the enhanced input subsystem." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LyraSimulatedInputWidget" },
		{ "Comment", "/** The common visiblity border will allow you to specifiy UI for only specific platorms if desired */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "The common visiblity border will allow you to specifiy UI for only specific platorms if desired" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder = { "CommonVisibilityBorder", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSimulatedInputWidget, CommonVisibilityBorder), Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction_MetaData[] = {
		{ "Category", "LyraSimulatedInputWidget" },
		{ "Comment", "/** The associated input action that we should simulate input for */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The associated input action that we should simulate input for" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction = { "AssociatedAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSimulatedInputWidget, AssociatedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey_MetaData[] = {
		{ "Category", "LyraSimulatedInputWidget" },
		{ "Comment", "/** The Key to simulate input for in the case where none are currently bound to the associated action */" },
		{ "ModuleRelativePath", "UI/LyraSimulatedInputWidget.h" },
		{ "ToolTip", "The Key to simulate input for in the case where none are currently bound to the associated action" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey = { "FallbackBindingKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSimulatedInputWidget, FallbackBindingKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_CommonVisibilityBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_AssociatedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::NewProp_FallbackBindingKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSimulatedInputWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::ClassParams = {
		&ULyraSimulatedInputWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSimulatedInputWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton, Z_Construct_UClass_ULyraSimulatedInputWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSimulatedInputWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSimulatedInputWidget>()
	{
		return ULyraSimulatedInputWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSimulatedInputWidget);
	ULyraSimulatedInputWidget::~ULyraSimulatedInputWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSimulatedInputWidget, ULyraSimulatedInputWidget::StaticClass, TEXT("ULyraSimulatedInputWidget"), &Z_Registration_Info_UClass_ULyraSimulatedInputWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSimulatedInputWidget), 2557808532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_3881496433(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
