// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "AbilitySystem/LyraAbilitySet.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEquipmentManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentList();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

static_assert(std::is_polymorphic<FLyraAppliedEquipmentEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraAppliedEquipmentEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry;
class UScriptStruct* FLyraAppliedEquipmentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAppliedEquipmentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAppliedEquipmentEntry>()
{
	return FLyraAppliedEquipmentEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A single piece of applied equipment */" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "A single piece of applied equipment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAppliedEquipmentEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition_MetaData[] = {
		{ "Comment", "// The equipment class that got equipped\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "The equipment class that got equipped" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, Instance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles_MetaData[] = {
		{ "Comment", "// Authority-only list of granted handles\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "Authority-only list of granted handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles = { "GrantedHandles", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedEquipmentEntry, GrantedHandles), Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles_MetaData)) }; // 3036994569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewProp_GrantedHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"LyraAppliedEquipmentEntry",
		sizeof(FLyraAppliedEquipmentEntry),
		alignof(FLyraAppliedEquipmentEntry),
		Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLyraEquipmentList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraEquipmentList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraEquipmentList;
class UScriptStruct* FLyraEquipmentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraEquipmentList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraEquipmentList"));
	}
	return Z_Registration_Info_UScriptStruct_LyraEquipmentList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraEquipmentList>()
{
	return FLyraEquipmentList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FLyraEquipmentList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraEquipmentList);
#endif
	struct Z_Construct_UScriptStruct_FLyraEquipmentList_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of applied equipment */" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "List of applied equipment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraEquipmentList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry, METADATA_PARAMS(nullptr, 0) }; // 3697773392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "// Replicated list of equipment entries\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "Replicated list of equipment entries" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraEquipmentList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_MetaData)) }; // 3697773392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraEquipmentList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewProp_OwnerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"LyraEquipmentList",
		sizeof(FLyraEquipmentList),
		alignof(FLyraEquipmentList),
		Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentList()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton, Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraEquipmentList.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execGetEquipmentInstancesOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_InstanceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULyraEquipmentInstance*>*)Z_Param__Result=P_THIS->GetEquipmentInstancesOfType(Z_Param_InstanceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execGetFirstInstanceOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_InstanceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->GetFirstInstanceOfType(Z_Param_InstanceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execUnequipItem)
	{
		P_GET_OBJECT(ULyraEquipmentInstance,Z_Param_ItemInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnequipItem(Z_Param_ItemInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentManagerComponent::execEquipItem)
	{
		P_GET_OBJECT(UClass,Z_Param_EquipmentDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->EquipItem(Z_Param_EquipmentDefinition);
		P_NATIVE_END;
	}
	void ULyraEquipmentManagerComponent::StaticRegisterNativesULyraEquipmentManagerComponent()
	{
		UClass* Class = ULyraEquipmentManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipItem", &ULyraEquipmentManagerComponent::execEquipItem },
			{ "GetEquipmentInstancesOfType", &ULyraEquipmentManagerComponent::execGetEquipmentInstancesOfType },
			{ "GetFirstInstanceOfType", &ULyraEquipmentManagerComponent::execGetFirstInstanceOfType },
			{ "UnequipItem", &ULyraEquipmentManagerComponent::execUnequipItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics
	{
		struct LyraEquipmentManagerComponent_eventEquipItem_Parms
		{
			TSubclassOf<ULyraEquipmentDefinition>  EquipmentDefinition;
			ULyraEquipmentInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventEquipItem_Parms, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventEquipItem_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "EquipItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::LyraEquipmentManagerComponent_eventEquipItem_Parms), Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics
	{
		struct LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms
		{
			TSubclassOf<ULyraEquipmentInstance>  InstanceType;
			TArray<ULyraEquipmentInstance*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns all equipped instances of a given type, or an empty array if none are found */" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "Returns all equipped instances of a given type, or an empty array if none are found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "GetEquipmentInstancesOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::LyraEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms), Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics
	{
		struct LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms
		{
			TSubclassOf<ULyraEquipmentInstance>  InstanceType;
			ULyraEquipmentInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the first equipped instance of a given type, or nullptr if none are found */" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ToolTip", "Returns the first equipped instance of a given type, or nullptr if none are found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "GetFirstInstanceOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::LyraEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms), Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics
	{
		struct LyraEquipmentManagerComponent_eventUnequipItem_Parms
		{
			ULyraEquipmentInstance* ItemInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentManagerComponent_eventUnequipItem_Parms, ItemInstance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentManagerComponent, nullptr, "UnequipItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::LyraEquipmentManagerComponent_eventUnequipItem_Parms), Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEquipmentManagerComponent);
	UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent_NoRegister()
	{
		return ULyraEquipmentManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_EquipItem, "EquipItem" }, // 3883918317
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetEquipmentInstancesOfType, "GetEquipmentInstancesOfType" }, // 1097522252
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_GetFirstInstanceOfType, "GetFirstInstanceOfType" }, // 642060092
		{ &Z_Construct_UFunction_ULyraEquipmentManagerComponent_UnequipItem, "UnequipItem" }, // 2942087790
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages equipment applied to a pawn\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages equipment applied to a pawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList = { "EquipmentList", nullptr, (EPropertyFlags)0x0040008000000030, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentManagerComponent, EquipmentList), Z_Construct_UScriptStruct_FLyraEquipmentList, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList_MetaData)) }; // 3049068055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::NewProp_EquipmentList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEquipmentManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::ClassParams = {
		&ULyraEquipmentManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::PropPointers),
		0,
		0x00A100A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraEquipmentManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraEquipmentManagerComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraEquipmentManagerComponent>()
	{
		return ULyraEquipmentManagerComponent::StaticClass();
	}

	void ULyraEquipmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquipmentList(TEXT("EquipmentList"));

		const bool bIsValid = true
			&& Name_EquipmentList == ClassReps[(int32)ENetFields_Private::EquipmentList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraEquipmentManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEquipmentManagerComponent);
	ULyraEquipmentManagerComponent::~ULyraEquipmentManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ScriptStructInfo[] = {
		{ FLyraAppliedEquipmentEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics::NewStructOps, TEXT("LyraAppliedEquipmentEntry"), &Z_Registration_Info_UScriptStruct_LyraAppliedEquipmentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAppliedEquipmentEntry), 3697773392U) },
		{ FLyraEquipmentList::StaticStruct, Z_Construct_UScriptStruct_FLyraEquipmentList_Statics::NewStructOps, TEXT("LyraEquipmentList"), &Z_Registration_Info_UScriptStruct_LyraEquipmentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraEquipmentList), 3049068055U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEquipmentManagerComponent, ULyraEquipmentManagerComponent::StaticClass, TEXT("ULyraEquipmentManagerComponent"), &Z_Registration_Info_UClass_ULyraEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEquipmentManagerComponent), 4113997446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_91724909(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
