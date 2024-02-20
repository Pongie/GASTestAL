// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replays/LyraReplaySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplaySubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayListEntry();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayListEntry_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplaySubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplaySubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraReplayListEntry::execGetIsLive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsLive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplayListEntry::execGetNumViewers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumViewers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplayListEntry::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplayListEntry::execGetTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplayListEntry::execGetFriendlyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName();
		P_NATIVE_END;
	}
	void ULyraReplayListEntry::StaticRegisterNativesULyraReplayListEntry()
	{
		UClass* Class = ULyraReplayListEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDuration", &ULyraReplayListEntry::execGetDuration },
			{ "GetFriendlyName", &ULyraReplayListEntry::execGetFriendlyName },
			{ "GetIsLive", &ULyraReplayListEntry::execGetIsLive },
			{ "GetNumViewers", &ULyraReplayListEntry::execGetNumViewers },
			{ "GetTimestamp", &ULyraReplayListEntry::execGetTimestamp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics
	{
		struct LyraReplayListEntry_eventGetDuration_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplayListEntry_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/** The duration of the stream in MS */" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "The duration of the stream in MS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::LyraReplayListEntry_eventGetDuration_Parms), Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics
	{
		struct LyraReplayListEntry_eventGetFriendlyName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplayListEntry_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/** The UI friendly name of the stream */" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "The UI friendly name of the stream" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetFriendlyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::LyraReplayListEntry_eventGetFriendlyName_Parms), Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics
	{
		struct LyraReplayListEntry_eventGetIsLive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraReplayListEntry_eventGetIsLive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraReplayListEntry_eventGetIsLive_Parms), &Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/** True if the stream is live and the game hasn't completed yet */" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "True if the stream is live and the game hasn't completed yet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetIsLive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::LyraReplayListEntry_eventGetIsLive_Parms), Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics
	{
		struct LyraReplayListEntry_eventGetNumViewers_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplayListEntry_eventGetNumViewers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/** Number of viewers viewing this stream */" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "Number of viewers viewing this stream" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetNumViewers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::LyraReplayListEntry_eventGetNumViewers_Parms), Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics
	{
		struct LyraReplayListEntry_eventGetTimestamp_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplayListEntry_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "/** The date and time the stream was recorded */" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "The date and time the stream was recorded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplayListEntry, nullptr, "GetTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::LyraReplayListEntry_eventGetTimestamp_Parms), Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplayListEntry);
	UClass* Z_Construct_UClass_ULyraReplayListEntry_NoRegister()
	{
		return ULyraReplayListEntry::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplayListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplayListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraReplayListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetDuration, "GetDuration" }, // 1767270494
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetFriendlyName, "GetFriendlyName" }, // 1204956518
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetIsLive, "GetIsLive" }, // 885507183
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetNumViewers, "GetNumViewers" }, // 3452055948
		{ &Z_Construct_UFunction_ULyraReplayListEntry_GetTimestamp, "GetTimestamp" }, // 3612472799
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplayListEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An available replay\n" },
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "An available replay" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplayListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplayListEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplayListEntry_Statics::ClassParams = {
		&ULyraReplayListEntry::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplayListEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplayListEntry()
	{
		if (!Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton, Z_Construct_UClass_ULyraReplayListEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplayListEntry.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplayListEntry>()
	{
		return ULyraReplayListEntry::StaticClass();
	}
	ULyraReplayListEntry::ULyraReplayListEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplayListEntry);
	ULyraReplayListEntry::~ULyraReplayListEntry() {}
	void ULyraReplayList::StaticRegisterNativesULyraReplayList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplayList);
	UClass* Z_Construct_UClass_ULyraReplayList_NoRegister()
	{
		return ULyraReplayList::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplayList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplayList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplayList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Results of querying for replays\n" },
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "Results of querying for replays" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraReplayListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_MetaData[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplayList, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplayList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplayList_Statics::NewProp_Results,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplayList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplayList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplayList_Statics::ClassParams = {
		&ULyraReplayList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraReplayList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplayList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplayList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplayList()
	{
		if (!Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton, Z_Construct_UClass_ULyraReplayList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplayList.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplayList>()
	{
		return ULyraReplayList::StaticClass();
	}
	ULyraReplayList::ULyraReplayList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplayList);
	ULyraReplayList::~ULyraReplayList() {}
	DEFINE_FUNCTION(ULyraReplaySubsystem::execGetReplayCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReplayCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplaySubsystem::execGetReplayLengthInSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReplayLengthInSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplaySubsystem::execSeekInActiveReplay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekInActiveReplay(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraReplaySubsystem::execPlayReplay)
	{
		P_GET_OBJECT(ULyraReplayListEntry,Z_Param_Replay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReplay(Z_Param_Replay);
		P_NATIVE_END;
	}
	void ULyraReplaySubsystem::StaticRegisterNativesULyraReplaySubsystem()
	{
		UClass* Class = ULyraReplaySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReplayCurrentTime", &ULyraReplaySubsystem::execGetReplayCurrentTime },
			{ "GetReplayLengthInSeconds", &ULyraReplaySubsystem::execGetReplayLengthInSeconds },
			{ "PlayReplay", &ULyraReplaySubsystem::execPlayReplay },
			{ "SeekInActiveReplay", &ULyraReplaySubsystem::execSeekInActiveReplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics
	{
		struct LyraReplaySubsystem_eventGetReplayCurrentTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplaySubsystem_eventGetReplayCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "GetReplayCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::LyraReplaySubsystem_eventGetReplayCurrentTime_Parms), Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics
	{
		struct LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "GetReplayLengthInSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::LyraReplaySubsystem_eventGetReplayLengthInSeconds_Parms), Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics
	{
		struct LyraReplaySubsystem_eventPlayReplay_Parms
		{
			ULyraReplayListEntry* Replay;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Replay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::NewProp_Replay = { "Replay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplaySubsystem_eventPlayReplay_Parms, Replay), Z_Construct_UClass_ULyraReplayListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::NewProp_Replay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "PlayReplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::LyraReplaySubsystem_eventPlayReplay_Parms), Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics
	{
		struct LyraReplaySubsystem_eventSeekInActiveReplay_Parms
		{
			float TimeInSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraReplaySubsystem_eventSeekInActiveReplay_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replays" },
		{ "Comment", "//void DeleteReplay();\n" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
		{ "ToolTip", "void DeleteReplay();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraReplaySubsystem, nullptr, "SeekInActiveReplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::LyraReplaySubsystem_eventSeekInActiveReplay_Parms), Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplaySubsystem);
	UClass* Z_Construct_UClass_ULyraReplaySubsystem_NoRegister()
	{
		return ULyraReplaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraReplaySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayCurrentTime, "GetReplayCurrentTime" }, // 2895991537
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_GetReplayLengthInSeconds, "GetReplayLengthInSeconds" }, // 2956800118
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_PlayReplay, "PlayReplay" }, // 3211424823
		{ &Z_Construct_UFunction_ULyraReplaySubsystem_SeekInActiveReplay, "SeekInActiveReplay" }, // 2704022034
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Replays/LyraReplaySubsystem.h" },
		{ "ModuleRelativePath", "Replays/LyraReplaySubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplaySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplaySubsystem_Statics::ClassParams = {
		&ULyraReplaySubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplaySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplaySubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton, Z_Construct_UClass_ULyraReplaySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplaySubsystem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplaySubsystem>()
	{
		return ULyraReplaySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplaySubsystem);
	ULyraReplaySubsystem::~ULyraReplaySubsystem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplayListEntry, ULyraReplayListEntry::StaticClass, TEXT("ULyraReplayListEntry"), &Z_Registration_Info_UClass_ULyraReplayListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplayListEntry), 2546660439U) },
		{ Z_Construct_UClass_ULyraReplayList, ULyraReplayList::StaticClass, TEXT("ULyraReplayList"), &Z_Registration_Info_UClass_ULyraReplayList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplayList), 1675615520U) },
		{ Z_Construct_UClass_ULyraReplaySubsystem, ULyraReplaySubsystem::StaticClass, TEXT("ULyraReplaySubsystem"), &Z_Registration_Info_UClass_ULyraReplaySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplaySubsystem), 2321036207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_1368751375(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
