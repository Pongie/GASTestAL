// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Reset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPlayerResetMessage();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameplayAbility_Reset::StaticRegisterNativesULyraGameplayAbility_Reset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Reset);
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset_NoRegister()
	{
		return ULyraGameplayAbility_Reset::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayAbility_Reset\n *\n *\x09Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n *\x09""Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only).\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraGameplayAbility_Reset\n\n    Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n    Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Reset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::ClassParams = {
		&ULyraGameplayAbility_Reset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Reset()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Reset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayAbility_Reset.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Reset>()
	{
		return ULyraGameplayAbility_Reset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Reset);
	ULyraGameplayAbility_Reset::~ULyraGameplayAbility_Reset() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage;
class UScriptStruct* FLyraPlayerResetMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraPlayerResetMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraPlayerResetMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraPlayerResetMessage>()
{
	return FLyraPlayerResetMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraPlayerResetMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData[] = {
		{ "Category", "LyraPlayerResetMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Reset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPlayerResetMessage, OwnerPlayerState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewProp_OwnerPlayerState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraPlayerResetMessage",
		sizeof(FLyraPlayerResetMessage),
		alignof(FLyraPlayerResetMessage),
		Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraPlayerResetMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ScriptStructInfo[] = {
		{ FLyraPlayerResetMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraPlayerResetMessage_Statics::NewStructOps, TEXT("LyraPlayerResetMessage"), &Z_Registration_Info_UScriptStruct_LyraPlayerResetMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraPlayerResetMessage), 3271741855U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Reset, ULyraGameplayAbility_Reset::StaticClass, TEXT("ULyraGameplayAbility_Reset"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Reset), 1610614744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_1494006260(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Reset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
