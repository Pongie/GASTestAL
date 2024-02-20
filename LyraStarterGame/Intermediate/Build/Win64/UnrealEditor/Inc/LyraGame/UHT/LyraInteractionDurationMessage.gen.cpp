// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/LyraInteractionDurationMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInteractionDurationMessage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInteractionDurationMessage();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage;
class UScriptStruct* FLyraInteractionDurationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInteractionDurationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInteractionDurationMessage>()
{
	return FLyraInteractionDurationMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInteractionDurationMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "LyraInteractionDurationMessage" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInteractionDurationMessage, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "LyraInteractionDurationMessage" },
		{ "ModuleRelativePath", "Interaction/LyraInteractionDurationMessage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInteractionDurationMessage, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewProp_Duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraInteractionDurationMessage",
		sizeof(FLyraInteractionDurationMessage),
		alignof(FLyraInteractionDurationMessage),
		Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraInteractionDurationMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics::ScriptStructInfo[] = {
		{ FLyraInteractionDurationMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraInteractionDurationMessage_Statics::NewStructOps, TEXT("LyraInteractionDurationMessage"), &Z_Registration_Info_UScriptStruct_LyraInteractionDurationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInteractionDurationMessage), 1430216678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_1762666621(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_LyraInteractionDurationMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
