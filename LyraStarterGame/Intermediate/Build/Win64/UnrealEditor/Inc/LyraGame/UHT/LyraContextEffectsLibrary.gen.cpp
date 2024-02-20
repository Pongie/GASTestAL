// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/ContextEffects/LyraContextEffectsLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActiveContextEffects();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActiveContextEffects_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffects();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState;
	static UEnum* EContextEffectsLibraryLoadState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EContextEffectsLibraryLoadState"));
		}
		return Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EContextEffectsLibraryLoadState>()
	{
		return EContextEffectsLibraryLoadState_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enumerators[] = {
		{ "EContextEffectsLibraryLoadState::Unloaded", (int64)EContextEffectsLibraryLoadState::Unloaded },
		{ "EContextEffectsLibraryLoadState::Loading", (int64)EContextEffectsLibraryLoadState::Loading },
		{ "EContextEffectsLibraryLoadState::Loaded", (int64)EContextEffectsLibraryLoadState::Loaded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "Loaded.Comment", "/**\n *\n */" },
		{ "Loaded.Name", "EContextEffectsLibraryLoadState::Loaded" },
		{ "Loading.Comment", "/**\n *\n */" },
		{ "Loading.Name", "EContextEffectsLibraryLoadState::Loading" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
		{ "Unloaded.Comment", "/**\n *\n */" },
		{ "Unloaded.Name", "EContextEffectsLibraryLoadState::Unloaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EContextEffectsLibraryLoadState",
		"EContextEffectsLibraryLoadState",
		Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState()
	{
		if (!Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.InnerSingleton, Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffects;
class UScriptStruct* FLyraContextEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffects, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffects"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffects.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffects>()
{
	return FLyraContextEffects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraContextEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_EffectTag_MetaData[] = {
		{ "Category", "LyraContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffects, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_EffectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_EffectTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "LyraContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffects, Context), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Context_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundBase, /Script/Niagara.NiagaraSystem" },
		{ "Category", "LyraContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffects, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_EffectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewProp_Effects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraContextEffects",
		sizeof(FLyraContextEffects),
		alignof(FLyraContextEffects),
		Z_Construct_UScriptStruct_FLyraContextEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffects()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraContextEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffects.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraContextEffects.InnerSingleton;
	}
	void ULyraActiveContextEffects::StaticRegisterNativesULyraActiveContextEffects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActiveContextEffects);
	UClass* Z_Construct_UClass_ULyraActiveContextEffects_NoRegister()
	{
		return ULyraActiveContextEffects::StaticClass();
	}
	struct Z_Construct_UClass_ULyraActiveContextEffects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraSystems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraSystems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraActiveContextEffects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActiveContextEffects_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_EffectTag_MetaData[] = {
		{ "Category", "LyraActiveContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActiveContextEffects, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_EffectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_EffectTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "LyraActiveContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActiveContextEffects, Context), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Context_MetaData)) }; // 3057219007
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds_MetaData[] = {
		{ "Category", "LyraActiveContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActiveContextEffects, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems_Inner = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems_MetaData[] = {
		{ "Category", "LyraActiveContextEffects" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActiveContextEffects, NiagaraSystems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraActiveContextEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_EffectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_Sounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActiveContextEffects_Statics::NewProp_NiagaraSystems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraActiveContextEffects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActiveContextEffects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActiveContextEffects_Statics::ClassParams = {
		&ULyraActiveContextEffects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraActiveContextEffects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraActiveContextEffects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActiveContextEffects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraActiveContextEffects()
	{
		if (!Z_Registration_Info_UClass_ULyraActiveContextEffects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActiveContextEffects.OuterSingleton, Z_Construct_UClass_ULyraActiveContextEffects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraActiveContextEffects.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraActiveContextEffects>()
	{
		return ULyraActiveContextEffects::StaticClass();
	}
	ULyraActiveContextEffects::ULyraActiveContextEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActiveContextEffects);
	ULyraActiveContextEffects::~ULyraActiveContextEffects() {}
	struct Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraContextEffectLibraryLoadingComplete_Parms
		{
			TArray<ULyraActiveContextEffects*> LyraActiveContextEffects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LyraActiveContextEffects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LyraActiveContextEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::NewProp_LyraActiveContextEffects_Inner = { "LyraActiveContextEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraActiveContextEffects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::NewProp_LyraActiveContextEffects = { "LyraActiveContextEffects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraContextEffectLibraryLoadingComplete_Parms, LyraActiveContextEffects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::NewProp_LyraActiveContextEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::NewProp_LyraActiveContextEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraContextEffectLibraryLoadingComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::_Script_LyraGame_eventLyraContextEffectLibraryLoadingComplete_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraContextEffectLibraryLoadingComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraContextEffectLibraryLoadingComplete_DelegateWrapper(const FScriptDelegate& LyraContextEffectLibraryLoadingComplete, const TArray<ULyraActiveContextEffects*>& LyraActiveContextEffects)
{
	struct _Script_LyraGame_eventLyraContextEffectLibraryLoadingComplete_Parms
	{
		TArray<ULyraActiveContextEffects*> LyraActiveContextEffects;
	};
	_Script_LyraGame_eventLyraContextEffectLibraryLoadingComplete_Parms Parms;
	Parms.LyraActiveContextEffects=LyraActiveContextEffects;
	LyraContextEffectLibraryLoadingComplete.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULyraContextEffectsLibrary::execLoadEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraContextEffectsLibrary::execGetEffects)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Effect);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Context);
		P_GET_TARRAY_REF(USoundBase*,Z_Param_Out_Sounds);
		P_GET_TARRAY_REF(UNiagaraSystem*,Z_Param_Out_NiagaraSystems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEffects(Z_Param_Effect,Z_Param_Context,Z_Param_Out_Sounds,Z_Param_Out_NiagaraSystems);
		P_NATIVE_END;
	}
	void ULyraContextEffectsLibrary::StaticRegisterNativesULyraContextEffectsLibrary()
	{
		UClass* Class = ULyraContextEffectsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffects", &ULyraContextEffectsLibrary::execGetEffects },
			{ "LoadEffects", &ULyraContextEffectsLibrary::execLoadEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics
	{
		struct LyraContextEffectsLibrary_eventGetEffects_Parms
		{
			FGameplayTag Effect;
			FGameplayTagContainer Context;
			TArray<USoundBase*> Sounds;
			TArray<UNiagaraSystem*> NiagaraSystems;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sounds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraSystems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsLibrary_eventGetEffects_Parms, Effect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Effect_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsLibrary_eventGetEffects_Parms, Context), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Context_MetaData)) }; // 3057219007
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsLibrary_eventGetEffects_Parms, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_NiagaraSystems_Inner = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_NiagaraSystems = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsLibrary_eventGetEffects_Parms, NiagaraSystems), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Sounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_Sounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_NiagaraSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::NewProp_NiagaraSystems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsLibrary, nullptr, "GetEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::LyraContextEffectsLibrary_eventGetEffects_Parms), Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsLibrary, nullptr, "LoadEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsLibrary);
	UClass* Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister()
	{
		return ULyraContextEffectsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULyraContextEffectsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextEffects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveContextEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveContextEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveContextEffects;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectsLoadState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsLoadState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectsLoadState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectsLibrary_GetEffects, "GetEffects" }, // 335052495
		{ &Z_Construct_UFunction_ULyraContextEffectsLibrary_LoadEffects, "LoadEffects" }, // 3010301779
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects_Inner = { "ContextEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraContextEffects, METADATA_PARAMS(nullptr, 0) }; // 2482732808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects_MetaData[] = {
		{ "Category", "LyraContextEffectsLibrary" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects = { "ContextEffects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectsLibrary, ContextEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects_MetaData)) }; // 2482732808
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects_Inner = { "ActiveContextEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraActiveContextEffects_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects = { "ActiveContextEffects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectsLibrary, ActiveContextEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState = { "EffectsLoadState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectsLibrary, EffectsLoadState), Z_Construct_UEnum_LyraGame_EContextEffectsLibraryLoadState, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState_MetaData)) }; // 3709881200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ContextEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_ActiveContextEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::NewProp_EffectsLoadState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::ClassParams = {
		&ULyraContextEffectsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraContextEffectsLibrary()
	{
		if (!Z_Registration_Info_UClass_ULyraContextEffectsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsLibrary.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraContextEffectsLibrary.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsLibrary>()
	{
		return ULyraContextEffectsLibrary::StaticClass();
	}
	ULyraContextEffectsLibrary::ULyraContextEffectsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsLibrary);
	ULyraContextEffectsLibrary::~ULyraContextEffectsLibrary() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::EnumInfo[] = {
		{ EContextEffectsLibraryLoadState_StaticEnum, TEXT("EContextEffectsLibraryLoadState"), &Z_Registration_Info_UEnum_EContextEffectsLibraryLoadState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3709881200U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLyraContextEffects::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffects_Statics::NewStructOps, TEXT("LyraContextEffects"), &Z_Registration_Info_UScriptStruct_LyraContextEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffects), 2482732808U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActiveContextEffects, ULyraActiveContextEffects::StaticClass, TEXT("ULyraActiveContextEffects"), &Z_Registration_Info_UClass_ULyraActiveContextEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActiveContextEffects), 2903049945U) },
		{ Z_Construct_UClass_ULyraContextEffectsLibrary, ULyraContextEffectsLibrary::StaticClass, TEXT("ULyraContextEffectsLibrary"), &Z_Registration_Info_UClass_ULyraContextEffectsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsLibrary), 822364325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_3828903034(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
