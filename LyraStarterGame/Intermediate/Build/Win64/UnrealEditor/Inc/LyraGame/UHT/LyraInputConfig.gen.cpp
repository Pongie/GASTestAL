// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/LyraInputConfig.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInputAction();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInputAction;
class UScriptStruct* FLyraInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInputAction, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInputAction.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInputAction>()
{
	return FLyraInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraInputAction\n *\n *\x09Struct used to map a input action to a gameplay input tag.\n */" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "ToolTip", "FLyraInputAction\n\n    Struct used to map a input action to a gameplay input tag." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "LyraInputAction" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LyraInputAction" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraInputAction",
		sizeof(FLyraInputAction),
		alignof(FLyraInputAction),
		Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton, Z_Construct_UScriptStruct_FLyraInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraInputAction.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraInputConfig::execFindAbilityInputActionForTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInputConfig::execFindNativeInputActionForTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
		P_GET_UBOOL(Z_Param_bLogNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
		P_NATIVE_END;
	}
	void ULyraInputConfig::StaticRegisterNativesULyraInputConfig()
	{
		UClass* Class = ULyraInputConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAbilityInputActionForTag", &ULyraInputConfig::execFindAbilityInputActionForTag },
			{ "FindNativeInputActionForTag", &ULyraInputConfig::execFindNativeInputActionForTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics
	{
		struct LyraInputConfig_eventFindAbilityInputActionForTag_Parms
		{
			FGameplayTag InputTag;
			bool bLogNotFound;
			const UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInputConfig_eventFindAbilityInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((LyraInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInputConfig, nullptr, "FindAbilityInputActionForTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::LyraInputConfig_eventFindAbilityInputActionForTag_Parms), Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics
	{
		struct LyraInputConfig_eventFindNativeInputActionForTag_Parms
		{
			FGameplayTag InputTag;
			bool bLogNotFound;
			const UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static void NewProp_bLogNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInputConfig_eventFindNativeInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
	{
		((LyraInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInputConfig, nullptr, "FindNativeInputActionForTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::LyraInputConfig_eventFindNativeInputActionForTag_Parms), Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputConfig);
	UClass* Z_Construct_UClass_ULyraInputConfig_NoRegister()
	{
		return ULyraInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraInputConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 988381290
		{ &Z_Construct_UFunction_ULyraInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 3720030853
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraInputConfig\n *\n *\x09Non-mutable data asset that contains input configuration properties.\n */" },
		{ "IncludePath", "Input/LyraInputConfig.h" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraInputConfig\n\n    Non-mutable data asset that contains input configuration properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraInputAction, METADATA_PARAMS(nullptr, 0) }; // 2231586178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "LyraInputConfig" },
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_MetaData)) }; // 2231586178
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraInputAction, METADATA_PARAMS(nullptr, 0) }; // 2231586178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "LyraInputConfig" },
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
		{ "ModuleRelativePath", "Input/LyraInputConfig.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_MetaData)) }; // 2231586178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_NativeInputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputConfig_Statics::NewProp_AbilityInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputConfig_Statics::ClassParams = {
		&ULyraInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInputConfig()
	{
		if (!Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton, Z_Construct_UClass_ULyraInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInputConfig.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInputConfig>()
	{
		return ULyraInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputConfig);
	ULyraInputConfig::~ULyraInputConfig() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FLyraInputAction::StaticStruct, Z_Construct_UScriptStruct_FLyraInputAction_Statics::NewStructOps, TEXT("LyraInputAction"), &Z_Registration_Info_UScriptStruct_LyraInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInputAction), 2231586178U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInputConfig, ULyraInputConfig::StaticClass, TEXT("ULyraInputConfig"), &Z_Registration_Info_UClass_ULyraInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputConfig), 1625862414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_3227414865(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
