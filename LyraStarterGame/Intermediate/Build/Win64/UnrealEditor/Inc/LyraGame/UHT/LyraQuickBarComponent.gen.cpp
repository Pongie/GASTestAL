// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraQuickBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraQuickBarComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraQuickBarComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraQuickBarComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraQuickBarComponent::execOnRep_ActiveSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ActiveSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execOnRep_Slots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execRemoveItemFromSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->RemoveItemFromSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execAddItemToSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToSlot(Z_Param_SlotIndex,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execGetNextFreeItemSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextFreeItemSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execGetActiveSlotItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->GetActiveSlotItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execGetActiveSlotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveSlotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execGetSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULyraInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execSetActiveSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveSlotIndex_Implementation(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execCycleActiveSlotBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleActiveSlotBackward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraQuickBarComponent::execCycleActiveSlotForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleActiveSlotForward();
		P_NATIVE_END;
	}
	struct LyraQuickBarComponent_eventSetActiveSlotIndex_Parms
	{
		int32 NewIndex;
	};
	static FName NAME_ULyraQuickBarComponent_SetActiveSlotIndex = FName(TEXT("SetActiveSlotIndex"));
	void ULyraQuickBarComponent::SetActiveSlotIndex(int32 NewIndex)
	{
		LyraQuickBarComponent_eventSetActiveSlotIndex_Parms Parms;
		Parms.NewIndex=NewIndex;
		ProcessEvent(FindFunctionChecked(NAME_ULyraQuickBarComponent_SetActiveSlotIndex),&Parms);
	}
	void ULyraQuickBarComponent::StaticRegisterNativesULyraQuickBarComponent()
	{
		UClass* Class = ULyraQuickBarComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToSlot", &ULyraQuickBarComponent::execAddItemToSlot },
			{ "CycleActiveSlotBackward", &ULyraQuickBarComponent::execCycleActiveSlotBackward },
			{ "CycleActiveSlotForward", &ULyraQuickBarComponent::execCycleActiveSlotForward },
			{ "GetActiveSlotIndex", &ULyraQuickBarComponent::execGetActiveSlotIndex },
			{ "GetActiveSlotItem", &ULyraQuickBarComponent::execGetActiveSlotItem },
			{ "GetNextFreeItemSlot", &ULyraQuickBarComponent::execGetNextFreeItemSlot },
			{ "GetSlots", &ULyraQuickBarComponent::execGetSlots },
			{ "OnRep_ActiveSlotIndex", &ULyraQuickBarComponent::execOnRep_ActiveSlotIndex },
			{ "OnRep_Slots", &ULyraQuickBarComponent::execOnRep_Slots },
			{ "RemoveItemFromSlot", &ULyraQuickBarComponent::execRemoveItemFromSlot },
			{ "SetActiveSlotIndex", &ULyraQuickBarComponent::execSetActiveSlotIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics
	{
		struct LyraQuickBarComponent_eventAddItemToSlot_Parms
		{
			int32 SlotIndex;
			ULyraInventoryItemInstance* Item;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventAddItemToSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "AddItemToSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::LyraQuickBarComponent_eventAddItemToSlot_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "CycleActiveSlotBackward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "CycleActiveSlotForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics
	{
		struct LyraQuickBarComponent_eventGetActiveSlotIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventGetActiveSlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "GetActiveSlotIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::LyraQuickBarComponent_eventGetActiveSlotIndex_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics
	{
		struct LyraQuickBarComponent_eventGetActiveSlotItem_Parms
		{
			ULyraInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventGetActiveSlotItem_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "GetActiveSlotItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::LyraQuickBarComponent_eventGetActiveSlotItem_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics
	{
		struct LyraQuickBarComponent_eventGetNextFreeItemSlot_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventGetNextFreeItemSlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "GetNextFreeItemSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::LyraQuickBarComponent_eventGetNextFreeItemSlot_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics
	{
		struct LyraQuickBarComponent_eventGetSlots_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventGetSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "GetSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::LyraQuickBarComponent_eventGetSlots_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "OnRep_ActiveSlotIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "OnRep_Slots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics
	{
		struct LyraQuickBarComponent_eventRemoveItemFromSlot_Parms
		{
			int32 SlotIndex;
			ULyraInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventRemoveItemFromSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventRemoveItemFromSlot_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "RemoveItemFromSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::LyraQuickBarComponent_eventRemoveItemFromSlot_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraQuickBarComponent_eventSetActiveSlotIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraQuickBarComponent, nullptr, "SetActiveSlotIndex", nullptr, nullptr, sizeof(LyraQuickBarComponent_eventSetActiveSlotIndex_Parms), Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraQuickBarComponent);
	UClass* Z_Construct_UClass_ULyraQuickBarComponent_NoRegister()
	{
		return ULyraQuickBarComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraQuickBarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EquippedItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraQuickBarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControllerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraQuickBarComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_AddItemToSlot, "AddItemToSlot" }, // 2949071800
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotBackward, "CycleActiveSlotBackward" }, // 3485243530
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_CycleActiveSlotForward, "CycleActiveSlotForward" }, // 1790770180
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotIndex, "GetActiveSlotIndex" }, // 2967375075
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_GetActiveSlotItem, "GetActiveSlotItem" }, // 3302854205
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_GetNextFreeItemSlot, "GetNextFreeItemSlot" }, // 2878109479
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_GetSlots, "GetSlots" }, // 2814307221
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_ActiveSlotIndex, "OnRep_ActiveSlotIndex" }, // 2349546723
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_OnRep_Slots, "OnRep_Slots" }, // 1380155459
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_RemoveItemFromSlot, "RemoveItemFromSlot" }, // 349500398
		{ &Z_Construct_UFunction_ULyraQuickBarComponent_SetActiveSlotIndex, "SetActiveSlotIndex" }, // 3412956096
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraQuickBarComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraQuickBarComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraQuickBarComponent, NumSlots), METADATA_PARAMS(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_NumSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_NumSlots_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots = { "Slots", "OnRep_Slots", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraQuickBarComponent, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_ActiveSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_ActiveSlotIndex = { "ActiveSlotIndex", "OnRep_ActiveSlotIndex", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraQuickBarComponent, ActiveSlotIndex), METADATA_PARAMS(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_ActiveSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_ActiveSlotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_EquippedItem_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraQuickBarComponent, EquippedItem), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_EquippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_EquippedItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraQuickBarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_NumSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_ActiveSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraQuickBarComponent_Statics::NewProp_EquippedItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraQuickBarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraQuickBarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraQuickBarComponent_Statics::ClassParams = {
		&ULyraQuickBarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraQuickBarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraQuickBarComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraQuickBarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraQuickBarComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraQuickBarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraQuickBarComponent.OuterSingleton, Z_Construct_UClass_ULyraQuickBarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraQuickBarComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraQuickBarComponent>()
	{
		return ULyraQuickBarComponent::StaticClass();
	}

	void ULyraQuickBarComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Slots(TEXT("Slots"));
		static const FName Name_ActiveSlotIndex(TEXT("ActiveSlotIndex"));

		const bool bIsValid = true
			&& Name_Slots == ClassReps[(int32)ENetFields_Private::Slots].Property->GetFName()
			&& Name_ActiveSlotIndex == ClassReps[(int32)ENetFields_Private::ActiveSlotIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraQuickBarComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraQuickBarComponent);
	ULyraQuickBarComponent::~ULyraQuickBarComponent() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage;
class UScriptStruct* FLyraQuickBarSlotsChangedMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraQuickBarSlotsChangedMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraQuickBarSlotsChangedMessage>()
{
	return FLyraQuickBarSlotsChangedMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraQuickBarSlotsChangedMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQuickBarSlotsChangedMessage, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQuickBarSlotsChangedMessage, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewProp_Slots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraQuickBarSlotsChangedMessage",
		sizeof(FLyraQuickBarSlotsChangedMessage),
		alignof(FLyraQuickBarSlotsChangedMessage),
		Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage;
class UScriptStruct* FLyraQuickBarActiveIndexChangedMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraQuickBarActiveIndexChangedMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraQuickBarActiveIndexChangedMessage>()
{
	return FLyraQuickBarActiveIndexChangedMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraQuickBarActiveIndexChangedMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQuickBarActiveIndexChangedMessage, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_ActiveIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Equipment/LyraQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_ActiveIndex = { "ActiveIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQuickBarActiveIndexChangedMessage, ActiveIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_ActiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_ActiveIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewProp_ActiveIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraQuickBarActiveIndexChangedMessage",
		sizeof(FLyraQuickBarActiveIndexChangedMessage),
		alignof(FLyraQuickBarActiveIndexChangedMessage),
		Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ScriptStructInfo[] = {
		{ FLyraQuickBarSlotsChangedMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraQuickBarSlotsChangedMessage_Statics::NewStructOps, TEXT("LyraQuickBarSlotsChangedMessage"), &Z_Registration_Info_UScriptStruct_LyraQuickBarSlotsChangedMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraQuickBarSlotsChangedMessage), 4093974028U) },
		{ FLyraQuickBarActiveIndexChangedMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraQuickBarActiveIndexChangedMessage_Statics::NewStructOps, TEXT("LyraQuickBarActiveIndexChangedMessage"), &Z_Registration_Info_UScriptStruct_LyraQuickBarActiveIndexChangedMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraQuickBarActiveIndexChangedMessage), 3892234029U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraQuickBarComponent, ULyraQuickBarComponent::StaticClass, TEXT("ULyraQuickBarComponent"), &Z_Registration_Info_UClass_ULyraQuickBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraQuickBarComponent), 2765340216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_1875293403(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraQuickBarComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
