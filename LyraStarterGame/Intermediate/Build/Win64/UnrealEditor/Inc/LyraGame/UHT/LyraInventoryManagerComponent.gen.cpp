// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryChangeMessage();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryEntry();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryList();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage;
class UScriptStruct* FLyraInventoryChangeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryChangeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryChangeMessage>()
{
	return FLyraInventoryChangeMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A message when an item is added to the inventory */" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ToolTip", "A message when an item is added to the inventory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryChangeMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ToolTip", "@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner = { "InventoryOwner", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryChangeMessage, InventoryOwner), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryChangeMessage, Instance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryChangeMessage, NewCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryChangeMessage, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_InventoryOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_NewCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewProp_Delta,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraInventoryChangeMessage",
		sizeof(FLyraInventoryChangeMessage),
		alignof(FLyraInventoryChangeMessage),
		Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryChangeMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLyraInventoryEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraInventoryEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryEntry;
class UScriptStruct* FLyraInventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryEntry>()
{
	return FLyraInventoryEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastObservedCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastObservedCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A single entry in an inventory */" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ToolTip", "A single entry in an inventory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryEntry, Instance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryEntry, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount = { "LastObservedCount", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryEntry, LastObservedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewProp_LastObservedCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"LyraInventoryEntry",
		sizeof(FLyraInventoryEntry),
		alignof(FLyraInventoryEntry),
		Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraInventoryEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLyraInventoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraInventoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraInventoryList;
class UScriptStruct* FLyraInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraInventoryList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraInventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_LyraInventoryList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraInventoryList>()
{
	return FLyraInventoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FLyraInventoryList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraInventoryList);
#endif
	struct Z_Construct_UScriptStruct_FLyraInventoryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of inventory items */" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ToolTip", "List of inventory items" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraInventoryList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraInventoryEntry, METADATA_PARAMS(nullptr, 0) }; // 2684668649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "// Replicated list of items\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ToolTip", "Replicated list of items" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_MetaData)) }; // 2684668649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraInventoryList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewProp_OwnerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraInventoryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"LyraInventoryList",
		sizeof(FLyraInventoryList),
		alignof(FLyraInventoryList),
		Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraInventoryList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraInventoryList()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton, Z_Construct_UScriptStruct_FLyraInventoryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraInventoryList.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execFindFirstItemStackByDefinition)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->FindFirstItemStackByDefinition(Z_Param_ItemDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execGetAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULyraInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execRemoveItemInstance)
	{
		P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemInstance(Z_Param_ItemInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execAddItemInstance)
	{
		P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemInstance(Z_Param_ItemInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execAddItemDefinition)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->AddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryManagerComponent::execCanAddItemDefinition)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
		P_NATIVE_END;
	}
	void ULyraInventoryManagerComponent::StaticRegisterNativesULyraInventoryManagerComponent()
	{
		UClass* Class = ULyraInventoryManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemDefinition", &ULyraInventoryManagerComponent::execAddItemDefinition },
			{ "AddItemInstance", &ULyraInventoryManagerComponent::execAddItemInstance },
			{ "CanAddItemDefinition", &ULyraInventoryManagerComponent::execCanAddItemDefinition },
			{ "FindFirstItemStackByDefinition", &ULyraInventoryManagerComponent::execFindFirstItemStackByDefinition },
			{ "GetAllItems", &ULyraInventoryManagerComponent::execGetAllItems },
			{ "RemoveItemInstance", &ULyraInventoryManagerComponent::execRemoveItemInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics
	{
		struct LyraInventoryManagerComponent_eventAddItemDefinition_Parms
		{
			TSubclassOf<ULyraInventoryItemDefinition>  ItemDef;
			int32 StackCount;
			ULyraInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "AddItemDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::LyraInventoryManagerComponent_eventAddItemDefinition_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics
	{
		struct LyraInventoryManagerComponent_eventAddItemInstance_Parms
		{
			ULyraInventoryItemInstance* ItemInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventAddItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "AddItemInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::LyraInventoryManagerComponent_eventAddItemInstance_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics
	{
		struct LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms
		{
			TSubclassOf<ULyraInventoryItemDefinition>  ItemDef;
			int32 StackCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms), &Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "CanAddItemDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::LyraInventoryManagerComponent_eventCanAddItemDefinition_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics
	{
		struct LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms
		{
			TSubclassOf<ULyraInventoryItemDefinition>  ItemDef;
			ULyraInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "FindFirstItemStackByDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::LyraInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics
	{
		struct LyraInventoryManagerComponent_eventGetAllItems_Parms
		{
			TArray<ULyraInventoryItemInstance*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::LyraInventoryManagerComponent_eventGetAllItems_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics
	{
		struct LyraInventoryManagerComponent_eventRemoveItemInstance_Parms
		{
			ULyraInventoryItemInstance* ItemInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryManagerComponent_eventRemoveItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryManagerComponent, nullptr, "RemoveItemInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::LyraInventoryManagerComponent_eventRemoveItemInstance_Parms), Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryManagerComponent);
	UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister()
	{
		return ULyraInventoryManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemDefinition, "AddItemDefinition" }, // 4038466817
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_AddItemInstance, "AddItemInstance" }, // 4053107394
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_CanAddItemDefinition, "CanAddItemDefinition" }, // 3911674166
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_FindFirstItemStackByDefinition, "FindFirstItemStackByDefinition" }, // 911238540
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_GetAllItems, "GetAllItems" }, // 3970302626
		{ &Z_Construct_UFunction_ULyraInventoryManagerComponent_RemoveItemInstance, "RemoveItemInstance" }, // 3212044154
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages an inventory\n */" },
		{ "IncludePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages an inventory" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInventoryManagerComponent, InventoryList), Z_Construct_UScriptStruct_FLyraInventoryList, METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList_MetaData)) }; // 382714034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::NewProp_InventoryList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::ClassParams = {
		&ULyraInventoryManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInventoryManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraInventoryManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryManagerComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryManagerComponent>()
	{
		return ULyraInventoryManagerComponent::StaticClass();
	}

	void ULyraInventoryManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InventoryList(TEXT("InventoryList"));

		const bool bIsValid = true
			&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraInventoryManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryManagerComponent);
	ULyraInventoryManagerComponent::~ULyraInventoryManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ScriptStructInfo[] = {
		{ FLyraInventoryChangeMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics::NewStructOps, TEXT("LyraInventoryChangeMessage"), &Z_Registration_Info_UScriptStruct_LyraInventoryChangeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryChangeMessage), 3598636892U) },
		{ FLyraInventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics::NewStructOps, TEXT("LyraInventoryEntry"), &Z_Registration_Info_UScriptStruct_LyraInventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryEntry), 2684668649U) },
		{ FLyraInventoryList::StaticStruct, Z_Construct_UScriptStruct_FLyraInventoryList_Statics::NewStructOps, TEXT("LyraInventoryList"), &Z_Registration_Info_UScriptStruct_LyraInventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraInventoryList), 382714034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryManagerComponent, ULyraInventoryManagerComponent::StaticClass, TEXT("ULyraInventoryManagerComponent"), &Z_Registration_Info_UClass_ULyraInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryManagerComponent), 3147432171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_1690209970(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
