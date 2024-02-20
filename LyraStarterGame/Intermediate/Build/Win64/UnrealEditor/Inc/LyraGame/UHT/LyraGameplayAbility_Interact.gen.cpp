// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Abilities/LyraGameplayAbility_Interact.h"
#include "Interaction/InteractionOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Interact() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorDescriptor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraGameplayAbility_Interact::execTriggerInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility_Interact::execUpdateInteractions)
	{
		P_GET_TARRAY_REF(FInteractionOption,Z_Param_Out_InteractiveOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractions(Z_Param_Out_InteractiveOptions);
		P_NATIVE_END;
	}
	void ULyraGameplayAbility_Interact::StaticRegisterNativesULyraGameplayAbility_Interact()
	{
		UClass* Class = ULyraGameplayAbility_Interact::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerInteraction", &ULyraGameplayAbility_Interact::execTriggerInteraction },
			{ "UpdateInteractions", &ULyraGameplayAbility_Interact::execUpdateInteractions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Interact, nullptr, "TriggerInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics
	{
		struct LyraGameplayAbility_Interact_eventUpdateInteractions_Parms
		{
			TArray<FInteractionOption> InteractiveOptions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractiveOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractiveOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_Inner = { "InteractiveOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(nullptr, 0) }; // 3431688996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions = { "InteractiveOptions", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_Interact_eventUpdateInteractions_Parms, InteractiveOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_MetaData)) }; // 3431688996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::NewProp_InteractiveOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Interact, nullptr, "UpdateInteractions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::LyraGameplayAbility_Interact_eventUpdateInteractions_Parms), Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Interact);
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact_NoRegister()
	{
		return ULyraGameplayAbility_Interact::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentOptions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Indicators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indicators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScanRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScanRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultInteractionWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Interact_TriggerInteraction, "TriggerInteraction" }, // 1077111335
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Interact_UpdateInteractions, "UpdateInteractions" }, // 3508222466
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayAbility_Interact\n *\n * Gameplay ability used for character interacting\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraGameplayAbility_Interact\n\nGameplay ability used for character interacting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_Inner = { "CurrentOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(nullptr, 0) }; // 3431688996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions = { "CurrentOptions", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility_Interact, CurrentOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_MetaData)) }; // 3431688996
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_Inner = { "Indicators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIndicatorDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators = { "Indicators", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility_Interact, Indicators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility_Interact, InteractionScanRate), METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange = { "InteractionScanRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility_Interact, InteractionScanRange), METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass_MetaData[] = {
		{ "Category", "LyraGameplayAbility_Interact" },
		{ "ModuleRelativePath", "Interaction/Abilities/LyraGameplayAbility_Interact.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass = { "DefaultInteractionWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility_Interact, DefaultInteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_CurrentOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_Indicators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_InteractionScanRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::NewProp_DefaultInteractionWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Interact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::ClassParams = {
		&ULyraGameplayAbility_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Interact()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayAbility_Interact.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Interact>()
	{
		return ULyraGameplayAbility_Interact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Interact);
	ULyraGameplayAbility_Interact::~ULyraGameplayAbility_Interact() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Interact, ULyraGameplayAbility_Interact::StaticClass, TEXT("ULyraGameplayAbility_Interact"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Interact), 1173727324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_2373169959(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
