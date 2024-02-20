// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "Interaction/InteractionOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitForInteractableTargets() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventInteractableObjectsChangedEvent_Parms
		{
			TArray<FInteractionOption> InteractableOptions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractableOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_Inner = { "InteractableOptions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(nullptr, 0) }; // 3431688996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions = { "InteractableOptions", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms, InteractableOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_MetaData)) }; // 3431688996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::NewProp_InteractableOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "InteractableObjectsChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms), Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInteractableObjectsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& InteractableObjectsChangedEvent, TArray<FInteractionOption> const& InteractableOptions)
{
	struct _Script_LyraGame_eventInteractableObjectsChangedEvent_Parms
	{
		TArray<FInteractionOption> InteractableOptions;
	};
	_Script_LyraGame_eventInteractableObjectsChangedEvent_Parms Parms;
	Parms.InteractableOptions=InteractableOptions;
	InteractableObjectsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UAbilityTask_WaitForInteractableTargets::StaticRegisterNativesUAbilityTask_WaitForInteractableTargets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitForInteractableTargets);
	UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_NoRegister()
	{
		return UAbilityTask_WaitForInteractableTargets::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableObjectsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged = { "InteractableObjectsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets, InteractableObjectsChanged), Z_Construct_UDelegateFunction_LyraGame_InteractableObjectsChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged_MetaData)) }; // 3368603014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::NewProp_InteractableObjectsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitForInteractableTargets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::ClassParams = {
		&UAbilityTask_WaitForInteractableTargets::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAbilityTask_WaitForInteractableTargets>()
	{
		return UAbilityTask_WaitForInteractableTargets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitForInteractableTargets);
	UAbilityTask_WaitForInteractableTargets::~UAbilityTask_WaitForInteractableTargets() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets, UAbilityTask_WaitForInteractableTargets::StaticClass, TEXT("UAbilityTask_WaitForInteractableTargets"), &Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitForInteractableTargets), 416588536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_3061154909(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
