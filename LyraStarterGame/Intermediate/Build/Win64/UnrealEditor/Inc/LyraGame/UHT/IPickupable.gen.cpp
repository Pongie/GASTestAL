// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/IPickupable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPickupable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UPickupable();
	LYRAGAME_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UPickupableStatics();
	LYRAGAME_API UClass* Z_Construct_UClass_UPickupableStatics_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryPickup();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickupInstance();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickupTemplate();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PickupTemplate;
class UScriptStruct* FPickupTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupTemplate, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PickupTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPickupTemplate>()
{
	return FPickupTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPickupTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickupTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "PickupTemplate" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPickupTemplate, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef_MetaData[] = {
		{ "Category", "PickupTemplate" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPickupTemplate, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"PickupTemplate",
		sizeof(FPickupTemplate),
		alignof(FPickupTemplate),
		Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPickupTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPickupTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton, Z_Construct_UScriptStruct_FPickupTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PickupInstance;
class UScriptStruct* FPickupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupInstance, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PickupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPickupInstance>()
{
	return FPickupInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPickupInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickupInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickupInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "PickupInstance" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPickupInstance, Item), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickupInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"PickupInstance",
		sizeof(FPickupInstance),
		alignof(FPickupInstance),
		Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPickupInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPickupInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton, Z_Construct_UScriptStruct_FPickupInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryPickup;
class UScriptStruct* FInventoryPickup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryPickup, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InventoryPickup"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInventoryPickup>()
{
	return FInventoryPickup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryPickup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Templates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Templates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Templates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryPickup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryPickup>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPickupInstance, METADATA_PARAMS(nullptr, 0) }; // 1006154798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "InventoryPickup" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventoryPickup, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_MetaData)) }; // 1006154798
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_Inner = { "Templates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPickupTemplate, METADATA_PARAMS(nullptr, 0) }; // 3258334358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_MetaData[] = {
		{ "Category", "InventoryPickup" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates = { "Templates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventoryPickup, Templates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_MetaData)) }; // 3258334358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"InventoryPickup",
		sizeof(FInventoryPickup),
		alignof(FInventoryPickup),
		Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryPickup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryPickup()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton, Z_Construct_UScriptStruct_FInventoryPickup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton;
	}
	DEFINE_FUNCTION(IPickupable::execGetPickupInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInventoryPickup*)Z_Param__Result=P_THIS->GetPickupInventory();
		P_NATIVE_END;
	}
	void UPickupable::StaticRegisterNativesUPickupable()
	{
		UClass* Class = UPickupable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPickupInventory", &IPickupable::execGetPickupInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics
	{
		struct Pickupable_eventGetPickupInventory_Parms
		{
			FInventoryPickup ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pickupable_eventGetPickupInventory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryPickup, METADATA_PARAMS(nullptr, 0) }; // 2488838795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupable, nullptr, "GetPickupInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Pickupable_eventGetPickupInventory_Parms), Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupable_GetPickupInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupable);
	UClass* Z_Construct_UClass_UPickupable_NoRegister()
	{
		return UPickupable::StaticClass();
	}
	struct Z_Construct_UClass_UPickupable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupable_GetPickupInventory, "GetPickupInventory" }, // 2614400623
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupable_Statics::ClassParams = {
		&UPickupable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupable()
	{
		if (!Z_Registration_Info_UClass_UPickupable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupable.OuterSingleton, Z_Construct_UClass_UPickupable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupable.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UPickupable>()
	{
		return UPickupable::StaticClass();
	}
	UPickupable::UPickupable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupable);
	UPickupable::~UPickupable() {}
	DEFINE_FUNCTION(UPickupableStatics::execAddPickupToInventory)
	{
		P_GET_OBJECT(ULyraInventoryManagerComponent,Z_Param_InventoryComponent);
		P_GET_TINTERFACE(IPickupable,Z_Param_Pickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPickupableStatics::AddPickupToInventory(Z_Param_InventoryComponent,Z_Param_Pickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPickupableStatics::execGetFirstPickupableFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IPickupable>*)Z_Param__Result=UPickupableStatics::GetFirstPickupableFromActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UPickupableStatics::StaticRegisterNativesUPickupableStatics()
	{
		UClass* Class = UPickupableStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPickupToInventory", &UPickupableStatics::execAddPickupToInventory },
			{ "GetFirstPickupableFromActor", &UPickupableStatics::execGetFirstPickupableFromActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics
	{
		struct PickupableStatics_eventAddPickupToInventory_Parms
		{
			ULyraInventoryManagerComponent* InventoryComponent;
			TScriptInterface<IPickupable> Pickup;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Pickup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupableStatics_eventAddPickupToInventory_Parms, InventoryComponent), Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupableStatics_eventAddPickupToInventory_Parms, Pickup), Z_Construct_UClass_UPickupable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_Pickup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
		{ "WorldContext", "Ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupableStatics, nullptr, "AddPickupToInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PickupableStatics_eventAddPickupToInventory_Parms), Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics
	{
		struct PickupableStatics_eventGetFirstPickupableFromActor_Parms
		{
			AActor* Actor;
			TScriptInterface<IPickupable> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupableStatics_eventGetFirstPickupableFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupableStatics_eventGetFirstPickupableFromActor_Parms, ReturnValue), Z_Construct_UClass_UPickupable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupableStatics, nullptr, "GetFirstPickupableFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PickupableStatics_eventGetFirstPickupableFromActor_Parms), Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupableStatics);
	UClass* Z_Construct_UClass_UPickupableStatics_NoRegister()
	{
		return UPickupableStatics::StaticClass();
	}
	struct Z_Construct_UClass_UPickupableStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupableStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupableStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory, "AddPickupToInventory" }, // 3986808712
		{ &Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor, "GetFirstPickupableFromActor" }, // 271542353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupableStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "IncludePath", "Inventory/IPickupable.h" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupableStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupableStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupableStatics_Statics::ClassParams = {
		&UPickupableStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupableStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupableStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupableStatics()
	{
		if (!Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton, Z_Construct_UClass_UPickupableStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UPickupableStatics>()
	{
		return UPickupableStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupableStatics);
	UPickupableStatics::~UPickupableStatics() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ScriptStructInfo[] = {
		{ FPickupTemplate::StaticStruct, Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewStructOps, TEXT("PickupTemplate"), &Z_Registration_Info_UScriptStruct_PickupTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPickupTemplate), 3258334358U) },
		{ FPickupInstance::StaticStruct, Z_Construct_UScriptStruct_FPickupInstance_Statics::NewStructOps, TEXT("PickupInstance"), &Z_Registration_Info_UScriptStruct_PickupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPickupInstance), 1006154798U) },
		{ FInventoryPickup::StaticStruct, Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewStructOps, TEXT("InventoryPickup"), &Z_Registration_Info_UScriptStruct_InventoryPickup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryPickup), 2488838795U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupable, UPickupable::StaticClass, TEXT("UPickupable"), &Z_Registration_Info_UClass_UPickupable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupable), 3181764864U) },
		{ Z_Construct_UClass_UPickupableStatics, UPickupableStatics::StaticClass, TEXT("UPickupableStatics"), &Z_Registration_Info_UClass_UPickupableStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupableStatics), 4114840851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_3278010450(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
