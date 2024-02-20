// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/LyraAbilitySet.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilitySet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility;
class UScriptStruct* FLyraAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GameplayAbility>()
{
	return FLyraAbilitySet_GameplayAbility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraAbilitySet_GameplayAbility\n *\n *\x09""Data used by the ability set to grant gameplay abilities.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "FLyraAbilitySet_GameplayAbility\n\n    Data used by the ability set to grant gameplay abilities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GameplayAbility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayAbility" },
		{ "Comment", "// Gameplay ability to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Gameplay ability to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayAbility" },
		{ "Comment", "// Level of ability to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Level of ability to grant." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LyraAbilitySet_GameplayAbility" },
		{ "Comment", "// Tag used to process input for the ability.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Tag used to process input for the ability." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilitySet_GameplayAbility",
		sizeof(FLyraAbilitySet_GameplayAbility),
		alignof(FLyraAbilitySet_GameplayAbility),
		Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect;
class UScriptStruct* FLyraAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GameplayEffect>()
{
	return FLyraAbilitySet_GameplayEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraAbilitySet_GameplayEffect\n *\n *\x09""Data used by the ability set to grant gameplay effects.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "FLyraAbilitySet_GameplayEffect\n\n    Data used by the ability set to grant gameplay effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GameplayEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayEffect" },
		{ "Comment", "// Gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData[] = {
		{ "Category", "LyraAbilitySet_GameplayEffect" },
		{ "Comment", "// Level of gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Level of gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilitySet_GameplayEffect",
		sizeof(FLyraAbilitySet_GameplayEffect),
		alignof(FLyraAbilitySet_GameplayEffect),
		Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet;
class UScriptStruct* FLyraAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_AttributeSet>()
{
	return FLyraAbilitySet_AttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraAbilitySet_AttributeSet\n *\n *\x09""Data used by the ability set to grant attribute sets.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "FLyraAbilitySet_AttributeSet\n\n    Data used by the ability set to grant attribute sets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_AttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "LyraAbilitySet_AttributeSet" },
		{ "Comment", "// Gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilitySet_AttributeSet",
		sizeof(FLyraAbilitySet_AttributeSet),
		alignof(FLyraAbilitySet_AttributeSet),
		Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles;
class UScriptStruct* FLyraAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAbilitySet_GrantedHandles>()
{
	return FLyraAbilitySet_GrantedHandles::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrantedAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLyraAbilitySet_GrantedHandles\n *\n *\x09""Data used to store handles to what has been granted by the ability set.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "FLyraAbilitySet_GrantedHandles\n\n    Data used to store handles to what has been granted by the ability set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAbilitySet_GrantedHandles>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData[] = {
		{ "Comment", "// Handles to the granted abilities.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Handles to the granted abilities." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData)) }; // 3562347300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData[] = {
		{ "Comment", "// Handles to the granted gameplay effects.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Handles to the granted gameplay effects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData)) }; // 3579869929
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData[] = {
		{ "Comment", "// Pointers to the granted attribute sets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ToolTip", "Pointers to the granted attribute sets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAbilitySet_GrantedHandles",
		sizeof(FLyraAbilitySet_GrantedHandles),
		alignof(FLyraAbilitySet_GrantedHandles),
		Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles.InnerSingleton;
	}
	void ULyraAbilitySet::StaticRegisterNativesULyraAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilitySet);
	UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister()
	{
		return ULyraAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraAbilitySet\n *\n *\x09Non-mutable data asset used to grant gameplay abilities and gameplay effects.\n */" },
		{ "IncludePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraAbilitySet\n\n    Non-mutable data asset used to grant gameplay abilities and gameplay effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility, METADATA_PARAMS(nullptr, 0) }; // 1830997923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "Ability" },
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData)) }; // 1830997923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 3761635407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData)) }; // 3761635407
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet, METADATA_PARAMS(nullptr, 0) }; // 3615854537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attribute Sets" },
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LyraAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_MetaData)) }; // 3615854537
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilitySet_Statics::NewProp_GrantedAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilitySet_Statics::ClassParams = {
		&ULyraAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAbilitySet()
	{
		if (!Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton, Z_Construct_UClass_ULyraAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAbilitySet.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAbilitySet>()
	{
		return ULyraAbilitySet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilitySet);
	ULyraAbilitySet::~ULyraAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ScriptStructInfo[] = {
		{ FLyraAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("LyraAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GameplayAbility), 1830997923U) },
		{ FLyraAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("LyraAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GameplayEffect), 3761635407U) },
		{ FLyraAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("LyraAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_AttributeSet), 3615854537U) },
		{ FLyraAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("LyraAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_LyraAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAbilitySet_GrantedHandles), 3036994569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilitySet, ULyraAbilitySet::StaticClass, TEXT("ULyraAbilitySet"), &Z_Registration_Info_UClass_ULyraAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilitySet), 2559675977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_2200437373(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
