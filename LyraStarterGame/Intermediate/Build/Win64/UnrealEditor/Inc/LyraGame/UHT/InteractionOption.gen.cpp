// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractionOption.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionOption;
class UScriptStruct* FInteractionOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionOption, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InteractionOption"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionOption.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInteractionOption>()
{
	return FInteractionOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractionOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableTarget_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InteractableTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SubText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAbilityToGrant_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionAbilityToGrant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetAbilitySystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractionAbilityHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInteractionAbilityHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InteractionWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** The interactable target */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "The interactable target" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget = { "InteractableTarget", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, InteractableTarget), Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** Simple text the interaction might return */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "Simple text the interaction might return" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** Simple sub-text the interaction might return */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "Simple sub-text the interaction might return" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText = { "SubText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, SubText), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** The ability to grant the avatar when they get near interactable objects. */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "The ability to grant the avatar when they get near interactable objects." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant = { "InteractionAbilityToGrant", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, InteractionAbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** The ability system on the target that can be used for the TargetInteractionHandle and sending the event, if needed. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "The ability system on the target that can be used for the TargetInteractionHandle and sending the event, if needed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem = { "TargetAbilitySystem", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, TargetAbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** The ability spec to activate on the object for this option. */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "The ability spec to activate on the object for this option." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle = { "TargetInteractionAbilityHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, TargetInteractionAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "InteractionOption" },
		{ "Comment", "/** The widget to show for this kind of interaction. */" },
		{ "ModuleRelativePath", "Interaction/InteractionOption.h" },
		{ "ToolTip", "The widget to show for this kind of interaction." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionOption, InteractionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractableTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_SubText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionAbilityToGrant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetAbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_TargetInteractionAbilityHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionOption_Statics::NewProp_InteractionWidgetClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"InteractionOption",
		sizeof(FInteractionOption),
		alignof(FInteractionOption),
		Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton, Z_Construct_UScriptStruct_FInteractionOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractionOption.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics::ScriptStructInfo[] = {
		{ FInteractionOption::StaticStruct, Z_Construct_UScriptStruct_FInteractionOption_Statics::NewStructOps, TEXT("InteractionOption"), &Z_Registration_Info_UScriptStruct_InteractionOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionOption), 3431688996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_3210385694(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionOption_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
