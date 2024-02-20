// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/LyraNotificationMessage.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNotificationMessage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraNotificationMessage();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraNotificationMessage;
class UScriptStruct* FLyraNotificationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraNotificationMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraNotificationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraNotificationMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraNotificationMessage>()
{
	return FLyraNotificationMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PayloadMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PayloadObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A message destined for a transient log (e.g., an elimination feed or inventory pickup stream)\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "A message destined for a transient log (e.g., an elimination feed or inventory pickup stream)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraNotificationMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel_MetaData[] = {
		{ "Category", "Notification" },
		{ "Comment", "// The destination channel\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "The destination channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel = { "TargetChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNotificationMessage, TargetChannel), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "Notification" },
		{ "Comment", "// The target player (if none is set then it will display for all local players)\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "The target player (if none is set then it will display for all local players)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNotificationMessage, TargetPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage_MetaData[] = {
		{ "Category", "Notification" },
		{ "Comment", "// The message to display\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "The message to display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage = { "PayloadMessage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNotificationMessage, PayloadMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag_MetaData[] = {
		{ "Category", "Notification" },
		{ "Comment", "// Extra payload specific to the target channel (e.g., a style or definition asset)\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "Extra payload specific to the target channel (e.g., a style or definition asset)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag = { "PayloadTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNotificationMessage, PayloadTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Notification" },
		{ "Comment", "// Extra payload specific to the target channel (e.g., a style or definition asset)\n" },
		{ "ModuleRelativePath", "Messages/LyraNotificationMessage.h" },
		{ "ToolTip", "Extra payload specific to the target channel (e.g., a style or definition asset)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNotificationMessage, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_TargetPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewProp_PayloadObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraNotificationMessage",
		sizeof(FLyraNotificationMessage),
		alignof(FLyraNotificationMessage),
		Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraNotificationMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraNotificationMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics::ScriptStructInfo[] = {
		{ FLyraNotificationMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraNotificationMessage_Statics::NewStructOps, TEXT("LyraNotificationMessage"), &Z_Registration_Info_UScriptStruct_LyraNotificationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraNotificationMessage), 538137369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_884293303(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraNotificationMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
