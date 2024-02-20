// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "GameplayTagContainer.h"
#include "System/GameplayTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryItemInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraInventoryItemInstance::execFindFragmentByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_FragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULyraInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryItemInstance::execHasStatTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryItemInstance::execGetStatTagStackCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryItemInstance::execRemoveStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraInventoryItemInstance::execAddStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	void ULyraInventoryItemInstance::StaticRegisterNativesULyraInventoryItemInstance()
	{
		UClass* Class = ULyraInventoryItemInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStatTagStack", &ULyraInventoryItemInstance::execAddStatTagStack },
			{ "FindFragmentByClass", &ULyraInventoryItemInstance::execFindFragmentByClass },
			{ "GetStatTagStackCount", &ULyraInventoryItemInstance::execGetStatTagStackCount },
			{ "HasStatTag", &ULyraInventoryItemInstance::execHasStatTag },
			{ "RemoveStatTagStack", &ULyraInventoryItemInstance::execRemoveStatTagStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics
	{
		struct LyraInventoryItemInstance_eventAddStatTagStack_Parms
		{
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "AddStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::LyraInventoryItemInstance_eventAddStatTagStack_Parms), Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics
	{
		struct LyraInventoryItemInstance_eventFindFragmentByClass_Parms
		{
			TSubclassOf<ULyraInventoryItemFragment>  FragmentClass;
			const ULyraInventoryItemFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "FindFragmentByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::LyraInventoryItemInstance_eventFindFragmentByClass_Parms), Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics
	{
		struct LyraInventoryItemInstance_eventGetStatTagStackCount_Parms
		{
			FGameplayTag Tag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "GetStatTagStackCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::LyraInventoryItemInstance_eventGetStatTagStackCount_Parms), Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics
	{
		struct LyraInventoryItemInstance_eventHasStatTag_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraInventoryItemInstance_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraInventoryItemInstance_eventHasStatTag_Parms), &Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "HasStatTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::LyraInventoryItemInstance_eventHasStatTag_Parms), Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics
	{
		struct LyraInventoryItemInstance_eventRemoveStatTagStack_Parms
		{
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraInventoryItemInstance_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryItemInstance, nullptr, "RemoveStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::LyraInventoryItemInstance_eventRemoveStatTagStack_Parms), Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemInstance);
	UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister()
	{
		return ULyraInventoryItemInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryItemInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryItemInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraInventoryItemInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_AddStatTagStack, "AddStatTagStack" }, // 1664589289
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_FindFragmentByClass, "FindFragmentByClass" }, // 3662560136
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_GetStatTagStackCount, "GetStatTagStackCount" }, // 3631737202
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_HasStatTag, "HasStatTag" }, // 1785697656
		{ &Z_Construct_UFunction_ULyraInventoryItemInstance_RemoveStatTagStack, "RemoveStatTagStack" }, // 2050141911
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraInventoryItemInstance\n */" },
		{ "IncludePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraInventoryItemInstance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInventoryItemInstance, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags_MetaData)) }; // 685747391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef_MetaData[] = {
		{ "Comment", "// The item definition\n" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemInstance.h" },
		{ "ToolTip", "The item definition" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInventoryItemInstance, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_StatTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemInstance_Statics::NewProp_ItemDef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryItemInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemInstance_Statics::ClassParams = {
		&ULyraInventoryItemInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInventoryItemInstance()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryItemInstance.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemInstance>()
	{
		return ULyraInventoryItemInstance::StaticClass();
	}

	void ULyraInventoryItemInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StatTags(TEXT("StatTags"));
		static const FName Name_ItemDef(TEXT("ItemDef"));

		const bool bIsValid = true
			&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName()
			&& Name_ItemDef == ClassReps[(int32)ENetFields_Private::ItemDef].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraInventoryItemInstance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemInstance);
	ULyraInventoryItemInstance::~ULyraInventoryItemInstance() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryItemInstance, ULyraInventoryItemInstance::StaticClass, TEXT("ULyraInventoryItemInstance"), &Z_Registration_Info_UClass_ULyraInventoryItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemInstance), 2797566560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_800799910(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
