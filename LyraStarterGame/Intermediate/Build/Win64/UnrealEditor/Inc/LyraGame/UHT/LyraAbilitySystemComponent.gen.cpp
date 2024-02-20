// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraAbilitySystemComponent::execClientNotifyAbilityFailed)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_Ability);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_FailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientNotifyAbilityFailed_Implementation(Z_Param_Ability,Z_Param_FailureReason);
		P_NATIVE_END;
	}
	struct LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms
	{
		const UGameplayAbility* Ability;
		FGameplayTagContainer FailureReason;
	};
	static FName NAME_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed = FName(TEXT("ClientNotifyAbilityFailed"));
	void ULyraAbilitySystemComponent::ClientNotifyAbilityFailed(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason)
	{
		LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms Parms;
		Parms.Ability=Ability;
		Parms.FailureReason=FailureReason;
		ProcessEvent(FindFunctionChecked(NAME_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed),&Parms);
	}
	void ULyraAbilitySystemComponent::StaticRegisterNativesULyraAbilitySystemComponent()
	{
		UClass* Class = ULyraAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientNotifyAbilityFailed", &ULyraAbilitySystemComponent::execClientNotifyAbilityFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that an ability failed to activate */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ToolTip", "Notify client that an ability failed to activate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAbilitySystemComponent, nullptr, "ClientNotifyAbilityFailed", nullptr, nullptr, sizeof(LyraAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms), Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySystemComponent);
	UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister()
	{
		return ULyraAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagRelationshipMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraAbilitySystemComponent_ClientNotifyAbilityFailed, "ClientNotifyAbilityFailed" }, // 3340585780
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraAbilitySystemComponent\n *\n *\x09""Base ability system component class used by this project.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraAbilitySystemComponent\n\n    Base ability system component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySystemComponent.h" },
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_ULyraAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::ClassParams = {
		&ULyraAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_ULyraAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilitySystemComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySystemComponent>()
	{
		return ULyraAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySystemComponent);
	ULyraAbilitySystemComponent::~ULyraAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySystemComponent, ULyraAbilitySystemComponent::StaticClass, TEXT("ULyraAbilitySystemComponent"), &Z_Registration_Info_UClass_ULyraAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySystemComponent), 3712749693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_1587758674(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
