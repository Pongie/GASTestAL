// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/LyraVerbMessageReplication.h"
#include "Messages/LyraVerbMessage.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraVerbMessageReplication() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplication();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

static_assert(std::is_polymorphic<FLyraVerbMessageReplicationEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraVerbMessageReplicationEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry;
class UScriptStruct* FLyraVerbMessageReplicationEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraVerbMessageReplicationEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraVerbMessageReplicationEntry>()
{
	return FLyraVerbMessageReplicationEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents one verb message\n */" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
		{ "ToolTip", "Represents one verb message" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraVerbMessageReplicationEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraVerbMessageReplicationEntry, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message_MetaData)) }; // 3769208837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"LyraVerbMessageReplicationEntry",
		sizeof(FLyraVerbMessageReplicationEntry),
		alignof(FLyraVerbMessageReplicationEntry),
		Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLyraVerbMessageReplication>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraVerbMessageReplication cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication;
class UScriptStruct* FLyraVerbMessageReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraVerbMessageReplication, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraVerbMessageReplication"));
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraVerbMessageReplication>()
{
	return FLyraVerbMessageReplication::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FLyraVerbMessageReplication);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraVerbMessageReplication);
#endif
	struct Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Container of verb messages to replicate */" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
		{ "ToolTip", "Container of verb messages to replicate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraVerbMessageReplication>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_Inner = { "CurrentMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry, METADATA_PARAMS(nullptr, 0) }; // 3005717010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_MetaData[] = {
		{ "Comment", "// Replicated list of gameplay tag stacks\n" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
		{ "ToolTip", "Replicated list of gameplay tag stacks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages = { "CurrentMessages", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraVerbMessageReplication, CurrentMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_MetaData)) }; // 3005717010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "// Owner (for a route to a world)\n" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageReplication.h" },
		{ "ToolTip", "Owner (for a route to a world)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraVerbMessageReplication, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_CurrentMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"LyraVerbMessageReplication",
		sizeof(FLyraVerbMessageReplication),
		alignof(FLyraVerbMessageReplication),
		Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessageReplication()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton, Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics::ScriptStructInfo[] = {
		{ FLyraVerbMessageReplicationEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraVerbMessageReplicationEntry_Statics::NewStructOps, TEXT("LyraVerbMessageReplicationEntry"), &Z_Registration_Info_UScriptStruct_LyraVerbMessageReplicationEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraVerbMessageReplicationEntry), 3005717010U) },
		{ FLyraVerbMessageReplication::StaticStruct, Z_Construct_UScriptStruct_FLyraVerbMessageReplication_Statics::NewStructOps, TEXT("LyraVerbMessageReplication"), &Z_Registration_Info_UScriptStruct_LyraVerbMessageReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraVerbMessageReplication), 1814649718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_3994060102(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageReplication_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
