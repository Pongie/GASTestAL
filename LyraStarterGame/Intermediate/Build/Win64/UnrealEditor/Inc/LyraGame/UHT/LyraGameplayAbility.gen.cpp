// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy;
	static UEnum* ELyraAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityActivationPolicy>()
	{
		return ELyraAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "ELyraAbilityActivationPolicy::OnInputTriggered", (int64)ELyraAbilityActivationPolicy::OnInputTriggered },
		{ "ELyraAbilityActivationPolicy::WhileInputActive", (int64)ELyraAbilityActivationPolicy::WhileInputActive },
		{ "ELyraAbilityActivationPolicy::OnSpawn", (int64)ELyraAbilityActivationPolicy::OnSpawn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELyraAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "ELyraAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "ELyraAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
		{ "ToolTip", "ELyraAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "ELyraAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraAbilityActivationPolicy",
		"ELyraAbilityActivationPolicy",
		Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAbilityActivationGroup;
	static UEnum* ELyraAbilityActivationGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAbilityActivationGroup"));
		}
		return Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityActivationGroup>()
	{
		return ELyraAbilityActivationGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enumerators[] = {
		{ "ELyraAbilityActivationGroup::Independent", (int64)ELyraAbilityActivationGroup::Independent },
		{ "ELyraAbilityActivationGroup::Exclusive_Replaceable", (int64)ELyraAbilityActivationGroup::Exclusive_Replaceable },
		{ "ELyraAbilityActivationGroup::Exclusive_Blocking", (int64)ELyraAbilityActivationGroup::Exclusive_Blocking },
		{ "ELyraAbilityActivationGroup::MAX", (int64)ELyraAbilityActivationGroup::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELyraAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "ELyraAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "ELyraAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "ELyraAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ELyraAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "ELyraAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraAbilityActivationGroup",
		"ELyraAbilityActivationGroup",
		Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup()
	{
		if (!Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraAbilityActivationGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage;
class UScriptStruct* FLyraAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilityMontageFailureMessage>()
{
	return FLyraAbilityMontageFailureMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FailureMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilityMontageFailureMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
		{ "Comment", "// All the reasons why this ability has failed\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "All the reasons why this ability has failed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData[] = {
		{ "Category", "LyraAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilityMontageFailureMessage",
		sizeof(FLyraAbilityMontageFailureMessage),
		alignof(FLyraAbilityMontageFailureMessage),
		Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execClearCameraMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCameraMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execSetCameraMode)
	{
		P_GET_OBJECT(UClass,Z_Param_CameraMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraMode(Z_Param_CameraMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execChangeActivationGroup)
	{
		P_GET_ENUM(ELyraAbilityActivationGroup,Z_Param_NewGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(ELyraAbilityActivationGroup(Z_Param_NewGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execCanChangeActivationGroup)
	{
		P_GET_ENUM(ELyraAbilityActivationGroup,Z_Param_NewGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(ELyraAbilityActivationGroup(Z_Param_NewGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execGetHeroComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraHeroComponent**)Z_Param__Result=P_THIS->GetHeroComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraCharacter**)Z_Param__Result=P_THIS->GetLyraCharacterFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execGetControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraPlayerControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraPlayerController**)Z_Param__Result=P_THIS->GetLyraPlayerControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility::execGetLyraAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	struct LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms
	{
		FGameplayTagContainer FailedReason;
	};
	static FName NAME_ULyraGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
	void ULyraGameplayAbility::K2_OnAbilityAdded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnAbilityAdded),NULL);
	}
	static FName NAME_ULyraGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
	void ULyraGameplayAbility::K2_OnAbilityRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnAbilityRemoved),NULL);
	}
	static FName NAME_ULyraGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
	void ULyraGameplayAbility::K2_OnPawnAvatarSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_K2_OnPawnAvatarSet),NULL);
	}
	static FName NAME_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
	void ULyraGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
	{
		LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
		Parms.FailedReason=FailedReason;
		const_cast<ULyraGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate),&Parms);
	}
	void ULyraGameplayAbility::StaticRegisterNativesULyraGameplayAbility()
	{
		UClass* Class = ULyraGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanChangeActivationGroup", &ULyraGameplayAbility::execCanChangeActivationGroup },
			{ "ChangeActivationGroup", &ULyraGameplayAbility::execChangeActivationGroup },
			{ "ClearCameraMode", &ULyraGameplayAbility::execClearCameraMode },
			{ "GetControllerFromActorInfo", &ULyraGameplayAbility::execGetControllerFromActorInfo },
			{ "GetHeroComponentFromActorInfo", &ULyraGameplayAbility::execGetHeroComponentFromActorInfo },
			{ "GetLyraAbilitySystemComponentFromActorInfo", &ULyraGameplayAbility::execGetLyraAbilitySystemComponentFromActorInfo },
			{ "GetLyraCharacterFromActorInfo", &ULyraGameplayAbility::execGetLyraCharacterFromActorInfo },
			{ "GetLyraPlayerControllerFromActorInfo", &ULyraGameplayAbility::execGetLyraPlayerControllerFromActorInfo },
			{ "SetCameraMode", &ULyraGameplayAbility::execSetCameraMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics
	{
		struct LyraGameplayAbility_eventCanChangeActivationGroup_Parms
		{
			ELyraAbilityActivationGroup NewGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(nullptr, 0) }; // 1377957843
	void Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Returns true if the requested activation group is a valid transition.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Returns true if the requested activation group is a valid transition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "CanChangeActivationGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::LyraGameplayAbility_eventCanChangeActivationGroup_Parms), Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics
	{
		struct LyraGameplayAbility_eventChangeActivationGroup_Parms
		{
			ELyraAbilityActivationGroup NewGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(nullptr, 0) }; // 1377957843
	void Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Tries to change the activation group.  Returns true if it successfully changed.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ChangeActivationGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::LyraGameplayAbility_eventChangeActivationGroup_Parms), Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Clears the ability's camera mode.  Automatically called if needed when the ability ends.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Clears the ability's camera mode.  Automatically called if needed when the ability ends." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics
	{
		struct LyraGameplayAbility_eventGetControllerFromActorInfo_Parms
		{
			AController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetControllerFromActorInfo_Parms), Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics
	{
		struct LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms
		{
			ULyraHeroComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULyraHeroComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetHeroComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetHeroComponentFromActorInfo_Parms), Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics
	{
		struct LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms
		{
			ULyraAbilitySystemComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraAbilitySystemComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraAbilitySystemComponentFromActorInfo_Parms), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics
	{
		struct LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms
		{
			ALyraCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALyraCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraCharacterFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraCharacterFromActorInfo_Parms), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics
	{
		struct LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms
		{
			ALyraPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "GetLyraPlayerControllerFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::LyraGameplayAbility_eventGetLyraPlayerControllerFromActorInfo_Parms), Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the ability fails to activate\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Called when the ability fails to activate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", nullptr, nullptr, sizeof(LyraGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics
	{
		struct LyraGameplayAbility_eventSetCameraMode_Parms
		{
			TSubclassOf<ULyraCameraMode>  CameraMode;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Sets the ability's camera mode.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Sets the ability's camera mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::LyraGameplayAbility_eventSetCameraMode_Parms), Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility);
	UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister()
	{
		return ULyraGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalCosts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancelation_MetaData[];
#endif
		static void NewProp_bLogCancelation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancelation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 819529311
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 2935472923
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 3982590436
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 3855869377
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetHeroComponentFromActorInfo, "GetHeroComponentFromActorInfo" }, // 1343504725
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraAbilitySystemComponentFromActorInfo, "GetLyraAbilitySystemComponentFromActorInfo" }, // 4104234962
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraCharacterFromActorInfo, "GetLyraCharacterFromActorInfo" }, // 3328140676
		{ &Z_Construct_UFunction_ULyraGameplayAbility_GetLyraPlayerControllerFromActorInfo, "GetLyraPlayerControllerFromActorInfo" }, // 839798858
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 338607901
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 1928442687
		{ &Z_Construct_UFunction_ULyraGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 3507712791
		{ &Z_Construct_UFunction_ULyraGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 445523506
		{ &Z_Construct_UFunction_ULyraGameplayAbility_SetCameraMode, "SetCameraMode" }, // 3346690792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayAbility\n *\n *\x09The base gameplay ability class used by this project.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base gameplay ability class used by this project." },
		{ "ToolTip", "ULyraGameplayAbility\n\n    The base gameplay ability class used by this project." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Lyra|Ability Activation" },
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Defines how this ability is meant to activate." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility, ActivationPolicy), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationPolicy, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData)) }; // 1448082564
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Lyra|Ability Activation" },
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility, ActivationGroup), Z_Construct_UEnum_LyraGame_ELyraAbilityActivationGroup, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_MetaData)) }; // 1377957843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraAbilityCost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to simple error messages\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to simple error messages" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData)) }; // 1225434376
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility.h" },
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
	};
#endif
	void Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_SetBit(void* Obj)
	{
		((ULyraGameplayAbility*)Obj)->bLogCancelation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation = { "bLogCancelation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraGameplayAbility), &Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_ActivationGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_AdditionalCosts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Statics::NewProp_bLogCancelation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Statics::ClassParams = {
		&ULyraGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayAbility.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility>()
	{
		return ULyraGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility);
	ULyraGameplayAbility::~ULyraGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::EnumInfo[] = {
		{ ELyraAbilityActivationPolicy_StaticEnum, TEXT("ELyraAbilityActivationPolicy"), &Z_Registration_Info_UEnum_ELyraAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1448082564U) },
		{ ELyraAbilityActivationGroup_StaticEnum, TEXT("ELyraAbilityActivationGroup"), &Z_Registration_Info_UEnum_ELyraAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1377957843U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ScriptStructInfo[] = {
		{ FLyraAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("LyraAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_LyraAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilityMontageFailureMessage), 273158578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility, ULyraGameplayAbility::StaticClass, TEXT("ULyraGameplayAbility"), &Z_Registration_Info_UClass_ULyraGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility), 2031601558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_146156632(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
