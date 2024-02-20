// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayEffectContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

static_assert(std::is_polymorphic<FLyraGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FLyraGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext;
class UScriptStruct* FLyraGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraGameplayEffectContext>()
{
	return FLyraGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData[] = {
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraGameplayEffectContext, CartridgeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData[] = {
		{ "Comment", "/** Ability Source object (should implement ILyraAbilitySourceInterface). NOT replicated currently */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Ability Source object (should implement ILyraAbilitySourceInterface). NOT replicated currently" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_CartridgeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"LyraGameplayEffectContext",
		sizeof(FLyraGameplayEffectContext),
		alignof(FLyraGameplayEffectContext),
		Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics::ScriptStructInfo[] = {
		{ FLyraGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FLyraGameplayEffectContext_Statics::NewStructOps, TEXT("LyraGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_LyraGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraGameplayEffectContext), 2923153652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_892048984(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGameplayEffectContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
